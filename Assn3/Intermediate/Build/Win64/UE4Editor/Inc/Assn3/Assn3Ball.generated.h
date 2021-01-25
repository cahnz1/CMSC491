// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASSN3_Assn3Ball_generated_h
#error "Assn3Ball.generated.h already included, missing '#pragma once' in Assn3Ball.h"
#endif
#define ASSN3_Assn3Ball_generated_h

#define Assn3_Source_Assn3_Assn3Ball_h_12_RPC_WRAPPERS
#define Assn3_Source_Assn3_Assn3Ball_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Assn3_Source_Assn3_Assn3Ball_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAssn3Ball(); \
	friend struct Z_Construct_UClass_AAssn3Ball_Statics; \
public: \
	DECLARE_CLASS(AAssn3Ball, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Assn3"), NO_API) \
	DECLARE_SERIALIZER(AAssn3Ball)


#define Assn3_Source_Assn3_Assn3Ball_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAssn3Ball(); \
	friend struct Z_Construct_UClass_AAssn3Ball_Statics; \
public: \
	DECLARE_CLASS(AAssn3Ball, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Assn3"), NO_API) \
	DECLARE_SERIALIZER(AAssn3Ball)


#define Assn3_Source_Assn3_Assn3Ball_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAssn3Ball(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAssn3Ball) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAssn3Ball); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAssn3Ball); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAssn3Ball(AAssn3Ball&&); \
	NO_API AAssn3Ball(const AAssn3Ball&); \
public:


#define Assn3_Source_Assn3_Assn3Ball_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAssn3Ball(AAssn3Ball&&); \
	NO_API AAssn3Ball(const AAssn3Ball&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAssn3Ball); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAssn3Ball); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAssn3Ball)


#define Assn3_Source_Assn3_Assn3Ball_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Ball() { return STRUCT_OFFSET(AAssn3Ball, Ball); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(AAssn3Ball, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AAssn3Ball, Camera); }


#define Assn3_Source_Assn3_Assn3Ball_h_9_PROLOG
#define Assn3_Source_Assn3_Assn3Ball_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assn3_Source_Assn3_Assn3Ball_h_12_PRIVATE_PROPERTY_OFFSET \
	Assn3_Source_Assn3_Assn3Ball_h_12_RPC_WRAPPERS \
	Assn3_Source_Assn3_Assn3Ball_h_12_INCLASS \
	Assn3_Source_Assn3_Assn3Ball_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Assn3_Source_Assn3_Assn3Ball_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assn3_Source_Assn3_Assn3Ball_h_12_PRIVATE_PROPERTY_OFFSET \
	Assn3_Source_Assn3_Assn3Ball_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Assn3_Source_Assn3_Assn3Ball_h_12_INCLASS_NO_PURE_DECLS \
	Assn3_Source_Assn3_Assn3Ball_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSN3_API UClass* StaticClass<class AAssn3Ball>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Assn3_Source_Assn3_Assn3Ball_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
