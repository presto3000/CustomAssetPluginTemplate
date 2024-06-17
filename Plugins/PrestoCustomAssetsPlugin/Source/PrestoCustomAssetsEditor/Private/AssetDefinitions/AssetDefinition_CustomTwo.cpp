// presto3000 Chris Pawlowski


#include "AssetDefinitions/AssetDefinition_CustomTwo.h"

#include "ContentBrowserMenuContexts.h"
#include "PrestoCustomAssetsEditorStyle.h"
#include "CustomAssets/CustomAsset2.h"

#define LOCTEXT_NAMESPACE "AssetDefinition_CustomTwo"

FText UAssetDefinition_CustomTwo::GetAssetDisplayName() const
{
	return LOCTEXT("DisplayName", "CustomTwo Name");
}

FLinearColor UAssetDefinition_CustomTwo::GetAssetColor() const
{
	return FColor::Turquoise;
}

TSoftClassPtr<UObject> UAssetDefinition_CustomTwo::GetAssetClass() const
{
	return UCustomAsset2::StaticClass();

}

TConstArrayView<FAssetCategoryPath> UAssetDefinition_CustomTwo::GetAssetCategories() const
{
	static const FAssetCategoryPath Categories[] = { FAssetCategoryPath(LOCTEXT("CustomCategory", "CUSTOM")) };
	return Categories;
}

// Menu Extensions
//--------------------------------------------------------------------

namespace MenuExtension_CustomAsset2
{
	static void ExecuteActionForYourType(const FToolMenuContext& InContext)
	{
		const UContentBrowserAssetContextMenuContext* Context = UContentBrowserAssetContextMenuContext::FindContextWithAssets(InContext);
		for (UCustomAsset2* LoadedInstance : Context->LoadSelectedObjects<UCustomAsset2>())
		{
			
		}
	}

	static FDelayedAutoRegisterHelper DelayedAutoRegister(EDelayedRegisterRunPhase::EndOfEngineInit, []{
		UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateLambda([]()
		{
			FToolMenuOwnerScoped OwnerScoped(UE_MODULE_NAME);
			UToolMenu* Menu = UE::ContentBrowser::ExtendToolMenu_AssetContextMenu(UCustomAsset2::StaticClass());

			FToolMenuSection& Section = Menu->FindOrAddSection("GetAssetActions");
			Section.AddDynamicEntry(NAME_None, FNewToolMenuSectionDelegate::CreateLambda([](FToolMenuSection& InSection)
			{
				const TAttribute<FText> Label = LOCTEXT("CustomAsset2_ExecuteActionForYourType", "Execute Action For Your Type");
				const TAttribute<FText> ToolTip = LOCTEXT("CustomAsset2_ExecuteActionForYourTypeTooltip", "This will execute the action for your type");
				const FSlateIcon Icon = FSlateIcon(FPrestoCustomEditorStyle::Get().GetStyleSetName(), "ClassIcon.CustomAsset2");
				FToolUIAction UIAction;
 				UIAction.ExecuteAction = FToolMenuExecuteAction::CreateStatic(&ExecuteActionForYourType);
				InSection.AddMenuEntry("CustomAsset2_ExecuteActionForYourType", Label, ToolTip, Icon, UIAction);
			}));
		}));
	});
}

#undef LOCTEXT_NAMESPACE


