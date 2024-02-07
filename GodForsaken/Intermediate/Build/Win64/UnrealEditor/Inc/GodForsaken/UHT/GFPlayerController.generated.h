// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/GFPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGFAbilitySystemComponent;
#ifdef GODFORSAKEN_GFPlayerController_generated_h
#error "GFPlayerController.generated.h already included, missing '#pragma once' in GFPlayerController.h"
#endif
#define GODFORSAKEN_GFPlayerController_generated_h

#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_Player_GFPlayerController_h_16_SPARSE_DATA
#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_Player_GFPlayerController_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_Player_GFPlayerController_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_Player_GFPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSpecialPercentage); \
	DECLARE_FUNCTION(execSetStaminaPercentage); \
	DECLARE_FUNCTION(execSetHealthPercentage); \
	DECLARE_FUNCTION(execGetGFAbilitySystemComponent);


#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_Player_GFPlayerController_h_16_ACCESSORS
#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_Player_GFPlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGFPlayerController(); \
	friend struct Z_Construct_UClass_AGFPlayerController_Statics; \
public: \
	DECLARE_CLASS(AGFPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GodForsaken"), NO_API) \
	DECLARE_SERIALIZER(AGFPlayerController)


#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_Player_GFPlayerController_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGFPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGFPlayerController(AGFPlayerController&&); \
	NO_API AGFPlayerController(const AGFPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGFPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGFPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGFPlayerController) \
	NO_API virtual ~AGFPlayerController();


#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_Player_GFPlayerController_h_13_PROLOG
#define FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_Player_GFPlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_Player_GFPlayerController_h_16_SPARSE_DATA \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_Player_GFPlayerController_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_Player_GFPlayerController_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_Player_GFPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_Player_GFPlayerController_h_16_ACCESSORS \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_Player_GFPlayerController_h_16_INCLASS_NO_PURE_DECLS \
	FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_Player_GFPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GODFORSAKEN_API UClass* StaticClass<class AGFPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_Player_GFPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
