// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEditorUtilityWidgetBlueprint;
enum class EBPEditorOutputBranch : uint8;
#ifdef ELGEDITORSCRIPTING_ElgEditorBP_EditorWidget_generated_h
#error "ElgEditorBP_EditorWidget.generated.h already included, missing '#pragma once' in ElgEditorBP_EditorWidget.h"
#endif
#define ELGEDITORSCRIPTING_ElgEditorBP_EditorWidget_generated_h

#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_SPARSE_DATA
#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEditorWidgetDrawAttention) \
	{ \
		P_GET_OBJECT(UEditorUtilityWidgetBlueprint,Z_Param_EditorWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_EditorWidget::EditorWidgetDrawAttention(Z_Param_EditorWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEditorWidgetToolTip) \
	{ \
		P_GET_OBJECT(UEditorUtilityWidgetBlueprint,Z_Param_EditorWidget); \
		P_GET_PROPERTY(UTextProperty,Z_Param_TipText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_EditorWidget::SetEditorWidgetToolTip(Z_Param_EditorWidget,Z_Param_TipText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEditorWidgetLabel) \
	{ \
		P_GET_OBJECT(UEditorUtilityWidgetBlueprint,Z_Param_EditorWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UElgEditorBP_EditorWidget::GetEditorWidgetLabel(Z_Param_EditorWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEditorWidgetLabel) \
	{ \
		P_GET_OBJECT(UEditorUtilityWidgetBlueprint,Z_Param_EditorWidget); \
		P_GET_PROPERTY(UTextProperty,Z_Param_TabName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_EditorWidget::SetEditorWidgetLabel(Z_Param_EditorWidget,Z_Param_TabName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReinitializeEditorWidgets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_EditorWidget::ReinitializeEditorWidgets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddEditorWidgetsToLoadedScript) \
	{ \
		P_GET_TARRAY(UEditorUtilityWidgetBlueprint*,Z_Param_EditorWidgets); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_EditorWidget::AddEditorWidgetsToLoadedScript(Z_Param_EditorWidgets); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEditorWidgetRegisteredBranch) \
	{ \
		P_GET_OBJECT(UEditorUtilityWidgetBlueprint,Z_Param_EditorWidget); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_EditorWidget::IsEditorWidgetRegisteredBranch(Z_Param_EditorWidget,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEditorWidgetRegistered) \
	{ \
		P_GET_OBJECT(UEditorUtilityWidgetBlueprint,Z_Param_EditorWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_EditorWidget::IsEditorWidgetRegistered(Z_Param_EditorWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEditorWidgetOpenBranch) \
	{ \
		P_GET_OBJECT(UEditorUtilityWidgetBlueprint,Z_Param_EditorWidget); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_EditorWidget::IsEditorWidgetOpenBranch(Z_Param_EditorWidget,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEditorWidgetOpen) \
	{ \
		P_GET_OBJECT(UEditorUtilityWidgetBlueprint,Z_Param_EditorWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_EditorWidget::IsEditorWidgetOpen(Z_Param_EditorWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleEditorWidget) \
	{ \
		P_GET_OBJECT(UEditorUtilityWidgetBlueprint,Z_Param_EditorWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_EditorWidget::ToggleEditorWidget(Z_Param_EditorWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloseEditorWidget) \
	{ \
		P_GET_OBJECT(UEditorUtilityWidgetBlueprint,Z_Param_EditorWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_EditorWidget::CloseEditorWidget(Z_Param_EditorWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenEditorWidget) \
	{ \
		P_GET_OBJECT(UEditorUtilityWidgetBlueprint,Z_Param_EditorWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_EditorWidget::OpenEditorWidget(Z_Param_EditorWidget); \
		P_NATIVE_END; \
	}


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEditorWidgetDrawAttention) \
	{ \
		P_GET_OBJECT(UEditorUtilityWidgetBlueprint,Z_Param_EditorWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_EditorWidget::EditorWidgetDrawAttention(Z_Param_EditorWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEditorWidgetToolTip) \
	{ \
		P_GET_OBJECT(UEditorUtilityWidgetBlueprint,Z_Param_EditorWidget); \
		P_GET_PROPERTY(UTextProperty,Z_Param_TipText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_EditorWidget::SetEditorWidgetToolTip(Z_Param_EditorWidget,Z_Param_TipText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEditorWidgetLabel) \
	{ \
		P_GET_OBJECT(UEditorUtilityWidgetBlueprint,Z_Param_EditorWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UElgEditorBP_EditorWidget::GetEditorWidgetLabel(Z_Param_EditorWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEditorWidgetLabel) \
	{ \
		P_GET_OBJECT(UEditorUtilityWidgetBlueprint,Z_Param_EditorWidget); \
		P_GET_PROPERTY(UTextProperty,Z_Param_TabName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_EditorWidget::SetEditorWidgetLabel(Z_Param_EditorWidget,Z_Param_TabName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReinitializeEditorWidgets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_EditorWidget::ReinitializeEditorWidgets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddEditorWidgetsToLoadedScript) \
	{ \
		P_GET_TARRAY(UEditorUtilityWidgetBlueprint*,Z_Param_EditorWidgets); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_EditorWidget::AddEditorWidgetsToLoadedScript(Z_Param_EditorWidgets); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEditorWidgetRegisteredBranch) \
	{ \
		P_GET_OBJECT(UEditorUtilityWidgetBlueprint,Z_Param_EditorWidget); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_EditorWidget::IsEditorWidgetRegisteredBranch(Z_Param_EditorWidget,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEditorWidgetRegistered) \
	{ \
		P_GET_OBJECT(UEditorUtilityWidgetBlueprint,Z_Param_EditorWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_EditorWidget::IsEditorWidgetRegistered(Z_Param_EditorWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEditorWidgetOpenBranch) \
	{ \
		P_GET_OBJECT(UEditorUtilityWidgetBlueprint,Z_Param_EditorWidget); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_EditorWidget::IsEditorWidgetOpenBranch(Z_Param_EditorWidget,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEditorWidgetOpen) \
	{ \
		P_GET_OBJECT(UEditorUtilityWidgetBlueprint,Z_Param_EditorWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_EditorWidget::IsEditorWidgetOpen(Z_Param_EditorWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleEditorWidget) \
	{ \
		P_GET_OBJECT(UEditorUtilityWidgetBlueprint,Z_Param_EditorWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_EditorWidget::ToggleEditorWidget(Z_Param_EditorWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloseEditorWidget) \
	{ \
		P_GET_OBJECT(UEditorUtilityWidgetBlueprint,Z_Param_EditorWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_EditorWidget::CloseEditorWidget(Z_Param_EditorWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenEditorWidget) \
	{ \
		P_GET_OBJECT(UEditorUtilityWidgetBlueprint,Z_Param_EditorWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_EditorWidget::OpenEditorWidget(Z_Param_EditorWidget); \
		P_NATIVE_END; \
	}


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElgEditorBP_EditorWidget(); \
	friend struct Z_Construct_UClass_UElgEditorBP_EditorWidget_Statics; \
public: \
	DECLARE_CLASS(UElgEditorBP_EditorWidget, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorBP_EditorWidget)


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUElgEditorBP_EditorWidget(); \
	friend struct Z_Construct_UClass_UElgEditorBP_EditorWidget_Statics; \
public: \
	DECLARE_CLASS(UElgEditorBP_EditorWidget, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorBP_EditorWidget)


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorBP_EditorWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorBP_EditorWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorBP_EditorWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorBP_EditorWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorBP_EditorWidget(UElgEditorBP_EditorWidget&&); \
	NO_API UElgEditorBP_EditorWidget(const UElgEditorBP_EditorWidget&); \
public:


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorBP_EditorWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorBP_EditorWidget(UElgEditorBP_EditorWidget&&); \
	NO_API UElgEditorBP_EditorWidget(const UElgEditorBP_EditorWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorBP_EditorWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorBP_EditorWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorBP_EditorWidget)


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_PRIVATE_PROPERTY_OFFSET
#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_21_PROLOG
#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_PRIVATE_PROPERTY_OFFSET \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_SPARSE_DATA \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_RPC_WRAPPERS \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_INCLASS \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_PRIVATE_PROPERTY_OFFSET \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_SPARSE_DATA \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_INCLASS_NO_PURE_DECLS \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELGEDITORSCRIPTING_API UClass* StaticClass<class UElgEditorBP_EditorWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_EditorWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
