// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef ASSN3_MyPawn_generated_h
#error "MyPawn.generated.h already included, missing '#pragma once' in MyPawn.h"
#endif
#define ASSN3_MyPawn_generated_h

#define Assn3_Source_Assn3_MyPawn_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComponentEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnComponentEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnComponentBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnComponentBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Assn3_Source_Assn3_MyPawn_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnComponentEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnComponentBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnComponentBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Assn3_Source_Assn3_MyPawn_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPawn(); \
	friend struct Z_Construct_UClass_AMyPawn_Statics; \
public: \
	DECLARE_CLASS(AMyPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Assn3"), NO_API) \
	DECLARE_SERIALIZER(AMyPawn)


#define Assn3_Source_Assn3_MyPawn_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAMyPawn(); \
	friend struct Z_Construct_UClass_AMyPawn_Statics; \
public: \
	DECLARE_CLASS(AMyPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Assn3"), NO_API) \
	DECLARE_SERIALIZER(AMyPawn)


#define Assn3_Source_Assn3_MyPawn_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPawn(AMyPawn&&); \
	NO_API AMyPawn(const AMyPawn&); \
public:


#define Assn3_Source_Assn3_MyPawn_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPawn(AMyPawn&&); \
	NO_API AMyPawn(const AMyPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPawn)


#define Assn3_Source_Assn3_MyPawn_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Pawn() { return STRUCT_OFFSET(AMyPawn, Pawn); } \
	FORCEINLINE static uint32 __PPO__sphereComponent() { return STRUCT_OFFSET(AMyPawn, sphereComponent); } \
	FORCEINLINE static uint32 __PPO__neighbors() { return STRUCT_OFFSET(AMyPawn, neighbors); } \
	FORCEINLINE static uint32 __PPO__avoidenceForceScale() { return STRUCT_OFFSET(AMyPawn, avoidenceForceScale); } \
	FORCEINLINE static uint32 __PPO__alignmentForceScale() { return STRUCT_OFFSET(AMyPawn, alignmentForceScale); } \
	FORCEINLINE static uint32 __PPO__cohesionForceScale() { return STRUCT_OFFSET(AMyPawn, cohesionForceScale); }


#define Assn3_Source_Assn3_MyPawn_h_19_PROLOG
#define Assn3_Source_Assn3_MyPawn_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assn3_Source_Assn3_MyPawn_h_22_PRIVATE_PROPERTY_OFFSET \
	Assn3_Source_Assn3_MyPawn_h_22_RPC_WRAPPERS \
	Assn3_Source_Assn3_MyPawn_h_22_INCLASS \
	Assn3_Source_Assn3_MyPawn_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Assn3_Source_Assn3_MyPawn_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assn3_Source_Assn3_MyPawn_h_22_PRIVATE_PROPERTY_OFFSET \
	Assn3_Source_Assn3_MyPawn_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Assn3_Source_Assn3_MyPawn_h_22_INCLASS_NO_PURE_DECLS \
	Assn3_Source_Assn3_MyPawn_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSN3_API UClass* StaticClass<class AMyPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Assn3_Source_Assn3_MyPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
