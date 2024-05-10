// presto3000 Chris Pawlowski

#pragma once

#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"

/**
 * 
 */

class PRESTOCUSTOMASSETSEDITOR_API FAssetTypeActions_CustomAsset1  : public FAssetTypeActions_Base
{
public:
	// Override functions for customization
	FText GetName() const override;
	UClass* GetSupportedClass() const override;
	uint32 GetCategories() override;
	FColor GetTypeColor() const override;

};