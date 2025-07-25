#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DebugUtils.generated.h"

#define SHOW_MSG_ONSCREEN(msg, ...) do { GEngine->AddOnScreenDebugMessage(INDEX_NONE, -1.f, \
    FColor::White, FString::Printf(TEXT(msg), __VA_ARGS__)); } while (0)

UCLASS()
class DUNGEONCRAWLJAM_API UDebugUtils : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

    UFUNCTION(BlueprintCallable, Category="DebugUtils", meta=(WorldContext="worldContextObj"))
    static void debugSphere(FVector const& pos, UObject const* worldContextObj, 
        bool persistance = false, FColor clr = FColor::Green);

    UFUNCTION(BlueprintCallable, Category="DebugUtils", meta = (WorldContext="worldContextObj"))
    static void debugLine(FVector const& start, FVector const& end, 
        UObject const* worldContextObj, bool persistance = false, FColor clr = FColor::Green);

    UFUNCTION(BlueprintCallable, Category="DebugUtils", meta=(WorldContext="worldContextObj"))
    static void debugActorBasisVectors(UObject const* worldContextObj, AActor const* actor, float scale = 100.0f);
};