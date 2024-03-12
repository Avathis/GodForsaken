// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilitySystem/GFGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGFCharacter;
class AGFPlayerController;
class UGFAbilitySystemComponent;
class UGFCharacterMovementComponent;
struct FActiveGameplayEffectHandle;
struct FGFGameplayAbilityActorInfo;
#ifdef GODFORSAKEN_GFGameplayAbility_generated_h
#error "GFGameplayAbility.generated.h already included, missing '#pragma once' in GFGameplayAbility.h"
#endif
#define GODFORSAKEN_GFGameplayAbility_generated_h

#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayAbility_h_47_SPARSE_DATA
#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayAbility_h_47_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayAbility_h_47_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayAbility_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGFCharacterMovementComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetGFPlayerControllerFromActorInfo); \
	DECLARE_FUNCTION(execGetGFAbilitySystemComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetGFCharacterFromActorInfo); \
	DECLARE_FUNCTION(execK2_GetGFActorInfo); \
	DECLARE_FUNCTION(execGetGrantedByEffectHandle); \
	DECLARE_FUNCTION(execGetGFCharacter);


#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayAbility_h_47_ACCESSORS
#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayAbility_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGFGameplayAbility(); \
	friend struct Z_Construct_UClass_UGFGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UGFGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GodForsaken"), NO_API) \
	DECLARE_SERIALIZER(UGFGameplayAbility)


#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayAbility_h_47_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGFGameplayAbility(UGFGameplayAbility&&); \
	NO_API UGFGameplayAbility(const UGFGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGFGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGFGameplayAbility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGFGameplayAbility) \
	NO_API virtual ~UGFGameplayAbility();


#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayAbility_h_44_PROLOG
#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayAbility_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayAbility_h_47_SPARSE_DATA \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayAbility_h_47_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayAbility_h_47_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayAbility_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayAbility_h_47_ACCESSORS \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayAbility_h_47_INCLASS_NO_PURE_DECLS \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayAbility_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GODFORSAKEN_API UClass* StaticClass<class UGFGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayAbility_h


#define FOREACH_ENUM_EGFABILITYACTIVATIONPOLICY(op) \
	op(EGFAbilityActivationPolicy::OnInputTriggered) \
	op(EGFAbilityActivationPolicy::WhileInputActive) \
	op(EGFAbilityActivationPolicy::OnSpawn) 

enum class EGFAbilityActivationPolicy : uint8;
template<> struct TIsUEnumClass<EGFAbilityActivationPolicy> { enum { Value = true }; };
template<> GODFORSAKEN_API UEnum* StaticEnum<EGFAbilityActivationPolicy>();

#define FOREACH_ENUM_EGFABILITYACTIVATIONGROUP(op) \
	op(EGFAbilityActivationGroup::Independent) \
	op(EGFAbilityActivationGroup::Exclusive_Replaceable) \
	op(EGFAbilityActivationGroup::Exclusive_Blocking) 

enum class EGFAbilityActivationGroup : uint8;
template<> struct TIsUEnumClass<EGFAbilityActivationGroup> { enum { Value = true }; };
template<> GODFORSAKEN_API UEnum* StaticEnum<EGFAbilityActivationGroup>();

#define FOREACH_ENUM_ABILITYUPGRADES(op) \
	op(AbilityUpgrades::Normal) 

enum class AbilityUpgrades : uint8;
template<> struct TIsUEnumClass<AbilityUpgrades> { enum { Value = true }; };
template<> GODFORSAKEN_API UEnum* StaticEnum<AbilityUpgrades>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
