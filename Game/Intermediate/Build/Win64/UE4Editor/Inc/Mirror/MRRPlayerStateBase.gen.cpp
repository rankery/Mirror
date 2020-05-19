// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mirror/Public/Characters/MRRPlayerStateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMRRPlayerStateBase() {}
// Cross Module References
	MIRROR_API UClass* Z_Construct_UClass_AMRRPlayerStateBase_NoRegister();
	MIRROR_API UClass* Z_Construct_UClass_AMRRPlayerStateBase();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_Mirror();
// End Cross Module References
	void AMRRPlayerStateBase::StaticRegisterNativesAMRRPlayerStateBase()
	{
	}
	UClass* Z_Construct_UClass_AMRRPlayerStateBase_NoRegister()
	{
		return AMRRPlayerStateBase::StaticClass();
	}
	struct Z_Construct_UClass_AMRRPlayerStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMRRPlayerStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_Mirror,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRRPlayerStateBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Characters/MRRPlayerStateBase.h" },
		{ "ModuleRelativePath", "Public/Characters/MRRPlayerStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMRRPlayerStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMRRPlayerStateBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMRRPlayerStateBase_Statics::ClassParams = {
		&AMRRPlayerStateBase::StaticClass,
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
		0x009002A4u,
		0x00000010u,
		METADATA_PARAMS(Z_Construct_UClass_AMRRPlayerStateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMRRPlayerStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMRRPlayerStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMRRPlayerStateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMRRPlayerStateBase, 1587331596);
	template<> MIRROR_API UClass* StaticClass<AMRRPlayerStateBase>()
	{
		return AMRRPlayerStateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMRRPlayerStateBase(Z_Construct_UClass_AMRRPlayerStateBase, &AMRRPlayerStateBase::StaticClass, TEXT("/Script/Mirror"), TEXT("AMRRPlayerStateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMRRPlayerStateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
