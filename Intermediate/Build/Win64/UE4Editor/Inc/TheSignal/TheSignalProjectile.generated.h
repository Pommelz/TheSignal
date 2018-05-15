// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef THESIGNAL_TheSignalProjectile_generated_h
#error "TheSignalProjectile.generated.h already included, missing '#pragma once' in TheSignalProjectile.h"
#endif
#define THESIGNAL_TheSignalProjectile_generated_h

#define The_Signal_Source_TheSignal_TheSignalProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define The_Signal_Source_TheSignal_TheSignalProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define The_Signal_Source_TheSignal_TheSignalProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATheSignalProjectile(); \
	friend THESIGNAL_API class UClass* Z_Construct_UClass_ATheSignalProjectile(); \
public: \
	DECLARE_CLASS(ATheSignalProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TheSignal"), NO_API) \
	DECLARE_SERIALIZER(ATheSignalProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define The_Signal_Source_TheSignal_TheSignalProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATheSignalProjectile(); \
	friend THESIGNAL_API class UClass* Z_Construct_UClass_ATheSignalProjectile(); \
public: \
	DECLARE_CLASS(ATheSignalProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TheSignal"), NO_API) \
	DECLARE_SERIALIZER(ATheSignalProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define The_Signal_Source_TheSignal_TheSignalProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATheSignalProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATheSignalProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATheSignalProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATheSignalProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATheSignalProjectile(ATheSignalProjectile&&); \
	NO_API ATheSignalProjectile(const ATheSignalProjectile&); \
public:


#define The_Signal_Source_TheSignal_TheSignalProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATheSignalProjectile(ATheSignalProjectile&&); \
	NO_API ATheSignalProjectile(const ATheSignalProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATheSignalProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATheSignalProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATheSignalProjectile)


#define The_Signal_Source_TheSignal_TheSignalProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ATheSignalProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ATheSignalProjectile, ProjectileMovement); }


#define The_Signal_Source_TheSignal_TheSignalProjectile_h_9_PROLOG
#define The_Signal_Source_TheSignal_TheSignalProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	The_Signal_Source_TheSignal_TheSignalProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	The_Signal_Source_TheSignal_TheSignalProjectile_h_12_RPC_WRAPPERS \
	The_Signal_Source_TheSignal_TheSignalProjectile_h_12_INCLASS \
	The_Signal_Source_TheSignal_TheSignalProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define The_Signal_Source_TheSignal_TheSignalProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	The_Signal_Source_TheSignal_TheSignalProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	The_Signal_Source_TheSignal_TheSignalProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	The_Signal_Source_TheSignal_TheSignalProjectile_h_12_INCLASS_NO_PURE_DECLS \
	The_Signal_Source_TheSignal_TheSignalProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID The_Signal_Source_TheSignal_TheSignalProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS