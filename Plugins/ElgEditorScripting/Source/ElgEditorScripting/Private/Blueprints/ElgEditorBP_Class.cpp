// Copyright 2019-2023 ElgSoft. All rights reserved.
// Elg001.ElgEditorScripting - ElgSoft.com

#include "ElgEditorBP_Class.h"
#include <EditorClassUtils.h>
#include <GameFramework/Actor.h>



UClass* UElgEditorBP_Class::GetClassByName(const FString ClassName)
{
	// The name is checked in the function
	return FEditorClassUtils::GetClassFromString(ClassName);	
}

