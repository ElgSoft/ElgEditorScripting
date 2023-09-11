// Copyright 2019-2023 ElgSoft. All rights reserved. 
// Elg001.ElgEditorScripting - ElgSoft.com

#include "ElgEditorContext_Config.h"
#include "Misc/Paths.h"
#include "Core\Public\Misc\ConfigCacheIni.h"
#include "ElgEditorBP_Enum.h"


#pragma  region Setup
UElgEditorContext_Config::UElgEditorContext_Config()
{
}

UElgEditorContext_Config::~UElgEditorContext_Config()
{
}



void UElgEditorContext_Config::Setup(FString ConfigFilename, FString ConfigSection)
{
	Name = ConfigFilename;
	Section = ConfigSection;
	Path = FPaths::ProjectConfigDir() + "/" + Name + ".ini";
	Path = FConfigCacheIni::NormalizeConfigIniPath(Path);
}

#pragma endregion

#pragma region Misc

bool UElgEditorContext_Config::DoesExist()
{
	if (!GConfig) return false;
	return GConfig->DoesSectionExist(*Section, Path);
}


void UElgEditorContext_Config::DoesExistBranch(EBPEditorOutputValidBranch& Branches)
{
	if (DoesExist()) {
		Branches = EBPEditorOutputValidBranch::Valid;
	} else {
		Branches = EBPEditorOutputValidBranch::Invalid;
	}
}


void UElgEditorContext_Config::GetKeyValuesAsStrings(TArray<FString>& ConfigData)
{
	if (!GConfig) return;
	GConfig->GetSection(*Section, ConfigData, Path);
}


void UElgEditorContext_Config::GetKeys(TArray<FString>& Keys)
{
	GetKeyValuesAsStrings(Keys);
	for (int i = 0; i < Keys.Num(); i++) {
		FString left, right;
		Keys[i].Split(TEXT("="), &left, &right);
		Keys[i] = left;
	}
}


bool UElgEditorContext_Config::Clear()
{
	if (!GConfig) return false;	
	return GConfig->EmptySection(*Section, Path);
}


bool UElgEditorContext_Config::RemoveKey(const FString Key)
{
	if (!GConfig) return false;
	return GConfig->RemoveKey(*Section, *Key, Path);
}

bool UElgEditorContext_Config::HasKey(const FString Key)
{
	if (!GConfig) return false;
	TArray<FString> keys;
	GetKeys(keys);

	for (const FString key : keys) {
		if (key == Key) {
			return true;
		}
	}
	return false;
}


void UElgEditorContext_Config::HasKeyBranch(const FString Key, EBPEditorOutputValidBranch& Branches)
{
	if (HasKey(Key)) {
		Branches = EBPEditorOutputValidBranch::Valid;
		return;
	}
	Branches = EBPEditorOutputValidBranch::Invalid;
}


#pragma endregion

#pragma region Write

void UElgEditorContext_Config::WriteString(const FString Key, const FString Value)
{
	if (!GConfig) return;
	GConfig->SetString(*Section, *Key, *Value, Path);
	GConfig->Flush(false, Path);
}


void UElgEditorContext_Config::WriteInt(const FString Key, const int32 Value)
{
	if (!GConfig) return;
	GConfig->SetInt(*Section, *Key, Value, Path);
	GConfig->Flush(false, Path);
}

void UElgEditorContext_Config::WriteFloat(const FString Key, const float Value)
{
	if (!GConfig) return;
	GConfig->SetFloat(*Section, *Key, Value, Path);
	GConfig->Flush(false, Path);
}

void UElgEditorContext_Config::WriteDouble(const FString Key, const double Value)
{
	if (!GConfig) return;
	GConfig->SetDouble(*Section, *Key, Value, Path);
	GConfig->Flush(false, Path);
}

void UElgEditorContext_Config::WriteBool(const FString Key, const bool Value)
{
	if (!GConfig) return;
	GConfig->SetBool(*Section, *Key, Value, Path);
	GConfig->Flush(false, Path);
}

