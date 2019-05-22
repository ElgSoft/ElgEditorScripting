// Copyright 2019 ElgSoft. All rights reserved.
// Elg001.ElgEditorScripting - ElgSoft.com

#include "ElgEditorContext_Notification.h"
#include <Widgets/Notifications/SNotificationList.h>
#include <Framework/Notifications/NotificationManager.h>



#pragma  region Setup

UElgEditorContext_Notification::UElgEditorContext_Notification()
{
}

UElgEditorContext_Notification::~UElgEditorContext_Notification()
{
	if (NotificationPtr.IsValid()) {
		NotificationPtr.Reset();
		NotificationPtr = nullptr;
	};
}



void UElgEditorContext_Notification::Setup(const FS_ElgNotificationInfo& Info, UObject* InGraphObject, const bool ShowNotification)
{	
	NotificationInfo = Info;
	bIsShowing = false;
	bIsFree = false;
	GraphObject = InGraphObject;

	if (ShowNotification) {
		Show();
	}	
}

void UElgEditorContext_Notification::Show()
{
	if (NotificationPtr.IsValid()) {
		NotificationPtr->SetFadeOutDuration(0.0f);
		NotificationPtr->Fadeout();
		NotificationPtr.Reset();
	};

	bIsShowing = true;
	bIsFree = false;

	FNotificationInfo info(NotificationInfo.Text);
	info.FadeInDuration = NotificationInfo.FadeInDuration;
	info.FadeOutDuration = NotificationInfo.FadeOutDuration;
	info.ExpireDuration = NotificationInfo.ExpireDuration;
	info.bUseThrobber = NotificationInfo.bUseThrobber;
	info.bUseSuccessFailIcons = NotificationInfo.bUseSuccessFailIcons;
	info.bUseLargeFont = NotificationInfo.bUseLargeFont;

	if (NotificationInfo.WidthOverride == 0.0f) {
		info.WidthOverride = FOptionalSize(); 
	} else {
		info.WidthOverride = FOptionalSize(NotificationInfo.WidthOverride);
	}
	
	info.bFireAndForget = NotificationInfo.bFireAndForget;
	info.bAllowThrottleWhenFrameRateIsLow = NotificationInfo.bAllowThrottleWhenFrameRateIsLow;
	
	// only add an image if we have set an texture.
	if (NotificationInfo.Image.GetResourceObject() != nullptr) {
		info.Image = &NotificationInfo.Image;
	}
	
	// only add the hyperlink if it has text and a valid function name.
	if (!NotificationInfo.HyperlinkText.IsEmpty()) {	
		const FName eventName(*NotificationInfo.HyperlinkEventName);
		if (HasFunctionWithName(eventName)) {
			TAttribute<FText> label;
			label = NotificationInfo.HyperlinkText;
			info.HyperlinkText = label;
			info.Hyperlink = FSimpleDelegate::CreateUFunction(GraphObject, eventName);
		}		
	}

	// Need to have a valid object to work with...
	if (GraphObject != nullptr) {
		for (FS_ElgNotificationButtonInfo buttonInfo : NotificationInfo.Buttons.Buttons)
		{
			if (buttonInfo.EventName == "") continue;
			const FName eventName(*buttonInfo.EventName);
			if (HasFunctionWithName(eventName)) {

				FNotificationButtonInfo notificationButton = FNotificationButtonInfo(
					FText::FromString(buttonInfo.Text),
					FText::FromString(buttonInfo.ToolTip),
					FSimpleDelegate::CreateLambda([this, buttonInfo]() {HandleOnButtonClicked(buttonInfo); })
				);

				notificationButton.VisibilityOnNone = buttonInfo.VisibilityOnNone ? EVisibility::Visible : EVisibility::Collapsed;
				notificationButton.VisibilityOnPending = buttonInfo.VisibilityOnPending ? EVisibility::Visible : EVisibility::Collapsed;
				notificationButton.VisibilityOnSuccess = buttonInfo.VisibilityOnSuccess ? EVisibility::Visible : EVisibility::Collapsed;
				notificationButton.VisibilityOnFail = buttonInfo.VisibilityOnFail ? EVisibility::Visible : EVisibility::Collapsed;

				info.ButtonDetails.Add(notificationButton);
			}
		}
	}
	NotificationPtr = FSlateNotificationManager::Get().AddNotification(info);
	NotificationPtr->SetCompletionState(SNotificationItem::CS_None);
}


