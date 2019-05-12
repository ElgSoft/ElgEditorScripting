// Copyright 2019 ElgSoft. All rights reserved. 
// Elg001.ElgEditorScripting - ElgSoft.com

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/TextProperty.h"
#include "ElgEditorBP_Enum.h"
#include "ElgEditorBP_Editor.generated.h"

/**
 * 
 */
UCLASS()
class ELGEDITORSCRIPTING_API UElgEditorBP_Editor : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	/* Restart the current project and the editor */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Editor")
		static void RestartEditor(const bool bShowWarning);

	/* Switch project to GameOrProjectFileName */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Editor")
		static void SwitchProject(const FString& GameOrProjectFileName, const bool bShowWarning);

	/* Return if the the Process is running or not */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|Editor")
		static bool IsProcessRunning(int32 ProcessId);

	/* Return if the the Process is running or not branch*/
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Editor", meta = (ExpandEnumAsExecs = "Branches"))
		static void IsProcessRunningBranch(int32 ProcessId, EBPEditorOutputBranch& Branches);


#pragma region SlowTask

	/* Begin a SlowTask */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Editor|SlowTask")
		static void BeginSlowTask(const FText Task, bool ShowProgressDialog, bool bShowCancelButton = false);
	
	/* End a SlowTask */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Editor|SlowTask")
		static void EndSlowTask();

	/* Update the status of the SlowTask */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Editor|SlowTask")
		static void StatusUpdate(int32 Numerator, int32 Denominator, const FText StatusText);
	
	/* Update the status of the SlowTask */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Editor|SlowTask")
		static void UpdateProgress(int32 Numerator, int32 Denominator);

	/* Return if the SlowTask has been cancel by the user */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|Editor|SlowTask")
		static bool ReceivedUserCancel();

	/* Return if the SlowTask has been cancel by the user */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Editor|SlowTask", meta=(ExpandEnumAsExecs = "Branches"))
		static void ReceivedUserCancelBranch(EBPEditorOutputBranch& Branches);

#pragma endregion
};
