#include "DebugUtils.h"
#include "Engine/Engine.h"

void UDebugUtils::debugSphere(FVector const& pos, UObject const* worldContextObj, 
    bool persistance, FColor clr)
{
    if( ! IsValid(GEngine) )
        return;

    auto const* const world = GEngine->GetWorldFromContextObjectChecked(worldContextObj);
    DrawDebugSphere(world, pos, 20.0f, 16, clr, persistance);
}

void UDebugUtils::debugLine(FVector const& start, FVector const& end, 
    UObject const* worldContextObj, bool persistance, FColor clr)
{
    if( ! IsValid(GEngine) )
        return;

    auto const* const world = GEngine->GetWorldFromContextObjectChecked(worldContextObj);
    DrawDebugLine(world, start, end, clr, persistance);
}

void UDebugUtils::debugActorBasisVectors(UObject const* worldContextObj, AActor const* actor, float scale)
{
    if( ! IsValid(GEngine) || ! IsValid(actor) )
        return;
    
    auto const* const world = GEngine->GetWorldFromContextObjectChecked(worldContextObj);
    DrawDebugCoordinateSystem(world, actor->GetActorLocation(), actor->GetActorRotation(), scale);
}