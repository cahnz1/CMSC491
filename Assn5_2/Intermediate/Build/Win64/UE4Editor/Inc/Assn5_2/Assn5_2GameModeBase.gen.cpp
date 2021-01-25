// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assn5_2/Assn5_2GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssn5_2GameModeBase() {}
// Cross Module References
	ASSN5_2_API UClass* Z_Construct_UClass_AAssn5_2GameModeBase_NoRegister();
	ASSN5_2_API UClass* Z_Construct_UClass_AAssn5_2GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Assn5_2();
// End Cross Module References
	void AAssn5_2GameModeBase::StaticRegisterNativesAAssn5_2GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AAssn5_2GameModeBase_NoRegister()
	{
		return AAssn5_2GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AAssn5_2GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAssn5_2GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Assn5_2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAssn5_2GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Assn5_2GameModeBase.h" },
		{ "ModuleRelativePath", "Assn5_2GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAssn5_2GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAssn5_2GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAssn5_2GameModeBase_Statics::ClassParams = {
		&AAssn5_2GameModeBase::StaticClass,
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
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AAssn5_2GameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAssn5_2GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAssn5_2GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAssn5_2GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAssn5_2GameModeBase, 379352271);
	template<> ASSN5_2_API UClass* StaticClass<AAssn5_2GameModeBase>()
	{
		return AAssn5_2GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAssn5_2GameModeBase(Z_Construct_UClass_AAssn5_2GameModeBase, &AAssn5_2GameModeBase::StaticClass, TEXT("/Script/Assn5_2"), TEXT("AAssn5_2GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAssn5_2GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
