// Copyright 2019 ElgSoft. All rights reserved.


#include "ElgEditorBP_PluginManager.h"
#include <Interfaces/IPluginManager.h>
#include <Misc/Paths.h>
#include <Interfaces/IProjectManager.h>
#include <GameProjectGeneration/Public/GameProjectGenerationModule.h>
#include <HAL/PlatformFilemanager.h>
#include <GenericPlatform/GenericPlatformFile.h>
#include <IImageWrapperModule.h>
#include <IImageWrapper.h>
#include <Misc/FileHelper.h>
#include <Engine/Texture2D.h>

#include <UATHelper/Public/IUATHelperModule.h>
#include <EditorStyleSet.h>

#define LOCTEXT_NAMESPACE "ElgEditorPluginManager"

int32 UElgEditorBP_PluginManager::GetPluginCount()
{
	int32 count = 0;
	for (TSharedRef<IPlugin> Plugin : IPluginManager::Get().GetDiscoveredPlugins())
	{
		if (Plugin->IsHidden())
		{
			continue;
		}

		count++;
	}
	return count;
}


void UElgEditorBP_PluginManager::PackagePlugin(const FString PluginName, FString OutputDirectory, EBPEditorOutputResultBranch& Branches)
{
	Branches = EBPEditorOutputResultBranch::Failed;
	if (TSharedPtr<IPlugin> plugin = IPluginManager::Get().FindPlugin(PluginName)) {
		// check if we are allowed to do this!
		if (plugin->GetType() != EPluginType::Project) {
			UE_LOG(LogTemp, Error, TEXT("PackagePlugin: You can only package Project plugins...sorry!"));
			return;
		}

		if (!FPaths::DirectoryExists(OutputDirectory)) {
			UE_LOG(LogTemp, Error, TEXT("PackagePlugin: The OutputDirectory [%s] dont exist..."), *OutputDirectory);
			return;
		}

		// Ensure path is full rather than relative (for macs)
		FString descriptorFilename = plugin->GetDescriptorFileName();
		FString descriptorFullPath = FPaths::ConvertRelativePathToFull(descriptorFilename);
		OutputDirectory = FPaths::Combine(OutputDirectory, plugin->GetName());
		FString commandLine = FString::Printf(TEXT("BuildPlugin -Plugin=\"%s\" -Package=\"%s\" -CreateSubFolder"), *descriptorFullPath, *OutputDirectory);

	#if PLATFORM_WINDOWS
		FText platformName = LOCTEXT("PlatformName_Windows", "Windows");
	#elif PLATFORM_MAC
		FText platformName = LOCTEXT("PlatformName_Mac", "Mac");
	#elif PLATFORM_LINUX
		FText platformName = LOCTEXT("PlatformName_Linux", "Linux");
	#else
		FText platformName = LOCTEXT("PlatformName_Other", "Other OS");
	#endif

		IUATHelperModule::Get().CreateUatTask(commandLine, platformName, LOCTEXT("PackagePluginTaskName", "Packaging Plugin"),
			LOCTEXT("PackagePluginTaskShortName", "Package Plugin Task"), FEditorStyle::GetBrush(TEXT("MainFrame.CookContent")));
		Branches = EBPEditorOutputResultBranch::Success;
	}
}



#pragma region Description

void UElgEditorBP_PluginManager::GetPluginDescriptions(TArray<FString>& PluginNames, TMap<FString, FS_ElgPluginDescriptor>& PluginMap)
{
	PluginNames.Empty();
	PluginMap.Empty();

	for (TSharedRef<IPlugin> plugin : IPluginManager::Get().GetDiscoveredPlugins())
	{
		if (plugin->IsHidden()) continue;

		FString pluginName = plugin->GetDescriptor().FriendlyName;
		PluginNames.Add(pluginName);	
		PluginMap.Add(pluginName, CreateDescriptor(plugin));
	}

	PluginNames.Sort();
}


void UElgEditorBP_PluginManager::GetPluginDescription(const FString PluginName, FS_ElgPluginDescriptor& Descriptor, EBPEditorOutputValidBranch& Branches)
{	
	if (TSharedPtr<IPlugin> plugin = IPluginManager::Get().FindPlugin(PluginName)) {
		Descriptor = CreateDescriptor(plugin.ToSharedRef());
		Branches = EBPEditorOutputValidBranch::Valid;
		return;
	} 
	Branches = EBPEditorOutputValidBranch::Invalid;
}

