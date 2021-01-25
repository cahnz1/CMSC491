// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assn5/Assn5GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssn5GameModeBase() {}
// Cross Module References
	ASSN5_API UClass* Z_Construct_UClass_AAssn5GameModeBase_NoRegister();
	ASSN5_API UClass* Z_Construct_UClass_AAssn5GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Assn5();
// End Cross Module References
	void AAssn5GameModeBase::StaticRegisterNativesAAssn5GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AAssn5GameModeBase_NoRegister()
	{
		return AAssn5GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AAssn5GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAssn5GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Assn5,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAssn5GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Assn5GameModeBase.h" },
		{ "ModuleRelativePath", "Assn5GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAssn5GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAssn5GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAssn5GameModeBase_Statics::ClassParams = {
		&AAssn5GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAssn5GameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAssn5GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAssn5GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAssn5GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAssn5GameModeBase, 169791789);
	template<> ASSN5_API UClass* StaticClass<AAssn5GameModeBase>()
	{
		return AAssn5GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAssn5GameModeBase(Z_Construct_UClass_AAssn5GameModeBase, &AAssn5GameModeBase::StaticClass, TEXT("/Script/Assn5"), TEXT("AAssn5GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAssn5GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
