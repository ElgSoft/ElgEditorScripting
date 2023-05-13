// Copyright 2019-2023 ElgSoft. All rights reserved. 
// Elg001.ElgEditorScripting - ElgSoft.com

#include "ElgEditorContext_LevelEditor.h"
#include <GameFramework/Actor.h>
#include <Editor.h>
#include <LevelEditor.h>
#include <EdMode.h>
#include "Framework/Application/SlateApplication.h"
#include <EditorViewportClient.h>
#include <LevelEditorViewport.h>
#include <PhysicsEngine/PhysicsSettings.h>
#include "ElgEditorBP_Enum.h"
#include "SlateCore/Public/Input/Events.h"
#include <EditorModeManager.h>
#include <EditorModeTools.h>


#pragma region Setup

UElgEditorContext_LevelEditor::~UElgEditorContext_LevelEditor()
{
#if WITH_EDITOR
	UE_LOG(LogTemp, Log, TEXT("UElgEditorContext_LevelEditor:: Cleanup"));

	if (!GEditor) return;

	GEditor->OnLevelActorAdded().RemoveAll(this);
	GEditor->OnLevelActorDeleted().RemoveAll(this);

	GEditor->OnLevelActorAttached().RemoveAll(this);
	GEditor->OnLevelActorDetached().RemoveAll(this);

	GEditor->OnActorMoved().RemoveAll(this);

	GEditor->OnWorldAdded().RemoveAll(this);
	GEditor->OnWorldDestroyed().RemoveAll(this);

	FLevelEditorModule& levelEditor = FModuleManager::GetModuleChecked<FLevelEditorModule>(TEXT("LevelEditor"));
	levelEditor.OnActorSelectionChanged().RemoveAll(this);

	FEditorDelegates::OnEditorCameraMoved.RemoveAll(this);

	FEditorDelegates::BeginPIE.RemoveAll(this);
	FEditorDelegates::EndPIE.RemoveAll(this);
	FEditorDelegates::PausePIE.RemoveAll(this);
	FEditorDelegates::ResumePIE.RemoveAll(this);
	FEditorDelegates::BeginStandaloneLocalPlay.RemoveAll(this);
	
	FEditorDelegates::OnMapOpened.RemoveAll(this);
	FEditorDelegates::MapChange.RemoveAll(this);

	FEditorDelegates::OnFocusViewportOnActors.RemoveAll(this);

	FSlateApplication::Get().OnApplicationMousePreInputButtonDownListener().RemoveAll(this);

	FCoreUObjectDelegates::OnObjectPropertyChanged.RemoveAll(this);

	GLevelEditorModeTools().OnEditorModeIDChanged().RemoveAll(this);

#endif // WITH_EDITOR
}