#pragma endregion

#pragma region Getters

void UElgEditorBP_PluginManager::GetPluginFriendlyName(const FString PluginName, FString& FriendlyNanme)
{
	FriendlyNanme.Empty();
	if (TSharedPtr<IPlugin> plugin = IPluginManager::Get().FindPlugin(PluginName)) {
		FriendlyNanme = plugin->GetDescriptor().FriendlyName;
	}
}


#pragma endregion

#pragma region Category

void UElgEditorBP_PluginManager::GetPluginCategory(TArray<FString>& CategoryNames, TMap<FString, FS_ElgPluginCategory>& CategoryMap)
{
	CategoryNames.Empty();
	CategoryMap.Empty();

	for (TSharedRef<IPlugin> plugin : IPluginManager::Get().GetDiscoveredPlugins())
	{
		if (plugin->IsHidden()) continue;

		FS_ElgPluginDescriptor descriptor = CreateDescriptor(plugin);
		FString pluginName = descriptor.FriendlyName;
		FString categoryName = descriptor.Category;

		CategoryNames.AddUnique(categoryName);
		
		// add plugin to existing category or create a new category
		FS_ElgPluginCategory* cat = CategoryMap.Find(categoryName);
		if (cat) {
			cat->AddPlugin(pluginName);
		} else {
			CategoryMap.Add(categoryName, FS_ElgPluginCategory(categoryName, pluginName));
		}
	}

	CategoryNames.Sort();
}

#pragma endregion

#pragma region State

void UElgEditorBP_PluginManager::EnablePlugin(const FString PluginName, const bool bSkipIfDependencies, EBPEditorOutputResultBranch& Branches)
{
	SetPluginEnabled(PluginName, true, bSkipIfDependencies, Branches);
}


void UElgEditorBP_PluginManager::DisablePlugin(const FString PluginName, const bool bSkipIfDependencies, EBPEditorOutputResultBranch& Branches)
{
	SetPluginEnabled(PluginName, false, bSkipIfDependencies, Branches);
}


void UElgEditorBP_PluginManager::SetPluginEnabled(const FString PluginName, const bool bEnable, const bool bSkipIfDependencies, EBPEditorOutputResultBranch& Branches)
{
	Branches = EBPEditorOutputResultBranch::Failed;
	if (TSharedPtr<IPlugin> plugin = IPluginManager::Get().FindPlugin(PluginName)) {

		// Get all the plugins we know about
		TArray<TSharedRef<IPlugin>> EnabledPlugins = IPluginManager::Get().GetEnabledPlugins();

		// Build a map of plugin by name
		TMap<FString, IPlugin*> NameToPlugin;
		for (TSharedRef<IPlugin>& EnabledPlugin : EnabledPlugins)
		{
			NameToPlugin.FindOrAdd(EnabledPlugin->GetName()) = &(EnabledPlugin.Get());
		}

		// Find all the plugins which are dependent on this plugin
		TArray<FString> DependentPluginNames;
		for (TSharedRef<IPlugin>& EnabledPlugin : EnabledPlugins)
		{
			FString EnabledPluginName = EnabledPlugin->GetName();

			TSet<FString> Dependencies;
			FindDependencies(EnabledPluginName, Dependencies, NameToPlugin);

			if (Dependencies.Num() > 0 && Dependencies.Contains(PluginName))
			{
				DependentPluginNames.Add(EnabledPluginName);
			}
		}

		if (bSkipIfDependencies && DependentPluginNames.Num() > 0) {
			UE_LOG(LogTemp, Log, TEXT("Plugin %s has dependencies so will not change its state."), *PluginName);
			return;
		}

		// Disable all the dependent plugins too
		for (const FString& DependentPluginName : DependentPluginNames)
		{
			FText FailureMessage;
			if (!IProjectManager::Get().SetPluginEnabled(DependentPluginName, false, FailureMessage))
			{
				UE_LOG(LogTemp, Error, TEXT("%s"), *FailureMessage.ToString());
				return;
			}
		}

		// Change the state of the plugin.
		FText FailMessage;
		if (!IProjectManager::Get().SetPluginEnabled(PluginName, bEnable, FailMessage))
		{	
			UE_LOG(LogTemp, Error, TEXT("%s"), *FailMessage.ToString());
			return;
		} else {
			FGameProjectGenerationModule::Get().TryMakeProjectFileWriteable(FPaths::GetProjectFilePath());

			if (!IProjectManager::Get().SaveCurrentProjectToDisk(FailMessage))
			{
				UE_LOG(LogTemp, Error, TEXT("%s"), *FailMessage.ToString());
				return;
			}
		}
		Branches = EBPEditorOutputResultBranch::Success;
		return;
	}
}

