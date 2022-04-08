// Copyright 2019-2022 ElgSoft. All rights reserved. 
// Elg001.ElgEditorScripting - ElgSoft.com


#include "ElgEditorContext_Jason.h"
#include "Runtime/Json/Public/Dom/JsonObject.h"
#include "Runtime/Json/Public/Serialization/JsonWriter.h"
#include "Runtime/Json/Public/Serialization/JsonSerializer.h"
#include "Runtime/Json/Public/Policies/CondensedJsonPrintPolicy.h"
#include "Runtime/Core/Public/Misc/FileHelper.h"


typedef TJsonWriterFactory< TCHAR, TCondensedJsonPrintPolicy<TCHAR> > FCondensedJsonStringWriterFactory;
typedef TJsonWriter< TCHAR, TCondensedJsonPrintPolicy<TCHAR> > FCondensedJsonStringWriter;

typedef TJsonWriterFactory< TCHAR, TPrettyJsonPrintPolicy<TCHAR> > FPrettyJsonStringWriterFactory;
typedef TJsonWriter< TCHAR, TPrettyJsonPrintPolicy<TCHAR> > FPrettyJsonStringWriter;


void UElgEditorContext_Jason::Setup()
{
	JsonObject = MakeShareable(new FJsonObject);
}




#pragma region String

void UElgEditorContext_Jason::SetStringField(const FString& FieldName, const FString& StringValue)
{
	JsonObject->SetStringField(FieldName, StringValue);
}

#pragma endregion

#pragma region Number

void UElgEditorContext_Jason::SetNumberField(const FString& FieldName, float Number)
{
	JsonObject->SetNumberField(FieldName, Number);
}

#pragma endregion

#pragma region Bool

void UElgEditorContext_Jason::SetBoolField(const FString& FieldName, bool InValue)
{
	JsonObject->SetBoolField(FieldName, InValue);
}


#pragma endregion

#pragma region Save

FString UElgEditorContext_Jason::ToString(bool bPrettyPolicy)
{
	if (bPrettyPolicy) {
		TSharedRef<FPrettyJsonStringWriter> Writer = FPrettyJsonStringWriterFactory::Create(&OutputString);
		FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
	} else {
		TSharedRef<FCondensedJsonStringWriter> Writer = FCondensedJsonStringWriterFactory::Create(&OutputString);
		FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
	}
	return OutputString;
}


void UElgEditorContext_Jason::SaveToFile(const FString& FilePath, bool bPrettyPolicy)
{
	JsonObject->SetStringField("TESt", "testVAlue");
	ToString(bPrettyPolicy);
	FFileHelper::SaveStringToFile(OutputString, *FilePath);
}

#pragma endregion