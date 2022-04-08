// Copyright 2019-2020 ElgSoft. All rights reserved. 
// Elg001.ElgEditorScripting - ElgSoft.com

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/TextProperty.h"
#include "ElgEditorBP_Enum.h"
#include "ElgEditorContext_Config.generated.h"




/**
 *  
 */
UCLASS(Blueprintable)
class ELGEDITORSCRIPTING_API UElgEditorContext_Config : public UObject
{
	GENERATED_BODY()

public:


#pragma region Property

	UPROPERTY(BlueprintReadOnly, Category = "ElgEditor|Config")
		FString Name;
	
	UPROPERTY(BlueprintReadOnly, Category = "ElgEditor|Config")
		FString Section;

	UPROPERTY(BlueprintReadOnly, Category = "ElgEditor|Config")
		FString Path;

#pragma endregion

#pragma region Setup

	UElgEditorContext_Config();
	virtual ~UElgEditorContext_Config();

	void Setup(FString ConfigFilename, FString ConfigSection);

#pragma endregion

#pragma region Misc

	/* Return if the config section exist or not */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|Config")
		bool DoesExist();

	/* Return if the config section exist or not with a branches */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Config", meta=(ExpandEnumAsExecs = "Branches"))
		void DoesExistBranch(EBPEditorOutputValidBranch& Branches);

	/* Get an array with all the keys and value in the config */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|Config")
		void GetKeyValuesAsStrings(TArray<FString>& ConfigData);

	/* Get an array with all the keys and value in the config */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|Config")
		void GetKeys(TArray<FString>& Keys);

	/* Clear the config section of all the data. */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Config")
		bool Clear();

	/* Remove a key from the config */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Config")
		bool RemoveKey(const FString Key);

	/* Return if the key exist or not */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|Config")
		bool HasKey(const FString Key);

	/* Return if the key exist with a branch pins */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Config", meta = (ExpandEnumAsExecs = "Branches"))
		void HasKeyBranch(const FString Key, EBPEditorOutputValidBranch& Branches);

#pragma endregion

#pragma region Write

	/* Write a string to a config file */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Config|Write")
		void WriteString(const FString Key, const FString Value);

	/* Write a string to a config file */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Config|Write")
		void WriteInt(const FString Key, const int32 Value);

	/* Write a float to a config file */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Config|Write")
		void WriteFloat(const FString Key, const float Value);

	/* Write a double to a config file  Not supported by Blueprints*/
	//UFUNCTION(BlueprintCallable, Category = "ElgEditor|Config|Write")
		void WriteDouble(const FString Key, const double Value);

	/* Write a bool to a config file */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Config|Write")
		void WriteBool(const FString Key, const bool Value);

	/* Write a string array to a config file */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Config|Write")
		void WriteArray(const FString Key, const TArray<FString>& Value);

	/* Write a FColor to a config file */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Config|Write")
		void WriteColor(const FString Key, const FColor Value);

	/* Write a FVector2D to a config file */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Config|Write")
		void WriteVector2d(const FString Key, const FVector2D Value);
	
	/* Write a FVector to a config file */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Config|Write")
		void WriteVector(const FString Key, const FVector Value);

	/* Write a FVector4 to a config file */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Config|Write")
		void WriteVector4(const FString Key, const FVector4 Value);

	/* Write a FRotator to a config file */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Config|Write")
		void WriteRotator(const FString Key, const FRotator Value);

	/* Write a FText to a config file */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Config|Write")
		void WriteText(const FString Key, const FText Value);

#pragma endregion

#pragma region Read

	/*
		Read a string from a config file.
		@param Key Name of the key to read.
		@param Value The value of the config key.
	*/
	UFUNCTION(BlueprintPure, Category = "ElgEditor|Config|Read")
		bool ReadString(const FString Key, FString& Value);

	/* Read a int from a config file.
		@param Key Name of the key to read.
		@param Value The value of the config key.
	*/
	UFUNCTION(BlueprintPure, Category = "ElgEditor|Config|Read")
		bool ReadInt(const FString Key, int32& Value);

	/* Read a float from a config file.
		@param Key Name of the key to read.
		@param Value The value of the config key.
	*/
	UFUNCTION(BlueprintPure, Category = "ElgEditor|Config|Read")
		bool ReadFloat(const FString Key, float& Value);

	/* Read a double from a config file.  Not supported by Blueprints*/
	//UFUNCTION(BlueprintPure, Category = "ElgEditor|Config|Read")
	bool ReadDouble(const FString Key, double& Value);

	/* Read a bool from a config file.
		@param Key Name of the key to read.
		@param Value The value of the config key.
	*/
	UFUNCTION(BlueprintPure, Category = "ElgEditor|Config|Read")
		bool ReadBool(const FString Key, bool& Value);

	/* Read a string array from a config file.
		@param Key Name of the key to read.
		@param Value The value of the config key.
	*/
	UFUNCTION(BlueprintPure, Category = "ElgEditor|Config|Read")
		bool ReadArray(const FString Key, TArray<FString>& Value);

	/* Read a FColor from a config file.
		@param Key Name of the key to read.
		@param Value The value of the config key.
	*/
	UFUNCTION(BlueprintPure, Category = "ElgEditor|Config|Read")
		bool ReadColor(const FString Key, FColor& Value);

