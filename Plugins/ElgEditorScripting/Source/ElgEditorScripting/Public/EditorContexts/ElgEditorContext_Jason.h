// Copyright 2019-2023 ElgSoft. All rights reserved. 
// Elg001.ElgEditorScripting - ElgSoft.com

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include <Templates\SharedPointer.h>
#include "ElgEditorContext_Jason.generated.h"

class FJsonObject;

/**
 * 
 */
UCLASS(Blueprintable)
class ELGEDITORSCRIPTING_API UElgEditorContext_Jason : public UObject
{
	GENERATED_BODY()


	TSharedPtr<FJsonObject> JsonObject;

	UPROPERTY()
		FString OutputString;

public:

	void Setup();

#pragma region String

	/** Add a field named FieldName with value of StringValue */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Jason")
		void SetStringField(const FString& FieldName, const FString& StringValue);

#pragma endregion

#pragma region Number

	/** Add a field named FieldName with Number as value */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Jason")
		void SetNumberField(const FString& FieldName, float Number);

#pragma endregion

#pragma region Bool

	/** Set a boolean field named FieldName and value of InValue */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Jason")
		void SetBoolField(const FString& FieldName, bool InValue);

#pragma endregion

#pragma region Save

	UFUNCTION(BlueprintPure, Category = "ElgEditor|Jason")
		FString ToString(bool bPrettyPolicy=true);

	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Jason")
		void SaveToFile(const FString& FilePath, bool bPrettyPolicy=true);

#pragma endregion

	/** Set an array field named FieldName and value of Array */
	//UFUNCTION(BlueprintCallable, Category = "ElgEditor|Jason")
	//void SetArrayField(const FString& FieldName, const TArray< TSharedPtr<FJsonValue> >& Array);

};
