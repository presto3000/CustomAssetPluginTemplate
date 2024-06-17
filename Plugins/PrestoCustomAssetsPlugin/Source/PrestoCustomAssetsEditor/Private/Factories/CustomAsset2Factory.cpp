

#include "Factories/CustomAsset2Factory.h"
#include "CustomAssets/CustomAsset2.h"

UCustomAsset2Factory::UCustomAsset2Factory()
{
	SupportedClass = UCustomAsset2::StaticClass();
	bCreateNew = true;
	bEditAfterNew = true;
}

UObject* UCustomAsset2Factory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags,
	UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UCustomAsset2>(InParent, Class, Name, Flags, Context);
}

bool UCustomAsset2Factory::ShouldShowInNewMenu() const
{
	return true;
}