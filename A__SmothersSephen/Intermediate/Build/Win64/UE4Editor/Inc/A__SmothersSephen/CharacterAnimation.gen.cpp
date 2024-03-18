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
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCharacterAnimation::execFireAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireAnimation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterAnimation::execPreviewWindowUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreviewWindowUpdate_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UCharacterAnimation_FireAnimation = FName(TEXT("FireAnimation"));
	void UCharacterAnimation::FireAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCharacterAnimation_FireAnimation),NULL);
	}
	static FName NAME_UCharacterAnimation_PreviewWindowUpdate = FName(TEXT("PreviewWindowUpdate"));
	void UCharacterAnimation::PreviewWindowUpdate()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCharacterAnimation_PreviewWindowUpdate),NULL);
	}
	void UCharacterAnimation::StaticRegisterNativesUCharacterAnimation()
	{
		UClass* Class = UCharacterAnimation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FireAnimation", &UCharacterAnimation::execFireAnimation },
			{ "PreviewWindowUpdate", &UCharacterAnimation::execPreviewWindowUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterAnimation_FireAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterAnimation_FireAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Both_BP_Code/CharacterAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAnimation_FireAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterAnimation, nullptr, "FireAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterAnimation_FireAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAnimation_FireAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterAnimation_FireAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterAnimation_FireAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterAnimation_PreviewWindowUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterAnimation_PreviewWindowUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Both_BP_Code/CharacterAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAnimation_PreviewWindowUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterAnimation, nullptr, "PreviewWindowUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterAnimation_PreviewWindowUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAnimation_PreviewWindowUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterAnimation_PreviewWindowUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterAnimation_PreviewWindowUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCharacterAnimation_NoRegister()
	{
		return UCharacterAnimation::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugFire_MetaData[];
#endif
		static void NewProp_DebugFire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DebugFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_A__SmothersSephen,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterAnimation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterAnimation_FireAnimation, "FireAnimation" }, // 839842952
		{ &Z_Construct_UFunction_UCharacterAnimation_PreviewWindowUpdate, "PreviewWindowUpdate" }, // 3495681267
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Both_BP_Code/CharacterAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0020080000030015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAnimation, Direction), METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugFire_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Both_BP_Code/CharacterAnimation.h" },
	};
#endif
	void Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugFire_SetBit(void* Obj)
	{
		((UCharacterAnimation*)Obj)->DebugFire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugFire = { "DebugFire", nullptr, (EPropertyFlags)0x0020080000030015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCharacterAnimation), &Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugFire_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Both_BP_Code/CharacterAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAnimation, Sequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_Sequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_SlotName_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Both_BP_Code/CharacterAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAnimation, SlotName), METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_SlotName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_Sequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_SlotName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterAnimation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterAnimation_Statics::ClassParams = {
		&UCharacterAnimation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCharacterAnimation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UCharacterAnimation, 1079457687);
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
