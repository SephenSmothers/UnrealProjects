// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef A__SMOTHERSSEPHEN_CharacterAnimation_generated_h
#error "CharacterAnimation.generated.h already included, missing '#pragma once' in CharacterAnimation.h"
#endif
#define A__SMOTHERSSEPHEN_CharacterAnimation_generated_h

#define A__SmothersSephen_Source_A__SmothersSephen_Public_Both_BP_Code_CharacterAnimation_h_13_DELEGATE \
static inline void FAnimSequence_DelegateWrapper(const FMulticastScriptDelegate& AnimSequence) \
{ \
	AnimSequence.ProcessMulticastDelegate<UObject>(NULL); \
}


#define A__SmothersSephen_Source_A__SmothersSephen_Public_Both_BP_Code_CharacterAnimation_h_18_SPARSE_DATA
#define A__SmothersSephen_Source_A__SmothersSephen_Public_Both_BP_Code_CharacterAnimation_h_18_RPC_WRAPPERS \
	virtual void ReloadAnimation_Implementation(); \
	virtual void DeadAnimationEnded_Implementation(); \
	virtual void DeadAnimation_Implementation(float ratio); \
	virtual void HurtAnimation_Implementation(float ratio); \
	virtual void FireAnimation_Implementation(); \
	virtual void PreviewWindowUpdate_Implementation(); \
 \
	DECLARE_FUNCTION(execReloadAnimation); \
	DECLARE_FUNCTION(execDeadAnimationEnded); \
	DECLARE_FUNCTION(execDeadAnimation); \
	DECLARE_FUNCTION(execHurtAnimation); \
	DECLARE_FUNCTION(execFireAnimation); \
	DECLARE_FUNCTION(execPreviewWindowUpdate);


#define A__SmothersSephen_Source_A__SmothersSephen_Public_Both_BP_Code_CharacterAnimation_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReloadAnimation); \
	DECLARE_FUNCTION(execDeadAnimationEnded); \
	DECLARE_FUNCTION(execDeadAnimation); \
	DECLARE_FUNCTION(execHurtAnimation); \
	DECLARE_FUNCTION(execFireAnimation); \
	DECLARE_FUNCTION(execPreviewWindowUpdate);


#define A__SmothersSephen_Source_A__SmothersSephen_Public_Both_BP_Code_CharacterAnimation_h_18_EVENT_PARMS \
	struct CharacterAnimation_eventDeadAnimation_Parms \
	{ \
		float ratio; \
	}; \
	struct CharacterAnimation_eventHurtAnimation_Parms \
	{ \
		float ratio; \
	};


#define A__SmothersSephen_Source_A__SmothersSephen_Public_Both_BP_Code_CharacterAnimation_h_18_CALLBACK_WRAPPERS
#define A__SmothersSephen_Source_A__SmothersSephen_Public_Both_BP_Code_CharacterAnimation_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterAnimation(); \
	friend struct Z_Construct_UClass_UCharacterAnimation_Statics; \
