// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assn3/Assn3GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssn3GameMode() {}
// Cross Module References
	ASSN3_API UClass* Z_Construct_UClass_AAssn3GameMode_NoRegister();
	ASSN3_API UClass* Z_Construct_UClass_AAssn3GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Assn3();
// End Cross Module References
	void AAssn3GameMode::StaticRegisterNativesAAssn3GameMode()
	{
	}
	UClass* Z_Construct_UClass_AAssn3GameMode_NoRegister()
	{
		return AAssn3GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAssn3GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAssn3GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Assn3,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAssn3GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Assn3GameMode.h" },
		{ "ModuleRelativePath", "Assn3GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAssn3GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAssn3GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAssn3GameMode_Statics::ClassParams = {
		&AAssn3GameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AAssn3GameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAssn3GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAssn3GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAssn3GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAssn3GameMode, 3017376171);
	template<> ASSN3_API UClass* StaticClass<AAssn3GameMode>()
	{
		return AAssn3GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAssn3GameMode(Z_Construct_UClass_AAssn3GameMode, &AAssn3GameMode::StaticClass, TEXT("/Script/Assn3"), TEXT("AAssn3GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAssn3GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
