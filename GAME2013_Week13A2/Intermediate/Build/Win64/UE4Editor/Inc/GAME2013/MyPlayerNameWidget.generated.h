// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME2013_MyPlayerNameWidget_generated_h
#error "MyPlayerNameWidget.generated.h already included, missing '#pragma once' in MyPlayerNameWidget.h"
#endif
#define GAME2013_MyPlayerNameWidget_generated_h

#define GAME2013_Week13_Source_GAME2013_MyPlayerNameWidget_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPlayerName) \
	{ \
		P_FINISH; \
		*(FText*)Z_Param__Result=this->GetPlayerName(); \
	}


#define GAME2013_Week13_Source_GAME2013_MyPlayerNameWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPlayerName) \
	{ \
		P_FINISH; \
		*(FText*)Z_Param__Result=this->GetPlayerName(); \
	}


#define GAME2013_Week13_Source_GAME2013_MyPlayerNameWidget_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUMyPlayerNameWidget(); \
	friend GAME2013_API class UClass* Z_Construct_UClass_UMyPlayerNameWidget(); \
	public: \
	DECLARE_CLASS(UMyPlayerNameWidget, UUserWidget, COMPILED_IN_FLAGS(0), 0, GAME2013, NO_API) \
	DECLARE_SERIALIZER(UMyPlayerNameWidget) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMyPlayerNameWidget*>(this); }


#define GAME2013_Week13_Source_GAME2013_MyPlayerNameWidget_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesUMyPlayerNameWidget(); \
	friend GAME2013_API class UClass* Z_Construct_UClass_UMyPlayerNameWidget(); \
	public: \
	DECLARE_CLASS(UMyPlayerNameWidget, UUserWidget, COMPILED_IN_FLAGS(0), 0, GAME2013, NO_API) \
	DECLARE_SERIALIZER(UMyPlayerNameWidget) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMyPlayerNameWidget*>(this); }


#define GAME2013_Week13_Source_GAME2013_MyPlayerNameWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyPlayerNameWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyPlayerNameWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyPlayerNameWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyPlayerNameWidget); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMyPlayerNameWidget(const UMyPlayerNameWidget& InCopy); \
public:


#define GAME2013_Week13_Source_GAME2013_MyPlayerNameWidget_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyPlayerNameWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMyPlayerNameWidget(const UMyPlayerNameWidget& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyPlayerNameWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyPlayerNameWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyPlayerNameWidget)


#define GAME2013_Week13_Source_GAME2013_MyPlayerNameWidget_h_11_PROLOG
#define GAME2013_Week13_Source_GAME2013_MyPlayerNameWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GAME2013_Week13_Source_GAME2013_MyPlayerNameWidget_h_14_RPC_WRAPPERS \
	GAME2013_Week13_Source_GAME2013_MyPlayerNameWidget_h_14_INCLASS \
	GAME2013_Week13_Source_GAME2013_MyPlayerNameWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GAME2013_Week13_Source_GAME2013_MyPlayerNameWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GAME2013_Week13_Source_GAME2013_MyPlayerNameWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GAME2013_Week13_Source_GAME2013_MyPlayerNameWidget_h_14_INCLASS_NO_PURE_DECLS \
	GAME2013_Week13_Source_GAME2013_MyPlayerNameWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GAME2013_Week13_Source_GAME2013_MyPlayerNameWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS