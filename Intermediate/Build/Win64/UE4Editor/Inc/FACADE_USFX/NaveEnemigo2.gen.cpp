// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_USFX/NaveEnemigo2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigo2() {}
// Cross Module References
	FACADE_USFX_API UClass* Z_Construct_UClass_ANaveEnemigo2_NoRegister();
	FACADE_USFX_API UClass* Z_Construct_UClass_ANaveEnemigo2();
	FACADE_USFX_API UClass* Z_Construct_UClass_ANaveEnemigo();
	UPackage* Z_Construct_UPackage__Script_FACADE_USFX();
// End Cross Module References
	void ANaveEnemigo2::StaticRegisterNativesANaveEnemigo2()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigo2_NoRegister()
	{
		return ANaveEnemigo2::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigo2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigo2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigo2_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigo2.h" },
		{ "ModuleRelativePath", "NaveEnemigo2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigo2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigo2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigo2_Statics::ClassParams = {
		&ANaveEnemigo2::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigo2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigo2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigo2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigo2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigo2, 3758162371);
	template<> FACADE_USFX_API UClass* StaticClass<ANaveEnemigo2>()
	{
		return ANaveEnemigo2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigo2(Z_Construct_UClass_ANaveEnemigo2, &ANaveEnemigo2::StaticClass, TEXT("/Script/FACADE_USFX"), TEXT("ANaveEnemigo2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigo2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
