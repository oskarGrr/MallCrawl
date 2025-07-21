#pragma once
#include "CoreMinimal.h"
class UWorld;

#define SHOW_MSG_ONSCREEN(msg, ...) do { GEngine->AddOnScreenDebugMessage(INDEX_NONE, -1.f, \
    FColor::White, FString::Printf(TEXT(msg), __VA_ARGS__)); } while (0)

namespace MC_Debug
{
    void debugSphere(FVector const& pos, UWorld const*, 
        bool persistance = false, FColor clr = FColor::Green);

    void debugLine(FVector const& start, FVector const& end, 
         UWorld const* world, bool persistance = false, FColor clr = FColor::Green);
}
