// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElgEditorScripting/Public/Blueprints/ElgEditorBP_UBlueprint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElgEditorBP_UBlueprint() {}
// Cross Module References
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorBP_UBlueprint_NoRegister();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorBP_UBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ElgEditorScripting();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddComponent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface();
	ELGEDITORSCRIPTING_API UEnum* Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_CompileBlueprint();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch();
	ELGEDITORSCRIPTING_API UEnum* Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData();
	ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetParentClass();
// End Cross Module References
	void UElgEditorBP_UBlueprint::StaticRegisterNativesUElgEditorBP_UBlueprint()
	{
		UClass* Class = UElgEditorBP_UBlueprint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BlueprintAddComponent", &UElgEditorBP_UBlueprint::execBlueprintAddComponent },
			{ "BlueprintAddInterface", &UElgEditorBP_UBlueprint::execBlueprintAddInterface },
			{ "BlueprintImplementInterface", &UElgEditorBP_UBlueprint::execBlueprintImplementInterface },
			{ "BlueprintRemoveComponent", &UElgEditorBP_UBlueprint::execBlueprintRemoveComponent },
			{ "BlueprintRemoveInterface", &UElgEditorBP_UBlueprint::execBlueprintRemoveInterface },
			{ "BlueprintSupportComponent", &UElgEditorBP_UBlueprint::execBlueprintSupportComponent },
			{ "BlueprintSupportComponentBranch", &UElgEditorBP_UBlueprint::execBlueprintSupportComponentBranch },
			{ "BlueprintSupportInterface", &UElgEditorBP_UBlueprint::execBlueprintSupportInterface },
			{ "BlueprintSupportInterfaceBranch", &UElgEditorBP_UBlueprint::execBlueprintSupportInterfaceBranch },
			{ "CompileBlueprint", &UElgEditorBP_UBlueprint::execCompileBlueprint },
			{ "GetBlueprintComponentOfClass", &UElgEditorBP_UBlueprint::execGetBlueprintComponentOfClass },
			{ "GetBlueprintComponentOfClassBranch", &UElgEditorBP_UBlueprint::execGetBlueprintComponentOfClassBranch },
			{ "GetBlueprintComponents", &UElgEditorBP_UBlueprint::execGetBlueprintComponents },
			{ "GetBlueprintComponentsOfClass", &UElgEditorBP_UBlueprint::execGetBlueprintComponentsOfClass },
			{ "GetBlueprintComponentsOfClassBranch", &UElgEditorBP_UBlueprint::execGetBlueprintComponentsOfClassBranch },
			{ "GetBlueprintFromAssetData", &UElgEditorBP_UBlueprint::execGetBlueprintFromAssetData },
			{ "GetBlueprintFromObject", &UElgEditorBP_UBlueprint::execGetBlueprintFromObject },
			{ "GetBlueprintInterfaces", &UElgEditorBP_UBlueprint::execGetBlueprintInterfaces },
			{ "GetParentClass", &UElgEditorBP_UBlueprint::execGetParentClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddComponent_Statics
	{
		struct ElgEditorBP_UBlueprint_eventBlueprintAddComponent_Parms
		{
			UBlueprint* Blueprint;
			TSubclassOf<UActorComponent>  ComponentClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddComponent_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventBlueprintAddComponent_Parms, ComponentClass), Z_Construct_UClass_UActorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddComponent_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventBlueprintAddComponent_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddComponent_Statics::NewProp_ComponentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddComponent_Statics::NewProp_Blueprint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint|Component" },
		{ "DisplayName", "Add Component" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Add an Component to the Blueprint, if the Blueprint is open you must recompile for it to show up." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "BlueprintAddComponent", sizeof(ElgEditorBP_UBlueprint_eventBlueprintAddComponent_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddInterface_Statics
	{
		struct ElgEditorBP_UBlueprint_eventBlueprintAddInterface_Parms
		{
			UBlueprint* Blueprint;
			TSubclassOf<UInterface>  InterfaceClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InterfaceClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddInterface_Statics::NewProp_InterfaceClass = { "InterfaceClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventBlueprintAddInterface_Parms, InterfaceClass), Z_Construct_UClass_UInterface, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddInterface_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventBlueprintAddInterface_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddInterface_Statics::NewProp_InterfaceClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddInterface_Statics::NewProp_Blueprint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint|Interface" },
		{ "DisplayName", "Add Interface" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Add an Interface to the blueprint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "BlueprintAddInterface", sizeof(ElgEditorBP_UBlueprint_eventBlueprintAddInterface_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddInterface_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddInterface_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface_Statics
	{
		struct ElgEditorBP_UBlueprint_eventBlueprintImplementInterface_Parms
		{
			UBlueprint* Blueprint;
			TSubclassOf<UInterface>  InterfaceClass;
			EBPEditorOutputBranch Branches;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InterfaceClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventBlueprintImplementInterface_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface_Statics::NewProp_InterfaceClass = { "InterfaceClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventBlueprintImplementInterface_Parms, InterfaceClass), Z_Construct_UClass_UInterface, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventBlueprintImplementInterface_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface_Statics::NewProp_InterfaceClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface_Statics::NewProp_Blueprint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint|Interface" },
		{ "DeterminesOutputType", "InterfaceClass" },
		{ "DisplayName", "ImplementInterface" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Check if the blueprint has the Interfaces of the class" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "BlueprintImplementInterface", sizeof(ElgEditorBP_UBlueprint_eventBlueprintImplementInterface_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics
	{
		struct ElgEditorBP_UBlueprint_eventBlueprintRemoveComponent_Parms
		{
			UBlueprint* Blueprint;
			TSubclassOf<UActorComponent>  ComponentClass;
			bool bOnlyFirst;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyFirst_MetaData[];
#endif
		static void NewProp_bOnlyFirst_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyFirst;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::NewProp_bOnlyFirst_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::NewProp_bOnlyFirst_SetBit(void* Obj)
	{
		((ElgEditorBP_UBlueprint_eventBlueprintRemoveComponent_Parms*)Obj)->bOnlyFirst = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::NewProp_bOnlyFirst = { "bOnlyFirst", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_UBlueprint_eventBlueprintRemoveComponent_Parms), &Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::NewProp_bOnlyFirst_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::NewProp_bOnlyFirst_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::NewProp_bOnlyFirst_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventBlueprintRemoveComponent_Parms, ComponentClass), Z_Construct_UClass_UActorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventBlueprintRemoveComponent_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::NewProp_bOnlyFirst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::NewProp_ComponentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::NewProp_Blueprint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint|Component" },
		{ "CPP_Default_bOnlyFirst", "false" },
		{ "DisplayName", "Remove Component" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Remove Component(s) from the Blueprint, if the Blueprint is open you must recompile for it to show up.\n      @param  Blueprint               The blueprint asset to remove the component from.\n      @param  ComponentClass  The class of component(s) to remove.\n      @param  bOnlyFirst              Should it only remove the first or all the instances of the class?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "BlueprintRemoveComponent", sizeof(ElgEditorBP_UBlueprint_eventBlueprintRemoveComponent_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics
	{
		struct ElgEditorBP_UBlueprint_eventBlueprintRemoveInterface_Parms
		{
			UBlueprint* Blueprint;
			TSubclassOf<UInterface>  InterfaceClass;
			bool bPreserveFunctions;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreserveFunctions_MetaData[];
#endif
		static void NewProp_bPreserveFunctions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreserveFunctions;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InterfaceClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::NewProp_bPreserveFunctions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::NewProp_bPreserveFunctions_SetBit(void* Obj)
	{
		((ElgEditorBP_UBlueprint_eventBlueprintRemoveInterface_Parms*)Obj)->bPreserveFunctions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::NewProp_bPreserveFunctions = { "bPreserveFunctions", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_UBlueprint_eventBlueprintRemoveInterface_Parms), &Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::NewProp_bPreserveFunctions_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::NewProp_bPreserveFunctions_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::NewProp_bPreserveFunctions_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::NewProp_InterfaceClass = { "InterfaceClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventBlueprintRemoveInterface_Parms, InterfaceClass), Z_Construct_UClass_UInterface, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventBlueprintRemoveInterface_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::NewProp_bPreserveFunctions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::NewProp_InterfaceClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::NewProp_Blueprint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint|Interface" },
		{ "CPP_Default_bPreserveFunctions", "false" },
		{ "DisplayName", "Remove Interface" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Remove an interface from the blueprint.\nIf bPreserveFunctions is true, then the interface will move its functions to be normal implemented blueprint functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "BlueprintRemoveInterface", sizeof(ElgEditorBP_UBlueprint_eventBlueprintRemoveInterface_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent_Statics
	{
		struct ElgEditorBP_UBlueprint_eventBlueprintSupportComponent_Parms
		{
			UBlueprint* Blueprint;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorBP_UBlueprint_eventBlueprintSupportComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_UBlueprint_eventBlueprintSupportComponent_Parms), &Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventBlueprintSupportComponent_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent_Statics::NewProp_Blueprint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint|Component" },
		{ "DisplayName", "Support Component" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Return if the blueprint supports components or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "BlueprintSupportComponent", sizeof(ElgEditorBP_UBlueprint_eventBlueprintSupportComponent_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch_Statics
	{
		struct ElgEditorBP_UBlueprint_eventBlueprintSupportComponentBranch_Parms
		{
			UBlueprint* Blueprint;
			EBPEditorOutputBranch Branches;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventBlueprintSupportComponentBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventBlueprintSupportComponentBranch_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch_Statics::NewProp_Blueprint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint|Component" },
		{ "DisplayName", "Support Component Branch" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Return if the blueprint supports components or not with a branch pins" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "BlueprintSupportComponentBranch", sizeof(ElgEditorBP_UBlueprint_eventBlueprintSupportComponentBranch_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface_Statics
	{
		struct ElgEditorBP_UBlueprint_eventBlueprintSupportInterface_Parms
		{
			UBlueprint* Blueprint;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorBP_UBlueprint_eventBlueprintSupportInterface_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_UBlueprint_eventBlueprintSupportInterface_Parms), &Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventBlueprintSupportInterface_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface_Statics::NewProp_Blueprint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint|Interface" },
		{ "DisplayName", "Support Interface" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Return if the blueprint supports Interfaces or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "BlueprintSupportInterface", sizeof(ElgEditorBP_UBlueprint_eventBlueprintSupportInterface_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch_Statics
	{
		struct ElgEditorBP_UBlueprint_eventBlueprintSupportInterfaceBranch_Parms
		{
			UBlueprint* Blueprint;
			EBPEditorOutputBranch Branches;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventBlueprintSupportInterfaceBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventBlueprintSupportInterfaceBranch_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch_Statics::NewProp_Blueprint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint|Interface" },
		{ "DisplayName", "Support Interface Branch" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Return if the blueprint supports Interfaces or not with a branch pins" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "BlueprintSupportInterfaceBranch", sizeof(ElgEditorBP_UBlueprint_eventBlueprintSupportInterfaceBranch_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_CompileBlueprint_Statics
	{
		struct ElgEditorBP_UBlueprint_eventCompileBlueprint_Parms
		{
			UBlueprint* Blueprint;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_CompileBlueprint_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventCompileBlueprint_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_CompileBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_CompileBlueprint_Statics::NewProp_Blueprint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_CompileBlueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Compiles the blueprint asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_CompileBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "CompileBlueprint", sizeof(ElgEditorBP_UBlueprint_eventCompileBlueprint_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_CompileBlueprint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_CompileBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_CompileBlueprint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_CompileBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_CompileBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_CompileBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics
	{
		struct ElgEditorBP_UBlueprint_eventGetBlueprintComponentOfClass_Parms
		{
			UBlueprint* Blueprint;
			TSubclassOf<UActorComponent>  ComponentClass;
			bool ExcludeInherited;
			UActorComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludeInherited_MetaData[];
#endif
		static void NewProp_ExcludeInherited_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ExcludeInherited;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintComponentOfClass_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::NewProp_ExcludeInherited_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::NewProp_ExcludeInherited_SetBit(void* Obj)
	{
		((ElgEditorBP_UBlueprint_eventGetBlueprintComponentOfClass_Parms*)Obj)->ExcludeInherited = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::NewProp_ExcludeInherited = { "ExcludeInherited", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_UBlueprint_eventGetBlueprintComponentOfClass_Parms), &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::NewProp_ExcludeInherited_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::NewProp_ExcludeInherited_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::NewProp_ExcludeInherited_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintComponentOfClass_Parms, ComponentClass), Z_Construct_UClass_UActorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintComponentOfClass_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::NewProp_ExcludeInherited,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::NewProp_ComponentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::NewProp_Blueprint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint|Component" },
		{ "CPP_Default_ExcludeInherited", "false" },
		{ "DeterminesOutputType", "ComponentClass" },
		{ "DisplayName", "GetComponentOfClass" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Returns the first component of the right class" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "GetBlueprintComponentOfClass", sizeof(ElgEditorBP_UBlueprint_eventGetBlueprintComponentOfClass_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics
	{
		struct ElgEditorBP_UBlueprint_eventGetBlueprintComponentOfClassBranch_Parms
		{
			UBlueprint* Blueprint;
			TSubclassOf<UActorComponent>  ComponentClass;
			bool ExcludeInherited;
			EBPEditorOutputValidBranch Branches;
			UActorComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludeInherited_MetaData[];
#endif
		static void NewProp_ExcludeInherited_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ExcludeInherited;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintComponentOfClassBranch_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintComponentOfClassBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_ExcludeInherited_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_ExcludeInherited_SetBit(void* Obj)
	{
		((ElgEditorBP_UBlueprint_eventGetBlueprintComponentOfClassBranch_Parms*)Obj)->ExcludeInherited = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_ExcludeInherited = { "ExcludeInherited", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_UBlueprint_eventGetBlueprintComponentOfClassBranch_Parms), &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_ExcludeInherited_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_ExcludeInherited_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_ExcludeInherited_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintComponentOfClassBranch_Parms, ComponentClass), Z_Construct_UClass_UActorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintComponentOfClassBranch_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_ExcludeInherited,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_ComponentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::NewProp_Blueprint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint|Component" },
		{ "DeterminesOutputType", "ComponentClass" },
		{ "DisplayName", "GetComponentOfClassBranch" },
		{ "ExcludeInherited", "false" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Returns the first component of the right class with an branch output pins" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "GetBlueprintComponentOfClassBranch", sizeof(ElgEditorBP_UBlueprint_eventGetBlueprintComponentOfClassBranch_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics
	{
		struct ElgEditorBP_UBlueprint_eventGetBlueprintComponents_Parms
		{
			UBlueprint* Blueprint;
			bool ExcludeInherited;
			TArray<UActorComponent*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludeInherited_MetaData[];
#endif
		static void NewProp_ExcludeInherited_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ExcludeInherited;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintComponents_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::NewProp_ExcludeInherited_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::NewProp_ExcludeInherited_SetBit(void* Obj)
	{
		((ElgEditorBP_UBlueprint_eventGetBlueprintComponents_Parms*)Obj)->ExcludeInherited = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::NewProp_ExcludeInherited = { "ExcludeInherited", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_UBlueprint_eventGetBlueprintComponents_Parms), &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::NewProp_ExcludeInherited_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::NewProp_ExcludeInherited_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::NewProp_ExcludeInherited_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintComponents_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::NewProp_ExcludeInherited,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::NewProp_Blueprint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint|Component" },
		{ "CPP_Default_ExcludeInherited", "false" },
		{ "DisplayName", "GetComponents" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Returns an array with all the ActorComponents the blueprint has." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "GetBlueprintComponents", sizeof(ElgEditorBP_UBlueprint_eventGetBlueprintComponents_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics
	{
		struct ElgEditorBP_UBlueprint_eventGetBlueprintComponentsOfClass_Parms
		{
			UBlueprint* Blueprint;
			TSubclassOf<UActorComponent>  ComponentClass;
			bool ExcludeInherited;
			TArray<UActorComponent*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludeInherited_MetaData[];
#endif
		static void NewProp_ExcludeInherited_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ExcludeInherited;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintComponentsOfClass_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_ExcludeInherited_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_ExcludeInherited_SetBit(void* Obj)
	{
		((ElgEditorBP_UBlueprint_eventGetBlueprintComponentsOfClass_Parms*)Obj)->ExcludeInherited = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_ExcludeInherited = { "ExcludeInherited", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_UBlueprint_eventGetBlueprintComponentsOfClass_Parms), &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_ExcludeInherited_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_ExcludeInherited_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_ExcludeInherited_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintComponentsOfClass_Parms, ComponentClass), Z_Construct_UClass_UActorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintComponentsOfClass_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_ExcludeInherited,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_ComponentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::NewProp_Blueprint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint|Component" },
		{ "CPP_Default_ExcludeInherited", "false" },
		{ "DeterminesOutputType", "ComponentClass" },
		{ "DisplayName", "GetComponentsOfClass" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Returns all the components of the right class" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "GetBlueprintComponentsOfClass", sizeof(ElgEditorBP_UBlueprint_eventGetBlueprintComponentsOfClass_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics
	{
		struct ElgEditorBP_UBlueprint_eventGetBlueprintComponentsOfClassBranch_Parms
		{
			UBlueprint* Blueprint;
			TSubclassOf<UActorComponent>  ComponentClass;
			bool ExcludeInherited;
			EBPEditorOutputValidBranch Branches;
			TArray<UActorComponent*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludeInherited_MetaData[];
#endif
		static void NewProp_ExcludeInherited_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ExcludeInherited;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintComponentsOfClassBranch_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintComponentsOfClassBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_ExcludeInherited_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_ExcludeInherited_SetBit(void* Obj)
	{
		((ElgEditorBP_UBlueprint_eventGetBlueprintComponentsOfClassBranch_Parms*)Obj)->ExcludeInherited = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_ExcludeInherited = { "ExcludeInherited", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_UBlueprint_eventGetBlueprintComponentsOfClassBranch_Parms), &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_ExcludeInherited_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_ExcludeInherited_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_ExcludeInherited_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintComponentsOfClassBranch_Parms, ComponentClass), Z_Construct_UClass_UActorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintComponentsOfClassBranch_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_ExcludeInherited,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_ComponentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::NewProp_Blueprint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint|Component" },
		{ "DeterminesOutputType", "ComponentClass" },
		{ "DisplayName", "GetComponentsOfClassBranch" },
		{ "ExcludeInherited", "false" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Returns all the components of the right class with an branch output pins" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "GetBlueprintComponentsOfClassBranch", sizeof(ElgEditorBP_UBlueprint_eventGetBlueprintComponentsOfClassBranch_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics
	{
		struct ElgEditorBP_UBlueprint_eventGetBlueprintFromAssetData_Parms
		{
			FAssetData AssetDataStruct;
			EBPEditorOutputValidBranch Branches;
			UBlueprint* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintFromAssetData_Parms, ReturnValue), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintFromAssetData_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::NewProp_AssetDataStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::NewProp_AssetDataStruct = { "AssetDataStruct", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintFromAssetData_Parms, AssetDataStruct), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::NewProp_AssetDataStruct_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::NewProp_AssetDataStruct_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::NewProp_AssetDataStruct,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Get the UBlueprint object from the AssetData" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "GetBlueprintFromAssetData", sizeof(ElgEditorBP_UBlueprint_eventGetBlueprintFromAssetData_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject_Statics
	{
		struct ElgEditorBP_UBlueprint_eventGetBlueprintFromObject_Parms
		{
			UObject* Object;
			EBPEditorOutputValidBranch Branches;
			UBlueprint* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintFromObject_Parms, ReturnValue), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintFromObject_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintFromObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Get the UBlueprint object from an UObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "GetBlueprintFromObject", sizeof(ElgEditorBP_UBlueprint_eventGetBlueprintFromObject_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics
	{
		struct ElgEditorBP_UBlueprint_eventGetBlueprintInterfaces_Parms
		{
			UBlueprint* Blueprint;
			bool ExcludeInherited;
			TArray<TSubclassOf<UInterface> > ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludeInherited_MetaData[];
#endif
		static void NewProp_ExcludeInherited_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ExcludeInherited;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintInterfaces_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInterface, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::NewProp_ExcludeInherited_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::NewProp_ExcludeInherited_SetBit(void* Obj)
	{
		((ElgEditorBP_UBlueprint_eventGetBlueprintInterfaces_Parms*)Obj)->ExcludeInherited = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::NewProp_ExcludeInherited = { "ExcludeInherited", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_UBlueprint_eventGetBlueprintInterfaces_Parms), &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::NewProp_ExcludeInherited_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::NewProp_ExcludeInherited_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::NewProp_ExcludeInherited_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetBlueprintInterfaces_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::NewProp_ExcludeInherited,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::NewProp_Blueprint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint|Interface" },
		{ "CPP_Default_ExcludeInherited", "false" },
		{ "DisplayName", "GetInterfaces" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ToolTip", "Returns an array with all the Interfaces the blueprint has." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "GetBlueprintInterfaces", sizeof(ElgEditorBP_UBlueprint_eventGetBlueprintInterfaces_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetParentClass_Statics
	{
		struct ElgEditorBP_UBlueprint_eventGetParentClass_Parms
		{
			UBlueprint* Blueprint;
			TSubclassOf<UObject>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetParentClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetParentClass_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetParentClass_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_UBlueprint_eventGetParentClass_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetParentClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetParentClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetParentClass_Statics::NewProp_Blueprint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetParentClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Blueprint" },
		{ "Keywords", "ElgSoft Editor Blueprint" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetParentClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_UBlueprint, nullptr, "GetParentClass", sizeof(ElgEditorBP_UBlueprint_eventGetParentClass_Parms), Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetParentClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetParentClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetParentClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetParentClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetParentClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetParentClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UElgEditorBP_UBlueprint_NoRegister()
	{
		return UElgEditorBP_UBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UElgEditorBP_UBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UElgEditorBP_UBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ElgEditorScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UElgEditorBP_UBlueprint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddComponent, "BlueprintAddComponent" }, // 3499444932
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintAddInterface, "BlueprintAddInterface" }, // 300630525
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintImplementInterface, "BlueprintImplementInterface" }, // 2245274888
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveComponent, "BlueprintRemoveComponent" }, // 3740366821
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintRemoveInterface, "BlueprintRemoveInterface" }, // 601555731
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponent, "BlueprintSupportComponent" }, // 3539071608
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportComponentBranch, "BlueprintSupportComponentBranch" }, // 2032027772
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterface, "BlueprintSupportInterface" }, // 2642966089
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_BlueprintSupportInterfaceBranch, "BlueprintSupportInterfaceBranch" }, // 334533445
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_CompileBlueprint, "CompileBlueprint" }, // 443233441
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClass, "GetBlueprintComponentOfClass" }, // 278202030
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentOfClassBranch, "GetBlueprintComponentOfClassBranch" }, // 1330502209
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponents, "GetBlueprintComponents" }, // 1843416762
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClass, "GetBlueprintComponentsOfClass" }, // 2491739729
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintComponentsOfClassBranch, "GetBlueprintComponentsOfClassBranch" }, // 995018040
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromAssetData, "GetBlueprintFromAssetData" }, // 4155287999
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintFromObject, "GetBlueprintFromObject" }, // 469041082
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetBlueprintInterfaces, "GetBlueprintInterfaces" }, // 1421430742
		{ &Z_Construct_UFunction_UElgEditorBP_UBlueprint_GetParentClass, "GetParentClass" }, // 331553390
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgEditorBP_UBlueprint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprints/ElgEditorBP_UBlueprint.h" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_UBlueprint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UElgEditorBP_UBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElgEditorBP_UBlueprint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UElgEditorBP_UBlueprint_Statics::ClassParams = {
		&UElgEditorBP_UBlueprint::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UElgEditorBP_UBlueprint_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UElgEditorBP_UBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UElgEditorBP_UBlueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UElgEditorBP_UBlueprint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UElgEditorBP_UBlueprint, 901162709);
	template<> ELGEDITORSCRIPTING_API UClass* StaticClass<UElgEditorBP_UBlueprint>()
	{
		return UElgEditorBP_UBlueprint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UElgEditorBP_UBlueprint(Z_Construct_UClass_UElgEditorBP_UBlueprint, &UElgEditorBP_UBlueprint::StaticClass, TEXT("/Script/ElgEditorScripting"), TEXT("UElgEditorBP_UBlueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UElgEditorBP_UBlueprint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
