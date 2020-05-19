// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mirror/Public/Player/MRRPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMRRPlayerController() {}
// Cross Module References
	MIRROR_API UClass* Z_Construct_UClass_AMRRPlayerController_NoRegister();
	MIRROR_API UClass* Z_Construct_UClass_AMRRPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Mirror();
// End Cross Module References
	void AMRRPlayerController::StaticRegisterNativesAMRRPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AMRRPlayerController_NoRegister()
	{
		return AMRRPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMRRPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMRRPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Mirror,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRRPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Player/MRRPlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/MRRPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMRRPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMRRPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMRRPlayerController_Statics::ClassParams = {
		&AMRRPlayerController::StaticClass,
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
		0x009002A4u,
		0x00000010u,
		METADATA_PARAMS(Z_Construct_UClass_AMRRPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMRRPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMRRPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMRRPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMRRPlayerController, 2885199517);
	template<> MIRROR_API UClass* StaticClass<AMRRPlayerController>()
	{
		return AMRRPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMRRPlayerController(Z_Construct_UClass_AMRRPlayerController, &AMRRPlayerController::StaticClass, TEXT("/Script/Mirror"), TEXT("AMRRPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMRRPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
