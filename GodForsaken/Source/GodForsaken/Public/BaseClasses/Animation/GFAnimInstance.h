// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GFAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class GODFORSAKEN_API UGFAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:

	virtual void NativeInitializeAnimation() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Properties")
	class AGFPlayableCharacter* MainCharacter;
	
};
