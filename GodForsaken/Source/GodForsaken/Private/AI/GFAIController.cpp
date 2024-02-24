// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/GFAIController.h"

AGFAIController::AGFAIController()
{
}

void AGFAIController::BeginPlay()
{
	Super::BeginPlay();

	if(AIBehavior)
	{
		RunBehaviorTree(AIBehavior);
	}
}
