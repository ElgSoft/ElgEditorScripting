// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
// Elg001.ElgEditorScripting - ElgSoft.com


#include "ElgEditorScripting.h"
#include "ElgEditorContext_Manager.h"


#define LOCTEXT_NAMESPACE "FElgEditorScriptingModule"

void FElgEditorScriptingModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	ContextManagerPtr = MakeWeakObjectPtr(const_cast<UElgEditorContext_Manager*>(GetDefault<UElgEditorContext_Manager>()));

}

void FElgEditorScriptingModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	
	ContextManagerPtr = nullptr;
}

UElgEditorContext_Manager& FElgEditorScriptingModule::GetContextManager() const
{
	return *ContextManagerPtr;
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FElgEditorScriptingModule, ElgEditorScripting)