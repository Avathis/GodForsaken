// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseClasses/Characters/GFCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGFGameplayAbility;
struct FGameplayTag;
#ifdef GODFORSAKEN_GFCharacter_generated_h
#error "GFCharacter.generated.h already included, missing '#pragma once' in GFCharacter.h"
#endif
#define GODFORSAKEN_GFCharacter_generated_h

#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFCharacter_h_14_SPARSE_DATA
#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFCharacter_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFCharacter_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetArmor); \
	DECLARE_FUNCTION(execGetMaxSpeed); \
	DECLARE_FUNCTION(execGetSpeed); \
	DECLARE_FUNCTION(execGetSpecialPercentage); \
	DECLARE_FUNCTION(execGetEnergyPercentage); \
	DECLARE_FUNCTION(execGetStaminaPercentage); \
	DECLARE_FUNCTION(execGetHealthPercentage); \
	DECLARE_FUNCTION(execGetMaxSpecial); \
	DECLARE_FUNCTION(execGetSpecial); \
	DECLARE_FUNCTION(execGetStaminaRegenRate); \
	DECLARE_FUNCTION(execGetMaxStamina); \
	DECLARE_FUNCTION(execGetStamina); \
	DECLARE_FUNCTION(execGetEnergyRegenRate); \
	DECLARE_FUNCTION(execGetMaxEnergy); \
	DECLARE_FUNCTION(execGetEnergy); \
	DECLARE_FUNCTION(execGetHealthRegenRate); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGrantAbility);


#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFCharacter_h_14_ACCESSORS
#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGFCharacter(); \
	friend struct Z_Construct_UClass_AGFCharacter_Statics; \
public: \
	DECLARE_CLASS(AGFCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GodForsaken"), NO_API) \
	DECLARE_SERIALIZER(AGFCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AGFCharacter*>(this); }


#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGFCharacter(AGFCharacter&&); \
	NO_API AGFCharacter(const AGFCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGFCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGFCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGFCharacter) \
	NO_API virtual ~AGFCharacter();


#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFCharacter_h_11_PROLOG
#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFCharacter_h_14_SPARSE_DATA \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFCharacter_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFCharacter_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFCharacter_h_14_ACCESSORS \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFCharacter_h_14_INCLASS_NO_PURE_DECLS \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GODFORSAKEN_API UClass* StaticClass<class AGFCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