public: \
	DECLARE_CLASS(UCharacterAnimation, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/A__SmothersSephen"), NO_API) \
	DECLARE_SERIALIZER(UCharacterAnimation)


#define A__SmothersSephen_Source_A__SmothersSephen_Public_Both_BP_Code_CharacterAnimation_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCharacterAnimation(); \
	friend struct Z_Construct_UClass_UCharacterAnimation_Statics; \
public: \
	DECLARE_CLASS(UCharacterAnimation, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/A__SmothersSephen"), NO_API) \
	DECLARE_SERIALIZER(UCharacterAnimation)


#define A__SmothersSephen_Source_A__SmothersSephen_Public_Both_BP_Code_CharacterAnimation_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterAnimation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterAnimation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterAnimation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterAnimation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterAnimation(UCharacterAnimation&&); \
	NO_API UCharacterAnimation(const UCharacterAnimation&); \
public:


#define A__SmothersSephen_Source_A__SmothersSephen_Public_Both_BP_Code_CharacterAnimation_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterAnimation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterAnimation(UCharacterAnimation&&); \
	NO_API UCharacterAnimation(const UCharacterAnimation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterAnimation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterAnimation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterAnimation)


#define A__SmothersSephen_Source_A__SmothersSephen_Public_Both_BP_Code_CharacterAnimation_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(UCharacterAnimation, Speed); } \
	FORCEINLINE static uint32 __PPO__Direction() { return STRUCT_OFFSET(UCharacterAnimation, Direction); } \
	FORCEINLINE static uint32 __PPO__DebugFire() { return STRUCT_OFFSET(UCharacterAnimation, DebugFire); } \
	FORCEINLINE static uint32 __PPO__DebugHurt() { return STRUCT_OFFSET(UCharacterAnimation, DebugHurt); } \
	FORCEINLINE static uint32 __PPO__DebugDead() { return STRUCT_OFFSET(UCharacterAnimation, DebugDead); } \
	FORCEINLINE static uint32 __PPO__Sequence() { return STRUCT_OFFSET(UCharacterAnimation, Sequence); } \
	FORCEINLINE static uint32 __PPO__HurtSequence() { return STRUCT_OFFSET(UCharacterAnimation, HurtSequence); } \
	FORCEINLINE static uint32 __PPO__DeadSequence() { return STRUCT_OFFSET(UCharacterAnimation, DeadSequence); } \
	FORCEINLINE static uint32 __PPO__ReloadSequence() { return STRUCT_OFFSET(UCharacterAnimation, ReloadSequence); } \
	FORCEINLINE static uint32 __PPO__DeadSequenceArray() { return STRUCT_OFFSET(UCharacterAnimation, DeadSequenceArray); } \
	FORCEINLINE static uint32 __PPO__SlotName() { return STRUCT_OFFSET(UCharacterAnimation, SlotName); }


#define A__SmothersSephen_Source_A__SmothersSephen_Public_Both_BP_Code_CharacterAnimation_h_15_PROLOG \
	A__SmothersSephen_Source_A__SmothersSephen_Public_Both_BP_Code_CharacterAnimation_h_18_EVENT_PARMS


#define A__SmothersSephen_Source_A__SmothersSephen_Public_Both_BP_Code_CharacterAnimation_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	A__SmothersSephen_Source_A__SmothersSephen_Public_Both_BP_Code_CharacterAnimation_h_18_PRIVATE_PROPERTY_OFFSET \
	A__SmothersSephen_Source_A__SmothersSephen_Public_Both_BP_Code_CharacterAnimation_h_18_SPARSE_DATA \
	A__SmothersSephen_Source_A__SmothersSephen_Public_Both_BP_Code_CharacterAnimation_h_18_RPC_WRAPPERS \
	A__SmothersSephen_Source_A__SmothersSephen_Public_Both_BP_Code_CharacterAnimation_h_18_CALLBACK_WRAPPERS \
	A__SmothersSephen_Source_A__SmothersSephen_Public_Both_BP_Code_CharacterAnimation_h_18_INCLASS \
	A__SmothersSephen_Source_A__SmothersSephen_Public_Both_BP_Code_CharacterAnimation_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define A__SmothersSephen_Source_A__SmothersSephen_Public_Both_BP_Code_CharacterAnimation_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	A__SmothersSephen_Source_A__SmothersSephen_Public_Both_BP_Code_CharacterAnimation_h_18_PRIVATE_PROPERTY_OFFSET \
	A__SmothersSephen_Source_A__SmothersSephen_Public_Both_BP_Code_CharacterAnimation_h_18_SPARSE_DATA \
	A__SmothersSephen_Source_A__SmothersSephen_Public_Both_BP_Code_CharacterAnimation_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	A__SmothersSephen_Source_A__SmothersSephen_Public_Both_BP_Code_CharacterAnimation_h_18_CALLBACK_WRAPPERS \
	A__SmothersSephen_Source_A__SmothersSephen_Public_Both_BP_Code_CharacterAnimation_h_18_INCLASS_NO_PURE_DECLS \
	A__SmothersSephen_Source_A__SmothersSephen_Public_Both_BP_Code_CharacterAnimation_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> A__SMOTHERSSEPHEN_API UClass* StaticClass<class UCharacterAnimation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID A__SmothersSephen_Source_A__SmothersSephen_Public_Both_BP_Code_CharacterAnimation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
