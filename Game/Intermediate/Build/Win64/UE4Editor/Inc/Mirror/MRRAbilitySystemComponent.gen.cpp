// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mirror/Public/Characters/MRRAbilitySystemComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMRRAbilitySystemComponent() {}
// Cross Module References
	MIRROR_API UFunction* Z_Construct_UDelegateFunction_Mirror_ReceivedDamageDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Mirror();
	MIRROR_API UClass* Z_Construct_UClass_UMRRAbilitySystemComponent_NoRegister();
	MIRROR_API UClass* Z_Construct_UClass_UMRRAbilitySystemComponent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Mirror_ReceivedDamageDelegate__DelegateSignature_Statics
	{
		struct _Script_Mirror_eventReceivedDamageDelegate_Parms
		{
			UMRRAbilitySystemComponent* SourceASC;
			float UnmitigatedDamage;
			float MitigatedDamage;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MitigatedDamage;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UnmitigatedDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceASC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceASC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Mirror_ReceivedDamageDelegate__DelegateSignature_Statics::NewProp_MitigatedDamage = { "MitigatedDamage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Mirror_eventReceivedDamageDelegate_Parms, MitigatedDamage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Mirror_ReceivedDamageDelegate__DelegateSignature_Statics::NewProp_UnmitigatedDamage = { "UnmitigatedDamage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Mirror_eventReceivedDamageDelegate_Parms, UnmitigatedDamage), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Mirror_ReceivedDamageDelegate__DelegateSignature_Statics::NewProp_SourceASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Mirror_ReceivedDamageDelegate__DelegateSignature_Statics::NewProp_SourceASC = { "SourceASC", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Mirror_eventReceivedDamageDelegate_Parms, SourceASC), Z_Construct_UClass_UMRRAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Mirror_ReceivedDamageDelegate__DelegateSignature_Statics::NewProp_SourceASC_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mirror_ReceivedDamageDelegate__DelegateSignature_Statics::NewProp_SourceASC_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Mirror_ReceivedDamageDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mirror_ReceivedDamageDelegate__DelegateSignature_Statics::NewProp_MitigatedDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mirror_ReceivedDamageDelegate__DelegateSignature_Statics::NewProp_UnmitigatedDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mirror_ReceivedDamageDelegate__DelegateSignature_Statics::NewProp_SourceASC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Mirror_ReceivedDamageDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/MRRAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Mirror_ReceivedDamageDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Mirror, nullptr, "ReceivedDamageDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_Mirror_eventReceivedDamageDelegate_Parms), Z_Construct_UDelegateFunction_Mirror_ReceivedDamageDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mirror_ReceivedDamageDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Mirror_ReceivedDamageDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mirror_ReceivedDamageDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Mirror_ReceivedDamageDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Mirror_ReceivedDamageDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UMRRAbilitySystemComponent::StaticRegisterNativesUMRRAbilitySystemComponent()
	{
	}
	UClass* Z_Construct_UClass_UMRRAbilitySystemComponent_NoRegister()
	{
		return UMRRAbilitySystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMRRAbilitySystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMRRAbilitySystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Mirror,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRRAbilitySystemComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "Characters/MRRAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/Characters/MRRAbilitySystemComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMRRAbilitySystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRRAbilitySystemComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMRRAbilitySystemComponent_Statics::ClassParams = {
		&UMRRAbilitySystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		0x00000010u,
		METADATA_PARAMS(Z_Construct_UClass_UMRRAbilitySystemComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMRRAbilitySystemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMRRAbilitySystemComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMRRAbilitySystemComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMRRAbilitySystemComponent, 2161663571);
	template<> MIRROR_API UClass* StaticClass<UMRRAbilitySystemComponent>()
	{
		return UMRRAbilitySystemComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMRRAbilitySystemComponent(Z_Construct_UClass_UMRRAbilitySystemComponent, &UMRRAbilitySystemComponent::StaticClass, TEXT("/Script/Mirror"), TEXT("UMRRAbilitySystemComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMRRAbilitySystemComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
