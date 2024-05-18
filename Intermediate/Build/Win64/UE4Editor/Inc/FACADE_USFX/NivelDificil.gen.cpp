// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_USFX/NivelDificil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNivelDificil() {}
// Cross Module References
	FACADE_USFX_API UClass* Z_Construct_UClass_ANivelDificil_NoRegister();
	FACADE_USFX_API UClass* Z_Construct_UClass_ANivelDificil();
	FACADE_USFX_API UClass* Z_Construct_UClass_ANivel();
	UPackage* Z_Construct_UPackage__Script_FACADE_USFX();
// End Cross Module References
	void ANivelDificil::StaticRegisterNativesANivelDificil()
	{
	}
	UClass* Z_Construct_UClass_ANivelDificil_NoRegister()
	{
		return ANivelDificil::StaticClass();
	}
	struct Z_Construct_UClass_ANivelDificil_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANivelDificil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANivel,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANivelDificil_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NivelDificil.h" },
		{ "ModuleRelativePath", "NivelDificil.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANivelDificil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANivelDificil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANivelDificil_Statics::ClassParams = {
		&ANivelDificil::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANivelDificil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANivelDificil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANivelDificil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANivelDificil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANivelDificil, 3527882921);
	template<> FACADE_USFX_API UClass* StaticClass<ANivelDificil>()
	{
		return ANivelDificil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANivelDificil(Z_Construct_UClass_ANivelDificil, &ANivelDificil::StaticClass, TEXT("/Script/FACADE_USFX"), TEXT("ANivelDificil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANivelDificil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
