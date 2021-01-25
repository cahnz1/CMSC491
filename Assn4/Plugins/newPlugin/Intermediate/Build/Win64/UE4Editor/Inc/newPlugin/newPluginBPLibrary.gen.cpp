// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "newPlugin/Public/newPluginBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodenewPluginBPLibrary() {}
// Cross Module References
	NEWPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPrand();
	UPackage* Z_Construct_UPackage__Script_newPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	NEWPLUGIN_API UClass* Z_Construct_UClass_UnewPluginBPLibrary_NoRegister();
	NEWPLUGIN_API UClass* Z_Construct_UClass_UnewPluginBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	NEWPLUGIN_API UFunction* Z_Construct_UFunction_UnewPluginBPLibrary_BlueNoisePointInRange();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	NEWPLUGIN_API UFunction* Z_Construct_UFunction_UnewPluginBPLibrary_newPluginSampleFunction();
	NEWPLUGIN_API UFunction* Z_Construct_UFunction_UnewPluginBPLibrary_setBlueNoiseStreamSeed();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FPrand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NEWPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FPrand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPrand, Z_Construct_UPackage__Script_newPlugin(), TEXT("Prand"), sizeof(FPrand), Get_Z_Construct_UScriptStruct_FPrand_Hash());
	}
	return Singleton;
}
template<> NEWPLUGIN_API UScriptStruct* StaticStruct<FPrand>()
{
	return FPrand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPrand(FPrand::StaticStruct, TEXT("/Script/newPlugin"), TEXT("Prand"), false, nullptr, nullptr);
static struct FScriptStruct_newPlugin_StaticRegisterNativesFPrand
{
	FScriptStruct_newPlugin_StaticRegisterNativesFPrand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Prand")),new UScriptStruct::TCppStructOps<FPrand>);
	}
} ScriptStruct_newPlugin_StaticRegisterNativesFPrand;
	struct Z_Construct_UScriptStruct_FPrand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rstream_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rstream;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrand_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/newPluginBPLibrary.h" },
		{ "ToolTip", ", meta = (HasNativeMake = \"Engine.KismetMathLibrary.MakeRandomStream\", HasNativeBreak = \"Engine.KismetMathLibrary.BreakRandomStream\"))" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPrand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPrand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrand_Statics::NewProp_rstream_MetaData[] = {
		{ "ModuleRelativePath", "Public/newPluginBPLibrary.h" },
		{ "ToolTip", "Holds the current seed." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrand_Statics::NewProp_rstream = { "rstream", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrand, rstream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrand_Statics::NewProp_rstream_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPrand_Statics::NewProp_rstream_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPrand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrand_Statics::NewProp_rstream,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPrand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_newPlugin,
		nullptr,
		&NewStructOps,
		"Prand",
		sizeof(FPrand),
		alignof(FPrand),
		Z_Construct_UScriptStruct_FPrand_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPrand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPrand_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPrand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPrand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPrand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_newPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Prand"), sizeof(FPrand), Get_Z_Construct_UScriptStruct_FPrand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPrand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPrand_Hash() { return 783461067U; }
	void UnewPluginBPLibrary::StaticRegisterNativesUnewPluginBPLibrary()
	{
		UClass* Class = UnewPluginBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BlueNoisePointInRange", &UnewPluginBPLibrary::execBlueNoisePointInRange },
			{ "newPluginSampleFunction", &UnewPluginBPLibrary::execnewPluginSampleFunction },
			{ "setBlueNoiseStreamSeed", &UnewPluginBPLibrary::execsetBlueNoiseStreamSeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UnewPluginBPLibrary_BlueNoisePointInRange_Statics
	{
		struct newPluginBPLibrary_eventBlueNoisePointInRange_Parms
		{
			FPrand BlueNoiseStream;
			FVector2D Min;
			FVector2D Max;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Max;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Min;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlueNoiseStream;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UnewPluginBPLibrary_BlueNoisePointInRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(newPluginBPLibrary_eventBlueNoisePointInRange_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UnewPluginBPLibrary_BlueNoisePointInRange_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(newPluginBPLibrary_eventBlueNoisePointInRange_Parms, Max), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UnewPluginBPLibrary_BlueNoisePointInRange_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(newPluginBPLibrary_eventBlueNoisePointInRange_Parms, Min), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UnewPluginBPLibrary_BlueNoisePointInRange_Statics::NewProp_BlueNoiseStream = { "BlueNoiseStream", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(newPluginBPLibrary_eventBlueNoisePointInRange_Parms, BlueNoiseStream), Z_Construct_UScriptStruct_FPrand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UnewPluginBPLibrary_BlueNoisePointInRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UnewPluginBPLibrary_BlueNoisePointInRange_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UnewPluginBPLibrary_BlueNoisePointInRange_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UnewPluginBPLibrary_BlueNoisePointInRange_Statics::NewProp_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UnewPluginBPLibrary_BlueNoisePointInRange_Statics::NewProp_BlueNoiseStream,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UnewPluginBPLibrary_BlueNoisePointInRange_Statics::Function_MetaDataParams[] = {
		{ "defaultToSelf", "Target" },
		{ "HidePin", "Target" },
		{ "ModuleRelativePath", "Public/newPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UnewPluginBPLibrary_BlueNoisePointInRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UnewPluginBPLibrary, nullptr, "BlueNoisePointInRange", sizeof(newPluginBPLibrary_eventBlueNoisePointInRange_Parms), Z_Construct_UFunction_UnewPluginBPLibrary_BlueNoisePointInRange_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UnewPluginBPLibrary_BlueNoisePointInRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UnewPluginBPLibrary_BlueNoisePointInRange_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UnewPluginBPLibrary_BlueNoisePointInRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UnewPluginBPLibrary_BlueNoisePointInRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UnewPluginBPLibrary_BlueNoisePointInRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UnewPluginBPLibrary_newPluginSampleFunction_Statics
	{
		struct newPluginBPLibrary_eventnewPluginSampleFunction_Parms
		{
			float Param;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UnewPluginBPLibrary_newPluginSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(newPluginBPLibrary_eventnewPluginSampleFunction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UnewPluginBPLibrary_newPluginSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(newPluginBPLibrary_eventnewPluginSampleFunction_Parms, Param), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UnewPluginBPLibrary_newPluginSampleFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UnewPluginBPLibrary_newPluginSampleFunction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UnewPluginBPLibrary_newPluginSampleFunction_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UnewPluginBPLibrary_newPluginSampleFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "newPluginTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "newPlugin sample test testing" },
		{ "ModuleRelativePath", "Public/newPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UnewPluginBPLibrary_newPluginSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UnewPluginBPLibrary, nullptr, "newPluginSampleFunction", sizeof(newPluginBPLibrary_eventnewPluginSampleFunction_Parms), Z_Construct_UFunction_UnewPluginBPLibrary_newPluginSampleFunction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UnewPluginBPLibrary_newPluginSampleFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UnewPluginBPLibrary_newPluginSampleFunction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UnewPluginBPLibrary_newPluginSampleFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UnewPluginBPLibrary_newPluginSampleFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UnewPluginBPLibrary_newPluginSampleFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UnewPluginBPLibrary_setBlueNoiseStreamSeed_Statics
	{
		struct newPluginBPLibrary_eventsetBlueNoiseStreamSeed_Parms
		{
			AActor* Target;
			FPrand BlueNoiseStream;
			int32 Seed;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlueNoiseStream;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UnewPluginBPLibrary_setBlueNoiseStreamSeed_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(newPluginBPLibrary_eventsetBlueNoiseStreamSeed_Parms, Seed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UnewPluginBPLibrary_setBlueNoiseStreamSeed_Statics::NewProp_BlueNoiseStream = { "BlueNoiseStream", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(newPluginBPLibrary_eventsetBlueNoiseStreamSeed_Parms, BlueNoiseStream), Z_Construct_UScriptStruct_FPrand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UnewPluginBPLibrary_setBlueNoiseStreamSeed_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(newPluginBPLibrary_eventsetBlueNoiseStreamSeed_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UnewPluginBPLibrary_setBlueNoiseStreamSeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UnewPluginBPLibrary_setBlueNoiseStreamSeed_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UnewPluginBPLibrary_setBlueNoiseStreamSeed_Statics::NewProp_BlueNoiseStream,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UnewPluginBPLibrary_setBlueNoiseStreamSeed_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UnewPluginBPLibrary_setBlueNoiseStreamSeed_Statics::Function_MetaDataParams[] = {
		{ "defaultToSelf", "Target" },
		{ "HidePin", "Target" },
		{ "ModuleRelativePath", "Public/newPluginBPLibrary.h" },
		{ "ToolTip", "blueprint node" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UnewPluginBPLibrary_setBlueNoiseStreamSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UnewPluginBPLibrary, nullptr, "setBlueNoiseStreamSeed", sizeof(newPluginBPLibrary_eventsetBlueNoiseStreamSeed_Parms), Z_Construct_UFunction_UnewPluginBPLibrary_setBlueNoiseStreamSeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UnewPluginBPLibrary_setBlueNoiseStreamSeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UnewPluginBPLibrary_setBlueNoiseStreamSeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UnewPluginBPLibrary_setBlueNoiseStreamSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UnewPluginBPLibrary_setBlueNoiseStreamSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UnewPluginBPLibrary_setBlueNoiseStreamSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UnewPluginBPLibrary_NoRegister()
	{
		return UnewPluginBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UnewPluginBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UnewPluginBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_newPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UnewPluginBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UnewPluginBPLibrary_BlueNoisePointInRange, "BlueNoisePointInRange" }, // 2562572664
		{ &Z_Construct_UFunction_UnewPluginBPLibrary_newPluginSampleFunction, "newPluginSampleFunction" }, // 3686243258
		{ &Z_Construct_UFunction_UnewPluginBPLibrary_setBlueNoiseStreamSeed, "setBlueNoiseStreamSeed" }, // 1595855410
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UnewPluginBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "newPluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/newPluginBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UnewPluginBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UnewPluginBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UnewPluginBPLibrary_Statics::ClassParams = {
		&UnewPluginBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UnewPluginBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UnewPluginBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UnewPluginBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UnewPluginBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UnewPluginBPLibrary, 2533665908);
	template<> NEWPLUGIN_API UClass* StaticClass<UnewPluginBPLibrary>()
	{
		return UnewPluginBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UnewPluginBPLibrary(Z_Construct_UClass_UnewPluginBPLibrary, &UnewPluginBPLibrary::StaticClass, TEXT("/Script/newPlugin"), TEXT("UnewPluginBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UnewPluginBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
