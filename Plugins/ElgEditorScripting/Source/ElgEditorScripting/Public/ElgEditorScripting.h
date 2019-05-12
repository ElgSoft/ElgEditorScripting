// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
// Elg001.ElgEditorScripting - ElgSoft.com

#pragma once

#include "Modules\ModuleManager.h"
#include "ElgEditorContext_Manager.h"


class FElgEditorScriptingModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	virtual UElgEditorContext_Manager& GetContextManager() const;

private:
	TWeakObjectPtr<class UElgEditorContext_Manager> ContextManagerPtr;
};
