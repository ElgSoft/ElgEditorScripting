// Copyright 2019-2023 ElgSoft. All rights reserved. 
// Elg001.ElgEditorScripting - ElgSoft.com

#include "ElgEditorBP_EditorWidget.h"
#include "Modules/ModuleManager.h"
#include <EditorUtilityWidgetBlueprint.h>
#include "LevelEditor.h"
#include <IDocumentation.h>
#include "Widgets/SToolTip.h"
#include <IBlutilityModule.h>
#include <EditorUtilitySubsystem.h>
#include <EditorUtilityWidget.h>


#define LOCTEXT_NAMESPACE "ElgAssetTypeActions"

#pragma region State


void UElgEditorBP_EditorWidget::OpenEditorWidgetFromObject(UObject* InObject)
{
	UWidgetBlueprint* Blueprint = Cast<UWidgetBlueprint>(InObject);
	if (!Blueprint) return;
	if (Blueprint->GeneratedClass->IsChildOf(UEditorUtilityWidget::StaticClass())) {
		
		//UEditorUtilityWidget* CDO = Blueprint->GeneratedClass->GetDefaultObject();

		UObject* cdoBase = Blueprint->GeneratedClass->GetDefaultObject();
		UEditorUtilityWidget* CDO = Cast<UEditorUtilityWidget>(cdoBase);
		if (CDO->ShouldAutoRunDefaultAction()) {
			// This is an instant-run blueprint, just execute it   
			UEditorUtilityWidget* Instance = NewObject<UEditorUtilityWidget>(GetTransientPackage(), Blueprint->GeneratedClass);
			Instance->ExecuteDefaultAction();
		} else {
			FName RegistrationName = FName(*(Blueprint->GetPathName() + TEXT("_ActiveTab")));
			FText DisplayName = FText::FromString(Blueprint->GetName());
			FLevelEditorModule& LevelEditorModule = FModuleManager::GetModuleChecked<FLevelEditorModule>(TEXT("LevelEditor"));
			TSharedPtr<FTabManager> LevelEditorTabManager = LevelEditorModule.GetLevelEditorTabManager();
			
			if (!LevelEditorTabManager->HasTabSpawner(RegistrationName)) {
				// to add a spawner we need to do some workaround...
				UEditorUtilitySubsystem* EditorUtilitySubsystem = GEditor->GetEditorSubsystem<UEditorUtilitySubsystem>();
				
				// get the path to the EditorWidget we want to open
				FSoftObjectPath path = FSoftObjectPath(Blueprint->GetPathName());
				// add it to the loaded UIs that will be setup when the tab manager change
				EditorUtilitySubsystem->LoadedUIs.Add(path);
				// save away the current open widgets as the OnTabManagerChanged will clear it
				//  and your open widgets will be closed when you restart the editor.
				TArray<FSoftObjectPath> paths = EditorUtilitySubsystem->LoadedUIs;

				// trigger a fake out that will make sure we have a spawner for our EdiorWidget
				LevelEditorModule.OnTabManagerChanged().Broadcast();

				// now we need to restore the widgets that was open before this hack and save it to the config file.
				EditorUtilitySubsystem->LoadedUIs = paths;
				EditorUtilitySubsystem->SaveConfig();
			}
			TSharedPtr<SDockTab> NewDockTab = LevelEditorTabManager->TryInvokeTab(RegistrationName);
		}
	}
}


void UElgEditorBP_EditorWidget::OpenEditorWidget(UEditorUtilityWidgetBlueprint* EditorWidget)
{
	if (!EditorWidget || IsRunningCommandlet()) return;

	UEditorUtilitySubsystem* EditorUtilitySubsystem = GEditor->GetEditorSubsystem<UEditorUtilitySubsystem>();
	EditorUtilitySubsystem->SpawnAndRegisterTab(EditorWidget);
}


