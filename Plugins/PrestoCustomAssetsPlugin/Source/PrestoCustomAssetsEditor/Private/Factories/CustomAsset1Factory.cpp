// presto3000 Chris Pawlowski


#include "Factories/CustomAsset1Factory.h"

#include "CustomAssets/CustomAsset1.h"


UCustomAsset1Factory::UCustomAsset1Factory()
{
	SupportedClass = UCustomAsset1::StaticClass();
	bCreateNew = true;
}

UObject* UCustomAsset1Factory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags,
												 UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UCustomAsset1>(InParent, Class, Name, Flags, Context);
}