	/* Read a FVector2D from a config file.
		@param Key Name of the key to read.
		@param Value The value of the config key.
	*/
	UFUNCTION(BlueprintPure, Category = "ElgEditor|Config|Read")
		bool ReadVector2d(const FString Key, FVector2D& Value);

	/* Read a FVector from a config file.
		@param Key Name of the key to read.
		@param Value The value of the config key.
	*/
	UFUNCTION(BlueprintPure, Category = "ElgEditor|Config|Read")
		bool ReadVector(const FString Key, FVector& Value);

	/* Read a FVector4 from a config file.
		@param Key Name of the key to read.
		@param Value The value of the config key.
	*/
	UFUNCTION(BlueprintPure, Category = "ElgEditor|Config|Read")
		bool ReadVector4(const FString Key, FVector4& Value);

	/* Read a FRotator from a config file.
		@param Key Name of the key to read.
		@param Value The value of the config key.
	*/
	UFUNCTION(BlueprintPure, Category = "ElgEditor|Config|Read")
		bool ReadRotator(const FString Key, FRotator& Value);

	/* Read a FText from a config file.
		@param Key Name of the key to read.
		@param Value The value of the config key.
	*/
	UFUNCTION(BlueprintPure, Category = "ElgEditor|Config|Read")
		bool ReadText(const FString Key, FText& Value);

#pragma endregion

#pragma region ReadWithBranch 

	/*
		Read a string from a config file with Branch pins
		@param Key Name of the key to read.
		@param Value The value of the config key.
	*/
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Config|Read", meta = (ExpandEnumAsExecs = "Branches"))
		void ReadStringBranch(const FString Key, FString& Value, EBPEditorOutputValidBranch& Branches);

	/* Read a int from a config file with Branch pins
		@param Key Name of the key to read.
		@param Value The value of the config key.
	*/
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Config|Read", meta = (ExpandEnumAsExecs = "Branches"))
		void ReadIntBranch(const FString Key, int32& Value, EBPEditorOutputValidBranch& Branches);

	/* Read a float from a config file with Branch pins
		@param Key Name of the key to read.
		@param Value The value of the config key.
	*/
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Config|Read", meta = (ExpandEnumAsExecs = "Branches"))
		void ReadFloatBranch(const FString Key, float& Value, EBPEditorOutputValidBranch& Branches);

	/* Read a double from a config file with Branch pins  Not supported by Blueprints*/
	//UFUNCTION(BlueprintCallable, Category = "ElgEditor|Config|Read", meta = (ExpandEnumAsExecs = "Branches"))
	void ReadDoubleBranch(const FString Key, double& Value, EBPEditorOutputValidBranch& Branches);

	/* Read a bool from a config file with Branch pins
		@param Key Name of the key to read.
		@param Value The value of the config key.
	*/
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Config|Read", meta = (ExpandEnumAsExecs = "Branches"))
		void ReadBoolBranch(const FString Key, bool& Value, EBPEditorOutputValidBranch& Branches);

	/* Read a string array from a config file with Branch pins
		@param Key Name of the key to read.
		@param Value The value of the config key.
	*/
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Config|Read", meta = (ExpandEnumAsExecs = "Branches"))
		void ReadArrayBranch(const FString Key, TArray<FString>& Value, EBPEditorOutputValidBranch& Branches);

	/* Read a FColor from a config file with Branch pins
		@param Key Name of the key to read.
		@param Value The value of the config key.
	*/
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Config|Read", meta = (ExpandEnumAsExecs = "Branches"))
		void ReadColorBranch(const FString Key, FColor& Value, EBPEditorOutputValidBranch& Branches);

	/* Read a FVector2D from a config file with Branch pins
		@param Key Name of the key to read.
		@param Value The value of the config key.
	*/
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Config|Read", meta = (ExpandEnumAsExecs = "Branches"))
		void ReadVector2dBranch(const FString Key, FVector2D& Value, EBPEditorOutputValidBranch& Branches);

	/* Read a FVector from a config file with Branch pins
		@param Key Name of the key to read.
		@param Value The value of the config key.
	*/
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Config|Read", meta = (ExpandEnumAsExecs = "Branches"))
		void ReadVectorBranch(const FString Key, FVector& Value, EBPEditorOutputValidBranch& Branches);

	/* Read a FVector4 from a config file with Branch pins
		@param Key Name of the key to read.
		@param Value The value of the config key.
	*/
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Config|Read", meta = (ExpandEnumAsExecs = "Branches"))
		void ReadVector4Branch(const FString Key, FVector4& Value, EBPEditorOutputValidBranch& Branches);

	/* Read a FRotator from a config file with Branch pins
		@param Key Name of the key to read.
		@param Value The value of the config key.
	*/
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Config|Read", meta = (ExpandEnumAsExecs = "Branches"))
		void ReadRotatorBranch(const FString Key, FRotator& Value, EBPEditorOutputValidBranch& Branches);

	/* Read a FText from a config file with Branch pins
		@param Key Name of the key to read.
		@param Value The value of the config key.
	*/
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Config|Read", meta = (ExpandEnumAsExecs = "Branches"))
		void ReadTextBranch(const FString Key, FText& Value, EBPEditorOutputValidBranch& Branches);


#pragma endregion
	

};
