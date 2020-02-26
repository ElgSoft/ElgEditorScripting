// Copyright 2019 ElgSoft. All rights reserved. 
// Elg001.ElgEditorScripting - ElgSoft.com

#include "ElgEditorBP_FModuleManager.h"
#include "Modules\ModuleManager.h"
#include "Misc/HotReloadInterface.h"
#include "HAL/PlatformFilemanager.h"
#include <Engine/Engine.h>
#include "Misc/FeedbackContext.h"
#include "Misc/Paths.h"
#include "GenericPlatform/GenericPlatformFile.h"


#pragma region Getters

void UElgEditorBP_FModuleManager::GetModuleNames(TArray<FString>& Modules, const bool bProjectOnly)
{
#if WITH_EDITOR
	Modules.Empty();

	TArray< FModuleStatus > ModuleStatuses;
	FModuleManager::Get().QueryModules(ModuleStatuses);

	const FString projectDir = FPaths::ProjectDir();

	for (TArray< FModuleStatus >::TConstIterator ModuleIt(ModuleStatuses); ModuleIt; ++ModuleIt)
	{
		const FModuleStatus& moduleStatus = *ModuleIt;

		if (bProjectOnly) {
			// only adding the module in the plugin dir
			if (moduleStatus.FilePath.Contains(projectDir)) {
				Modules.Add(moduleStatus.Name);
			}
		}
		else {
			Modules.Add(moduleStatus.Name);
		}
	}
	Modules.Sort();
#endif
}


void UElgEditorBP_FModuleManager::GetModulesStatus(TArray<FString>& ModuleNames, TMap<FString, FS_ElgModuleStatus>& ModulesMap, const bool bProjectOnly /*= true*/)
{
#if WITH_EDITOR
	ModuleNames.Empty();
	ModulesMap.Empty();

	TArray< FModuleStatus > ModuleStatuses;
	FModuleManager::Get().QueryModules(ModuleStatuses);

	const FString projectDir = FPaths::ProjectDir();
	bool bIsLocal = false;

	for (TArray< FModuleStatus >::TConstIterator ModuleIt(ModuleStatuses); ModuleIt; ++ModuleIt)
	{
		const FModuleStatus& moduleStatus = *ModuleIt;

		bIsLocal = moduleStatus.FilePath.Contains(projectDir);
		
		if (bProjectOnly && !bIsLocal) continue;
		
		ModuleNames.Add(moduleStatus.Name);
		ModulesMap.Add(moduleStatus.Name, FS_ElgModuleStatus(
			moduleStatus.Name,
			moduleStatus.FilePath,
			moduleStatus.bIsLoaded,
			moduleStatus.bIsGameModule,
			bIsLocal,
			CanShutdownModule(moduleStatus.Name),
			CanRecompileModule(moduleStatus.Name),
			CanHotReloadModule(moduleStatus.Name),
			CanDynamicReloadModule(moduleStatus.Name)
		));
	}
	ModuleNames.Sort();
#endif
}


void UElgEditorBP_FModuleManager::GetModuleStatus(const FString ModuleName, bool& Success, FS_ElgModuleStatus& ModuleStatus)
{
#if WITH_EDITOR
	FModuleStatus moduleStatus;

	if (FModuleManager::Get().QueryModule(FName(*ModuleName), moduleStatus)) {
		const FString projectDir = FPaths::ProjectDir();
		ModuleStatus.Name = moduleStatus.Name;
		ModuleStatus.FilePath = moduleStatus.FilePath;
		ModuleStatus.bIsLoaded = moduleStatus.bIsLoaded;
		ModuleStatus.bIsGameModule = moduleStatus.bIsGameModule;
		ModuleStatus.bIsProjectModule = moduleStatus.FilePath.Contains(projectDir);
		ModuleStatus.bCanShutDown = CanShutdownModule(moduleStatus.Name);
		ModuleStatus.bCanRecompile = CanRecompileModule(moduleStatus.Name);
		ModuleStatus.bCanHotReload = CanHotReloadModule(moduleStatus.Name);
		ModuleStatus.bCanDynamicReload = CanDynamicReloadModule(moduleStatus.Name);
		Success = true;
	}
	else {
		Success = false;
	}
#endif	
}

#pragma endregion

#pragma region Actions

