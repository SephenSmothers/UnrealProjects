// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A__SmothersSephen/Public/Both_BP_Code/CharacterAnimation.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterAnimation() {}
// Cross Module References
	A__SMOTHERSSEPHEN_API UClass* Z_Construct_UClass_UCharacterAnimation_NoRegister();
	A__SMOTHERSSEPHEN_API UClass* Z_Construct_UClass_UCharacterAnimation();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_A__SmothersSephen();
// End Cross Module References
	void UCharacterAnimation::StaticRegisterNativesUCharacterAnimation()
	{
	}
	UClass* Z_Construct_UClass_UCharacterAnimation_NoRegister()
	{
		return UCharacterAnimation::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_A__SmothersSephen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Both_BP_Code/CharacterAnimation.h" },
		{ "ModuleRelativePath", "Public/Both_BP_Code/CharacterAnimation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Both_BP_Code/CharacterAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAnimation, Speed), METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_Speed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_Speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterAnimation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterAnimation_Statics::ClassParams = {
		&UCharacterAnimation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCharacterAnimation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimation_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterAnimation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterAnimation, 2705542213);
	template<> A__SMOTHERSSEPHEN_API UClass* StaticClass<UCharacterAnimation>()
	{
		return UCharacterAnimation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterAnimation(Z_Construct_UClass_UCharacterAnimation, &UCharacterAnimation::StaticClass, TEXT("/Script/A__SmothersSephen"), TEXT("UCharacterAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
