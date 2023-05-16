// Copyright 2019-2023 ElgSoft. All rights reserved. 
// Elg001.ElgEditorScripting - ElgSoft.com

#include "ElgEditorBP_Editor.h"
#include <UnrealEdMisc.h>
#include "Core\Public\Misc\FeedbackContext.h"
#include "ElgEditorBP_Enum.h"
#include "Runtime/Core/Public/HAL/FileManager.h"
#include "Runtime/Core/Public/Misc/FileHelper.h"
#include "ElgEditorContext_SlowTask.h"



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
		UE_LOG(LogTemp, Warning, TEXT("Can�t find any file called [%s]"), *PathToFile);
		return;
	}
	FFileHelper::LoadFileToStringArray(FileData, *PathToFile);
}

#pragma region SlowTask

void UElgEditorBP_Editor::BeginSlowTask(const FText Task, bool ShowProgressDialog, bool bShowCancelButton /*= false*/)
{
#if WITH_EDITOR	
	const FElgEditorScriptingModule& elgEditorScriptModule = FModuleManager::Get().LoadModuleChecked<FElgEditorScriptingModule>(TEXT("ElgEditorScripting"));
	if (UElgEditorContext_SlowTask* slowTask = elgEditorScriptModule.GetContextManager().GetSlowTaskActive(true)) {
		slowTask->Begin(100.f, Task, ShowProgressDialog, bShowCancelButton);	
	}
	
#endif
}


void UElgEditorBP_Editor::EndSlowTask()
{
#if WITH_EDITOR	
	const FElgEditorScriptingModule& elgEditorScriptModule = FModuleManager::Get().LoadModuleChecked<FElgEditorScriptingModule>(TEXT("ElgEditorScripting"));
	if (UElgEditorContext_SlowTask* slowTask = elgEditorScriptModule.GetContextManager().GetSlowTaskActive(false)) {
		slowTask->End();	
	}
#endif
	
}


void UElgEditorBP_Editor::StatusUpdate(int32 Numerator, int32 Denominator, const FText StatusText)
{
#if WITH_EDITOR	
	const FElgEditorScriptingModule& elgEditorScriptModule = FModuleManager::Get().LoadModuleChecked<FElgEditorScriptingModule>(TEXT("ElgEditorScripting"));
	if (UElgEditorContext_SlowTask* slowTask = elgEditorScriptModule.GetContextManager().GetSlowTaskActive(false)) {
		slowTask->SetTotalAmountOfWork((float)Denominator);
		const float inc = (float)Numerator-slowTask->GetCompletedWork();
		slowTask->EnterProgressFrame(inc, StatusText);
	}
#endif
	
}


void UElgEditorBP_Editor::UpdateProgress(int32 Numerator, int32 Denominator)
{
#if WITH_EDITOR	
	const FElgEditorScriptingModule& elgEditorScriptModule = FModuleManager::Get().LoadModuleChecked<FElgEditorScriptingModule>(TEXT("ElgEditorScripting"));
	if (UElgEditorContext_SlowTask* slowTask = elgEditorScriptModule.GetContextManager().GetSlowTaskActive(false)) {
		slowTask->SetTotalAmountOfWork((float)Denominator);
		const float inc = (float)Numerator-slowTask->GetCompletedWork();
		slowTask->EnterProgressFrame(inc);
	}
#endif
	
}


bool UElgEditorBP_Editor::ReceivedUserCancel()
{
#if WITH_EDITOR	
	const FElgEditorScriptingModule& elgEditorScriptModule = FModuleManager::Get().LoadModuleChecked<FElgEditorScriptingModule>(TEXT("ElgEditorScripting"));
	if (const UElgEditorContext_SlowTask* slowTask = elgEditorScriptModule.GetContextManager().GetSlowTaskActive(false)) {
		return slowTask->ShouldCancel();
	}
#endif
	return false;
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
