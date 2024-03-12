// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/GFBTTask_ActivateAbilityByTag.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GODFORSAKEN_GFBTTask_ActivateAbilityByTag_generated_h
#error "GFBTTask_ActivateAbilityByTag.generated.h already included, missing '#pragma once' in GFBTTask_ActivateAbilityByTag.h"
#endif
#define GODFORSAKEN_GFBTTask_ActivateAbilityByTag_generated_h

#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTTask_ActivateAbilityByTag_h_22_SPARSE_DATA
#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTTask_ActivateAbilityByTag_h_22_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTTask_ActivateAbilityByTag_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTTask_ActivateAbilityByTag_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTTask_ActivateAbilityByTag_h_22_ACCESSORS
#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTTask_ActivateAbilityByTag_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGFBTTask_ActivateAbilityByTag(); \
	friend struct Z_Construct_UClass_UGFBTTask_ActivateAbilityByTag_Statics; \
public: \
	DECLARE_CLASS(UGFBTTask_ActivateAbilityByTag, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GodForsaken"), NO_API) \
	DECLARE_SERIALIZER(UGFBTTask_ActivateAbilityByTag)


#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTTask_ActivateAbilityByTag_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGFBTTask_ActivateAbilityByTag(UGFBTTask_ActivateAbilityByTag&&); \
	NO_API UGFBTTask_ActivateAbilityByTag(const UGFBTTask_ActivateAbilityByTag&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGFBTTask_ActivateAbilityByTag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGFBTTask_ActivateAbilityByTag); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGFBTTask_ActivateAbilityByTag) \
	NO_API virtual ~UGFBTTask_ActivateAbilityByTag();


#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTTask_ActivateAbilityByTag_h_19_PROLOG
#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTTask_ActivateAbilityByTag_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTTask_ActivateAbilityByTag_h_22_SPARSE_DATA \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTTask_ActivateAbilityByTag_h_22_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTTask_ActivateAbilityByTag_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTTask_ActivateAbilityByTag_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTTask_ActivateAbilityByTag_h_22_ACCESSORS \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTTask_ActivateAbilityByTag_h_22_INCLASS_NO_PURE_DECLS \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTTask_ActivateAbilityByTag_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GODFORSAKEN_API UClass* StaticClass<class UGFBTTask_ActivateAbilityByTag>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_AI_GFBTTask_ActivateAbilityByTag_h


#define FOREACH_ENUM_EGFEXECUTEGAMEPLAYABILITYABORTBEHAVIOUR(op) \
	op(EGFExecuteGameplayAbilityAbortBehaviour::CancelAbility) \
	op(EGFExecuteGameplayAbilityAbortBehaviour::Nothing) 

enum class EGFExecuteGameplayAbilityAbortBehaviour;
template<> struct TIsUEnumClass<EGFExecuteGameplayAbilityAbortBehaviour> { enum { Value = true }; };
template<> GODFORSAKEN_API UEnum* StaticEnum<EGFExecuteGameplayAbilityAbortBehaviour>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
