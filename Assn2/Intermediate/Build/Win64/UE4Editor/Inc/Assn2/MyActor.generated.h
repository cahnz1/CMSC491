// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASSN2_MyActor_generated_h
#error "MyActor.generated.h already included, missing '#pragma once' in MyActor.h"
#endif
#define ASSN2_MyActor_generated_h

#define Assn2_Source_Assn2_MyActor_h_21_RPC_WRAPPERS
#define Assn2_Source_Assn2_MyActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Assn2_Source_Assn2_MyActor_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyActor(); \
	friend struct Z_Construct_UClass_AMyActor_Statics; \
public: \
	DECLARE_CLASS(AMyActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Assn2"), NO_API) \
	DECLARE_SERIALIZER(AMyActor)


#define Assn2_Source_Assn2_MyActor_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAMyActor(); \
	friend struct Z_Construct_UClass_AMyActor_Statics; \
public: \
	DECLARE_CLASS(AMyActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Assn2"), NO_API) \
	DECLARE_SERIALIZER(AMyActor)


#define Assn2_Source_Assn2_MyActor_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActor(AMyActor&&); \
	NO_API AMyActor(const AMyActor&); \
public:


#define Assn2_Source_Assn2_MyActor_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActor(AMyActor&&); \
	NO_API AMyActor(const AMyActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyActor)


#define Assn2_Source_Assn2_MyActor_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AssociatedComponent() { return STRUCT_OFFSET(AMyActor, AssociatedComponent); } \
	FORCEINLINE static uint32 __PPO__StaticMeshComponent() { return STRUCT_OFFSET(AMyActor, StaticMeshComponent); } \
	FORCEINLINE static uint32 __PPO__StaticMesh() { return STRUCT_OFFSET(AMyActor, StaticMesh); } \
	FORCEINLINE static uint32 __PPO__StaticMaterial() { return STRUCT_OFFSET(AMyActor, StaticMaterial); } \
	FORCEINLINE static uint32 __PPO__rng() { return STRUCT_OFFSET(AMyActor, rng); }


#define Assn2_Source_Assn2_MyActor_h_18_PROLOG
#define Assn2_Source_Assn2_MyActor_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assn2_Source_Assn2_MyActor_h_21_PRIVATE_PROPERTY_OFFSET \
	Assn2_Source_Assn2_MyActor_h_21_RPC_WRAPPERS \
	Assn2_Source_Assn2_MyActor_h_21_INCLASS \
	Assn2_Source_Assn2_MyActor_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Assn2_Source_Assn2_MyActor_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assn2_Source_Assn2_MyActor_h_21_PRIVATE_PROPERTY_OFFSET \
	Assn2_Source_Assn2_MyActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Assn2_Source_Assn2_MyActor_h_21_INCLASS_NO_PURE_DECLS \
	Assn2_Source_Assn2_MyActor_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSN2_API UClass* StaticClass<class AMyActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Assn2_Source_Assn2_MyActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
