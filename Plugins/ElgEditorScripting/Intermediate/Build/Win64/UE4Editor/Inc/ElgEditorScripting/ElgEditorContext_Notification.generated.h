// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FS_ElgNotificationButtonInfo;
enum class EBPNotificationCompletionState : uint8;
#ifdef ELGEDITORSCRIPTING_ElgEditorContext_Notification_generated_h
#error "ElgEditorContext_Notification.generated.h already included, missing '#pragma once' in ElgEditorContext_Notification.h"
#endif
#define ELGEDITORSCRIPTING_ElgEditorContext_Notification_generated_h

#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_126_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics; \
	ELGEDITORSCRIPTING_API static class UScriptStruct* StaticStruct();


template<> ELGEDITORSCRIPTING_API UScriptStruct* StaticStruct<struct FS_ElgNotificationInfo>();

#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_106_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FS_ElgNotificationButtons_Statics; \
	ELGEDITORSCRIPTING_API static class UScriptStruct* StaticStruct();


template<> ELGEDITORSCRIPTING_API UScriptStruct* StaticStruct<struct FS_ElgNotificationButtons>();

#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics; \
	ELGEDITORSCRIPTING_API static class UScriptStruct* StaticStruct();


template<> ELGEDITORSCRIPTING_API UScriptStruct* StaticStruct<struct FS_ElgNotificationButtonInfo>();

#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FS_ElgNotificationIcon_Statics; \
	ELGEDITORSCRIPTING_API static class UScriptStruct* StaticStruct();


template<> ELGEDITORSCRIPTING_API UScriptStruct* StaticStruct<struct FS_ElgNotificationIcon>();

#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleOnButtonClicked) \
	{ \
		P_GET_STRUCT(FS_ElgNotificationButtonInfo,Z_Param_ButtonInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleOnButtonClicked(Z_Param_ButtonInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Clear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsNotificationValid) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsNotificationValid(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetText) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_NewText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetText(Z_Param_NewText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCompleteStateSuccess) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCompleteStateSuccess(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCompleteStateFail) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCompleteStateFail(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStateAsPending) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStateAsPending(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCompletionState) \
	{ \
		P_GET_ENUM(EBPNotificationCompletionState,Z_Param_State); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCompletionState(EBPNotificationCompletionState(Z_Param_State)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFadeout) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fadeout(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExpireAndFadeout) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExpireAndFadeout(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloseAsFail) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_Text); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CloseAsFail(Z_Param_Text); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloseAsSuccess) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_Text); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CloseAsSuccess(Z_Param_Text); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClose) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_Text); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Close(Z_Param_Text); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShow) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Show(); \
		P_NATIVE_END; \
	}


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleOnButtonClicked) \
	{ \
		P_GET_STRUCT(FS_ElgNotificationButtonInfo,Z_Param_ButtonInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleOnButtonClicked(Z_Param_ButtonInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Clear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsNotificationValid) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsNotificationValid(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetText) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_NewText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetText(Z_Param_NewText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCompleteStateSuccess) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCompleteStateSuccess(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCompleteStateFail) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCompleteStateFail(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStateAsPending) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStateAsPending(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCompletionState) \
	{ \
		P_GET_ENUM(EBPNotificationCompletionState,Z_Param_State); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCompletionState(EBPNotificationCompletionState(Z_Param_State)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFadeout) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fadeout(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExpireAndFadeout) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExpireAndFadeout(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloseAsFail) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_Text); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CloseAsFail(Z_Param_Text); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloseAsSuccess) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_Text); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CloseAsSuccess(Z_Param_Text); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClose) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_Text); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Close(Z_Param_Text); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShow) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Show(); \
		P_NATIVE_END; \
	}


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElgEditorContext_Notification(); \
	friend struct Z_Construct_UClass_UElgEditorContext_Notification_Statics; \
public: \
	DECLARE_CLASS(UElgEditorContext_Notification, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorContext_Notification)


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_INCLASS \
private: \
	static void StaticRegisterNativesUElgEditorContext_Notification(); \
	friend struct Z_Construct_UClass_UElgEditorContext_Notification_Statics; \
public: \
	DECLARE_CLASS(UElgEditorContext_Notification, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorContext_Notification)


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorContext_Notification(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorContext_Notification) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorContext_Notification); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorContext_Notification); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorContext_Notification(UElgEditorContext_Notification&&); \
	NO_API UElgEditorContext_Notification(const UElgEditorContext_Notification&); \
public:


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorContext_Notification(UElgEditorContext_Notification&&); \
	NO_API UElgEditorContext_Notification(const UElgEditorContext_Notification&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorContext_Notification); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorContext_Notification); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UElgEditorContext_Notification)


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_PRIVATE_PROPERTY_OFFSET
#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_210_PROLOG
#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_PRIVATE_PROPERTY_OFFSET \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_RPC_WRAPPERS \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_INCLASS \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_PRIVATE_PROPERTY_OFFSET \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_RPC_WRAPPERS_NO_PURE_DECLS \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_INCLASS_NO_PURE_DECLS \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h_213_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELGEDITORSCRIPTING_API UClass* StaticClass<class UElgEditorContext_Notification>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_Notification_h


#define FOREACH_ENUM_EBPNOTIFICATIONCOMPLETIONSTATE(op) \
	op(EBPNotificationCompletionState::None) \
	op(EBPNotificationCompletionState::Pending) \
	op(EBPNotificationCompletionState::Success) \
	op(EBPNotificationCompletionState::Fail) 

enum class EBPNotificationCompletionState : uint8;
template<> ELGEDITORSCRIPTING_API UEnum* StaticEnum<EBPNotificationCompletionState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
