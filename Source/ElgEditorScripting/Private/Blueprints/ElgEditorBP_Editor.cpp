// Copyright 2019 ElgSoft. All rights reserved. 
// Elg001.ElgEditorScripting - ElgSoft.com

#include "ElgEditorBP_Editor.h"
#include <UnrealEdMisc.h>
#include "Core\Public\Misc\FeedbackContext.h"
#include "ElgEditorBP_Enum.h"


void UElgEditorBP_Editor::RestartEditor(const bool bShowWarning)
{
	FUnrealEdMisc::Get().RestartEditor(bShowWarning);
}


void UElgEditorBP_Editor::SwitchProject(const FString& GameOrProjectFileName, const bool bShowWarning)
{
	FUnrealEdMisc::Get().SwitchProject(GameOrProjectFileName, bShowWarning);
}



bool UElgEditorBP_Editor::IsProcessRunning(int32 ProcessId)
{
	return FPlatformProcess::IsApplicationRunning(ProcessId);
}


void UElgEditorBP_Editor::IsProcessRunningBranch(int32 ProcessId, EBPEditorOutputBranch& Branches)
{
	if (FPlatformProcess::IsApplicationRunning(ProcessId)) {
		Branches = EBPEditorOutputBranch::outTrue;
	} else{
		Branches = EBPEditorOutputBranch::outFalse;
	}
}


#pragma region SlowTask

void UElgEditorBP_Editor::BeginSlowTask(const FText Task, bool ShowProgressDialog, bool bShowCancelButton /*= false*/)
{
	GWarn->BeginSlowTask(Task, ShowProgressDialog, bShowCancelButton);
}


void UElgEditorBP_Editor::EndSlowTask()
{
	GWarn->EndSlowTask();
}


void UElgEditorBP_Editor::StatusUpdate(int32 Numerator, int32 Denominator, const FText StatusText)
{
	GWarn->StatusUpdate(Numerator, Denominator, StatusText);
}


void UElgEditorBP_Editor::UpdateProgress(int32 Numerator, int32 Denominator)
{
	GWarn->UpdateProgress(Numerator, Denominator);
}


bool UElgEditorBP_Editor::ReceivedUserCancel()
{
	return GWarn->ReceivedUserCancel();
}

void UElgEditorBP_Editor::ReceivedUserCancelBranch(EBPEditorOutputBranch& Branches)
{
	if (ReceivedUserCancel()) {
		Branches = EBPEditorOutputBranch::outTrue;
	} else {
		Branches = EBPEditorOutputBranch::outFalse;
	}
}

#pragma endregion