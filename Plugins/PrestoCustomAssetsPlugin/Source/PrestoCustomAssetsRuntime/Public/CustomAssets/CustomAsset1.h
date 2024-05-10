// presto3000 Chris Pawlowski

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CustomAsset1.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class PRESTOCUSTOMASSETSRUNTIME_API UCustomAsset1 : public UObject
{
	GENERATED_BODY()

public:
	UCustomAsset1();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Changed")
	float SomeFloat = 999.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Values2")
	float SomeFloat2 = 999.f;
};
