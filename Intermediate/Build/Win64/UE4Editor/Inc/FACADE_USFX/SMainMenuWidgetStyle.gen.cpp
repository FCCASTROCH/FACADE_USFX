// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_USFX/SMainMenuWidgetStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMainMenuWidgetStyle() {}
// Cross Module References
	FACADE_USFX_API UScriptStruct* Z_Construct_UScriptStruct_FSMainMenuStyle();
	UPackage* Z_Construct_UPackage__Script_FACADE_USFX();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	FACADE_USFX_API UClass* Z_Construct_UClass_USMainMenuWidgetStyle_NoRegister();
	FACADE_USFX_API UClass* Z_Construct_UClass_USMainMenuWidgetStyle();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSMainMenuStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FSMainMenuStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

class UScriptStruct* FSMainMenuStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACADE_USFX_API uint32 Get_Z_Construct_UScriptStruct_FSMainMenuStyle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMainMenuStyle, Z_Construct_UPackage__Script_FACADE_USFX(), TEXT("SMainMenuStyle"), sizeof(FSMainMenuStyle), Get_Z_Construct_UScriptStruct_FSMainMenuStyle_Hash());
	}
	return Singleton;
}
template<> FACADE_USFX_API UScriptStruct* StaticStruct<FSMainMenuStyle>()
{
	return FSMainMenuStyle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSMainMenuStyle(FSMainMenuStyle::StaticStruct, TEXT("/Script/FACADE_USFX"), TEXT("SMainMenuStyle"), false, nullptr, nullptr);
static struct FScriptStruct_FACADE_USFX_StaticRegisterNativesFSMainMenuStyle
{
	FScriptStruct_FACADE_USFX_StaticRegisterNativesFSMainMenuStyle()
	{
		UScriptStruct::DeferCppStructOps<FSMainMenuStyle>(FName(TEXT("SMainMenuStyle")));
	}
} ScriptStruct_FACADE_USFX_StaticRegisterNativesFSMainMenuStyle;
	struct Z_Construct_UScriptStruct_FSMainMenuStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMainMenuStyle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "SMainMenuWidgetStyle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMainMenuStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMainMenuStyle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMainMenuStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_USFX,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"SMainMenuStyle",
		sizeof(FSMainMenuStyle),
		alignof(FSMainMenuStyle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMainMenuStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMainMenuStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMainMenuStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSMainMenuStyle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FACADE_USFX();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SMainMenuStyle"), sizeof(FSMainMenuStyle), Get_Z_Construct_UScriptStruct_FSMainMenuStyle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSMainMenuStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSMainMenuStyle_Hash() { return 561944303U; }
	void USMainMenuWidgetStyle::StaticRegisterNativesUSMainMenuWidgetStyle()
	{
	}
	UClass* Z_Construct_UClass_USMainMenuWidgetStyle_NoRegister()
	{
		return USMainMenuWidgetStyle::StaticClass();
	}
	struct Z_Construct_UClass_USMainMenuWidgetStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMainMenuWidgetStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMainMenuWidgetStyle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "SMainMenuWidgetStyle.h" },
		{ "ModuleRelativePath", "SMainMenuWidgetStyle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMainMenuWidgetStyle_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the widget appearance. */" },
		{ "ModuleRelativePath", "SMainMenuWidgetStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the widget appearance." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMainMenuWidgetStyle_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMainMenuWidgetStyle, WidgetStyle), Z_Construct_UScriptStruct_FSMainMenuStyle, METADATA_PARAMS(Z_Construct_UClass_USMainMenuWidgetStyle_Statics::NewProp_WidgetStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMainMenuWidgetStyle_Statics::NewProp_WidgetStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMainMenuWidgetStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMainMenuWidgetStyle_Statics::NewProp_WidgetStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMainMenuWidgetStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMainMenuWidgetStyle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USMainMenuWidgetStyle_Statics::ClassParams = {
		&USMainMenuWidgetStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USMainMenuWidgetStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USMainMenuWidgetStyle_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMainMenuWidgetStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMainMenuWidgetStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMainMenuWidgetStyle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMainMenuWidgetStyle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMainMenuWidgetStyle, 2424775960);
	template<> FACADE_USFX_API UClass* StaticClass<USMainMenuWidgetStyle>()
	{
		return USMainMenuWidgetStyle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMainMenuWidgetStyle(Z_Construct_UClass_USMainMenuWidgetStyle, &USMainMenuWidgetStyle::StaticClass, TEXT("/Script/FACADE_USFX"), TEXT("USMainMenuWidgetStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMainMenuWidgetStyle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