void UElgEditorContext_Config::WriteArray(const FString Key, const TArray<FString>& Value)
{
	if (!GConfig) return;
	GConfig->SetArray(*Section, *Key, Value, Path);
	GConfig->Flush(false, Path);
}

void UElgEditorContext_Config::WriteColor(const FString Key, const FColor Value)
{
	if (!GConfig) return;
	GConfig->SetColor(*Section, *Key, Value, Path);
	GConfig->Flush(false, Path);
}

void UElgEditorContext_Config::WriteVector2d(const FString Key, const FVector2D Value)
{
	if (!GConfig) return;
	GConfig->SetVector2D(*Section, *Key, Value, Path);
	GConfig->Flush(false, Path);
}

void UElgEditorContext_Config::WriteVector(const FString Key, const FVector Value)
{
	if (!GConfig) return;
	GConfig->SetVector(*Section, *Key, Value, Path);
	GConfig->Flush(false, Path);
}

void UElgEditorContext_Config::WriteVector4(const FString Key, const FVector4 Value)
{
	if (!GConfig) return;
	GConfig->SetVector4(*Section, *Key, Value, Path);
	GConfig->Flush(false, Path);
}

void UElgEditorContext_Config::WriteRotator(const FString Key, const FRotator Value)
{
	if (!GConfig) return;
	GConfig->SetRotator(*Section, *Key, Value, Path);
	GConfig->Flush(false, Path);
}

void UElgEditorContext_Config::WriteText(const FString Key, const FText Value)
{
	if (!GConfig) return;
	GConfig->SetText(*Section, *Key, Value, Path);
	GConfig->Flush(false, Path);
}

#pragma endregion

#pragma  region Read


bool UElgEditorContext_Config::ReadString(const FString Key, FString& Value)
{
	if (!GConfig) return false;
	return GConfig->GetString(*Section, *Key, Value, Path);
}

bool UElgEditorContext_Config::ReadInt(const FString Key, int32& Value)
{
	if (!GConfig) return false;
	return GConfig->GetInt(*Section, *Key, Value, Path);
}

bool UElgEditorContext_Config::ReadFloat(const FString Key, float& Value)
{
	if (!GConfig) return false;
	return GConfig->GetFloat(*Section, *Key, Value, Path);
}

bool UElgEditorContext_Config::ReadDouble(const FString Key, double& Value)
{
	if (!GConfig) return false;
	return GConfig->GetDouble(*Section, *Key, Value, Path);
}

bool UElgEditorContext_Config::ReadBool(const FString Key, bool& Value)
{
	if (!GConfig) return false;
	return GConfig->GetBool(*Section, *Key, Value, Path);
}

bool UElgEditorContext_Config::ReadArray(const FString Key, TArray<FString>& Value)
{
	if (!GConfig) return false;
	return (GConfig->GetArray(*Section, *Key, Value, Path) > 0);
}

bool UElgEditorContext_Config::ReadColor(const FString Key, FColor& Value)
{
	if (!GConfig) return false;
	return GConfig->GetColor(*Section, *Key, Value, Path);
}

bool UElgEditorContext_Config::ReadVector2d(const FString Key, FVector2D& Value)
{
	if (!GConfig) return false;
	return GConfig->GetVector2D(*Section, *Key, Value, Path);
}

bool UElgEditorContext_Config::ReadVector(const FString Key, FVector& Value)
{
	if (!GConfig) return false;
	return GConfig->GetVector(*Section, *Key, Value, Path);
}

bool UElgEditorContext_Config::ReadVector4(const FString Key, FVector4& Value)
{
	if (!GConfig) return false;
	return GConfig->GetVector4(*Section, *Key, Value, Path);
}

bool UElgEditorContext_Config::ReadRotator(const FString Key, FRotator& Value)
{
	if (!GConfig) return false;
	return GConfig->GetRotator(*Section, *Key, Value, Path);
}

bool UElgEditorContext_Config::ReadText(const FString Key, FText& Value)
{
	if (!GConfig) return false;
	return GConfig->GetText(*Section, *Key, Value, Path);
}

#pragma endregion

#pragma region ReadWithBranch  

