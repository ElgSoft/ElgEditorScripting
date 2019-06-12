// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBPEditorOutputValidBranch : uint8;
struct FRotator;
struct FVector4;
struct FVector;
struct FVector2D;
struct FColor;
#ifdef ELGEDITORSCRIPTING_ElgEditorContext_Config_generated_h
#error "ElgEditorContext_Config.generated.h already included, missing '#pragma once' in ElgEditorContext_Config.h"
#endif
#define ELGEDITORSCRIPTING_ElgEditorContext_Config_generated_h

#define D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Config_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReadTextBranch) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Value); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReadTextBranch(Z_Param_Key,Z_Param_Out_Value,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadRotatorBranch) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Value); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReadRotatorBranch(Z_Param_Key,Z_Param_Out_Value,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadVector4Branch) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Value); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReadVector4Branch(Z_Param_Key,Z_Param_Out_Value,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadVectorBranch) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Value); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReadVectorBranch(Z_Param_Key,Z_Param_Out_Value,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadVector2dBranch) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Value); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReadVector2dBranch(Z_Param_Key,Z_Param_Out_Value,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadColorBranch) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FColor,Z_Param_Out_Value); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReadColorBranch(Z_Param_Key,Z_Param_Out_Value,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadArrayBranch) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Value); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReadArrayBranch(Z_Param_Key,Z_Param_Out_Value,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadBoolBranch) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_UBOOL_REF(Z_Param_Out_Value); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReadBoolBranch(Z_Param_Key,Z_Param_Out_Value,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadFloatBranch) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Value); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReadFloatBranch(Z_Param_Key,Z_Param_Out_Value,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadIntBranch) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Value); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReadIntBranch(Z_Param_Key,Z_Param_Out_Value,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadStringBranch) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Value); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReadStringBranch(Z_Param_Key,Z_Param_Out_Value,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadText) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReadText(Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadRotator) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReadRotator(Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadVector4) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReadVector4(Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadVector) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReadVector(Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadVector2d) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReadVector2d(Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadColor) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FColor,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReadColor(Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReadArray(Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_UBOOL_REF(Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReadBool(Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReadFloat(Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReadInt(Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReadString(Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteText) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UTextProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WriteText(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteRotator) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT(FRotator,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WriteRotator(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteVector4) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT(FVector4,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WriteVector4(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteVector) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT(FVector,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WriteVector(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteVector2d) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT(FVector2D,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WriteVector2d(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteColor) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT(FColor,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WriteColor(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WriteArray(Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WriteBool(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WriteFloat(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WriteInt(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WriteString(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasKeyBranch) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HasKeyBranch(Z_Param_Key,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasKey) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasKey(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveKey) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveKey(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Clear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKeys) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Keys); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetKeys(Z_Param_Out_Keys); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKeyValuesAsStrings) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_ConfigData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetKeyValuesAsStrings(Z_Param_Out_ConfigData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesExistBranch) \
	{ \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DoesExistBranch((EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesExist) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DoesExist(); \
		P_NATIVE_END; \
	}


#define D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Config_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReadTextBranch) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Value); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReadTextBranch(Z_Param_Key,Z_Param_Out_Value,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadRotatorBranch) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Value); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReadRotatorBranch(Z_Param_Key,Z_Param_Out_Value,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadVector4Branch) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Value); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReadVector4Branch(Z_Param_Key,Z_Param_Out_Value,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadVectorBranch) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Value); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReadVectorBranch(Z_Param_Key,Z_Param_Out_Value,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadVector2dBranch) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Value); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReadVector2dBranch(Z_Param_Key,Z_Param_Out_Value,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadColorBranch) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FColor,Z_Param_Out_Value); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReadColorBranch(Z_Param_Key,Z_Param_Out_Value,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadArrayBranch) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Value); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReadArrayBranch(Z_Param_Key,Z_Param_Out_Value,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadBoolBranch) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_UBOOL_REF(Z_Param_Out_Value); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReadBoolBranch(Z_Param_Key,Z_Param_Out_Value,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadFloatBranch) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Value); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReadFloatBranch(Z_Param_Key,Z_Param_Out_Value,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadIntBranch) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Value); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReadIntBranch(Z_Param_Key,Z_Param_Out_Value,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadStringBranch) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Value); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReadStringBranch(Z_Param_Key,Z_Param_Out_Value,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadText) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReadText(Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadRotator) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReadRotator(Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadVector4) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReadVector4(Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadVector) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReadVector(Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadVector2d) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReadVector2d(Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadColor) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FColor,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReadColor(Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReadArray(Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_UBOOL_REF(Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReadBool(Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReadFloat(Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReadInt(Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReadString(Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteText) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UTextProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WriteText(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteRotator) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT(FRotator,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WriteRotator(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteVector4) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT(FVector4,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WriteVector4(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteVector) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT(FVector,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WriteVector(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteVector2d) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT(FVector2D,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WriteVector2d(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteColor) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT(FColor,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WriteColor(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WriteArray(Z_Param_Key,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WriteBool(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WriteFloat(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WriteInt(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WriteString(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasKeyBranch) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HasKeyBranch(Z_Param_Key,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasKey) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasKey(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveKey) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveKey(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Clear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKeys) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Keys); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetKeys(Z_Param_Out_Keys); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKeyValuesAsStrings) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_ConfigData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetKeyValuesAsStrings(Z_Param_Out_ConfigData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesExistBranch) \
	{ \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DoesExistBranch((EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesExist) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DoesExist(); \
		P_NATIVE_END; \
	}


#define D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Config_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElgEditorContext_Config(); \
	friend struct Z_Construct_UClass_UElgEditorContext_Config_Statics; \
public: \
	DECLARE_CLASS(UElgEditorContext_Config, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorContext_Config)


#define D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Config_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUElgEditorContext_Config(); \
	friend struct Z_Construct_UClass_UElgEditorContext_Config_Statics; \
public: \
	DECLARE_CLASS(UElgEditorContext_Config, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorContext_Config)


#define D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Config_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorContext_Config(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorContext_Config) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorContext_Config); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorContext_Config); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorContext_Config(UElgEditorContext_Config&&); \
	NO_API UElgEditorContext_Config(const UElgEditorContext_Config&); \
public:


#define D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Config_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorContext_Config(UElgEditorContext_Config&&); \
	NO_API UElgEditorContext_Config(const UElgEditorContext_Config&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorContext_Config); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorContext_Config); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UElgEditorContext_Config)


#define D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Config_h_21_PRIVATE_PROPERTY_OFFSET
#define D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Config_h_18_PROLOG
#define D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Config_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Config_h_21_PRIVATE_PROPERTY_OFFSET \
	D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Config_h_21_RPC_WRAPPERS \
	D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Config_h_21_INCLASS \
	D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Config_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Config_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Config_h_21_PRIVATE_PROPERTY_OFFSET \
	D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Config_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Config_h_21_INCLASS_NO_PURE_DECLS \
	D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Config_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELGEDITORSCRIPTING_API UClass* StaticClass<class UElgEditorContext_Config>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Config_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
