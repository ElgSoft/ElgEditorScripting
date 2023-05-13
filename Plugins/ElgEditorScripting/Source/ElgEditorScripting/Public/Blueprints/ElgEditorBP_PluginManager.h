// Copyright 2019-2023 ElgSoft. All rights reserved.
// Elg001.ElgEditorScripting - ElgSoft.com

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ElgEditorBP_Enum.h"
#include "ElgEditorBP_PluginManager.generated.h"

class IPlugin;
class UTexture2D;


#pragma region ENUM

UENUM(BlueprintType)
enum class EBPPluginType : uint8
{
	Engine,		// Plugin is built-in to the engine
	Enterprise,	// Standard enterprise plugin
	Project,	// Project-specific plugin, stored within a game project directory
	External,	// Plugin found in an external directory (found in an AdditionalPluginDirectory listed in the project file, or referenced on the command line)
	Mod			// Project-specific mod plugin
};

#pragma endregion

#pragma region Struct

USTRUCT(BlueprintType)
struct FS_ElgPluginDescriptor
{
	GENERATED_USTRUCT_BODY()

	/** Name of the plugin */
	UPROPERTY(BlueprintReadOnly, Category = "Plugin")
		FString Name;

	/** Version number for the plugin.  The version number must increase with every version of the plugin, so that the system
		can determine whether one version of a plugin is newer than another, or to enforce other requirements.  This version
		number is not displayed in front-facing UI.  Use the VersionName for that. */
	UPROPERTY(BlueprintReadOnly, Category = "Plugin")
		int32 Version;

	/** Name of the version for this plugin.  This is the front-facing part of the version number.  It doesn't need to match
		the version number numerically, but should be updated when the version number is increased accordingly. */
	UPROPERTY(BlueprintReadOnly, Category = "Plugin")
	FString VersionName;

	/** Friendly name of the plugin */
	UPROPERTY(BlueprintReadOnly, Category = "Plugin")
	FString FriendlyName;

	/** Description of the plugin */
	UPROPERTY(BlueprintReadOnly, Category = "Plugin")
	FString Description;

	/** The name of the category this plugin */
	UPROPERTY(BlueprintReadOnly, Category = "Plugin")
	FString Category;

	/** The company or individual who created this plugin.  This is an optional field that may be displayed in the user interface. */
	UPROPERTY(BlueprintReadOnly, Category = "Plugin")
	FString CreatedBy;

	/** Hyperlink URL string for the company or individual who created this plugin.  This is optional. */
	UPROPERTY(BlueprintReadOnly, Category = "Plugin")
	FString CreatedByURL;

	/** Documentation URL string. */
	UPROPERTY(BlueprintReadOnly, Category = "Plugin")
	FString DocsURL;

	/** Marketplace URL for this plugin. This URL will be embedded into projects that enable this plugin, so we can redirect to the marketplace if a user doesn't have it installed. */
	UPROPERTY(BlueprintReadOnly, Category = "Plugin")
	FString MarketplaceURL;

	/** Support URL/email for this plugin. */
	UPROPERTY(BlueprintReadOnly, Category = "Plugin")
	FString SupportURL;

	/** Version of the engine that this plugin is compatible with */
	UPROPERTY(BlueprintReadOnly, Category = "Plugin")
	FString EngineVersion;

	/** List of target platforms supported by this plugin. This list will be copied to any plugin reference from a project file, to allow filtering entire plugins from staged builds. */
	UPROPERTY(BlueprintReadOnly, Category = "Plugin")
	TArray<FString> SupportedTargetPlatforms;

	/** List of programs that are supported by this plugin. */
	UPROPERTY(BlueprintReadOnly, Category = "Plugin")
	TArray<FString> SupportedPrograms;

	/** Can this plugin contain content? */
	UPROPERTY(BlueprintReadOnly, Category = "Plugin")
	bool bCanContainContent;

	/** Marks the plugin as beta in the UI */
	UPROPERTY(BlueprintReadOnly, Category = "Plugin")
	bool bIsBetaVersion;

	/** Signifies that the plugin was installed on top of the engine */
	UPROPERTY(BlueprintReadOnly, Category = "Plugin")
	bool bInstalled;

	/** For auto-generated plugins that should not be listed in the plugin browser for users to disable freely. */
	UPROPERTY(BlueprintReadOnly, Category = "Plugin")
	bool bIsHidden;

	/** If the plugin is enabled or not */
	UPROPERTY(BlueprintReadOnly, Category = "Plugin")
	bool bIsEnabled;

	/** If the plugin is enabled by default or not */
	UPROPERTY(BlueprintReadOnly, Category = "Plugin")
		bool bIsEnabledByDefault;

	/** Plugin type enum
		Engine	Plugin is built-in to the engine
		Enterprise	Standard enterprise plugin
		Project	Project-specific plugin, stored within a game project directory
		External	Plugin found in an external directory (found in an AdditionalPluginDirectory listed in the project file, or referenced on the command line)
		Mod	Project-specific mod plugin	
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Plugin")
		EBPPluginType Type;

	/** Name of the plugin category */
	UPROPERTY(BlueprintReadOnly, Category = "Plugin")
		FString RootCategory;

	/** File path to the icon. */
	UPROPERTY(BlueprintReadOnly, Category = "Plugin")
		FString IconFilePath;

	/** Array with all the names of the plugin module */
	UPROPERTY(BlueprintReadOnly, Category = "Plugin")
		TArray<FString> ModuleNames;

