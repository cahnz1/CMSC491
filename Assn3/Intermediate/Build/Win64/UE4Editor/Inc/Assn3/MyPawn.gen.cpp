// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assn3/MyPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPawn() {}
// Cross Module References
	ASSN3_API UClass* Z_Construct_UClass_AMyPawn_NoRegister();
	ASSN3_API UClass* Z_Construct_UClass_AMyPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Assn3();
	ASSN3_API UFunction* Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ASSN3_API UFunction* Z_Construct_UFunction_AMyPawn_OnComponentEndOverlap();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AMyPawn::StaticRegisterNativesAMyPawn()
	{
		UClass* Class = AMyPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnComponentBeginOverlap", &AMyPawn::execOnComponentBeginOverlap },
			{ "OnComponentEndOverlap", &AMyPawn::execOnComponentEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap_Statics
	{
		struct MyPawn_eventOnComponentBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPawn_eventOnComponentBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((MyPawn_eventOnComponentBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyPawn_eventOnComponentBeginOverlap_Parms), &Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPawn_eventOnComponentBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPawn_eventOnComponentBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPawn_eventOnComponentBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPawn_eventOnComponentBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPawn.h" },
		{ "ToolTip", "begin overlap\nUPROPERTY(BlueprintAssignable, Category = \"Collision\")\n       FComponentBeginOverlapSignature  OnComponentBeginOverlap;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "OnComponentBeginOverlap", sizeof(MyPawn_eventOnComponentBeginOverlap_Parms), Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPawn_OnComponentEndOverlap_Statics
	{
		struct MyPawn_eventOnComponentEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyPawn_OnComponentEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPawn_eventOnComponentEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_OnComponentEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyPawn_OnComponentEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPawn_eventOnComponentEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMyPawn_OnComponentEndOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_OnComponentEndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyPawn_OnComponentEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPawn_eventOnComponentEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_OnComponentEndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyPawn_OnComponentEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPawn_eventOnComponentEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMyPawn_OnComponentEndOverlap_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_OnComponentEndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_OnComponentEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_OnComponentEndOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_OnComponentEndOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_OnComponentEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_OnComponentEndOverlap_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_OnComponentEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPawn.h" },
		{ "ToolTip", "end overlap\nUPROPERTY(BlueprintAssignable, Category = \"Collision\")" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_OnComponentEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "OnComponentEndOverlap", sizeof(MyPawn_eventOnComponentEndOverlap_Parms), Z_Construct_UFunction_AMyPawn_OnComponentEndOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_OnComponentEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPawn_OnComponentEndOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_OnComponentEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPawn_OnComponentEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPawn_OnComponentEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyPawn_NoRegister()
	{
		return AMyPawn::StaticClass();
	}
	struct Z_Construct_UClass_AMyPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cohesionForceScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_cohesionForceScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_alignmentForceScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_alignmentForceScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_avoidenceForceScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_avoidenceForceScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_neighbors_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_neighbors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_neighbors_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sphereComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sphereComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Assn3,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyPawn_OnComponentBeginOverlap, "OnComponentBeginOverlap" }, // 588157391
		{ &Z_Construct_UFunction_AMyPawn_OnComponentEndOverlap, "OnComponentEndOverlap" }, // 2222971767
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyPawn.h" },
		{ "ModuleRelativePath", "MyPawn.h" },
		{ "ToolTip", "#include <stdlib.h>\n#include <iostream>" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::NewProp_cohesionForceScale_MetaData[] = {
		{ "Category", "MyPawn" },
		{ "ModuleRelativePath", "MyPawn.h" },
		{ "ToolTip", "alignmentForceScale" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_cohesionForceScale = { "cohesionForceScale", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPawn, cohesionForceScale), METADATA_PARAMS(Z_Construct_UClass_AMyPawn_Statics::NewProp_cohesionForceScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::NewProp_cohesionForceScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::NewProp_alignmentForceScale_MetaData[] = {
		{ "Category", "MyPawn" },
		{ "ModuleRelativePath", "MyPawn.h" },
		{ "ToolTip", "avoidenceForceScale" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_alignmentForceScale = { "alignmentForceScale", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPawn, alignmentForceScale), METADATA_PARAMS(Z_Construct_UClass_AMyPawn_Statics::NewProp_alignmentForceScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::NewProp_alignmentForceScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::NewProp_avoidenceForceScale_MetaData[] = {
		{ "Category", "MyPawn" },
		{ "ModuleRelativePath", "MyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_avoidenceForceScale = { "avoidenceForceScale", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPawn, avoidenceForceScale), METADATA_PARAMS(Z_Construct_UClass_AMyPawn_Statics::NewProp_avoidenceForceScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::NewProp_avoidenceForceScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::NewProp_neighbors_MetaData[] = {
		{ "Category", "MyPawn" },
		{ "ModuleRelativePath", "MyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_neighbors = { "neighbors", nullptr, (EPropertyFlags)0x0040000000022001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPawn, neighbors), METADATA_PARAMS(Z_Construct_UClass_AMyPawn_Statics::NewProp_neighbors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::NewProp_neighbors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_neighbors_ElementProp = { "neighbors", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::NewProp_sphereComponent_MetaData[] = {
		{ "Category", "MyPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPawn.h" },
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = sphereComponent, meta = (AllowPrivateAccess = \"true\")) catagory- name for details\nhide after debig" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_sphereComponent = { "sphereComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPawn, sphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPawn_Statics::NewProp_sphereComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::NewProp_sphereComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::NewProp_Pawn_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPawn.h" },
		{ "ToolTip", "catagory- name for details" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPawn, Pawn), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPawn_Statics::NewProp_Pawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::NewProp_Pawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_cohesionForceScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_alignmentForceScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_avoidenceForceScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_neighbors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_neighbors_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_sphereComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_Pawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyPawn_Statics::ClassParams = {
		&AMyPawn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyPawn_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMyPawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyPawn, 1345745178);
	template<> ASSN3_API UClass* StaticClass<AMyPawn>()
	{
		return AMyPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyPawn(Z_Construct_UClass_AMyPawn, &AMyPawn::StaticClass, TEXT("/Script/Assn3"), TEXT("AMyPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
