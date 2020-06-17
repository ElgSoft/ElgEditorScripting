// Copyright 2019 ElgSoft. All rights reserved. 
// Elg001.ElgEditorScripting - ElgSoft.com

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include <Editor/UnrealEdTypes.h>
#include <Kismet/KismetSystemLibrary.h>
#include "ElgEditorBP_Enum.h"
#include "SlateCore/Public/Input/Events.h"
#include "ElgEditorContext_LevelEditor.generated.h"


class AActor;
class UObject;
class FEdMode;
struct FPointerEvent;
struct FKeyEvent;
class FName;
typedef FName FEditorModeID;


#pragma region Delegates

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FElgEditorEventsOnLevelActorAddedSignature, AActor*, ActorAdded);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FElgEditorEventsOnLevelActorAddedNativeSignature, AActor*, ActorAdded);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FElgEditorEventsOnLevelActorDeletedSignature, AActor*, Actor);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FElgEditorEventsOnLevelActorDeletedNativeSignature, AActor*, Actor);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FElgEditorEventsOnLevelActorAttachedSignature, AActor*, Actor, const AActor*, Parent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FElgEditorEventsOnLevelActorDetachedSignature, AActor*, Actor, const AActor*, Parent);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FElgEditorEventsOnActorMovedSignature, AActor*, Actor);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FElgEditorEventsOnWorldAddedSignature, UWorld*, World);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FElgEditorEventsOnWorldDestroyedSignature, UWorld*, World);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FElgEditorEventsOnActorSelectionChangedSignature, const TArray<UObject*>&, NewSelection);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FElgEditorEventsOnActorSelectedSignature, UObject*, Object);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FElgEditorEventsOnActorDeselectedSignature, UObject*, Object);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FElgEditorEventsOnEditorCameraMovedSignature, const FVector&, Position, const FRotator&, Rotation);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FElgEditorEventsBeginPIESignature, const bool, bIsSimulating);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FElgEditorEventsBeginStandaloneLocalPlaySignature, const int32, ProcessID);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FElgEditorEventsOnMapOpenedSignature, const FString&, Filename, bool, bAsTemplate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FElgEditorEventsMapChangeSignature, const int32, MapChangeFlags);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FElgEditorEventsOnFocusViewportOnActorsSignature, const TArray<AActor*>&, Actors);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FElgEditorEventsOnEditorModeSignature, const FText&, ModeName);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FElgEditorEventsOnMouseClickSignature, const bool, ShiftIsPressed, const bool, CtrlIsPressed, const bool, AltIsPressed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FElgEditorEventsOnInputKeySignature, const FKeyEvent&, KeyEvent);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FElgEditorEventsOnObjectPropertyChangedSignature, AActor*, LevelActor, const FName&, PropertyName, UObject*, PropertyObject);

#pragma endregion


/**
 * 
 */
UCLASS(Blueprintable)
class ELGEDITORSCRIPTING_API UElgEditorContext_LevelEditor : public UObject
{
	GENERATED_BODY()

public:

#pragma region Setup

	virtual ~UElgEditorContext_LevelEditor();

	void Setup();

#pragma endregion

#pragma region OnActorAdded

	/* 
		Event when an Actor is added.
		Actors that are drag and dropped will generate at least two events... 
		one for the temp actor and another when its placed in the world.
		
		Use OnLevelActorAdded to only get events when an actor is placed in the level.
	*/
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnLevelActorAddedNativeSignature OnLevelActorAddedNative;

	void HandleOnLevelActorAddedNative(AActor* InActor);

	/* Event when an Actor is added (placed) to the level. */
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnLevelActorAddedSignature OnLevelActorAdded;

#pragma endregion

#pragma region OnActorDeleted

	void HandleOnLevelActorDeletedNative(AActor* InActor);

	/* Event when an Actor is deleted*/
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnLevelActorDeletedNativeSignature OnLevelActorDeletedNative;
	
	/* Event when an placed Actor is deleted from the level. */
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnLevelActorDeletedSignature OnLevelActorDeleted;
#pragma endregion

#pragma region OnActorAttached

