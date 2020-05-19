// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mirror/Public/Player/MRRPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMRRPlayerState() {}
// Cross Module References
	MIRROR_API UClass* Z_Construct_UClass_AMRRPlayerState_NoRegister();
	MIRROR_API UClass* Z_Construct_UClass_AMRRPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_Mirror();
	MIRROR_API UFunction* Z_Construct_UFunction_AMRRPlayerState_GetArmor();
	MIRROR_API UFunction* Z_Construct_UFunction_AMRRPlayerState_GetGold();
	MIRROR_API UFunction* Z_Construct_UFunction_AMRRPlayerState_GetHealth();
	MIRROR_API UFunction* Z_Construct_UFunction_AMRRPlayerState_GetHealthRegenRate();
	MIRROR_API UFunction* Z_Construct_UFunction_AMRRPlayerState_GetMaxHealth();
	MIRROR_API UFunction* Z_Construct_UFunction_AMRRPlayerState_GetMaxWeight();
	MIRROR_API UFunction* Z_Construct_UFunction_AMRRPlayerState_GetWeight();
	MIRROR_API UFunction* Z_Construct_UFunction_AMRRPlayerState_IsAlive();
	MIRROR_API UClass* Z_Construct_UClass_UMRRAttributeSetBase_NoRegister();
	MIRROR_API UClass* Z_Construct_UClass_UMRRAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
