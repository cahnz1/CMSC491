// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FileImporter/Public/FileImporter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileImporter() {}
// Cross Module References
	FILEIMPORTER_API UClass* Z_Construct_UClass_UFileImporter_NoRegister();
	FILEIMPORTER_API UClass* Z_Construct_UClass_UFileImporter();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_FileImporter();
// End Cross Module References
	void UFileImporter::StaticRegisterNativesUFileImporter()
	{
	}
	UClass* Z_Construct_UClass_UFileImporter_NoRegister()
	{
		return UFileImporter::StaticClass();
	}
	struct Z_Construct_UClass_UFileImporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFileImporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_FileImporter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileImporter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FileImporter.h" },
		{ "ModuleRelativePath", "Public/FileImporter.h" },
		{ "ToolTip", "#include \"Misc/EnumClassFlags.h\"" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFileImporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileImporter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFileImporter_Statics::ClassParams = {
		&UFileImporter::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UFileImporter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFileImporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFileImporter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFileImporter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFileImporter, 4173337217);
	template<> FILEIMPORTER_API UClass* StaticClass<UFileImporter>()
	{
		return UFileImporter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFileImporter(Z_Construct_UClass_UFileImporter, &UFileImporter::StaticClass, TEXT("/Script/FileImporter"), TEXT("UFileImporter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFileImporter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
