// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME2013_MyAnimInstance_generated_h
#error "MyAnimInstance.generated.h already included, missing '#pragma once' in MyAnimInstance.h"
#endif
#define GAME2013_MyAnimInstance_generated_h

#define Assignment1_Source_GAME2013_MyAnimInstance_h_14_RPC_WRAPPERS
#define Assignment1_Source_GAME2013_MyAnimInstance_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Assignment1_Source_GAME2013_MyAnimInstance_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUMyAnimInstance(); \
	friend GAME2013_API class UClass* Z_Construct_UClass_UMyAnimInstance(); \
	public: \
	DECLARE_CLASS(UMyAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, GAME2013, NO_API) \
	DECLARE_SERIALIZER(UMyAnimInstance) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMyAnimInstance*>(this); }


#define Assignment1_Source_GAME2013_MyAnimInstance_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesUMyAnimInstance(); \
	friend GAME2013_API class UClass* Z_Construct_UClass_UMyAnimInstance(); \
	public: \
	DECLARE_CLASS(UMyAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, GAME2013, NO_API) \
	DECLARE_SERIALIZER(UMyAnimInstance) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMyAnimInstance*>(this); }


#define Assignment1_Source_GAME2013_MyAnimInstance_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyAnimInstance); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMyAnimInstance(const UMyAnimInstance& InCopy); \
public:


#define Assignment1_Source_GAME2013_MyAnimInstance_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMyAnimInstance(const UMyAnimInstance& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyAnimInstance)


#define Assignment1_Source_GAME2013_MyAnimInstance_h_11_PROLOG
#define Assignment1_Source_GAME2013_MyAnimInstance_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment1_Source_GAME2013_MyAnimInstance_h_14_RPC_WRAPPERS \
	Assignment1_Source_GAME2013_MyAnimInstance_h_14_INCLASS \
	Assignment1_Source_GAME2013_MyAnimInstance_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Assignment1_Source_GAME2013_MyAnimInstance_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment1_Source_GAME2013_MyAnimInstance_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Assignment1_Source_GAME2013_MyAnimInstance_h_14_INCLASS_NO_PURE_DECLS \
	Assignment1_Source_GAME2013_MyAnimInstance_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Assignment1_Source_GAME2013_MyAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