void UElgEditorContext_LevelEditor::Setup()
{
#if WITH_EDITOR
	if (!GEditor) {
		UE_LOG(LogTemp, Error, TEXT("UElgEditorContext_LevelEditor::Setup() Failed to get a valid GEditor, this is a showstopper!!"));
		return;
	}

	GEditor->OnLevelActorAdded().AddUObject(this, &UElgEditorContext_LevelEditor::HandleOnLevelActorAddedNative);
	GEditor->OnLevelActorDeleted().AddUObject(this, &UElgEditorContext_LevelEditor::HandleOnLevelActorDeletedNative);

	GEditor->OnLevelActorAttached().AddUObject(this, &UElgEditorContext_LevelEditor::HandleOnLevelActorAttached);
	GEditor->OnLevelActorDetached().AddUObject(this, &UElgEditorContext_LevelEditor::HandleOnLevelActorDetached);

	GEditor->OnActorMoved().AddUObject(this, &UElgEditorContext_LevelEditor::HandleOnActorMoved);

	GEditor->OnWorldAdded().AddUObject(this, &UElgEditorContext_LevelEditor::HandleOnWorldAdded);
	GEditor->OnWorldDestroyed().AddUObject(this, &UElgEditorContext_LevelEditor::HandleOnWorldDestroyed);

	FLevelEditorModule& levelEditor = FModuleManager::GetModuleChecked<FLevelEditorModule>(TEXT("LevelEditor"));
	levelEditor.OnActorSelectionChanged().AddUObject(this, &UElgEditorContext_LevelEditor::HandleOnActorSelectionChanged);
	FEditorDelegates::OnEditorCameraMoved.AddUObject(this, &UElgEditorContext_LevelEditor::HandleOnEditorCameraMoved);

	FEditorDelegates::BeginPIE.AddUObject(this, &UElgEditorContext_LevelEditor::HandleBeginPIE);
	FEditorDelegates::EndPIE.AddUObject(this, &UElgEditorContext_LevelEditor::HandleEndPIE);
	FEditorDelegates::PausePIE.AddUObject(this, &UElgEditorContext_LevelEditor::HandlePausePIE);
	FEditorDelegates::ResumePIE.AddUObject(this, &UElgEditorContext_LevelEditor::HandleResumePIE);
	FEditorDelegates::BeginStandaloneLocalPlay.AddUObject(this, &UElgEditorContext_LevelEditor::HandleBeginStandaloneLocalPlay);

	FEditorDelegates::OnMapOpened.AddUObject(this, &UElgEditorContext_LevelEditor::HandleOnMapOpened);
	FEditorDelegates::MapChange.AddUObject(this, &UElgEditorContext_LevelEditor::HandleMapChange);

	FEditorDelegates::OnFocusViewportOnActors.AddUObject(this, &UElgEditorContext_LevelEditor::HandleOnFocusViewportOnActors);

	GLevelEditorModeTools().OnEditorModeIDChanged().AddUObject(this, &UElgEditorContext_LevelEditor::HandleEditorModeChange);

	FSlateApplication::Get().OnApplicationMousePreInputButtonDownListener().AddUObject(this, &UElgEditorContext_LevelEditor::HandleOnApplicationMousePreInputButtonDown);
	FSlateApplication::Get().OnApplicationPreInputKeyDownListener().AddUObject(this, &UElgEditorContext_LevelEditor::HandleOnApplicationPreInputKeyDown);

	FCoreUObjectDelegates::OnObjectPropertyChanged.AddUObject(this, &UElgEditorContext_LevelEditor::HandleOnObjectPropertyChanged);


#endif // WITH_EDITOR
}

#pragma endregion

#pragma region HandleLevelActorEvents

void UElgEditorContext_LevelEditor::HandleOnLevelActorAddedNative(AActor* InActor)
{
	// placed in the world and not added by the drag and drop
	if (InActor->HasAnyFlags(RF_Transactional)) {
		OnLevelActorAdded.Broadcast(InActor);
	}
	OnLevelActorAddedNative.Broadcast(InActor);
}


void UElgEditorContext_LevelEditor::HandleOnLevelActorDeletedNative(AActor* InActor)
{
	// placed actor in the level has been deleted
	if (InActor->HasAnyFlags(RF_Transactional)) {
		OnLevelActorDeleted.Broadcast(InActor);
	}
	OnLevelActorDeletedNative.Broadcast(InActor);
}



void UElgEditorContext_LevelEditor::HandleOnLevelActorAttached(AActor* InActor, const AActor* InParent)
{
	OnLevelActorAttached.Broadcast(InActor, InParent);
}

void UElgEditorContext_LevelEditor::HandleOnLevelActorDetached(AActor* InActor, const AActor* InParent)
{
	OnLevelActorDetached.Broadcast(InActor, InParent);
}


void UElgEditorContext_LevelEditor::HandleOnActorMoved(AActor* InActor)
{
	OnActorMoved.Broadcast(InActor);
}


void UElgEditorContext_LevelEditor::HandleOnActorSelectionChanged(const TArray<UObject*>& NewSelection, bool bForceRefresh)
{
	OnActorSelectionChanged.Broadcast(NewSelection);

	for (UObject* object : NewSelection) {
		bool found = false;
		for (UObject* oldObject : OldActorSelection) {
			if (object == oldObject) {
				found = true;
				OldActorSelection.Remove(object); // object is still selected so we can ignore it!
				break;
			}
		}
		if (!found) {
			OnActorSelected.Broadcast(object);  // new selection so let the world know about it!
		}
	}

	// if there still are old objects they are no longer selected so broadcast it
	if (OldActorSelection.Num() > 0) {
		for (UObject* object : OldActorSelection) {
			OnActorDeselected.Broadcast(object);
		}
	}

	OldActorSelection = NewSelection;
}

#pragma endregion

#pragma region HandleWorldEvents

void UElgEditorContext_LevelEditor::HandleOnWorldAdded(UWorld* InWorld)
{
	OnWorldAdded.Broadcast(InWorld);
}