#pragma endregion

#pragma region Icon

UTexture2D* UElgEditorBP_PluginManager::GetPluginIconTexture(const FString PluginName, EBPEditorOutputResultBranch& Branches)
{
	UTexture2D* texture = NULL;
	Branches = EBPEditorOutputResultBranch::Failed;

	if (TSharedPtr<IPlugin> plugin = IPluginManager::Get().FindPlugin(PluginName)) {
		FS_ElgPluginDescriptor descriptor = CreateDescriptor(plugin.ToSharedRef());

		texture = GetTexture(descriptor);

		if (texture == NULL) return texture;

		Branches = EBPEditorOutputResultBranch::Success;
	}
	return texture;
}


UTexture2D* UElgEditorBP_PluginManager::GetPluginIconTextureByPath(const FString IconPath, EBPEditorOutputResultBranch& Branches)
{	
	Branches = EBPEditorOutputResultBranch::Failed;
	UTexture2D* texture = GetTextureByPath(IconPath);
	if (texture) {
		Branches = EBPEditorOutputResultBranch::Success;
	}
	return texture;
}


void UElgEditorBP_PluginManager::GetPluginIconTextures(TMap<FString, UTexture2D*>& PluginIcons)
{
	PluginIcons.Empty();

	for (TSharedRef<IPlugin> plugin : IPluginManager::Get().GetDiscoveredPlugins())
	{
		if (plugin->IsHidden()) continue;

		FS_ElgPluginDescriptor descriptor = CreateDescriptor(plugin);
		
		if (!PluginIcons.Find(descriptor.IconFilePath)) {
			PluginIcons.Add(descriptor.IconFilePath, GetTexture(descriptor));
		}		
	}
}

#pragma endregion

#pragma region Helpers

