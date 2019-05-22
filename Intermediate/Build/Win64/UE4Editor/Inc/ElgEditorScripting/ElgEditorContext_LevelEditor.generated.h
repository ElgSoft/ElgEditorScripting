// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKeyEvent;
class AActor;
struct FVector;
struct FRotator;
class UObject;
class UWorld;
enum class EBPEditorOutputBranch : uint8;
struct FHitResult;
enum class EBPEditorOutputValidBranch : uint8;
struct FVector2D;
#ifdef ELGEDITORSCRIPTING_ElgEditorContext_LevelEditor_generated_h
#error "ElgEditorContext_LevelEditor.generated.h already included, missing '#pragma once' in ElgEditorContext_LevelEditor.h"
#endif
#define ELGEDITORSCRIPTING_ElgEditorContext_LevelEditor_generated_h

#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_56_DELEGATE \
struct _Script_ElgEditorScripting_eventElgEditorEventsOnInputKeySignature_Parms \
{ \
	FKeyEvent KeyEvent; \
}; \
static inline void FElgEditorEventsOnInputKeySignature_DelegateWrapper(const FMulticastScriptDelegate& ElgEditorEventsOnInputKeySignature, FKeyEvent const& KeyEvent) \
{ \
	_Script_ElgEditorScripting_eventElgEditorEventsOnInputKeySignature_Parms Parms; \
	Parms.KeyEvent=KeyEvent; \
	ElgEditorEventsOnInputKeySignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_55_DELEGATE \
struct _Script_ElgEditorScripting_eventElgEditorEventsOnMouseClickSignature_Parms \
{ \
	bool ShiftIsPressed; \
	bool CtrlIsPressed; \
	bool AltIsPressed; \
}; \
static inline void FElgEditorEventsOnMouseClickSignature_DelegateWrapper(const FMulticastScriptDelegate& ElgEditorEventsOnMouseClickSignature, bool ShiftIsPressed, bool CtrlIsPressed, bool AltIsPressed) \
{ \
	_Script_ElgEditorScripting_eventElgEditorEventsOnMouseClickSignature_Parms Parms; \
	Parms.ShiftIsPressed=ShiftIsPressed ? true : false; \
	Parms.CtrlIsPressed=CtrlIsPressed ? true : false; \
	Parms.AltIsPressed=AltIsPressed ? true : false; \
	ElgEditorEventsOnMouseClickSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_53_DELEGATE \
struct _Script_ElgEditorScripting_eventElgEditorEventsOnEditorModeSignature_Parms \
{ \
	FText ModeName; \
}; \
static inline void FElgEditorEventsOnEditorModeSignature_DelegateWrapper(const FMulticastScriptDelegate& ElgEditorEventsOnEditorModeSignature, FText const& ModeName) \
{ \
	_Script_ElgEditorScripting_eventElgEditorEventsOnEditorModeSignature_Parms Parms; \
	Parms.ModeName=ModeName; \
	ElgEditorEventsOnEditorModeSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_51_DELEGATE \
struct _Script_ElgEditorScripting_eventElgEditorEventsOnFocusViewportOnActorsSignature_Parms \
{ \
	TArray<AActor*> Actors; \
}; \
static inline void FElgEditorEventsOnFocusViewportOnActorsSignature_DelegateWrapper(const FMulticastScriptDelegate& ElgEditorEventsOnFocusViewportOnActorsSignature, TArray<AActor*> const& Actors) \
{ \
	_Script_ElgEditorScripting_eventElgEditorEventsOnFocusViewportOnActorsSignature_Parms Parms; \
	Parms.Actors=Actors; \
	ElgEditorEventsOnFocusViewportOnActorsSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_49_DELEGATE \
struct _Script_ElgEditorScripting_eventElgEditorEventsMapChangeSignature_Parms \
{ \
	int32 MapChangeFlags; \
}; \
static inline void FElgEditorEventsMapChangeSignature_DelegateWrapper(const FMulticastScriptDelegate& ElgEditorEventsMapChangeSignature, const int32 MapChangeFlags) \
{ \
	_Script_ElgEditorScripting_eventElgEditorEventsMapChangeSignature_Parms Parms; \
	Parms.MapChangeFlags=MapChangeFlags; \
	ElgEditorEventsMapChangeSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_48_DELEGATE \
struct _Script_ElgEditorScripting_eventElgEditorEventsOnMapOpenedSignature_Parms \
{ \
	FString Filename; \
	bool bAsTemplate; \
}; \
static inline void FElgEditorEventsOnMapOpenedSignature_DelegateWrapper(const FMulticastScriptDelegate& ElgEditorEventsOnMapOpenedSignature, const FString& Filename, bool bAsTemplate) \
{ \
	_Script_ElgEditorScripting_eventElgEditorEventsOnMapOpenedSignature_Parms Parms; \
	Parms.Filename=Filename; \
	Parms.bAsTemplate=bAsTemplate ? true : false; \
	ElgEditorEventsOnMapOpenedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_46_DELEGATE \
struct _Script_ElgEditorScripting_eventElgEditorEventsBeginStandaloneLocalPlaySignature_Parms \
{ \
	int32 ProcessID; \
}; \
static inline void FElgEditorEventsBeginStandaloneLocalPlaySignature_DelegateWrapper(const FMulticastScriptDelegate& ElgEditorEventsBeginStandaloneLocalPlaySignature, const int32 ProcessID) \
{ \
	_Script_ElgEditorScripting_eventElgEditorEventsBeginStandaloneLocalPlaySignature_Parms Parms; \
	Parms.ProcessID=ProcessID; \
	ElgEditorEventsBeginStandaloneLocalPlaySignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_45_DELEGATE \
struct _Script_ElgEditorScripting_eventElgEditorEventsBeginPIESignature_Parms \
{ \
	bool bIsSimulating; \
}; \
static inline void FElgEditorEventsBeginPIESignature_DelegateWrapper(const FMulticastScriptDelegate& ElgEditorEventsBeginPIESignature, bool bIsSimulating) \
{ \
	_Script_ElgEditorScripting_eventElgEditorEventsBeginPIESignature_Parms Parms; \
	Parms.bIsSimulating=bIsSimulating ? true : false; \
	ElgEditorEventsBeginPIESignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_43_DELEGATE \
struct _Script_ElgEditorScripting_eventElgEditorEventsOnEditorCameraMovedSignature_Parms \
{ \
	FVector Position; \
	FRotator Rotation; \
}; \
static inline void FElgEditorEventsOnEditorCameraMovedSignature_DelegateWrapper(const FMulticastScriptDelegate& ElgEditorEventsOnEditorCameraMovedSignature, FVector const& Position, FRotator const& Rotation) \
{ \
	_Script_ElgEditorScripting_eventElgEditorEventsOnEditorCameraMovedSignature_Parms Parms; \
	Parms.Position=Position; \
	Parms.Rotation=Rotation; \
	ElgEditorEventsOnEditorCameraMovedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_41_DELEGATE \
struct _Script_ElgEditorScripting_eventElgEditorEventsOnActorDeselectedSignature_Parms \
{ \
	UObject* Object; \
}; \
static inline void FElgEditorEventsOnActorDeselectedSignature_DelegateWrapper(const FMulticastScriptDelegate& ElgEditorEventsOnActorDeselectedSignature, UObject* Object) \
{ \
	_Script_ElgEditorScripting_eventElgEditorEventsOnActorDeselectedSignature_Parms Parms; \
	Parms.Object=Object; \
	ElgEditorEventsOnActorDeselectedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_40_DELEGATE \
struct _Script_ElgEditorScripting_eventElgEditorEventsOnActorSelectedSignature_Parms \
{ \
	UObject* Object; \
}; \
static inline void FElgEditorEventsOnActorSelectedSignature_DelegateWrapper(const FMulticastScriptDelegate& ElgEditorEventsOnActorSelectedSignature, UObject* Object) \
{ \
	_Script_ElgEditorScripting_eventElgEditorEventsOnActorSelectedSignature_Parms Parms; \
	Parms.Object=Object; \
	ElgEditorEventsOnActorSelectedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_38_DELEGATE \
struct _Script_ElgEditorScripting_eventElgEditorEventsOnActorSelectionChangedSignature_Parms \
{ \
	TArray<UObject*> NewSelection; \
}; \
static inline void FElgEditorEventsOnActorSelectionChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& ElgEditorEventsOnActorSelectionChangedSignature, TArray<UObject*> const& NewSelection) \
{ \
	_Script_ElgEditorScripting_eventElgEditorEventsOnActorSelectionChangedSignature_Parms Parms; \
	Parms.NewSelection=NewSelection; \
	ElgEditorEventsOnActorSelectionChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_36_DELEGATE \
struct _Script_ElgEditorScripting_eventElgEditorEventsOnWorldDestroyedSignature_Parms \
{ \
	UWorld* World; \
}; \
static inline void FElgEditorEventsOnWorldDestroyedSignature_DelegateWrapper(const FMulticastScriptDelegate& ElgEditorEventsOnWorldDestroyedSignature, UWorld* World) \
{ \
	_Script_ElgEditorScripting_eventElgEditorEventsOnWorldDestroyedSignature_Parms Parms; \
	Parms.World=World; \
	ElgEditorEventsOnWorldDestroyedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_35_DELEGATE \
struct _Script_ElgEditorScripting_eventElgEditorEventsOnWorldAddedSignature_Parms \
{ \
	UWorld* World; \
}; \
static inline void FElgEditorEventsOnWorldAddedSignature_DelegateWrapper(const FMulticastScriptDelegate& ElgEditorEventsOnWorldAddedSignature, UWorld* World) \
{ \
	_Script_ElgEditorScripting_eventElgEditorEventsOnWorldAddedSignature_Parms Parms; \
	Parms.World=World; \
	ElgEditorEventsOnWorldAddedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_33_DELEGATE \
struct _Script_ElgEditorScripting_eventElgEditorEventsOnActorMovedSignature_Parms \
{ \
	AActor* Actor; \
}; \
static inline void FElgEditorEventsOnActorMovedSignature_DelegateWrapper(const FMulticastScriptDelegate& ElgEditorEventsOnActorMovedSignature, AActor* Actor) \
{ \
	_Script_ElgEditorScripting_eventElgEditorEventsOnActorMovedSignature_Parms Parms; \
	Parms.Actor=Actor; \
	ElgEditorEventsOnActorMovedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_31_DELEGATE \
struct _Script_ElgEditorScripting_eventElgEditorEventsOnLevelActorDetachedSignature_Parms \
{ \
	AActor* Actor; \
	const AActor* Parent; \
}; \
static inline void FElgEditorEventsOnLevelActorDetachedSignature_DelegateWrapper(const FMulticastScriptDelegate& ElgEditorEventsOnLevelActorDetachedSignature, AActor* Actor, const AActor* Parent) \
{ \
	_Script_ElgEditorScripting_eventElgEditorEventsOnLevelActorDetachedSignature_Parms Parms; \
	Parms.Actor=Actor; \
	Parms.Parent=Parent; \
	ElgEditorEventsOnLevelActorDetachedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_30_DELEGATE \
struct _Script_ElgEditorScripting_eventElgEditorEventsOnLevelActorAttachedSignature_Parms \
{ \
	AActor* Actor; \
	const AActor* Parent; \
}; \
static inline void FElgEditorEventsOnLevelActorAttachedSignature_DelegateWrapper(const FMulticastScriptDelegate& ElgEditorEventsOnLevelActorAttachedSignature, AActor* Actor, const AActor* Parent) \
{ \
	_Script_ElgEditorScripting_eventElgEditorEventsOnLevelActorAttachedSignature_Parms Parms; \
	Parms.Actor=Actor; \
	Parms.Parent=Parent; \
	ElgEditorEventsOnLevelActorAttachedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_28_DELEGATE \
struct _Script_ElgEditorScripting_eventElgEditorEventsOnLevelActorDeletedNativeSignature_Parms \
{ \
	AActor* Actor; \
}; \
static inline void FElgEditorEventsOnLevelActorDeletedNativeSignature_DelegateWrapper(const FMulticastScriptDelegate& ElgEditorEventsOnLevelActorDeletedNativeSignature, AActor* Actor) \
{ \
	_Script_ElgEditorScripting_eventElgEditorEventsOnLevelActorDeletedNativeSignature_Parms Parms; \
	Parms.Actor=Actor; \
	ElgEditorEventsOnLevelActorDeletedNativeSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_27_DELEGATE \
struct _Script_ElgEditorScripting_eventElgEditorEventsOnLevelActorDeletedSignature_Parms \
{ \
	AActor* Actor; \
}; \
static inline void FElgEditorEventsOnLevelActorDeletedSignature_DelegateWrapper(const FMulticastScriptDelegate& ElgEditorEventsOnLevelActorDeletedSignature, AActor* Actor) \
{ \
	_Script_ElgEditorScripting_eventElgEditorEventsOnLevelActorDeletedSignature_Parms Parms; \
	Parms.Actor=Actor; \
	ElgEditorEventsOnLevelActorDeletedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_25_DELEGATE \
struct _Script_ElgEditorScripting_eventElgEditorEventsOnLevelActorAddedNativeSignature_Parms \
{ \
	AActor* ActorAdded; \
}; \
static inline void FElgEditorEventsOnLevelActorAddedNativeSignature_DelegateWrapper(const FMulticastScriptDelegate& ElgEditorEventsOnLevelActorAddedNativeSignature, AActor* ActorAdded) \
{ \
	_Script_ElgEditorScripting_eventElgEditorEventsOnLevelActorAddedNativeSignature_Parms Parms; \
	Parms.ActorAdded=ActorAdded; \
	ElgEditorEventsOnLevelActorAddedNativeSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_24_DELEGATE \
struct _Script_ElgEditorScripting_eventElgEditorEventsOnLevelActorAddedSignature_Parms \
{ \
	AActor* ActorAdded; \
}; \
static inline void FElgEditorEventsOnLevelActorAddedSignature_DelegateWrapper(const FMulticastScriptDelegate& ElgEditorEventsOnLevelActorAddedSignature, AActor* ActorAdded) \
{ \
	_Script_ElgEditorScripting_eventElgEditorEventsOnLevelActorAddedSignature_Parms Parms; \
	Parms.ActorAdded=ActorAdded; \
	ElgEditorEventsOnLevelActorAddedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_67_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRestoreViewportRealtime) \
	{ \
		P_GET_UBOOL(Z_Param_bAllowDisable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RestoreViewportRealtime(Z_Param_bAllowDisable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetViewportRealtime) \
	{ \
		P_GET_UBOOL(Z_Param_bInRealtime); \
		P_GET_UBOOL(Z_Param_bStoreCurrentValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetViewportRealtime(Z_Param_bInRealtime,Z_Param_bStoreCurrentValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsViewportRealtimeBranch) \
	{ \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IsViewportRealtimeBranch((EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsViewportRealtime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsViewportRealtime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInEditorBranch) \
	{ \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IsInEditorBranch((EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInEditor) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_InEditor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IsInEditor(Z_Param_Out_InEditor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInPIEBranch) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_InSimulation); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IsInPIEBranch(Z_Param_Out_InSimulation,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInPIE) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_InPie); \
		P_GET_UBOOL_REF(Z_Param_Out_InSimulation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IsInPIE(Z_Param_Out_InPie,Z_Param_Out_InSimulation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEditorMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetEditorMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasFocusBranch) \
	{ \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HasFocusBranch((EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasFocus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineTrace) \
	{ \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_UBOOL(Z_Param_bShowTrace); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_UBOOL_REF(Z_Param_Out_Success); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LineTrace(Z_Param_bTraceComplex,Z_Param_bShowTrace,Z_Param_Out_ActorsToIgnore,Z_Param_Out_Success,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorUnderMouseBranch) \
	{ \
		P_GET_UBOOL(Z_Param_ShowTrace); \
		P_GET_OBJECT_REF(AActor,Z_Param_Out_Actor); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetActorUnderMouseBranch(Z_Param_ShowTrace,Z_Param_Out_Actor,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorUnderMouse) \
	{ \
		P_GET_UBOOL(Z_Param_ShowTrace); \
		P_GET_UBOOL_REF(Z_Param_Out_Success); \
		P_GET_OBJECT_REF(AActor,Z_Param_Out_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetActorUnderMouse(Z_Param_ShowTrace,Z_Param_Out_Success,Z_Param_Out_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMousePositionWorldBranch) \
	{ \
		P_GET_UBOOL(Z_Param_ShowTrace); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPos); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetMousePositionWorldBranch(Z_Param_ShowTrace,Z_Param_Out_WorldPos,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMousePositionWorld) \
	{ \
		P_GET_UBOOL(Z_Param_ShowTrace); \
		P_GET_UBOOL_REF(Z_Param_Out_Success); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetMousePositionWorld(Z_Param_ShowTrace,Z_Param_Out_Success,Z_Param_Out_WorldPos); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMousePosition) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_Success); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Pos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetMousePosition(Z_Param_Out_Success,Z_Param_Out_Pos); \
		P_NATIVE_END; \
	}


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRestoreViewportRealtime) \
	{ \
		P_GET_UBOOL(Z_Param_bAllowDisable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RestoreViewportRealtime(Z_Param_bAllowDisable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetViewportRealtime) \
	{ \
		P_GET_UBOOL(Z_Param_bInRealtime); \
		P_GET_UBOOL(Z_Param_bStoreCurrentValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetViewportRealtime(Z_Param_bInRealtime,Z_Param_bStoreCurrentValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsViewportRealtimeBranch) \
	{ \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IsViewportRealtimeBranch((EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsViewportRealtime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsViewportRealtime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInEditorBranch) \
	{ \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IsInEditorBranch((EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInEditor) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_InEditor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IsInEditor(Z_Param_Out_InEditor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInPIEBranch) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_InSimulation); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IsInPIEBranch(Z_Param_Out_InSimulation,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInPIE) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_InPie); \
		P_GET_UBOOL_REF(Z_Param_Out_InSimulation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IsInPIE(Z_Param_Out_InPie,Z_Param_Out_InSimulation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEditorMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetEditorMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasFocusBranch) \
	{ \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HasFocusBranch((EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasFocus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineTrace) \
	{ \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_UBOOL(Z_Param_bShowTrace); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_UBOOL_REF(Z_Param_Out_Success); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LineTrace(Z_Param_bTraceComplex,Z_Param_bShowTrace,Z_Param_Out_ActorsToIgnore,Z_Param_Out_Success,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorUnderMouseBranch) \
	{ \
		P_GET_UBOOL(Z_Param_ShowTrace); \
		P_GET_OBJECT_REF(AActor,Z_Param_Out_Actor); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetActorUnderMouseBranch(Z_Param_ShowTrace,Z_Param_Out_Actor,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorUnderMouse) \
	{ \
		P_GET_UBOOL(Z_Param_ShowTrace); \
		P_GET_UBOOL_REF(Z_Param_Out_Success); \
		P_GET_OBJECT_REF(AActor,Z_Param_Out_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetActorUnderMouse(Z_Param_ShowTrace,Z_Param_Out_Success,Z_Param_Out_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMousePositionWorldBranch) \
	{ \
		P_GET_UBOOL(Z_Param_ShowTrace); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPos); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetMousePositionWorldBranch(Z_Param_ShowTrace,Z_Param_Out_WorldPos,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMousePositionWorld) \
	{ \
		P_GET_UBOOL(Z_Param_ShowTrace); \
		P_GET_UBOOL_REF(Z_Param_Out_Success); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetMousePositionWorld(Z_Param_ShowTrace,Z_Param_Out_Success,Z_Param_Out_WorldPos); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMousePosition) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_Success); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Pos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetMousePosition(Z_Param_Out_Success,Z_Param_Out_Pos); \
		P_NATIVE_END; \
	}


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElgEditorContext_LevelEditor(); \
	friend struct Z_Construct_UClass_UElgEditorContext_LevelEditor_Statics; \
public: \
	DECLARE_CLASS(UElgEditorContext_LevelEditor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorContext_LevelEditor)


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_67_INCLASS \
private: \
	static void StaticRegisterNativesUElgEditorContext_LevelEditor(); \
	friend struct Z_Construct_UClass_UElgEditorContext_LevelEditor_Statics; \
public: \
	DECLARE_CLASS(UElgEditorContext_LevelEditor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorContext_LevelEditor)


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_67_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorContext_LevelEditor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorContext_LevelEditor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorContext_LevelEditor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorContext_LevelEditor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorContext_LevelEditor(UElgEditorContext_LevelEditor&&); \
	NO_API UElgEditorContext_LevelEditor(const UElgEditorContext_LevelEditor&); \
public:


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorContext_LevelEditor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorContext_LevelEditor(UElgEditorContext_LevelEditor&&); \
	NO_API UElgEditorContext_LevelEditor(const UElgEditorContext_LevelEditor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorContext_LevelEditor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorContext_LevelEditor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorContext_LevelEditor)


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_67_PRIVATE_PROPERTY_OFFSET
#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_64_PROLOG
#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_67_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_67_PRIVATE_PROPERTY_OFFSET \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_67_RPC_WRAPPERS \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_67_INCLASS \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_67_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_67_PRIVATE_PROPERTY_OFFSET \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_67_INCLASS_NO_PURE_DECLS \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELGEDITORSCRIPTING_API UClass* StaticClass<class UElgEditorContext_LevelEditor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_LevelEditor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
