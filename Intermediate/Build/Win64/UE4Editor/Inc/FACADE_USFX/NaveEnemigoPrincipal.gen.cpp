// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_USFX/NaveEnemigoPrincipal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigoPrincipal() {}
// Cross Module References
	FACADE_USFX_API UClass* Z_Construct_UClass_ANaveEnemigoPrincipal_NoRegister();
	FACADE_USFX_API UClass* Z_Construct_UClass_ANaveEnemigoPrincipal();
	FACADE_USFX_API UClass* Z_Construct_UClass_ANaveEnemigo();
	UPackage* Z_Construct_UPackage__Script_FACADE_USFX();
	FACADE_USFX_API UClass* Z_Construct_UClass_UICNEnemiga_NoRegister();
// End Cross Module References
	void ANaveEnemigoPrincipal::StaticRegisterNativesANaveEnemigoPrincipal()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigoPrincipal_NoRegister()
	{
		return ANaveEnemigoPrincipal::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigoPrincipal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigoPrincipal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigoPrincipal_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigoPrincipal.h" },
		{ "ModuleRelativePath", "NaveEnemigoPrincipal.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANaveEnemigoPrincipal_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UICNEnemiga_NoRegister, (int32)VTABLE_OFFSET(ANaveEnemigoPrincipal, IICNEnemiga), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigoPrincipal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigoPrincipal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigoPrincipal_Statics::ClassParams = {
		&ANaveEnemigoPrincipal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigoPrincipal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigoPrincipal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigoPrincipal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigoPrincipal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigoPrincipal, 303351989);
	template<> FACADE_USFX_API UClass* StaticClass<ANaveEnemigoPrincipal>()
	{
		return ANaveEnemigoPrincipal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigoPrincipal(Z_Construct_UClass_ANaveEnemigoPrincipal, &ANaveEnemigoPrincipal::StaticClass, TEXT("/Script/FACADE_USFX"), TEXT("ANaveEnemigoPrincipal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigoPrincipal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
