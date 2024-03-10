// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A__SmothersSephen/A__SmothersSephenGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeA__SmothersSephenGameModeBase() {}
// Cross Module References
	A__SMOTHERSSEPHEN_API UClass* Z_Construct_UClass_AA__SmothersSephenGameModeBase_NoRegister();
	A__SMOTHERSSEPHEN_API UClass* Z_Construct_UClass_AA__SmothersSephenGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_A__SmothersSephen();
// End Cross Module References
	void AA__SmothersSephenGameModeBase::StaticRegisterNativesAA__SmothersSephenGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AA__SmothersSephenGameModeBase_NoRegister()
	{
		return AA__SmothersSephenGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AA__SmothersSephenGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AA__SmothersSephenGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_A__SmothersSephen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA__SmothersSephenGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "A__SmothersSephenGameModeBase.h" },
		{ "ModuleRelativePath", "A__SmothersSephenGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AA__SmothersSephenGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AA__SmothersSephenGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AA__SmothersSephenGameModeBase_Statics::ClassParams = {
		&AA__SmothersSephenGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AA__SmothersSephenGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AA__SmothersSephenGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AA__SmothersSephenGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AA__SmothersSephenGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AA__SmothersSephenGameModeBase, 1875282720);
	template<> A__SMOTHERSSEPHEN_API UClass* StaticClass<AA__SmothersSephenGameModeBase>()
	{
		return AA__SmothersSephenGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AA__SmothersSephenGameModeBase(Z_Construct_UClass_AA__SmothersSephenGameModeBase, &AA__SmothersSephenGameModeBase::StaticClass, TEXT("/Script/A__SmothersSephen"), TEXT("AA__SmothersSephenGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AA__SmothersSephenGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