void UElgEditorContext_LevelEditor::HandleOnWorldDestroyed(UWorld* InWorld)
{
	OnWorldDestroyed.Broadcast(InWorld);
}

#pragma endregion

#pragma region MiscEditorEvents

void UElgEditorContext_LevelEditor::HandleEditorModeEnter(const FEditorModeID& ModeID)
{	
	FText oldName = CurrentEditorMode;
	// not all modes has a FEdMode, like Select and Fracture mode. so for them use the FEditorNodeID instead
	FEdMode* mode = GLevelEditorModeTools().GetActiveMode(ModeID);
	if (mode != nullptr) {
		CurrentEditorMode = FText::FromString(mode->GetModeInfo().Name.ToString());		
	} else {
		CurrentEditorMode = FText::FromString(ModeID.ToString());
	}

	OnEnterMode.Broadcast(CurrentEditorMode);
	if (!oldName.EqualTo(CurrentEditorMode)) {
		OnEditorModeChanged.Broadcast(CurrentEditorMode);
	}
}

void UElgEditorContext_LevelEditor::HandleEditorModeExit(const FEditorModeID& ModeID)
{
	// not all modes has a FEdMode, like Select and Fracture mode. so for them use the FEditorNodeID instead
	FEdMode* mode = GLevelEditorModeTools().GetActiveMode(ModeID);
	if (mode == nullptr) {
		OnExitMode.Broadcast(CurrentEditorMode);
	} else {
		OnExitMode.Broadcast(mode->GetModeInfo().Name);
	}	
}


void UElgEditorContext_LevelEditor::HandleEditorModeChange(const FEditorModeID& InModeID, bool bIsEnteringMode)
{
	if (bIsEnteringMode) {
		HandleEditorModeEnter(InModeID);
	} else {
		HandleEditorModeExit(InModeID);
	}
}

void UElgEditorContext_LevelEditor::HandleOnEditorCameraMoved(const FVector& InPosition, const FRotator& InRotation, ELevelViewportType ViewportType, int32 ViewIndex)
{
	OnEditorCameraMoved.Broadcast(InPosition, InRotation);
}

void UElgEditorContext_LevelEditor::HandleOnFocusViewportOnActors(const TArray<AActor*>& InActors)
{
	OnFocusViewportOnActors.Broadcast(InActors);
}


#pragma endregion

#pragma region PIE

void UElgEditorContext_LevelEditor::HandleBeginPIE(const bool bIsSimulating)
{
	bIsInPIE = true;
	bIsSimulatingPIE = bIsSimulating;
	OnBeginPIE.Broadcast(bIsSimulating);
}

void UElgEditorContext_LevelEditor::HandleEndPIE(const bool bIsSimulating)
{
	bIsInPIE = false;
	bIsSimulatingPIE = bIsSimulating;
	OnEndPIE.Broadcast(bIsSimulating);
}

void UElgEditorContext_LevelEditor::HandlePausePIE(const bool bIsSimulating)
{
	OnPausePIE.Broadcast(bIsSimulating);
}

void UElgEditorContext_LevelEditor::HandleResumePIE(const bool bIsSimulating)
{
	OnResumePIE.Broadcast(bIsSimulating);
}


void UElgEditorContext_LevelEditor::HandleBeginStandaloneLocalPlay(const uint32 InProcessID)
{
	OnBeginStandaloneLocalPlay.Broadcast(InProcessID);
}

#pragma endregion

#pragma region Map

void UElgEditorContext_LevelEditor::HandleOnMapOpened(const FString& Filename, bool bAsTemplate)
{
	OnMapOpened.Broadcast(Filename, bAsTemplate);
}

void UElgEditorContext_LevelEditor::HandleMapChange(uint32 MapChangeFlags)
{
	OnMapChanged.Broadcast(MapChangeFlags);
}

#pragma endregion

#pragma region OnMouseClick

void UElgEditorContext_LevelEditor::HandleOnApplicationMousePreInputButtonDown(const FPointerEvent& Event)
{
	// We only care about the click if the Level Editor is in focus, if not skip it all 
	if (!HasFocus()) return;

	bool Shift = Event.IsShiftDown();
	bool Ctrl = Event.IsControlDown();
	bool Alt = Event.IsAltDown();

	// check what mouse button that was pressed.
	const FKey mouseButton = Event.GetEffectingButton();
	FName name = mouseButton.GetFName();
	if (name == "LeftMouseButton") {
		OnLeftMouseClick.Broadcast(Shift, Ctrl, Alt);
	}
	else if ((name == "MiddleMouseButton")) {
		OnMiddleMouseClick.Broadcast(Shift, Ctrl, Alt);
	}
	else if ((name == "RightMouseButton")) {
		OnRightMouseClick.Broadcast(Shift, Ctrl, Alt);
	}
}


