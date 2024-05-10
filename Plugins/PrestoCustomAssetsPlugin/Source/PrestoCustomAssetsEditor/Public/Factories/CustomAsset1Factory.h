// presto3000 Chris Pawlowski

#pragma once

#include "CoreMinimal.h"
#include "CustomAsset1Factory.generated.h"

/**
 * 
 */
UCLASS()
class UCustomAsset1Factory : public UFactory
{
	GENERATED_BODY()
	UCustomAsset1Factory();
	UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn);
 
 
};
