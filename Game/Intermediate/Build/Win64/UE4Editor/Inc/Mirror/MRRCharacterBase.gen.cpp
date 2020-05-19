// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mirror/Public/Characters/MRRCharacterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMRRCharacterBase() {}
// Cross Module References
	MIRROR_API UClass* Z_Construct_UClass_AMRRCharacterBase_NoRegister();
	MIRROR_API UClass* Z_Construct_UClass_AMRRCharacterBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Mirror();
// End Cross Module References
	void AMRRCharacterBase::StaticRegisterNativesAMRRCharacterBase()
	{
	}
	UClass* Z_Construct_UClass_AMRRCharacterBase_NoRegister()
	{
		return AMRRCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_AMRRCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMRRCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Mirror,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRRCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/MRRCharacterBase.h" },
		{ "ModuleRelativePath", "Public/Characters/MRRCharacterBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMRRCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMRRCharacterBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMRRCharacterBase_Statics::ClassParams = {
		&AMRRCharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		0x00000010u,
		METADATA_PARAMS(Z_Construct_UClass_AMRRCharacterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMRRCharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMRRCharacterBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMRRCharacterBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMRRCharacterBase, 3222449988);
	template<> MIRROR_API UClass* StaticClass<AMRRCharacterBase>()
	{
		return AMRRCharacterBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMRRCharacterBase(Z_Construct_UClass_AMRRCharacterBase, &AMRRCharacterBase::StaticClass, TEXT("/Script/Mirror"), TEXT("AMRRCharacterBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMRRCharacterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