void UElgEditorContext_Config::ReadStringBranch(const FString Key, FString& Value, EBPEditorOutputValidBranch& Branches)
{	
	if (ReadString(Key, Value)) {
		Branches = EBPEditorOutputValidBranch::Valid;
	} else {
		Branches = EBPEditorOutputValidBranch::Invalid;
	}
}


void UElgEditorContext_Config::ReadIntBranch(const FString Key, int32& Value, EBPEditorOutputValidBranch& Branches)
{
	if (ReadInt(Key, Value)) {
		Branches = EBPEditorOutputValidBranch::Valid;
	}
	else {
		Branches = EBPEditorOutputValidBranch::Invalid;
	}
}

void UElgEditorContext_Config::ReadFloatBranch(const FString Key, float& Value, EBPEditorOutputValidBranch& Branches)
{
	if (ReadFloat(Key, Value)) {
		Branches = EBPEditorOutputValidBranch::Valid;
	}
	else {
		Branches = EBPEditorOutputValidBranch::Invalid;
	}
}

void UElgEditorContext_Config::ReadDoubleBranch(const FString Key, double& Value, EBPEditorOutputValidBranch& Branches)
{
	if (ReadDouble(Key, Value)) {
		Branches = EBPEditorOutputValidBranch::Valid;
	}
	else {
		Branches = EBPEditorOutputValidBranch::Invalid;
	}
}

void UElgEditorContext_Config::ReadBoolBranch(const FString Key, bool& Value, EBPEditorOutputValidBranch& Branches)
{
	if (ReadBool(Key, Value)) {
		Branches = EBPEditorOutputValidBranch::Valid;
	}
	else {
		Branches = EBPEditorOutputValidBranch::Invalid;
	}
}

void UElgEditorContext_Config::ReadArrayBranch(const FString Key, TArray<FString>& Value, EBPEditorOutputValidBranch& Branches)
{
	if (ReadArray(Key, Value)) {
		Branches = EBPEditorOutputValidBranch::Valid;
	}
	else {
		Branches = EBPEditorOutputValidBranch::Invalid;
	}
}

void UElgEditorContext_Config::ReadColorBranch(const FString Key, FColor& Value, EBPEditorOutputValidBranch& Branches)
{
	if (ReadColor(Key, Value)) {
		Branches = EBPEditorOutputValidBranch::Valid;
	}
	else {
		Branches = EBPEditorOutputValidBranch::Invalid;
	}
}

void UElgEditorContext_Config::ReadVector2dBranch(const FString Key, FVector2D& Value, EBPEditorOutputValidBranch& Branches)
{
	if (ReadVector2d(Key, Value)) {
		Branches = EBPEditorOutputValidBranch::Valid;
	}
	else {
		Branches = EBPEditorOutputValidBranch::Invalid;
	}
}

void UElgEditorContext_Config::ReadVectorBranch(const FString Key, FVector& Value, EBPEditorOutputValidBranch& Branches)
{
	if (ReadVector(Key, Value)) {
		Branches = EBPEditorOutputValidBranch::Valid;
	}
	else {
		Branches = EBPEditorOutputValidBranch::Invalid;
	}
}

void UElgEditorContext_Config::ReadVector4Branch(const FString Key, FVector4& Value, EBPEditorOutputValidBranch& Branches)
{
	if (ReadVector4(Key, Value)) {
		Branches = EBPEditorOutputValidBranch::Valid;
	}
	else {
		Branches = EBPEditorOutputValidBranch::Invalid;
	}
}

void UElgEditorContext_Config::ReadRotatorBranch(const FString Key, FRotator& Value, EBPEditorOutputValidBranch& Branches)
{
	if (ReadRotator(Key, Value)) {
		Branches = EBPEditorOutputValidBranch::Valid;
	}
	else {
		Branches = EBPEditorOutputValidBranch::Invalid;
	};
}

void UElgEditorContext_Config::ReadTextBranch(const FString Key, FText& Value, EBPEditorOutputValidBranch& Branches)
{
	if (ReadText(Key, Value)) {
		Branches = EBPEditorOutputValidBranch::Valid;
	}
	else {
		Branches = EBPEditorOutputValidBranch::Invalid;
	}
}


#pragma endregion