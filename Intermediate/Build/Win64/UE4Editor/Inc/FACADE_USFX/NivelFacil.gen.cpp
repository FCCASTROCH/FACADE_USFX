// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_USFX/NivelFacil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNivelFacil() {}
// Cross Module References
	FACADE_USFX_API UClass* Z_Construct_UClass_ANivelFacil_NoRegister();
	FACADE_USFX_API UClass* Z_Construct_UClass_ANivelFacil();
	FACADE_USFX_API UClass* Z_Construct_UClass_ANivel();
	UPackage* Z_Construct_UPackage__Script_FACADE_USFX();
// End Cross Module References
	void ANivelFacil::StaticRegisterNativesANivelFacil()
	{
	}
	UClass* Z_Construct_UClass_ANivelFacil_NoRegister()
	{
		return ANivelFacil::StaticClass();
	}
	struct Z_Construct_UClass_ANivelFacil_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANivelFacil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANivel,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANivelFacil_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NivelFacil.h" },
		{ "ModuleRelativePath", "NivelFacil.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANivelFacil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANivelFacil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANivelFacil_Statics::ClassParams = {
		&ANivelFacil::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANivelFacil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANivelFacil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANivelFacil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANivelFacil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANivelFacil, 3323622542);
	template<> FACADE_USFX_API UClass* StaticClass<ANivelFacil>()
	{
		return ANivelFacil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANivelFacil(Z_Construct_UClass_ANivelFacil, &ANivelFacil::StaticClass, TEXT("/Script/FACADE_USFX"), TEXT("ANivelFacil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANivelFacil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
