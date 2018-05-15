// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THESIGNAL_TheSignalCharacter_generated_h
#error "TheSignalCharacter.generated.h already included, missing '#pragma once' in TheSignalCharacter.h"
#endif
#define THESIGNAL_TheSignalCharacter_generated_h

#define The_Signal_Source_TheSignal_TheSignalCharacter_h_14_RPC_WRAPPERS
#define The_Signal_Source_TheSignal_TheSignalCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define The_Signal_Source_TheSignal_TheSignalCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATheSignalCharacter(); \
	friend THESIGNAL_API class UClass* Z_Construct_UClass_ATheSignalCharacter(); \
public: \
	DECLARE_CLASS(ATheSignalCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TheSignal"), NO_API) \
	DECLARE_SERIALIZER(ATheSignalCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define The_Signal_Source_TheSignal_TheSignalCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATheSignalCharacter(); \
	friend THESIGNAL_API class UClass* Z_Construct_UClass_ATheSignalCharacter(); \
public: \
	DECLARE_CLASS(ATheSignalCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TheSignal"), NO_API) \
	DECLARE_SERIALIZER(ATheSignalCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define The_Signal_Source_TheSignal_TheSignalCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATheSignalCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATheSignalCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATheSignalCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATheSignalCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATheSignalCharacter(ATheSignalCharacter&&); \
	NO_API ATheSignalCharacter(const ATheSignalCharacter&); \
public:


#define The_Signal_Source_TheSignal_TheSignalCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATheSignalCharacter(ATheSignalCharacter&&); \
	NO_API ATheSignalCharacter(const ATheSignalCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATheSignalCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATheSignalCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATheSignalCharacter)


#define The_Signal_Source_TheSignal_TheSignalCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ATheSignalCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ATheSignalCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ATheSignalCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ATheSignalCharacter, FirstPersonCameraComponent); }


#define The_Signal_Source_TheSignal_TheSignalCharacter_h_11_PROLOG
#define The_Signal_Source_TheSignal_TheSignalCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	The_Signal_Source_TheSignal_TheSignalCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	The_Signal_Source_TheSignal_TheSignalCharacter_h_14_RPC_WRAPPERS \
	The_Signal_Source_TheSignal_TheSignalCharacter_h_14_INCLASS \
	The_Signal_Source_TheSignal_TheSignalCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define The_Signal_Source_TheSignal_TheSignalCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	The_Signal_Source_TheSignal_TheSignalCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	The_Signal_Source_TheSignal_TheSignalCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	The_Signal_Source_TheSignal_TheSignalCharacter_h_14_INCLASS_NO_PURE_DECLS \
	The_Signal_Source_TheSignal_TheSignalCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID The_Signal_Source_TheSignal_TheSignalCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