	/* Event when an Actor is added to the level. */
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnLevelActorAttachedSignature OnLevelActorAttached;

	void HandleOnLevelActorAttached(AActor* InActor, const AActor* InParent);

#pragma endregion

#pragma region OnActorDetached

	/* Event when an Actor is added to the level. */
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnLevelActorDetachedSignature OnLevelActorDetached;

		void HandleOnLevelActorDetached(AActor* InActor, const AActor* InParent);

#pragma endregion

#pragma region OnActorMoved

	/* Event when an Actor is moved in the level. */
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnActorMovedSignature OnActorMoved;

	void HandleOnActorMoved(AActor* InActor);

#pragma endregion	

#pragma region OnWorldAdded

	/* Event when a world is added */
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnWorldAddedSignature OnWorldAdded;

	void HandleOnWorldAdded(UWorld* InWorld);

#pragma endregion	

#pragma region OnWorldDestroyed

	/* Event when World is destroyed */
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnWorldDestroyedSignature OnWorldDestroyed;

	void HandleOnWorldDestroyed(UWorld* InWorld);

#pragma endregion	

#pragma region OnActorSelection

	/* Event when the selection in the level editor is changed. */
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnActorSelectionChangedSignature OnActorSelectionChanged;

	/* Event when a actor is selected. */
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnActorSelectedSignature OnActorSelected;

	/* Event when a actor is deselected. */
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnActorDeselectedSignature OnActorDeselected;

	void HandleOnActorSelectionChanged(const TArray<UObject*>& NewSelection, bool bForceRefresh);

	UPROPERTY()
		TArray<UObject*> OldActorSelection;

#pragma endregion	

#pragma region OnEditorCameraMoved

	/* Event when the camera is moved in the editor */
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnEditorCameraMovedSignature OnEditorCameraMoved;

	void HandleOnEditorCameraMoved(const FVector& InPosition, const FRotator& InRotation, ELevelViewportType ViewportType, int32 ViewIndex);

#pragma endregion	

#pragma region OnFocusViewportOnActors

	/* Event when the level editor is focus on some actors */
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnFocusViewportOnActorsSignature OnFocusViewportOnActors;

	void HandleOnFocusViewportOnActors(const TArray<AActor*>& InActors);

#pragma endregion	
	
#pragma region OnPIE

	UPROPERTY()
		bool bIsInPIE = false;
	UPROPERTY()
		bool bIsSimulatingPIE = false;

	/** Event when a PIE session is beginning (but hasn't actually started yet) */
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsBeginPIESignature OnBeginPIE;

	void HandleBeginPIE(const bool bIsSimulating);

	/** Event when a PIE session is ending */
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsBeginPIESignature OnEndPIE;

	void HandleEndPIE(const bool bIsSimulating);

	/** Event when a PIE session is paused */
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsBeginPIESignature OnPausePIE;

	void HandlePausePIE(const bool bIsSimulating);

	/** Event when a PIE session is resumed */
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsBeginPIESignature OnResumePIE;

	void HandleResumePIE(const bool bIsSimulating);

	/** Event for when a standalone local play start */
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsBeginStandaloneLocalPlaySignature OnBeginStandaloneLocalPlay;

	void HandleBeginStandaloneLocalPlay(const uint32 InProcessID);
	

#pragma endregion	

#pragma region Map

	/** Event for when a map is opened */
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnMapOpenedSignature OnMapOpened;

	void HandleOnMapOpened(const FString& Filename, bool bAsTemplate);

	/** Event for when a map is changed, 
		1 = MapChangeFlags::NewMap
		2 = MapChangeFlags::MapRebuild
		3 = MapChangeFlags::WorldTornDown
	*/
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsMapChangeSignature OnMapChanged;

	void HandleMapChange(uint32 MapChangeFlags);

#pragma endregion	

#pragma region EditorMode

	UPROPERTY()
		FText CurrentEditorMode;

	/** Event when enter a Editor Mode */
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnEditorModeSignature OnEnterMode;