#pragma endregion

#pragma region OnInputKey

void UElgEditorContext_LevelEditor::HandleOnApplicationPreInputKeyDown(const FKeyEvent& KeyEvent)
{
	// We only care about the input if the Level Editor is in focus, if not skip it all 
	if (!HasFocus()) return;
	OnInputKey.Broadcast(KeyEvent);
}

#pragma endregion

#pragma region MousePosition/TraceNodes

void UElgEditorContext_LevelEditor::GetMousePosition(bool& Success, FVector2D& Pos)
{
	Success = false;
	Pos = FVector2D(-1, -1);
	if (GCurrentLevelEditingViewportClient == nullptr) return;

	if (HasFocus()) {
		FViewportCursorLocation cursor = GCurrentLevelEditingViewportClient->GetCursorWorldLocationFromMousePos();
		FIntPoint pos = cursor.GetCursorPos();
		Pos.X = pos.X;
		Pos.Y = pos.Y;
		Success = true;
	}
}


void UElgEditorContext_LevelEditor::GetMousePositionWorld(const bool ShowTrace, bool& Success, FVector& WorldPos)
{
	FHitResult Hit;
	LineTrace(false, ShowTrace, TArray<AActor*>(), Success, Hit);

	if (Success) {
		WorldPos = Hit.Location;
	} else {
		WorldPos = FVector(0, 0, 0);
	}
}


void UElgEditorContext_LevelEditor::GetMousePositionWorldBranch(const bool ShowTrace, FVector& WorldPos, EBPEditorOutputValidBranch& Branches)
{
	bool success;
	GetMousePositionWorld(ShowTrace, success, WorldPos);
	if (success) {
		Branches = EBPEditorOutputValidBranch::Valid;
	}
	else {
		Branches = EBPEditorOutputValidBranch::Invalid;
	}

}


void UElgEditorContext_LevelEditor::GetActorUnderMouse(const bool ShowTrace, bool& Success, AActor*& Actor)
{
	FHitResult Hit;
	LineTrace(false, ShowTrace, TArray<AActor*>(), Success, Hit);

	if (Success) {
		Actor = Hit.GetActor();
	}
	else {
		Actor = nullptr;
	}
}


void UElgEditorContext_LevelEditor::GetActorUnderMouseBranch(const bool ShowTrace, AActor*& Actor, EBPEditorOutputValidBranch& Branches)
{	
	bool success;
	GetActorUnderMouse(ShowTrace, success, Actor);
	if (success) {
		Branches = EBPEditorOutputValidBranch::Valid;
	} else {
		Branches = EBPEditorOutputValidBranch::Invalid;
	}
}


void UElgEditorContext_LevelEditor::LineTrace(bool bTraceComplex, bool bShowTrace, const TArray<AActor*>& ActorsToIgnore, bool& Success, FHitResult& Hit)
{
	Success = false;
	if (GCurrentLevelEditingViewportClient == nullptr || GWorld == nullptr || !HasFocus()) return;

	FViewportCursorLocation cursorLocation = GCurrentLevelEditingViewportClient->GetCursorWorldLocationFromMousePos();
	FVector lineCheckStart = cursorLocation.GetOrigin();
	FVector lineCheckEnd = cursorLocation.GetOrigin() + cursorLocation.GetDirection() * HALF_WORLD_MAX;

	static const FName lineTraceSingleName(TEXT("LevelEditorLineTrace"));
	if (bShowTrace) {
		GWorld->DebugDrawTraceTag = lineTraceSingleName;
	}
	FCollisionQueryParams collisionParams(lineTraceSingleName);
	collisionParams.bTraceComplex = bTraceComplex;
	collisionParams.bReturnPhysicalMaterial = true;
	collisionParams.bReturnFaceIndex = !UPhysicsSettings::Get()->bSuppressFaceRemapTable; // Ask for face index, as long as we didn't disable globally
	collisionParams.AddIgnoredActors(ActorsToIgnore);

	FCollisionObjectQueryParams objectParams = FCollisionObjectQueryParams(ECC_WorldStatic);
	objectParams.AddObjectTypesToQuery(ECC_WorldDynamic);
	objectParams.AddObjectTypesToQuery(ECC_Pawn);
	objectParams.AddObjectTypesToQuery(ECC_Visibility);

	if (GWorld->LineTraceSingleByObjectType(Hit, lineCheckStart, lineCheckEnd, objectParams, collisionParams))
	{
		Success = true;
	}
}

