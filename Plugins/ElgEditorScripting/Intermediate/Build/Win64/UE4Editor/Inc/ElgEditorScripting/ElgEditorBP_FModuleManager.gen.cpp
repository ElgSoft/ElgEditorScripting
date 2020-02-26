// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElgEditorScripting/Public/Blueprints/ElgEditorBP_FModuleManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElgEditorBP_FModuleManager() {}
// Cross Module References
	ELGEDITORSCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FS_ElgModuleStatus();
	UPackage* Z_Construct_UPackage__Script_ElgEditorScripting();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorBP_FModuleManager_NoRegister();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorBP_FModuleManager();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanDynamicReloadModule();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanHotReloadModule();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanRecompileModule();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanShutdownModule();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleNames();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModulesStatus();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleStatus();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_FModuleManager_IsModuleLoaded();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_FModuleManager_LoadModule();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_FModuleManager_RecompileModule();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_FModuleManager_ReloadModule();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_FModuleManager_UnloadModule();
// End Cross Module References
class UScriptStruct* FS_ElgModuleStatus::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELGEDITORSCRIPTING_API uint32 Get_Z_Construct_UScriptStruct_FS_ElgModuleStatus_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_ElgModuleStatus, Z_Construct_UPackage__Script_ElgEditorScripting(), TEXT("S_ElgModuleStatus"), sizeof(FS_ElgModuleStatus), Get_Z_Construct_UScriptStruct_FS_ElgModuleStatus_Hash());
	}
	return Singleton;
}
template<> ELGEDITORSCRIPTING_API UScriptStruct* StaticStruct<FS_ElgModuleStatus>()
{
	return FS_ElgModuleStatus::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FS_ElgModuleStatus(FS_ElgModuleStatus::StaticStruct, TEXT("/Script/ElgEditorScripting"), TEXT("S_ElgModuleStatus"), false, nullptr, nullptr);
static struct FScriptStruct_ElgEditorScripting_StaticRegisterNativesFS_ElgModuleStatus
{
	FScriptStruct_ElgEditorScripting_StaticRegisterNativesFS_ElgModuleStatus()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("S_ElgModuleStatus")),new UScriptStruct::TCppStructOps<FS_ElgModuleStatus>);
	}
} ScriptStruct_ElgEditorScripting_StaticRegisterNativesFS_ElgModuleStatus;
	struct Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanDynamicReload_MetaData[];
#endif
		static void NewProp_bCanDynamicReload_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanDynamicReload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanHotReload_MetaData[];
#endif
		static void NewProp_bCanHotReload_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanHotReload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanRecompile_MetaData[];
#endif
		static void NewProp_bCanRecompile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanRecompile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanShutDown_MetaData[];
#endif
		static void NewProp_bCanShutDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanShutDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsProjectModule_MetaData[];
#endif
		static void NewProp_bIsProjectModule_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsProjectModule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsGameModule_MetaData[];
#endif
		static void NewProp_bIsGameModule_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsGameModule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLoaded_MetaData[];
