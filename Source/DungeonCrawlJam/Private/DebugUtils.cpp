#include "DebugUtils.hpp"
#include "Engine/Engine.h"

void MC_Debug::debugSphere(FVector const& pos, UWorld const* world, bool persistance, FColor clr)
{
    if(world)
        DrawDebugSphere(world, pos, 20.0f, 16, clr, persistance);
}

void MC_Debug::debugLine(FVector const& start, FVector const& end, 
    UWorld const* world, bool persistance, FColor clr)
{
    if(world)
        DrawDebugLine(world, start, end, clr, persistance);
}