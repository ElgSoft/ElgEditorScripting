// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELGEDITORSCRIPTING_ElgEditorBP_Enum_generated_h
#error "ElgEditorBP_Enum.generated.h already included, missing '#pragma once' in ElgEditorBP_Enum.h"
#endif
#define ELGEDITORSCRIPTING_ElgEditorBP_Enum_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Enum_h


#define FOREACH_ENUM_EBPEDITOROUTPUTRESULTBRANCH(op) \
	op(EBPEditorOutputResultBranch::Success) \
	op(EBPEditorOutputResultBranch::Failed) 

enum class EBPEditorOutputResultBranch : uint8;
template<> ELGEDITORSCRIPTING_API UEnum* StaticEnum<EBPEditorOutputResultBranch>();

#define FOREACH_ENUM_EBPEDITOROUTPUTVALIDBRANCH(op) \
	op(EBPEditorOutputValidBranch::Valid) \
	op(EBPEditorOutputValidBranch::Invalid) 

enum class EBPEditorOutputValidBranch : uint8;
template<> ELGEDITORSCRIPTING_API UEnum* StaticEnum<EBPEditorOutputValidBranch>();

#define FOREACH_ENUM_EBPEDITOROUTPUTCOMPAREBRANCH(op) \
	op(EBPEditorOutputCompareBranch::Equal) \
	op(EBPEditorOutputCompareBranch::NotEqual) 

enum class EBPEditorOutputCompareBranch : uint8;
template<> ELGEDITORSCRIPTING_API UEnum* StaticEnum<EBPEditorOutputCompareBranch>();

#define FOREACH_ENUM_EBPEDITOROUTPUTBRANCH(op) \
	op(EBPEditorOutputBranch::outTrue) \
	op(EBPEditorOutputBranch::outFalse) 

enum class EBPEditorOutputBranch : uint8;
template<> ELGEDITORSCRIPTING_API UEnum* StaticEnum<EBPEditorOutputBranch>();

#define FOREACH_ENUM_EBPEDITOROUTPUTCOMPARECHECK(op) \
	op(EBPEditorOutputCompareCheck::Less) \
	op(EBPEditorOutputCompareCheck::Equal) \
	op(EBPEditorOutputCompareCheck::Greater) 

enum class EBPEditorOutputCompareCheck : uint8;
template<> ELGEDITORSCRIPTING_API UEnum* StaticEnum<EBPEditorOutputCompareCheck>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
