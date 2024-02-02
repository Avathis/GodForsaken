// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GFGameplayCueSourceObject.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class GODFORSAKEN_API UGFGameplayCueSourceObject : public UObject
{
	GENERATED_BODY()
public:
	UGFGameplayCueSourceObject(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlacementInfo",Meta = (ExposeOnSpawn=true))
	FName SocketName;

	
};
