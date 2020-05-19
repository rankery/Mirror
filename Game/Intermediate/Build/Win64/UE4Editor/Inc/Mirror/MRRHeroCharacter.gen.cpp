// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mirror/Public/Characters/MRRHeroCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMRRHeroCharacter() {}
// Cross Module References
	MIRROR_API UClass* Z_Construct_UClass_AMRRHeroCharacter_NoRegister();
	MIRROR_API UClass* Z_Construct_UClass_AMRRHeroCharacter();
	MIRROR_API UClass* Z_Construct_UClass_AMRRCharacterBase();
	UPackage* Z_Construct_UPackage__Script_Mirror();
// End Cross Module References
	void AMRRHeroCharacter::StaticRegisterNativesAMRRHeroCharacter()
	{
	}
	UClass* Z_Construct_UClass_AMRRHeroCharacter_NoRegister()
	{
		return AMRRHeroCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMRRHeroCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMRRHeroCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMRRCharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Mirror,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRRHeroCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/MRRHeroCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/MRRHeroCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMRRHeroCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMRRHeroCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMRRHeroCharacter_Statics::ClassParams = {
		&AMRRHeroCharacter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMRRHeroCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMRRHeroCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMRRHeroCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMRRHeroCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMRRHeroCharacter, 4197070804);
	template<> MIRROR_API UClass* StaticClass<AMRRHeroCharacter>()
	{
		return AMRRHeroCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMRRHeroCharacter(Z_Construct_UClass_AMRRHeroCharacter, &AMRRHeroCharacter::StaticClass, TEXT("/Script/Mirror"), TEXT("AMRRHeroCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMRRHeroCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