// End Cross Module References
	void AMRRPlayerState::StaticRegisterNativesAMRRPlayerState()
	{
		UClass* Class = AMRRPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetArmor", &AMRRPlayerState::execGetArmor },
			{ "GetGold", &AMRRPlayerState::execGetGold },
			{ "GetHealth", &AMRRPlayerState::execGetHealth },
			{ "GetHealthRegenRate", &AMRRPlayerState::execGetHealthRegenRate },
			{ "GetMaxHealth", &AMRRPlayerState::execGetMaxHealth },
			{ "GetMaxWeight", &AMRRPlayerState::execGetMaxWeight },
			{ "GetWeight", &AMRRPlayerState::execGetWeight },
			{ "IsAlive", &AMRRPlayerState::execIsAlive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMRRPlayerState_GetArmor_Statics
	{
		struct MRRPlayerState_eventGetArmor_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMRRPlayerState_GetArmor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MRRPlayerState_eventGetArmor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRRPlayerState_GetArmor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRRPlayerState_GetArmor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRRPlayerState_GetArmor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mirror|MRRPlayerState|Attributes" },
		{ "ModuleRelativePath", "Public/Player/MRRPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRRPlayerState_GetArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRRPlayerState, nullptr, "GetArmor", nullptr, nullptr, sizeof(MRRPlayerState_eventGetArmor_Parms), Z_Construct_UFunction_AMRRPlayerState_GetArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRRPlayerState_GetArmor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMRRPlayerState_GetArmor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRRPlayerState_GetArmor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMRRPlayerState_GetArmor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMRRPlayerState_GetArmor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRRPlayerState_GetGold_Statics
	{
		struct MRRPlayerState_eventGetGold_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMRRPlayerState_GetGold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MRRPlayerState_eventGetGold_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRRPlayerState_GetGold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRRPlayerState_GetGold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRRPlayerState_GetGold_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mirror|MRRPlayerState|Attributes" },
		{ "ModuleRelativePath", "Public/Player/MRRPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRRPlayerState_GetGold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRRPlayerState, nullptr, "GetGold", nullptr, nullptr, sizeof(MRRPlayerState_eventGetGold_Parms), Z_Construct_UFunction_AMRRPlayerState_GetGold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRRPlayerState_GetGold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMRRPlayerState_GetGold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRRPlayerState_GetGold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMRRPlayerState_GetGold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMRRPlayerState_GetGold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRRPlayerState_GetHealth_Statics
	{
		struct MRRPlayerState_eventGetHealth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMRRPlayerState_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MRRPlayerState_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRRPlayerState_GetHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRRPlayerState_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRRPlayerState_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mirror|MRRPlayerState|Attributes" },
		{ "Comment", "/**\n\x09* Getters for attributes from GDAttributeSetBase. Returns Current Value unless otherwise specified.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Player/MRRPlayerState.h" },
		{ "ToolTip", "Getters for attributes from GDAttributeSetBase. Returns Current Value unless otherwise specified." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRRPlayerState_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRRPlayerState, nullptr, "GetHealth", nullptr, nullptr, sizeof(MRRPlayerState_eventGetHealth_Parms), Z_Construct_UFunction_AMRRPlayerState_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRRPlayerState_GetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMRRPlayerState_GetHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRRPlayerState_GetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMRRPlayerState_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMRRPlayerState_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRRPlayerState_GetHealthRegenRate_Statics
	{
		struct MRRPlayerState_eventGetHealthRegenRate_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMRRPlayerState_GetHealthRegenRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MRRPlayerState_eventGetHealthRegenRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRRPlayerState_GetHealthRegenRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRRPlayerState_GetHealthRegenRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRRPlayerState_GetHealthRegenRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mirror|MRRPlayerState|Attributes" },
		{ "ModuleRelativePath", "Public/Player/MRRPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRRPlayerState_GetHealthRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRRPlayerState, nullptr, "GetHealthRegenRate", nullptr, nullptr, sizeof(MRRPlayerState_eventGetHealthRegenRate_Parms), Z_Construct_UFunction_AMRRPlayerState_GetHealthRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRRPlayerState_GetHealthRegenRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMRRPlayerState_GetHealthRegenRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRRPlayerState_GetHealthRegenRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMRRPlayerState_GetHealthRegenRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMRRPlayerState_GetHealthRegenRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRRPlayerState_GetMaxHealth_Statics
	{
		struct MRRPlayerState_eventGetMaxHealth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMRRPlayerState_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MRRPlayerState_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRRPlayerState_GetMaxHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRRPlayerState_GetMaxHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRRPlayerState_GetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mirror|MRRPlayerState|Attributes" },
		{ "ModuleRelativePath", "Public/Player/MRRPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRRPlayerState_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRRPlayerState, nullptr, "GetMaxHealth", nullptr, nullptr, sizeof(MRRPlayerState_eventGetMaxHealth_Parms), Z_Construct_UFunction_AMRRPlayerState_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRRPlayerState_GetMaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMRRPlayerState_GetMaxHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRRPlayerState_GetMaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMRRPlayerState_GetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMRRPlayerState_GetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRRPlayerState_GetMaxWeight_Statics
	{
		struct MRRPlayerState_eventGetMaxWeight_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMRRPlayerState_GetMaxWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MRRPlayerState_eventGetMaxWeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRRPlayerState_GetMaxWeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRRPlayerState_GetMaxWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRRPlayerState_GetMaxWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mirror|MRRPlayerState|Attributes" },
		{ "ModuleRelativePath", "Public/Player/MRRPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRRPlayerState_GetMaxWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRRPlayerState, nullptr, "GetMaxWeight", nullptr, nullptr, sizeof(MRRPlayerState_eventGetMaxWeight_Parms), Z_Construct_UFunction_AMRRPlayerState_GetMaxWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRRPlayerState_GetMaxWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMRRPlayerState_GetMaxWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRRPlayerState_GetMaxWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMRRPlayerState_GetMaxWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMRRPlayerState_GetMaxWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRRPlayerState_GetWeight_Statics
	{
		struct MRRPlayerState_eventGetWeight_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMRRPlayerState_GetWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MRRPlayerState_eventGetWeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRRPlayerState_GetWeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRRPlayerState_GetWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRRPlayerState_GetWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mirror|MRRPlayerState|Attributes" },
		{ "ModuleRelativePath", "Public/Player/MRRPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRRPlayerState_GetWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRRPlayerState, nullptr, "GetWeight", nullptr, nullptr, sizeof(MRRPlayerState_eventGetWeight_Parms), Z_Construct_UFunction_AMRRPlayerState_GetWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRRPlayerState_GetWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMRRPlayerState_GetWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRRPlayerState_GetWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMRRPlayerState_GetWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMRRPlayerState_GetWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRRPlayerState_IsAlive_Statics
	{
		struct MRRPlayerState_eventIsAlive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMRRPlayerState_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRRPlayerState_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMRRPlayerState_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MRRPlayerState_eventIsAlive_Parms), &Z_Construct_UFunction_AMRRPlayerState_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRRPlayerState_IsAlive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRRPlayerState_IsAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRRPlayerState_IsAlive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mirror|MRRPlayerState" },
		{ "ModuleRelativePath", "Public/Player/MRRPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRRPlayerState_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRRPlayerState, nullptr, "IsAlive", nullptr, nullptr, sizeof(MRRPlayerState_eventIsAlive_Parms), Z_Construct_UFunction_AMRRPlayerState_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRRPlayerState_IsAlive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMRRPlayerState_IsAlive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRRPlayerState_IsAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMRRPlayerState_IsAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMRRPlayerState_IsAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMRRPlayerState_NoRegister()
	{
		return AMRRPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AMRRPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeSetBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttributeSetBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMRRPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_Mirror,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMRRPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMRRPlayerState_GetArmor, "GetArmor" }, // 1464399530
		{ &Z_Construct_UFunction_AMRRPlayerState_GetGold, "GetGold" }, // 997080617
		{ &Z_Construct_UFunction_AMRRPlayerState_GetHealth, "GetHealth" }, // 2414489719
		{ &Z_Construct_UFunction_AMRRPlayerState_GetHealthRegenRate, "GetHealthRegenRate" }, // 2287295135
		{ &Z_Construct_UFunction_AMRRPlayerState_GetMaxHealth, "GetMaxHealth" }, // 1929271548
		{ &Z_Construct_UFunction_AMRRPlayerState_GetMaxWeight, "GetMaxWeight" }, // 1413819351
		{ &Z_Construct_UFunction_AMRRPlayerState_GetWeight, "GetWeight" }, // 2896389424
		{ &Z_Construct_UFunction_AMRRPlayerState_IsAlive, "IsAlive" }, // 3073112839
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRRPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Player/MRRPlayerState.h" },
		{ "ModuleRelativePath", "Public/Player/MRRPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRRPlayerState_Statics::NewProp_AttributeSetBase_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/MRRPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMRRPlayerState_Statics::NewProp_AttributeSetBase = { "AttributeSetBase", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMRRPlayerState, AttributeSetBase), Z_Construct_UClass_UMRRAttributeSetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMRRPlayerState_Statics::NewProp_AttributeSetBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMRRPlayerState_Statics::NewProp_AttributeSetBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRRPlayerState_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/MRRPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMRRPlayerState_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMRRPlayerState, AbilitySystemComponent), Z_Construct_UClass_UMRRAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMRRPlayerState_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMRRPlayerState_Statics::NewProp_AbilitySystemComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMRRPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRRPlayerState_Statics::NewProp_AttributeSetBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRRPlayerState_Statics::NewProp_AbilitySystemComponent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMRRPlayerState_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AMRRPlayerState, IAbilitySystemInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMRRPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMRRPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMRRPlayerState_Statics::ClassParams = {
		&AMRRPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMRRPlayerState_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMRRPlayerState_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		0x00000010u,
		METADATA_PARAMS(Z_Construct_UClass_AMRRPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMRRPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMRRPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMRRPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMRRPlayerState, 2663455574);
	template<> MIRROR_API UClass* StaticClass<AMRRPlayerState>()
	{
		return AMRRPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMRRPlayerState(Z_Construct_UClass_AMRRPlayerState, &AMRRPlayerState::StaticClass, TEXT("/Script/Mirror"), TEXT("AMRRPlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMRRPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
