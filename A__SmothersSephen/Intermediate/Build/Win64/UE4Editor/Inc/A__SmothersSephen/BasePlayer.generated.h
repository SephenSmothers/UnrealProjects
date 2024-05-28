// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef A__SMOTHERSSEPHEN_BasePlayer_generated_h
#error "BasePlayer.generated.h already included, missing '#pragma once' in BasePlayer.h"
#endif
#define A__SMOTHERSSEPHEN_BasePlayer_generated_h

#define A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BasePlayer_h_10_DELEGATE \
static inline void FPlayerDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlayerDelegate) \
{ \
	PlayerDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BasePlayer_h_17_SPARSE_DATA
#define A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BasePlayer_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWinGame); \
	DECLARE_FUNCTION(execDeathEnded);


#define A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BasePlayer_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWinGame); \
	DECLARE_FUNCTION(execDeathEnded);


#define A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BasePlayer_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasePlayer(); \
	friend struct Z_Construct_UClass_ABasePlayer_Statics; \
public: \
	DECLARE_CLASS(ABasePlayer, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/A__SmothersSephen"), NO_API) \
	DECLARE_SERIALIZER(ABasePlayer)


#define A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BasePlayer_h_17_INCLASS \
private: \
	static void StaticRegisterNativesABasePlayer(); \
	friend struct Z_Construct_UClass_ABasePlayer_Statics; \
public: \
	DECLARE_CLASS(ABasePlayer, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/A__SmothersSephen"), NO_API) \
	DECLARE_SERIALIZER(ABasePlayer)


#define A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BasePlayer_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasePlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePlayer(ABasePlayer&&); \
	NO_API ABasePlayer(const ABasePlayer&); \
public:


#define A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BasePlayer_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePlayer(ABasePlayer&&); \
	NO_API ABasePlayer(const ABasePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasePlayer)


#define A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BasePlayer_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ABasePlayer, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ABasePlayer, Camera); } \
	FORCEINLINE static uint32 __PPO__PlayerController() { return STRUCT_OFFSET(ABasePlayer, PlayerController); } \
	FORCEINLINE static uint32 __PPO__HUDClassType() { return STRUCT_OFFSET(ABasePlayer, HUDClassType); }


#define A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BasePlayer_h_14_PROLOG
#define A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BasePlayer_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BasePlayer_h_17_PRIVATE_PROPERTY_OFFSET \
	A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BasePlayer_h_17_SPARSE_DATA \
	A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BasePlayer_h_17_RPC_WRAPPERS \
	A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BasePlayer_h_17_INCLASS \
	A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BasePlayer_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BasePlayer_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BasePlayer_h_17_PRIVATE_PROPERTY_OFFSET \
	A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BasePlayer_h_17_SPARSE_DATA \
	A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BasePlayer_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BasePlayer_h_17_INCLASS_NO_PURE_DECLS \
	A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BasePlayer_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> A__SMOTHERSSEPHEN_API UClass* StaticClass<class ABasePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID A__SmothersSephen_Source_A__SmothersSephen_Public_Actors_BasePlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
