// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "GFAIController.generated.h"

/**
 * 
 */
UCLASS()
class GODFORSAKEN_API AGFAIController : public AAIController
{
	GENERATED_BODY()

public:
	AGFAIController();

protected:
	virtual void BeginPlay() override;
	
private:
	UPROPERTY(EditAnywhere, Category = "BT")
	class UBehaviorTree* AIBehavior;
};
