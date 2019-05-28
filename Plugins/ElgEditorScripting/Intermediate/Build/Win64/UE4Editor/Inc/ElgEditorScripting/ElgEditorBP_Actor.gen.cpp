// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElgEditorScripting/Public/Blueprints/ElgEditorBP_Actor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElgEditorBP_Actor() {}
// Cross Module References
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorBP_Actor_NoRegister();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorBP_Actor();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ElgEditorScripting();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActorBranch();
	ELGEDITORSCRIPTING_API UEnum* Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabled();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabledBranch();
// End Cross Module References
	void UElgEditorBP_Actor::StaticRegisterNativesUElgEditorBP_Actor()
	{
		UClass* Class = UElgEditorBP_Actor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsEditorOnlyActor", &UElgEditorBP_Actor::execIsEditorOnlyActor },
			{ "IsEditorOnlyActorBranch", &UElgEditorBP_Actor::execIsEditorOnlyActorBranch },
			{ "StartWithTickEnabled", &UElgEditorBP_Actor::execStartWithTickEnabled },
			{ "StartWithTickEnabledBranch", &UElgEditorBP_Actor::execStartWithTickEnabledBranch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActor_Statics
	{
		struct ElgEditorBP_Actor_eventIsEditorOnlyActor_Parms
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
	void Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorBP_Actor_eventIsEditorOnlyActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_Actor_eventIsEditorOnlyActor_Parms), &Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Actor_eventIsEditorOnlyActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActor_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Actor" },
		{ "DefaultToSelf", "Actor" },
		{ "Keywords", "ElgEditor Actor" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Actor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Actor, nullptr, "IsEditorOnlyActor", sizeof(ElgEditorBP_Actor_eventIsEditorOnlyActor_Parms), Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActorBranch_Statics
	{
		struct ElgEditorBP_Actor_eventIsEditorOnlyActorBranch_Parms
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActorBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Actor_eventIsEditorOnlyActorBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActorBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActorBranch_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Actor_eventIsEditorOnlyActorBranch_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActorBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActorBranch_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActorBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActorBranch_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActorBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Actor" },
		{ "DefaultToSelf", "Actor" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Actor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActorBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Actor, nullptr, "IsEditorOnlyActorBranch", sizeof(ElgEditorBP_Actor_eventIsEditorOnlyActorBranch_Parms), Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActorBranch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActorBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActorBranch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActorBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActorBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActorBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabled_Statics
	{
		struct ElgEditorBP_Actor_eventStartWithTickEnabled_Parms
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
	void Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorBP_Actor_eventStartWithTickEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_Actor_eventStartWithTickEnabled_Parms), &Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabled_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Actor_eventStartWithTickEnabled_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabled_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabled_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Actor" },
		{ "DefaultToSelf", "Actor" },
		{ "Keywords", "ElgEditor Actor" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Actor.h" },
		{ "ToolTip", "Is tick enabled on the actor?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Actor, nullptr, "StartWithTickEnabled", sizeof(ElgEditorBP_Actor_eventStartWithTickEnabled_Parms), Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabledBranch_Statics
	{
		struct ElgEditorBP_Actor_eventStartWithTickEnabledBranch_Parms
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabledBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Actor_eventStartWithTickEnabledBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabledBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabledBranch_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_Actor_eventStartWithTickEnabledBranch_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabledBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabledBranch_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabledBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabledBranch_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabledBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Actor" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Actor.h" },
		{ "ToolTip", "Is tick enabled on the actor?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabledBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_Actor, nullptr, "StartWithTickEnabledBranch", sizeof(ElgEditorBP_Actor_eventStartWithTickEnabledBranch_Parms), Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabledBranch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabledBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabledBranch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabledBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabledBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabledBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UElgEditorBP_Actor_NoRegister()
	{
		return UElgEditorBP_Actor::StaticClass();
	}
	struct Z_Construct_UClass_UElgEditorBP_Actor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UElgEditorBP_Actor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ElgEditorScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UElgEditorBP_Actor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActor, "IsEditorOnlyActor" }, // 1796304932
		{ &Z_Construct_UFunction_UElgEditorBP_Actor_IsEditorOnlyActorBranch, "IsEditorOnlyActorBranch" }, // 2598079224
		{ &Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabled, "StartWithTickEnabled" }, // 1125635512
		{ &Z_Construct_UFunction_UElgEditorBP_Actor_StartWithTickEnabledBranch, "StartWithTickEnabledBranch" }, // 822238219
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgEditorBP_Actor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprints/ElgEditorBP_Actor.h" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Actor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UElgEditorBP_Actor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElgEditorBP_Actor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UElgEditorBP_Actor_Statics::ClassParams = {
		&UElgEditorBP_Actor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UElgEditorBP_Actor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UElgEditorBP_Actor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UElgEditorBP_Actor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UElgEditorBP_Actor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UElgEditorBP_Actor, 3274471453);
	template<> ELGEDITORSCRIPTING_API UClass* StaticClass<UElgEditorBP_Actor>()
	{
		return UElgEditorBP_Actor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UElgEditorBP_Actor(Z_Construct_UClass_UElgEditorBP_Actor, &UElgEditorBP_Actor::StaticClass, TEXT("/Script/ElgEditorScripting"), TEXT("UElgEditorBP_Actor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UElgEditorBP_Actor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
