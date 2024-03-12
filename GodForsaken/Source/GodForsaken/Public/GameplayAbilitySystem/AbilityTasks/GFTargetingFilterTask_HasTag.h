// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Tasks/TargetingFilterTask_BasicFilterTemplate.h"
#include "GFTargetingFilterTask_HasTag.generated.h"

/**
 * 
 */
UCLASS()
class GODFORSAKEN_API UGFTargetingFilterTask_HasTag : public UTargetingFilterTask_BasicFilterTemplate
{
	GENERATED_BODY()

public:
	UGFTargetingFilterTask_HasTag(const FObjectInitializer& ObjectInitializer);

	virtual bool ShouldFilterTarget(const FTargetingRequestHandle& TargetingHandle, const FTargetingDefaultResultData& TargetData) const override;

	UPROPERTY(EditAnywhere, Category = "Targeting Filter | Tags", Meta = (AllowAbstract=true))
	FGameplayTagContainer TagContainerToHave;
	
	UPROPERTY(EditAnywhere, Category = "Targeting Filter | Tags", Meta = (AllowAbstract=true))
	FGameplayTagContainer TagContainerToNotHave;
};
