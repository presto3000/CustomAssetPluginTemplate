// presto3000 Chris Pawlowski

#pragma once

#include "CoreMinimal.h"
#include "IDetailCustomization.h"


/**
 * 
 */

class PRESTOCUSTOMASSETSEDITOR_API CustomAssetDetailCustomization : public IDetailCustomization
{
public:
	static TSharedRef<IDetailCustomization> MakeInstance();

	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;
 

 
};
