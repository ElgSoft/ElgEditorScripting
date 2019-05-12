// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElgEditorScripting/Public/EditorContexts/ElgEditorContext_Config.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElgEditorContext_Config() {}
// Cross Module References
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorContext_Config_NoRegister();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorContext_Config();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ElgEditorScripting();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_Clear();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_DoesExist();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_DoesExistBranch();
	ELGEDITORSCRIPTING_API UEnum* Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_GetKeys();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_GetKeyValuesAsStrings();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_HasKey();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadArray();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadBool();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadInt();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadString();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadText();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_WriteArray();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_WriteBool();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_WriteColor();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_WriteInt();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_WriteString();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_WriteText();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_WriteVector();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4();
// End Cross Module References
	void UElgEditorContext_Config::StaticRegisterNativesUElgEditorContext_Config()
	{
		UClass* Class = UElgEditorContext_Config::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Clear", &UElgEditorContext_Config::execClear },
			{ "DoesExist", &UElgEditorContext_Config::execDoesExist },
			{ "DoesExistBranch", &UElgEditorContext_Config::execDoesExistBranch },
			{ "GetKeys", &UElgEditorContext_Config::execGetKeys },
			{ "GetKeyValuesAsStrings", &UElgEditorContext_Config::execGetKeyValuesAsStrings },
			{ "HasKey", &UElgEditorContext_Config::execHasKey },
			{ "HasKeyBranch", &UElgEditorContext_Config::execHasKeyBranch },
			{ "ReadArray", &UElgEditorContext_Config::execReadArray },
			{ "ReadArrayBranch", &UElgEditorContext_Config::execReadArrayBranch },
			{ "ReadBool", &UElgEditorContext_Config::execReadBool },
			{ "ReadBoolBranch", &UElgEditorContext_Config::execReadBoolBranch },
			{ "ReadColor", &UElgEditorContext_Config::execReadColor },
			{ "ReadColorBranch", &UElgEditorContext_Config::execReadColorBranch },
			{ "ReadFloat", &UElgEditorContext_Config::execReadFloat },
			{ "ReadFloatBranch", &UElgEditorContext_Config::execReadFloatBranch },
			{ "ReadInt", &UElgEditorContext_Config::execReadInt },
			{ "ReadIntBranch", &UElgEditorContext_Config::execReadIntBranch },
			{ "ReadRotator", &UElgEditorContext_Config::execReadRotator },
			{ "ReadRotatorBranch", &UElgEditorContext_Config::execReadRotatorBranch },
			{ "ReadString", &UElgEditorContext_Config::execReadString },
			{ "ReadStringBranch", &UElgEditorContext_Config::execReadStringBranch },
			{ "ReadText", &UElgEditorContext_Config::execReadText },
			{ "ReadTextBranch", &UElgEditorContext_Config::execReadTextBranch },
			{ "ReadVector", &UElgEditorContext_Config::execReadVector },
			{ "ReadVector2d", &UElgEditorContext_Config::execReadVector2d },
			{ "ReadVector2dBranch", &UElgEditorContext_Config::execReadVector2dBranch },
			{ "ReadVector4", &UElgEditorContext_Config::execReadVector4 },
			{ "ReadVector4Branch", &UElgEditorContext_Config::execReadVector4Branch },
			{ "ReadVectorBranch", &UElgEditorContext_Config::execReadVectorBranch },
			{ "RemoveKey", &UElgEditorContext_Config::execRemoveKey },
			{ "WriteArray", &UElgEditorContext_Config::execWriteArray },
			{ "WriteBool", &UElgEditorContext_Config::execWriteBool },
			{ "WriteColor", &UElgEditorContext_Config::execWriteColor },
			{ "WriteFloat", &UElgEditorContext_Config::execWriteFloat },
			{ "WriteInt", &UElgEditorContext_Config::execWriteInt },
			{ "WriteRotator", &UElgEditorContext_Config::execWriteRotator },
			{ "WriteString", &UElgEditorContext_Config::execWriteString },
			{ "WriteText", &UElgEditorContext_Config::execWriteText },
			{ "WriteVector", &UElgEditorContext_Config::execWriteVector },
			{ "WriteVector2d", &UElgEditorContext_Config::execWriteVector2d },
			{ "WriteVector4", &UElgEditorContext_Config::execWriteVector4 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_Clear_Statics
	{
		struct ElgEditorContext_Config_eventClear_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorContext_Config_Clear_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventClear_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_Clear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventClear_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_Clear_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_Clear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_Clear_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_Clear_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Clear the config section of all the data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "Clear", sizeof(ElgEditorContext_Config_eventClear_Parms), Z_Construct_UFunction_UElgEditorContext_Config_Clear_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_Clear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_Clear_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_DoesExist_Statics
	{
		struct ElgEditorContext_Config_eventDoesExist_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorContext_Config_DoesExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventDoesExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_DoesExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventDoesExist_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_DoesExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_DoesExist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_DoesExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_DoesExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Return if the config section exist or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_DoesExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "DoesExist", sizeof(ElgEditorContext_Config_eventDoesExist_Parms), Z_Construct_UFunction_UElgEditorContext_Config_DoesExist_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_DoesExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_DoesExist_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_DoesExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_DoesExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_DoesExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_DoesExistBranch_Statics
	{
		struct ElgEditorContext_Config_eventDoesExistBranch_Parms
		{
			EBPEditorOutputValidBranch Branches;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_DoesExistBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventDoesExistBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorContext_Config_DoesExistBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_DoesExistBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_DoesExistBranch_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_DoesExistBranch_Statics::NewProp_Branches_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_DoesExistBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Return if the config section exist or not with a branches" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_DoesExistBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "DoesExistBranch", sizeof(ElgEditorContext_Config_eventDoesExistBranch_Parms), Z_Construct_UFunction_UElgEditorContext_Config_DoesExistBranch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_DoesExistBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_DoesExistBranch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_DoesExistBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_DoesExistBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_DoesExistBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_GetKeys_Statics
	{
		struct ElgEditorContext_Config_eventGetKeys_Parms
		{
			TArray<FString> Keys;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keys;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Keys_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_GetKeys_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventGetKeys_Parms, Keys), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_GetKeys_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_GetKeys_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_GetKeys_Statics::NewProp_Keys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_GetKeys_Statics::NewProp_Keys_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_GetKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Get an array with all the keys and value in the config" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_GetKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "GetKeys", sizeof(ElgEditorContext_Config_eventGetKeys_Parms), Z_Construct_UFunction_UElgEditorContext_Config_GetKeys_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_GetKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_GetKeys_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_GetKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_GetKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_GetKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_GetKeyValuesAsStrings_Statics
	{
		struct ElgEditorContext_Config_eventGetKeyValuesAsStrings_Parms
		{
			TArray<FString> ConfigData;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConfigData;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConfigData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_GetKeyValuesAsStrings_Statics::NewProp_ConfigData = { "ConfigData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventGetKeyValuesAsStrings_Parms, ConfigData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_GetKeyValuesAsStrings_Statics::NewProp_ConfigData_Inner = { "ConfigData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_GetKeyValuesAsStrings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_GetKeyValuesAsStrings_Statics::NewProp_ConfigData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_GetKeyValuesAsStrings_Statics::NewProp_ConfigData_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_GetKeyValuesAsStrings_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Get an array with all the keys and value in the config" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_GetKeyValuesAsStrings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "GetKeyValuesAsStrings", sizeof(ElgEditorContext_Config_eventGetKeyValuesAsStrings_Parms), Z_Construct_UFunction_UElgEditorContext_Config_GetKeyValuesAsStrings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_GetKeyValuesAsStrings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_GetKeyValuesAsStrings_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_GetKeyValuesAsStrings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_GetKeyValuesAsStrings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_GetKeyValuesAsStrings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics
	{
		struct ElgEditorContext_Config_eventHasKey_Parms
		{
			FString Key;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventHasKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventHasKey_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventHasKey_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Return if the key exist or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "HasKey", sizeof(ElgEditorContext_Config_eventHasKey_Parms), Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_HasKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_HasKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics
	{
		struct ElgEditorContext_Config_eventHasKeyBranch_Parms
		{
			FString Key;
			EBPEditorOutputValidBranch Branches;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventHasKeyBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventHasKeyBranch_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Return if the key exist with a branch pins" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "HasKeyBranch", sizeof(ElgEditorContext_Config_eventHasKeyBranch_Parms), Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics
	{
		struct ElgEditorContext_Config_eventReadArray_Parms
		{
			FString Key;
			TArray<FString> Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventReadArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventReadArray_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadArray_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadArray_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::NewProp_Value_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a string array from a config file.\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadArray", sizeof(ElgEditorContext_Config_eventReadArray_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics
	{
		struct ElgEditorContext_Config_eventReadArrayBranch_Parms
		{
			FString Key;
			TArray<FString> Value;
			EBPEditorOutputValidBranch Branches;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadArrayBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadArrayBranch_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadArrayBranch_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::NewProp_Value_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a string array from a config file with Branch pins\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadArrayBranch", sizeof(ElgEditorContext_Config_eventReadArrayBranch_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics
	{
		struct ElgEditorContext_Config_eventReadBool_Parms
		{
			FString Key;
			bool Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventReadBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventReadBool_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventReadBool_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventReadBool_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadBool_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a bool from a config file.\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadBool", sizeof(ElgEditorContext_Config_eventReadBool_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics
	{
		struct ElgEditorContext_Config_eventReadBoolBranch_Parms
		{
			FString Key;
			bool Value;
			EBPEditorOutputValidBranch Branches;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadBoolBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventReadBoolBranch_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventReadBoolBranch_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadBoolBranch_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a bool from a config file with Branch pins\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadBoolBranch", sizeof(ElgEditorContext_Config_eventReadBoolBranch_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics
	{
		struct ElgEditorContext_Config_eventReadColor_Parms
		{
			FString Key;
			FColor Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventReadColor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventReadColor_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadColor_Parms, Value), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadColor_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a FColor from a config file.\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadColor", sizeof(ElgEditorContext_Config_eventReadColor_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics
	{
		struct ElgEditorContext_Config_eventReadColorBranch_Parms
		{
			FString Key;
			FColor Value;
			EBPEditorOutputValidBranch Branches;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadColorBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadColorBranch_Parms, Value), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadColorBranch_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a FColor from a config file with Branch pins\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadColorBranch", sizeof(ElgEditorContext_Config_eventReadColorBranch_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics
	{
		struct ElgEditorContext_Config_eventReadFloat_Parms
		{
			FString Key;
			float Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventReadFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventReadFloat_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadFloat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadFloat_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a float from a config file.\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadFloat", sizeof(ElgEditorContext_Config_eventReadFloat_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics
	{
		struct ElgEditorContext_Config_eventReadFloatBranch_Parms
		{
			FString Key;
			float Value;
			EBPEditorOutputValidBranch Branches;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadFloatBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadFloatBranch_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadFloatBranch_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a float from a config file with Branch pins\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadFloatBranch", sizeof(ElgEditorContext_Config_eventReadFloatBranch_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics
	{
		struct ElgEditorContext_Config_eventReadInt_Parms
		{
			FString Key;
			int32 Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventReadInt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventReadInt_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadInt_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadInt_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a int from a config file.\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadInt", sizeof(ElgEditorContext_Config_eventReadInt_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics
	{
		struct ElgEditorContext_Config_eventReadIntBranch_Parms
		{
			FString Key;
			int32 Value;
			EBPEditorOutputValidBranch Branches;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadIntBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadIntBranch_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadIntBranch_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a int from a config file with Branch pins\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadIntBranch", sizeof(ElgEditorContext_Config_eventReadIntBranch_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics
	{
		struct ElgEditorContext_Config_eventReadRotator_Parms
		{
			FString Key;
			FRotator Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventReadRotator_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventReadRotator_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadRotator_Parms, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadRotator_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a FRotator from a config file.\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadRotator", sizeof(ElgEditorContext_Config_eventReadRotator_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics
	{
		struct ElgEditorContext_Config_eventReadRotatorBranch_Parms
		{
			FString Key;
			FRotator Value;
			EBPEditorOutputValidBranch Branches;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadRotatorBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadRotatorBranch_Parms, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadRotatorBranch_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a FRotator from a config file with Branch pins\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadRotatorBranch", sizeof(ElgEditorContext_Config_eventReadRotatorBranch_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics
	{
		struct ElgEditorContext_Config_eventReadString_Parms
		{
			FString Key;
			FString Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventReadString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventReadString_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadString_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadString_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a string from a config file.\n@param Key Name of the key to read.\n@param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadString", sizeof(ElgEditorContext_Config_eventReadString_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics
	{
		struct ElgEditorContext_Config_eventReadStringBranch_Parms
		{
			FString Key;
			FString Value;
			EBPEditorOutputValidBranch Branches;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadStringBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadStringBranch_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadStringBranch_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a string from a config file with Branch pins\n@param Key Name of the key to read.\n@param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadStringBranch", sizeof(ElgEditorContext_Config_eventReadStringBranch_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics
	{
		struct ElgEditorContext_Config_eventReadText_Parms
		{
			FString Key;
			FText Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventReadText_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventReadText_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadText_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadText_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a FText from a config file.\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadText", sizeof(ElgEditorContext_Config_eventReadText_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics
	{
		struct ElgEditorContext_Config_eventReadTextBranch_Parms
		{
			FString Key;
			FText Value;
			EBPEditorOutputValidBranch Branches;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadTextBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadTextBranch_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadTextBranch_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a FText from a config file with Branch pins\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadTextBranch", sizeof(ElgEditorContext_Config_eventReadTextBranch_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics
	{
		struct ElgEditorContext_Config_eventReadVector_Parms
		{
			FString Key;
			FVector Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventReadVector_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventReadVector_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadVector_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadVector_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a FVector from a config file.\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadVector", sizeof(ElgEditorContext_Config_eventReadVector_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics
	{
		struct ElgEditorContext_Config_eventReadVector2d_Parms
		{
			FString Key;
			FVector2D Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventReadVector2d_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventReadVector2d_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadVector2d_Parms, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadVector2d_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a FVector2D from a config file.\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadVector2d", sizeof(ElgEditorContext_Config_eventReadVector2d_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics
	{
		struct ElgEditorContext_Config_eventReadVector2dBranch_Parms
		{
			FString Key;
			FVector2D Value;
			EBPEditorOutputValidBranch Branches;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadVector2dBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadVector2dBranch_Parms, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadVector2dBranch_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a FVector2D from a config file with Branch pins\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadVector2dBranch", sizeof(ElgEditorContext_Config_eventReadVector2dBranch_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics
	{
		struct ElgEditorContext_Config_eventReadVector4_Parms
		{
			FString Key;
			FVector4 Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventReadVector4_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventReadVector4_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadVector4_Parms, Value), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadVector4_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a FVector4 from a config file.\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadVector4", sizeof(ElgEditorContext_Config_eventReadVector4_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics
	{
		struct ElgEditorContext_Config_eventReadVector4Branch_Parms
		{
			FString Key;
			FVector4 Value;
			EBPEditorOutputValidBranch Branches;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadVector4Branch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadVector4Branch_Parms, Value), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadVector4Branch_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a FVector4 from a config file with Branch pins\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadVector4Branch", sizeof(ElgEditorContext_Config_eventReadVector4Branch_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics
	{
		struct ElgEditorContext_Config_eventReadVectorBranch_Parms
		{
			FString Key;
			FVector Value;
			EBPEditorOutputValidBranch Branches;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadVectorBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputValidBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadVectorBranch_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventReadVectorBranch_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Read" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Read a FVector from a config file with Branch pins\n              @param Key Name of the key to read.\n              @param Value The value of the config key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "ReadVectorBranch", sizeof(ElgEditorContext_Config_eventReadVectorBranch_Parms), Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics
	{
		struct ElgEditorContext_Config_eventRemoveKey_Parms
		{
			FString Key;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventRemoveKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventRemoveKey_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventRemoveKey_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Remove a key from the config" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "RemoveKey", sizeof(ElgEditorContext_Config_eventRemoveKey_Parms), Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics
	{
		struct ElgEditorContext_Config_eventWriteArray_Parms
		{
			FString Key;
			TArray<FString> Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteArray_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteArray_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::NewProp_Value_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Write" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Write a string array to a config file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "WriteArray", sizeof(ElgEditorContext_Config_eventWriteArray_Parms), Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_WriteArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_WriteArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics
	{
		struct ElgEditorContext_Config_eventWriteBool_Parms
		{
			FString Key;
			bool Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((ElgEditorContext_Config_eventWriteBool_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Config_eventWriteBool_Parms), &Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteBool_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Write" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Write a bool to a config file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "WriteBool", sizeof(ElgEditorContext_Config_eventWriteBool_Parms), Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_WriteBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_WriteBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics
	{
		struct ElgEditorContext_Config_eventWriteColor_Parms
		{
			FString Key;
			FColor Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteColor_Parms, Value), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteColor_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Write" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Write a FColor to a config file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "WriteColor", sizeof(ElgEditorContext_Config_eventWriteColor_Parms), Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_WriteColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_WriteColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics
	{
		struct ElgEditorContext_Config_eventWriteFloat_Parms
		{
			FString Key;
			float Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteFloat_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteFloat_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Write" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Write a float to a config file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "WriteFloat", sizeof(ElgEditorContext_Config_eventWriteFloat_Parms), Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics
	{
		struct ElgEditorContext_Config_eventWriteInt_Parms
		{
			FString Key;
			int32 Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteInt_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteInt_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Write" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Write a string to a config file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "WriteInt", sizeof(ElgEditorContext_Config_eventWriteInt_Parms), Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_WriteInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_WriteInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics
	{
		struct ElgEditorContext_Config_eventWriteRotator_Parms
		{
			FString Key;
			FRotator Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteRotator_Parms, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteRotator_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Write" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Write a FRotator to a config file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "WriteRotator", sizeof(ElgEditorContext_Config_eventWriteRotator_Parms), Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics
	{
		struct ElgEditorContext_Config_eventWriteString_Parms
		{
			FString Key;
			FString Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteString_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteString_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Write" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Write a string to a config file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "WriteString", sizeof(ElgEditorContext_Config_eventWriteString_Parms), Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_WriteString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_WriteString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics
	{
		struct ElgEditorContext_Config_eventWriteText_Parms
		{
			FString Key;
			FText Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteText_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteText_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Write" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Write a FText to a config file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "WriteText", sizeof(ElgEditorContext_Config_eventWriteText_Parms), Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_WriteText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_WriteText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics
	{
		struct ElgEditorContext_Config_eventWriteVector_Parms
		{
			FString Key;
			FVector Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteVector_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteVector_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Write" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Write a FVector to a config file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "WriteVector", sizeof(ElgEditorContext_Config_eventWriteVector_Parms), Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_WriteVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_WriteVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics
	{
		struct ElgEditorContext_Config_eventWriteVector2d_Parms
		{
			FString Key;
			FVector2D Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteVector2d_Parms, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteVector2d_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Write" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Write a FVector2D to a config file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "WriteVector2d", sizeof(ElgEditorContext_Config_eventWriteVector2d_Parms), Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics
	{
		struct ElgEditorContext_Config_eventWriteVector4_Parms
		{
			FString Key;
			FVector4 Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteVector4_Parms, Value), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Config_eventWriteVector4_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Config|Write" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
		{ "ToolTip", "Write a FVector4 to a config file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Config, nullptr, "WriteVector4", sizeof(ElgEditorContext_Config_eventWriteVector4_Parms), Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UElgEditorContext_Config_NoRegister()
	{
		return UElgEditorContext_Config::StaticClass();
	}
	struct Z_Construct_UClass_UElgEditorContext_Config_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Section;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UElgEditorContext_Config_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ElgEditorScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UElgEditorContext_Config_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UElgEditorContext_Config_Clear, "Clear" }, // 328715589
		{ &Z_Construct_UFunction_UElgEditorContext_Config_DoesExist, "DoesExist" }, // 578302511
		{ &Z_Construct_UFunction_UElgEditorContext_Config_DoesExistBranch, "DoesExistBranch" }, // 2819253274
		{ &Z_Construct_UFunction_UElgEditorContext_Config_GetKeys, "GetKeys" }, // 2628052267
		{ &Z_Construct_UFunction_UElgEditorContext_Config_GetKeyValuesAsStrings, "GetKeyValuesAsStrings" }, // 4207538164
		{ &Z_Construct_UFunction_UElgEditorContext_Config_HasKey, "HasKey" }, // 2860538243
		{ &Z_Construct_UFunction_UElgEditorContext_Config_HasKeyBranch, "HasKeyBranch" }, // 2975807295
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadArray, "ReadArray" }, // 260005990
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadArrayBranch, "ReadArrayBranch" }, // 1998781917
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadBool, "ReadBool" }, // 2017249555
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadBoolBranch, "ReadBoolBranch" }, // 2206149476
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadColor, "ReadColor" }, // 2902750341
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadColorBranch, "ReadColorBranch" }, // 3460714397
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadFloat, "ReadFloat" }, // 464363700
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadFloatBranch, "ReadFloatBranch" }, // 2686208893
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadInt, "ReadInt" }, // 491773846
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadIntBranch, "ReadIntBranch" }, // 2044016434
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadRotator, "ReadRotator" }, // 2356659290
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadRotatorBranch, "ReadRotatorBranch" }, // 1893248737
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadString, "ReadString" }, // 1261369924
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadStringBranch, "ReadStringBranch" }, // 2995587204
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadText, "ReadText" }, // 4006656191
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadTextBranch, "ReadTextBranch" }, // 2245675743
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadVector, "ReadVector" }, // 3936838263
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2d, "ReadVector2d" }, // 2775138770
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadVector2dBranch, "ReadVector2dBranch" }, // 3305037237
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4, "ReadVector4" }, // 2781798393
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadVector4Branch, "ReadVector4Branch" }, // 33371282
		{ &Z_Construct_UFunction_UElgEditorContext_Config_ReadVectorBranch, "ReadVectorBranch" }, // 4045863440
		{ &Z_Construct_UFunction_UElgEditorContext_Config_RemoveKey, "RemoveKey" }, // 1723243413
		{ &Z_Construct_UFunction_UElgEditorContext_Config_WriteArray, "WriteArray" }, // 2679078619
		{ &Z_Construct_UFunction_UElgEditorContext_Config_WriteBool, "WriteBool" }, // 4255084983
		{ &Z_Construct_UFunction_UElgEditorContext_Config_WriteColor, "WriteColor" }, // 2937201180
		{ &Z_Construct_UFunction_UElgEditorContext_Config_WriteFloat, "WriteFloat" }, // 2742769331
		{ &Z_Construct_UFunction_UElgEditorContext_Config_WriteInt, "WriteInt" }, // 3593285257
		{ &Z_Construct_UFunction_UElgEditorContext_Config_WriteRotator, "WriteRotator" }, // 2104186622
		{ &Z_Construct_UFunction_UElgEditorContext_Config_WriteString, "WriteString" }, // 3833504597
		{ &Z_Construct_UFunction_UElgEditorContext_Config_WriteText, "WriteText" }, // 2482958815
		{ &Z_Construct_UFunction_UElgEditorContext_Config_WriteVector, "WriteVector" }, // 3476760382
		{ &Z_Construct_UFunction_UElgEditorContext_Config_WriteVector2d, "WriteVector2d" }, // 784519899
		{ &Z_Construct_UFunction_UElgEditorContext_Config_WriteVector4, "WriteVector4" }, // 2352637559
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgEditorContext_Config_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EditorContexts/ElgEditorContext_Config.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgEditorContext_Config_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "ElgEditorContext_Config" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UElgEditorContext_Config_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElgEditorContext_Config, Path), METADATA_PARAMS(Z_Construct_UClass_UElgEditorContext_Config_Statics::NewProp_Path_MetaData, ARRAY_COUNT(Z_Construct_UClass_UElgEditorContext_Config_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgEditorContext_Config_Statics::NewProp_Section_MetaData[] = {
		{ "Category", "ElgEditorContext_Config" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UElgEditorContext_Config_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElgEditorContext_Config, Section), METADATA_PARAMS(Z_Construct_UClass_UElgEditorContext_Config_Statics::NewProp_Section_MetaData, ARRAY_COUNT(Z_Construct_UClass_UElgEditorContext_Config_Statics::NewProp_Section_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgEditorContext_Config_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "ElgEditorContext_Config" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Config.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UElgEditorContext_Config_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElgEditorContext_Config, Name), METADATA_PARAMS(Z_Construct_UClass_UElgEditorContext_Config_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UClass_UElgEditorContext_Config_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UElgEditorContext_Config_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgEditorContext_Config_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgEditorContext_Config_Statics::NewProp_Section,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgEditorContext_Config_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UElgEditorContext_Config_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElgEditorContext_Config>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UElgEditorContext_Config_Statics::ClassParams = {
		&UElgEditorContext_Config::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UElgEditorContext_Config_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UElgEditorContext_Config_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UElgEditorContext_Config_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UElgEditorContext_Config_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UElgEditorContext_Config()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UElgEditorContext_Config_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UElgEditorContext_Config, 1901744869);
	template<> ELGEDITORSCRIPTING_API UClass* StaticClass<UElgEditorContext_Config>()
	{
		return UElgEditorContext_Config::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UElgEditorContext_Config(Z_Construct_UClass_UElgEditorContext_Config, &UElgEditorContext_Config::StaticClass, TEXT("/Script/ElgEditorScripting"), TEXT("UElgEditorContext_Config"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UElgEditorContext_Config);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
