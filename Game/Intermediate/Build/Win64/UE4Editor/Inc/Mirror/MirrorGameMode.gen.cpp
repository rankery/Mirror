// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mirror/MirrorGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMirrorGameMode() {}
// Cross Module References
	MIRROR_API UClass* Z_Construct_UClass_AMirrorGameMode_NoRegister();
	MIRROR_API UClass* Z_Construct_UClass_AMirrorGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Mirror();
// End Cross Module References
	void AMirrorGameMode::StaticRegisterNativesAMirrorGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMirrorGameMode_NoRegister()
	{
		return AMirrorGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMirrorGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMirrorGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Mirror,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMirrorGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MirrorGameMode.h" },
		{ "ModuleRelativePath", "MirrorGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMirrorGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMirrorGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMirrorGameMode_Statics::ClassParams = {
		&AMirrorGameMode::StaticClass,
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
		0x008802ACu,
		0x00000016u,
		METADATA_PARAMS(Z_Construct_UClass_AMirrorGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMirrorGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMirrorGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMirrorGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMirrorGameMode, 4128851840);
	template<> MIRROR_API UClass* StaticClass<AMirrorGameMode>()
	{
		return AMirrorGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMirrorGameMode(Z_Construct_UClass_AMirrorGameMode, &AMirrorGameMode::StaticClass, TEXT("/Script/Mirror"), TEXT("AMirrorGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMirrorGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
