// presto3000 Chris Pawlowski

#include "DetailCustomizations/CustomAssetDetailCustomization.h"

#include "DetailCategoryBuilder.h"
#include "DetailLayoutBuilder.h"
#include "CustomAssets/CustomAsset1.h"


TSharedRef<IDetailCustomization> CustomAssetDetailCustomization::MakeInstance()
{
	return MakeShareable(new CustomAssetDetailCustomization());
}

void CustomAssetDetailCustomization::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
	const FName CustomCategoryName("CustomSettings");
	IDetailCategoryBuilder& CustomSettingsCategory = DetailBuilder.EditCategory(CustomCategoryName);

	// Add your custom settings to the editor
	CustomSettingsCategory.AddProperty(GET_MEMBER_NAME_CHECKED(UCustomAsset1, SomeFloat));
	
}