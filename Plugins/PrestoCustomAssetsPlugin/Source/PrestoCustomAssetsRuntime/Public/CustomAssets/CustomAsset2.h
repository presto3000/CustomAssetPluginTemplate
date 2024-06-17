// presto3000 Chris Pawlowski

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CustomAsset2.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class PRESTOCUSTOMASSETSRUNTIME_API UCustomAsset2 : public UObject
{
	GENERATED_BODY()

public:
	UCustomAsset2();

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Values2")
	float SomeFloat = 999.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Values2")
	float SomeFloat2 = 999.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Values2")
	float SomeFloat3 = 999.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Values2")
	float SomeFloat4 = 999.f;
	
};
