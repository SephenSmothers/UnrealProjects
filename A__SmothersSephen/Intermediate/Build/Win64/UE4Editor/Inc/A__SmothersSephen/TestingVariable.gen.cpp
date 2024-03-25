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
	A__SMOTHERSSEPHEN_API UFunction* Z_Construct_UDelegateFunction_A__SmothersSephen_VariableDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_A__SmothersSephen();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	A__SMOTHERSSEPHEN_API UClass* Z_Construct_UClass_ATestingVariable_NoRegister();
	A__SMOTHERSSEPHEN_API UClass* Z_Construct_UClass_ATestingVariable();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_A__SmothersSephen_VariableDelegate__DelegateSignature_Statics
	{
		struct _Script_A__SmothersSephen_eventVariableDelegate_Parms
		{
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_A__SmothersSephen_VariableDelegate__DelegateSignature_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_A__SmothersSephen_eventVariableDelegate_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_A__SmothersSephen_VariableDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_A__SmothersSephen_VariableDelegate__DelegateSignature_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_A__SmothersSephen_VariableDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Testing/TestingVariable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_A__SmothersSephen_VariableDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_A__SmothersSephen, nullptr, "VariableDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_A__SmothersSephen_eventVariableDelegate_Parms), Z_Construct_UDelegateFunction_A__SmothersSephen_VariableDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_A__SmothersSephen_VariableDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_A__SmothersSephen_VariableDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_A__SmothersSephen_VariableDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_A__SmothersSephen_VariableDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_A__SmothersSephen_VariableDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ATestingVariable::execExampleBoundFunction)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExampleBoundFunction(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void ATestingVariable::StaticRegisterNativesATestingVariable()
	{
		UClass* Class = ATestingVariable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExampleBoundFunction", &ATestingVariable::execExampleBoundFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATestingVariable_ExampleBoundFunction_Statics
	{
		struct TestingVariable_eventExampleBoundFunction_Parms
		{
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATestingVariable_ExampleBoundFunction_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestingVariable_eventExampleBoundFunction_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestingVariable_ExampleBoundFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestingVariable_ExampleBoundFunction_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestingVariable_ExampleBoundFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Testing/TestingVariable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestingVariable_ExampleBoundFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestingVariable, nullptr, "ExampleBoundFunction", nullptr, nullptr, sizeof(TestingVariable_eventExampleBoundFunction_Parms), Z_Construct_UFunction_ATestingVariable_ExampleBoundFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestingVariable_ExampleBoundFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestingVariable_ExampleBoundFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestingVariable_ExampleBoundFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestingVariable_ExampleBoundFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATestingVariable_ExampleBoundFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATestingVariable_NoRegister()
	{
		return ATestingVariable::StaticClass();
	}
	struct Z_Construct_UClass_ATestingVariable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTestingDelegateVariable_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTestingDelegateVariable;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ValueArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ValueArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PointerArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointerArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PointerArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestingVariable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_A__SmothersSephen,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATestingVariable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATestingVariable_ExampleBoundFunction, "ExampleBoundFunction" }, // 1689207117
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestingVariable_Statics::NewProp_OnTestingDelegateVariable_MetaData[] = {
		{ "Category", "Variable" },
		{ "Comment", "// Event Dispatcher\n" },
		{ "ModuleRelativePath", "Public/Testing/TestingVariable.h" },
		{ "ToolTip", "Event Dispatcher" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATestingVariable_Statics::NewProp_OnTestingDelegateVariable = { "OnTestingDelegateVariable", nullptr, (EPropertyFlags)0x0020180010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestingVariable, OnTestingDelegateVariable), Z_Construct_UDelegateFunction_A__SmothersSephen_VariableDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ATestingVariable_Statics::NewProp_OnTestingDelegateVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestingVariable_Statics::NewProp_OnTestingDelegateVariable_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATestingVariable_Statics::NewProp_ValueArray_Inner = { "ValueArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestingVariable_Statics::NewProp_ValueArray_MetaData[] = {
		{ "Category", "Variable|Array" },
		{ "Comment", "//Array\n" },
		{ "ModuleRelativePath", "Public/Testing/TestingVariable.h" },
		{ "ToolTip", "Array" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATestingVariable_Statics::NewProp_ValueArray = { "ValueArray", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestingVariable, ValueArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATestingVariable_Statics::NewProp_ValueArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestingVariable_Statics::NewProp_ValueArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestingVariable_Statics::NewProp_PointerArray_Inner = { "PointerArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestingVariable_Statics::NewProp_PointerArray_MetaData[] = {
		{ "Category", "Variable|Array" },
		{ "ModuleRelativePath", "Public/Testing/TestingVariable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATestingVariable_Statics::NewProp_PointerArray = { "PointerArray", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestingVariable, PointerArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATestingVariable_Statics::NewProp_PointerArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestingVariable_Statics::NewProp_PointerArray_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestingVariable_Statics::NewProp_OnTestingDelegateVariable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestingVariable_Statics::NewProp_ValueArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestingVariable_Statics::NewProp_ValueArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestingVariable_Statics::NewProp_PointerArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestingVariable_Statics::NewProp_PointerArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestingVariable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestingVariable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATestingVariable_Statics::ClassParams = {
		&ATestingVariable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATestingVariable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ATestingVariable, 905190857);
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