	/** What module types the module
			Runtime,
			RuntimeNoCommandlet,
			RuntimeAndProgram,
			CookedOnly,
			Developer,
			Editor,
			EditorNoCommandlet,
			Program,		//!< Program-only plugin type
			ServerOnly,
			ClientOnly,
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Plugin")
		TArray<FString> ModuleTypes;

	FS_ElgPluginDescriptor() {
		Version = 0;
		VersionName = "";
		FriendlyName = "";
		Description = "";
		Category = "";
		CreatedBy = "";
		CreatedByURL = "";
		DocsURL = "";
		MarketplaceURL = "";
		SupportURL = "";
		EngineVersion = "";
		SupportedTargetPlatforms.Empty();
		SupportedPrograms.Empty();
		bCanContainContent = false;
		bIsBetaVersion = false;
		bInstalled = false;
		bIsHidden = false;
		bIsEnabled = false;
		bIsEnabledByDefault = false;
		Type = EBPPluginType::Mod;
		RootCategory = "";
		Name = "";
		IconFilePath = "";
		ModuleNames.Empty();
		ModuleTypes.Empty();
	}
};


USTRUCT(BlueprintType)
struct FS_ElgPluginCategory
{
	GENERATED_USTRUCT_BODY()

	/**  */
	UPROPERTY(BlueprintReadOnly, Category = "Plugin")
		FString Category;

	/**  */
	UPROPERTY(BlueprintReadOnly, Category = "Plugin")
		TArray<FString> Plugins;

	void AddPlugin(FString PluginName) {
		Plugins.Add(PluginName);
		Plugins.Sort();
	}

	FS_ElgPluginCategory(FString CategoryName, FString PluginName) {
		Category = CategoryName;
		Plugins.Empty();
		Plugins.Add(PluginName);
	}

	FS_ElgPluginCategory() {
		Category = "";
		Plugins.Empty();
	}
};

#pragma endregion


/**
 * 
 */
UCLASS()
class ELGEDITORSCRIPTING_API UElgEditorBP_PluginManager : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintPure, Category = "ElgEditor|PluginManager")
		static int32 GetPluginCount();

	/* Package the plugin to the specified Output dir */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|PluginManager", meta = (ExpandEnumAsExecs = "Branches"))
		static void PackagePlugin(const FString PluginName, FString OutputDirectory, EBPEditorOutputResultBranch& Branches);

#pragma region Description

	/* Get Descriptions with information about all plugins */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|PluginManager")
		static void GetPluginDescriptions(TArray<FString>& PluginFriendlyNames, TMap<FString, FS_ElgPluginDescriptor>& PluginMap);

	/* Get Description with information about the plugin */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|PluginManager", meta = (ExpandEnumAsExecs = "Branches"))
		static void GetPluginDescription(const FString PluginName, FS_ElgPluginDescriptor& Descriptor, EBPEditorOutputValidBranch& Branches);
	
#pragma endregion

#pragma region Getters

	/* Get a plugins friendly name */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|PluginManager")
		static void GetPluginFriendlyName(const FString PluginName, FString& FriendlyNanme);

#pragma endregion

#pragma region Category

	/* Get a map with array Category and all plugin for each category
	As a bonus a sorted array with just the category
	*/
	UFUNCTION(BlueprintPure, Category = "ElgEditor|PluginManager")
		static void GetPluginCategory(TArray<FString>& CategoryNames, TMap<FString, FS_ElgPluginCategory>& CategoryMap);

#pragma endregion

#pragma region State

	/* Enable the plugin, need to restart the editor to see the effect. */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|PluginManager", meta = (ExpandEnumAsExecs = "Branches"))
		static void EnablePlugin(const FString PluginName, const bool bSkipIfDependencies, EBPEditorOutputResultBranch& Branches);

	/* Disable the plugin, need to restart the editor to see the effect. */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|PluginManager", meta = (ExpandEnumAsExecs = "Branches"))
		static void DisablePlugin(const FString PluginName, const bool bSkipIfDependencies, EBPEditorOutputResultBranch& Branches);

	/* Enable or Disable the plugin.
		Need to restart to see the effect.
	*/
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|PluginManager", meta = (ExpandEnumAsExecs = "Branches"))
		static void SetPluginEnabled(const FString PluginName, const bool bEnable, const bool bSkipIfDependencies, EBPEditorOutputResultBranch& Branches);

#pragma endregion

#pragma region Icon

	/* Get the Icon texture for a plugin */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|PluginManager", meta = (ExpandEnumAsExecs = "Branches"))
		static UTexture2D* GetPluginIconTexture(const FString PluginName, EBPEditorOutputResultBranch& Branches);

	/* Get the Icon texture for a plugin */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|PluginManager", meta = (ExpandEnumAsExecs = "Branches"))
		static UTexture2D* GetPluginIconTextureByPath(const FString IconPath, EBPEditorOutputResultBranch& Branches);


	/* Get a Map with filepath, texture  */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|PluginManager")
		static void GetPluginIconTextures(TMap<FString, UTexture2D*>& PluginIcons);

#pragma endregion

#pragma region Helpers

	static FS_ElgPluginDescriptor CreateDescriptor(TSharedRef<IPlugin> Plugin);
	static void FindDependencies(const FString& PluginName, TSet<FString>& Dependencies, TMap<FString, IPlugin*>& NameToPlugin);
	static UTexture2D* GetTexture(FS_ElgPluginDescriptor PluginDescription);
	static UTexture2D* GetTextureByPath(const FString IconPath);

#pragma endregion
};
