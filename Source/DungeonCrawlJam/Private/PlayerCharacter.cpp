// Fill out your copyright notice in the Description page of Project Settings.
#include "PlayerCharacter.h"
#include "DebugUtils.hpp"

APlayerCharacter::APlayerCharacter()
{
    PrimaryActorTick.bCanEverTick = true;
}

void APlayerCharacter::BeginPlay()
{
    Super::BeginPlay();

    UE_LOG(LogTemp, Warning, TEXT("%s"), *FString(__FUNCTION__));
    UE_LOG(LogTemp, Warning, TEXT("PrimaryActorTick.bCanEverTick = %s"),
        PrimaryActorTick.bCanEverTick ? TEXT("true") : TEXT("false"));

    SHOW_MSG_ONSCREEN("on screen msg %s", L"sss");
    FVector const targetLocation {2200, 700, 150};
    MC_Debug::debugSphere(targetLocation, GetWorld(), true);
    MC_Debug::debugLine(GetActorLocation(), targetLocation, GetWorld(), true);

}

void APlayerCharacter::Tick(float dtSeconds)
{
    Super::Tick(dtSeconds);

    FVector const targetLocation {2200, 700, 150};
    MC_Debug::debugSphere(GetActorLocation(), GetWorld(), false);
    MC_Debug::debugLine(GetActorLocation(), targetLocation, GetWorld(), false);
}
