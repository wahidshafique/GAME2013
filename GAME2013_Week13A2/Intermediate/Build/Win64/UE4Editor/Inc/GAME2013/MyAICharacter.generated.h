// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME2013_MyAICharacter_generated_h
#error "MyAICharacter.generated.h already included, missing '#pragma once' in MyAICharacter.h"
#endif
#define GAME2013_MyAICharacter_generated_h

#define GAME2013_Week13_Source_GAME2013_MyAICharacter_h_12_RPC_WRAPPERS
#define GAME2013_Week13_Source_GAME2013_MyAICharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define GAME2013_Week13_Source_GAME2013_MyAICharacter_h_12_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAMyAICharacter(); \
	friend GAME2013_API class UClass* Z_Construct_UClass_AMyAICharacter(); \
	public: \
	DECLARE_CLASS(AMyAICharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, GAME2013, NO_API) \
	DECLARE_SERIALIZER(AMyAICharacter) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AMyAICharacter*>(this); }


#define GAME2013_Week13_Source_GAME2013_MyAICharacter_h_12_INCLASS \
	private: \
	static void StaticRegisterNativesAMyAICharacter(); \
	friend GAME2013_API class UClass* Z_Construct_UClass_AMyAICharacter(); \
	public: \
	DECLARE_CLASS(AMyAICharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, GAME2013, NO_API) \
	DECLARE_SERIALIZER(AMyAICharacter) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AMyAICharacter*>(this); }


#define GAME2013_Week13_Source_GAME2013_MyAICharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyAICharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyAICharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyAICharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyAICharacter); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AMyAICharacter(const AMyAICharacter& InCopy); \
public:


#define GAME2013_Week13_Source_GAME2013_MyAICharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AMyAICharacter(const AMyAICharacter& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyAICharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyAICharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyAICharacter)


#define GAME2013_Week13_Source_GAME2013_MyAICharacter_h_9_PROLOG
#define GAME2013_Week13_Source_GAME2013_MyAICharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GAME2013_Week13_Source_GAME2013_MyAICharacter_h_12_RPC_WRAPPERS \
	GAME2013_Week13_Source_GAME2013_MyAICharacter_h_12_INCLASS \
	GAME2013_Week13_Source_GAME2013_MyAICharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GAME2013_Week13_Source_GAME2013_MyAICharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GAME2013_Week13_Source_GAME2013_MyAICharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GAME2013_Week13_Source_GAME2013_MyAICharacter_h_12_INCLASS_NO_PURE_DECLS \
	GAME2013_Week13_Source_GAME2013_MyAICharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GAME2013_Week13_Source_GAME2013_MyAICharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS