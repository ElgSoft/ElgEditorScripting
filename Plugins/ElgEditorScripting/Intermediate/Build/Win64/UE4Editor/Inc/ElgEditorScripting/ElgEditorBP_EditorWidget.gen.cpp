// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElgEditorScripting/Public/Blueprints/ElgEditorBP_EditorWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElgEditorBP_EditorWidget() {}
// Cross Module References
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorBP_EditorWidget_NoRegister();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorBP_EditorWidget();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ElgEditorScripting();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_EditorWidget_AddEditorWidgetsToLoadedScript();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidgetBlueprint_NoRegister();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_EditorWidget_CloseEditorWidget();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_EditorWidget_EditorWidgetDrawAttention();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_EditorWidget_GetEditorWidgetLabel();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpen();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpenBranch();
	ELGEDITORSCRIPTING_API UEnum* Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegistered();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegisteredBranch();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_EditorWidget_OpenEditorWidget();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_EditorWidget_ReinitializeEditorWidgets();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetLabel();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetToolTip();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorBP_EditorWidget_ToggleEditorWidget();
// End Cross Module References
	void UElgEditorBP_EditorWidget::StaticRegisterNativesUElgEditorBP_EditorWidget()
	{
		UClass* Class = UElgEditorBP_EditorWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddEditorWidgetsToLoadedScript", &UElgEditorBP_EditorWidget::execAddEditorWidgetsToLoadedScript },
			{ "CloseEditorWidget", &UElgEditorBP_EditorWidget::execCloseEditorWidget },
			{ "EditorWidgetDrawAttention", &UElgEditorBP_EditorWidget::execEditorWidgetDrawAttention },
			{ "GetEditorWidgetLabel", &UElgEditorBP_EditorWidget::execGetEditorWidgetLabel },
			{ "IsEditorWidgetOpen", &UElgEditorBP_EditorWidget::execIsEditorWidgetOpen },
			{ "IsEditorWidgetOpenBranch", &UElgEditorBP_EditorWidget::execIsEditorWidgetOpenBranch },
			{ "IsEditorWidgetRegistered", &UElgEditorBP_EditorWidget::execIsEditorWidgetRegistered },
			{ "IsEditorWidgetRegisteredBranch", &UElgEditorBP_EditorWidget::execIsEditorWidgetRegisteredBranch },
			{ "OpenEditorWidget", &UElgEditorBP_EditorWidget::execOpenEditorWidget },
			{ "ReinitializeEditorWidgets", &UElgEditorBP_EditorWidget::execReinitializeEditorWidgets },
			{ "SetEditorWidgetLabel", &UElgEditorBP_EditorWidget::execSetEditorWidgetLabel },
			{ "SetEditorWidgetToolTip", &UElgEditorBP_EditorWidget::execSetEditorWidgetToolTip },
			{ "ToggleEditorWidget", &UElgEditorBP_EditorWidget::execToggleEditorWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UElgEditorBP_EditorWidget_AddEditorWidgetsToLoadedScript_Statics
	{
		struct ElgEditorBP_EditorWidget_eventAddEditorWidgetsToLoadedScript_Parms
		{
			TArray<UEditorUtilityWidgetBlueprint*> EditorWidgets;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EditorWidgets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorWidgets_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_AddEditorWidgetsToLoadedScript_Statics::NewProp_EditorWidgets = { "EditorWidgets", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_EditorWidget_eventAddEditorWidgetsToLoadedScript_Parms, EditorWidgets), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_AddEditorWidgetsToLoadedScript_Statics::NewProp_EditorWidgets_Inner = { "EditorWidgets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEditorUtilityWidgetBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_EditorWidget_AddEditorWidgetsToLoadedScript_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_EditorWidget_AddEditorWidgetsToLoadedScript_Statics::NewProp_EditorWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_EditorWidget_AddEditorWidgetsToLoadedScript_Statics::NewProp_EditorWidgets_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_EditorWidget_AddEditorWidgetsToLoadedScript_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|EditorWidget" },
		{ "Comment", "/* Add editor widgets to the loaded script list so they will be registration when/if ReinitializeUIs */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_EditorWidget.h" },
		{ "ToolTip", "Add editor widgets to the loaded script list so they will be registration when/if ReinitializeUIs" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_AddEditorWidgetsToLoadedScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_EditorWidget, nullptr, "AddEditorWidgetsToLoadedScript", nullptr, nullptr, sizeof(ElgEditorBP_EditorWidget_eventAddEditorWidgetsToLoadedScript_Parms), Z_Construct_UFunction_UElgEditorBP_EditorWidget_AddEditorWidgetsToLoadedScript_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_EditorWidget_AddEditorWidgetsToLoadedScript_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_EditorWidget_AddEditorWidgetsToLoadedScript_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_EditorWidget_AddEditorWidgetsToLoadedScript_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_EditorWidget_AddEditorWidgetsToLoadedScript()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_EditorWidget_AddEditorWidgetsToLoadedScript_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_EditorWidget_CloseEditorWidget_Statics
	{
		struct ElgEditorBP_EditorWidget_eventCloseEditorWidget_Parms
		{
			UEditorUtilityWidgetBlueprint* EditorWidget;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_CloseEditorWidget_Statics::NewProp_EditorWidget = { "EditorWidget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_EditorWidget_eventCloseEditorWidget_Parms, EditorWidget), Z_Construct_UClass_UEditorUtilityWidgetBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_EditorWidget_CloseEditorWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_EditorWidget_CloseEditorWidget_Statics::NewProp_EditorWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_EditorWidget_CloseEditorWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|EditorWidget" },
		{ "Comment", "/* Close an Editor Utility Widget */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_EditorWidget.h" },
		{ "ToolTip", "Close an Editor Utility Widget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_CloseEditorWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_EditorWidget, nullptr, "CloseEditorWidget", nullptr, nullptr, sizeof(ElgEditorBP_EditorWidget_eventCloseEditorWidget_Parms), Z_Construct_UFunction_UElgEditorBP_EditorWidget_CloseEditorWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_EditorWidget_CloseEditorWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_EditorWidget_CloseEditorWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_EditorWidget_CloseEditorWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_EditorWidget_CloseEditorWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_EditorWidget_CloseEditorWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_EditorWidget_EditorWidgetDrawAttention_Statics
	{
		struct ElgEditorBP_EditorWidget_eventEditorWidgetDrawAttention_Parms
		{
			UEditorUtilityWidgetBlueprint* EditorWidget;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_EditorWidgetDrawAttention_Statics::NewProp_EditorWidget = { "EditorWidget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_EditorWidget_eventEditorWidgetDrawAttention_Parms, EditorWidget), Z_Construct_UClass_UEditorUtilityWidgetBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_EditorWidget_EditorWidgetDrawAttention_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_EditorWidget_EditorWidgetDrawAttention_Statics::NewProp_EditorWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_EditorWidget_EditorWidgetDrawAttention_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|EditorWidget|Tab" },
		{ "Comment", "/** Draws attention to the tab. */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_EditorWidget.h" },
		{ "ToolTip", "Draws attention to the tab." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_EditorWidgetDrawAttention_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_EditorWidget, nullptr, "EditorWidgetDrawAttention", nullptr, nullptr, sizeof(ElgEditorBP_EditorWidget_eventEditorWidgetDrawAttention_Parms), Z_Construct_UFunction_UElgEditorBP_EditorWidget_EditorWidgetDrawAttention_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_EditorWidget_EditorWidgetDrawAttention_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_EditorWidget_EditorWidgetDrawAttention_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_EditorWidget_EditorWidgetDrawAttention_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_EditorWidget_EditorWidgetDrawAttention()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_EditorWidget_EditorWidgetDrawAttention_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_EditorWidget_GetEditorWidgetLabel_Statics
	{
		struct ElgEditorBP_EditorWidget_eventGetEditorWidgetLabel_Parms
		{
			UEditorUtilityWidgetBlueprint* EditorWidget;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_GetEditorWidgetLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_EditorWidget_eventGetEditorWidgetLabel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_GetEditorWidgetLabel_Statics::NewProp_EditorWidget = { "EditorWidget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_EditorWidget_eventGetEditorWidgetLabel_Parms, EditorWidget), Z_Construct_UClass_UEditorUtilityWidgetBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_EditorWidget_GetEditorWidgetLabel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_EditorWidget_GetEditorWidgetLabel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_EditorWidget_GetEditorWidgetLabel_Statics::NewProp_EditorWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_EditorWidget_GetEditorWidgetLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|EditorWidget|Tab" },
		{ "Comment", "/** Get the label of the Editor Widget Tab */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_EditorWidget.h" },
		{ "ToolTip", "Get the label of the Editor Widget Tab" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_GetEditorWidgetLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_EditorWidget, nullptr, "GetEditorWidgetLabel", nullptr, nullptr, sizeof(ElgEditorBP_EditorWidget_eventGetEditorWidgetLabel_Parms), Z_Construct_UFunction_UElgEditorBP_EditorWidget_GetEditorWidgetLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_EditorWidget_GetEditorWidgetLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_EditorWidget_GetEditorWidgetLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_EditorWidget_GetEditorWidgetLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_EditorWidget_GetEditorWidgetLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_EditorWidget_GetEditorWidgetLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpen_Statics
	{
		struct ElgEditorBP_EditorWidget_eventIsEditorWidgetOpen_Parms
		{
			UEditorUtilityWidgetBlueprint* EditorWidget;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorBP_EditorWidget_eventIsEditorWidgetOpen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_EditorWidget_eventIsEditorWidgetOpen_Parms), &Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpen_Statics::NewProp_EditorWidget = { "EditorWidget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_EditorWidget_eventIsEditorWidgetOpen_Parms, EditorWidget), Z_Construct_UClass_UEditorUtilityWidgetBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpen_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpen_Statics::NewProp_EditorWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpen_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|EditorWidget" },
		{ "Comment", "/* Check if an editor widget is open or closed */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_EditorWidget.h" },
		{ "ToolTip", "Check if an editor widget is open or closed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_EditorWidget, nullptr, "IsEditorWidgetOpen", nullptr, nullptr, sizeof(ElgEditorBP_EditorWidget_eventIsEditorWidgetOpen_Parms), Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpenBranch_Statics
	{
		struct ElgEditorBP_EditorWidget_eventIsEditorWidgetOpenBranch_Parms
		{
			UEditorUtilityWidgetBlueprint* EditorWidget;
			EBPEditorOutputBranch Branches;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpenBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_EditorWidget_eventIsEditorWidgetOpenBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpenBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpenBranch_Statics::NewProp_EditorWidget = { "EditorWidget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_EditorWidget_eventIsEditorWidgetOpenBranch_Parms, EditorWidget), Z_Construct_UClass_UEditorUtilityWidgetBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpenBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpenBranch_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpenBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpenBranch_Statics::NewProp_EditorWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpenBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|EditorWidget" },
		{ "Comment", "/* Check if an editor widget is open or closed with branch pins */" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_EditorWidget.h" },
		{ "ToolTip", "Check if an editor widget is open or closed with branch pins" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpenBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_EditorWidget, nullptr, "IsEditorWidgetOpenBranch", nullptr, nullptr, sizeof(ElgEditorBP_EditorWidget_eventIsEditorWidgetOpenBranch_Parms), Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpenBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpenBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpenBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpenBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpenBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpenBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegistered_Statics
	{
		struct ElgEditorBP_EditorWidget_eventIsEditorWidgetRegistered_Parms
		{
			UEditorUtilityWidgetBlueprint* EditorWidget;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegistered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorBP_EditorWidget_eventIsEditorWidgetRegistered_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegistered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorBP_EditorWidget_eventIsEditorWidgetRegistered_Parms), &Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegistered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegistered_Statics::NewProp_EditorWidget = { "EditorWidget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_EditorWidget_eventIsEditorWidgetRegistered_Parms, EditorWidget), Z_Construct_UClass_UEditorUtilityWidgetBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegistered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegistered_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegistered_Statics::NewProp_EditorWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegistered_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|EditorWidget" },
		{ "Comment", "/* Check if an editor widget is open or closed */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_EditorWidget.h" },
		{ "ToolTip", "Check if an editor widget is open or closed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_EditorWidget, nullptr, "IsEditorWidgetRegistered", nullptr, nullptr, sizeof(ElgEditorBP_EditorWidget_eventIsEditorWidgetRegistered_Parms), Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegistered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegistered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegistered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegistered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegistered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegistered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegisteredBranch_Statics
	{
		struct ElgEditorBP_EditorWidget_eventIsEditorWidgetRegisteredBranch_Parms
		{
			UEditorUtilityWidgetBlueprint* EditorWidget;
			EBPEditorOutputBranch Branches;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegisteredBranch_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_EditorWidget_eventIsEditorWidgetRegisteredBranch_Parms, Branches), Z_Construct_UEnum_ElgEditorScripting_EBPEditorOutputBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegisteredBranch_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegisteredBranch_Statics::NewProp_EditorWidget = { "EditorWidget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_EditorWidget_eventIsEditorWidgetRegisteredBranch_Parms, EditorWidget), Z_Construct_UClass_UEditorUtilityWidgetBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegisteredBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegisteredBranch_Statics::NewProp_Branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegisteredBranch_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegisteredBranch_Statics::NewProp_EditorWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegisteredBranch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|EditorWidget" },
		{ "Comment", "/* Check if an editor widget is open or closed with branch pins */" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_EditorWidget.h" },
		{ "ToolTip", "Check if an editor widget is open or closed with branch pins" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegisteredBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_EditorWidget, nullptr, "IsEditorWidgetRegisteredBranch", nullptr, nullptr, sizeof(ElgEditorBP_EditorWidget_eventIsEditorWidgetRegisteredBranch_Parms), Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegisteredBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegisteredBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegisteredBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegisteredBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegisteredBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegisteredBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_EditorWidget_OpenEditorWidget_Statics
	{
		struct ElgEditorBP_EditorWidget_eventOpenEditorWidget_Parms
		{
			UEditorUtilityWidgetBlueprint* EditorWidget;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_OpenEditorWidget_Statics::NewProp_EditorWidget = { "EditorWidget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_EditorWidget_eventOpenEditorWidget_Parms, EditorWidget), Z_Construct_UClass_UEditorUtilityWidgetBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_EditorWidget_OpenEditorWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_EditorWidget_OpenEditorWidget_Statics::NewProp_EditorWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_EditorWidget_OpenEditorWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|EditorWidget" },
		{ "Comment", "/* Open an Editor Utility Widget */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_EditorWidget.h" },
		{ "ToolTip", "Open an Editor Utility Widget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_OpenEditorWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_EditorWidget, nullptr, "OpenEditorWidget", nullptr, nullptr, sizeof(ElgEditorBP_EditorWidget_eventOpenEditorWidget_Parms), Z_Construct_UFunction_UElgEditorBP_EditorWidget_OpenEditorWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_EditorWidget_OpenEditorWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_EditorWidget_OpenEditorWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_EditorWidget_OpenEditorWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_EditorWidget_OpenEditorWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_EditorWidget_OpenEditorWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_EditorWidget_ReinitializeEditorWidgets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_EditorWidget_ReinitializeEditorWidgets_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|EditorWidget" },
		{ "Comment", "/* ReinitializeUIs any editor widgets i in the loaded script */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_EditorWidget.h" },
		{ "ToolTip", "ReinitializeUIs any editor widgets i in the loaded script" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_ReinitializeEditorWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_EditorWidget, nullptr, "ReinitializeEditorWidgets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_EditorWidget_ReinitializeEditorWidgets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_EditorWidget_ReinitializeEditorWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_EditorWidget_ReinitializeEditorWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_EditorWidget_ReinitializeEditorWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetLabel_Statics
	{
		struct ElgEditorBP_EditorWidget_eventSetEditorWidgetLabel_Parms
		{
			UEditorUtilityWidgetBlueprint* EditorWidget;
			FText TabName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TabName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetLabel_Statics::NewProp_TabName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetLabel_Statics::NewProp_TabName = { "TabName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_EditorWidget_eventSetEditorWidgetLabel_Parms, TabName), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetLabel_Statics::NewProp_TabName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetLabel_Statics::NewProp_TabName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetLabel_Statics::NewProp_EditorWidget = { "EditorWidget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_EditorWidget_eventSetEditorWidgetLabel_Parms, EditorWidget), Z_Construct_UClass_UEditorUtilityWidgetBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetLabel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetLabel_Statics::NewProp_TabName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetLabel_Statics::NewProp_EditorWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|EditorWidget|Tab" },
		{ "Comment", "/** Set the label of the Editor Widget Tab */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_EditorWidget.h" },
		{ "ToolTip", "Set the label of the Editor Widget Tab" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_EditorWidget, nullptr, "SetEditorWidgetLabel", nullptr, nullptr, sizeof(ElgEditorBP_EditorWidget_eventSetEditorWidgetLabel_Parms), Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetToolTip_Statics
	{
		struct ElgEditorBP_EditorWidget_eventSetEditorWidgetToolTip_Parms
		{
			UEditorUtilityWidgetBlueprint* EditorWidget;
			FText TipText;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TipText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TipText;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetToolTip_Statics::NewProp_TipText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetToolTip_Statics::NewProp_TipText = { "TipText", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_EditorWidget_eventSetEditorWidgetToolTip_Parms, TipText), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetToolTip_Statics::NewProp_TipText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetToolTip_Statics::NewProp_TipText_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetToolTip_Statics::NewProp_EditorWidget = { "EditorWidget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_EditorWidget_eventSetEditorWidgetToolTip_Parms, EditorWidget), Z_Construct_UClass_UEditorUtilityWidgetBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetToolTip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetToolTip_Statics::NewProp_TipText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetToolTip_Statics::NewProp_EditorWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetToolTip_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|EditorWidget|Tab" },
		{ "Comment", "/** Set the tooltip of the Editor Widget Tab */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_EditorWidget.h" },
		{ "ToolTip", "Set the tooltip of the Editor Widget Tab" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetToolTip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_EditorWidget, nullptr, "SetEditorWidgetToolTip", nullptr, nullptr, sizeof(ElgEditorBP_EditorWidget_eventSetEditorWidgetToolTip_Parms), Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetToolTip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetToolTip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetToolTip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetToolTip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetToolTip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetToolTip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorBP_EditorWidget_ToggleEditorWidget_Statics
	{
		struct ElgEditorBP_EditorWidget_eventToggleEditorWidget_Parms
		{
			UEditorUtilityWidgetBlueprint* EditorWidget;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_ToggleEditorWidget_Statics::NewProp_EditorWidget = { "EditorWidget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorBP_EditorWidget_eventToggleEditorWidget_Parms, EditorWidget), Z_Construct_UClass_UEditorUtilityWidgetBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorBP_EditorWidget_ToggleEditorWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorBP_EditorWidget_ToggleEditorWidget_Statics::NewProp_EditorWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorBP_EditorWidget_ToggleEditorWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|EditorWidget" },
		{ "Comment", "/* Toggle the Editor Widget on/off */" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_EditorWidget.h" },
		{ "ToolTip", "Toggle the Editor Widget on/off" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorBP_EditorWidget_ToggleEditorWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorBP_EditorWidget, nullptr, "ToggleEditorWidget", nullptr, nullptr, sizeof(ElgEditorBP_EditorWidget_eventToggleEditorWidget_Parms), Z_Construct_UFunction_UElgEditorBP_EditorWidget_ToggleEditorWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_EditorWidget_ToggleEditorWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorBP_EditorWidget_ToggleEditorWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgEditorBP_EditorWidget_ToggleEditorWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorBP_EditorWidget_ToggleEditorWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorBP_EditorWidget_ToggleEditorWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UElgEditorBP_EditorWidget_NoRegister()
	{
		return UElgEditorBP_EditorWidget::StaticClass();
	}
	struct Z_Construct_UClass_UElgEditorBP_EditorWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UElgEditorBP_EditorWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ElgEditorScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UElgEditorBP_EditorWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UElgEditorBP_EditorWidget_AddEditorWidgetsToLoadedScript, "AddEditorWidgetsToLoadedScript" }, // 874932556
		{ &Z_Construct_UFunction_UElgEditorBP_EditorWidget_CloseEditorWidget, "CloseEditorWidget" }, // 2932628112
		{ &Z_Construct_UFunction_UElgEditorBP_EditorWidget_EditorWidgetDrawAttention, "EditorWidgetDrawAttention" }, // 1343904397
		{ &Z_Construct_UFunction_UElgEditorBP_EditorWidget_GetEditorWidgetLabel, "GetEditorWidgetLabel" }, // 943317111
		{ &Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpen, "IsEditorWidgetOpen" }, // 502273427
		{ &Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetOpenBranch, "IsEditorWidgetOpenBranch" }, // 1655392395
		{ &Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegistered, "IsEditorWidgetRegistered" }, // 3529149384
		{ &Z_Construct_UFunction_UElgEditorBP_EditorWidget_IsEditorWidgetRegisteredBranch, "IsEditorWidgetRegisteredBranch" }, // 2673470572
		{ &Z_Construct_UFunction_UElgEditorBP_EditorWidget_OpenEditorWidget, "OpenEditorWidget" }, // 2617806500
		{ &Z_Construct_UFunction_UElgEditorBP_EditorWidget_ReinitializeEditorWidgets, "ReinitializeEditorWidgets" }, // 3033395645
		{ &Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetLabel, "SetEditorWidgetLabel" }, // 1848125429
		{ &Z_Construct_UFunction_UElgEditorBP_EditorWidget_SetEditorWidgetToolTip, "SetEditorWidgetToolTip" }, // 2880577888
		{ &Z_Construct_UFunction_UElgEditorBP_EditorWidget_ToggleEditorWidget, "ToggleEditorWidget" }, // 3137542543
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgEditorBP_EditorWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Blueprints/ElgEditorBP_EditorWidget.h" },
		{ "ModuleRelativePath", "Public/Blueprints/ElgEditorBP_EditorWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UElgEditorBP_EditorWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElgEditorBP_EditorWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UElgEditorBP_EditorWidget_Statics::ClassParams = {
		&UElgEditorBP_EditorWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UElgEditorBP_EditorWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UElgEditorBP_EditorWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UElgEditorBP_EditorWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UElgEditorBP_EditorWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UElgEditorBP_EditorWidget, 3685451507);
	template<> ELGEDITORSCRIPTING_API UClass* StaticClass<UElgEditorBP_EditorWidget>()
	{
		return UElgEditorBP_EditorWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UElgEditorBP_EditorWidget(Z_Construct_UClass_UElgEditorBP_EditorWidget, &UElgEditorBP_EditorWidget::StaticClass, TEXT("/Script/ElgEditorScripting"), TEXT("UElgEditorBP_EditorWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UElgEditorBP_EditorWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
