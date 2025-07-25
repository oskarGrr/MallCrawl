// Fill out your copyright notice in the Description page of Project Settings.
#include "PlayerCharacter.h"
#include "DebugUtils.h"

APlayerCharacter::APlayerCharacter()
{
    PrimaryActorTick.bCanEverTick = true;
}

void APlayerCharacter::BeginPlay()
{
    Super::BeginPlay();


}

void APlayerCharacter::Tick(float dtSeconds)
{
    Super::Tick(dtSeconds);

}
