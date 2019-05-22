// Copyright 2019 ElgSoft. All rights reserved. 
// Elg001.ElgEditorScripting - ElgSoft.com

#include "ElgEditorContext_BP.h"
#include "ElgEditorContext_LevelEditor.h"
#include "ElgEditorContext_Manager.h"
#include "ElgEditorContext_Config.h"
#include "ElgEditorScripting.h"
#include <Editor.h>
#include <AssetRegistryModule.h>


#pragma region GetContexts

UElgEditorContext_LevelEditor* UElgEditorContext_BP::GetLevelEditorContext()
{
#if WITH_EDITOR
	FElgEditorScriptingModule& elgEditorScriptModule = FModuleManager::Get().LoadModuleChecked<FElgEditorScriptingModule>(TEXT("ElgEditorScripting"));
	return elgEditorScriptModule.GetContextManager().GetLevelEditorContext();
#endif
	return nullptr;
}


UElgEditorContext_AssetBrowser* UElgEditorContext_BP::GetAssetBrowserContext()
{
#if WITH_EDITOR
	FElgEditorScriptingModule& elgEditorScriptModule = FModuleManager::Get().LoadModuleChecked<FElgEditorScriptingModule>(TEXT("ElgEditorScripting"));
	return elgEditorScriptModule.GetContextManager().GetAssetBrowserContext();
#endif
	return nullptr;
}


UElgEditorContext_Config* UElgEditorContext_BP::GetConfigContext(FString ConfigFilename, FString ConfigSection)
{
	if (ConfigFilename.IsEmpty() || ConfigSection.IsEmpty()) return nullptr;

#if WITH_EDITOR
	FElgEditorScriptingModule& elgEditorScriptModule = FModuleManager::Get().LoadModuleChecked<FElgEditorScriptingModule>(TEXT("ElgEditorScripting"));
	return elgEditorScriptModule.GetContextManager().GetConfigContext(ConfigFilename, ConfigSection);
#endif
	return nullptr;
}

UElgEditorContext_Notification* UElgEditorContext_BP::GetNotificationContext(const FS_ElgNotificationInfo& Info, const bool ShowNotification, UObject* InGraphObject)
{
	FElgEditorScriptingModule& elgEditorScriptModule = FModuleManager::Get().LoadModuleChecked<FElgEditorScriptingModule>(TEXT("ElgEditorScripting"));
	return elgEditorScriptModule.GetContextManager().GetNotificationContext(Info, InGraphObject, ShowNotification);
}

#pragma endregion

#pragma region Notification

void UElgEditorContext_BP::ShowQuickNotification(const FText Text, const FS_ElgNotificationIcon Icon, EBPNotificationCompletionState State, const float Duration, FS_ElgNotificationButtons Buttons, UObject* InGraphObject)
{
	FS_ElgNotificationInfo info;
	info.Text = Text;
	info.ExpireDuration = Duration;
	info.Buttons = Buttons;
	
	if (Icon.Texture != nullptr) {
		FSlateBrush brush;
		brush.SetResourceObject(Icon.Texture);
		brush.ImageSize = Icon.Size;
		info.Image = brush;
	}

	UElgEditorContext_Notification* notification = GetNotificationContext(info, true, InGraphObject);
	notification->SetCompletionState(State);
}

#pragma endregion

#pragma region StateChecks

void UElgEditorContext_BP::IsInEditor(bool& Result)
{
	Result = false;
#if WITH_EDITOR
	if (GEditor == nullptr) return;

	// the PIE world context only exist when the PIE is running.
	FWorldContext* pieWorldContext = GEditor->GetPIEWorldContext();
	if (!pieWorldContext) {
		Result = true;
	}		
#endif
}

void UElgEditorContext_BP::IsInPIE(bool& Result)
{
	Result = false;
#if WITH_EDITOR
	if (GEditor == nullptr) return;

	// the PIE world context only exist when the PIE is running.
	FWorldContext* pieWorldContext = GEditor->GetPIEWorldContext();
	if (pieWorldContext) {
		Result = true;
	}	
#endif
}

#pragma endregion

