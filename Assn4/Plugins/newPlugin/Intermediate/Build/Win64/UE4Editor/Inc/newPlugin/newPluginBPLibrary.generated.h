// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPrand;
struct FVector2D;
struct FVector;
class AActor;
#ifdef NEWPLUGIN_newPluginBPLibrary_generated_h
#error "newPluginBPLibrary.generated.h already included, missing '#pragma once' in newPluginBPLibrary.h"
#endif
#define NEWPLUGIN_newPluginBPLibrary_generated_h

#define Assn4_Plugins_newPlugin_Source_newPlugin_Public_newPluginBPLibrary_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPrand_Statics; \
	NEWPLUGIN_API static class UScriptStruct* StaticStruct();


template<> NEWPLUGIN_API UScriptStruct* StaticStruct<struct FPrand>();

#define Assn4_Plugins_newPlugin_Source_newPlugin_Public_newPluginBPLibrary_h_50_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBlueNoisePointInRange) \
	{ \
		P_GET_STRUCT_REF(FPrand,Z_Param_Out_BlueNoiseStream); \
		P_GET_STRUCT(FVector2D,Z_Param_Min); \
		P_GET_STRUCT(FVector2D,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UnewPluginBPLibrary::BlueNoisePointInRange(Z_Param_Out_BlueNoiseStream,Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetBlueNoiseStreamSeed) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Target); \
		P_GET_STRUCT_REF(FPrand,Z_Param_Out_BlueNoiseStream); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Seed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UnewPluginBPLibrary::setBlueNoiseStreamSeed(Z_Param_Target,Z_Param_Out_BlueNoiseStream,Z_Param_Seed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execnewPluginSampleFunction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UnewPluginBPLibrary::newPluginSampleFunction(Z_Param_Param); \
		P_NATIVE_END; \
	}


#define Assn4_Plugins_newPlugin_Source_newPlugin_Public_newPluginBPLibrary_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBlueNoisePointInRange) \
	{ \
		P_GET_STRUCT_REF(FPrand,Z_Param_Out_BlueNoiseStream); \
		P_GET_STRUCT(FVector2D,Z_Param_Min); \
		P_GET_STRUCT(FVector2D,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UnewPluginBPLibrary::BlueNoisePointInRange(Z_Param_Out_BlueNoiseStream,Z_Param_Min,Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetBlueNoiseStreamSeed) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Target); \
		P_GET_STRUCT_REF(FPrand,Z_Param_Out_BlueNoiseStream); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Seed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UnewPluginBPLibrary::setBlueNoiseStreamSeed(Z_Param_Target,Z_Param_Out_BlueNoiseStream,Z_Param_Seed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execnewPluginSampleFunction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UnewPluginBPLibrary::newPluginSampleFunction(Z_Param_Param); \
		P_NATIVE_END; \
	}


#define Assn4_Plugins_newPlugin_Source_newPlugin_Public_newPluginBPLibrary_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUnewPluginBPLibrary(); \
	friend struct Z_Construct_UClass_UnewPluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UnewPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/newPlugin"), NO_API) \
	DECLARE_SERIALIZER(UnewPluginBPLibrary)


#define Assn4_Plugins_newPlugin_Source_newPlugin_Public_newPluginBPLibrary_h_50_INCLASS \
private: \
	static void StaticRegisterNativesUnewPluginBPLibrary(); \
	friend struct Z_Construct_UClass_UnewPluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UnewPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/newPlugin"), NO_API) \
	DECLARE_SERIALIZER(UnewPluginBPLibrary)


#define Assn4_Plugins_newPlugin_Source_newPlugin_Public_newPluginBPLibrary_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UnewPluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UnewPluginBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UnewPluginBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UnewPluginBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UnewPluginBPLibrary(UnewPluginBPLibrary&&); \
	NO_API UnewPluginBPLibrary(const UnewPluginBPLibrary&); \
public:


#define Assn4_Plugins_newPlugin_Source_newPlugin_Public_newPluginBPLibrary_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UnewPluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UnewPluginBPLibrary(UnewPluginBPLibrary&&); \
	NO_API UnewPluginBPLibrary(const UnewPluginBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UnewPluginBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UnewPluginBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UnewPluginBPLibrary)


#define Assn4_Plugins_newPlugin_Source_newPlugin_Public_newPluginBPLibrary_h_50_PRIVATE_PROPERTY_OFFSET
#define Assn4_Plugins_newPlugin_Source_newPlugin_Public_newPluginBPLibrary_h_47_PROLOG
#define Assn4_Plugins_newPlugin_Source_newPlugin_Public_newPluginBPLibrary_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assn4_Plugins_newPlugin_Source_newPlugin_Public_newPluginBPLibrary_h_50_PRIVATE_PROPERTY_OFFSET \
	Assn4_Plugins_newPlugin_Source_newPlugin_Public_newPluginBPLibrary_h_50_RPC_WRAPPERS \
	Assn4_Plugins_newPlugin_Source_newPlugin_Public_newPluginBPLibrary_h_50_INCLASS \
	Assn4_Plugins_newPlugin_Source_newPlugin_Public_newPluginBPLibrary_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Assn4_Plugins_newPlugin_Source_newPlugin_Public_newPluginBPLibrary_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assn4_Plugins_newPlugin_Source_newPlugin_Public_newPluginBPLibrary_h_50_PRIVATE_PROPERTY_OFFSET \
	Assn4_Plugins_newPlugin_Source_newPlugin_Public_newPluginBPLibrary_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	Assn4_Plugins_newPlugin_Source_newPlugin_Public_newPluginBPLibrary_h_50_INCLASS_NO_PURE_DECLS \
	Assn4_Plugins_newPlugin_Source_newPlugin_Public_newPluginBPLibrary_h_50_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class newPluginBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEWPLUGIN_API UClass* StaticClass<class UnewPluginBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Assn4_Plugins_newPlugin_Source_newPlugin_Public_newPluginBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
