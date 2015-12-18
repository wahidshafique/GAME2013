// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME2013_MyPlayerAmmoWidget_generated_h
#error "MyPlayerAmmoWidget.generated.h already included, missing '#pragma once' in MyPlayerAmmoWidget.h"
#endif
#define GAME2013_MyPlayerAmmoWidget_generated_h

#define GAME2013_Week13_Source_GAME2013_MyPlayerAmmoWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAmmo) \
	{ \
		P_FINISH; \
		*(FText*)Z_Param__Result=this->GetAmmo(); \
	}


#define GAME2013_Week13_Source_GAME2013_MyPlayerAmmoWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAmmo) \
	{ \
		P_FINISH; \
		*(FText*)Z_Param__Result=this->GetAmmo(); \
	}


#define GAME2013_Week13_Source_GAME2013_MyPlayerAmmoWidget_h_15_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUMyPlayerAmmoWidget(); \
	friend GAME2013_API class UClass* Z_Construct_UClass_UMyPlayerAmmoWidget(); \
	public: \
	DECLARE_CLASS(UMyPlayerAmmoWidget, UUserWidget, COMPILED_IN_FLAGS(0), 0, GAME2013, NO_API) \
	DECLARE_SERIALIZER(UMyPlayerAmmoWidget) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMyPlayerAmmoWidget*>(this); }


#define GAME2013_Week13_Source_GAME2013_MyPlayerAmmoWidget_h_15_INCLASS \
	private: \
	static void StaticRegisterNativesUMyPlayerAmmoWidget(); \
	friend GAME2013_API class UClass* Z_Construct_UClass_UMyPlayerAmmoWidget(); \
	public: \
	DECLARE_CLASS(UMyPlayerAmmoWidget, UUserWidget, COMPILED_IN_FLAGS(0), 0, GAME2013, NO_API) \
	DECLARE_SERIALIZER(UMyPlayerAmmoWidget) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMyPlayerAmmoWidget*>(this); }


#define GAME2013_Week13_Source_GAME2013_MyPlayerAmmoWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyPlayerAmmoWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyPlayerAmmoWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyPlayerAmmoWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyPlayerAmmoWidget); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMyPlayerAmmoWidget(const UMyPlayerAmmoWidget& InCopy); \
public:


#define GAME2013_Week13_Source_GAME2013_MyPlayerAmmoWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyPlayerAmmoWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMyPlayerAmmoWidget(const UMyPlayerAmmoWidget& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyPlayerAmmoWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyPlayerAmmoWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyPlayerAmmoWidget)


#define GAME2013_Week13_Source_GAME2013_MyPlayerAmmoWidget_h_12_PROLOG
#define GAME2013_Week13_Source_GAME2013_MyPlayerAmmoWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GAME2013_Week13_Source_GAME2013_MyPlayerAmmoWidget_h_15_RPC_WRAPPERS \
	GAME2013_Week13_Source_GAME2013_MyPlayerAmmoWidget_h_15_INCLASS \
	GAME2013_Week13_Source_GAME2013_MyPlayerAmmoWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GAME2013_Week13_Source_GAME2013_MyPlayerAmmoWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GAME2013_Week13_Source_GAME2013_MyPlayerAmmoWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GAME2013_Week13_Source_GAME2013_MyPlayerAmmoWidget_h_15_INCLASS_NO_PURE_DECLS \
	GAME2013_Week13_Source_GAME2013_MyPlayerAmmoWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GAME2013_Week13_Source_GAME2013_MyPlayerAmmoWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS