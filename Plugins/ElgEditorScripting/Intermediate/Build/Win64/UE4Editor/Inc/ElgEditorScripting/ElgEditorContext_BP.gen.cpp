// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElgEditorScripting/Public/EditorContexts/ElgEditorContext_BP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElgEditorContext_BP() {}
// Cross Module References
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorContext_BP_NoRegister();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorContext_BP();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ElgEditorScripting();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_BP_GetAssetBrowserContext();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorContext_AssetBrowser_NoRegister();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorContext_Config_NoRegister();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_BP_GetLevelEditorContext();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorContext_LevelEditor_NoRegister();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_BP_IsInEditor();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_BP_IsInPIE();
// End Cross Module References
	void UElgEditorContext_BP::StaticRegisterNativesUElgEditorContext_BP()
	{
		UClass* Class = UElgEditorContext_BP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAssetBrowserContext", &UElgEditorContext_BP::execGetAssetBrowserContext },
			{ "GetConfigContext", &UElgEditorContext_BP::execGetConfigContext },
			{ "GetLevelEditorContext", &UElgEditorContext_BP::execGetLevelEditorContext },
			{ "IsInEditor", &UElgEditorContext_BP::execIsInEditor },
			{ "IsInPIE", &UElgEditorContext_BP::execIsInPIE },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UElgEditorContext_BP_GetAssetBrowserContext_Statics
	{
		struct ElgEditorContext_BP_eventGetAssetBrowserContext_Parms
		{
			UElgEditorContext_AssetBrowser* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorContext_BP_GetAssetBrowserContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_BP_eventGetAssetBrowserContext_Parms, ReturnValue), Z_Construct_UClass_UElgEditorContext_AssetBrowser_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_BP_GetAssetBrowserContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_BP_GetAssetBrowserContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_BP_GetAssetBrowserContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|AssetBrowser" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_BP.h" },
		{ "ToolTip", "Return a AssetBrowserContext object so you can bind some useful events,\nAssetSelectionChanged, AssetCreated, AssetRemoved, AssetRenamed etc." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_BP_GetAssetBrowserContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_BP, nullptr, "GetAssetBrowserContext", sizeof(ElgEditorContext_BP_eventGetAssetBrowserContext_Parms), Z_Construct_UFunction_UElgEditorContext_BP_GetAssetBrowserContext_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_BP_GetAssetBrowserContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_BP_GetAssetBrowserContext_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_BP_GetAssetBrowserContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_BP_GetAssetBrowserContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_BP_GetAssetBrowserContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext_Statics
	{
		struct ElgEditorContext_BP_eventGetConfigContext_Parms
		{
			FString ConfigFilename;
			FString ConfigSection;
			UElgEditorContext_Config* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConfigSection;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConfigFilename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_BP_eventGetConfigContext_Parms, ReturnValue), Z_Construct_UClass_UElgEditorContext_Config_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext_Statics::NewProp_ConfigSection = { "ConfigSection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_BP_eventGetConfigContext_Parms, ConfigSection), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext_Statics::NewProp_ConfigFilename = { "ConfigFilename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_BP_eventGetConfigContext_Parms, ConfigFilename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext_Statics::NewProp_ConfigSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext_Statics::NewProp_ConfigFilename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_BP.h" },
		{ "ToolTip", "Return a ConfigContext object so you can read/write to a config files section," },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_BP, nullptr, "GetConfigContext", sizeof(ElgEditorContext_BP_eventGetConfigContext_Parms), Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_BP_GetLevelEditorContext_Statics
	{
		struct ElgEditorContext_BP_eventGetLevelEditorContext_Parms
		{
			UElgEditorContext_LevelEditor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorContext_BP_GetLevelEditorContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_BP_eventGetLevelEditorContext_Parms, ReturnValue), Z_Construct_UClass_UElgEditorContext_LevelEditor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_BP_GetLevelEditorContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_BP_GetLevelEditorContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_BP_GetLevelEditorContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|LevelEditor" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_BP.h" },
		{ "ToolTip", "Returns a LevelEditorContext object that can be used to bind some useful events,\nOnSelectionChanged, ActorAdded, EnterPIE, Change EditorMode etc." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_BP_GetLevelEditorContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_BP, nullptr, "GetLevelEditorContext", sizeof(ElgEditorContext_BP_eventGetLevelEditorContext_Parms), Z_Construct_UFunction_UElgEditorContext_BP_GetLevelEditorContext_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_BP_GetLevelEditorContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_BP_GetLevelEditorContext_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_BP_GetLevelEditorContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_BP_GetLevelEditorContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_BP_GetLevelEditorContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_BP_IsInEditor_Statics
	{
		struct ElgEditorContext_BP_eventIsInEditor_Parms
		{
			bool Result;
		};
		static void NewProp_Result_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorContext_BP_IsInEditor_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((ElgEditorContext_BP_eventIsInEditor_Parms*)Obj)->Result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_BP_IsInEditor_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_BP_eventIsInEditor_Parms), &Z_Construct_UFunction_UElgEditorContext_BP_IsInEditor_Statics::NewProp_Result_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_BP_IsInEditor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_BP_IsInEditor_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_BP_IsInEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Editor" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_BP.h" },
		{ "ToolTip", "Return if we currently are in the Editor and no PIE is running" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_BP_IsInEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_BP, nullptr, "IsInEditor", sizeof(ElgEditorContext_BP_eventIsInEditor_Parms), Z_Construct_UFunction_UElgEditorContext_BP_IsInEditor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_BP_IsInEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_BP_IsInEditor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_BP_IsInEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_BP_IsInEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_BP_IsInEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_BP_IsInPIE_Statics
	{
		struct ElgEditorContext_BP_eventIsInPIE_Parms
		{
			bool Result;
		};
		static void NewProp_Result_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorContext_BP_IsInPIE_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((ElgEditorContext_BP_eventIsInPIE_Parms*)Obj)->Result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_BP_IsInPIE_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_BP_eventIsInPIE_Parms), &Z_Construct_UFunction_UElgEditorContext_BP_IsInPIE_Statics::NewProp_Result_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_BP_IsInPIE_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_BP_IsInPIE_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_BP_IsInPIE_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Editor" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_BP.h" },
		{ "ToolTip", "Return if we currently playing in the Editor or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_BP_IsInPIE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_BP, nullptr, "IsInPIE", sizeof(ElgEditorContext_BP_eventIsInPIE_Parms), Z_Construct_UFunction_UElgEditorContext_BP_IsInPIE_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_BP_IsInPIE_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_BP_IsInPIE_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_BP_IsInPIE_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_BP_IsInPIE()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_BP_IsInPIE_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UElgEditorContext_BP_NoRegister()
	{
		return UElgEditorContext_BP::StaticClass();
	}
	struct Z_Construct_UClass_UElgEditorContext_BP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UElgEditorContext_BP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ElgEditorScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UElgEditorContext_BP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UElgEditorContext_BP_GetAssetBrowserContext, "GetAssetBrowserContext" }, // 4096120940
		{ &Z_Construct_UFunction_UElgEditorContext_BP_GetConfigContext, "GetConfigContext" }, // 957718854
		{ &Z_Construct_UFunction_UElgEditorContext_BP_GetLevelEditorContext, "GetLevelEditorContext" }, // 577375148
		{ &Z_Construct_UFunction_UElgEditorContext_BP_IsInEditor, "IsInEditor" }, // 3784331392
		{ &Z_Construct_UFunction_UElgEditorContext_BP_IsInPIE, "IsInPIE" }, // 2495301795
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgEditorContext_BP_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorContexts/ElgEditorContext_BP.h" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_BP.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UElgEditorContext_BP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElgEditorContext_BP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UElgEditorContext_BP_Statics::ClassParams = {
		&UElgEditorContext_BP::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UElgEditorContext_BP_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UElgEditorContext_BP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UElgEditorContext_BP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UElgEditorContext_BP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UElgEditorContext_BP, 3124598073);
	template<> ELGEDITORSCRIPTING_API UClass* StaticClass<UElgEditorContext_BP>()
	{
		return UElgEditorContext_BP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UElgEditorContext_BP(Z_Construct_UClass_UElgEditorContext_BP, &UElgEditorContext_BP::StaticClass, TEXT("/Script/ElgEditorScripting"), TEXT("UElgEditorContext_BP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UElgEditorContext_BP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