	void HandleEditorModeEnter(const FEditorModeID& ModeID);

	/** Event when exit a Editor Mode */
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnEditorModeSignature OnExitMode;

	void HandleEditorModeExit(const FEditorModeID& ModeID);

	/* Event when the Editor Mode change */
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnEditorModeSignature OnEditorModeChanged;

#pragma endregion
	
#pragma region OnMouseClick

	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnMouseClickSignature OnLeftMouseClick;
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnMouseClickSignature OnMiddleMouseClick;
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnMouseClickSignature OnRightMouseClick;

	void HandleOnApplicationMousePreInputButtonDown(const FPointerEvent& Event);

#pragma endregion

#pragma region OnInputKey

	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnInputKeySignature OnInputKey;

	void HandleOnApplicationPreInputKeyDown(const FKeyEvent& KeyEvent);

#pragma endregion

#pragma region MousePosition/TraceNodes
	/* 
		Return the position of the mouse in the Level Editor Viewport.
		If the Level editor not are in focus it will return false.
	*/
	UFUNCTION(BlueprintPure, Category = "ElgEditor|LevelEditor")
		void GetMousePosition(bool& Success, FVector2D& Pos);

	/* 
		Return the world position of the mouse in the Level Editor Viewport.
		Does a line trace from the camera to the mouse pointer.
		If nothing in the world is hit it will return false.
	*/
	UFUNCTION(BlueprintPure, Category = "ElgEditor|LevelEditor")
		void GetMousePositionWorld(const bool ShowTrace, bool& Success, FVector& WorldPos);

	/*
		Return the world position of the mouse in the Level Editor Viewport with branch pins.
		Does a line trace from the camera to the mouse pointer.
		If nothing in the world is hit it will return false.
	*/
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|LevelEditor", meta = (ExpandEnumAsExecs = "Branches"))
		void GetMousePositionWorldBranch(const bool ShowTrace, FVector& WorldPos, EBPEditorOutputValidBranch& Branches);

	/*
		Return the actor under the mouse in the Level Editor Viewport.
		Does a line trace from the camera to the mouse pointer.
		If nothing in the world is hit it will return false.
	*/
	UFUNCTION(BlueprintPure, Category = "ElgEditor|LevelEditor")
		void GetActorUnderMouse(const bool ShowTrace, bool& Success, AActor*& Actor);
	/*
		Return the actor under the mouse in the Level Editor Viewport with branch Pins.
		Does a line trace from the camera to the mouse pointer.
		If nothing in the world is hit it will return false.
	*/
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|LevelEditor", meta = (ExpandEnumAsExecs = "Branches"))
		void GetActorUnderMouseBranch(const bool ShowTrace, AActor*& Actor, EBPEditorOutputValidBranch& Branches);

	/**
	 * Does a collision trace from the Editor camera to the mouse position and returns the first hit encountered.
	 * This only finds objects that are of a type specified by ObjectTypes.
	 *
	 * @param bTraceComplex	True to test against complex collision, false to test against simplified collision.
	 * @param bShowTrace		True to show the trace in the editor.
	 * @param Success		True if there was a hit, false otherwise.
	 * @param OutHit		Properties of the trace hit.
	 */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|LevelEditor", meta=(AdvancedDisplay = "bTraceComplex, ActorsToIgnore"))
		void LineTrace(bool bTraceComplex, bool bShowTrace, const TArray<AActor*>& ActorsToIgnore, bool& Success, FHitResult& Hit);

#pragma endregion

#pragma region EditorStatesNodes

	/* Return if a Level Editor viewport is in focus or not */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|LevelEditor")
		bool HasFocus();

	/* Return if a Level Editor viewport is in focus or not with branch pins*/
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|LevelEditor", meta = (ExpandEnumAsExecs = "Branches"))
		void HasFocusBranch(EBPEditorOutputBranch& Branches);

	/* Return the name of the selected EditorMode */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|LevelEditor")
		FText GetEditorMode();

