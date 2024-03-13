// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A__SmothersSephen/Public/Testing/TestingVariable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestingVariable() {}
// Cross Module References
	A__SMOTHERSSEPHEN_API UClass* Z_Construct_UClass_ATestingVariable_NoRegister();
	A__SMOTHERSSEPHEN_API UClass* Z_Construct_UClass_ATestingVariable();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_A__SmothersSephen();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ATestingVariable::StaticRegisterNativesATestingVariable()
	{
	}
	UClass* Z_Construct_UClass_ATestingVariable_NoRegister()
	{
		return ATestingVariable::StaticClass();
	}
	struct Z_Construct_UClass_ATestingVariable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleAnywhere_MetaData[];
#endif
		static void NewProp_VisibleAnywhere_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VisibleAnywhere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleDefaultsOnly_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VisibleDefaultsOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleInstanceOnlyOdd_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VisibleInstanceOnlyOdd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleInstanceOnly_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_VisibleInstanceOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditAnywhere_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EditAnywhere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditDefaultsOnlyOdd_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EditDefaultsOnlyOdd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditInstanceOnlyOdd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EditInstanceOnlyOdd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditDefaultsOnly_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_EditDefaultsOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditInstanceOnly_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditInstanceOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestingVariable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_A__SmothersSephen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestingVariable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Testing/TestingVariable.h" },
		{ "ModuleRelativePath", "Public/Testing/TestingVariable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestingVariable_Statics::NewProp_VisibleAnywhere_MetaData[] = {
		{ "Category", "Variable|ReadOnly" },
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Public/Testing/TestingVariable.h" },
	};