#pragma endregion

#pragma region EditorStatesNodes

bool UElgEditorContext_LevelEditor::HasFocus()
{
	if (GCurrentLevelEditingViewportClient == nullptr) return false;

	return GCurrentLevelEditingViewportClient->Viewport->HasFocus();
}


void UElgEditorContext_LevelEditor::HasFocusBranch(EBPEditorOutputBranch& Branches)
{
	if (HasFocus()) {
		Branches = EBPEditorOutputBranch::outTrue;
	} else {
		Branches = EBPEditorOutputBranch::outFalse;
	}
}


FText UElgEditorContext_LevelEditor::GetEditorMode()
{
	return CurrentEditorMode;
}


void UElgEditorContext_LevelEditor::IsInPIE(bool& Pie, bool& Simulation)
{
	Pie = bIsInPIE;
	Simulation = bIsSimulatingPIE;
}


void UElgEditorContext_LevelEditor::IsInPIEBranch(bool& InSimulation, EBPEditorOutputBranch& Branches)
{
	bool inPIE;
	IsInPIE(inPIE, InSimulation);
	if (inPIE) {
		Branches = EBPEditorOutputBranch::outTrue;
	} else {
		Branches = EBPEditorOutputBranch::outFalse;
	}
}


void UElgEditorContext_LevelEditor::IsInEditor(bool& InEditor)
{
	InEditor = !bIsInPIE;
}


void UElgEditorContext_LevelEditor::IsInEditorBranch(EBPEditorOutputBranch& Branches)
{
	if (!bIsInPIE) {
		Branches = EBPEditorOutputBranch::outTrue;
	} else {
		Branches = EBPEditorOutputBranch::outFalse;
	}
}

#pragma endregion

#pragma region ViewportRealtime

bool UElgEditorContext_LevelEditor::IsViewportRealtime()
{
	if (GCurrentLevelEditingViewportClient == nullptr) return false;

	return GCurrentLevelEditingViewportClient->IsRealtime();
}


void UElgEditorContext_LevelEditor::IsViewportRealtimeBranch(EBPEditorOutputBranch& Branches)
{
	if (IsViewportRealtime()) {
		Branches = EBPEditorOutputBranch::outTrue;
	}
	else {
		Branches = EBPEditorOutputBranch::outFalse;
	}
}


void UElgEditorContext_LevelEditor::SetViewportRealtime(bool bInRealtime)
{
	if (GCurrentLevelEditingViewportClient == nullptr) return;
	GCurrentLevelEditingViewportClient->SetRealtime(bInRealtime); 
}


void UElgEditorContext_LevelEditor::SetViewportRealtimeOverride(bool bInRealtime, FText SystemDisplayName)
{
	if (GCurrentLevelEditingViewportClient == nullptr) return;
	GCurrentLevelEditingViewportClient->AddRealtimeOverride(bInRealtime, SystemDisplayName);

}

void UElgEditorContext_LevelEditor::RestoreViewportRealtime(FText SystemDisplayName)
{
	if (GCurrentLevelEditingViewportClient == nullptr) return;
	GCurrentLevelEditingViewportClient->RemoveRealtimeOverride(SystemDisplayName, false);
}

#pragma endregion

#pragma region OnPropertyChanged

void UElgEditorContext_LevelEditor::HandleOnObjectPropertyChanged(UObject* InObject, struct FPropertyChangedEvent& InPropertyChangedEvent)
{
	AActor* levelActor = nullptr;
	FName propertyName = FName::FName();
	if (InPropertyChangedEvent.Property != nullptr) {
		propertyName = InPropertyChangedEvent.GetPropertyName();

		levelActor = Cast<AActor>(InObject);
		if (!levelActor) {
			if (UActorComponent* comp = Cast<UActorComponent>(InObject)) {
				levelActor = comp->GetOwner();
			}
		}

		if (levelActor) {
			OnLevelActorPropertyChanged.Broadcast(levelActor, propertyName, InObject);
		}
	}
}