void UElgEditorContext_Notification::Close(const FText Text)
{
	SetText(Text);
	if (NotificationPtr.IsValid()) {
		NotificationPtr->ExpireAndFadeout();
	}
}


void UElgEditorContext_Notification::CloseAsSuccess(const FText Text)
{
	SetCompleteStateSuccess();
	Close(Text);
}


void UElgEditorContext_Notification::CloseAsFail(const FText Text)
{
	SetCompleteStateFail();
	Close(Text);
}

#pragma endregion

#pragma region NotificationItem

void UElgEditorContext_Notification::ExpireAndFadeout()
{
	if (!NotificationPtr.IsValid()) return;
	NotificationPtr->ExpireAndFadeout();
	bIsShowing = false;
}


void UElgEditorContext_Notification::Fadeout()
{
	if (!NotificationPtr.IsValid()) return;
	NotificationPtr->Fadeout();
	bIsShowing = false;
}


void UElgEditorContext_Notification::SetCompletionState(EBPNotificationCompletionState State)
{
	if (NotificationPtr.IsValid()) {
		if (State == EBPNotificationCompletionState::Fail) {
			NotificationPtr->SetCompletionState(SNotificationItem::CS_Fail);
		}
		else if (State == EBPNotificationCompletionState::Success) {
			NotificationPtr->SetCompletionState(SNotificationItem::CS_Success);
		}
		else if (State == EBPNotificationCompletionState::Pending) {
			NotificationPtr->SetCompletionState(SNotificationItem::CS_Pending);
		}
		else {
			NotificationPtr->SetCompletionState(SNotificationItem::CS_None);
		}
	} else { 
		UE_LOG(LogTemp, Warning, TEXT("Notification:: ptr is not valid here..."));
	}
}


void UElgEditorContext_Notification::SetStateAsPending()
{
	SetCompletionState(EBPNotificationCompletionState::Pending);
}


void UElgEditorContext_Notification::SetCompleteStateFail()
{
	SetCompletionState(EBPNotificationCompletionState::Fail);
}


void UElgEditorContext_Notification::SetCompleteStateSuccess()
{
	SetCompletionState(EBPNotificationCompletionState::Success);
}


void UElgEditorContext_Notification::SetText(const FText NewText)
{
	NotificationInfo.Text = NewText;
	if (NotificationPtr.IsValid()) {
		NotificationPtr->SetText(NewText);
	}
}

bool UElgEditorContext_Notification::IsNotificationValid()
{
	return NotificationPtr.IsValid();
}


void UElgEditorContext_Notification::Clear()
{
	if (NotificationPtr.IsValid()) {
		NotificationPtr->SetFadeOutDuration(0.0f);
		NotificationPtr->Fadeout();
		NotificationPtr.Reset();
	};
	bIsShowing = false;
	NotificationInfo = FS_ElgNotificationInfo();
	bIsFree = true;
}


void UElgEditorContext_Notification::HandleOnButtonClicked(FS_ElgNotificationButtonInfo ButtonInfo)
{
	FName const FunctionFName(*ButtonInfo.EventName);
	FSimpleDelegate delegate = FSimpleDelegate::CreateUFunction(GraphObject, FunctionFName);
	delegate.Execute();

	if (ButtonInfo.CloseOnClick) {
		if (NotificationPtr.IsValid()) {
			NotificationPtr->Fadeout();
		};
	}
}

#pragma endregion

#pragma region Helpers

bool UElgEditorContext_Notification::IsFree()
{
	return bIsFree;
}


bool UElgEditorContext_Notification::HasFunctionWithName(const FName EventName)
{
	if (EventName.IsNone()) {
		UE_LOG(LogTemp, Warning, TEXT("Notification:: EventName is empty...it does need a name"));
		return false;
	}
	if (GraphObject == nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("Notification:: Failed to get a valid ObjectWithFunction for  [%s]"), *EventName.ToString());
		return false;
	}

	UFunction* const func = GraphObject->FindFunction(EventName);
	if (func)
	{
		if (func->ParmsSize == 0)
		{
			return true;
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("Notification:: Found a function with name [%s] but it take parameters and I dont do that..."), *EventName.ToString());
		}
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Notification:: Failed to find a function with name [%s]"), *EventName.ToString());
	}
	return false;
}

#pragma endregion