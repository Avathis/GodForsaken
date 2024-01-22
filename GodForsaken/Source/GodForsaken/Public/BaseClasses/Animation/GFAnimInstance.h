// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "Animation/AnimInstance.h"
#include "GFAnimInstance.generated.h"

class UAbilitySystemComponent;

/**
 * 
 */
UCLASS(Config = Game)
class GODFORSAKEN_API UGFAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:

	UGFAnimInstance(const FObjectInitializer& ObjectInitializer);
	
	virtual void InitializeWithAbilitySystem(UAbilitySystemComponent* ASC);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Properties")
	class AGFPlayableCharacter* MainCharacter;

protected:
	UPROPERTY(EditDefaultsOnly, Category = "GameplayTags")
	FGameplayTagBlueprintPropertyMap GameplayTagPropertyMap;

	UPROPERTY(BlueprintReadOnly, Category = "Character State Data")
	float GroundDistance = -1.f;

	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	
};
