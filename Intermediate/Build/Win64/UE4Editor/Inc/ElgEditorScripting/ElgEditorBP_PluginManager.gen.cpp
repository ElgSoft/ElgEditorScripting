// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElgEditorScripting/Public/Blueprints/ElgEditorBP_PluginManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElgEditorBP_PluginManager() {}
// Cross Module References
	ELGEDITORSCRIPTING_API UEnum* Z_Construct_UEnum_ElgEditorScripting_EBPPluginType();
	UPackage* Z_Construct_UPackage__Script_ElgEditorScripting();
	ELGEDITORSCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FS_ElgPluginCategory();
	ELGEDITORSCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FS_ElgPluginDescriptor();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorBP_PluginManager_NoRegister();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorBP_PluginManager();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_PluginManager_DisablePlugin();
	ELGEDITORSCRIPTING_API UEnum* Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputResultBranch();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_PluginManager_EnablePlugin();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCategory();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCount();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescription();
	ELGEDITORSCRIPTING_API UEnum* Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescriptions();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginFriendlyName();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextureByPath();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextures();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_PluginManager_PackagePlugin();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled();
// End Cross Module References
	static UEnum* EBPPluginType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ElgEditorScripting_EBPPluginType, Z_Construct_UPackage__Script_ElgEditorScripting(), TEXT("EBPPluginType"));
		}
		return Singleton;
	}
	template<> ELGEDITORSCRIPTING_API UEnum* StaticEnum<EBPPluginType>()
	{
		return EBPPluginType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPPluginType(EBPPluginType_StaticEnum, TEXT("/Script/ElgEditorScripting"), TEXT("EBPPluginType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ElgEditorScripting_EBPPluginType_Hash() { return 2866033043U; }
	UEnum* Z_Construct_UEnum_ElgEditorScripting_EBPPluginType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ElgEditorScripting();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPPluginType"), 0, Get_Z_Construct_UEnum_ElgEditorScripting_EBPPluginType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBPPluginType::Engine", (int64)EBPPluginType::Engine },
				{ "EBPPluginType::Enterprise", (int64)EBPPluginType::Enterprise },
				{ "EBPPluginType::Project", (int64)EBPPluginType::Project },
				{ "EBPPluginType::External", (int64)EBPPluginType::External },
				{ "EBPPluginType::Mod", (int64)EBPPluginType::Mod },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Enterprise.ToolTip", "Plugin is built-in to the engine" },
				{ "External.ToolTip", "Project-specific plugin, stored within a game project directory" },
				{ "Mod.ToolTip", "Plugin found in an external directory (found in an AdditionalPluginDirectory listed in the project file, or referenced on the command line)" },
				{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
				{ "Project.ToolTip", "Standard enterprise plugin" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ElgEditorScripting,
				nullptr,
				"EBPPluginType",
				"EBPPluginType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FS_ElgPluginCategory::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELGEDITORSCRIPTING_API uint32 Get_Z_Construct_UScriptStruct_FS_ElgPluginCategory_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_ElgPluginCategory, Z_Construct_UPackage__Script_ElgEditorScripting(), TEXT("S_ElgPluginCategory"), sizeof(FS_ElgPluginCategory), Get_Z_Construct_UScriptStruct_FS_ElgPluginCategory_Hash());
	}
	return Singleton;
}
template<> ELGEDITORSCRIPTING_API UScriptStruct* StaticStruct<FS_ElgPluginCategory>()
{
	return FS_ElgPluginCategory::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FS_ElgPluginCategory(FS_ElgPluginCategory::StaticStruct, TEXT("/Script/ElgEditorScripting"), TEXT("S_ElgPluginCategory"), false, nullptr, nullptr);
static struct FScriptStruct_ElgEditorScripting_StaticRegisterNativesFS_ElgPluginCategory
{
	FScriptStruct_ElgEditorScripting_StaticRegisterNativesFS_ElgPluginCategory()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("S_ElgPluginCategory")),new UScriptStruct::TCppStructOps<FS_ElgPluginCategory>);
	}
} ScriptStruct_ElgEditorScripting_StaticRegisterNativesFS_ElgPluginCategory;
	struct Z_Construct_UScriptStruct_FS_ElgPluginCategory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Plugins_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Plugins;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Plugins_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgPluginCategory_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FS_ElgPluginCategory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_ElgPluginCategory>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgPluginCategory_Statics::NewProp_Plugins_MetaData[] = {
		{ "Category", "Plugin" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FS_ElgPluginCategory_Statics::NewProp_Plugins = { "Plugins", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgPluginCategory, Plugins), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgPluginCategory_Statics::NewProp_Plugins_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgPluginCategory_Statics::NewProp_Plugins_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgPluginCategory_Statics::NewProp_Plugins_Inner = { "Plugins", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgPluginCategory_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "Plugin" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgPluginCategory_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgPluginCategory, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgPluginCategory_Statics::NewProp_Category_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgPluginCategory_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_ElgPluginCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgPluginCategory_Statics::NewProp_Plugins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgPluginCategory_Statics::NewProp_Plugins_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgPluginCategory_Statics::NewProp_Category,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_ElgPluginCategory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElgEditorScripting,
		nullptr,
		&NewStructOps,
		"S_ElgPluginCategory",
		sizeof(FS_ElgPluginCategory),
		alignof(FS_ElgPluginCategory),
		Z_Construct_UScriptStruct_FS_ElgPluginCategory_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgPluginCategory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgPluginCategory_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgPluginCategory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FS_ElgPluginCategory()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FS_ElgPluginCategory_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ElgEditorScripting();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("S_ElgPluginCategory"), sizeof(FS_ElgPluginCategory), Get_Z_Construct_UScriptStruct_FS_ElgPluginCategory_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FS_ElgPluginCategory_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FS_ElgPluginCategory_Hash() { return 2317965891U; }
class UScriptStruct* FS_ElgPluginDescriptor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELGEDITORSCRIPTING_API uint32 Get_Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor, Z_Construct_UPackage__Script_ElgEditorScripting(), TEXT("S_ElgPluginDescriptor"), sizeof(FS_ElgPluginDescriptor), Get_Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Hash());
	}
	return Singleton;
}
template<> ELGEDITORSCRIPTING_API UScriptStruct* StaticStruct<FS_ElgPluginDescriptor>()
{
	return FS_ElgPluginDescriptor::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FS_ElgPluginDescriptor(FS_ElgPluginDescriptor::StaticStruct, TEXT("/Script/ElgEditorScripting"), TEXT("S_ElgPluginDescriptor"), false, nullptr, nullptr);
static struct FScriptStruct_ElgEditorScripting_StaticRegisterNativesFS_ElgPluginDescriptor
{
	FScriptStruct_ElgEditorScripting_StaticRegisterNativesFS_ElgPluginDescriptor()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("S_ElgPluginDescriptor")),new UScriptStruct::TCppStructOps<FS_ElgPluginDescriptor>);
	}
} ScriptStruct_ElgEditorScripting_StaticRegisterNativesFS_ElgPluginDescriptor;
	struct Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModuleTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModuleTypes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModuleTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModuleNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModuleNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModuleNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IconFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RootCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEnabledByDefault_MetaData[];