	/* Return if we currently are in PIE/Simulation or not */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|LevelEditor")
		void IsInPIE(bool& InPie, bool& InSimulation);

	/* Return if we currently are in PIE/Simulation or not */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|LevelEditor", meta = (ExpandEnumAsExecs = "Branches"))
		void IsInPIEBranch(bool& InSimulation, EBPEditorOutputBranch& Branches);

	/* Return if we currently are in Editor and not PIE/Simulation */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|LevelEditor")
		void IsInEditor(bool& InEditor);

	/* Return if we currently are in Editor and not PIE/Simulation */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|LevelEditor", meta = (ExpandEnumAsExecs = "Branches"))
		void IsInEditorBranch(EBPEditorOutputBranch& Branches);

#pragma endregion

#pragma region ViewportRealtime

	/* Return if the current viewport is rendering in real time or not */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|LevelEditor")
		bool IsViewportRealtime();

	/*  Return if the current viewport is rendering in real time or not with branch pins */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|LevelEditor", meta = (ExpandEnumAsExecs = "Branches"))
		void IsViewportRealtimeBranch(EBPEditorOutputBranch& Branches);

	/* Sets whether or not the viewport updates in real time.
		No longer takes bStoreCurrentValue
	*/
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|LevelEditor")
		void SetViewportRealtime(bool bInRealtime);
	
	/* 
	 * Overrides the realtime state of this viewport until RemoveViewportsRealtimeOverride is called.
	 * The state of this override is not preserved between editor sessions.
	 *
	 * @param bInRealtime	If true, this viewport will be realtime, if false this viewport will not be realtime
	 * @param SystemDisplayName	This display name of whatever system is overriding realtime. This name is displayed to users in the viewport options menu
	*/
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|LevelEditor")
		void SetViewportRealtimeOverride(bool bInRealtime, FText SystemDisplayName);
	
	/* Removes the current realtime override.  If there was another realtime override set it will restore that override
	*/
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|LevelEditor")
		void RestoreViewportRealtime();


#pragma endregion

#pragma region OnPropertyChanged

	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnObjectPropertyChangedSignature OnLevelActorPropertyChanged;

	void HandleOnObjectPropertyChanged(UObject* InObject, struct FPropertyChangedEvent& InPropertyChangedEvent);

#pragma endregion


#pragma region ViewportCamera

	/* Move the camera to the actor */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Leveleditor")
		void MoveViewportCameraToActor(AActor* Actor, bool bActiveViewportOnly = false);

	/* Move the camera and look at a location */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Leveleditor")
		void MoveViewportCameraAndLookAt(const FVector& NewLocation, const FVector& LookAtLocation);

	/** Sets the location and rotation of the viewport's camera */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Leveleditor")
		void SetViewportCamera(const FVector& NewLocation, const FRotator& NewRotation);

	/** Sets the location of the viewport's camera */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Leveleditor")
		void SetViewportCameraLocation(const FVector& NewLocation);

	/** Sets the rotation of the viewport's camera */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Leveleditor")
		void SetViewportCameraRotation(const FRotator& NewRotation);

	/**
	 * Focuses the viewport to the center of the bounding box ensuring that the entire box is in view
	 *
	 * @param BoundingBox			The box to focus
	 * @param bInstant			Whether or not to focus the viewport instantly or over time
	 */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Leveleditor")
		void FocusViewportCameraOnBox(const FBox& BoundingBox, bool bInstant = false);

	/**
	 * Sets the look at location of the viewport's camera for orbit *
	 *
	 * @param LookAt The new look at location
	 * @param bRecalulateView	If true, will recalculate view location and rotation to look at the new point immediatley
	 */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Leveleditor")
		void SetViewportCameraLookAt(const FVector& LookAt, bool bRecalculateView = true);

	/*
		Return the Position and look at position of the Level editor Perspective camera.
	*/
	UFUNCTION(BlueprintPure, Category = "ElgEditor|Leveleditor")
		void GetViewportPerspectiveLocation(FVector& CameraLocation, FVector& CameraLookAt);

#pragma endregion

};