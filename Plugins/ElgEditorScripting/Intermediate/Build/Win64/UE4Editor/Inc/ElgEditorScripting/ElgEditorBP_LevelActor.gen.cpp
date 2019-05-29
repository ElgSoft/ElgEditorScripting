// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElgEditorScripting/Public/Blueprints/ElgEditorBP_LevelActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElgEditorBP_LevelActor() {}
// Cross Module References
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorBP_LevelActor_NoRegister();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorBP_LevelActor();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ElgEditorScripting();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActorBranch();
	ELGEDITORSCRIPTING_API UEnum* Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorAsDirty();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorsAsDirty();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_LevelActor_RunConstructionScipt();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_LevelActor_RunConstructionScipts();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabled();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabledBranch();
// End Cross Module References
	void UElgEditorBP_LevelActor::StaticRegisterNativesUElgEditorBP_LevelActor()
	{
		UClass* Class = UElgEditorBP_LevelActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsEditorOnlyActor", &UElgEditorBP_LevelActor::execIsEditorOnlyActor },
			{ "IsEditorOnlyActorBranch", &UElgEditorBP_LevelActor::execIsEditorOnlyActorBranch },
			{ "MarkActorAsDirty", &UElgEditorBP_LevelActor::execMarkActorAsDirty },
			{ "MarkActorsAsDirty", &UElgEditorBP_LevelActor::execMarkActorsAsDirty },
			{ "RunConstructionScipt", &UElgEditorBP_LevelActor::execRunConstructionScipt },
			{ "RunConstructionScipts", &UElgEditorBP_LevelActor::execRunConstructionScipts },
			{ "StartWithTickEnabled", &UElgEditorBP_LevelActor::execStartWithTickEnabled },
			{ "StartWithTickEnabledBranch", &UElgEditorBP_LevelActor::execStartWithTickEnabledBranch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActor_Statics
	{
		struct ElgEditorBP_LevelActor_eventIsEditorOnlyActor_Parms
		{
			AActor* Actor;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorBP_LevelActor_eventIsEditorOnlyActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_LevelActor_eventIsEditorOnlyActor_Parms), &Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_LevelActor_eventIsEditorOnlyActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActor_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Actor" },
		{ "DefaultToSelf", "Actor" },
		{ "Keywords", "ElgEditor Actor" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_LevelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_LevelActor, nullptr, "IsEditorOnlyActor", sizeof(ElgEditorBP_LevelActor_eventIsEditorOnlyActor_Parms), Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActorBranch_Statics
	{
		struct ElgEditorBP_LevelActor_eventIsEditorOnlyActorBranch_Parms
		{
			AActor* Actor;
			EBPEditorOutputBranch Branches;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActorBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_LevelActor_eventIsEditorOnlyActorBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActorBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActorBranch_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_LevelActor_eventIsEditorOnlyActorBranch_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActorBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActorBranch_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActorBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActorBranch_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActorBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Actor" },
		{ "DefaultToSelf", "Actor" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_LevelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActorBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_LevelActor, nullptr, "IsEditorOnlyActorBranch", sizeof(ElgEditorBP_LevelActor_eventIsEditorOnlyActorBranch_Parms), Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActorBranch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActorBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActorBranch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActorBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActorBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActorBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorAsDirty_Statics
	{
		struct ElgEditorBP_LevelActor_eventMarkActorAsDirty_Parms
		{
			AActor* Actor;
			bool bRunConstructionScript;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRunConstructionScript_MetaData[];
#endif
		static void NewProp_bRunConstructionScript_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRunConstructionScript;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorAsDirty_Statics::NewProp_bRunConstructionScript_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorAsDirty_Statics::NewProp_bRunConstructionScript_SetBit(void* Obj)
	{
		((ElgEditorBP_LevelActor_eventMarkActorAsDirty_Parms*)Obj)->bRunConstructionScript = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorAsDirty_Statics::NewProp_bRunConstructionScript = { "bRunConstructionScript", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_LevelActor_eventMarkActorAsDirty_Parms), &Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorAsDirty_Statics::NewProp_bRunConstructionScript_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorAsDirty_Statics::NewProp_bRunConstructionScript_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorAsDirty_Statics::NewProp_bRunConstructionScript_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorAsDirty_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_LevelActor_eventMarkActorAsDirty_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorAsDirty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorAsDirty_Statics::NewProp_bRunConstructionScript,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorAsDirty_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorAsDirty_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|LevelActor" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_LevelActor.h" },
		{ "ToolTip", "Let the editor know that the actor has change" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorAsDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_LevelActor, nullptr, "MarkActorAsDirty", sizeof(ElgEditorBP_LevelActor_eventMarkActorAsDirty_Parms), Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorAsDirty_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorAsDirty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorAsDirty_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorAsDirty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorAsDirty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorAsDirty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorsAsDirty_Statics
	{
		struct ElgEditorBP_LevelActor_eventMarkActorsAsDirty_Parms
		{
			TArray<AActor*> Actors;
			bool bRunConstructionScript;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRunConstructionScript_MetaData[];
#endif
		static void NewProp_bRunConstructionScript_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRunConstructionScript;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorsAsDirty_Statics::NewProp_bRunConstructionScript_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorsAsDirty_Statics::NewProp_bRunConstructionScript_SetBit(void* Obj)
	{
		((ElgEditorBP_LevelActor_eventMarkActorsAsDirty_Parms*)Obj)->bRunConstructionScript = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorsAsDirty_Statics::NewProp_bRunConstructionScript = { "bRunConstructionScript", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_LevelActor_eventMarkActorsAsDirty_Parms), &Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorsAsDirty_Statics::NewProp_bRunConstructionScript_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorsAsDirty_Statics::NewProp_bRunConstructionScript_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorsAsDirty_Statics::NewProp_bRunConstructionScript_MetaData)) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorsAsDirty_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_LevelActor_eventMarkActorsAsDirty_Parms, Actors), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorsAsDirty_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorsAsDirty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorsAsDirty_Statics::NewProp_bRunConstructionScript,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorsAsDirty_Statics::NewProp_Actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorsAsDirty_Statics::NewProp_Actors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorsAsDirty_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|LevelActor" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_LevelActor.h" },
		{ "ToolTip", "Let the editor know that the actor has change" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorsAsDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_LevelActor, nullptr, "MarkActorsAsDirty", sizeof(ElgEditorBP_LevelActor_eventMarkActorsAsDirty_Parms), Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorsAsDirty_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorsAsDirty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorsAsDirty_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorsAsDirty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorsAsDirty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorsAsDirty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_LevelActor_RunConstructionScipt_Statics
	{
		struct ElgEditorBP_LevelActor_eventRunConstructionScipt_Parms
		{
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_LevelActor_RunConstructionScipt_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_LevelActor_eventRunConstructionScipt_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_LevelActor_RunConstructionScipt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_LevelActor_RunConstructionScipt_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_LevelActor_RunConstructionScipt_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|LevelActor" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_LevelActor.h" },
		{ "ToolTip", "Run the actor Construction Script" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_LevelActor_RunConstructionScipt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_LevelActor, nullptr, "RunConstructionScipt", sizeof(ElgEditorBP_LevelActor_eventRunConstructionScipt_Parms), Z_Construct_UFunction_UElgEditorBP_LevelActor_RunConstructionScipt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_LevelActor_RunConstructionScipt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_LevelActor_RunConstructionScipt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_LevelActor_RunConstructionScipt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_LevelActor_RunConstructionScipt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_LevelActor_RunConstructionScipt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_LevelActor_RunConstructionScipts_Statics
	{
		struct ElgEditorBP_LevelActor_eventRunConstructionScipts_Parms
		{
			TArray<AActor*> Actors;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_LevelActor_RunConstructionScipts_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_LevelActor_eventRunConstructionScipts_Parms, Actors), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_LevelActor_RunConstructionScipts_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_LevelActor_RunConstructionScipts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_LevelActor_RunConstructionScipts_Statics::NewProp_Actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_LevelActor_RunConstructionScipts_Statics::NewProp_Actors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_LevelActor_RunConstructionScipts_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|LevelActor" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_LevelActor.h" },
		{ "ToolTip", "Run the actors Construction Script" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_LevelActor_RunConstructionScipts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_LevelActor, nullptr, "RunConstructionScipts", sizeof(ElgEditorBP_LevelActor_eventRunConstructionScipts_Parms), Z_Construct_UFunction_UElgEditorBP_LevelActor_RunConstructionScipts_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_LevelActor_RunConstructionScipts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_LevelActor_RunConstructionScipts_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_LevelActor_RunConstructionScipts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_LevelActor_RunConstructionScipts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_LevelActor_RunConstructionScipts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabled_Statics
	{
		struct ElgEditorBP_LevelActor_eventStartWithTickEnabled_Parms
		{
			AActor* Actor;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorBP_LevelActor_eventStartWithTickEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_LevelActor_eventStartWithTickEnabled_Parms), &Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabled_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_LevelActor_eventStartWithTickEnabled_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabled_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabled_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Actor" },
		{ "DefaultToSelf", "Actor" },
		{ "Keywords", "ElgEditor Actor" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_LevelActor.h" },
		{ "ToolTip", "Is tick enabled on the actor?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_LevelActor, nullptr, "StartWithTickEnabled", sizeof(ElgEditorBP_LevelActor_eventStartWithTickEnabled_Parms), Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabledBranch_Statics
	{
		struct ElgEditorBP_LevelActor_eventStartWithTickEnabledBranch_Parms
		{
			AActor* Actor;
			EBPEditorOutputBranch Branches;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabledBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_LevelActor_eventStartWithTickEnabledBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabledBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabledBranch_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_LevelActor_eventStartWithTickEnabledBranch_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabledBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabledBranch_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabledBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabledBranch_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabledBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Actor" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_LevelActor.h" },
		{ "ToolTip", "Is tick enabled on the actor?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabledBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_LevelActor, nullptr, "StartWithTickEnabledBranch", sizeof(ElgEditorBP_LevelActor_eventStartWithTickEnabledBranch_Parms), Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabledBranch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabledBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabledBranch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabledBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabledBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabledBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UElgEditorBP_LevelActor_NoRegister()
	{
		return UElgEditorBP_LevelActor::StaticClass();
	}
	struct Z_Construct_UClass_UElgEditorBP_LevelActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UElgEditorBP_LevelActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ElgEditorScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UElgEditorBP_LevelActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActor, "IsEditorOnlyActor" }, // 2596156156
		{ &Z_Construct_UFunction_UElgEditorBP_LevelActor_IsEditorOnlyActorBranch, "IsEditorOnlyActorBranch" }, // 412080241
		{ &Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorAsDirty, "MarkActorAsDirty" }, // 3489470873
		{ &Z_Construct_UFunction_UElgEditorBP_LevelActor_MarkActorsAsDirty, "MarkActorsAsDirty" }, // 3286677694
		{ &Z_Construct_UFunction_UElgEditorBP_LevelActor_RunConstructionScipt, "RunConstructionScipt" }, // 620577906
		{ &Z_Construct_UFunction_UElgEditorBP_LevelActor_RunConstructionScipts, "RunConstructionScipts" }, // 771057293
		{ &Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabled, "StartWithTickEnabled" }, // 2113715216
		{ &Z_Construct_UFunction_UElgEditorBP_LevelActor_StartWithTickEnabledBranch, "StartWithTickEnabledBranch" }, // 1412741903
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgEditorBP_LevelActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprints/ElgEditorBP_LevelActor.h" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_LevelActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UElgEditorBP_LevelActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElgEditorBP_LevelActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UElgEditorBP_LevelActor_Statics::ClassParams = {
		&UElgEditorBP_LevelActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UElgEditorBP_LevelActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UElgEditorBP_LevelActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UElgEditorBP_LevelActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UElgEditorBP_LevelActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UElgEditorBP_LevelActor, 2843141590);
	template<> ELGEDITORSCRIPTING_API UClass* StaticClass<UElgEditorBP_LevelActor>()
	{
		return UElgEditorBP_LevelActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UElgEditorBP_LevelActor(Z_Construct_UClass_UElgEditorBP_LevelActor, &UElgEditorBP_LevelActor::StaticClass, TEXT("/Script/ElgEditorScripting"), TEXT("UElgEditorBP_LevelActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UElgEditorBP_LevelActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
