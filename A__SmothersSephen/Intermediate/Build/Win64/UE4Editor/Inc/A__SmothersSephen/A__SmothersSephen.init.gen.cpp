// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeA__SmothersSephen_init() {}
	A__SMOTHERSSEPHEN_API UFunction* Z_Construct_UDelegateFunction_A__SmothersSephen_RifleFire__DelegateSignature();
	A__SMOTHERSSEPHEN_API UFunction* Z_Construct_UDelegateFunction_A__SmothersSephen_HealthDelegate__DelegateSignature();
	A__SMOTHERSSEPHEN_API UFunction* Z_Construct_UDelegateFunction_A__SmothersSephen_VariableDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_A__SmothersSephen()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_A__SmothersSephen_RifleFire__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_A__SmothersSephen_HealthDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_A__SmothersSephen_VariableDelegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/A__SmothersSephen",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xCE803E83,
				0x95A3E64B,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