UEditorUtilityWidget* UElgEditorBP_EditorWidget::OpenAndGetEditorWidget(UEditorUtilityWidgetBlueprint* EditorWidget, EBPEditorOutputValidBranch& Branches)
{
	Branches = EBPEditorOutputValidBranch::Invalid;
	if (!EditorWidget || IsRunningCommandlet()) return nullptr;

	UEditorUtilitySubsystem* EditorUtilitySubsystem = GEditor->GetEditorSubsystem<UEditorUtilitySubsystem>();
	EditorUtilitySubsystem->SpawnAndRegisterTab(EditorWidget);

	if (UEditorUtilityWidget* widget = EditorWidget->GetCreatedWidget()) {
		Branches = EBPEditorOutputValidBranch::Valid;
		return widget;
	}
	return nullptr;

}


void UElgEditorBP_EditorWidget::CloseEditorWidget(UEditorUtilityWidgetBlueprint* EditorWidget)
{
	if (!EditorWidget) return;

	if (IsEngineExitRequested()) return; // if the editor is closing down dont do anything

	if (TSharedPtr<SDockTab> tabWidget = GetTabWidget(EditorWidget)) {
		tabWidget->RequestCloseTab();
	}
}


void UElgEditorBP_EditorWidget::ToggleEditorWidget(UEditorUtilityWidgetBlueprint* EditorWidget)
{
	if (!EditorWidget) return;

	if (IsEditorWidgetOpen(EditorWidget)) {
		CloseEditorWidget(EditorWidget);
	} else {
		OpenEditorWidget(EditorWidget);
	}
}


bool UElgEditorBP_EditorWidget::IsEditorWidgetOpen(UEditorUtilityWidgetBlueprint* EditorWidget)
{
	if (!EditorWidget) return false;

	FName widgetName = GetEditorWidgetTabName(EditorWidget);
	TSharedPtr<FTabManager> tabManager = GetLevelEditorTabManager();
	if (tabManager->FindExistingLiveTab(widgetName)) {
		return true;
	}
	return false;
}


void UElgEditorBP_EditorWidget::IsEditorWidgetOpenBranch(UEditorUtilityWidgetBlueprint* EditorWidget, EBPEditorOutputBranch& Branches)
{
	if (IsEditorWidgetOpen(EditorWidget)) {
		Branches = EBPEditorOutputBranch::outTrue;
	} else {
		Branches = EBPEditorOutputBranch::outFalse;
	}	
}


bool UElgEditorBP_EditorWidget::IsEditorWidgetRegistered(UEditorUtilityWidgetBlueprint* EditorWidget)
{
	if (!EditorWidget) return false;

	FName widgetName = GetEditorWidgetTabName(EditorWidget);
	TSharedPtr<FTabManager> tabManager = GetLevelEditorTabManager();

	return tabManager->HasTabSpawner(widgetName);
}


void UElgEditorBP_EditorWidget::IsEditorWidgetRegisteredBranch(UEditorUtilityWidgetBlueprint* EditorWidget, EBPEditorOutputBranch& Branches)
{
	if (IsEditorWidgetRegistered(EditorWidget)) {
		Branches = EBPEditorOutputBranch::outTrue;
	} else {
		Branches = EBPEditorOutputBranch::outFalse;
	}
}


void UElgEditorBP_EditorWidget::AddEditorWidgetsToLoadedScript(TArray<UEditorUtilityWidgetBlueprint*> EditorWidgets)
{
	IBlutilityModule* BlutilityModule = FModuleManager::GetModulePtr<IBlutilityModule>("Blutility");

	if (BlutilityModule)
	{	
		for (UEditorUtilityWidgetBlueprint* editorWidget : EditorWidgets) { 
			BlutilityModule->AddLoadedScriptUI(editorWidget);
		}
	}
}


void UElgEditorBP_EditorWidget::ReinitializeEditorWidgets()
{
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>(TEXT("LevelEditor"));
	LevelEditorModule.OnTabManagerChanged().Broadcast();  // force a FBlutilityModule::ReinitializeUIs()
}


class UEditorUtilityWidget* UElgEditorBP_EditorWidget::GetEditorWidget(UEditorUtilityWidgetBlueprint* EditorWidget, EBPEditorOutputValidBranch& Branches)
{
	Branches = EBPEditorOutputValidBranch::Invalid;
	if (!EditorWidget) return nullptr;

