// Copyright 2019-2020 ElgSoft. All rights reserved. 
// Elg001.ElgEditorScripting - ElgSoft.com

#include "ElgEditorBP_Editor.h"
#include <UnrealEdMisc.h>
#include "Core\Public\Misc\FeedbackContext.h"
#include "ElgEditorBP_Enum.h"
#include "Runtime/Core/Public/HAL/FileManager.h"
#include "Runtime/Core/Public/Misc/FileHelper.h"


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


void UElgEditorBP_Editor::CreateProc(const FString PathToProgram, const FString Parameters, const bool Detach, const bool Hidden, const int32 Priority, const FString OptionalWorkingDirectory, int32& ProcessId)
{
	uint32 processId = 0;
	FProcHandle ProcHandle = FPlatformProcess::CreateProc(*PathToProgram,
		(Parameters != "") ? *Parameters : nullptr, 
		Detach, false, Hidden, &processId, Priority, 
		(OptionalWorkingDirectory != "") ? *OptionalWorkingDirectory : nullptr,
		nullptr);
	ProcessId = processId;
}


void UElgEditorBP_Editor::ReadTextFile(const FString PathToFile, TArray<FString>& FileData)
{
	FileData.Empty();

	if (!IFileManager::Get().FileExists(*PathToFile)) {
		UE_LOG(LogTemp, Warning, TEXT("Can´t find any file called [%s]"), *PathToFile);
		return;
	}
	FFileHelper::LoadFileToStringArray(FileData, *PathToFile);
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