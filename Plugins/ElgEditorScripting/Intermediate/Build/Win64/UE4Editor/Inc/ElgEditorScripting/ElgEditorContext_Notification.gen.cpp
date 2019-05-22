// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElgEditorScripting/Public/EditorContexts/ElgEditorContext_Notification.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElgEditorContext_Notification() {}
// Cross Module References
	ELGEDITORSCRIPTING_API UEnum* Z_Construct_UEnum_ElgEditorScripting_EBPNotificationCompletionState();
	UPackage* Z_Construct_UPackage__Script_ElgEditorScripting();
	ELGEDITORSCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FS_ElgNotificationInfo();
	ELGEDITORSCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FS_ElgNotificationButtons();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	ELGEDITORSCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo();
	ELGEDITORSCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FS_ElgNotificationIcon();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorContext_Notification_NoRegister();
	ELGEDITORSCRIPTING_API UClass* Z_Construct_UClass_UElgEditorContext_Notification();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Notification_Clear();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Notification_Close();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Notification_CloseAsFail();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Notification_CloseAsSuccess();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Notification_ExpireAndFadeout();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Notification_Fadeout();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Notification_HandleOnButtonClicked();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Notification_IsNotificationValid();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Notification_SetCompleteStateFail();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Notification_SetCompleteStateSuccess();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Notification_SetCompletionState();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Notification_SetStateAsPending();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Notification_SetText();
	ELGEDITORSCRIPTING_API UFunction* Z_Construct_UFunction_UElgEditorContext_Notification_Show();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static UEnum* EBPNotificationCompletionState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ElgEditorScripting_EBPNotificationCompletionState, Z_Construct_UPackage__Script_ElgEditorScripting(), TEXT("EBPNotificationCompletionState"));
		}
		return Singleton;
	}
	template<> ELGEDITORSCRIPTING_API UEnum* StaticEnum<EBPNotificationCompletionState>()
	{
		return EBPNotificationCompletionState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPNotificationCompletionState(EBPNotificationCompletionState_StaticEnum, TEXT("/Script/ElgEditorScripting"), TEXT("EBPNotificationCompletionState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ElgEditorScripting_EBPNotificationCompletionState_Hash() { return 3090310642U; }
	UEnum* Z_Construct_UEnum_ElgEditorScripting_EBPNotificationCompletionState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ElgEditorScripting();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPNotificationCompletionState"), 0, Get_Z_Construct_UEnum_ElgEditorScripting_EBPNotificationCompletionState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBPNotificationCompletionState::None", (int64)EBPNotificationCompletionState::None },
				{ "EBPNotificationCompletionState::Pending", (int64)EBPNotificationCompletionState::Pending },
				{ "EBPNotificationCompletionState::Success", (int64)EBPNotificationCompletionState::Success },
				{ "EBPNotificationCompletionState::Fail", (int64)EBPNotificationCompletionState::Fail },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ElgEditorScripting,
				nullptr,
				"EBPNotificationCompletionState",
				"EBPNotificationCompletionState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FS_ElgNotificationInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELGEDITORSCRIPTING_API uint32 Get_Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_ElgNotificationInfo, Z_Construct_UPackage__Script_ElgEditorScripting(), TEXT("S_ElgNotificationInfo"), sizeof(FS_ElgNotificationInfo), Get_Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Hash());
	}
	return Singleton;
}
template<> ELGEDITORSCRIPTING_API UScriptStruct* StaticStruct<FS_ElgNotificationInfo>()
{
	return FS_ElgNotificationInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FS_ElgNotificationInfo(FS_ElgNotificationInfo::StaticStruct, TEXT("/Script/ElgEditorScripting"), TEXT("S_ElgNotificationInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ElgEditorScripting_StaticRegisterNativesFS_ElgNotificationInfo
{
	FScriptStruct_ElgEditorScripting_StaticRegisterNativesFS_ElgNotificationInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("S_ElgNotificationInfo")),new UScriptStruct::TCppStructOps<FS_ElgNotificationInfo>);
	}
} ScriptStruct_ElgEditorScripting_StaticRegisterNativesFS_ElgNotificationInfo;
	struct Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Buttons_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Buttons;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HyperlinkEventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HyperlinkEventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HyperlinkText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_HyperlinkText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowThrottleWhenFrameRateIsLow_MetaData[];
#endif
		static void NewProp_bAllowThrottleWhenFrameRateIsLow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowThrottleWhenFrameRateIsLow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFireAndForget_MetaData[];
#endif
		static void NewProp_bFireAndForget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireAndForget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidthOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WidthOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLargeFont_MetaData[];
#endif
		static void NewProp_bUseLargeFont_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLargeFont;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSuccessFailIcons_MetaData[];
#endif
		static void NewProp_bUseSuccessFailIcons_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSuccessFailIcons;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseThrobber_MetaData[];
#endif
		static void NewProp_bUseThrobber_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseThrobber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpireDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExpireDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeOutDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeInDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeInDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Image;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "Setup class to initialize a notification." },
	};
#endif
	void* Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_ElgNotificationInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_Buttons_MetaData[] = {
		{ "Category", "Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "Buttons on the Notification" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_Buttons = { "Buttons", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgNotificationInfo, Buttons), Z_Construct_UScriptStruct_FS_ElgNotificationButtons, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_Buttons_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_Buttons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_HyperlinkEventName_MetaData[] = {
		{ "Category", "Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "When set this will display as a hyperlink on the right side of the notification.\n      And the EventName will be executed when the hyperlink is clicked, can be a CustomEvent or FunctionName" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_HyperlinkEventName = { "HyperlinkEventName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgNotificationInfo, HyperlinkEventName), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_HyperlinkEventName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_HyperlinkEventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_HyperlinkText_MetaData[] = {
		{ "Category", "Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "Text to display for the hyperlink message" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_HyperlinkText = { "HyperlinkText", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgNotificationInfo, HyperlinkText), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_HyperlinkText_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_HyperlinkText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bAllowThrottleWhenFrameRateIsLow_MetaData[] = {
		{ "Category", "Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "True if we should throttle the editor while the notification is transitioning and performance is poor, to make sure the user can see the animation" },
	};
#endif
	void Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bAllowThrottleWhenFrameRateIsLow_SetBit(void* Obj)
	{
		((FS_ElgNotificationInfo*)Obj)->bAllowThrottleWhenFrameRateIsLow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bAllowThrottleWhenFrameRateIsLow = { "bAllowThrottleWhenFrameRateIsLow", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FS_ElgNotificationInfo), &Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bAllowThrottleWhenFrameRateIsLow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bAllowThrottleWhenFrameRateIsLow_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bAllowThrottleWhenFrameRateIsLow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bFireAndForget_MetaData[] = {
		{ "Category", "Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "When true the notification will automatically time out after the expire duration." },
	};
#endif
	void Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bFireAndForget_SetBit(void* Obj)
	{
		((FS_ElgNotificationInfo*)Obj)->bFireAndForget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bFireAndForget = { "bFireAndForget", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FS_ElgNotificationInfo), &Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bFireAndForget_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bFireAndForget_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bFireAndForget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_WidthOverride_MetaData[] = {
		{ "Category", "Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "When set this forces the width of the box, used to stop resizing on text change" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_WidthOverride = { "WidthOverride", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgNotificationInfo, WidthOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_WidthOverride_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_WidthOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bUseLargeFont_MetaData[] = {
		{ "Category", "Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "When true the larger bolder font will be used to display the message" },
	};
#endif
	void Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bUseLargeFont_SetBit(void* Obj)
	{
		((FS_ElgNotificationInfo*)Obj)->bUseLargeFont = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bUseLargeFont = { "bUseLargeFont", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FS_ElgNotificationInfo), &Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bUseLargeFont_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bUseLargeFont_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bUseLargeFont_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bUseSuccessFailIcons_MetaData[] = {
		{ "Category", "Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "Controls whether or not to display the success and fail icons" },
	};
#endif
	void Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bUseSuccessFailIcons_SetBit(void* Obj)
	{
		((FS_ElgNotificationInfo*)Obj)->bUseSuccessFailIcons = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bUseSuccessFailIcons = { "bUseSuccessFailIcons", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FS_ElgNotificationInfo), &Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bUseSuccessFailIcons_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bUseSuccessFailIcons_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bUseSuccessFailIcons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bUseThrobber_MetaData[] = {
		{ "Category", "Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "Controls whether or not to add the animated throbber" },
	};
#endif
	void Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bUseThrobber_SetBit(void* Obj)
	{
		((FS_ElgNotificationInfo*)Obj)->bUseThrobber = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bUseThrobber = { "bUseThrobber", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FS_ElgNotificationInfo), &Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bUseThrobber_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bUseThrobber_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bUseThrobber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_ExpireDuration_MetaData[] = {
		{ "Category", "Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "The duration before a fadeout for this element" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_ExpireDuration = { "ExpireDuration", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgNotificationInfo, ExpireDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_ExpireDuration_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_ExpireDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_FadeOutDuration_MetaData[] = {
		{ "Category", "Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "The fade out duration for this element" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_FadeOutDuration = { "FadeOutDuration", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgNotificationInfo, FadeOutDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_FadeOutDuration_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_FadeOutDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_FadeInDuration_MetaData[] = {
		{ "Category", "Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "The fade in duration for this element" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_FadeInDuration = { "FadeInDuration", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgNotificationInfo, FadeInDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_FadeInDuration_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_FadeInDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_Image_MetaData[] = {
		{ "Category", "Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "The icon image to display next to the text" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgNotificationInfo, Image), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_Image_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_Image_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "The text displayed in this text block" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgNotificationInfo, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_Text_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_Buttons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_HyperlinkEventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_HyperlinkText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bAllowThrottleWhenFrameRateIsLow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bFireAndForget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_WidthOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bUseLargeFont,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bUseSuccessFailIcons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_bUseThrobber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_ExpireDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_FadeOutDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_FadeInDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_Image,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::NewProp_Text,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElgEditorScripting,
		nullptr,
		&NewStructOps,
		"S_ElgNotificationInfo",
		sizeof(FS_ElgNotificationInfo),
		alignof(FS_ElgNotificationInfo),
		Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FS_ElgNotificationInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ElgEditorScripting();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("S_ElgNotificationInfo"), sizeof(FS_ElgNotificationInfo), Get_Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FS_ElgNotificationInfo_Hash() { return 2390433981U; }
class UScriptStruct* FS_ElgNotificationButtons::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELGEDITORSCRIPTING_API uint32 Get_Z_Construct_UScriptStruct_FS_ElgNotificationButtons_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_ElgNotificationButtons, Z_Construct_UPackage__Script_ElgEditorScripting(), TEXT("S_ElgNotificationButtons"), sizeof(FS_ElgNotificationButtons), Get_Z_Construct_UScriptStruct_FS_ElgNotificationButtons_Hash());
	}
	return Singleton;
}
template<> ELGEDITORSCRIPTING_API UScriptStruct* StaticStruct<FS_ElgNotificationButtons>()
{
	return FS_ElgNotificationButtons::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FS_ElgNotificationButtons(FS_ElgNotificationButtons::StaticStruct, TEXT("/Script/ElgEditorScripting"), TEXT("S_ElgNotificationButtons"), false, nullptr, nullptr);
static struct FScriptStruct_ElgEditorScripting_StaticRegisterNativesFS_ElgNotificationButtons
{
	FScriptStruct_ElgEditorScripting_StaticRegisterNativesFS_ElgNotificationButtons()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("S_ElgNotificationButtons")),new UScriptStruct::TCppStructOps<FS_ElgNotificationButtons>);
	}
} ScriptStruct_ElgEditorScripting_StaticRegisterNativesFS_ElgNotificationButtons;
	struct Z_Construct_UScriptStruct_FS_ElgNotificationButtons_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Buttons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Buttons;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Buttons_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgNotificationButtons_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FS_ElgNotificationButtons_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_ElgNotificationButtons>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgNotificationButtons_Statics::NewProp_Buttons_MetaData[] = {
		{ "Category", "Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "Array with the buttons to add to the notification message" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FS_ElgNotificationButtons_Statics::NewProp_Buttons = { "Buttons", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgNotificationButtons, Buttons), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgNotificationButtons_Statics::NewProp_Buttons_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgNotificationButtons_Statics::NewProp_Buttons_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FS_ElgNotificationButtons_Statics::NewProp_Buttons_Inner = { "Buttons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_ElgNotificationButtons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgNotificationButtons_Statics::NewProp_Buttons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgNotificationButtons_Statics::NewProp_Buttons_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_ElgNotificationButtons_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElgEditorScripting,
		nullptr,
		&NewStructOps,
		"S_ElgNotificationButtons",
		sizeof(FS_ElgNotificationButtons),
		alignof(FS_ElgNotificationButtons),
		Z_Construct_UScriptStruct_FS_ElgNotificationButtons_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgNotificationButtons_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgNotificationButtons_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgNotificationButtons_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FS_ElgNotificationButtons()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FS_ElgNotificationButtons_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ElgEditorScripting();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("S_ElgNotificationButtons"), sizeof(FS_ElgNotificationButtons), Get_Z_Construct_UScriptStruct_FS_ElgNotificationButtons_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FS_ElgNotificationButtons_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FS_ElgNotificationButtons_Hash() { return 456979453U; }
class UScriptStruct* FS_ElgNotificationButtonInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELGEDITORSCRIPTING_API uint32 Get_Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo, Z_Construct_UPackage__Script_ElgEditorScripting(), TEXT("S_ElgNotificationButtonInfo"), sizeof(FS_ElgNotificationButtonInfo), Get_Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Hash());
	}
	return Singleton;
}
template<> ELGEDITORSCRIPTING_API UScriptStruct* StaticStruct<FS_ElgNotificationButtonInfo>()
{
	return FS_ElgNotificationButtonInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FS_ElgNotificationButtonInfo(FS_ElgNotificationButtonInfo::StaticStruct, TEXT("/Script/ElgEditorScripting"), TEXT("S_ElgNotificationButtonInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ElgEditorScripting_StaticRegisterNativesFS_ElgNotificationButtonInfo
{
	FScriptStruct_ElgEditorScripting_StaticRegisterNativesFS_ElgNotificationButtonInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("S_ElgNotificationButtonInfo")),new UScriptStruct::TCppStructOps<FS_ElgNotificationButtonInfo>);
	}
} ScriptStruct_ElgEditorScripting_StaticRegisterNativesFS_ElgNotificationButtonInfo;
	struct Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibilityOnFail_MetaData[];
#endif
		static void NewProp_VisibilityOnFail_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VisibilityOnFail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibilityOnSuccess_MetaData[];
#endif
		static void NewProp_VisibilityOnSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VisibilityOnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibilityOnPending_MetaData[];
#endif
		static void NewProp_VisibilityOnPending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VisibilityOnPending;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibilityOnNone_MetaData[];
#endif
		static void NewProp_VisibilityOnNone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VisibilityOnNone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseOnClick_MetaData[];
#endif
		static void NewProp_CloseOnClick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CloseOnClick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ToolTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_ElgNotificationButtonInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_VisibilityOnFail_MetaData[] = {
		{ "Category", "Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "Visibility of the button when the completion state of the button is SNotificationItem::ECompletionState::Fail" },
	};
#endif
	void Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_VisibilityOnFail_SetBit(void* Obj)
	{
		((FS_ElgNotificationButtonInfo*)Obj)->VisibilityOnFail = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_VisibilityOnFail = { "VisibilityOnFail", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FS_ElgNotificationButtonInfo), &Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_VisibilityOnFail_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_VisibilityOnFail_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_VisibilityOnFail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_VisibilityOnSuccess_MetaData[] = {
		{ "Category", "Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "Visibility of the button when the completion state of the button is SNotificationItem::ECompletionState::Success" },
	};
#endif
	void Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_VisibilityOnSuccess_SetBit(void* Obj)
	{
		((FS_ElgNotificationButtonInfo*)Obj)->VisibilityOnSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_VisibilityOnSuccess = { "VisibilityOnSuccess", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FS_ElgNotificationButtonInfo), &Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_VisibilityOnSuccess_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_VisibilityOnSuccess_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_VisibilityOnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_VisibilityOnPending_MetaData[] = {
		{ "Category", "Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "Visibility of the button when the completion state of the button is SNotificationItem::ECompletionState::Pending" },
	};
#endif
	void Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_VisibilityOnPending_SetBit(void* Obj)
	{
		((FS_ElgNotificationButtonInfo*)Obj)->VisibilityOnPending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_VisibilityOnPending = { "VisibilityOnPending", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FS_ElgNotificationButtonInfo), &Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_VisibilityOnPending_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_VisibilityOnPending_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_VisibilityOnPending_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_VisibilityOnNone_MetaData[] = {
		{ "Category", "Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "Visibility of the button when the completion state of the button is SNotificationItem::ECompletionState::None" },
	};
#endif
	void Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_VisibilityOnNone_SetBit(void* Obj)
	{
		((FS_ElgNotificationButtonInfo*)Obj)->VisibilityOnNone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_VisibilityOnNone = { "VisibilityOnNone", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FS_ElgNotificationButtonInfo), &Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_VisibilityOnNone_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_VisibilityOnNone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_VisibilityOnNone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_CloseOnClick_MetaData[] = {
		{ "Category", "Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "Should the notification be closed when the button is clicked?" },
	};
#endif
	void Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_CloseOnClick_SetBit(void* Obj)
	{
		((FS_ElgNotificationButtonInfo*)Obj)->CloseOnClick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_CloseOnClick = { "CloseOnClick", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FS_ElgNotificationButtonInfo), &Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_CloseOnClick_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_CloseOnClick_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_CloseOnClick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_EventName_MetaData[] = {
		{ "Category", "Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "CustomEvent/FunctionName to call when the button is pressed" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgNotificationButtonInfo, EventName), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_EventName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_EventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_ToolTip_MetaData[] = {
		{ "Category", "Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "Tip displayed when moused over" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_ToolTip = { "ToolTip", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgNotificationButtonInfo, ToolTip), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_ToolTip_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_ToolTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "Message on the button" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgNotificationButtonInfo, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_Text_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_VisibilityOnFail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_VisibilityOnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_VisibilityOnPending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_VisibilityOnNone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_CloseOnClick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_ToolTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::NewProp_Text,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElgEditorScripting,
		nullptr,
		&NewStructOps,
		"S_ElgNotificationButtonInfo",
		sizeof(FS_ElgNotificationButtonInfo),
		alignof(FS_ElgNotificationButtonInfo),
		Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ElgEditorScripting();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("S_ElgNotificationButtonInfo"), sizeof(FS_ElgNotificationButtonInfo), Get_Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo_Hash() { return 2914438530U; }
class UScriptStruct* FS_ElgNotificationIcon::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELGEDITORSCRIPTING_API uint32 Get_Z_Construct_UScriptStruct_FS_ElgNotificationIcon_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_ElgNotificationIcon, Z_Construct_UPackage__Script_ElgEditorScripting(), TEXT("S_ElgNotificationIcon"), sizeof(FS_ElgNotificationIcon), Get_Z_Construct_UScriptStruct_FS_ElgNotificationIcon_Hash());
	}
	return Singleton;
}
template<> ELGEDITORSCRIPTING_API UScriptStruct* StaticStruct<FS_ElgNotificationIcon>()
{
	return FS_ElgNotificationIcon::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FS_ElgNotificationIcon(FS_ElgNotificationIcon::StaticStruct, TEXT("/Script/ElgEditorScripting"), TEXT("S_ElgNotificationIcon"), false, nullptr, nullptr);
static struct FScriptStruct_ElgEditorScripting_StaticRegisterNativesFS_ElgNotificationIcon
{
	FScriptStruct_ElgEditorScripting_StaticRegisterNativesFS_ElgNotificationIcon()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("S_ElgNotificationIcon")),new UScriptStruct::TCppStructOps<FS_ElgNotificationIcon>);
	}
} ScriptStruct_ElgEditorScripting_StaticRegisterNativesFS_ElgNotificationIcon;
	struct Z_Construct_UScriptStruct_FS_ElgNotificationIcon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgNotificationIcon_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FS_ElgNotificationIcon_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_ElgNotificationIcon>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgNotificationIcon_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "The size of the icon" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FS_ElgNotificationIcon_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgNotificationIcon, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgNotificationIcon_Statics::NewProp_Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgNotificationIcon_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_ElgNotificationIcon_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "Texture to use as an icon" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FS_ElgNotificationIcon_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_ElgNotificationIcon, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgNotificationIcon_Statics::NewProp_Texture_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgNotificationIcon_Statics::NewProp_Texture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_ElgNotificationIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgNotificationIcon_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ElgNotificationIcon_Statics::NewProp_Texture,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_ElgNotificationIcon_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElgEditorScripting,
		nullptr,
		&NewStructOps,
		"S_ElgNotificationIcon",
		sizeof(FS_ElgNotificationIcon),
		alignof(FS_ElgNotificationIcon),
		Z_Construct_UScriptStruct_FS_ElgNotificationIcon_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgNotificationIcon_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FS_ElgNotificationIcon_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ElgNotificationIcon_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FS_ElgNotificationIcon()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FS_ElgNotificationIcon_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ElgEditorScripting();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("S_ElgNotificationIcon"), sizeof(FS_ElgNotificationIcon), Get_Z_Construct_UScriptStruct_FS_ElgNotificationIcon_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FS_ElgNotificationIcon_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FS_ElgNotificationIcon_Hash() { return 330357721U; }
	void UElgEditorContext_Notification::StaticRegisterNativesUElgEditorContext_Notification()
	{
		UClass* Class = UElgEditorContext_Notification::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Clear", &UElgEditorContext_Notification::execClear },
			{ "Close", &UElgEditorContext_Notification::execClose },
			{ "CloseAsFail", &UElgEditorContext_Notification::execCloseAsFail },
			{ "CloseAsSuccess", &UElgEditorContext_Notification::execCloseAsSuccess },
			{ "ExpireAndFadeout", &UElgEditorContext_Notification::execExpireAndFadeout },
			{ "Fadeout", &UElgEditorContext_Notification::execFadeout },
			{ "HandleOnButtonClicked", &UElgEditorContext_Notification::execHandleOnButtonClicked },
			{ "IsNotificationValid", &UElgEditorContext_Notification::execIsNotificationValid },
			{ "SetCompleteStateFail", &UElgEditorContext_Notification::execSetCompleteStateFail },
			{ "SetCompleteStateSuccess", &UElgEditorContext_Notification::execSetCompleteStateSuccess },
			{ "SetCompletionState", &UElgEditorContext_Notification::execSetCompletionState },
			{ "SetStateAsPending", &UElgEditorContext_Notification::execSetStateAsPending },
			{ "SetText", &UElgEditorContext_Notification::execSetText },
			{ "Show", &UElgEditorContext_Notification::execShow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UElgEditorContext_Notification_Clear_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Notification_Clear_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Notification_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Notification, nullptr, "Clear", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Notification_Clear_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Notification_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Notification_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Notification_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Notification_Close_Statics
	{
		struct ElgEditorContext_Notification_eventClose_Parms
		{
			FText Text;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Notification_Close_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UElgEditorContext_Notification_Close_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Notification_eventClose_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Notification_Close_Statics::NewProp_Text_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Notification_Close_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Notification_Close_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Notification_Close_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Notification_Close_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "Close the notification with the fade out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Notification_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Notification, nullptr, "Close", sizeof(ElgEditorContext_Notification_eventClose_Parms), Z_Construct_UFunction_UElgEditorContext_Notification_Close_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Notification_Close_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Notification_Close_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Notification_Close_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Notification_Close()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Notification_Close_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Notification_CloseAsFail_Statics
	{
		struct ElgEditorContext_Notification_eventCloseAsFail_Parms
		{
			FText Text;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Notification_CloseAsFail_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UElgEditorContext_Notification_CloseAsFail_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Notification_eventCloseAsFail_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Notification_CloseAsFail_Statics::NewProp_Text_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Notification_CloseAsFail_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Notification_CloseAsFail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Notification_CloseAsFail_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Notification_CloseAsFail_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "Close the notification after it has been tagged as fail" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Notification_CloseAsFail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Notification, nullptr, "CloseAsFail", sizeof(ElgEditorContext_Notification_eventCloseAsFail_Parms), Z_Construct_UFunction_UElgEditorContext_Notification_CloseAsFail_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Notification_CloseAsFail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Notification_CloseAsFail_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Notification_CloseAsFail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Notification_CloseAsFail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Notification_CloseAsFail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Notification_CloseAsSuccess_Statics
	{
		struct ElgEditorContext_Notification_eventCloseAsSuccess_Parms
		{
			FText Text;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Notification_CloseAsSuccess_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UElgEditorContext_Notification_CloseAsSuccess_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Notification_eventCloseAsSuccess_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Notification_CloseAsSuccess_Statics::NewProp_Text_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Notification_CloseAsSuccess_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Notification_CloseAsSuccess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Notification_CloseAsSuccess_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Notification_CloseAsSuccess_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "Close the notification after it has been tagged as success" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Notification_CloseAsSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Notification, nullptr, "CloseAsSuccess", sizeof(ElgEditorContext_Notification_eventCloseAsSuccess_Parms), Z_Construct_UFunction_UElgEditorContext_Notification_CloseAsSuccess_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Notification_CloseAsSuccess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Notification_CloseAsSuccess_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Notification_CloseAsSuccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Notification_CloseAsSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Notification_CloseAsSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Notification_ExpireAndFadeout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Notification_ExpireAndFadeout_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "Waits for the ExpireDuration then begins to fade out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Notification_ExpireAndFadeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Notification, nullptr, "ExpireAndFadeout", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Notification_ExpireAndFadeout_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Notification_ExpireAndFadeout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Notification_ExpireAndFadeout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Notification_ExpireAndFadeout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Notification_Fadeout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Notification_Fadeout_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "Begin the fade out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Notification_Fadeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Notification, nullptr, "Fadeout", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Notification_Fadeout_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Notification_Fadeout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Notification_Fadeout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Notification_Fadeout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Notification_HandleOnButtonClicked_Statics
	{
		struct ElgEditorContext_Notification_eventHandleOnButtonClicked_Parms
		{
			FS_ElgNotificationButtonInfo ButtonInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgEditorContext_Notification_HandleOnButtonClicked_Statics::NewProp_ButtonInfo = { "ButtonInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Notification_eventHandleOnButtonClicked_Parms, ButtonInfo), Z_Construct_UScriptStruct_FS_ElgNotificationButtonInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Notification_HandleOnButtonClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Notification_HandleOnButtonClicked_Statics::NewProp_ButtonInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Notification_HandleOnButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Notification_HandleOnButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Notification, nullptr, "HandleOnButtonClicked", sizeof(ElgEditorContext_Notification_eventHandleOnButtonClicked_Parms), Z_Construct_UFunction_UElgEditorContext_Notification_HandleOnButtonClicked_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Notification_HandleOnButtonClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Notification_HandleOnButtonClicked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Notification_HandleOnButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Notification_HandleOnButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Notification_HandleOnButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Notification_IsNotificationValid_Statics
	{
		struct ElgEditorContext_Notification_eventIsNotificationValid_Parms
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
	void Z_Construct_UFunction_UElgEditorContext_Notification_IsNotificationValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgEditorContext_Notification_eventIsNotificationValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgEditorContext_Notification_IsNotificationValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgEditorContext_Notification_eventIsNotificationValid_Parms), &Z_Construct_UFunction_UElgEditorContext_Notification_IsNotificationValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Notification_IsNotificationValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Notification_IsNotificationValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Notification_IsNotificationValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Notification_IsNotificationValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Notification, nullptr, "IsNotificationValid", sizeof(ElgEditorContext_Notification_eventIsNotificationValid_Parms), Z_Construct_UFunction_UElgEditorContext_Notification_IsNotificationValid_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Notification_IsNotificationValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Notification_IsNotificationValid_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Notification_IsNotificationValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Notification_IsNotificationValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Notification_IsNotificationValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Notification_SetCompleteStateFail_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Notification_SetCompleteStateFail_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "Sets the visibility state of the throbber, success, and fail images" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Notification_SetCompleteStateFail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Notification, nullptr, "SetCompleteStateFail", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Notification_SetCompleteStateFail_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Notification_SetCompleteStateFail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Notification_SetCompleteStateFail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Notification_SetCompleteStateFail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Notification_SetCompleteStateSuccess_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Notification_SetCompleteStateSuccess_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "Sets the visibility state of the throbber, success, and fail images" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Notification_SetCompleteStateSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Notification, nullptr, "SetCompleteStateSuccess", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Notification_SetCompleteStateSuccess_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Notification_SetCompleteStateSuccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Notification_SetCompleteStateSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Notification_SetCompleteStateSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Notification_SetCompletionState_Statics
	{
		struct ElgEditorContext_Notification_eventSetCompletionState_Parms
		{
			EBPNotificationCompletionState State;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElgEditorContext_Notification_SetCompletionState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Notification_eventSetCompletionState_Parms, State), Z_Construct_UEnum_ElgEditorScripting_EBPNotificationCompletionState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElgEditorContext_Notification_SetCompletionState_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Notification_SetCompletionState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Notification_SetCompletionState_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Notification_SetCompletionState_Statics::NewProp_State_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Notification_SetCompletionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "Sets the visibility state of the throbber, success, and fail images" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Notification_SetCompletionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Notification, nullptr, "SetCompletionState", sizeof(ElgEditorContext_Notification_eventSetCompletionState_Parms), Z_Construct_UFunction_UElgEditorContext_Notification_SetCompletionState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Notification_SetCompletionState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Notification_SetCompletionState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Notification_SetCompletionState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Notification_SetCompletionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Notification_SetCompletionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Notification_SetStateAsPending_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Notification_SetStateAsPending_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "Sets the visibility state of the throbber, success, and fail images" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Notification_SetStateAsPending_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Notification, nullptr, "SetStateAsPending", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Notification_SetStateAsPending_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Notification_SetStateAsPending_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Notification_SetStateAsPending()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Notification_SetStateAsPending_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Notification_SetText_Statics
	{
		struct ElgEditorContext_Notification_eventSetText_Parms
		{
			FText NewText;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NewText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Notification_SetText_Statics::NewProp_NewText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UElgEditorContext_Notification_SetText_Statics::NewProp_NewText = { "NewText", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgEditorContext_Notification_eventSetText_Parms, NewText), METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Notification_SetText_Statics::NewProp_NewText_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Notification_SetText_Statics::NewProp_NewText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgEditorContext_Notification_SetText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgEditorContext_Notification_SetText_Statics::NewProp_NewText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Notification_SetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Notification_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Notification, nullptr, "SetText", sizeof(ElgEditorContext_Notification_eventSetText_Parms), Z_Construct_UFunction_UElgEditorContext_Notification_SetText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Notification_SetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Notification_SetText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Notification_SetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Notification_SetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Notification_SetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgEditorContext_Notification_Show_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgEditorContext_Notification_Show_Statics::Function_MetaDataParams[] = {
		{ "Category", "ElgEditor|Notification" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
		{ "ToolTip", "Show the notification" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgEditorContext_Notification_Show_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgEditorContext_Notification, nullptr, "Show", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgEditorContext_Notification_Show_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgEditorContext_Notification_Show_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgEditorContext_Notification_Show()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgEditorContext_Notification_Show_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UElgEditorContext_Notification_NoRegister()
	{
		return UElgEditorContext_Notification::StaticClass();
	}
	struct Z_Construct_UClass_UElgEditorContext_Notification_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GraphObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsShowing_MetaData[];
#endif
		static void NewProp_bIsShowing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsShowing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotificationInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NotificationInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UElgEditorContext_Notification_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ElgEditorScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UElgEditorContext_Notification_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UElgEditorContext_Notification_Clear, "Clear" }, // 3114102274
		{ &Z_Construct_UFunction_UElgEditorContext_Notification_Close, "Close" }, // 438779163
		{ &Z_Construct_UFunction_UElgEditorContext_Notification_CloseAsFail, "CloseAsFail" }, // 1707162244
		{ &Z_Construct_UFunction_UElgEditorContext_Notification_CloseAsSuccess, "CloseAsSuccess" }, // 1465779336
		{ &Z_Construct_UFunction_UElgEditorContext_Notification_ExpireAndFadeout, "ExpireAndFadeout" }, // 169660703
		{ &Z_Construct_UFunction_UElgEditorContext_Notification_Fadeout, "Fadeout" }, // 4193034041
		{ &Z_Construct_UFunction_UElgEditorContext_Notification_HandleOnButtonClicked, "HandleOnButtonClicked" }, // 177869248
		{ &Z_Construct_UFunction_UElgEditorContext_Notification_IsNotificationValid, "IsNotificationValid" }, // 1776429265
		{ &Z_Construct_UFunction_UElgEditorContext_Notification_SetCompleteStateFail, "SetCompleteStateFail" }, // 393110695
		{ &Z_Construct_UFunction_UElgEditorContext_Notification_SetCompleteStateSuccess, "SetCompleteStateSuccess" }, // 1965893125
		{ &Z_Construct_UFunction_UElgEditorContext_Notification_SetCompletionState, "SetCompletionState" }, // 90562960
		{ &Z_Construct_UFunction_UElgEditorContext_Notification_SetStateAsPending, "SetStateAsPending" }, // 1997636270
		{ &Z_Construct_UFunction_UElgEditorContext_Notification_SetText, "SetText" }, // 1876400906
		{ &Z_Construct_UFunction_UElgEditorContext_Notification_Show, "Show" }, // 4062578683
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgEditorContext_Notification_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EditorContexts/ElgEditorContext_Notification.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgEditorContext_Notification_Statics::NewProp_GraphObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UElgEditorContext_Notification_Statics::NewProp_GraphObject = { "GraphObject", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElgEditorContext_Notification, GraphObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UElgEditorContext_Notification_Statics::NewProp_GraphObject_MetaData, ARRAY_COUNT(Z_Construct_UClass_UElgEditorContext_Notification_Statics::NewProp_GraphObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgEditorContext_Notification_Statics::NewProp_bIsShowing_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
	};
#endif
	void Z_Construct_UClass_UElgEditorContext_Notification_Statics::NewProp_bIsShowing_SetBit(void* Obj)
	{
		((UElgEditorContext_Notification*)Obj)->bIsShowing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElgEditorContext_Notification_Statics::NewProp_bIsShowing = { "bIsShowing", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UElgEditorContext_Notification), &Z_Construct_UClass_UElgEditorContext_Notification_Statics::NewProp_bIsShowing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UElgEditorContext_Notification_Statics::NewProp_bIsShowing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UElgEditorContext_Notification_Statics::NewProp_bIsShowing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgEditorContext_Notification_Statics::NewProp_NotificationInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorContexts/ElgEditorContext_Notification.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UElgEditorContext_Notification_Statics::NewProp_NotificationInfo = { "NotificationInfo", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElgEditorContext_Notification, NotificationInfo), Z_Construct_UScriptStruct_FS_ElgNotificationInfo, METADATA_PARAMS(Z_Construct_UClass_UElgEditorContext_Notification_Statics::NewProp_NotificationInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UElgEditorContext_Notification_Statics::NewProp_NotificationInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UElgEditorContext_Notification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgEditorContext_Notification_Statics::NewProp_GraphObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgEditorContext_Notification_Statics::NewProp_bIsShowing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgEditorContext_Notification_Statics::NewProp_NotificationInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UElgEditorContext_Notification_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElgEditorContext_Notification>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UElgEditorContext_Notification_Statics::ClassParams = {
		&UElgEditorContext_Notification::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UElgEditorContext_Notification_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UElgEditorContext_Notification_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UElgEditorContext_Notification_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UElgEditorContext_Notification_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UElgEditorContext_Notification()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UElgEditorContext_Notification_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UElgEditorContext_Notification, 3355506057);
	template<> ELGEDITORSCRIPTING_API UClass* StaticClass<UElgEditorContext_Notification>()
	{
		return UElgEditorContext_Notification::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UElgEditorContext_Notification(Z_Construct_UClass_UElgEditorContext_Notification, &UElgEditorContext_Notification::StaticClass, TEXT("/Script/ElgEditorScripting"), TEXT("UElgEditorContext_Notification"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UElgEditorContext_Notification);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