#endif
		static void NewProp_bIsEnabledByDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabledByDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHidden_MetaData[];
#endif
		static void NewProp_bIsHidden_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHidden;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInstalled_MetaData[];
#endif
		static void NewProp_bInstalled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInstalled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBetaVersion_MetaData[];
#endif
		static void NewProp_bIsBetaVersion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBetaVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanContainContent_MetaData[];
#endif
		static void NewProp_bCanContainContent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanContainContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportedPrograms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SupportedPrograms;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SupportedPrograms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportedTargetPlatforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SupportedTargetPlatforms;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SupportedTargetPlatforms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EngineVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SupportURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarketplaceURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MarketplaceURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DocsURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DocsURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedByURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CreatedByURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CreatedBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendlyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendlyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VersionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VersionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_ElgPluginDescriptor>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_ModuleTypes_MetaData[] = {
		{ "Category", "Plugin" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "What module types the module\n                      Runtime,\n                      RuntimeNoCommandlet,\n                      RuntimeAndProgram,\n                      CookedOnly,\n                      Developer,\n                      Editor,\n                      EditorNoCommandlet,\n                      Program,                //!< Program-only plugin type\n                      ServerOnly,\n                      ClientOnly," },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_ModuleTypes = { "ModuleTypes", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgPluginDescriptor, ModuleTypes), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_ModuleTypes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_ModuleTypes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_ModuleTypes_Inner = { "ModuleTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_ModuleNames_MetaData[] = {
		{ "Category", "Plugin" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "Array with all the names of the plugin module" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_ModuleNames = { "ModuleNames", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgPluginDescriptor, ModuleNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_ModuleNames_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_ModuleNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_ModuleNames_Inner = { "ModuleNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_IconFilePath_MetaData[] = {
		{ "Category", "Plugin" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "File path to the icon." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_IconFilePath = { "IconFilePath", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgPluginDescriptor, IconFilePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_IconFilePath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_IconFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_RootCategory_MetaData[] = {
		{ "Category", "Plugin" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "Name of the plugin category" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_RootCategory = { "RootCategory", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgPluginDescriptor, RootCategory), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_RootCategory_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_RootCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Plugin" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "Plugin type enum\n              Engine  Plugin is built-in to the engine\n              Enterprise      Standard enterprise plugin\n              Project Project-specific plugin, stored within a game project directory\n              External        Plugin found in an external directory (found in an AdditionalPluginDirectory listed in the project file, or referenced on the command line)\n              Mod     Project-specific mod plugin" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgPluginDescriptor, Type), Z_Construct_UEnum_ElgEditorScripting_EBPPluginType, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bIsEnabledByDefault_MetaData[] = {
		{ "Category", "Plugin" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "If the plugin is enabled by default or not" },
	};
#endif
	void Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bIsEnabledByDefault_SetBit(void* Obj)
	{
		((FS_ElgPluginDescriptor*)Obj)->bIsEnabledByDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bIsEnabledByDefault = { "bIsEnabledByDefault", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FS_ElgPluginDescriptor), &Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bIsEnabledByDefault_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bIsEnabledByDefault_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bIsEnabledByDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "Plugin" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "If the plugin is enabled or not" },
	};
#endif
	void Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((FS_ElgPluginDescriptor*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FS_ElgPluginDescriptor), &Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bIsEnabled_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bIsEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bIsHidden_MetaData[] = {
		{ "Category", "Plugin" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "For auto-generated plugins that should not be listed in the plugin browser for users to disable freely." },
	};
#endif
	void Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bIsHidden_SetBit(void* Obj)
	{
		((FS_ElgPluginDescriptor*)Obj)->bIsHidden = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bIsHidden = { "bIsHidden", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FS_ElgPluginDescriptor), &Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bIsHidden_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bIsHidden_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bIsHidden_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bInstalled_MetaData[] = {
		{ "Category", "Plugin" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "Signifies that the plugin was installed on top of the engine" },
	};
#endif
	void Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bInstalled_SetBit(void* Obj)
	{
		((FS_ElgPluginDescriptor*)Obj)->bInstalled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bInstalled = { "bInstalled", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FS_ElgPluginDescriptor), &Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bInstalled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bInstalled_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bInstalled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bIsBetaVersion_MetaData[] = {
		{ "Category", "Plugin" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "Marks the plugin as beta in the UI" },
	};
#endif
	void Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bIsBetaVersion_SetBit(void* Obj)
	{
		((FS_ElgPluginDescriptor*)Obj)->bIsBetaVersion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bIsBetaVersion = { "bIsBetaVersion", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FS_ElgPluginDescriptor), &Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bIsBetaVersion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bIsBetaVersion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bIsBetaVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bCanContainContent_MetaData[] = {
		{ "Category", "Plugin" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "Can this plugin contain content?" },
	};
#endif
	void Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bCanContainContent_SetBit(void* Obj)
	{
		((FS_ElgPluginDescriptor*)Obj)->bCanContainContent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bCanContainContent = { "bCanContainContent", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FS_ElgPluginDescriptor), &Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bCanContainContent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bCanContainContent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bCanContainContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_SupportedPrograms_MetaData[] = {
		{ "Category", "Plugin" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "List of programs that are supported by this plugin." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_SupportedPrograms = { "SupportedPrograms", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgPluginDescriptor, SupportedPrograms), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_SupportedPrograms_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_SupportedPrograms_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_SupportedPrograms_Inner = { "SupportedPrograms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_SupportedTargetPlatforms_MetaData[] = {
		{ "Category", "Plugin" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "List of target platforms supported by this plugin. This list will be copied to any plugin reference from a project file, to allow filtering entire plugins from staged builds." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_SupportedTargetPlatforms = { "SupportedTargetPlatforms", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgPluginDescriptor, SupportedTargetPlatforms), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_SupportedTargetPlatforms_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_SupportedTargetPlatforms_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_SupportedTargetPlatforms_Inner = { "SupportedTargetPlatforms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_EngineVersion_MetaData[] = {
		{ "Category", "Plugin" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "Version of the engine that this plugin is compatible with" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_EngineVersion = { "EngineVersion", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgPluginDescriptor, EngineVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_EngineVersion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_EngineVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_SupportURL_MetaData[] = {
		{ "Category", "Plugin" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "Support URL/email for this plugin." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_SupportURL = { "SupportURL", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgPluginDescriptor, SupportURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_SupportURL_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_SupportURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_MarketplaceURL_MetaData[] = {
		{ "Category", "Plugin" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "Marketplace URL for this plugin. This URL will be embedded into projects that enable this plugin, so we can redirect to the marketplace if a user doesn't have it installed." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_MarketplaceURL = { "MarketplaceURL", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgPluginDescriptor, MarketplaceURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_MarketplaceURL_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_MarketplaceURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_DocsURL_MetaData[] = {
		{ "Category", "Plugin" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "Documentation URL string." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_DocsURL = { "DocsURL", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgPluginDescriptor, DocsURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_DocsURL_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_DocsURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_CreatedByURL_MetaData[] = {
		{ "Category", "Plugin" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "Hyperlink URL string for the company or individual who created this plugin.  This is optional." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_CreatedByURL = { "CreatedByURL", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgPluginDescriptor, CreatedByURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_CreatedByURL_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_CreatedByURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_CreatedBy_MetaData[] = {
		{ "Category", "Plugin" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "The company or individual who created this plugin.  This is an optional field that may be displayed in the user interface." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_CreatedBy = { "CreatedBy", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgPluginDescriptor, CreatedBy), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_CreatedBy_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_CreatedBy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "Plugin" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "The name of the category this plugin" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgPluginDescriptor, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_Category_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Plugin" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "Description of the plugin" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgPluginDescriptor, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_Description_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_FriendlyName_MetaData[] = {
		{ "Category", "Plugin" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "Friendly name of the plugin" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgPluginDescriptor, FriendlyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_FriendlyName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_FriendlyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_VersionName_MetaData[] = {
		{ "Category", "Plugin" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "Name of the version for this plugin.  This is the front-facing part of the version number.  It doesn't need to match\n              the version number numerically, but should be updated when the version number is increased accordingly." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_VersionName = { "VersionName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgPluginDescriptor, VersionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_VersionName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_VersionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "Plugin" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "Version number for the plugin.  The version number must increase with every version of the plugin, so that the system\n              can determine whether one version of a plugin is newer than another, or to enforce other requirements.  This version\n              number is not displayed in front-facing UI.  Use the VersionName for that." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgPluginDescriptor, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_Version_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_Version_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Plugin" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "Name of the plugin" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgPluginDescriptor, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_ModuleTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_ModuleTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_ModuleNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_ModuleNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_IconFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_RootCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bIsEnabledByDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bIsEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bIsHidden,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bInstalled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bIsBetaVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_bCanContainContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_SupportedPrograms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_SupportedPrograms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_SupportedTargetPlatforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_SupportedTargetPlatforms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_EngineVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_SupportURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_MarketplaceURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_DocsURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_CreatedByURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_CreatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_FriendlyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_VersionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_Version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElgEditorScripting,
		nullptr,
		&NewStructOps,
		"S_ElgPluginDescriptor",
		sizeof(FS_ElgPluginDescriptor),
		alignof(FS_ElgPluginDescriptor),
		Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FS_ElgPluginDescriptor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ElgEditorScripting();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("S_ElgPluginDescriptor"), sizeof(FS_ElgPluginDescriptor), Get_Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Hash() { return 4086800129U; }
	void UElgEditorBP_PluginManager::StaticRegisterNativesUElgEditorBP_PluginManager()
	{
		UClass* Class = UElgEditorBP_PluginManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisablePlugin", &UElgEditorBP_PluginManager::execDisablePlugin },
			{ "EnablePlugin", &UElgEditorBP_PluginManager::execEnablePlugin },
			{ "GetPluginCategory", &UElgEditorBP_PluginManager::execGetPluginCategory },
			{ "GetPluginCount", &UElgEditorBP_PluginManager::execGetPluginCount },
			{ "GetPluginDescription", &UElgEditorBP_PluginManager::execGetPluginDescription },
			{ "GetPluginDescriptions", &UElgEditorBP_PluginManager::execGetPluginDescriptions },
			{ "GetPluginFriendlyName", &UElgEditorBP_PluginManager::execGetPluginFriendlyName },
			{ "GetPluginIconTexture", &UElgEditorBP_PluginManager::execGetPluginIconTexture },
			{ "GetPluginIconTextureByPath", &UElgEditorBP_PluginManager::execGetPluginIconTextureByPath },
			{ "GetPluginIconTextures", &UElgEditorBP_PluginManager::execGetPluginIconTextures },
			{ "PackagePlugin", &UElgEditorBP_PluginManager::execPackagePlugin },
			{ "SetPluginEnabled", &UElgEditorBP_PluginManager::execSetPluginEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UElgEditorBP_PluginManager_DisablePlugin_Statics
	{
		struct ElgEditorBP_PluginManager_eventDisablePlugin_Parms
		{
			FString PluginName;
			bool bSkipIfDependencies;
			EBPEditorOutputResultBranch Branches;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipIfDependencies_MetaData[];
#endif
		static void NewProp_bSkipIfDependencies_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipIfDependencies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PluginName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PluginName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_DisablePlugin_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_PluginManager_eventDisablePlugin_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputResultBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_DisablePlugin_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_PluginManager_DisablePlugin_Statics::NewProp_bSkipIfDependencies_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_PluginManager_DisablePlugin_Statics::NewProp_bSkipIfDependencies_SetBit(void* Obj)
	{
		((ElgEditorBP_PluginManager_eventDisablePlugin_Parms*)Obj)->bSkipIfDependencies = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_DisablePlugin_Statics::NewProp_bSkipIfDependencies = { "bSkipIfDependencies", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_PluginManager_eventDisablePlugin_Parms), &Z_Construct_UFunction_UElgEditorBP_PluginManager_DisablePlugin_Statics::NewProp_bSkipIfDependencies_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_PluginManager_DisablePlugin_Statics::NewProp_bSkipIfDependencies_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_DisablePlugin_Statics::NewProp_bSkipIfDependencies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_PluginManager_DisablePlugin_Statics::NewProp_PluginName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_DisablePlugin_Statics::NewProp_PluginName = { "PluginName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_PluginManager_eventDisablePlugin_Parms, PluginName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_PluginManager_DisablePlugin_Statics::NewProp_PluginName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_DisablePlugin_Statics::NewProp_PluginName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_PluginManager_DisablePlugin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_DisablePlugin_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_DisablePlugin_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_DisablePlugin_Statics::NewProp_bSkipIfDependencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_DisablePlugin_Statics::NewProp_PluginName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_PluginManager_DisablePlugin_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|PluginManager" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "Disable the plugin, need to restart the editor to see the effect." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_PluginManager_DisablePlugin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_PluginManager, nullptr, "DisablePlugin", sizeof(ElgEditorBP_PluginManager_eventDisablePlugin_Parms), Z_Construct_UFunction_UElgEditorBP_PluginManager_DisablePlugin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_DisablePlugin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_PluginManager_DisablePlugin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_DisablePlugin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_PluginManager_DisablePlugin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_PluginManager_DisablePlugin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_PluginManager_EnablePlugin_Statics
	{
		struct ElgEditorBP_PluginManager_eventEnablePlugin_Parms
		{
			FString PluginName;
			bool bSkipIfDependencies;
			EBPEditorOutputResultBranch Branches;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipIfDependencies_MetaData[];
#endif
		static void NewProp_bSkipIfDependencies_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipIfDependencies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PluginName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PluginName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_EnablePlugin_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_PluginManager_eventEnablePlugin_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputResultBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_EnablePlugin_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_PluginManager_EnablePlugin_Statics::NewProp_bSkipIfDependencies_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_PluginManager_EnablePlugin_Statics::NewProp_bSkipIfDependencies_SetBit(void* Obj)
	{
		((ElgEditorBP_PluginManager_eventEnablePlugin_Parms*)Obj)->bSkipIfDependencies = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_EnablePlugin_Statics::NewProp_bSkipIfDependencies = { "bSkipIfDependencies", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_PluginManager_eventEnablePlugin_Parms), &Z_Construct_UFunction_UElgEditorBP_PluginManager_EnablePlugin_Statics::NewProp_bSkipIfDependencies_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_PluginManager_EnablePlugin_Statics::NewProp_bSkipIfDependencies_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_EnablePlugin_Statics::NewProp_bSkipIfDependencies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_PluginManager_EnablePlugin_Statics::NewProp_PluginName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_EnablePlugin_Statics::NewProp_PluginName = { "PluginName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_PluginManager_eventEnablePlugin_Parms, PluginName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_PluginManager_EnablePlugin_Statics::NewProp_PluginName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_EnablePlugin_Statics::NewProp_PluginName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_PluginManager_EnablePlugin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_EnablePlugin_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_EnablePlugin_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_EnablePlugin_Statics::NewProp_bSkipIfDependencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_EnablePlugin_Statics::NewProp_PluginName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_PluginManager_EnablePlugin_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|PluginManager" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "Enable the plugin, need to restart the editor to see the effect." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_PluginManager_EnablePlugin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_PluginManager, nullptr, "EnablePlugin", sizeof(ElgEditorBP_PluginManager_eventEnablePlugin_Parms), Z_Construct_UFunction_UElgEditorBP_PluginManager_EnablePlugin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_EnablePlugin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_PluginManager_EnablePlugin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_EnablePlugin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_PluginManager_EnablePlugin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_PluginManager_EnablePlugin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCategory_Statics
	{
		struct ElgEditorBP_PluginManager_eventGetPluginCategory_Parms
		{
			TArray<FString> CategoryNames;
			TMap<FString,FS_ElgPluginCategory> CategoryMap;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CategoryMap;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategoryMap_ValueProp;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CategoryNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryNames_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCategory_Statics::NewProp_CategoryMap = { "CategoryMap", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_PluginManager_eventGetPluginCategory_Parms, CategoryMap), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCategory_Statics::NewProp_CategoryMap_Key_KeyProp = { "CategoryMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCategory_Statics::NewProp_CategoryMap_ValueProp = { "CategoryMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FS_ElgPluginCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCategory_Statics::NewProp_CategoryNames = { "CategoryNames", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_PluginManager_eventGetPluginCategory_Parms, CategoryNames), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCategory_Statics::NewProp_CategoryNames_Inner = { "CategoryNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCategory_Statics::NewProp_CategoryMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCategory_Statics::NewProp_CategoryMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCategory_Statics::NewProp_CategoryMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCategory_Statics::NewProp_CategoryNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCategory_Statics::NewProp_CategoryNames_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|PluginManager" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "Get a map with array Category and all plugin for each category\n      As a bonus a sorted array with just the category" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_PluginManager, nullptr, "GetPluginCategory", sizeof(ElgEditorBP_PluginManager_eventGetPluginCategory_Parms), Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCategory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCategory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCount_Statics
	{
		struct ElgEditorBP_PluginManager_eventGetPluginCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_PluginManager_eventGetPluginCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|PluginManager" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_PluginManager, nullptr, "GetPluginCount", sizeof(ElgEditorBP_PluginManager_eventGetPluginCount_Parms), Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescription_Statics
	{
		struct ElgEditorBP_PluginManager_eventGetPluginDescription_Parms
		{
			FString PluginName;
			FS_ElgPluginDescriptor Descriptor;
			EBPEditorOutputValidBranch Branches;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Descriptor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PluginName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PluginName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescription_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_PluginManager_eventGetPluginDescription_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescription_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescription_Statics::NewProp_Descriptor = { "Descriptor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_PluginManager_eventGetPluginDescription_Parms, Descriptor), Z_Construct_UScriptStruct_FS_ElgPluginDescriptor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescription_Statics::NewProp_PluginName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescription_Statics::NewProp_PluginName = { "PluginName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_PluginManager_eventGetPluginDescription_Parms, PluginName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescription_Statics::NewProp_PluginName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescription_Statics::NewProp_PluginName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescription_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescription_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescription_Statics::NewProp_Descriptor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescription_Statics::NewProp_PluginName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|PluginManager" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "Get Description with information about the plugin" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_PluginManager, nullptr, "GetPluginDescription", sizeof(ElgEditorBP_PluginManager_eventGetPluginDescription_Parms), Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescription_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescription_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescriptions_Statics
	{
		struct ElgEditorBP_PluginManager_eventGetPluginDescriptions_Parms
		{
			TArray<FString> PluginFriendlyNames;
			TMap<FString,FS_ElgPluginDescriptor> PluginMap;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PluginMap;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PluginMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PluginMap_ValueProp;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PluginFriendlyNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PluginFriendlyNames_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescriptions_Statics::NewProp_PluginMap = { "PluginMap", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_PluginManager_eventGetPluginDescriptions_Parms, PluginMap), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescriptions_Statics::NewProp_PluginMap_Key_KeyProp = { "PluginMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescriptions_Statics::NewProp_PluginMap_ValueProp = { "PluginMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FS_ElgPluginDescriptor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescriptions_Statics::NewProp_PluginFriendlyNames = { "PluginFriendlyNames", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_PluginManager_eventGetPluginDescriptions_Parms, PluginFriendlyNames), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescriptions_Statics::NewProp_PluginFriendlyNames_Inner = { "PluginFriendlyNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescriptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescriptions_Statics::NewProp_PluginMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescriptions_Statics::NewProp_PluginMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescriptions_Statics::NewProp_PluginMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescriptions_Statics::NewProp_PluginFriendlyNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescriptions_Statics::NewProp_PluginFriendlyNames_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescriptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|PluginManager" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "Get Descriptions with information about all plugins" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescriptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_PluginManager, nullptr, "GetPluginDescriptions", sizeof(ElgEditorBP_PluginManager_eventGetPluginDescriptions_Parms), Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescriptions_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescriptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescriptions_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescriptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescriptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescriptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginFriendlyName_Statics
	{
		struct ElgEditorBP_PluginManager_eventGetPluginFriendlyName_Parms
		{
			FString PluginName;
			FString FriendlyNanme;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendlyNanme;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PluginName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PluginName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginFriendlyName_Statics::NewProp_FriendlyNanme = { "FriendlyNanme", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_PluginManager_eventGetPluginFriendlyName_Parms, FriendlyNanme), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginFriendlyName_Statics::NewProp_PluginName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginFriendlyName_Statics::NewProp_PluginName = { "PluginName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_PluginManager_eventGetPluginFriendlyName_Parms, PluginName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginFriendlyName_Statics::NewProp_PluginName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginFriendlyName_Statics::NewProp_PluginName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginFriendlyName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginFriendlyName_Statics::NewProp_FriendlyNanme,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginFriendlyName_Statics::NewProp_PluginName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginFriendlyName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|PluginManager" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "Get a plugins friendly name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginFriendlyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_PluginManager, nullptr, "GetPluginFriendlyName", sizeof(ElgEditorBP_PluginManager_eventGetPluginFriendlyName_Parms), Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginFriendlyName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginFriendlyName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginFriendlyName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginFriendlyName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginFriendlyName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginFriendlyName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTexture_Statics
	{
		struct ElgEditorBP_PluginManager_eventGetPluginIconTexture_Parms
		{
			FString PluginName;
			EBPEditorOutputResultBranch Branches;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PluginName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PluginName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_PluginManager_eventGetPluginIconTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTexture_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_PluginManager_eventGetPluginIconTexture_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputResultBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTexture_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTexture_Statics::NewProp_PluginName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTexture_Statics::NewProp_PluginName = { "PluginName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_PluginManager_eventGetPluginIconTexture_Parms, PluginName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTexture_Statics::NewProp_PluginName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTexture_Statics::NewProp_PluginName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTexture_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTexture_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTexture_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTexture_Statics::NewProp_PluginName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|PluginManager" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "Get the Icon texture for a plugin" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_PluginManager, nullptr, "GetPluginIconTexture", sizeof(ElgEditorBP_PluginManager_eventGetPluginIconTexture_Parms), Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTexture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTexture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextureByPath_Statics
	{
		struct ElgEditorBP_PluginManager_eventGetPluginIconTextureByPath_Parms
		{
			FString IconPath;
			EBPEditorOutputResultBranch Branches;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IconPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextureByPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_PluginManager_eventGetPluginIconTextureByPath_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextureByPath_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_PluginManager_eventGetPluginIconTextureByPath_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputResultBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextureByPath_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextureByPath_Statics::NewProp_IconPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextureByPath_Statics::NewProp_IconPath = { "IconPath", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_PluginManager_eventGetPluginIconTextureByPath_Parms, IconPath), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextureByPath_Statics::NewProp_IconPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextureByPath_Statics::NewProp_IconPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextureByPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextureByPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextureByPath_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextureByPath_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextureByPath_Statics::NewProp_IconPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextureByPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|PluginManager" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "Get the Icon texture for a plugin" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextureByPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_PluginManager, nullptr, "GetPluginIconTextureByPath", sizeof(ElgEditorBP_PluginManager_eventGetPluginIconTextureByPath_Parms), Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextureByPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextureByPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextureByPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextureByPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextureByPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextureByPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextures_Statics
	{
		struct ElgEditorBP_PluginManager_eventGetPluginIconTextures_Parms
		{
			TMap<FString,UTexture2D*> PluginIcons;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PluginIcons;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PluginIcons_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PluginIcons_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextures_Statics::NewProp_PluginIcons = { "PluginIcons", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_PluginManager_eventGetPluginIconTextures_Parms, PluginIcons), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextures_Statics::NewProp_PluginIcons_Key_KeyProp = { "PluginIcons_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextures_Statics::NewProp_PluginIcons_ValueProp = { "PluginIcons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextures_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextures_Statics::NewProp_PluginIcons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextures_Statics::NewProp_PluginIcons_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextures_Statics::NewProp_PluginIcons_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextures_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|PluginManager" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "Get a Map with filepath, texture" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_PluginManager, nullptr, "GetPluginIconTextures", sizeof(ElgEditorBP_PluginManager_eventGetPluginIconTextures_Parms), Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextures_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextures_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextures_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_PluginManager_PackagePlugin_Statics
	{
		struct ElgEditorBP_PluginManager_eventPackagePlugin_Parms
		{
			FString PluginName;
			FString OutputDirectory;
			EBPEditorOutputResultBranch Branches;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutputDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PluginName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PluginName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_PackagePlugin_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_PluginManager_eventPackagePlugin_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputResultBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_PackagePlugin_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_PackagePlugin_Statics::NewProp_OutputDirectory = { "OutputDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_PluginManager_eventPackagePlugin_Parms, OutputDirectory), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_PluginManager_PackagePlugin_Statics::NewProp_PluginName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_PackagePlugin_Statics::NewProp_PluginName = { "PluginName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_PluginManager_eventPackagePlugin_Parms, PluginName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_PluginManager_PackagePlugin_Statics::NewProp_PluginName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_PackagePlugin_Statics::NewProp_PluginName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_PluginManager_PackagePlugin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_PackagePlugin_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_PackagePlugin_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_PackagePlugin_Statics::NewProp_OutputDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_PackagePlugin_Statics::NewProp_PluginName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_PluginManager_PackagePlugin_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|PluginManager" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "Package the plugin to the specified Output dir" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_PluginManager_PackagePlugin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_PluginManager, nullptr, "PackagePlugin", sizeof(ElgEditorBP_PluginManager_eventPackagePlugin_Parms), Z_Construct_UFunction_UElgEditorBP_PluginManager_PackagePlugin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_PackagePlugin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_PluginManager_PackagePlugin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_PackagePlugin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_PluginManager_PackagePlugin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_PluginManager_PackagePlugin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled_Statics
	{
		struct ElgEditorBP_PluginManager_eventSetPluginEnabled_Parms
		{
			FString PluginName;
			bool bEnable;
			bool bSkipIfDependencies;
			EBPEditorOutputResultBranch Branches;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipIfDependencies_MetaData[];
#endif
		static void NewProp_bSkipIfDependencies_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipIfDependencies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PluginName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PluginName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_PluginManager_eventSetPluginEnabled_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputResultBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled_Statics::NewProp_bSkipIfDependencies_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled_Statics::NewProp_bSkipIfDependencies_SetBit(void* Obj)
	{
		((ElgEditorBP_PluginManager_eventSetPluginEnabled_Parms*)Obj)->bSkipIfDependencies = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled_Statics::NewProp_bSkipIfDependencies = { "bSkipIfDependencies", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_PluginManager_eventSetPluginEnabled_Parms), &Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled_Statics::NewProp_bSkipIfDependencies_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled_Statics::NewProp_bSkipIfDependencies_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled_Statics::NewProp_bSkipIfDependencies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled_Statics::NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((ElgEditorBP_PluginManager_eventSetPluginEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_PluginManager_eventSetPluginEnabled_Parms), &Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled_Statics::NewProp_bEnable_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled_Statics::NewProp_bEnable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled_Statics::NewProp_PluginName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled_Statics::NewProp_PluginName = { "PluginName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_PluginManager_eventSetPluginEnabled_Parms, PluginName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled_Statics::NewProp_PluginName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled_Statics::NewProp_PluginName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled_Statics::NewProp_bSkipIfDependencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled_Statics::NewProp_bEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled_Statics::NewProp_PluginName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|PluginManager" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ToolTip", "Enable or Disable the plugin.\n              Need to restart to see the effect." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_PluginManager, nullptr, "SetPluginEnabled", sizeof(ElgEditorBP_PluginManager_eventSetPluginEnabled_Parms), Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UElgEditorBP_PluginManager_NoRegister()
	{
		return UElgEditorBP_PluginManager::StaticClass();
	}
	struct Z_Construct_UClass_UElgEditorBP_PluginManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UElgEditorBP_PluginManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ElgEditorScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UElgEditorBP_PluginManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UElgEditorBP_PluginManager_DisablePlugin, "DisablePlugin" }, // 4092174825
		{ &Z_Construct_UFunction_UElgEditorBP_PluginManager_EnablePlugin, "EnablePlugin" }, // 2399932532
		{ &Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCategory, "GetPluginCategory" }, // 591762639
		{ &Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginCount, "GetPluginCount" }, // 3505994965
		{ &Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescription, "GetPluginDescription" }, // 2142623772
		{ &Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginDescriptions, "GetPluginDescriptions" }, // 1686623873
		{ &Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginFriendlyName, "GetPluginFriendlyName" }, // 3770627869
		{ &Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTexture, "GetPluginIconTexture" }, // 1585494243
		{ &Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextureByPath, "GetPluginIconTextureByPath" }, // 418696230
		{ &Z_Construct_UFunction_UElgEditorBP_PluginManager_GetPluginIconTextures, "GetPluginIconTextures" }, // 4205552862
		{ &Z_Construct_UFunction_UElgEditorBP_PluginManager_PackagePlugin, "PackagePlugin" }, // 4073732794
		{ &Z_Construct_UFunction_UElgEditorBP_PluginManager_SetPluginEnabled, "SetPluginEnabled" }, // 3626989037
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgEditorBP_PluginManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprints/ElgEditorBP_PluginManager.h" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_PluginManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UElgEditorBP_PluginManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElgEditorBP_PluginManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UElgEditorBP_PluginManager_Statics::ClassParams = {
		&UElgEditorBP_PluginManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UElgEditorBP_PluginManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UElgEditorBP_PluginManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UElgEditorBP_PluginManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UElgEditorBP_PluginManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UElgEditorBP_PluginManager, 2746136952);
	template<> ELGEDITORSCRIPTING_API UClass* StaticClass<UElgEditorBP_PluginManager>()
	{
		return UElgEditorBP_PluginManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UElgEditorBP_PluginManager(Z_Construct_UClass_UElgEditorBP_PluginManager, &UElgEditorBP_PluginManager::StaticClass, TEXT("/Script/ElgEditorScripting"), TEXT("UElgEditorBP_PluginManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UElgEditorBP_PluginManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