#endif
	void Z_Construct_UClass_ATestingVariable_Statics::NewProp_VisibleAnywhere_SetBit(void* Obj)
	{
		((ATestingVariable*)Obj)->VisibleAnywhere = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATestingVariable_Statics::NewProp_VisibleAnywhere = { "VisibleAnywhere", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATestingVariable), &Z_Construct_UClass_ATestingVariable_Statics::NewProp_VisibleAnywhere_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATestingVariable_Statics::NewProp_VisibleAnywhere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestingVariable_Statics::NewProp_VisibleAnywhere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestingVariable_Statics::NewProp_VisibleDefaultsOnly_MetaData[] = {
		{ "Category", "Variable|ReadOnly" },
		{ "ModuleRelativePath", "Public/Testing/TestingVariable.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATestingVariable_Statics::NewProp_VisibleDefaultsOnly = { "VisibleDefaultsOnly", nullptr, (EPropertyFlags)0x0020080000030015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestingVariable, VisibleDefaultsOnly), nullptr, METADATA_PARAMS(Z_Construct_UClass_ATestingVariable_Statics::NewProp_VisibleDefaultsOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestingVariable_Statics::NewProp_VisibleDefaultsOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestingVariable_Statics::NewProp_VisibleInstanceOnlyOdd_MetaData[] = {
		{ "Category", "Variable|ReadOnly" },
		{ "ModuleRelativePath", "Public/Testing/TestingVariable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATestingVariable_Statics::NewProp_VisibleInstanceOnlyOdd = { "VisibleInstanceOnlyOdd", nullptr, (EPropertyFlags)0x0020080000020815, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestingVariable, VisibleInstanceOnlyOdd), METADATA_PARAMS(Z_Construct_UClass_ATestingVariable_Statics::NewProp_VisibleInstanceOnlyOdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestingVariable_Statics::NewProp_VisibleInstanceOnlyOdd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestingVariable_Statics::NewProp_VisibleInstanceOnly_MetaData[] = {
		{ "Category", "Variable|ReadOnly" },
		{ "ModuleRelativePath", "Public/Testing/TestingVariable.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UClass_ATestingVariable_Statics::NewProp_VisibleInstanceOnly = { "VisibleInstanceOnly", nullptr, (EPropertyFlags)0x0020080000020801, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestingVariable, VisibleInstanceOnly), METADATA_PARAMS(Z_Construct_UClass_ATestingVariable_Statics::NewProp_VisibleInstanceOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestingVariable_Statics::NewProp_VisibleInstanceOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestingVariable_Statics::NewProp_EditAnywhere_MetaData[] = {
		{ "Category", "Variable|ReadWrite" },
		{ "Comment", "//Read / Write\n" },
		{ "ModuleRelativePath", "Public/Testing/TestingVariable.h" },
		{ "ToolTip", "Read / Write" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATestingVariable_Statics::NewProp_EditAnywhere = { "EditAnywhere", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestingVariable, EditAnywhere), METADATA_PARAMS(Z_Construct_UClass_ATestingVariable_Statics::NewProp_EditAnywhere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestingVariable_Statics::NewProp_EditAnywhere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestingVariable_Statics::NewProp_EditDefaultsOnlyOdd_MetaData[] = {
		{ "Category", "Variable|ReadWrite" },
		{ "ModuleRelativePath", "Public/Testing/TestingVariable.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATestingVariable_Statics::NewProp_EditDefaultsOnlyOdd = { "EditDefaultsOnlyOdd", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestingVariable, EditDefaultsOnlyOdd), METADATA_PARAMS(Z_Construct_UClass_ATestingVariable_Statics::NewProp_EditDefaultsOnlyOdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestingVariable_Statics::NewProp_EditDefaultsOnlyOdd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestingVariable_Statics::NewProp_EditInstanceOnlyOdd_MetaData[] = {
		{ "Category", "Variable|ReadWrite" },
		{ "ModuleRelativePath", "Public/Testing/TestingVariable.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATestingVariable_Statics::NewProp_EditInstanceOnlyOdd = { "EditInstanceOnlyOdd", nullptr, (EPropertyFlags)0x0020080000000805, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestingVariable, EditInstanceOnlyOdd), METADATA_PARAMS(Z_Construct_UClass_ATestingVariable_Statics::NewProp_EditInstanceOnlyOdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestingVariable_Statics::NewProp_EditInstanceOnlyOdd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestingVariable_Statics::NewProp_EditDefaultsOnly_MetaData[] = {
		{ "Category", "Variable|ReadWrite" },
		{ "ModuleRelativePath", "Public/Testing/TestingVariable.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ATestingVariable_Statics::NewProp_EditDefaultsOnly = { "EditDefaultsOnly", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestingVariable, EditDefaultsOnly), METADATA_PARAMS(Z_Construct_UClass_ATestingVariable_Statics::NewProp_EditDefaultsOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestingVariable_Statics::NewProp_EditDefaultsOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestingVariable_Statics::NewProp_EditInstanceOnly_MetaData[] = {
		{ "Category", "Variable|ReadWrite" },
		{ "ModuleRelativePath", "Public/Testing/TestingVariable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATestingVariable_Statics::NewProp_EditInstanceOnly = { "EditInstanceOnly", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestingVariable, EditInstanceOnly), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATestingVariable_Statics::NewProp_EditInstanceOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestingVariable_Statics::NewProp_EditInstanceOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestingVariable_Statics::NewProp_ClassType_MetaData[] = {
		{ "Category", "Variable|ReadWrite" },
		{ "Comment", "// Class reference\n" },
		{ "ModuleRelativePath", "Public/Testing/TestingVariable.h" },
		{ "ToolTip", "Class reference" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATestingVariable_Statics::NewProp_ClassType = { "ClassType", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestingVariable, ClassType), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATestingVariable_Statics::NewProp_ClassType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestingVariable_Statics::NewProp_ClassType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestingVariable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestingVariable_Statics::NewProp_VisibleAnywhere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestingVariable_Statics::NewProp_VisibleDefaultsOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestingVariable_Statics::NewProp_VisibleInstanceOnlyOdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestingVariable_Statics::NewProp_VisibleInstanceOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestingVariable_Statics::NewProp_EditAnywhere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestingVariable_Statics::NewProp_EditDefaultsOnlyOdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestingVariable_Statics::NewProp_EditInstanceOnlyOdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestingVariable_Statics::NewProp_EditDefaultsOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestingVariable_Statics::NewProp_EditInstanceOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestingVariable_Statics::NewProp_ClassType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestingVariable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestingVariable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATestingVariable_Statics::ClassParams = {
		&ATestingVariable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATestingVariable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATestingVariable_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ATestingVariable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestingVariable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestingVariable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATestingVariable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestingVariable, 1817743197);
	template<> A__SMOTHERSSEPHEN_API UClass* StaticClass<ATestingVariable>()
	{
		return ATestingVariable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestingVariable(Z_Construct_UClass_ATestingVariable, &ATestingVariable::StaticClass, TEXT("/Script/A__SmothersSephen"), TEXT("ATestingVariable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestingVariable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
