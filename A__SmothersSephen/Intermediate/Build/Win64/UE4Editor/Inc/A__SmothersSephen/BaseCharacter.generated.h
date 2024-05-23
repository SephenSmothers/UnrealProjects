// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef A__SMOTHERSSEPHEN_BaseCharacter_generated_h
#error "BaseCharacter.generated.h already included, missing '#pragma once' in BaseCharacter.h"
#endif
#define A__SMOTHERSSEPHEN_BaseCharacter_generated_h

#define A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BaseCharacter_h_16_SPARSE_DATA
#define A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BaseCharacter_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleDeath);


#define A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BaseCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleDeath);


#define A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BaseCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/A__SmothersSephen"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ABaseCharacter*>(this); }


#define A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BaseCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/A__SmothersSephen"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ABaseCharacter*>(this); }


#define A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BaseCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public:


#define A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BaseCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacter)


#define A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BaseCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ChildActorComponent() { return STRUCT_OFFSET(ABaseCharacter, ChildActorComponent); } \
	FORCEINLINE static uint32 __PPO__WeaponClass() { return STRUCT_OFFSET(ABaseCharacter, WeaponClass); } \
	FORCEINLINE static uint32 __PPO__Weapon() { return STRUCT_OFFSET(ABaseCharacter, Weapon); } \
	FORCEINLINE static uint32 __PPO__AnimInstanceCore() { return STRUCT_OFFSET(ABaseCharacter, AnimInstanceCore); } \
	FORCEINLINE static uint32 __PPO__HealthComponent() { return STRUCT_OFFSET(ABaseCharacter, HealthComponent); }


#define A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BaseCharacter_h_13_PROLOG
#define A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BaseCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BaseCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BaseCharacter_h_16_SPARSE_DATA \
	A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BaseCharacter_h_16_RPC_WRAPPERS \
	A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BaseCharacter_h_16_INCLASS \
	A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BaseCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BaseCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BaseCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BaseCharacter_h_16_SPARSE_DATA \
	A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BaseCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BaseCharacter_h_16_INCLASS_NO_PURE_DECLS \
	A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BaseCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> A__SMOTHERSSEPHEN_API UClass* StaticClass<class ABaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
