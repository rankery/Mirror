// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mirror/Public/Characters/MRRAttributeSetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMRRAttributeSetBase() {}
// Cross Module References
	MIRROR_API UClass* Z_Construct_UClass_UMRRAttributeSetBase_NoRegister();
	MIRROR_API UClass* Z_Construct_UClass_UMRRAttributeSetBase();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	UPackage* Z_Construct_UPackage__Script_Mirror();
	MIRROR_API UFunction* Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Armor();
	MIRROR_API UFunction* Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Gold();
	MIRROR_API UFunction* Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Health();
	MIRROR_API UFunction* Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_HealthRegenRate();
	MIRROR_API UFunction* Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_MaxHealth();
	MIRROR_API UFunction* Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_MaxWeight();
	MIRROR_API UFunction* Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Weight();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
// End Cross Module References
	void UMRRAttributeSetBase::StaticRegisterNativesUMRRAttributeSetBase()
	{
		UClass* Class = UMRRAttributeSetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Armor", &UMRRAttributeSetBase::execOnRep_Armor },
			{ "OnRep_Gold", &UMRRAttributeSetBase::execOnRep_Gold },
			{ "OnRep_Health", &UMRRAttributeSetBase::execOnRep_Health },
			{ "OnRep_HealthRegenRate", &UMRRAttributeSetBase::execOnRep_HealthRegenRate },
			{ "OnRep_MaxHealth", &UMRRAttributeSetBase::execOnRep_MaxHealth },
			{ "OnRep_MaxWeight", &UMRRAttributeSetBase::execOnRep_MaxWeight },
			{ "OnRep_Weight", &UMRRAttributeSetBase::execOnRep_Weight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Armor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Armor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/MRRAttributeSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Armor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRRAttributeSetBase, nullptr, "OnRep_Armor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Armor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Armor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Armor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Armor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Gold_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Gold_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/MRRAttributeSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Gold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRRAttributeSetBase, nullptr, "OnRep_Gold", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Gold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Gold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Gold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Gold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Health_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Health_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* These OnRep functions exist to make sure that the ability system internal representations are synchronized properly during replication\n\x09**/" },
		{ "ModuleRelativePath", "Public/Characters/MRRAttributeSetBase.h" },
		{ "ToolTip", "These OnRep functions exist to make sure that the ability system internal representations are synchronized properly during replication" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRRAttributeSetBase, nullptr, "OnRep_Health", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Health_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Health_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_HealthRegenRate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_HealthRegenRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/MRRAttributeSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_HealthRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRRAttributeSetBase, nullptr, "OnRep_HealthRegenRate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_HealthRegenRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_HealthRegenRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_HealthRegenRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_HealthRegenRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_MaxHealth_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_MaxHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/MRRAttributeSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRRAttributeSetBase, nullptr, "OnRep_MaxHealth", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_MaxHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_MaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_MaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_MaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_MaxWeight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_MaxWeight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/MRRAttributeSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_MaxWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRRAttributeSetBase, nullptr, "OnRep_MaxWeight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_MaxWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_MaxWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_MaxWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_MaxWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Weight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Weight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/MRRAttributeSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Weight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRRAttributeSetBase, nullptr, "OnRep_Weight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Weight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Weight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Weight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Weight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMRRAttributeSetBase_NoRegister()
	{
		return UMRRAttributeSetBase::StaticClass();
	}
	struct Z_Construct_UClass_UMRRAttributeSetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gold_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Gold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Armor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthRegenRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HealthRegenRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMRRAttributeSetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_Mirror,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMRRAttributeSetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Armor, "OnRep_Armor" }, // 3375624815
		{ &Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Gold, "OnRep_Gold" }, // 2434680822
		{ &Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Health, "OnRep_Health" }, // 4048234455
		{ &Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_HealthRegenRate, "OnRep_HealthRegenRate" }, // 2839610086
		{ &Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 2366686538
		{ &Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_MaxWeight, "OnRep_MaxWeight" }, // 208266138
		{ &Z_Construct_UFunction_UMRRAttributeSetBase_OnRep_Weight, "OnRep_Weight" }, // 3289374107
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRRAttributeSetBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Characters/MRRAttributeSetBase.h" },
		{ "ModuleRelativePath", "Public/Characters/MRRAttributeSetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_Gold_MetaData[] = {
		{ "Category", "Gold" },
		{ "ModuleRelativePath", "Public/Characters/MRRAttributeSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_Gold = { "Gold", "OnRep_Gold", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMRRAttributeSetBase, Gold), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_Gold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_Gold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_MaxWeight_MetaData[] = {
		{ "Category", "Weight" },
		{ "ModuleRelativePath", "Public/Characters/MRRAttributeSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_MaxWeight = { "MaxWeight", "OnRep_MaxWeight", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMRRAttributeSetBase, MaxWeight), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_MaxWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_MaxWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Weight" },
		{ "ModuleRelativePath", "Public/Characters/MRRAttributeSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_Weight = { "Weight", "OnRep_Weight", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMRRAttributeSetBase, Weight), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_Armor_MetaData[] = {
		{ "Category", "Armor" },
		{ "Comment", "// Armor reduces the amount of damage done by attackers\n" },
		{ "ModuleRelativePath", "Public/Characters/MRRAttributeSetBase.h" },
		{ "ToolTip", "Armor reduces the amount of damage done by attackers" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_Armor = { "Armor", "OnRep_Armor", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMRRAttributeSetBase, Armor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_Armor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_Armor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_HealthRegenRate_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "// Health regen rate will passively increase Health every second\n" },
		{ "ModuleRelativePath", "Public/Characters/MRRAttributeSetBase.h" },
		{ "ToolTip", "Health regen rate will passively increase Health every second" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_HealthRegenRate = { "HealthRegenRate", "OnRep_HealthRegenRate", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMRRAttributeSetBase, HealthRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_HealthRegenRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_HealthRegenRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/Characters/MRRAttributeSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMRRAttributeSetBase, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/Characters/MRRAttributeSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMRRAttributeSetBase, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_Health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMRRAttributeSetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_Gold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_MaxWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_Weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_Armor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_HealthRegenRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRRAttributeSetBase_Statics::NewProp_Health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMRRAttributeSetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRRAttributeSetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMRRAttributeSetBase_Statics::ClassParams = {
		&UMRRAttributeSetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMRRAttributeSetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMRRAttributeSetBase_Statics::PropPointers),
		0,
		0x003000A0u,
		0x00000010u,
		METADATA_PARAMS(Z_Construct_UClass_UMRRAttributeSetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMRRAttributeSetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMRRAttributeSetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMRRAttributeSetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMRRAttributeSetBase, 993892647);
	template<> MIRROR_API UClass* StaticClass<UMRRAttributeSetBase>()
	{
		return UMRRAttributeSetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMRRAttributeSetBase(Z_Construct_UClass_UMRRAttributeSetBase, &UMRRAttributeSetBase::StaticClass, TEXT("/Script/Mirror"), TEXT("UMRRAttributeSetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMRRAttributeSetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
