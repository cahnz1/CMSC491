// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assn2/MyActor1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActor1() {}
// Cross Module References
	ASSN2_API UClass* Z_Construct_UClass_AMyActor1_NoRegister();
	ASSN2_API UClass* Z_Construct_UClass_AMyActor1();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Assn2();
// End Cross Module References
	void AMyActor1::StaticRegisterNativesAMyActor1()
	{
	}
	UClass* Z_Construct_UClass_AMyActor1_NoRegister()
	{
		return AMyActor1::StaticClass();
	}
	struct Z_Construct_UClass_AMyActor1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyActor1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Assn2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyActor1.h" },
		{ "ModuleRelativePath", "MyActor1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyActor1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActor1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyActor1_Statics::ClassParams = {
		&AMyActor1::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMyActor1_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyActor1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyActor1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyActor1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyActor1, 3363549210);
	template<> ASSN2_API UClass* StaticClass<AMyActor1>()
	{
		return AMyActor1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyActor1(Z_Construct_UClass_AMyActor1, &AMyActor1::StaticClass, TEXT("/Script/Assn2"), TEXT("AMyActor1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActor1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
