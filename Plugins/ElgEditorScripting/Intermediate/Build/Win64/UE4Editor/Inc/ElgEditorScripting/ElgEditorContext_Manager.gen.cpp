// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElgEditorScripting/Public/EditorContexts/ElgEditorContext_Manager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElgEditorContext_Manager() {}
// Cross Module References
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorContext_Manager_NoRegister();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorContext_Manager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ElgEditorScripting();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorContext_DirWatcher_NoRegister();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorContext_Config_NoRegister();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorContext_AssetBrowser_NoRegister();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorContext_LevelEditor_NoRegister();
// End Cross Module References
	void UElgEditorContext_Manager::StaticRegisterNativesUElgEditorContext_Manager()
	{
	}
	UClass* Z_Construct_UClass_UElgEditorContext_Manager_NoRegister()
	{
		return UElgEditorContext_Manager::StaticClass();
	}
	struct Z_Construct_UClass_UElgEditorContext_Manager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectoryWatcherContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DirectoryWatcherContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfigContexts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConfigContexts;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConfigContexts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetBrowserContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetBrowserContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelEditorContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelEditorContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UElgEditorContext_Manager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ElgEditorScripting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgEditorContext_Manager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorContexts/ElgEditorContext_Manager.h" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Manager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgEditorContext_Manager_Statics::NewProp_DirectoryWatcherContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UElgEditorContext_Manager_Statics::NewProp_DirectoryWatcherContext = { "DirectoryWatcherContext", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElgEditorContext_Manager, DirectoryWatcherContext), Z_Construct_UClass_UElgEditorContext_DirWatcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UElgEditorContext_Manager_Statics::NewProp_DirectoryWatcherContext_MetaData, ARRAY_COUNT(Z_Construct_UClass_UElgEditorContext_Manager_Statics::NewProp_DirectoryWatcherContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgEditorContext_Manager_Statics::NewProp_ConfigContexts_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Manager.h" },
		{ "ToolTip", "Array with the different config" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UElgEditorContext_Manager_Statics::NewProp_ConfigContexts = { "ConfigContexts", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElgEditorContext_Manager, ConfigContexts), METADATA_PARAMS(Z_Construct_UClass_UElgEditorContext_Manager_Statics::NewProp_ConfigContexts_MetaData, ARRAY_COUNT(Z_Construct_UClass_UElgEditorContext_Manager_Statics::NewProp_ConfigContexts_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UElgEditorContext_Manager_Statics::NewProp_ConfigContexts_Inner = { "ConfigContexts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UElgEditorContext_Config_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgEditorContext_Manager_Statics::NewProp_AssetBrowserContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UElgEditorContext_Manager_Statics::NewProp_AssetBrowserContext = { "AssetBrowserContext", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElgEditorContext_Manager, AssetBrowserContext), Z_Construct_UClass_UElgEditorContext_AssetBrowser_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UElgEditorContext_Manager_Statics::NewProp_AssetBrowserContext_MetaData, ARRAY_COUNT(Z_Construct_UClass_UElgEditorContext_Manager_Statics::NewProp_AssetBrowserContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgEditorContext_Manager_Statics::NewProp_LevelEditorContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UElgEditorContext_Manager_Statics::NewProp_LevelEditorContext = { "LevelEditorContext", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElgEditorContext_Manager, LevelEditorContext), Z_Construct_UClass_UElgEditorContext_LevelEditor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UElgEditorContext_Manager_Statics::NewProp_LevelEditorContext_MetaData, ARRAY_COUNT(Z_Construct_UClass_UElgEditorContext_Manager_Statics::NewProp_LevelEditorContext_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UElgEditorContext_Manager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgEditorContext_Manager_Statics::NewProp_DirectoryWatcherContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgEditorContext_Manager_Statics::NewProp_ConfigContexts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgEditorContext_Manager_Statics::NewProp_ConfigContexts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgEditorContext_Manager_Statics::NewProp_AssetBrowserContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgEditorContext_Manager_Statics::NewProp_LevelEditorContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UElgEditorContext_Manager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElgEditorContext_Manager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UElgEditorContext_Manager_Statics::ClassParams = {
		&UElgEditorContext_Manager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UElgEditorContext_Manager_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UElgEditorContext_Manager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UElgEditorContext_Manager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UElgEditorContext_Manager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UElgEditorContext_Manager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UElgEditorContext_Manager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UElgEditorContext_Manager, 592901123);
	template<> ELGEDITORSCRIPTING_API UClass* StaticClass<UElgEditorContext_Manager>()
	{
		return UElgEditorContext_Manager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UElgEditorContext_Manager(Z_Construct_UClass_UElgEditorContext_Manager, &UElgEditorContext_Manager::StaticClass, TEXT("/Script/ElgEditorScripting"), TEXT("UElgEditorContext_Manager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UElgEditorContext_Manager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