void UElgEditorBP_FModuleManager::RecompileModule(const FString ModuleName)
{
	if (ModuleName.IsEmpty()) return;

#if WITH_EDITOR

	if (!CanRecompileModule(ModuleName)){
		UE_LOG(LogTemp, Warning, TEXT("RecompileModule:: Module [%s] dont support recompile"), *ModuleName);
		return;
	}

	FFormatNamedArguments Args;
	Args.Add(TEXT("ModuleName"), FText::FromString(ModuleName));

	GWarn->BeginSlowTask(FText::Format(NSLOCTEXT("UElgEditorBP_FModuleManager", "Recompile_SlowTaskName", "Compiling {ModuleName}..."), Args), true, false);

	// Does the module have any UObject classes in it?  If so we'll use HotReload to recompile it.
	FModuleStatus ModuleStatus;
	if (ensure(FModuleManager::Get().QueryModule(FName(*ModuleName), ModuleStatus)))
	{
		//@todo This is for content-only packages that show up in the
		// Module UI... don't crash when recompile is clicked
		if (FPaths::IsProjectFilePathSet())
		{
			if (ModuleStatus.bIsLoaded == false)
			{
				if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*ModuleStatus.FilePath) == false)
				{
					UE_LOG(LogTemp, Display, TEXT("Unable to recompile module %s... Is it a content-only module?"), *ModuleName);
					GWarn->EndSlowTask();
				}
			}
		}

		TArray< UPackage* > PackagesToRebind;
		if (ModuleStatus.bIsLoaded)
		{
			if (CanHotReloadModule(ModuleName))
			{
				// Is there a UPackage with the same name as this module?
				FString PotentialPackageName = FString(TEXT("/Script/")) + ModuleName;
				UPackage* Package = FindPackage(NULL, *PotentialPackageName);
				if (Package != NULL)
				{
					PackagesToRebind.Add(Package);
				}
			}
		}

		IHotReloadInterface& HotReloadSupport = FModuleManager::LoadModuleChecked<IHotReloadInterface>("HotReload");
		if (PackagesToRebind.Num() > 0)
		{
			// Perform a hot reload
			ECompilationResult::Type Result = HotReloadSupport.RebindPackages(PackagesToRebind, EHotReloadFlags::WaitForCompletion, *GLog);
		}
		else
		{
			// Perform a regular unload, then reload
			const bool bReloadAfterRecompile = true;
			const bool bForceCodeProject = false;
			const bool bFailIfGeneratedCodeChanges = true;
			//const bool bRecompileSucceeded = HotReloadSupport.RecompileModule(FName(*ModuleName), bReloadAfterRecompile, *GLog, bFailIfGeneratedCodeChanges, bForceCodeProject);
		}
	}

	GWarn->EndSlowTask();
#endif
}

void UElgEditorBP_FModuleManager::LoadModule(const FString ModuleName)
{
#if WITH_EDITOR
	GEngine->DeferredCommands.Add(FString::Printf(TEXT("Module Load %s"), *ModuleName));
#endif
}

void UElgEditorBP_FModuleManager::UnloadModule(const FString ModuleName)
{
#if WITH_EDITOR
	GEngine->DeferredCommands.Add(FString::Printf(TEXT("Module Unload %s"), *ModuleName));
#endif
}

void UElgEditorBP_FModuleManager::ReloadModule(const FString ModuleName)
{
#if WITH_EDITOR

	if (!CanHotReloadModule(ModuleName) || !CanDynamicReloadModule(ModuleName)) {
		UE_LOG(LogTemp, Warning, TEXT("ReloadModule: Module [%s] dont support reloading..."), *ModuleName)
		return;
	}

	GEngine->DeferredCommands.Add(FString::Printf(TEXT("Module Reload %s"), *ModuleName));
#endif
}

#pragma endregion

#pragma region StateCheck

bool UElgEditorBP_FModuleManager::CanShutdownModule(const FString ModuleName)
{
#if WITH_EDITOR
	return ( IsModuleLoaded(ModuleName) && !CanHotReloadModule(ModuleName) && CanDynamicReloadModule(ModuleName) );
#endif
	return false;
}


bool UElgEditorBP_FModuleManager::CanRecompileModule(const FString ModuleName)
{
#if WITH_EDITOR
	return ( !IsModuleLoaded(ModuleName) || CanDynamicReloadModule(ModuleName) || CanHotReloadModule(ModuleName));
#endif
	return false;
}


bool UElgEditorBP_FModuleManager::IsModuleLoaded(const FString ModuleName)
{
#if WITH_EDITOR
	return FModuleManager::Get().IsModuleLoaded(FName(*ModuleName));
#endif
	return false;
}


bool UElgEditorBP_FModuleManager::CanHotReloadModule(const FString ModuleName)
{
#if WITH_EDITOR
	return FModuleManager::Get().DoesLoadedModuleHaveUObjects(FName(*ModuleName));
#endif
	return false;
}


bool UElgEditorBP_FModuleManager::CanDynamicReloadModule(const FString ModuleName)
{
#if WITH_EDITOR
	FModuleManager& manager = FModuleManager::Get();

	// as we can fail to get an module make sure we check the state be for getting stuff from it.
	if (IModuleInterface* moduleInterface = manager.GetModule(FName(*ModuleName))) {
		return moduleInterface->SupportsDynamicReloading();
	}
		
#endif
	return false;
}


#pragma endregion