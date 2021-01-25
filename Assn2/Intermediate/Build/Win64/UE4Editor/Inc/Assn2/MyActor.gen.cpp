// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assn2/MyActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActor() {}
// Cross Module References
	ASSN2_API UClass* Z_Construct_UClass_AMyActor_NoRegister();
	ASSN2_API UClass* Z_Construct_UClass_AMyActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Assn2();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AMyActor::StaticRegisterNativesAMyActor()
	{
	}
	UClass* Z_Construct_UClass_AMyActor_NoRegister()
	{
		return AMyActor::StaticClass();
	}
	struct Z_Construct_UClass_AMyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rng_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rng;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssociatedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssociatedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Assn2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyActor.h" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_rng_MetaData[] = {
		{ "Category", "MyActor" },
		{ "ModuleRelativePath", "MyActor.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere)\nint Seed;" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_rng = { "rng", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor, rng), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_rng_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_rng_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_StaticMaterial_MetaData[] = {
		{ "Category", "MyActor" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_StaticMaterial = { "StaticMaterial", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor, StaticMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_StaticMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_StaticMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "MyActor" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_StaticMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyActor.h" },
		{ "ToolTip", "class UStaticMeshComponent* StaticMeshComponent;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor, StaticMeshComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_StaticMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_StaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_AssociatedComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyActor.h" },
		{ "ToolTip", "std::vector<unsigned int> neighborType();" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_AssociatedComponent = { "AssociatedComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor, AssociatedComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_AssociatedComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_AssociatedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_rng,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_StaticMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_StaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_AssociatedComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyActor_Statics::ClassParams = {
		&AMyActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyActor, 2227885299);
	template<> ASSN2_API UClass* StaticClass<AMyActor>()
	{
		return AMyActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyActor(Z_Construct_UClass_AMyActor, &AMyActor::StaticClass, TEXT("/Script/Assn2"), TEXT("AMyActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
