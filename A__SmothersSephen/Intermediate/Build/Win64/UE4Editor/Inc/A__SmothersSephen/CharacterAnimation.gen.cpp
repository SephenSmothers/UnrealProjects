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
	A__SMOTHERSSEPHEN_API UFunction* Z_Construct_UDelegateFunction_A__SmothersSephen_AnimSequence__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_A__SmothersSephen();
	A__SMOTHERSSEPHEN_API UClass* Z_Construct_UClass_UCharacterAnimation_NoRegister();
	A__SMOTHERSSEPHEN_API UClass* Z_Construct_UClass_UCharacterAnimation();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_A__SmothersSephen_AnimSequence__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_A__SmothersSephen_AnimSequence__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Both_BP_Code/CharacterAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_A__SmothersSephen_AnimSequence__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_A__SmothersSephen, nullptr, "AnimSequence__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_A__SmothersSephen_AnimSequence__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_A__SmothersSephen_AnimSequence__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_A__SmothersSephen_AnimSequence__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_A__SmothersSephen_AnimSequence__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCharacterAnimation::execReloadAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReloadAnimation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterAnimation::execDeadAnimationEnded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeadAnimationEnded_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterAnimation::execDeadAnimation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ratio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeadAnimation_Implementation(Z_Param_ratio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterAnimation::execHurtAnimation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ratio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HurtAnimation_Implementation(Z_Param_ratio);
		P_NATIVE_END;
	}
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
	static FName NAME_UCharacterAnimation_DeadAnimation = FName(TEXT("DeadAnimation"));
	void UCharacterAnimation::DeadAnimation(float ratio)
	{
		CharacterAnimation_eventDeadAnimation_Parms Parms;
		Parms.ratio=ratio;
		ProcessEvent(FindFunctionChecked(NAME_UCharacterAnimation_DeadAnimation),&Parms);
	}
	static FName NAME_UCharacterAnimation_DeadAnimationEnded = FName(TEXT("DeadAnimationEnded"));
	void UCharacterAnimation::DeadAnimationEnded()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCharacterAnimation_DeadAnimationEnded),NULL);
	}
	static FName NAME_UCharacterAnimation_FireAnimation = FName(TEXT("FireAnimation"));
	void UCharacterAnimation::FireAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCharacterAnimation_FireAnimation),NULL);
	}
	static FName NAME_UCharacterAnimation_HurtAnimation = FName(TEXT("HurtAnimation"));
	void UCharacterAnimation::HurtAnimation(float ratio)
	{
		CharacterAnimation_eventHurtAnimation_Parms Parms;
		Parms.ratio=ratio;
		ProcessEvent(FindFunctionChecked(NAME_UCharacterAnimation_HurtAnimation),&Parms);
	}
	static FName NAME_UCharacterAnimation_PreviewWindowUpdate = FName(TEXT("PreviewWindowUpdate"));
	void UCharacterAnimation::PreviewWindowUpdate()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCharacterAnimation_PreviewWindowUpdate),NULL);
	}
	static FName NAME_UCharacterAnimation_ReloadAnimation = FName(TEXT("ReloadAnimation"));
	void UCharacterAnimation::ReloadAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCharacterAnimation_ReloadAnimation),NULL);
	}
	void UCharacterAnimation::StaticRegisterNativesUCharacterAnimation()
	{
		UClass* Class = UCharacterAnimation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeadAnimation", &UCharacterAnimation::execDeadAnimation },
			{ "DeadAnimationEnded", &UCharacterAnimation::execDeadAnimationEnded },
			{ "FireAnimation", &UCharacterAnimation::execFireAnimation },
			{ "HurtAnimation", &UCharacterAnimation::execHurtAnimation },
			{ "PreviewWindowUpdate", &UCharacterAnimation::execPreviewWindowUpdate },
			{ "ReloadAnimation", &UCharacterAnimation::execReloadAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterAnimation_DeadAnimation_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ratio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterAnimation_DeadAnimation_Statics::NewProp_ratio = { "ratio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterAnimation_eventDeadAnimation_Parms, ratio), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterAnimation_DeadAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterAnimation_DeadAnimation_Statics::NewProp_ratio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterAnimation_DeadAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Both_BP_Code/CharacterAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAnimation_DeadAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterAnimation, nullptr, "DeadAnimation", nullptr, nullptr, sizeof(CharacterAnimation_eventDeadAnimation_Parms), Z_Construct_UFunction_UCharacterAnimation_DeadAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAnimation_DeadAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterAnimation_DeadAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAnimation_DeadAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterAnimation_DeadAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterAnimation_DeadAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterAnimation_DeadAnimationEnded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterAnimation_DeadAnimationEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Both_BP_Code/CharacterAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAnimation_DeadAnimationEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterAnimation, nullptr, "DeadAnimationEnded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterAnimation_DeadAnimationEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAnimation_DeadAnimationEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterAnimation_DeadAnimationEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterAnimation_DeadAnimationEnded_Statics::FuncParams);
		}
		return ReturnFunction;
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
	struct Z_Construct_UFunction_UCharacterAnimation_HurtAnimation_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ratio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterAnimation_HurtAnimation_Statics::NewProp_ratio = { "ratio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterAnimation_eventHurtAnimation_Parms, ratio), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterAnimation_HurtAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterAnimation_HurtAnimation_Statics::NewProp_ratio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterAnimation_HurtAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Both_BP_Code/CharacterAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAnimation_HurtAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterAnimation, nullptr, "HurtAnimation", nullptr, nullptr, sizeof(CharacterAnimation_eventHurtAnimation_Parms), Z_Construct_UFunction_UCharacterAnimation_HurtAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAnimation_HurtAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterAnimation_HurtAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAnimation_HurtAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterAnimation_HurtAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterAnimation_HurtAnimation_Statics::FuncParams);
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
	struct Z_Construct_UFunction_UCharacterAnimation_ReloadAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterAnimation_ReloadAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Both_BP_Code/CharacterAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAnimation_ReloadAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterAnimation, nullptr, "ReloadAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterAnimation_ReloadAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAnimation_ReloadAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterAnimation_ReloadAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterAnimation_ReloadAnimation_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugHurt_MetaData[];
#endif
		static void NewProp_DebugHurt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DebugHurt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugDead_MetaData[];
#endif
		static void NewProp_DebugDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DebugDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HurtSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HurtSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeadSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeadSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReloadSequence;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeadSequenceArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeadSequenceArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DeadSequenceArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnReloadNow_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReloadNow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnReloadEnded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReloadEnded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDeathEnded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeathEnded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_A__SmothersSephen,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterAnimation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterAnimation_DeadAnimation, "DeadAnimation" }, // 2439054230
		{ &Z_Construct_UFunction_UCharacterAnimation_DeadAnimationEnded, "DeadAnimationEnded" }, // 4045645658
		{ &Z_Construct_UFunction_UCharacterAnimation_FireAnimation, "FireAnimation" }, // 839842952
		{ &Z_Construct_UFunction_UCharacterAnimation_HurtAnimation, "HurtAnimation" }, // 1462321282
		{ &Z_Construct_UFunction_UCharacterAnimation_PreviewWindowUpdate, "PreviewWindowUpdate" }, // 3495681267
		{ &Z_Construct_UFunction_UCharacterAnimation_ReloadAnimation, "ReloadAnimation" }, // 348566868
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimation_Statics::Class_MetaDataParams[] = {
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugHurt_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Both_BP_Code/CharacterAnimation.h" },
	};
#endif
	void Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugHurt_SetBit(void* Obj)
	{
		((UCharacterAnimation*)Obj)->DebugHurt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugHurt = { "DebugHurt", nullptr, (EPropertyFlags)0x0020080000030015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCharacterAnimation), &Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugHurt_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugHurt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugHurt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugDead_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Both_BP_Code/CharacterAnimation.h" },
	};
#endif
	void Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugDead_SetBit(void* Obj)
	{
		((UCharacterAnimation*)Obj)->DebugDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugDead = { "DebugDead", nullptr, (EPropertyFlags)0x0020080000030015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCharacterAnimation), &Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Both_BP_Code/CharacterAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAnimation, Sequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_Sequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_HurtSequence_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Both_BP_Code/CharacterAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_HurtSequence = { "HurtSequence", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAnimation, HurtSequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_HurtSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_HurtSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DeadSequence_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Both_BP_Code/CharacterAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DeadSequence = { "DeadSequence", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAnimation, DeadSequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DeadSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DeadSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_ReloadSequence_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Both_BP_Code/CharacterAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_ReloadSequence = { "ReloadSequence", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAnimation, ReloadSequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_ReloadSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_ReloadSequence_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DeadSequenceArray_Inner = { "DeadSequenceArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DeadSequenceArray_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Both_BP_Code/CharacterAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DeadSequenceArray = { "DeadSequenceArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAnimation, DeadSequenceArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DeadSequenceArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DeadSequenceArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_SlotName_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Both_BP_Code/CharacterAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAnimation, SlotName), METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_SlotName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_OnReloadNow_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Both_BP_Code/CharacterAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_OnReloadNow = { "OnReloadNow", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAnimation, OnReloadNow), Z_Construct_UDelegateFunction_A__SmothersSephen_AnimSequence__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_OnReloadNow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_OnReloadNow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_OnReloadEnded_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Both_BP_Code/CharacterAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_OnReloadEnded = { "OnReloadEnded", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAnimation, OnReloadEnded), Z_Construct_UDelegateFunction_A__SmothersSephen_AnimSequence__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_OnReloadEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_OnReloadEnded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_OnDeathEnded_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Both_BP_Code/CharacterAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_OnDeathEnded = { "OnDeathEnded", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAnimation, OnDeathEnded), Z_Construct_UDelegateFunction_A__SmothersSephen_AnimSequence__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_OnDeathEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_OnDeathEnded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugHurt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_Sequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_HurtSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DeadSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_ReloadSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DeadSequenceArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DeadSequenceArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_SlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_OnReloadNow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_OnReloadEnded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_OnDeathEnded,
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
	IMPLEMENT_CLASS(UCharacterAnimation, 3161430675);
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
