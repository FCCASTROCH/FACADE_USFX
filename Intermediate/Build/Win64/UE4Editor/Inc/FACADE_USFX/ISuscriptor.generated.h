// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACADE_USFX_ISuscriptor_generated_h
#error "ISuscriptor.generated.h already included, missing '#pragma once' in ISuscriptor.h"
#endif
#define FACADE_USFX_ISuscriptor_generated_h

#define FACADE_USFX_Source_FACADE_USFX_ISuscriptor_h_14_SPARSE_DATA
#define FACADE_USFX_Source_FACADE_USFX_ISuscriptor_h_14_RPC_WRAPPERS
#define FACADE_USFX_Source_FACADE_USFX_ISuscriptor_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FACADE_USFX_Source_FACADE_USFX_ISuscriptor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FACADE_USFX_API UISuscriptor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISuscriptor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FACADE_USFX_API, UISuscriptor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISuscriptor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FACADE_USFX_API UISuscriptor(UISuscriptor&&); \
	FACADE_USFX_API UISuscriptor(const UISuscriptor&); \
public:


#define FACADE_USFX_Source_FACADE_USFX_ISuscriptor_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FACADE_USFX_API UISuscriptor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FACADE_USFX_API UISuscriptor(UISuscriptor&&); \
	FACADE_USFX_API UISuscriptor(const UISuscriptor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FACADE_USFX_API, UISuscriptor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISuscriptor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISuscriptor)


#define FACADE_USFX_Source_FACADE_USFX_ISuscriptor_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUISuscriptor(); \
	friend struct Z_Construct_UClass_UISuscriptor_Statics; \
public: \
	DECLARE_CLASS(UISuscriptor, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FACADE_USFX"), FACADE_USFX_API) \
	DECLARE_SERIALIZER(UISuscriptor)


#define FACADE_USFX_Source_FACADE_USFX_ISuscriptor_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FACADE_USFX_Source_FACADE_USFX_ISuscriptor_h_14_GENERATED_UINTERFACE_BODY() \
	FACADE_USFX_Source_FACADE_USFX_ISuscriptor_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FACADE_USFX_Source_FACADE_USFX_ISuscriptor_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FACADE_USFX_Source_FACADE_USFX_ISuscriptor_h_14_GENERATED_UINTERFACE_BODY() \
	FACADE_USFX_Source_FACADE_USFX_ISuscriptor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FACADE_USFX_Source_FACADE_USFX_ISuscriptor_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IISuscriptor() {} \
public: \
	typedef UISuscriptor UClassType; \
	typedef IISuscriptor ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FACADE_USFX_Source_FACADE_USFX_ISuscriptor_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IISuscriptor() {} \
public: \
	typedef UISuscriptor UClassType; \
	typedef IISuscriptor ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FACADE_USFX_Source_FACADE_USFX_ISuscriptor_h_11_PROLOG
#define FACADE_USFX_Source_FACADE_USFX_ISuscriptor_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FACADE_USFX_Source_FACADE_USFX_ISuscriptor_h_14_SPARSE_DATA \
	FACADE_USFX_Source_FACADE_USFX_ISuscriptor_h_14_RPC_WRAPPERS \
	FACADE_USFX_Source_FACADE_USFX_ISuscriptor_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FACADE_USFX_Source_FACADE_USFX_ISuscriptor_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FACADE_USFX_Source_FACADE_USFX_ISuscriptor_h_14_SPARSE_DATA \
	FACADE_USFX_Source_FACADE_USFX_ISuscriptor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FACADE_USFX_Source_FACADE_USFX_ISuscriptor_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACADE_USFX_API UClass* StaticClass<class UISuscriptor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FACADE_USFX_Source_FACADE_USFX_ISuscriptor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
