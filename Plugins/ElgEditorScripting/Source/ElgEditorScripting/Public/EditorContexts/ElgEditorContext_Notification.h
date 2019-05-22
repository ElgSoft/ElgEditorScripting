// Copyright 2019 ElgSoft. All rights reserved.
// Elg001.ElgEditorScripting - ElgSoft.com

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include <Types/SlateStructs.h>
#include "Styling/SlateBrush.h"
#include "UObject/TextProperty.h"
#include <Templates/SharedPointer.h>
#include "ElgEditorContext_Notification.generated.h"

struct FSlateBrush;
class SNotificationItem;
class UTexture2D;

#pragma region Enum

UENUM(BlueprintType)
enum class EBPNotificationCompletionState : uint8
{
	None,	
	Pending,
	Success,
	Fail,	
};


#pragma endregion

#pragma region Struct

USTRUCT(BlueprintType)
struct FS_ElgNotificationIcon
{
	GENERATED_USTRUCT_BODY()

	/* Texture to use as an icon */
	UPROPERTY(BlueprintReadWrite, Category = "Notification")
		UTexture2D* Texture;

	/* The size of the icon */
	UPROPERTY(BlueprintReadWrite, Category = "Notification")
		FVector2D Size;

	FS_ElgNotificationIcon() {
		Texture = nullptr;
		Size = FVector2D(32, 32);
	}
};


USTRUCT(BlueprintType)
struct FS_ElgNotificationButtonInfo
{
	GENERATED_USTRUCT_BODY()

	/** Message on the button */
	UPROPERTY(BlueprintReadWrite, Category = "Notification")
		FString Text;
	
	/** Tip displayed when moused over */
	UPROPERTY(BlueprintReadWrite, Category = "Notification")
		FString ToolTip;

	/** CustomEvent/FunctionName to call when the button is pressed */
	UPROPERTY(BlueprintReadWrite, Category = "Notification")
		FString EventName;

	/** Should the notification be closed when the button is clicked? */
	UPROPERTY(BlueprintReadWrite, Category = "Notification")
		bool CloseOnClick;

	/** Visibility of the button when the completion state of the button is SNotificationItem::ECompletionState::None */
	UPROPERTY(BlueprintReadWrite, Category = "Notification")
	bool VisibilityOnNone;

	/** Visibility of the button when the completion state of the button is SNotificationItem::ECompletionState::Pending */	
	UPROPERTY(BlueprintReadWrite, Category = "Notification")
	bool VisibilityOnPending;
	
	/** Visibility of the button when the completion state of the button is SNotificationItem::ECompletionState::Success */	
	UPROPERTY(BlueprintReadWrite, Category = "Notification")
	bool VisibilityOnSuccess;
	
	/** Visibility of the button when the completion state of the button is SNotificationItem::ECompletionState::Fail */
	UPROPERTY(BlueprintReadWrite, Category = "Notification")
	bool VisibilityOnFail;

	FS_ElgNotificationButtonInfo() {
		Text = "";
		ToolTip = "";
		EventName = "";
		CloseOnClick = true;
		VisibilityOnNone = true;
		VisibilityOnPending = true;
		VisibilityOnSuccess = true;
		VisibilityOnFail = true;
	}
};

USTRUCT(BlueprintType)
struct FS_ElgNotificationButtons
{
	GENERATED_USTRUCT_BODY()

	/** Array with the buttons to add to the notification message */
	UPROPERTY(BlueprintReadWrite, Category = "Notification")
	TArray<FS_ElgNotificationButtonInfo> Buttons;


	FS_ElgNotificationButtons() {
		Buttons.Empty();
	}

};


/**
 * Setup class to initialize a notification.
 */
USTRUCT(BlueprintType)
struct FS_ElgNotificationInfo
{
	GENERATED_USTRUCT_BODY()

	/** The text displayed in this text block */
	UPROPERTY(BlueprintReadWrite, Category = "Notification")
	FText Text;

	/** The icon image to display next to the text */
	UPROPERTY(BlueprintReadWrite, Category = "Notification")
	FSlateBrush Image;

	/** The fade in duration for this element */
	UPROPERTY(BlueprintReadWrite, Category = "Notification")
	float FadeInDuration;

	/** The fade out duration for this element */
	UPROPERTY(BlueprintReadWrite, Category = "Notification")
	float FadeOutDuration;

	/** The duration before a fadeout for this element */
	UPROPERTY(BlueprintReadWrite, Category = "Notification")
	float ExpireDuration;

	/** Controls whether or not to add the animated throbber */
	UPROPERTY(BlueprintReadWrite, Category = "Notification")
	bool bUseThrobber;

	/** Controls whether or not to display the success and fail icons */
	UPROPERTY(BlueprintReadWrite, Category = "Notification")
	bool bUseSuccessFailIcons;

	/** When true the larger bolder font will be used to display the message */
	UPROPERTY(BlueprintReadWrite, Category = "Notification")
	bool bUseLargeFont;

	/** When set this forces the width of the box, used to stop resizing on text change */
	UPROPERTY(BlueprintReadWrite, Category = "Notification")
	float WidthOverride;

	/** When true the notification will automatically time out after the expire duration. */
	UPROPERTY(BlueprintReadWrite, Category = "Notification")
	bool bFireAndForget;

	/** True if we should throttle the editor while the notification is transitioning and performance is poor, to make sure the user can see the animation */
	UPROPERTY(BlueprintReadWrite, Category = "Notification")
	bool bAllowThrottleWhenFrameRateIsLow;
	
	/** Text to display for the hyperlink message */
	UPROPERTY(BlueprintReadWrite, Category = "Notification")
		FText HyperlinkText;
	
	/** When set this will display as a hyperlink on the right side of the notification.
	And the EventName will be executed when the hyperlink is clicked, can be a CustomEvent or FunctionName*/
	UPROPERTY(BlueprintReadWrite, Category = "Notification")
		FString HyperlinkEventName;

	/* Buttons on the Notification */
	UPROPERTY(BlueprintReadWrite, Category = "Notification")
		FS_ElgNotificationButtons Buttons;


	FS_ElgNotificationInfo() {
		Text = FText::GetEmpty();
		Image = FSlateBrush();
		FadeInDuration = 0.5f;
		FadeOutDuration = 0.5f;
		ExpireDuration = 2.0f;
		bUseThrobber = true;
		bUseSuccessFailIcons = true;
		bUseLargeFont = true;
		WidthOverride = 0.0f;
		bFireAndForget = true;
		bAllowThrottleWhenFrameRateIsLow = true;
		Buttons = FS_ElgNotificationButtons();
	}

};

#pragma endregion



/**
 * 
 */
UCLASS(Blueprintable)
class ELGEDITORSCRIPTING_API UElgEditorContext_Notification : public UObject
{
	GENERATED_BODY()

public:

#pragma region Property

	UPROPERTY()
		FS_ElgNotificationInfo NotificationInfo;

	UPROPERTY()
		bool bIsShowing = false;

	bool bIsFree = false;

	UPROPERTY()
		UObject* GraphObject;

#pragma endregion

#pragma region Setup

	UElgEditorContext_Notification();
	virtual ~UElgEditorContext_Notification();

	void Setup(const FS_ElgNotificationInfo& Info, UObject* InGraphObject, const bool ShowNotification = false);

#pragma endregion

#pragma region NotificationItem

	/* Show the notification */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Notification")
		void Show();

	/* Close the notification with the fade out */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Notification")
		void Close(const FText Text);

	/* Close the notification after it has been tagged as success */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Notification")
		void CloseAsSuccess(const FText Text);

	/* Close the notification after it has been tagged as fail */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Notification")
		void CloseAsFail(const FText Text);

	/** Waits for the ExpireDuration then begins to fade out */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Notification")
		void ExpireAndFadeout();

	/** Begin the fade out */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Notification")
		void Fadeout();

	/** Sets the visibility state of the throbber, success, and fail images */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Notification")
		void SetCompletionState(EBPNotificationCompletionState State);

	/** Sets the visibility state of the throbber, success, and fail images */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Notification")
		void SetStateAsPending();

	/** Sets the visibility state of the throbber, success, and fail images */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Notification")
		void SetCompleteStateFail();

	/** Sets the visibility state of the throbber, success, and fail images */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Notification")
		void SetCompleteStateSuccess();

	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Notification")
		void SetText(const FText NewText);

	UFUNCTION(BlueprintPure, Category = "ElgEditor|Notification")
		bool IsNotificationValid();

	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Notification")
		void Clear();

	UFUNCTION()
		void HandleOnButtonClicked(FS_ElgNotificationButtonInfo ButtonInfo);

#pragma endregion

#pragma region Helpers

	bool IsFree();

	bool HasFunctionWithName(const FName EventName);

#pragma endregion
	
private:
	TSharedPtr<SNotificationItem> NotificationPtr;
};
