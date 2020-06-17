// Copyright 2019-2020 ElgSoft. All rights reserved. 
// Elg001.ElgEditorScripting - ElgSoft.com

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/TextProperty.h"
#include "Styling/SlateBrush.h"
#include "ElgEditorBP_Enum.h"
#include "ElgEditorBP_EditorWidget.generated.h"

class UEditorUtilityWidgetBlueprint;
class FTabManager;
class SDockTab;


/**
 * 
 */
UCLASS()
class ELGEDITORSCRIPTING_API UElgEditorBP_EditorWidget : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


#pragma region State

	/* Open an Editor Utility Widget */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|EditorWidget")
		static void OpenEditorWidget(UEditorUtilityWidgetBlueprint* EditorWidget);

	/* Open an Editor Utility Widget and return the instance*/
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|EditorWidget", meta = (ExpandEnumAsExecs = "Branches"))
		static UEditorUtilityWidget* OpenAndGetEditorWidget(UEditorUtilityWidgetBlueprint* EditorWidget, EBPEditorOutputValidBranch& Branches);

	/* Close an Editor Utility Widget */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|EditorWidget")
		static void CloseEditorWidget(UEditorUtilityWidgetBlueprint* EditorWidget);

	/* Toggle the Editor Widget on/off */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|EditorWidget")
		static void ToggleEditorWidget(UEditorUtilityWidgetBlueprint* EditorWidget);

	/* Check if an editor widget is open or closed */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|EditorWidget")
		static bool IsEditorWidgetOpen(UEditorUtilityWidgetBlueprint* EditorWidget);

	/* Check if an editor widget is open or closed with branch pins */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|EditorWidget", meta = (ExpandEnumAsExecs = "Branches"))
		static void IsEditorWidgetOpenBranch(UEditorUtilityWidgetBlueprint* EditorWidget, EBPEditorOutputBranch& Branches);

	/* Check if an editor widget is open or closed */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|EditorWidget")
		static bool IsEditorWidgetRegistered(UEditorUtilityWidgetBlueprint* EditorWidget);

	/* Check if an editor widget is open or closed with branch pins */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|EditorWidget", meta = (ExpandEnumAsExecs = "Branches"))
		static void IsEditorWidgetRegisteredBranch(UEditorUtilityWidgetBlueprint* EditorWidget, EBPEditorOutputBranch& Branches);

	/* Add editor widgets to the loaded script list so they will be registration when/if ReinitializeUIs */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|EditorWidget")
		static void AddEditorWidgetsToLoadedScript(TArray<UEditorUtilityWidgetBlueprint*> EditorWidgets);
	
	/* ReinitializeUIs any editor widgets i in the loaded script */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|EditorWidget")
		static void ReinitializeEditorWidgets();
	
	/* Get the Editor Widget Instance, if the widget is running	*/
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|EditorWidget", meta = (ExpandEnumAsExecs = "Branches"))
		static class UEditorUtilityWidget* GetEditorWidget(UEditorUtilityWidgetBlueprint* EditorWidget, EBPEditorOutputValidBranch& Branches);


#pragma endregion

#pragma region TabStyle

	/** Set the label of the Editor Widget Tab */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|EditorWidget|Tab")
		static void SetEditorWidgetLabel(UEditorUtilityWidgetBlueprint* EditorWidget, const FText TabName);

	/** Get the label of the Editor Widget Tab */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|EditorWidget|Tab")
		static FText GetEditorWidgetLabel(UEditorUtilityWidgetBlueprint* EditorWidget);

	/** Set the tooltip of the Editor Widget Tab */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|EditorWidget|Tab")
		static void SetEditorWidgetToolTip(UEditorUtilityWidgetBlueprint* EditorWidget, const FText TipText);

	/** Draws attention to the tab. */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|EditorWidget|Tab")
		static void EditorWidgetDrawAttention(UEditorUtilityWidgetBlueprint* EditorWidget);

	/** Sets the tab icon */ // Dont work as it should...
	//UFUNCTION(BlueprintCallable, Category = "ElgEditor|EditorWidget|Tab")
	//	static void SetEditorWidgetIcon(UEditorUtilityWidgetBlueprint* EditorWidget, FSlateBrush IconSlateBrush);


#pragma endregion

#pragma region Helpers

	static FName GetEditorWidgetTabName(UEditorUtilityWidgetBlueprint* EditorWidget);
	static TSharedPtr<FTabManager> GetLevelEditorTabManager();
	static TSharedPtr<SDockTab> GetTabWidget(UEditorUtilityWidgetBlueprint* EditorWidget);

#pragma endregion

};
