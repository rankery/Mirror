// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mirror/Public/UI/MRRHUDWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMRRHUDWidget() {}
// Cross Module References
	MIRROR_API UClass* Z_Construct_UClass_UMRRHUDWidget_NoRegister();
	MIRROR_API UClass* Z_Construct_UClass_UMRRHUDWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Mirror();
	MIRROR_API UFunction* Z_Construct_UFunction_UMRRHUDWidget_SetCurrentHealth();
	MIRROR_API UFunction* Z_Construct_UFunction_UMRRHUDWidget_SetCurrentWeight();
	MIRROR_API UFunction* Z_Construct_UFunction_UMRRHUDWidget_SetGold();
	MIRROR_API UFunction* Z_Construct_UFunction_UMRRHUDWidget_SetHealthPercentage();
	MIRROR_API UFunction* Z_Construct_UFunction_UMRRHUDWidget_SetHealthRegenRate();
	MIRROR_API UFunction* Z_Construct_UFunction_UMRRHUDWidget_SetMaxHealth();
	MIRROR_API UFunction* Z_Construct_UFunction_UMRRHUDWidget_SetMaxWeight();
	MIRROR_API UFunction* Z_Construct_UFunction_UMRRHUDWidget_SetWeightPercentage();
// End Cross Module References
	static FName NAME_UMRRHUDWidget_SetCurrentHealth = FName(TEXT("SetCurrentHealth"));
	void UMRRHUDWidget::SetCurrentHealth(float CurrentHealth)
	{
		MRRHUDWidget_eventSetCurrentHealth_Parms Parms;
		Parms.CurrentHealth=CurrentHealth;
		ProcessEvent(FindFunctionChecked(NAME_UMRRHUDWidget_SetCurrentHealth),&Parms);
	}
	static FName NAME_UMRRHUDWidget_SetCurrentWeight = FName(TEXT("SetCurrentWeight"));
	void UMRRHUDWidget::SetCurrentWeight(float CurrentWeight)
	{
		MRRHUDWidget_eventSetCurrentWeight_Parms Parms;
		Parms.CurrentWeight=CurrentWeight;
		ProcessEvent(FindFunctionChecked(NAME_UMRRHUDWidget_SetCurrentWeight),&Parms);
	}
	static FName NAME_UMRRHUDWidget_SetGold = FName(TEXT("SetGold"));
	void UMRRHUDWidget::SetGold(int32 Gold)
	{
		MRRHUDWidget_eventSetGold_Parms Parms;
		Parms.Gold=Gold;
		ProcessEvent(FindFunctionChecked(NAME_UMRRHUDWidget_SetGold),&Parms);
	}
	static FName NAME_UMRRHUDWidget_SetHealthPercentage = FName(TEXT("SetHealthPercentage"));
	void UMRRHUDWidget::SetHealthPercentage(float HealthPercentage)
	{
		MRRHUDWidget_eventSetHealthPercentage_Parms Parms;
		Parms.HealthPercentage=HealthPercentage;
		ProcessEvent(FindFunctionChecked(NAME_UMRRHUDWidget_SetHealthPercentage),&Parms);
	}
	static FName NAME_UMRRHUDWidget_SetHealthRegenRate = FName(TEXT("SetHealthRegenRate"));
	void UMRRHUDWidget::SetHealthRegenRate(float HealthRegenRate)
	{
		MRRHUDWidget_eventSetHealthRegenRate_Parms Parms;
		Parms.HealthRegenRate=HealthRegenRate;
		ProcessEvent(FindFunctionChecked(NAME_UMRRHUDWidget_SetHealthRegenRate),&Parms);
	}
	static FName NAME_UMRRHUDWidget_SetMaxHealth = FName(TEXT("SetMaxHealth"));
	void UMRRHUDWidget::SetMaxHealth(float MaxHealth)
	{
		MRRHUDWidget_eventSetMaxHealth_Parms Parms;
		Parms.MaxHealth=MaxHealth;
		ProcessEvent(FindFunctionChecked(NAME_UMRRHUDWidget_SetMaxHealth),&Parms);
	}
	static FName NAME_UMRRHUDWidget_SetMaxWeight = FName(TEXT("SetMaxWeight"));
	void UMRRHUDWidget::SetMaxWeight(float MaxWeight)
	{
		MRRHUDWidget_eventSetMaxWeight_Parms Parms;
		Parms.MaxWeight=MaxWeight;
		ProcessEvent(FindFunctionChecked(NAME_UMRRHUDWidget_SetMaxWeight),&Parms);
	}
	static FName NAME_UMRRHUDWidget_SetWeightPercentage = FName(TEXT("SetWeightPercentage"));
	void UMRRHUDWidget::SetWeightPercentage(float StaminaWeight)
	{
		MRRHUDWidget_eventSetWeightPercentage_Parms Parms;
		Parms.StaminaWeight=StaminaWeight;
		ProcessEvent(FindFunctionChecked(NAME_UMRRHUDWidget_SetWeightPercentage),&Parms);
	}
	void UMRRHUDWidget::StaticRegisterNativesUMRRHUDWidget()
	{
	}
	struct Z_Construct_UFunction_UMRRHUDWidget_SetCurrentHealth_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMRRHUDWidget_SetCurrentHealth_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MRRHUDWidget_eventSetCurrentHealth_Parms, CurrentHealth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRRHUDWidget_SetCurrentHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRRHUDWidget_SetCurrentHealth_Statics::NewProp_CurrentHealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRRHUDWidget_SetCurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MRRHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRRHUDWidget_SetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRRHUDWidget, nullptr, "SetCurrentHealth", nullptr, nullptr, sizeof(MRRHUDWidget_eventSetCurrentHealth_Parms), Z_Construct_UFunction_UMRRHUDWidget_SetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRRHUDWidget_SetCurrentHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRRHUDWidget_SetCurrentHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRRHUDWidget_SetCurrentHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRRHUDWidget_SetCurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMRRHUDWidget_SetCurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRRHUDWidget_SetCurrentWeight_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentWeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMRRHUDWidget_SetCurrentWeight_Statics::NewProp_CurrentWeight = { "CurrentWeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MRRHUDWidget_eventSetCurrentWeight_Parms, CurrentWeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRRHUDWidget_SetCurrentWeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRRHUDWidget_SetCurrentWeight_Statics::NewProp_CurrentWeight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRRHUDWidget_SetCurrentWeight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MRRHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRRHUDWidget_SetCurrentWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRRHUDWidget, nullptr, "SetCurrentWeight", nullptr, nullptr, sizeof(MRRHUDWidget_eventSetCurrentWeight_Parms), Z_Construct_UFunction_UMRRHUDWidget_SetCurrentWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRRHUDWidget_SetCurrentWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRRHUDWidget_SetCurrentWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRRHUDWidget_SetCurrentWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRRHUDWidget_SetCurrentWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMRRHUDWidget_SetCurrentWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRRHUDWidget_SetGold_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Gold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMRRHUDWidget_SetGold_Statics::NewProp_Gold = { "Gold", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MRRHUDWidget_eventSetGold_Parms, Gold), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRRHUDWidget_SetGold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRRHUDWidget_SetGold_Statics::NewProp_Gold,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRRHUDWidget_SetGold_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MRRHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRRHUDWidget_SetGold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRRHUDWidget, nullptr, "SetGold", nullptr, nullptr, sizeof(MRRHUDWidget_eventSetGold_Parms), Z_Construct_UFunction_UMRRHUDWidget_SetGold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRRHUDWidget_SetGold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRRHUDWidget_SetGold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRRHUDWidget_SetGold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRRHUDWidget_SetGold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMRRHUDWidget_SetGold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRRHUDWidget_SetHealthPercentage_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthPercentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMRRHUDWidget_SetHealthPercentage_Statics::NewProp_HealthPercentage = { "HealthPercentage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MRRHUDWidget_eventSetHealthPercentage_Parms, HealthPercentage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRRHUDWidget_SetHealthPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRRHUDWidget_SetHealthPercentage_Statics::NewProp_HealthPercentage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRRHUDWidget_SetHealthPercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MRRHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRRHUDWidget_SetHealthPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRRHUDWidget, nullptr, "SetHealthPercentage", nullptr, nullptr, sizeof(MRRHUDWidget_eventSetHealthPercentage_Parms), Z_Construct_UFunction_UMRRHUDWidget_SetHealthPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRRHUDWidget_SetHealthPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRRHUDWidget_SetHealthPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRRHUDWidget_SetHealthPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRRHUDWidget_SetHealthPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMRRHUDWidget_SetHealthPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRRHUDWidget_SetHealthRegenRate_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthRegenRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMRRHUDWidget_SetHealthRegenRate_Statics::NewProp_HealthRegenRate = { "HealthRegenRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MRRHUDWidget_eventSetHealthRegenRate_Parms, HealthRegenRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRRHUDWidget_SetHealthRegenRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRRHUDWidget_SetHealthRegenRate_Statics::NewProp_HealthRegenRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRRHUDWidget_SetHealthRegenRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MRRHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRRHUDWidget_SetHealthRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRRHUDWidget, nullptr, "SetHealthRegenRate", nullptr, nullptr, sizeof(MRRHUDWidget_eventSetHealthRegenRate_Parms), Z_Construct_UFunction_UMRRHUDWidget_SetHealthRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRRHUDWidget_SetHealthRegenRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRRHUDWidget_SetHealthRegenRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRRHUDWidget_SetHealthRegenRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRRHUDWidget_SetHealthRegenRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMRRHUDWidget_SetHealthRegenRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRRHUDWidget_SetMaxHealth_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMRRHUDWidget_SetMaxHealth_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MRRHUDWidget_eventSetMaxHealth_Parms, MaxHealth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRRHUDWidget_SetMaxHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRRHUDWidget_SetMaxHealth_Statics::NewProp_MaxHealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRRHUDWidget_SetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09\x09* Attribute setters\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/UI/MRRHUDWidget.h" },
		{ "ToolTip", "Attribute setters" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRRHUDWidget_SetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRRHUDWidget, nullptr, "SetMaxHealth", nullptr, nullptr, sizeof(MRRHUDWidget_eventSetMaxHealth_Parms), Z_Construct_UFunction_UMRRHUDWidget_SetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRRHUDWidget_SetMaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRRHUDWidget_SetMaxHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRRHUDWidget_SetMaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRRHUDWidget_SetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMRRHUDWidget_SetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRRHUDWidget_SetMaxWeight_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxWeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMRRHUDWidget_SetMaxWeight_Statics::NewProp_MaxWeight = { "MaxWeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MRRHUDWidget_eventSetMaxWeight_Parms, MaxWeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRRHUDWidget_SetMaxWeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRRHUDWidget_SetMaxWeight_Statics::NewProp_MaxWeight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRRHUDWidget_SetMaxWeight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MRRHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRRHUDWidget_SetMaxWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRRHUDWidget, nullptr, "SetMaxWeight", nullptr, nullptr, sizeof(MRRHUDWidget_eventSetMaxWeight_Parms), Z_Construct_UFunction_UMRRHUDWidget_SetMaxWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRRHUDWidget_SetMaxWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRRHUDWidget_SetMaxWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRRHUDWidget_SetMaxWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRRHUDWidget_SetMaxWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMRRHUDWidget_SetMaxWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRRHUDWidget_SetWeightPercentage_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StaminaWeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMRRHUDWidget_SetWeightPercentage_Statics::NewProp_StaminaWeight = { "StaminaWeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MRRHUDWidget_eventSetWeightPercentage_Parms, StaminaWeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRRHUDWidget_SetWeightPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRRHUDWidget_SetWeightPercentage_Statics::NewProp_StaminaWeight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRRHUDWidget_SetWeightPercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MRRHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRRHUDWidget_SetWeightPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRRHUDWidget, nullptr, "SetWeightPercentage", nullptr, nullptr, sizeof(MRRHUDWidget_eventSetWeightPercentage_Parms), Z_Construct_UFunction_UMRRHUDWidget_SetWeightPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRRHUDWidget_SetWeightPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRRHUDWidget_SetWeightPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRRHUDWidget_SetWeightPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRRHUDWidget_SetWeightPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMRRHUDWidget_SetWeightPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMRRHUDWidget_NoRegister()
	{
		return UMRRHUDWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMRRHUDWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMRRHUDWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Mirror,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMRRHUDWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMRRHUDWidget_SetCurrentHealth, "SetCurrentHealth" }, // 399589277
		{ &Z_Construct_UFunction_UMRRHUDWidget_SetCurrentWeight, "SetCurrentWeight" }, // 2781195203
		{ &Z_Construct_UFunction_UMRRHUDWidget_SetGold, "SetGold" }, // 3542958600
		{ &Z_Construct_UFunction_UMRRHUDWidget_SetHealthPercentage, "SetHealthPercentage" }, // 234701945
		{ &Z_Construct_UFunction_UMRRHUDWidget_SetHealthRegenRate, "SetHealthRegenRate" }, // 2622053168
		{ &Z_Construct_UFunction_UMRRHUDWidget_SetMaxHealth, "SetMaxHealth" }, // 4198832728
		{ &Z_Construct_UFunction_UMRRHUDWidget_SetMaxWeight, "SetMaxWeight" }, // 927449715
		{ &Z_Construct_UFunction_UMRRHUDWidget_SetWeightPercentage, "SetWeightPercentage" }, // 1362020898
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRRHUDWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/MRRHUDWidget.h" },
		{ "ModuleRelativePath", "Public/UI/MRRHUDWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMRRHUDWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRRHUDWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMRRHUDWidget_Statics::ClassParams = {
		&UMRRHUDWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		0x00000000u,
		METADATA_PARAMS(Z_Construct_UClass_UMRRHUDWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMRRHUDWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMRRHUDWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMRRHUDWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMRRHUDWidget, 327742441);
	template<> MIRROR_API UClass* StaticClass<UMRRHUDWidget>()
	{
		return UMRRHUDWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMRRHUDWidget(Z_Construct_UClass_UMRRHUDWidget, &UMRRHUDWidget::StaticClass, TEXT("/Script/Mirror"), TEXT("UMRRHUDWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMRRHUDWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
