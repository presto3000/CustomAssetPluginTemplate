// presto3000 Chris Pawlowski

#pragma once

#include "CoreMinimal.h"
#include "AssetDefinitionDefault.h"
#include "AssetDefinition_CustomTwo.generated.h"

/**
 * 
 */
UCLASS()
class PRESTOCUSTOMASSETSEDITOR_API UAssetDefinition_CustomTwo : public UAssetDefinitionDefault
{
	GENERATED_BODY()

public:
	virtual FText GetAssetDisplayName() const override;
	virtual FLinearColor GetAssetColor() const override;
	virtual TSoftClassPtr<UObject> GetAssetClass() const override;
	virtual TConstArrayView<FAssetCategoryPath> GetAssetCategories() const override;
};
