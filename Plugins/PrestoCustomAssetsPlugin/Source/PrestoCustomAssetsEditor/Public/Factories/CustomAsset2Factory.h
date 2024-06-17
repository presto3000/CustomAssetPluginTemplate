#pragma once

#include "CoreMinimal.h"
#include "CustomAsset2Factory.generated.h"

/**
 * 
 */
UCLASS()
class UCustomAsset2Factory : public UFactory
{
	GENERATED_BODY()
	UCustomAsset2Factory();
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	virtual bool ShouldShowInNewMenu() const override;
};