	if (UEditorUtilityWidget* widget = EditorWidget->GetCreatedWidget()) {
		Branches = EBPEditorOutputValidBranch::Valid;
		return widget;
	}
	return nullptr;
}

#pragma endregion

#pragma region TabStyle

void UElgEditorBP_EditorWidget::SetEditorWidgetLabel(UEditorUtilityWidgetBlueprint* EditorWidget, const FText TabName)
{
	if (!EditorWidget) return;

	if (TSharedPtr<SDockTab> tabWidget = GetTabWidget(EditorWidget)) {
		TAttribute<FText> label;
		label = TabName;
		tabWidget->SetLabel(label);
	} else {	
		UE_LOG(LogTemp, Log, TEXT("SetEditorWidgetLabel:: Failed to set the widget label on [%s] to [s]"), *EditorWidget->GetName(), *TabName.ToString());
	}
}


FText UElgEditorBP_EditorWidget::GetEditorWidgetLabel(UEditorUtilityWidgetBlueprint* EditorWidget)
{
	FText label = FText();
	if (!EditorWidget) return label;

	if (TSharedPtr<SDockTab> tabWidget = GetTabWidget(EditorWidget)) {
		label = tabWidget->GetTabLabel();
	}
	return label;
}

void UElgEditorBP_EditorWidget::SetEditorWidgetToolTip(UEditorUtilityWidgetBlueprint* EditorWidget, const FText TipText)
{
	if (!EditorWidget) return;

	if (TSharedPtr<SDockTab> tabWidget = GetTabWidget(EditorWidget)) {

		const FString DocLink = TEXT("Shared/Editors/Common/EditorTabs");
		const FString DocExcerptName = TipText.ToString();
		TSharedRef<SToolTip> toolTip = IDocumentation::Get()->CreateToolTip(TipText, NULL, DocLink, DocExcerptName);
		toolTip->SetToolTipText(TipText);

		tabWidget->SetTabToolTipWidget(toolTip);
		tabWidget->SetToolTipText(TipText);
	}
}


void UElgEditorBP_EditorWidget::EditorWidgetDrawAttention(UEditorUtilityWidgetBlueprint* EditorWidget)
{
	if (!EditorWidget) return;

	if (TSharedPtr<SDockTab> tabWidget = GetTabWidget(EditorWidget)) {
		tabWidget->DrawAttention();
	}
}

/* Dont work...the tab looks weird after adding an icon...
void UElgEditorBP_EditorWidget::SetEditorWidgetIcon(UEditorUtilityWidgetBlueprint* EditorWidget, FSlateBrush IconSlateBrush)
{
	if (!EditorWidget) return;

	if (TSharedPtr<SDockTab> tabWidget = GetTabWidget(EditorWidget)) {
		TAttribute<const FSlateBrush*> icon = tabWidget->GetTabIcon();
		tabWidget->SetTabIcon(TAttribute<const FSlateBrush*>(&IconSlateBrush));
	}
}
*/

#pragma endregion

#pragma region Helpers

FName UElgEditorBP_EditorWidget::GetEditorWidgetTabName(UEditorUtilityWidgetBlueprint* EditorWidget)
{
	FName name;
	if (!EditorWidget) return name;
	name = *(EditorWidget->GetPathName() + LOCTEXT("ActiveTabSuffix", "_ActiveTab").ToString());
	return name;
}


TSharedPtr<FTabManager> UElgEditorBP_EditorWidget::GetLevelEditorTabManager()
{
	FLevelEditorModule& levelEditorModule = FModuleManager::GetModuleChecked<FLevelEditorModule>(TEXT("LevelEditor"));
	TSharedPtr<FTabManager> tabManager = levelEditorModule.GetLevelEditorTabManager();
	return tabManager;
}


TSharedPtr<SDockTab> UElgEditorBP_EditorWidget::GetTabWidget(UEditorUtilityWidgetBlueprint* EditorWidget)
{
	if (!EditorWidget) return nullptr;

	FName widgetName = GetEditorWidgetTabName(EditorWidget);
	TSharedPtr<FTabManager> tabManager = GetLevelEditorTabManager();
	return tabManager->FindExistingLiveTab(widgetName);
}

#pragma endregion

#undef LOCTEXT_NAMESPACE