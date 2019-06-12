// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElgEditorScripting/Public/Blueprints/ElgEditorBP_Assets.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElgEditorBP_Assets() {}
// Cross Module References
	ELGEDITORSCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FS_ElgAssetMetaData();
	UPackage* Z_Construct_UPackage__Script_ElgEditorScripting();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorBP_Assets_NoRegister();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorBP_Assets();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectors();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject();
	ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch();
	ELGEDITORSCRIPTING_API UEnum* Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetSelectedPaths();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs();
// End Cross Module References
class UScriptStruct* FS_ElgAssetMetaData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELGEDITORSCRIPTING_API uint32 Get_Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_ElgAssetMetaData, Z_Construct_UPackage__Script_ElgEditorScripting(), TEXT("S_ElgAssetMetaData"), sizeof(FS_ElgAssetMetaData), Get_Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Hash());
	}
	return Singleton;
}
template<> ELGEDITORSCRIPTING_API UScriptStruct* StaticStruct<FS_ElgAssetMetaData>()
{
	return FS_ElgAssetMetaData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FS_ElgAssetMetaData(FS_ElgAssetMetaData::StaticStruct, TEXT("/Script/ElgEditorScripting"), TEXT("S_ElgAssetMetaData"), false, nullptr, nullptr);
static struct FScriptStruct_ElgEditorScripting_StaticRegisterNativesFS_ElgAssetMetaData
{
	FScriptStruct_ElgEditorScripting_StaticRegisterNativesFS_ElgAssetMetaData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("S_ElgAssetMetaData")),new UScriptStruct::TCppStructOps<FS_ElgAssetMetaData>);
	}
} ScriptStruct_ElgEditorScripting_StaticRegisterNativesFS_ElgAssetMetaData;
	struct Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MetaData;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MetaData_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MetaData_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keys;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Keys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_ElgAssetMetaData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_MetaData_MetaData[] = {
		{ "Category", "AssetMetaData" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "The real Meta Data map" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgAssetMetaData, MetaData), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_MetaData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_MetaData_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_MetaData_Key_KeyProp = { "MetaData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_MetaData_ValueProp = { "MetaData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_Keys_MetaData[] = {
		{ "Category", "AssetMetaData" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Sorted Meta Data keys" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgAssetMetaData, Keys), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_Keys_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_Keys_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_Object_MetaData[] = {
		{ "Category", "AssetMetaData" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "The owner object of the meta data" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgAssetMetaData, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_Object_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_Object_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_MetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_MetaData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_MetaData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_Keys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_Keys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::NewProp_Object,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElgEditorScripting,
		nullptr,
		&NewStructOps,
		"S_ElgAssetMetaData",
		sizeof(FS_ElgAssetMetaData),
		alignof(FS_ElgAssetMetaData),
		Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FS_ElgAssetMetaData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ElgEditorScripting();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("S_ElgAssetMetaData"), sizeof(FS_ElgAssetMetaData), Get_Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Hash() { return 1969176009U; }
	void UElgEditorBP_Assets::StaticRegisterNativesUElgEditorBP_Assets()
	{
		UClass* Class = UElgEditorBP_Assets::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FixRedirectors", &UElgEditorBP_Assets::execFixRedirectors },
			{ "FixRedirectorsByPath", &UElgEditorBP_Assets::execFixRedirectorsByPath },
			{ "GetAssetDataFromObject", &UElgEditorBP_Assets::execGetAssetDataFromObject },
			{ "GetAssetDataFromPath", &UElgEditorBP_Assets::execGetAssetDataFromPath },
			{ "GetAssetDatasByPath", &UElgEditorBP_Assets::execGetAssetDatasByPath },
			{ "GetAssetDateModified", &UElgEditorBP_Assets::execGetAssetDateModified },
			{ "GetAssetDateModifiedAsString", &UElgEditorBP_Assets::execGetAssetDateModifiedAsString },
			{ "GetAssetDependencies", &UElgEditorBP_Assets::execGetAssetDependencies },
			{ "GetAssetDependenciesByObject", &UElgEditorBP_Assets::execGetAssetDependenciesByObject },
			{ "GetAssetDependenciesByPath", &UElgEditorBP_Assets::execGetAssetDependenciesByPath },
			{ "GetAssetDiskPath", &UElgEditorBP_Assets::execGetAssetDiskPath },
			{ "GetAssetMetaData", &UElgEditorBP_Assets::execGetAssetMetaData },
			{ "GetAssetMetaDataBranch", &UElgEditorBP_Assets::execGetAssetMetaDataBranch },
			{ "GetAssetName", &UElgEditorBP_Assets::execGetAssetName },
			{ "GetAssetObjectMetaData", &UElgEditorBP_Assets::execGetAssetObjectMetaData },
			{ "GetAssetObjectMetaDataBranch", &UElgEditorBP_Assets::execGetAssetObjectMetaDataBranch },
			{ "GetAssetObjects", &UElgEditorBP_Assets::execGetAssetObjects },
			{ "GetAssetObjectsByPath", &UElgEditorBP_Assets::execGetAssetObjectsByPath },
			{ "GetAssetObjectsMetaData", &UElgEditorBP_Assets::execGetAssetObjectsMetaData },
			{ "GetAssetObjectsWithMetaDataKey", &UElgEditorBP_Assets::execGetAssetObjectsWithMetaDataKey },
			{ "GetAssetPath", &UElgEditorBP_Assets::execGetAssetPath },
			{ "GetAssetPathFromObject", &UElgEditorBP_Assets::execGetAssetPathFromObject },
			{ "GetAssetReferencers", &UElgEditorBP_Assets::execGetAssetReferencers },
			{ "GetAssetReferencersByObject", &UElgEditorBP_Assets::execGetAssetReferencersByObject },
			{ "GetAssetReferencersByPath", &UElgEditorBP_Assets::execGetAssetReferencersByPath },
			{ "GetAssetTags", &UElgEditorBP_Assets::execGetAssetTags },
			{ "GetMetaDataKeyBranch", &UElgEditorBP_Assets::execGetMetaDataKeyBranch },
			{ "GetSelectedPaths", &UElgEditorBP_Assets::execGetSelectedPaths },
			{ "HasAssetRefs", &UElgEditorBP_Assets::execHasAssetRefs },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectors_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectors_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Fix all redirectors in the Content folder /Game/..." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "FixRedirectors", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics
	{
		struct ElgEditorBP_Assets_eventFixRedirectorsByPath_Parms
		{
			FName Path;
			bool RecursivePaths;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecursivePaths_MetaData[];
#endif
		static void NewProp_RecursivePaths_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RecursivePaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::NewProp_RecursivePaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::NewProp_RecursivePaths_SetBit(void* Obj)
	{
		((ElgEditorBP_Assets_eventFixRedirectorsByPath_Parms*)Obj)->RecursivePaths = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::NewProp_RecursivePaths = { "RecursivePaths", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_Assets_eventFixRedirectorsByPath_Parms), &Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::NewProp_RecursivePaths_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::NewProp_RecursivePaths_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::NewProp_RecursivePaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventFixRedirectorsByPath_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::NewProp_Path_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::NewProp_RecursivePaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "CPP_Default_RecursivePaths", "true" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Fix all redirectors in the specified path and its sub folders" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "FixRedirectorsByPath", sizeof(ElgEditorBP_Assets_eventFixRedirectorsByPath_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetDataFromObject_Parms
		{
			const UObject* Object;
			FAssetData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDataFromObject_Parms, ReturnValue), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDataFromObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject_Statics::NewProp_Object_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject_Statics::NewProp_Object_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get the AssetData by UObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetDataFromObject", sizeof(ElgEditorBP_Assets_eventGetAssetDataFromObject_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetDataFromPath_Parms
		{
			FString AssetPath;
			FAssetData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDataFromPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDataFromPath_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath_Statics::NewProp_AssetPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath_Statics::NewProp_AssetPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath_Statics::NewProp_AssetPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get the AssetData by its path" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetDataFromPath", sizeof(ElgEditorBP_Assets_eventGetAssetDataFromPath_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetDatasByPath_Parms
		{
			TArray<FString> AssetPaths;
			TArray<FAssetData> AssetDatas;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetDatas;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetPaths;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetPaths_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::NewProp_AssetDatas = { "AssetDatas", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDatasByPath_Parms, AssetDatas), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::NewProp_AssetDatas_Inner = { "AssetDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::NewProp_AssetPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::NewProp_AssetPaths = { "AssetPaths", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDatasByPath_Parms, AssetPaths), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::NewProp_AssetPaths_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::NewProp_AssetPaths_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::NewProp_AssetPaths_Inner = { "AssetPaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::NewProp_AssetDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::NewProp_AssetDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::NewProp_AssetPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::NewProp_AssetPaths_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get the asset data array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetDatasByPath", sizeof(ElgEditorBP_Assets_eventGetAssetDatasByPath_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetDateModified_Parms
		{
			FAssetData AssetDataStruct;
			FDateTime AssetDateTime;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetDateTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetDataStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetDataStruct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified_Statics::NewProp_AssetDateTime = { "AssetDateTime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDateModified_Parms, AssetDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified_Statics::NewProp_AssetDataStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified_Statics::NewProp_AssetDataStruct = { "AssetDataStruct", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDateModified_Parms, AssetDataStruct), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified_Statics::NewProp_AssetDataStruct_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified_Statics::NewProp_AssetDataStruct_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified_Statics::NewProp_AssetDateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified_Statics::NewProp_AssetDataStruct,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get the DateTime object for the asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetDateModified", sizeof(ElgEditorBP_Assets_eventGetAssetDateModified_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetDateModifiedAsString_Parms
		{
			FAssetData AssetDataStruct;
			FString AssetDateTime;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetDateTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetDataStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetDataStruct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString_Statics::NewProp_AssetDateTime = { "AssetDateTime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDateModifiedAsString_Parms, AssetDateTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString_Statics::NewProp_AssetDataStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString_Statics::NewProp_AssetDataStruct = { "AssetDataStruct", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDateModifiedAsString_Parms, AssetDataStruct), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString_Statics::NewProp_AssetDataStruct_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString_Statics::NewProp_AssetDataStruct_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString_Statics::NewProp_AssetDateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString_Statics::NewProp_AssetDataStruct,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get the DateTime as a string for the asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetDateModifiedAsString", sizeof(ElgEditorBP_Assets_eventGetAssetDateModifiedAsString_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetDependencies_Parms
		{
			FAssetData AssetData;
			TArray<FString> Dependencies;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Dependencies;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Dependencies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics::NewProp_Dependencies = { "Dependencies", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDependencies_Parms, Dependencies), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics::NewProp_Dependencies_Inner = { "Dependencies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics::NewProp_AssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics::NewProp_AssetData = { "AssetData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDependencies_Parms, AssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics::NewProp_AssetData_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics::NewProp_AssetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics::NewProp_Dependencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics::NewProp_Dependencies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics::NewProp_AssetData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get all dependencies, hard and soft, to the asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetDependencies", sizeof(ElgEditorBP_Assets_eventGetAssetDependencies_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetDependenciesByObject_Parms
		{
			const UObject* Object;
			TArray<FString> Dependencies;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Dependencies;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Dependencies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics::NewProp_Dependencies = { "Dependencies", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDependenciesByObject_Parms, Dependencies), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics::NewProp_Dependencies_Inner = { "Dependencies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDependenciesByObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics::NewProp_Object_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics::NewProp_Object_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics::NewProp_Dependencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics::NewProp_Dependencies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get all reference, hard and soft, to the asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetDependenciesByObject", sizeof(ElgEditorBP_Assets_eventGetAssetDependenciesByObject_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetDependenciesByPath_Parms
		{
			FString AssetPath;
			TArray<FString> Dependencies;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Dependencies;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Dependencies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics::NewProp_Dependencies = { "Dependencies", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDependenciesByPath_Parms, Dependencies), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics::NewProp_Dependencies_Inner = { "Dependencies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDependenciesByPath_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics::NewProp_AssetPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics::NewProp_AssetPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics::NewProp_Dependencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics::NewProp_Dependencies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics::NewProp_AssetPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get all dependencies, hard and soft, to the asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetDependenciesByPath", sizeof(ElgEditorBP_Assets_eventGetAssetDependenciesByPath_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetDiskPath_Parms
		{
			FAssetData AssetDataStruct;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetDataStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetDataStruct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDiskPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath_Statics::NewProp_AssetDataStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath_Statics::NewProp_AssetDataStruct = { "AssetDataStruct", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetDiskPath_Parms, AssetDataStruct), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath_Statics::NewProp_AssetDataStruct_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath_Statics::NewProp_AssetDataStruct_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath_Statics::NewProp_AssetDataStruct,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get the full disk path for the asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetDiskPath", sizeof(ElgEditorBP_Assets_eventGetAssetDiskPath_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetMetaData_Parms
		{
			FAssetData AssetDataStruct;
			bool Success;
			FS_ElgAssetMetaData MetaData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetaData;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetDataStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetDataStruct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetMetaData_Parms, MetaData), Z_Construct_UScriptStruct_FS_ElgAssetMetaData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((ElgEditorBP_Assets_eventGetAssetMetaData_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_Assets_eventGetAssetMetaData_Parms), &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::NewProp_AssetDataStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::NewProp_AssetDataStruct = { "AssetDataStruct", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetMetaData_Parms, AssetDataStruct), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::NewProp_AssetDataStruct_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::NewProp_AssetDataStruct_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::NewProp_MetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::NewProp_AssetDataStruct,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get the assets meta data struct, Success is true if it has meta data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetMetaData", sizeof(ElgEditorBP_Assets_eventGetAssetMetaData_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetMetaDataBranch_Parms
		{
			FAssetData AssetDataStruct;
			FS_ElgAssetMetaData MetaData;
			EBPEditorOutputValidBranch Branches;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetaData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetDataStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetDataStruct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetMetaDataBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetMetaDataBranch_Parms, MetaData), Z_Construct_UScriptStruct_FS_ElgAssetMetaData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::NewProp_AssetDataStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::NewProp_AssetDataStruct = { "AssetDataStruct", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetMetaDataBranch_Parms, AssetDataStruct), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::NewProp_AssetDataStruct_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::NewProp_AssetDataStruct_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::NewProp_MetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::NewProp_AssetDataStruct,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get the assets meta data struct branch" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetMetaDataBranch", sizeof(ElgEditorBP_Assets_eventGetAssetMetaDataBranch_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetName_Parms
		{
			FAssetData AssetDataStruct;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetDataStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetDataStruct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName_Statics::NewProp_AssetDataStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName_Statics::NewProp_AssetDataStruct = { "AssetDataStruct", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetName_Parms, AssetDataStruct), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName_Statics::NewProp_AssetDataStruct_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName_Statics::NewProp_AssetDataStruct_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName_Statics::NewProp_AssetDataStruct,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Return the name of the asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetName", sizeof(ElgEditorBP_Assets_eventGetAssetName_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetObjectMetaData_Parms
		{
			UObject* AssetObject;
			bool Success;
			FS_ElgAssetMetaData MetaData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetaData;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetObjectMetaData_Parms, MetaData), Z_Construct_UScriptStruct_FS_ElgAssetMetaData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((ElgEditorBP_Assets_eventGetAssetObjectMetaData_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_Assets_eventGetAssetObjectMetaData_Parms), &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData_Statics::NewProp_AssetObject = { "AssetObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetObjectMetaData_Parms, AssetObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData_Statics::NewProp_MetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData_Statics::NewProp_AssetObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get the asset objects meta data struct, Success is true if it has meta data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetObjectMetaData", sizeof(ElgEditorBP_Assets_eventGetAssetObjectMetaData_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetObjectMetaDataBranch_Parms
		{
			UObject* AssetObject;
			FS_ElgAssetMetaData MetaData;
			EBPEditorOutputValidBranch Branches;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetaData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetObjectMetaDataBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetObjectMetaDataBranch_Parms, MetaData), Z_Construct_UScriptStruct_FS_ElgAssetMetaData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch_Statics::NewProp_AssetObject = { "AssetObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetObjectMetaDataBranch_Parms, AssetObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch_Statics::NewProp_MetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch_Statics::NewProp_AssetObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get the asset objects meta data struct branch" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetObjectMetaDataBranch", sizeof(ElgEditorBP_Assets_eventGetAssetObjectMetaDataBranch_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetObjects_Parms
		{
			TArray<FAssetData> AssetDataStructs;
			TArray<UObject*> AssetObjects;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetDataStructs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetDataStructs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetDataStructs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::NewProp_AssetObjects = { "AssetObjects", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetObjects_Parms, AssetObjects), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::NewProp_AssetObjects_Inner = { "AssetObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::NewProp_AssetDataStructs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::NewProp_AssetDataStructs = { "AssetDataStructs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetObjects_Parms, AssetDataStructs), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::NewProp_AssetDataStructs_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::NewProp_AssetDataStructs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::NewProp_AssetDataStructs_Inner = { "AssetDataStructs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::NewProp_AssetObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::NewProp_AssetObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::NewProp_AssetDataStructs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::NewProp_AssetDataStructs_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get the asset data as asset objects array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetObjects", sizeof(ElgEditorBP_Assets_eventGetAssetObjects_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetObjectsByPath_Parms
		{
			TArray<FString> AssetPaths;
			TArray<UObject*> AssetObjects;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetPaths;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetPaths_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::NewProp_AssetObjects = { "AssetObjects", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetObjectsByPath_Parms, AssetObjects), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::NewProp_AssetObjects_Inner = { "AssetObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::NewProp_AssetPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::NewProp_AssetPaths = { "AssetPaths", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetObjectsByPath_Parms, AssetPaths), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::NewProp_AssetPaths_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::NewProp_AssetPaths_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::NewProp_AssetPaths_Inner = { "AssetPaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::NewProp_AssetObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::NewProp_AssetObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::NewProp_AssetPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::NewProp_AssetPaths_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get the asset data as asset objects array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetObjectsByPath", sizeof(ElgEditorBP_Assets_eventGetAssetObjectsByPath_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetObjectsMetaData_Parms
		{
			TArray<UObject*> AssetObjects;
			bool SkipWithoutMetaData;
			TMap<UObject*,FS_ElgAssetMetaData> ReturnValue;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipWithoutMetaData_MetaData[];
#endif
		static void NewProp_SkipWithoutMetaData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SkipWithoutMetaData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetObjects_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetObjectsMetaData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FS_ElgAssetMetaData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_SkipWithoutMetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_SkipWithoutMetaData_SetBit(void* Obj)
	{
		((ElgEditorBP_Assets_eventGetAssetObjectsMetaData_Parms*)Obj)->SkipWithoutMetaData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_SkipWithoutMetaData = { "SkipWithoutMetaData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_Assets_eventGetAssetObjectsMetaData_Parms), &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_SkipWithoutMetaData_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_SkipWithoutMetaData_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_SkipWithoutMetaData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_AssetObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_AssetObjects = { "AssetObjects", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetObjectsMetaData_Parms, AssetObjects), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_AssetObjects_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_AssetObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_AssetObjects_Inner = { "AssetObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_SkipWithoutMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_AssetObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::NewProp_AssetObjects_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "CPP_Default_SkipWithoutMetaData", "true" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get all MetaData for the AssetObjects in a struct with an sorted Keys array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetObjectsMetaData", sizeof(ElgEditorBP_Assets_eventGetAssetObjectsMetaData_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetObjectsWithMetaDataKey_Parms
		{
			TArray<UObject*> AssetObjects;
			FName MetaDataKey;
			TMap<UObject*,FS_ElgAssetMetaData> ReturnValue;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaDataKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MetaDataKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetObjects_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetObjectsWithMetaDataKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FS_ElgAssetMetaData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_MetaDataKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_MetaDataKey = { "MetaDataKey", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetObjectsWithMetaDataKey_Parms, MetaDataKey), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_MetaDataKey_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_MetaDataKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_AssetObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_AssetObjects = { "AssetObjects", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetObjectsWithMetaDataKey_Parms, AssetObjects), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_AssetObjects_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_AssetObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_AssetObjects_Inner = { "AssetObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_MetaDataKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_AssetObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::NewProp_AssetObjects_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get all AssetObjects that has a Meta Data Key" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetObjectsWithMetaDataKey", sizeof(ElgEditorBP_Assets_eventGetAssetObjectsWithMetaDataKey_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetPath_Parms
		{
			FAssetData AssetDataStruct;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetDataStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetDataStruct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath_Statics::NewProp_AssetDataStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath_Statics::NewProp_AssetDataStruct = { "AssetDataStruct", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetPath_Parms, AssetDataStruct), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath_Statics::NewProp_AssetDataStruct_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath_Statics::NewProp_AssetDataStruct_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath_Statics::NewProp_AssetDataStruct,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Return the asset path name of the asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetPath", sizeof(ElgEditorBP_Assets_eventGetAssetPath_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetPathFromObject_Parms
		{
			const UObject* Object;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetPathFromObject_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetPathFromObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject_Statics::NewProp_Object_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject_Statics::NewProp_Object_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get the AssetPath from a UObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetPathFromObject", sizeof(ElgEditorBP_Assets_eventGetAssetPathFromObject_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetReferencers_Parms
		{
			FAssetData AssetData;
			TArray<FString> Referencers;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Referencers;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Referencers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics::NewProp_Referencers = { "Referencers", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetReferencers_Parms, Referencers), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics::NewProp_Referencers_Inner = { "Referencers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics::NewProp_AssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics::NewProp_AssetData = { "AssetData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetReferencers_Parms, AssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics::NewProp_AssetData_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics::NewProp_AssetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics::NewProp_Referencers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics::NewProp_Referencers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics::NewProp_AssetData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get all reference, hard and soft, to the asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetReferencers", sizeof(ElgEditorBP_Assets_eventGetAssetReferencers_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetReferencersByObject_Parms
		{
			const UObject* Object;
			TArray<FString> Referencers;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Referencers;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Referencers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics::NewProp_Referencers = { "Referencers", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetReferencersByObject_Parms, Referencers), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics::NewProp_Referencers_Inner = { "Referencers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetReferencersByObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics::NewProp_Object_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics::NewProp_Object_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics::NewProp_Referencers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics::NewProp_Referencers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get all reference, hard and soft, to the asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetReferencersByObject", sizeof(ElgEditorBP_Assets_eventGetAssetReferencersByObject_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetReferencersByPath_Parms
		{
			FString AssetPath;
			TArray<FString> Referencers;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Referencers;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Referencers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics::NewProp_Referencers = { "Referencers", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetReferencersByPath_Parms, Referencers), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics::NewProp_Referencers_Inner = { "Referencers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetReferencersByPath_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics::NewProp_AssetPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics::NewProp_AssetPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics::NewProp_Referencers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics::NewProp_Referencers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics::NewProp_AssetPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Get all reference, hard and soft, to the asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetReferencersByPath", sizeof(ElgEditorBP_Assets_eventGetAssetReferencersByPath_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics
	{
		struct ElgEditorBP_Assets_eventGetAssetTags_Parms
		{
			FAssetData AssetDataStruct;
			TMap<FName,FString> Tags;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Tags;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tags_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tags_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetDataStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetDataStruct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetTags_Parms, Tags), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::NewProp_Tags_Key_KeyProp = { "Tags_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::NewProp_Tags_ValueProp = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::NewProp_AssetDataStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::NewProp_AssetDataStruct = { "AssetDataStruct", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetAssetTags_Parms, AssetDataStruct), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::NewProp_AssetDataStruct_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::NewProp_AssetDataStruct_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::NewProp_Tags_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::NewProp_Tags_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::NewProp_AssetDataStruct,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Return all the TagsAndValues the asset has." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetAssetTags", sizeof(ElgEditorBP_Assets_eventGetAssetTags_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics
	{
		struct ElgEditorBP_Assets_eventGetMetaDataKeyBranch_Parms
		{
			UObject* AssetObject;
			FName Key;
			EBPEditorOutputValidBranch Branches;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetMetaDataKeyBranch_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetMetaDataKeyBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetMetaDataKeyBranch_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::NewProp_AssetObject = { "AssetObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetMetaDataKeyBranch_Parms, AssetObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::NewProp_AssetObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Return the meta data for the key with branch output pins" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetMetaDataKeyBranch", sizeof(ElgEditorBP_Assets_eventGetMetaDataKeyBranch_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_GetSelectedPaths_Statics
	{
		struct ElgEditorBP_Assets_eventGetSelectedPaths_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetSelectedPaths_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventGetSelectedPaths_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_GetSelectedPaths_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_GetSelectedPaths_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetSelectedPaths_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_GetSelectedPaths_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_GetSelectedPaths_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Return the current selected Folder paths" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_GetSelectedPaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "GetSelectedPaths", sizeof(ElgEditorBP_Assets_eventGetSelectedPaths_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_GetSelectedPaths_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetSelectedPaths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_GetSelectedPaths_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_GetSelectedPaths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_GetSelectedPaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_GetSelectedPaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics
	{
		struct ElgEditorBP_Assets_eventHasAssetRefs_Parms
		{
			FAssetData AssetData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorBP_Assets_eventHasAssetRefs_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_Assets_eventHasAssetRefs_Parms), &Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics::NewProp_AssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics::NewProp_AssetData = { "AssetData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Assets_eventHasAssetRefs_Parms, AssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics::NewProp_AssetData_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics::NewProp_AssetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics::NewProp_AssetData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Asset" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
		{ "ToolTip", "Check if the Asset has any ref/dep, if its a new asset it might not have anything for a while..." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Assets, nullptr, "HasAssetRefs", sizeof(ElgEditorBP_Assets_eventHasAssetRefs_Parms), Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UElgEditorBP_Assets_NoRegister()
	{
		return UElgEditorBP_Assets::StaticClass();
	}
	struct Z_Construct_UClass_UElgEditorBP_Assets_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UElgEditorBP_Assets_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ElgEditorScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UElgEditorBP_Assets_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectors, "FixRedirectors" }, // 2312018516
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_FixRedirectorsByPath, "FixRedirectorsByPath" }, // 343119377
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromObject, "GetAssetDataFromObject" }, // 1846789065
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDataFromPath, "GetAssetDataFromPath" }, // 1916472441
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDatasByPath, "GetAssetDatasByPath" }, // 3434486846
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModified, "GetAssetDateModified" }, // 446261682
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDateModifiedAsString, "GetAssetDateModifiedAsString" }, // 673018241
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependencies, "GetAssetDependencies" }, // 1801501981
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByObject, "GetAssetDependenciesByObject" }, // 1079901288
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDependenciesByPath, "GetAssetDependenciesByPath" }, // 2918125469
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetDiskPath, "GetAssetDiskPath" }, // 3948888583
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaData, "GetAssetMetaData" }, // 2231102275
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetMetaDataBranch, "GetAssetMetaDataBranch" }, // 1238896412
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetName, "GetAssetName" }, // 1516179412
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaData, "GetAssetObjectMetaData" }, // 2207844333
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectMetaDataBranch, "GetAssetObjectMetaDataBranch" }, // 2903551139
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjects, "GetAssetObjects" }, // 708900412
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsByPath, "GetAssetObjectsByPath" }, // 472295852
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsMetaData, "GetAssetObjectsMetaData" }, // 2974201296
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetObjectsWithMetaDataKey, "GetAssetObjectsWithMetaDataKey" }, // 1896784727
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPath, "GetAssetPath" }, // 2988434038
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetPathFromObject, "GetAssetPathFromObject" }, // 1301175884
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencers, "GetAssetReferencers" }, // 1690179757
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByObject, "GetAssetReferencersByObject" }, // 3184474219
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetReferencersByPath, "GetAssetReferencersByPath" }, // 2760579027
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetAssetTags, "GetAssetTags" }, // 1302152709
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetMetaDataKeyBranch, "GetMetaDataKeyBranch" }, // 2028471875
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_GetSelectedPaths, "GetSelectedPaths" }, // 2216241779
		{ &Z_Construct_UFunction_UElgEditorBP_Assets_HasAssetRefs, "HasAssetRefs" }, // 2769582409
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgEditorBP_Assets_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprints/ElgEditorBP_Assets.h" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Assets.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UElgEditorBP_Assets_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElgEditorBP_Assets>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UElgEditorBP_Assets_Statics::ClassParams = {
		&UElgEditorBP_Assets::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UElgEditorBP_Assets_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UElgEditorBP_Assets_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UElgEditorBP_Assets()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UElgEditorBP_Assets_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UElgEditorBP_Assets, 656773916);
	template<> ELGEDITORSCRIPTING_API UClass* StaticClass<UElgEditorBP_Assets>()
	{
		return UElgEditorBP_Assets::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UElgEditorBP_Assets(Z_Construct_UClass_UElgEditorBP_Assets, &UElgEditorBP_Assets::StaticClass, TEXT("/Script/ElgEditorScripting"), TEXT("UElgEditorBP_Assets"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UElgEditorBP_Assets);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
