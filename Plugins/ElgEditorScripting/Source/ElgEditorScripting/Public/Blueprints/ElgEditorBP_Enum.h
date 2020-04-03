// Copyright 2019-2020 ElgSoft. All rights reserved. 
// Elg001.ElgEditorScripting - ElgSoft.com

#pragma once

#include "CoreMinimal.h"

#include "ElgEditorBP_Enum.generated.h"


UENUM(BlueprintType)
enum class EBPEditorOutputCompareCheck : uint8
{
	Less,
	Equal,
	Greater
};


UENUM(BlueprintType)
enum class EBPEditorOutputBranch : uint8
{
	outTrue,
	outFalse
};


UENUM(BlueprintType)
enum class EBPEditorOutputCompareBranch : uint8
{
	Equal,
	NotEqual
};


UENUM(BlueprintType)
enum class EBPEditorOutputValidBranch : uint8
{
	Valid,
	Invalid 
};



UENUM(BlueprintType)
enum class EBPEditorOutputResultBranch : uint8
{
	Success,
	Failed
};