FS_ElgPluginDescriptor UElgEditorBP_PluginManager::CreateDescriptor(TSharedRef<IPlugin> Plugin)
{
	FS_ElgPluginDescriptor descriptor;

	FPluginDescriptor pluginDescriptor = Plugin->GetDescriptor();
	
	descriptor.Version = pluginDescriptor.Version;
	descriptor.VersionName = pluginDescriptor.VersionName;
	descriptor.FriendlyName = pluginDescriptor.FriendlyName;
	descriptor.Description = pluginDescriptor.Description;
	descriptor.Category = pluginDescriptor.Category;
	descriptor.CreatedBy = pluginDescriptor.CreatedBy;
	descriptor.CreatedByURL = pluginDescriptor.CreatedByURL;
	descriptor.DocsURL = pluginDescriptor.DocsURL;
	descriptor.MarketplaceURL = pluginDescriptor.MarketplaceURL;
	descriptor.SupportURL = pluginDescriptor.SupportURL;
	descriptor.EngineVersion = pluginDescriptor.EngineVersion;
	descriptor.SupportedTargetPlatforms = pluginDescriptor.SupportedTargetPlatforms;
	descriptor.SupportedPrograms = pluginDescriptor.SupportedPrograms;
	descriptor.bCanContainContent = pluginDescriptor.bCanContainContent;
	descriptor.bIsBetaVersion = pluginDescriptor.bIsBetaVersion;
	descriptor.bInstalled = pluginDescriptor.bInstalled;
	descriptor.bIsHidden = pluginDescriptor.bIsHidden;
	descriptor.bIsEnabled = Plugin->IsEnabled();
	descriptor.bIsEnabledByDefault = Plugin->IsEnabledByDefault(true);
	descriptor.Name = Plugin->GetName();
	
	if (Plugin->GetType() == EPluginType::Mod) {
		descriptor.Type = EBPPluginType::Mod;
	} else if (Plugin->GetType() == EPluginType::Engine) {
		descriptor.Type = EBPPluginType::Engine;
	} else if (Plugin->GetType() == EPluginType::Enterprise) {
		descriptor.Type = EBPPluginType::Enterprise;
	} else if (Plugin->GetType() == EPluginType::Project) {
		descriptor.Type = EBPPluginType::Project;
	} else if (Plugin->GetType() == EPluginType::External) {
		descriptor.Type = EBPPluginType::External;
	}
	
	if (Plugin->GetType() == EPluginType::Mod){
		descriptor.RootCategory = "Mod";
	} else if (Plugin->GetDescriptor().bInstalled) {
		descriptor.RootCategory = "Installed";
	} else if (Plugin->GetLoadedFrom() == EPluginLoadedFrom::Engine) {
		descriptor.RootCategory = "BuiltIn";
	} else {
		descriptor.RootCategory = "Project";
	}

	if (descriptor.Category.IsEmpty())
	{
		descriptor.Category = TEXT("Other");
	}

	// Get the plugins icon file path or the default one if it dont exist
	descriptor.IconFilePath = Plugin->GetBaseDir() / TEXT("Resources/Icon128.png");
	if (!FPlatformFileManager::Get().GetPlatformFile().FileExists(*descriptor.IconFilePath))
	{
		descriptor.IconFilePath = IPluginManager::Get().FindPlugin(TEXT("PluginBrowser"))->GetBaseDir() / TEXT("Resources/DefaultIcon128.png");
	}

	// Module all the module and the type of them
	for (FModuleDescriptor moduleDescriptor : pluginDescriptor.Modules) {
		descriptor.ModuleNames.Add(moduleDescriptor.Name.ToString());
		descriptor.ModuleTypes.AddUnique(ToString(moduleDescriptor.Type));
	}

	return descriptor;
}


void UElgEditorBP_PluginManager::FindDependencies(const FString& PluginName, TSet<FString>& Dependencies, TMap<FString, IPlugin*>& NameToPlugin)
{
	IPlugin* Plugin = NameToPlugin.FindRef(PluginName);
	if (Plugin == nullptr) return;

	for (const FPluginReferenceDescriptor& Reference : Plugin->GetDescriptor().Plugins)
	{
		if (Reference.bEnabled && !Dependencies.Contains(Reference.Name))
		{
			Dependencies.Add(Reference.Name);
			FindDependencies(Reference.Name, Dependencies, NameToPlugin);
		}
	}
}


UTexture2D* UElgEditorBP_PluginManager::GetTexture(FS_ElgPluginDescriptor PluginDescription)
{
	return GetTextureByPath(*PluginDescription.IconFilePath);
}

UTexture2D* UElgEditorBP_PluginManager::GetTextureByPath(const FString IconPath)
{
	UTexture2D* texture = NULL;

	IImageWrapperModule& imageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
	TSharedPtr<IImageWrapper> imageWrapper = imageWrapperModule.CreateImageWrapper(EImageFormat::PNG);

	TArray<uint8> rawFileData;

	if (!FFileHelper::LoadFileToArray(rawFileData, *IconPath)) return NULL;

	if (!imageWrapper.IsValid()) return NULL;

	if (imageWrapper->SetCompressed(rawFileData.GetData(), rawFileData.Num()))
	{
		TArray<uint8> uncompressedBGRA;
		if (imageWrapper->GetRaw(ERGBFormat::BGRA, 8, uncompressedBGRA))
		{
			texture = UTexture2D::CreateTransient(imageWrapper->GetWidth(), imageWrapper->GetHeight(), PF_B8G8R8A8);

			if (!texture) return NULL;

			void* textureData = texture->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
			FMemory::Memcpy(textureData, uncompressedBGRA.GetData(), uncompressedBGRA.Num());
			texture->PlatformData->Mips[0].BulkData.Unlock();

			texture->UpdateResource();
		}
	}
	return texture;
}

#pragma endregion

#undef LOCTEXT_NAMESPACE