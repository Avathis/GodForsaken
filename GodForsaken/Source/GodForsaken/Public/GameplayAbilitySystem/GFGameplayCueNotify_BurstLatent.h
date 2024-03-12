// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayCueNotify_BurstLatent.h"
#include "GFGameplayCueNotify_BurstLatent.generated.h"

/**
 * 
 */
UCLASS()
class GODFORSAKEN_API AGFGameplayCueNotify_BurstLatent : public AGameplayCueNotify_BurstLatent
{
	GENERATED_BODY()

public:
	virtual void HandleGameplayCue(AActor* MyTarget, EGameplayCueEvent::Type EventType, const FGameplayCueParameters& Parameters) override;

protected:
	virtual bool OnExecute_Implementation(AActor* Target, const FGameplayCueParameters& Parameters) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "HitStop")
	float HitStopTimeDelay;

	UFUNCTION(BlueprintCallable, Category = "HitStop")
	void InitiateHitStop(AActor* Target);

	UFUNCTION(BlueprintCallable, Category = "HitStop")
	void CancelHitStop(AActor* Target);

	FTimerHandle HitStopTimerHandle;
};
