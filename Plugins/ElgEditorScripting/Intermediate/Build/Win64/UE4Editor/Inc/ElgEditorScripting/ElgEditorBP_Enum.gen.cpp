// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElgEditorScripting/Public/Blueprints/ElgEditorBP_Enum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElgEditorBP_Enum() {}
// Cross Module References
	ELGEDITORSCRIPTING_API UEnum* Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputResultBranch();
	UPackage* Z_Construct_UPackage__Script_ElgEditorScripting();
	ELGEDITORSCRIPTING_API UEnum* Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch();
	ELGEDITORSCRIPTING_API UEnum* Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputCompareBranch();
	ELGEDITORSCRIPTING_API UEnum* Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch();
	ELGEDITORSCRIPTING_API UEnum* Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputCompareCheck();
// End Cross Module References
	static UEnum* EBPEditorOutputResultBranch_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputResultBranch, Z_Construct_UPackage__Script_ElgEditorScripting(), TEXT("EBPEditorOutputResultBranch"));
		}
		return Singleton;
	}
	template<> ELGEDITORSCRIPTING_API UEnum* StaticEnum<EBPEditorOutputResultBranch>()
	{
		return EBPEditorOutputResultBranch_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPEditorOutputResultBranch(EBPEditorOutputResultBranch_StaticEnum, TEXT("/Script/ElgEditorScripting"), TEXT("EBPEditorOutputResultBranch"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputResultBranch_Hash() { return 2411390904U; }
	UEnum* Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputResultBranch()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ElgEditorScripting();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPEditorOutputResultBranch"), 0, Get_Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputResultBranch_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBPEditorOutputResultBranch::Success", (int64)EBPEditorOutputResultBranch::Success },
				{ "EBPEditorOutputResultBranch::Failed", (int64)EBPEditorOutputResultBranch::Failed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Failed.Name", "EBPEditorOutputResultBranch::Failed" },
				{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Enum.h" },
				{ "Success.Name", "EBPEditorOutputResultBranch::Success" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ElgEditorScripting,
				nullptr,
				"EBPEditorOutputResultBranch",
				"EBPEditorOutputResultBranch",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBPEditorOutputValidBranch_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, Z_Construct_UPackage__Script_ElgEditorScripting(), TEXT("EBPEditorOutputValidBranch"));
		}
		return Singleton;
	}
	template<> ELGEDITORSCRIPTING_API UEnum* StaticEnum<EBPEditorOutputValidBranch>()
	{
		return EBPEditorOutputValidBranch_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPEditorOutputValidBranch(EBPEditorOutputValidBranch_StaticEnum, TEXT("/Script/ElgEditorScripting"), TEXT("EBPEditorOutputValidBranch"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch_Hash() { return 2048179202U; }
	UEnum* Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ElgEditorScripting();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPEditorOutputValidBranch"), 0, Get_Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBPEditorOutputValidBranch::Valid", (int64)EBPEditorOutputValidBranch::Valid },
				{ "EBPEditorOutputValidBranch::Invalid", (int64)EBPEditorOutputValidBranch::Invalid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Invalid.Name", "EBPEditorOutputValidBranch::Invalid" },
				{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Enum.h" },
				{ "Valid.Name", "EBPEditorOutputValidBranch::Valid" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ElgEditorScripting,
				nullptr,
				"EBPEditorOutputValidBranch",
				"EBPEditorOutputValidBranch",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBPEditorOutputCompareBranch_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputCompareBranch, Z_Construct_UPackage__Script_ElgEditorScripting(), TEXT("EBPEditorOutputCompareBranch"));
		}
		return Singleton;
	}
	template<> ELGEDITORSCRIPTING_API UEnum* StaticEnum<EBPEditorOutputCompareBranch>()
	{
		return EBPEditorOutputCompareBranch_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPEditorOutputCompareBranch(EBPEditorOutputCompareBranch_StaticEnum, TEXT("/Script/ElgEditorScripting"), TEXT("EBPEditorOutputCompareBranch"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputCompareBranch_Hash() { return 2117262478U; }
	UEnum* Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputCompareBranch()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ElgEditorScripting();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPEditorOutputCompareBranch"), 0, Get_Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputCompareBranch_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBPEditorOutputCompareBranch::Equal", (int64)EBPEditorOutputCompareBranch::Equal },
				{ "EBPEditorOutputCompareBranch::NotEqual", (int64)EBPEditorOutputCompareBranch::NotEqual },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Equal.Name", "EBPEditorOutputCompareBranch::Equal" },
				{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Enum.h" },
				{ "NotEqual.Name", "EBPEditorOutputCompareBranch::NotEqual" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ElgEditorScripting,
				nullptr,
				"EBPEditorOutputCompareBranch",
				"EBPEditorOutputCompareBranch",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBPEditorOutputBranch_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch, Z_Construct_UPackage__Script_ElgEditorScripting(), TEXT("EBPEditorOutputBranch"));
		}
		return Singleton;
	}
	template<> ELGEDITORSCRIPTING_API UEnum* StaticEnum<EBPEditorOutputBranch>()
	{
		return EBPEditorOutputBranch_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPEditorOutputBranch(EBPEditorOutputBranch_StaticEnum, TEXT("/Script/ElgEditorScripting"), TEXT("EBPEditorOutputBranch"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch_Hash() { return 3511518530U; }
	UEnum* Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ElgEditorScripting();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPEditorOutputBranch"), 0, Get_Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBPEditorOutputBranch::outTrue", (int64)EBPEditorOutputBranch::outTrue },
				{ "EBPEditorOutputBranch::outFalse", (int64)EBPEditorOutputBranch::outFalse },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Enum.h" },
				{ "outFalse.Name", "EBPEditorOutputBranch::outFalse" },
				{ "outTrue.Name", "EBPEditorOutputBranch::outTrue" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ElgEditorScripting,
				nullptr,
				"EBPEditorOutputBranch",
				"EBPEditorOutputBranch",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBPEditorOutputCompareCheck_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputCompareCheck, Z_Construct_UPackage__Script_ElgEditorScripting(), TEXT("EBPEditorOutputCompareCheck"));
		}
		return Singleton;
	}
	template<> ELGEDITORSCRIPTING_API UEnum* StaticEnum<EBPEditorOutputCompareCheck>()
	{
		return EBPEditorOutputCompareCheck_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPEditorOutputCompareCheck(EBPEditorOutputCompareCheck_StaticEnum, TEXT("/Script/ElgEditorScripting"), TEXT("EBPEditorOutputCompareCheck"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputCompareCheck_Hash() { return 889156503U; }
	UEnum* Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputCompareCheck()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ElgEditorScripting();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPEditorOutputCompareCheck"), 0, Get_Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputCompareCheck_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBPEditorOutputCompareCheck::Less", (int64)EBPEditorOutputCompareCheck::Less },
				{ "EBPEditorOutputCompareCheck::Equal", (int64)EBPEditorOutputCompareCheck::Equal },
				{ "EBPEditorOutputCompareCheck::Greater", (int64)EBPEditorOutputCompareCheck::Greater },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Equal.Name", "EBPEditorOutputCompareCheck::Equal" },
				{ "Greater.Name", "EBPEditorOutputCompareCheck::Greater" },
				{ "Less.Name", "EBPEditorOutputCompareCheck::Less" },
				{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_Enum.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ElgEditorScripting,
				nullptr,
				"EBPEditorOutputCompareCheck",
				"EBPEditorOutputCompareCheck",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
