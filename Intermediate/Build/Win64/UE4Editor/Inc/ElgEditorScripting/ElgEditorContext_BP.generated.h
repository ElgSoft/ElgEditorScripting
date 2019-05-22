// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FS_ElgNotificationIcon;
enum class EBPNotificationCompletionState : uint8;
struct FS_ElgNotificationButtons;
class UObject;
struct FS_ElgNotificationInfo;
class UElgEditorContext_Notification;
class UElgEditorContext_Config;
class UElgEditorContext_AssetBrowser;
class UElgEditorContext_LevelEditor;
#ifdef ELGEDITORSCRIPTING_ElgEditorContext_BP_generated_h
#error "ElgEditorContext_BP.generated.h already included, missing '#pragma once' in ElgEditorContext_BP.h"
#endif
#define ELGEDITORSCRIPTING_ElgEditorContext_BP_generated_h

#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsInPIE) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorContext_BP::IsInPIE(Z_Param_Out_Result); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInEditor) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorContext_BP::IsInEditor(Z_Param_Out_Result); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowQuickNotification) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_Text); \
		P_GET_STRUCT(FS_ElgNotificationIcon,Z_Param_Icon); \
		P_GET_ENUM(EBPNotificationCompletionState,Z_Param_State); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_STRUCT(FS_ElgNotificationButtons,Z_Param_Buttons); \
		P_GET_OBJECT(UObject,Z_Param_InGraphObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorContext_BP::ShowQuickNotification(Z_Param_Text,Z_Param_Icon,EBPNotificationCompletionState(Z_Param_State),Z_Param_Duration,Z_Param_Buttons,Z_Param_InGraphObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNotificationContext) \
	{ \
		P_GET_STRUCT_REF(FS_ElgNotificationInfo,Z_Param_Out_Info); \
		P_GET_UBOOL(Z_Param_ShowNotification); \
		P_GET_OBJECT(UObject,Z_Param_InGraphObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UElgEditorContext_Notification**)Z_Param__Result=UElgEditorContext_BP::GetNotificationContext(Z_Param_Out_Info,Z_Param_ShowNotification,Z_Param_InGraphObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConfigContext) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ConfigFilename); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ConfigSection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UElgEditorContext_Config**)Z_Param__Result=UElgEditorContext_BP::GetConfigContext(Z_Param_ConfigFilename,Z_Param_ConfigSection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetBrowserContext) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UElgEditorContext_AssetBrowser**)Z_Param__Result=UElgEditorContext_BP::GetAssetBrowserContext(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLevelEditorContext) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UElgEditorContext_LevelEditor**)Z_Param__Result=UElgEditorContext_BP::GetLevelEditorContext(); \
		P_NATIVE_END; \
	}


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsInPIE) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorContext_BP::IsInPIE(Z_Param_Out_Result); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInEditor) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorContext_BP::IsInEditor(Z_Param_Out_Result); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowQuickNotification) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_Text); \
		P_GET_STRUCT(FS_ElgNotificationIcon,Z_Param_Icon); \
		P_GET_ENUM(EBPNotificationCompletionState,Z_Param_State); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_STRUCT(FS_ElgNotificationButtons,Z_Param_Buttons); \
		P_GET_OBJECT(UObject,Z_Param_InGraphObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorContext_BP::ShowQuickNotification(Z_Param_Text,Z_Param_Icon,EBPNotificationCompletionState(Z_Param_State),Z_Param_Duration,Z_Param_Buttons,Z_Param_InGraphObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNotificationContext) \
	{ \
		P_GET_STRUCT_REF(FS_ElgNotificationInfo,Z_Param_Out_Info); \
		P_GET_UBOOL(Z_Param_ShowNotification); \
		P_GET_OBJECT(UObject,Z_Param_InGraphObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UElgEditorContext_Notification**)Z_Param__Result=UElgEditorContext_BP::GetNotificationContext(Z_Param_Out_Info,Z_Param_ShowNotification,Z_Param_InGraphObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConfigContext) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ConfigFilename); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ConfigSection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UElgEditorContext_Config**)Z_Param__Result=UElgEditorContext_BP::GetConfigContext(Z_Param_ConfigFilename,Z_Param_ConfigSection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetBrowserContext) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UElgEditorContext_AssetBrowser**)Z_Param__Result=UElgEditorContext_BP::GetAssetBrowserContext(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLevelEditorContext) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UElgEditorContext_LevelEditor**)Z_Param__Result=UElgEditorContext_BP::GetLevelEditorContext(); \
		P_NATIVE_END; \
	}


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElgEditorContext_BP(); \
	friend struct Z_Construct_UClass_UElgEditorContext_BP_Statics; \
public: \
	DECLARE_CLASS(UElgEditorContext_BP, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorContext_BP)


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUElgEditorContext_BP(); \
	friend struct Z_Construct_UClass_UElgEditorContext_BP_Statics; \
public: \
	DECLARE_CLASS(UElgEditorContext_BP, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorContext_BP)


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorContext_BP(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorContext_BP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorContext_BP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorContext_BP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorContext_BP(UElgEditorContext_BP&&); \
	NO_API UElgEditorContext_BP(const UElgEditorContext_BP&); \
public:


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorContext_BP(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorContext_BP(UElgEditorContext_BP&&); \
	NO_API UElgEditorContext_BP(const UElgEditorContext_BP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorContext_BP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorContext_BP); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorContext_BP)


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_24_PRIVATE_PROPERTY_OFFSET
#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_21_PROLOG
#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_24_PRIVATE_PROPERTY_OFFSET \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_24_RPC_WRAPPERS \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_24_INCLASS \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_24_PRIVATE_PROPERTY_OFFSET \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_24_INCLASS_NO_PURE_DECLS \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELGEDITORSCRIPTING_API UClass* StaticClass<class UElgEditorContext_BP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_BP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
