// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseClasses/Characters/GFCharacter.h"

// Sets default values
AGFCharacter::AGFCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGFCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGFCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGFCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