#pragma endregion


#pragma region ViewportCamera

void UElgEditorContext_LevelEditor::MoveViewportCameraToActor(AActor* Actor, bool bActiveViewportOnly)
{
	if (Actor == nullptr) return;
	if (GEngine == nullptr)  return;
	UEditorEngine* editor = (UEditorEngine*)GEngine;
	if (editor == nullptr) return;

	editor->MoveViewportCamerasToActor(*Actor, bActiveViewportOnly);
}


void UElgEditorContext_LevelEditor::MoveViewportCameraAndLookAt(const FVector& NewLocation, const FVector& LookAtLocation)
{
	if (GEngine == nullptr)  return;
	UEditorEngine* editor = (UEditorEngine*)GEngine;
	if (editor == nullptr) return;

	SetViewportCameraLocation(NewLocation);
	SetViewportCameraLookAt(LookAtLocation);

}


void UElgEditorContext_LevelEditor::SetViewportCamera(const FVector& NewLocation, const FRotator& NewRotation)
{
	if (GEngine == nullptr)  return;
	UEditorEngine* editor = (UEditorEngine*)GEngine;
	if (editor == nullptr) return;

	for (FLevelEditorViewportClient* ViewportClient : editor->GetLevelViewportClients())
	{
		if (ViewportClient->IsPerspective())
		{
			ViewportClient->SetViewLocation(NewLocation);
			ViewportClient->SetViewRotation(NewRotation);
			ViewportClient->Invalidate();
		}
	}
}


void UElgEditorContext_LevelEditor::SetViewportCameraLocation(const FVector& NewLocation)
{
	if (GEngine == nullptr)  return;
	UEditorEngine* editor = (UEditorEngine*)GEngine;
	if (editor == nullptr) return;

	for (FLevelEditorViewportClient* ViewportClient : editor->GetLevelViewportClients())
	{
		if (ViewportClient->IsPerspective())
		{
			ViewportClient->SetViewLocation(NewLocation);
			ViewportClient->Invalidate();
		}
	}
}


void UElgEditorContext_LevelEditor::SetViewportCameraRotation(const FRotator& NewRotation)
{
	if (GEngine == nullptr)  return;
	UEditorEngine* editor = (UEditorEngine*)GEngine;
	if (editor == nullptr) return;

	for (FLevelEditorViewportClient* ViewportClient : editor->GetLevelViewportClients())
	{
		if (ViewportClient->IsPerspective())
		{
			ViewportClient->SetViewRotation(NewRotation);
			ViewportClient->Invalidate();
		}
	}
}


void UElgEditorContext_LevelEditor::FocusViewportCameraOnBox(const FBox& BoundingBox, bool bInstant /*= false*/)
{
	if (GEngine == nullptr)  return;
	UEditorEngine* editor = (UEditorEngine*)GEngine;
	if (editor == nullptr) return;

	for (FLevelEditorViewportClient* ViewportClient : editor->GetLevelViewportClients())
	{
		if (ViewportClient->IsPerspective())
		{
			ViewportClient->FocusViewportOnBox(BoundingBox, bInstant);
		}
	}
}


void UElgEditorContext_LevelEditor::SetViewportCameraLookAt(const FVector& LookAt, bool bRecalculateView /*= true*/)
{
	if (GEngine == nullptr)  return;
	UEditorEngine* editor = (UEditorEngine*)GEngine;
	if (editor == nullptr) return;

	for (FLevelEditorViewportClient* ViewportClient : editor->GetLevelViewportClients())
	{
		if (ViewportClient->IsPerspective())
		{
			ViewportClient->SetLookAtLocation(LookAt, bRecalculateView);
		}
	}
}


void UElgEditorContext_LevelEditor::GetViewportPerspectiveLocation(FVector& CameraLocation, FVector& CameraLookAt)
{
	if (GEngine == nullptr)  return;
	UEditorEngine* editor = (UEditorEngine*)GEngine;
	if (editor == nullptr) return;

	for (FLevelEditorViewportClient* ViewportClient : editor->GetLevelViewportClients())
	{
		if (ViewportClient->IsPerspective())
		{
			CameraLocation = ViewportClient->GetViewLocation();
			CameraLookAt = ViewportClient->GetLookAtLocation();
		}
	}
}

#pragma endregion