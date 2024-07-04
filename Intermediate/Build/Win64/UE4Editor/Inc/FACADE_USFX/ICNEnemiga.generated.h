// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACADE_USFX_ICNEnemiga_generated_h
#error "ICNEnemiga.generated.h already included, missing '#pragma once' in ICNEnemiga.h"
#endif
#define FACADE_USFX_ICNEnemiga_generated_h

#define FACADE_USFX_Source_FACADE_USFX_ICNEnemiga_h_13_SPARSE_DATA
#define FACADE_USFX_Source_FACADE_USFX_ICNEnemiga_h_13_RPC_WRAPPERS
#define FACADE_USFX_Source_FACADE_USFX_ICNEnemiga_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FACADE_USFX_Source_FACADE_USFX_ICNEnemiga_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FACADE_USFX_API UICNEnemiga(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UICNEnemiga) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FACADE_USFX_API, UICNEnemiga); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UICNEnemiga); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FACADE_USFX_API UICNEnemiga(UICNEnemiga&&); \
	FACADE_USFX_API UICNEnemiga(const UICNEnemiga&); \
public:


#define FACADE_USFX_Source_FACADE_USFX_ICNEnemiga_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FACADE_USFX_API UICNEnemiga(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FACADE_USFX_API UICNEnemiga(UICNEnemiga&&); \
	FACADE_USFX_API UICNEnemiga(const UICNEnemiga&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FACADE_USFX_API, UICNEnemiga); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UICNEnemiga); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UICNEnemiga)


#define FACADE_USFX_Source_FACADE_USFX_ICNEnemiga_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUICNEnemiga(); \
	friend struct Z_Construct_UClass_UICNEnemiga_Statics; \
public: \
	DECLARE_CLASS(UICNEnemiga, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FACADE_USFX"), FACADE_USFX_API) \
	DECLARE_SERIALIZER(UICNEnemiga)


#define FACADE_USFX_Source_FACADE_USFX_ICNEnemiga_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FACADE_USFX_Source_FACADE_USFX_ICNEnemiga_h_13_GENERATED_UINTERFACE_BODY() \
	FACADE_USFX_Source_FACADE_USFX_ICNEnemiga_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FACADE_USFX_Source_FACADE_USFX_ICNEnemiga_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FACADE_USFX_Source_FACADE_USFX_ICNEnemiga_h_13_GENERATED_UINTERFACE_BODY() \
	FACADE_USFX_Source_FACADE_USFX_ICNEnemiga_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FACADE_USFX_Source_FACADE_USFX_ICNEnemiga_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IICNEnemiga() {} \
public: \
	typedef UICNEnemiga UClassType; \
	typedef IICNEnemiga ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FACADE_USFX_Source_FACADE_USFX_ICNEnemiga_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IICNEnemiga() {} \
public: \
	typedef UICNEnemiga UClassType; \
	typedef IICNEnemiga ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FACADE_USFX_Source_FACADE_USFX_ICNEnemiga_h_10_PROLOG
#define FACADE_USFX_Source_FACADE_USFX_ICNEnemiga_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FACADE_USFX_Source_FACADE_USFX_ICNEnemiga_h_13_SPARSE_DATA \
	FACADE_USFX_Source_FACADE_USFX_ICNEnemiga_h_13_RPC_WRAPPERS \
	FACADE_USFX_Source_FACADE_USFX_ICNEnemiga_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FACADE_USFX_Source_FACADE_USFX_ICNEnemiga_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FACADE_USFX_Source_FACADE_USFX_ICNEnemiga_h_13_SPARSE_DATA \
	FACADE_USFX_Source_FACADE_USFX_ICNEnemiga_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FACADE_USFX_Source_FACADE_USFX_ICNEnemiga_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACADE_USFX_API UClass* StaticClass<class UICNEnemiga>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FACADE_USFX_Source_FACADE_USFX_ICNEnemiga_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
