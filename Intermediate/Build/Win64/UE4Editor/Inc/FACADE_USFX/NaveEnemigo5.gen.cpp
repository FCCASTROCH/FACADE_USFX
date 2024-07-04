// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_USFX/NaveEnemigo5.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigo5() {}
// Cross Module References
	FACADE_USFX_API UClass* Z_Construct_UClass_ANaveEnemigo5_NoRegister();
	FACADE_USFX_API UClass* Z_Construct_UClass_ANaveEnemigo5();
	FACADE_USFX_API UClass* Z_Construct_UClass_ANaveEnemigo();
	UPackage* Z_Construct_UPackage__Script_FACADE_USFX();
// End Cross Module References
	void ANaveEnemigo5::StaticRegisterNativesANaveEnemigo5()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigo5_NoRegister()
	{
		return ANaveEnemigo5::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigo5_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigo5_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigo5_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigo5.h" },
		{ "ModuleRelativePath", "NaveEnemigo5.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigo5_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigo5>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigo5_Statics::ClassParams = {
		&ANaveEnemigo5::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigo5_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigo5_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigo5()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigo5_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigo5, 1997690174);
	template<> FACADE_USFX_API UClass* StaticClass<ANaveEnemigo5>()
	{
		return ANaveEnemigo5::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigo5(Z_Construct_UClass_ANaveEnemigo5, &ANaveEnemigo5::StaticClass, TEXT("/Script/FACADE_USFX"), TEXT("ANaveEnemigo5"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigo5);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