#endif
		static void NewProp_bIsLoaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLoaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_FModuleManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_ElgModuleStatus>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bCanDynamicReload_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_FModuleManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bCanDynamicReload_SetBit(void* Obj)
	{
		((FS_ElgModuleStatus*)Obj)->bCanDynamicReload = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bCanDynamicReload = { "bCanDynamicReload", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FS_ElgModuleStatus), &Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bCanDynamicReload_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bCanDynamicReload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bCanDynamicReload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bCanHotReload_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_FModuleManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bCanHotReload_SetBit(void* Obj)
	{
		((FS_ElgModuleStatus*)Obj)->bCanHotReload = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bCanHotReload = { "bCanHotReload", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FS_ElgModuleStatus), &Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bCanHotReload_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bCanHotReload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bCanHotReload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bCanRecompile_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_FModuleManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bCanRecompile_SetBit(void* Obj)
	{
		((FS_ElgModuleStatus*)Obj)->bCanRecompile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bCanRecompile = { "bCanRecompile", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FS_ElgModuleStatus), &Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bCanRecompile_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bCanRecompile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bCanRecompile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bCanShutDown_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_FModuleManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bCanShutDown_SetBit(void* Obj)
	{
		((FS_ElgModuleStatus*)Obj)->bCanShutDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bCanShutDown = { "bCanShutDown", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FS_ElgModuleStatus), &Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bCanShutDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bCanShutDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bCanShutDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bIsProjectModule_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_FModuleManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bIsProjectModule_SetBit(void* Obj)
	{
		((FS_ElgModuleStatus*)Obj)->bIsProjectModule = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bIsProjectModule = { "bIsProjectModule", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FS_ElgModuleStatus), &Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bIsProjectModule_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bIsProjectModule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bIsProjectModule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bIsGameModule_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_FModuleManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bIsGameModule_SetBit(void* Obj)
	{
		((FS_ElgModuleStatus*)Obj)->bIsGameModule = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bIsGameModule = { "bIsGameModule", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FS_ElgModuleStatus), &Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bIsGameModule_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bIsGameModule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bIsGameModule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bIsLoaded_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_FModuleManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bIsLoaded_SetBit(void* Obj)
	{
		((FS_ElgModuleStatus*)Obj)->bIsLoaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bIsLoaded = { "bIsLoaded", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FS_ElgModuleStatus), &Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bIsLoaded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bIsLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bIsLoaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_FilePath_MetaData[] = {
		{ "Category", "Module" },
		{ "Comment", "/*  */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_FModuleManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgModuleStatus, FilePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_FilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Module" },
		{ "Comment", "/*  */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_FModuleManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgModuleStatus, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bCanDynamicReload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bCanHotReload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bCanRecompile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bCanShutDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bIsProjectModule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bIsGameModule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_bIsLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElgEditorScripting,
		nullptr,
		&NewStructOps,
		"S_ElgModuleStatus",
		sizeof(FS_ElgModuleStatus),
		alignof(FS_ElgModuleStatus),
		Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FS_ElgModuleStatus()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FS_ElgModuleStatus_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ElgEditorScripting();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("S_ElgModuleStatus"), sizeof(FS_ElgModuleStatus), Get_Z_Construct_UScriptStruct_FS_ElgModuleStatus_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FS_ElgModuleStatus_Hash() { return 2170416842U; }
	void UElgEditorBP_FModuleManager::StaticRegisterNativesUElgEditorBP_FModuleManager()
	{
		UClass* Class = UElgEditorBP_FModuleManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanDynamicReloadModule", &UElgEditorBP_FModuleManager::execCanDynamicReloadModule },
			{ "CanHotReloadModule", &UElgEditorBP_FModuleManager::execCanHotReloadModule },
			{ "CanRecompileModule", &UElgEditorBP_FModuleManager::execCanRecompileModule },
			{ "CanShutdownModule", &UElgEditorBP_FModuleManager::execCanShutdownModule },
			{ "GetModuleNames", &UElgEditorBP_FModuleManager::execGetModuleNames },
			{ "GetModulesStatus", &UElgEditorBP_FModuleManager::execGetModulesStatus },
			{ "GetModuleStatus", &UElgEditorBP_FModuleManager::execGetModuleStatus },
			{ "IsModuleLoaded", &UElgEditorBP_FModuleManager::execIsModuleLoaded },
			{ "LoadModule", &UElgEditorBP_FModuleManager::execLoadModule },
			{ "RecompileModule", &UElgEditorBP_FModuleManager::execRecompileModule },
			{ "ReloadModule", &UElgEditorBP_FModuleManager::execReloadModule },
			{ "UnloadModule", &UElgEditorBP_FModuleManager::execUnloadModule },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanDynamicReloadModule_Statics
	{
		struct ElgEditorBP_FModuleManager_eventCanDynamicReloadModule_Parms
		{
			FString ModuleName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModuleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModuleName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanDynamicReloadModule_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorBP_FModuleManager_eventCanDynamicReloadModule_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanDynamicReloadModule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_FModuleManager_eventCanDynamicReloadModule_Parms), &Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanDynamicReloadModule_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanDynamicReloadModule_Statics::NewProp_ModuleName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanDynamicReloadModule_Statics::NewProp_ModuleName = { "ModuleName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_FModuleManager_eventCanDynamicReloadModule_Parms, ModuleName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanDynamicReloadModule_Statics::NewProp_ModuleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanDynamicReloadModule_Statics::NewProp_ModuleName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanDynamicReloadModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanDynamicReloadModule_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanDynamicReloadModule_Statics::NewProp_ModuleName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanDynamicReloadModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|ModuleManager" },
		{ "Comment", "/* Return if the module can be dynamic reloaded */" },
		{ "Keywords", "ElgSoft Editor ModuleManager" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_FModuleManager.h" },
		{ "ToolTip", "Return if the module can be dynamic reloaded" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanDynamicReloadModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_FModuleManager, nullptr, "CanDynamicReloadModule", nullptr, nullptr, sizeof(ElgEditorBP_FModuleManager_eventCanDynamicReloadModule_Parms), Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanDynamicReloadModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanDynamicReloadModule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanDynamicReloadModule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanDynamicReloadModule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanDynamicReloadModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanDynamicReloadModule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanHotReloadModule_Statics
	{
		struct ElgEditorBP_FModuleManager_eventCanHotReloadModule_Parms
		{
			FString ModuleName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModuleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModuleName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanHotReloadModule_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorBP_FModuleManager_eventCanHotReloadModule_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanHotReloadModule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_FModuleManager_eventCanHotReloadModule_Parms), &Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanHotReloadModule_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanHotReloadModule_Statics::NewProp_ModuleName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanHotReloadModule_Statics::NewProp_ModuleName = { "ModuleName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_FModuleManager_eventCanHotReloadModule_Parms, ModuleName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanHotReloadModule_Statics::NewProp_ModuleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanHotReloadModule_Statics::NewProp_ModuleName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanHotReloadModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanHotReloadModule_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanHotReloadModule_Statics::NewProp_ModuleName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanHotReloadModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|ModuleManager" },
		{ "Comment", "/* Return if the module can be hot reloaded */" },
		{ "Keywords", "ElgSoft Editor ModuleManager" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_FModuleManager.h" },
		{ "ToolTip", "Return if the module can be hot reloaded" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanHotReloadModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_FModuleManager, nullptr, "CanHotReloadModule", nullptr, nullptr, sizeof(ElgEditorBP_FModuleManager_eventCanHotReloadModule_Parms), Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanHotReloadModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanHotReloadModule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanHotReloadModule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanHotReloadModule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanHotReloadModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanHotReloadModule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanRecompileModule_Statics
	{
		struct ElgEditorBP_FModuleManager_eventCanRecompileModule_Parms
		{
			FString ModuleName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModuleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModuleName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanRecompileModule_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorBP_FModuleManager_eventCanRecompileModule_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanRecompileModule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_FModuleManager_eventCanRecompileModule_Parms), &Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanRecompileModule_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanRecompileModule_Statics::NewProp_ModuleName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanRecompileModule_Statics::NewProp_ModuleName = { "ModuleName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_FModuleManager_eventCanRecompileModule_Parms, ModuleName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanRecompileModule_Statics::NewProp_ModuleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanRecompileModule_Statics::NewProp_ModuleName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanRecompileModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanRecompileModule_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanRecompileModule_Statics::NewProp_ModuleName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanRecompileModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|ModuleManager" },
		{ "Comment", "/* Return if the module can be recompile\n\x09\x09""Checks if the can be hot reloaded or dynamic reloaded or not loaded.\n\x09*/" },
		{ "Keywords", "ElgSoft Editor ModuleManager" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_FModuleManager.h" },
		{ "ToolTip", "Return if the module can be recompile\n              Checks if the can be hot reloaded or dynamic reloaded or not loaded." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanRecompileModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_FModuleManager, nullptr, "CanRecompileModule", nullptr, nullptr, sizeof(ElgEditorBP_FModuleManager_eventCanRecompileModule_Parms), Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanRecompileModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanRecompileModule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanRecompileModule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanRecompileModule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanRecompileModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanRecompileModule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanShutdownModule_Statics
	{
		struct ElgEditorBP_FModuleManager_eventCanShutdownModule_Parms
		{
			FString ModuleName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModuleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModuleName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanShutdownModule_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorBP_FModuleManager_eventCanShutdownModule_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanShutdownModule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_FModuleManager_eventCanShutdownModule_Parms), &Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanShutdownModule_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanShutdownModule_Statics::NewProp_ModuleName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanShutdownModule_Statics::NewProp_ModuleName = { "ModuleName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_FModuleManager_eventCanShutdownModule_Parms, ModuleName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanShutdownModule_Statics::NewProp_ModuleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanShutdownModule_Statics::NewProp_ModuleName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanShutdownModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanShutdownModule_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanShutdownModule_Statics::NewProp_ModuleName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanShutdownModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|ModuleManager" },
		{ "Comment", "/* Return if the module can be shutdown */" },
		{ "Keywords", "ElgSoft Editor ModuleManager" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_FModuleManager.h" },
		{ "ToolTip", "Return if the module can be shutdown" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanShutdownModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_FModuleManager, nullptr, "CanShutdownModule", nullptr, nullptr, sizeof(ElgEditorBP_FModuleManager_eventCanShutdownModule_Parms), Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanShutdownModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanShutdownModule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanShutdownModule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanShutdownModule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanShutdownModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanShutdownModule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleNames_Statics
	{
		struct ElgEditorBP_FModuleManager_eventGetModuleNames_Parms
		{
			TArray<FString> Modules;
			bool bProjectOnly;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bProjectOnly_MetaData[];
#endif
		static void NewProp_bProjectOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProjectOnly;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Modules;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Modules_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleNames_Statics::NewProp_bProjectOnly_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleNames_Statics::NewProp_bProjectOnly_SetBit(void* Obj)
	{
		((ElgEditorBP_FModuleManager_eventGetModuleNames_Parms*)Obj)->bProjectOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleNames_Statics::NewProp_bProjectOnly = { "bProjectOnly", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_FModuleManager_eventGetModuleNames_Parms), &Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleNames_Statics::NewProp_bProjectOnly_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleNames_Statics::NewProp_bProjectOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleNames_Statics::NewProp_bProjectOnly_MetaData)) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleNames_Statics::NewProp_Modules = { "Modules", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_FModuleManager_eventGetModuleNames_Parms, Modules), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleNames_Statics::NewProp_Modules_Inner = { "Modules", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleNames_Statics::NewProp_bProjectOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleNames_Statics::NewProp_Modules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleNames_Statics::NewProp_Modules_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|ModuleManager" },
		{ "Comment", "/* Get an sorted array of the Module names */" },
		{ "CPP_Default_bProjectOnly", "true" },
		{ "Keywords", "ElgSoft Editor ModuleManager" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_FModuleManager.h" },
		{ "ToolTip", "Get an sorted array of the Module names" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_FModuleManager, nullptr, "GetModuleNames", nullptr, nullptr, sizeof(ElgEditorBP_FModuleManager_eventGetModuleNames_Parms), Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModulesStatus_Statics
	{
		struct ElgEditorBP_FModuleManager_eventGetModulesStatus_Parms
		{
			TArray<FString> ModuleNames;
			TMap<FString,FS_ElgModuleStatus> ModulesMap;
			bool bProjectOnly;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bProjectOnly_MetaData[];
#endif
		static void NewProp_bProjectOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProjectOnly;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ModulesMap;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModulesMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModulesMap_ValueProp;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModuleNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModuleNames_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModulesStatus_Statics::NewProp_bProjectOnly_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModulesStatus_Statics::NewProp_bProjectOnly_SetBit(void* Obj)
	{
		((ElgEditorBP_FModuleManager_eventGetModulesStatus_Parms*)Obj)->bProjectOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModulesStatus_Statics::NewProp_bProjectOnly = { "bProjectOnly", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_FModuleManager_eventGetModulesStatus_Parms), &Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModulesStatus_Statics::NewProp_bProjectOnly_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModulesStatus_Statics::NewProp_bProjectOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModulesStatus_Statics::NewProp_bProjectOnly_MetaData)) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModulesStatus_Statics::NewProp_ModulesMap = { "ModulesMap", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_FModuleManager_eventGetModulesStatus_Parms, ModulesMap), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModulesStatus_Statics::NewProp_ModulesMap_Key_KeyProp = { "ModulesMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModulesStatus_Statics::NewProp_ModulesMap_ValueProp = { "ModulesMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FS_ElgModuleStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModulesStatus_Statics::NewProp_ModuleNames = { "ModuleNames", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_FModuleManager_eventGetModulesStatus_Parms, ModuleNames), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModulesStatus_Statics::NewProp_ModuleNames_Inner = { "ModuleNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModulesStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModulesStatus_Statics::NewProp_bProjectOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModulesStatus_Statics::NewProp_ModulesMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModulesStatus_Statics::NewProp_ModulesMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModulesStatus_Statics::NewProp_ModulesMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModulesStatus_Statics::NewProp_ModuleNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModulesStatus_Statics::NewProp_ModuleNames_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModulesStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|ModuleManager" },
		{ "Comment", "/* Return an sorted array with the names of the modules and a map with the struct with info about the modules */" },
		{ "CPP_Default_bProjectOnly", "true" },
		{ "Keywords", "ElgSoft Editor ModuleManager" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_FModuleManager.h" },
		{ "ToolTip", "Return an sorted array with the names of the modules and a map with the struct with info about the modules" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModulesStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_FModuleManager, nullptr, "GetModulesStatus", nullptr, nullptr, sizeof(ElgEditorBP_FModuleManager_eventGetModulesStatus_Parms), Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModulesStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModulesStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModulesStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModulesStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModulesStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModulesStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleStatus_Statics
	{
		struct ElgEditorBP_FModuleManager_eventGetModuleStatus_Parms
		{
			FString ModuleName;
			bool Success;
			FS_ElgModuleStatus ModuleStatus;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModuleStatus;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModuleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModuleName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleStatus_Statics::NewProp_ModuleStatus = { "ModuleStatus", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_FModuleManager_eventGetModuleStatus_Parms, ModuleStatus), Z_Construct_UScriptStruct_FS_ElgModuleStatus, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleStatus_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((ElgEditorBP_FModuleManager_eventGetModuleStatus_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleStatus_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_FModuleManager_eventGetModuleStatus_Parms), &Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleStatus_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleStatus_Statics::NewProp_ModuleName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleStatus_Statics::NewProp_ModuleName = { "ModuleName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_FModuleManager_eventGetModuleStatus_Parms, ModuleName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleStatus_Statics::NewProp_ModuleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleStatus_Statics::NewProp_ModuleName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleStatus_Statics::NewProp_ModuleStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleStatus_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleStatus_Statics::NewProp_ModuleName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|ModuleManager" },
		{ "Comment", "/* Get the status struct for a module */" },
		{ "Keywords", "ElgSoft Editor ModuleManager" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_FModuleManager.h" },
		{ "ToolTip", "Get the status struct for a module" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_FModuleManager, nullptr, "GetModuleStatus", nullptr, nullptr, sizeof(ElgEditorBP_FModuleManager_eventGetModuleStatus_Parms), Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_FModuleManager_IsModuleLoaded_Statics
	{
		struct ElgEditorBP_FModuleManager_eventIsModuleLoaded_Parms
		{
			FString ModuleName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModuleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModuleName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorBP_FModuleManager_IsModuleLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorBP_FModuleManager_eventIsModuleLoaded_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_IsModuleLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_FModuleManager_eventIsModuleLoaded_Parms), &Z_Construct_UFunction_UElgEditorBP_FModuleManager_IsModuleLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_FModuleManager_IsModuleLoaded_Statics::NewProp_ModuleName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_IsModuleLoaded_Statics::NewProp_ModuleName = { "ModuleName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_FModuleManager_eventIsModuleLoaded_Parms, ModuleName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_FModuleManager_IsModuleLoaded_Statics::NewProp_ModuleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_IsModuleLoaded_Statics::NewProp_ModuleName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_FModuleManager_IsModuleLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_FModuleManager_IsModuleLoaded_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_FModuleManager_IsModuleLoaded_Statics::NewProp_ModuleName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_FModuleManager_IsModuleLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|ModuleManager" },
		{ "Comment", "/* Return if the module is loaded or not */" },
		{ "Keywords", "ElgSoft Editor ModuleManager" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_FModuleManager.h" },
		{ "ToolTip", "Return if the module is loaded or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_IsModuleLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_FModuleManager, nullptr, "IsModuleLoaded", nullptr, nullptr, sizeof(ElgEditorBP_FModuleManager_eventIsModuleLoaded_Parms), Z_Construct_UFunction_UElgEditorBP_FModuleManager_IsModuleLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_IsModuleLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_FModuleManager_IsModuleLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_IsModuleLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_FModuleManager_IsModuleLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_FModuleManager_IsModuleLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_FModuleManager_LoadModule_Statics
	{
		struct ElgEditorBP_FModuleManager_eventLoadModule_Parms
		{
			FString ModuleName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModuleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModuleName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_FModuleManager_LoadModule_Statics::NewProp_ModuleName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_LoadModule_Statics::NewProp_ModuleName = { "ModuleName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_FModuleManager_eventLoadModule_Parms, ModuleName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_FModuleManager_LoadModule_Statics::NewProp_ModuleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_LoadModule_Statics::NewProp_ModuleName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_FModuleManager_LoadModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_FModuleManager_LoadModule_Statics::NewProp_ModuleName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_FModuleManager_LoadModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|ModuleManager" },
		{ "Comment", "/* Load a module */" },
		{ "Keywords", "ElgSoft Editor ModuleManager" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_FModuleManager.h" },
		{ "ToolTip", "Load a module" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_LoadModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_FModuleManager, nullptr, "LoadModule", nullptr, nullptr, sizeof(ElgEditorBP_FModuleManager_eventLoadModule_Parms), Z_Construct_UFunction_UElgEditorBP_FModuleManager_LoadModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_LoadModule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_FModuleManager_LoadModule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_LoadModule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_FModuleManager_LoadModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_FModuleManager_LoadModule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_FModuleManager_RecompileModule_Statics
	{
		struct ElgEditorBP_FModuleManager_eventRecompileModule_Parms
		{
			FString ModuleName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModuleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModuleName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_FModuleManager_RecompileModule_Statics::NewProp_ModuleName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_RecompileModule_Statics::NewProp_ModuleName = { "ModuleName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_FModuleManager_eventRecompileModule_Parms, ModuleName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_FModuleManager_RecompileModule_Statics::NewProp_ModuleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_RecompileModule_Statics::NewProp_ModuleName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_FModuleManager_RecompileModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_FModuleManager_RecompileModule_Statics::NewProp_ModuleName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_FModuleManager_RecompileModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|ModuleManager" },
		{ "Comment", "/* Recompile a module */" },
		{ "Keywords", "ElgSoft Editor ModuleManager" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_FModuleManager.h" },
		{ "ToolTip", "Recompile a module" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_RecompileModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_FModuleManager, nullptr, "RecompileModule", nullptr, nullptr, sizeof(ElgEditorBP_FModuleManager_eventRecompileModule_Parms), Z_Construct_UFunction_UElgEditorBP_FModuleManager_RecompileModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_RecompileModule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_FModuleManager_RecompileModule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_RecompileModule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_FModuleManager_RecompileModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_FModuleManager_RecompileModule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_FModuleManager_ReloadModule_Statics
	{
		struct ElgEditorBP_FModuleManager_eventReloadModule_Parms
		{
			FString ModuleName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModuleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModuleName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_FModuleManager_ReloadModule_Statics::NewProp_ModuleName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_ReloadModule_Statics::NewProp_ModuleName = { "ModuleName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_FModuleManager_eventReloadModule_Parms, ModuleName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_FModuleManager_ReloadModule_Statics::NewProp_ModuleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_ReloadModule_Statics::NewProp_ModuleName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_FModuleManager_ReloadModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_FModuleManager_ReloadModule_Statics::NewProp_ModuleName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_FModuleManager_ReloadModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|ModuleManager" },
		{ "Comment", "/* Reload a module */" },
		{ "Keywords", "ElgSoft Editor ModuleManager" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_FModuleManager.h" },
		{ "ToolTip", "Reload a module" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_ReloadModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_FModuleManager, nullptr, "ReloadModule", nullptr, nullptr, sizeof(ElgEditorBP_FModuleManager_eventReloadModule_Parms), Z_Construct_UFunction_UElgEditorBP_FModuleManager_ReloadModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_ReloadModule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_FModuleManager_ReloadModule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_ReloadModule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_FModuleManager_ReloadModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_FModuleManager_ReloadModule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_FModuleManager_UnloadModule_Statics
	{
		struct ElgEditorBP_FModuleManager_eventUnloadModule_Parms
		{
			FString ModuleName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModuleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModuleName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_FModuleManager_UnloadModule_Statics::NewProp_ModuleName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_UnloadModule_Statics::NewProp_ModuleName = { "ModuleName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_FModuleManager_eventUnloadModule_Parms, ModuleName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_FModuleManager_UnloadModule_Statics::NewProp_ModuleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_UnloadModule_Statics::NewProp_ModuleName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_FModuleManager_UnloadModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_FModuleManager_UnloadModule_Statics::NewProp_ModuleName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_FModuleManager_UnloadModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|ModuleManager" },
		{ "Comment", "/* Unload a module */" },
		{ "Keywords", "ElgSoft Editor ModuleManager" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_FModuleManager.h" },
		{ "ToolTip", "Unload a module" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_FModuleManager_UnloadModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_FModuleManager, nullptr, "UnloadModule", nullptr, nullptr, sizeof(ElgEditorBP_FModuleManager_eventUnloadModule_Parms), Z_Construct_UFunction_UElgEditorBP_FModuleManager_UnloadModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_UnloadModule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_FModuleManager_UnloadModule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_FModuleManager_UnloadModule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_FModuleManager_UnloadModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_FModuleManager_UnloadModule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UElgEditorBP_FModuleManager_NoRegister()
	{
		return UElgEditorBP_FModuleManager::StaticClass();
	}
	struct Z_Construct_UClass_UElgEditorBP_FModuleManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UElgEditorBP_FModuleManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ElgEditorScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UElgEditorBP_FModuleManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanDynamicReloadModule, "CanDynamicReloadModule" }, // 1084911529
		{ &Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanHotReloadModule, "CanHotReloadModule" }, // 2662970664
		{ &Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanRecompileModule, "CanRecompileModule" }, // 1952043253
		{ &Z_Construct_UFunction_UElgEditorBP_FModuleManager_CanShutdownModule, "CanShutdownModule" }, // 2941318487
		{ &Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleNames, "GetModuleNames" }, // 1017078591
		{ &Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModulesStatus, "GetModulesStatus" }, // 3300256854
		{ &Z_Construct_UFunction_UElgEditorBP_FModuleManager_GetModuleStatus, "GetModuleStatus" }, // 33164372
		{ &Z_Construct_UFunction_UElgEditorBP_FModuleManager_IsModuleLoaded, "IsModuleLoaded" }, // 2073762208
		{ &Z_Construct_UFunction_UElgEditorBP_FModuleManager_LoadModule, "LoadModule" }, // 2976893492
		{ &Z_Construct_UFunction_UElgEditorBP_FModuleManager_RecompileModule, "RecompileModule" }, // 4107144370
		{ &Z_Construct_UFunction_UElgEditorBP_FModuleManager_ReloadModule, "ReloadModule" }, // 4224164877
		{ &Z_Construct_UFunction_UElgEditorBP_FModuleManager_UnloadModule, "UnloadModule" }, // 3659525754
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgEditorBP_FModuleManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Blueprints/ElgEditorBP_FModuleManager.h" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_FModuleManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UElgEditorBP_FModuleManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElgEditorBP_FModuleManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UElgEditorBP_FModuleManager_Statics::ClassParams = {
		&UElgEditorBP_FModuleManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UElgEditorBP_FModuleManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UElgEditorBP_FModuleManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UElgEditorBP_FModuleManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UElgEditorBP_FModuleManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UElgEditorBP_FModuleManager, 1749061852);
	template<> ELGEDITORSCRIPTING_API UClass* StaticClass<UElgEditorBP_FModuleManager>()
	{
		return UElgEditorBP_FModuleManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UElgEditorBP_FModuleManager(Z_Construct_UClass_UElgEditorBP_FModuleManager, &UElgEditorBP_FModuleManager::StaticClass, TEXT("/Script/ElgEditorScripting"), TEXT("UElgEditorBP_FModuleManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UElgEditorBP_FModuleManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
