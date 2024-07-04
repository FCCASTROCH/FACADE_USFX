// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_USFX/IColeccion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIColeccion() {}
// Cross Module References
	FACADE_USFX_API UClass* Z_Construct_UClass_UIColeccion_NoRegister();
	FACADE_USFX_API UClass* Z_Construct_UClass_UIColeccion();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_FACADE_USFX();
// End Cross Module References
	void UIColeccion::StaticRegisterNativesUIColeccion()
	{
	}
	UClass* Z_Construct_UClass_UIColeccion_NoRegister()
	{
		return UIColeccion::StaticClass();
	}
	struct Z_Construct_UClass_UIColeccion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIColeccion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIColeccion_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IColeccion.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIColeccion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIColeccion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIColeccion_Statics::ClassParams = {
		&UIColeccion::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UIColeccion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIColeccion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIColeccion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIColeccion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIColeccion, 2448990591);
	template<> FACADE_USFX_API UClass* StaticClass<UIColeccion>()
	{
		return UIColeccion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIColeccion(Z_Construct_UClass_UIColeccion, &UIColeccion::StaticClass, TEXT("/Script/FACADE_USFX"), TEXT("UIColeccion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIColeccion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
