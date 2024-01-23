
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: McpProfileSysCore
/// dependency: UMG

/// Enum /Script/CreativeEmporiumUI.EFortEmporiumItemSortMode
/// Size: 0x08
enum class EFortEmporiumItemSortMode : uint8_t
{
	EFortEmporiumItemSortMode__MCP                                                   = 0,
	EFortEmporiumItemSortMode__AtoZ                                                  = 1,
	EFortEmporiumItemSortMode__ZtoA                                                  = 2,
	EFortEmporiumItemSortMode__PriceLowToHigh                                        = 3,
	EFortEmporiumItemSortMode__PriceHighToLow                                        = 4,
	EFortEmporiumItemSortMode__SizeLowToHigh                                         = 5,
	EFortEmporiumItemSortMode__SizeHighToLow                                         = 6,
	EFortEmporiumItemSortMode__EFortEmporiumItemSortMode_MAX                         = 7
};

/// Enum /Script/CreativeEmporiumUI.EFortEmporiumItemFilterMode
/// Size: 0x03
enum class EFortEmporiumItemFilterMode : uint8_t
{
	EFortEmporiumItemFilterMode__Price                                               = 0,
	EFortEmporiumItemFilterMode__License                                             = 1,
	EFortEmporiumItemFilterMode__EFortEmporiumItemFilterMode_MAX                     = 2
};

/// Enum /Script/CreativeEmporiumUI.EFortEmporiumItemPriceFilter
/// Size: 0x05
enum class EFortEmporiumItemPriceFilter : uint8_t
{
	EFortEmporiumItemPriceFilter__Invalid                                            = 0,
	EFortEmporiumItemPriceFilter__Free                                               = 1,
	EFortEmporiumItemPriceFilter__Premium                                            = 2,
	EFortEmporiumItemPriceFilter__All                                                = 255,
	EFortEmporiumItemPriceFilter__EFortEmporiumItemPriceFilter_MAX                   = 256
};

/// Enum /Script/CreativeEmporiumUI.EFortEmporiumItemLicense
/// Size: 0x11
enum class EFortEmporiumItemLicense : uint8_t
{
	EFortEmporiumItemLicense__Invalid                                                = 0,
	EFortEmporiumItemLicense__CC0                                                    = 1,
	EFortEmporiumItemLicense__CC_BY                                                  = 2,
	EFortEmporiumItemLicense__CC_BY_SA                                               = 4,
	EFortEmporiumItemLicense__CC_BY_NC                                               = 8,
	EFortEmporiumItemLicense__CC_BY_NC_SA                                            = 16,
	EFortEmporiumItemLicense__CC_BY_ND                                               = 32,
	EFortEmporiumItemLicense__CC_BY_NC_ND                                            = 64,
	EFortEmporiumItemLicense__Standard                                               = 128,
	EFortEmporiumItemLicense__All                                                    = 255,
	EFortEmporiumItemLicense__EFortEmporiumItemLicense_MAX                           = 256
};

/// Class /Script/CreativeEmporiumUI.EmporiumBrowserFilterEntry
/// Size: 0x0060 (0x001490 - 0x0014F0)
class UEmporiumBrowserFilterEntry : public UCommonButtonBase
{ 
public:
	SDK_UNDEFINED(16,12429) /* FMulticastInlineDelegate */ __um(OnFilterEnabled);                                  // 0x1490   (0x0010)  
	SDK_UNDEFINED(16,12430) /* FMulticastInlineDelegate */ __um(OnFilterSelected);                                 // 0x14A0   (0x0010)  
	SDK_UNDEFINED(16,12431) /* FMulticastInlineDelegate */ __um(OnWidgetDestroyed);                                // 0x14B0   (0x0010)  
	class UCommonTextBlock*                            TextBlock_FilterName;                                       // 0x14C0   (0x0008)  
	bool                                               bFilterActive;                                              // 0x14C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x14C9   (0x0007)  MISSED
	class UEmporiumBrowserTag*                         tag;                                                        // 0x14D0   (0x0008)  
	SDK_UNDEFINED(24,12432) /* FText */                __um(ButtonText);                                           // 0x14D8   (0x0018)  


	/// Functions
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFilterEntry.UpdateItemCount
	// void UpdateItemCount(int32_t ItemCount);                                                                              // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFilterEntry.UpdateCheckMarkState
	// void UpdateCheckMarkState(bool bIsChecked);                                                                           // [0x2177018] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFilterEntry.UpdateButtonText
	// void UpdateButtonText();                                                                                              // [0xb61a8ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFilterEntry.SetIsFilterActive
	// void SetIsFilterActive(bool bInFilterActive);                                                                         // [0xb61a418] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFilterEntry.IsFilterActive
	// bool IsFilterActive();                                                                                                // [0xb618b50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CreativeEmporiumUI.EmporiumBrowserTag
/// Size: 0x0008 (0x000028 - 0x000030)
class UEmporiumBrowserTag : public UObject
{ 
public:
	FName                                              TagID;                                                      // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/CreativeEmporiumUI.FortEmporiumSortEntry
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFortEmporiumSortEntry
{ 
	SDK_UNDEFINED(24,12433) /* FText */                __um(Text);                                                 // 0x0000   (0x0018)  
	EFortEmporiumItemSortMode                          Mode;                                                       // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/CreativeEmporiumUI.FortEmporiumFilterEntry
/// Size: 0x0028 (0x000000 - 0x000028)
struct FFortEmporiumFilterEntry
{ 
	FName                                              ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(24,12434) /* FText */                __um(TextRoot);                                             // 0x0008   (0x0018)  
	EFortEmporiumItemFilterMode                        Mode;                                                       // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/CreativeEmporiumUI.FortEmporiumPriceFilterEntry
/// Size: 0x0028 (0x000000 - 0x000028)
struct FFortEmporiumPriceFilterEntry
{ 
	FName                                              ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(24,12435) /* FText */                __um(Text);                                                 // 0x0008   (0x0018)  
	EFortEmporiumItemPriceFilter                       Filter;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Class /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel
/// Size: 0x0210 (0x0002E8 - 0x0004F8)
class UEmporiumBrowserFiltersPanel : public UCommonUserWidget
{ 
public:
	SDK_UNDEFINED(16,12436) /* FMulticastInlineDelegate */ __um(OnFilterChanged);                                  // 0x02E8   (0x0010)  
	SDK_UNDEFINED(16,12437) /* FMulticastInlineDelegate */ __um(OnSortChanged);                                    // 0x02F8   (0x0010)  
	SDK_UNDEFINED(16,12438) /* FMulticastInlineDelegate */ __um(OnSubFilterToggled);                               // 0x0308   (0x0010)  
	SDK_UNDEFINED(16,12439) /* FMulticastInlineDelegate */ __um(OnFocusChanged);                                   // 0x0318   (0x0010)  
	SDK_UNDEFINED(16,12440) /* FMulticastInlineDelegate */ __um(OnCategoryActivated);                              // 0x0328   (0x0010)  
	SDK_UNDEFINED(16,12441) /* FMulticastInlineDelegate */ __um(OnCategoryFocused);                                // 0x0338   (0x0010)  
	class UClass*                                      FilterSectionHeaderWidgetClass;                             // 0x0348   (0x0008)  
	class UClass*                                      FilterCategoryHeaderWidgetClass;                            // 0x0350   (0x0008)  
	class UClass*                                      FilterHomeHeaderWidgetClass;                                // 0x0358   (0x0008)  
	class UClass*                                      FilterEntryWidgetClass;                                     // 0x0360   (0x0008)  
	TArray<FFortEmporiumSortEntry>                     SortEntries;                                                // 0x0368   (0x0010)  
	TArray<FFortEmporiumFilterEntry>                   FilterEntries;                                              // 0x0378   (0x0010)  
	TArray<FFortEmporiumPriceFilterEntry>              PriceFilterEntries;                                         // 0x0388   (0x0010)  
	TArray<FName>                                      LicenseFilterEntries;                                       // 0x0398   (0x0010)  
	FName                                              DefaultCategoryFilter;                                      // 0x03A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x54];                                      // 0x03AC   (0x0054)  MISSED
	class UScrollBox*                                  ScrollBox_FilterScroll;                                     // 0x0400   (0x0008)  
	class UEmporiumBrowserFilterEntry*                 Button_All;                                                 // 0x0408   (0x0008)  
	class UCommonButtonBase*                           Button_SortAndFilter;                                       // 0x0410   (0x0008)  
	unsigned char                                      UnknownData01_5[0xB8];                                      // 0x0418   (0x00B8)  MISSED
	FDataTableRowHandle                                FocusSearchInputActionRow;                                  // 0x04D0   (0x0010)  
	FDataTableRowHandle                                ClearSearchInputActionRow;                                  // 0x04E0   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x04F0   (0x0008)  MISSED


	/// Functions
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.SetItemDetailTags
	// void SetItemDetailTags(TArray<FName>& TagIDs);                                                                        // [0xb61a518] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.OnSetSearchVisible
	// void OnSetSearchVisible(bool bVisible);                                                                               // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.OnSetSearchText
	// void OnSetSearchText(FText& NewSearchText);                                                                           // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.OnSetSearchFocused
	// void OnSetSearchFocused();                                                                                            // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.IncludeItemDetailTag
	// void IncludeItemDetailTag(FName& TagID);                                                                              // [0xb618a80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.HandleSortAndFilterClicked
	// void HandleSortAndFilterClicked();                                                                                    // [0xb618830] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.HandleShowAllEnabled
	// void HandleShowAllEnabled(bool bShowAllItems, class UObject* ListItemObject);                                         // [0xb61876c] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.HandleSearchTextChanged
	// void HandleSearchTextChanged(FText& Text);                                                                            // [0xb618650] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.HandleFilterSelected
	// void HandleFilterSelected(bool bIsFilterEnabled, class UEmporiumBrowserFilterEntry* Entry);                           // [0xb617fac] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.HandleFilterEnabled
	// void HandleFilterEnabled(bool bIsFilterEnabled, class UObject* ListItemObject);                                       // [0xb617c64] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.HandleCategoryWidgetDestroyed
	// void HandleCategoryWidgetDestroyed(class UObject* ListItemObject);                                                    // [0xb6179b0] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.HandleCategoryActivated
	// void HandleCategoryActivated(bool bIsExpanded, class UObject* ListItemObject);                                        // [0xb6177dc] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.GetFilterCount
	// int32_t GetFilterCount();                                                                                             // [0xb617660] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.ExcludeItemDetailTag
	// void ExcludeItemDetailTag(FName& TagID);                                                                              // [0xb6172ac] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader
/// Size: 0x0028 (0x0002C0 - 0x0002E8)
class UFortEmporiumFilterCategoryHeader : public UUserWidget
{ 
public:
	SDK_UNDEFINED(16,12442) /* FMulticastInlineDelegate */ __um(OnCategoryActivated);                              // 0x02C0   (0x0010)  
	SDK_UNDEFINED(16,12443) /* FMulticastInlineDelegate */ __um(OnWidgetDestroyed);                                // 0x02D0   (0x0010)  
	class UEmporiumBrowserTag*                         tag;                                                        // 0x02E0   (0x0008)  


	/// Functions
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.UpdateCategoryCount
	// void UpdateCategoryCount(int32_t NewCount, bool bHideIfEmpty);                                                        // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.ShowCategoryActive
	// void ShowCategoryActive(bool bIsActive);                                                                              // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.SetSubcategoryCount
	// void SetSubcategoryCount(int32_t NewCount);                                                                           // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.SetCategoryText
	// void SetCategoryText(FText& NewButtonText);                                                                           // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.GetSubcategoryWidgets
	// TArray<UWidget*> GetSubcategoryWidgets();                                                                             // [0x87829c4] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.GetCategoryButton
	// class UCommonButtonBase* GetCategoryButton();                                                                         // [0x2177018] Event|Public|BlueprintEvent|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.ExpandCategory
	// void ExpandCategory(bool bExpanded);                                                                                  // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.EnableCategoryExpansion
	// void EnableCategoryExpansion(bool bShow);                                                                             // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.ClearSubcategoryWidgets
	// void ClearSubcategoryWidgets();                                                                                       // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.AddSubcategoryWidget
	// void AddSubcategoryWidget(class UWidget* SubcategoryWidget);                                                          // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.ActivateCategory
	// void ActivateCategory(bool bExpanded);                                                                                // [0xb616b90] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumFiltersSubPanel
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class UFortEmporiumFiltersSubPanel : public UUserWidget
{ 
public:
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumHomeEntryObjectWrapper
/// Size: 0x0008 (0x000028 - 0x000030)
class UFortEmporiumHomeEntryObjectWrapper : public UObject
{ 
public:
	class UFortEmporiumItemListTabPanel*               TabPanel;                                                   // 0x0028   (0x0008)  
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumHomeListEntry
/// Size: 0x0208 (0x0002C0 - 0x0004C8)
class UFortEmporiumHomeListEntry : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x02C0   (0x0008)  MISSED
	class UFortEmporiumHomeListView*                   ParentView;                                                 // 0x02C8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x30];                                      // 0x02D0   (0x0030)  MISSED
	int32_t                                            MaxItemsToShow;                                             // 0x0300   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0304   (0x0004)  MISSED
	class UFortEmporiumItemListTabPanel*               TabPanel;                                                   // 0x0308   (0x0008)  
	class UCommonTextBlock*                            Text_CategoryLabel;                                         // 0x0310   (0x0008)  
	class UAthenaCreativeItemTileView*                 HomeListView_ItemOptions;                                   // 0x0318   (0x0008)  
	unsigned char                                      UnknownData03_6[0x1A8];                                     // 0x0320   (0x01A8)  MISSED


	/// Functions
	// Function /Script/CreativeEmporiumUI.FortEmporiumHomeListEntry.UpdateWarningMessage
	// void UpdateWarningMessage(bool bShowMessage);                                                                         // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumHomeListEntry.GetCollapseBorderPadFlagForCategory
	// bool GetCollapseBorderPadFlagForCategory();                                                                           // [0xb6173ec] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumHomeListEntry.GetCardSizeForCategory
	// EFortItemCardSize GetCardSizeForCategory();                                                                           // [0xb617338] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumHomeListView
/// Size: 0x0250 (0x000BD0 - 0x000E20)
class UFortEmporiumHomeListView : public UCommonListView
{ 
public:
	unsigned char                                      UnknownData00_2[0x88];                                      // 0x0BD0   (0x0088)  MISSED
	TArray<class UFortEmporiumItemListTabPanel*>       TabPanelList;                                               // 0x0C58   (0x0010)  
	unsigned char                                      UnknownData01_6[0x1B8];                                     // 0x0C68   (0x01B8)  MISSED


	/// Functions
	// Function /Script/CreativeEmporiumUI.FortEmporiumHomeListView.GetFocusWidget
	// class UWidget* GetFocusWidget();                                                                                      // [0xb617678] Native|Public|BlueprintCallable 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumHomeTabPanel
/// Size: 0x0040 (0x000448 - 0x000488)
class UFortEmporiumHomeTabPanel : public UFortCreativeContentBrowserTabPanelBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0448   (0x0030)  MISSED
	FName                                              FeaturedItemTag;                                            // 0x0478   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x047C   (0x0004)  MISSED
	class UFortEmporiumHomeListView*                   FortEmporiumHomeListView_Options;                           // 0x0480   (0x0008)  
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumItem
/// Size: 0x0008 (0x000088 - 0x000090)
class UFortEmporiumItem : public UFortItem
{ 
public:
	class UFortEmporiumItemDefinition*                 ItemDefinition;                                             // 0x0088   (0x0008)  
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumItemDefinition
/// Size: 0x0110 (0x000378 - 0x000488)
class UFortEmporiumItemDefinition : public UFortItemDefinition
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0378   (0x0008)  MISSED
	SDK_UNDEFINED(16,12444) /* FMulticastInlineDelegate */ __um(OnItemThumbnailDownloaded);                        // 0x0380   (0x0010)  
	unsigned char                                      UnknownData01_5[0xE8];                                      // 0x0390   (0x00E8)  MISSED
	class UTexture2D*                                  ThumbnailTexture;                                           // 0x0478   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0480   (0x0008)  MISSED


	/// Functions
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDefinition.GetEmporiumItemData
	// FFortEmporiumItemData GetEmporiumItemData();                                                                          // [0xb617644] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel
/// Size: 0x0068 (0x0002E8 - 0x000350)
class UFortEmporiumItemDetailsPanel : public UCommonUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x02E8   (0x0030)  MISSED
	FDataTableRowHandle                                ItemDetailTagsInputRowHandle;                               // 0x0318   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0328   (0x0008)  MISSED
	class UFortItemDefinition*                         CachedItemDefinition;                                       // 0x0330   (0x0008)  
	class UCommonVisibilitySwitcher*                   Switcher_Details;                                           // 0x0338   (0x0008)  
	class UFortEmporiumItemInfo*                       ItemDetails;                                                // 0x0340   (0x0008)  
	class UFortItemDetailsHostPanel*                   LegacyItemDetails;                                          // 0x0348   (0x0008)  


	/// Functions
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.UpdateItemDetailsDisplay
	// void UpdateItemDetailsDisplay(bool bShowItemDetails);                                                                 // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.ToggleItemDetailsPanel
	// void ToggleItemDetailsPanel();                                                                                        // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.ShowExtendedDataPanel
	// void ShowExtendedDataPanel();                                                                                         // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.SetSpecialItemTagVisibility
	// void SetSpecialItemTagVisibility(FName& SpecialItemTag);                                                              // [0x2177018] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.SetItemToDetail
	// void SetItemToDetail(class UFortItem* InItemToDetail, bool bUseLargeThumbnail, bool bAllowInteractiveTags);           // [0xb61a5b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.SetItemDetails
	// void SetItemDetails(class UFortItem* FortItem, bool bUseLargeThumbnail, bool bAllowInteractiveTags);                  // [0x2177018] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.SetActiveItemDetailTags
	// void SetActiveItemDetailTags(TArray<FName>& ActiveTags);                                                              // [0x2177018] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.IsShowingExtendedDataPanel
	// bool IsShowingExtendedDataPanel();                                                                                    // [0x2f18ed4] Native|Event|Protected|BlueprintEvent|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.IsShowingAdditionalButtons
	// bool IsShowingAdditionalButtons();                                                                                    // [0x2f18ed4] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.HideExtendedDataPanel
	// void HideExtendedDataPanel();                                                                                         // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.HideAdditionalButtons
	// void HideAdditionalButtons();                                                                                         // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.HasLegacyItemDetailsPanel
	// bool HasLegacyItemDetailsPanel();                                                                                     // [0x2f18ed4] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.HandleItemTagSelected
	// void HandleItemTagSelected(FName TagID, bool bSelected);                                                              // [0xb6182c0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.BP_GetSpecialItemTags
	// TArray<FName> BP_GetSpecialItemTags();                                                                                // [0x2177018] Event|Protected|BlueprintEvent|Const 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumItemInfo
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortEmporiumItemInfo : public UCommonUserWidget
{ 
public:
	TArray<FName>                                      HiddenTags;                                                 // 0x02E8   (0x0010)  


	/// Functions
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemInfo.UpdateWithFortItem
	// void UpdateWithFortItem(class UFortItem* Item, bool bAllowInteractiveTags);                                           // [0x2177018] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemInfo.ShowSelectItemTagsPrompt
	// void ShowSelectItemTagsPrompt(bool bShowPrompt);                                                                      // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemInfo.SetTagFocus
	// void SetTagFocus();                                                                                                   // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemInfo.SetSelectItemTagsPrompt
	// void SetSelectItemTagsPrompt(FText& Prompt);                                                                          // [0x2177018] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemInfo.SetSelectItemTagsIcon
	// void SetSelectItemTagsIcon(FSlateBrush SelectItemTagsIcon);                                                           // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemInfo.HasFocusableTags
	// bool HasFocusableTags();                                                                                              // [0x2177018] Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumCategoryEntry
/// Size: 0x0020 (0x000028 - 0x000048)
class UFortEmporiumCategoryEntry : public UObject
{ 
public:
	SDK_UNDEFINED(16,12445) /* FString */              __um(Path);                                                 // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,12446) /* FString */              __um(Hash);                                                 // 0x0038   (0x0010)  
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumItemListMenu
/// Size: 0x0590 (0x000400 - 0x000990)
class UFortEmporiumItemListMenu : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0400   (0x0030)  MISSED
	class UClass*                                      PanelDataClass;                                             // 0x0430   (0x0008)  
	class UDataTable*                                  ItemListCategorySource;                                     // 0x0438   (0x0008)  
	class UFortCreativeItemListPanelData*              ItemListPanelData;                                          // 0x0440   (0x0008)  
	class UClass*                                      InventoryTabClass;                                          // 0x0448   (0x0008)  
	class UClass*                                      LevelManagementTabClass;                                    // 0x0450   (0x0008)  
	class UClass*                                      HomeTabClass;                                               // 0x0458   (0x0008)  
	class UClass*                                      InventoryTabButton;                                         // 0x0460   (0x0008)  
	SDK_UNDEFINED(80,12447) /* TMap<FName, FText> */   __um(Map_CreativeBetaTagNames);                             // 0x0468   (0x0050)  
	class UFortEmporiumItemListTabPanel*               ChestTabPanel;                                              // 0x04B8   (0x0008)  
	class UFortCreativeLevelManagementTabPanel*        LevelManagementTabPanel;                                    // 0x04C0   (0x0008)  
	class UFortEmporiumHomeTabPanel*                   HomeTabPanel;                                               // 0x04C8   (0x0008)  
	class UFortEmporiumItemListTabPanel*               FabTabPanel;                                                // 0x04D0   (0x0008)  
	class UFortEmporiumItemListTabPanel*               SubItemsTabPanel;                                           // 0x04D8   (0x0008)  
	FName                                              FabTabNameId;                                               // 0x04E0   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x04E4   (0x000C)  MISSED
	FFortTabButtonLabelInfo                            TabButtonLabelInfo;                                         // 0x04F0   (0x0110)  
	FAthenaMapScreenContainerTabInfo                   MapScreenContainerTabInfo;                                  // 0x0600   (0x0048)  
	bool                                               bIsDefaultActiveTab;                                        // 0x0648   (0x0001)  
	bool                                               bAddItemToInventoryOnEquip;                                 // 0x0649   (0x0001)  
	bool                                               bLoadItemsOnInitialized;                                    // 0x064A   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x064B   (0x0001)  MISSED
	int32_t                                            LastUsedSlot;                                               // 0x064C   (0x0004)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0650   (0x0008)  MISSED
	SDK_UNDEFINED(80,12448) /* TMap<FName, UFortCreativeContentBrowserTabPanelBase*> */ __um(TabMap);              // 0x0658   (0x0050)  
	unsigned char                                      UnknownData04_5[0x1C0];                                     // 0x06A8   (0x01C0)  MISSED
	TArray<class UFortEmporiumItemDefinition*>         EmporiumItemDefinitionList;                                 // 0x0868   (0x0010)  
	unsigned char                                      UnknownData05_5[0x8];                                       // 0x0878   (0x0008)  MISSED
	class UCommonAnimatedSwitcher*                     Switcher_Categories;                                        // 0x0880   (0x0008)  
	class UWidgetSwitcher*                             Switcher_ItemTabWarnings;                                   // 0x0888   (0x0008)  
	class UOverlay*                                    Overlay_ChestEmpty;                                         // 0x0890   (0x0008)  
	class UOverlay*                                    Overlay_TabEmpty;                                           // 0x0898   (0x0008)  
	class UOverlay*                                    Overlay_DownloadingFabCategories;                           // 0x08A0   (0x0008)  
	class UOverlay*                                    Overlay_FabCategoriesNotLoaded;                             // 0x08A8   (0x0008)  
	class UWidgetSwitcher*                             Switcher_CommandBar;                                        // 0x08B0   (0x0008)  
	class UOverlay*                                    Overlay_ChestCommands;                                      // 0x08B8   (0x0008)  
	class UOverlay*                                    Overlay_VendCommands;                                       // 0x08C0   (0x0008)  
	class UFortCreativeMenuQuickbar*                   MenuQuickbar_QuickBars;                                     // 0x08C8   (0x0008)  
	class UCommonButtonBase*                           Button_ResetChest;                                          // 0x08D0   (0x0008)  
	class UCommonButtonBase*                           Button_CreateChest;                                         // 0x08D8   (0x0008)  
	class UCommonButtonBase*                           Button_AddToQuickBar;                                       // 0x08E0   (0x0008)  
	class UCommonButtonBase*                           Button_OpenItem;                                            // 0x08E8   (0x0008)  
	class UCommonButtonBase*                           Button_PlaceNow;                                            // 0x08F0   (0x0008)  
	class UCommonButtonBase*                           Button_Equip;                                               // 0x08F8   (0x0008)  
	class UCommonButtonBase*                           Button_AddToChest;                                          // 0x0900   (0x0008)  
	class UCommonButtonBase*                           Button_Drop;                                                // 0x0908   (0x0008)  
	class UCommonButtonBase*                           Button_CreateLlama;                                         // 0x0910   (0x0008)  
	class UCommonButtonBase*                           Button_RemoveFromChest;                                     // 0x0918   (0x0008)  
	class UOverlay*                                    Overlay_SearchFilters;                                      // 0x0920   (0x0008)  
	class UCommonAnimatedSwitcher*                     Switcher_LeftPanel;                                         // 0x0928   (0x0008)  
	class UEmporiumBrowserFiltersPanel*                FiltersPanel;                                               // 0x0930   (0x0008)  
	class UFortEmporiumItemDetailsPanel*               SubTabItemDetailsPanel;                                     // 0x0938   (0x0008)  
	class UAthenaCustomizationPickerSortAndFilterBlade* Blade_SortAndFilter;                                       // 0x0940   (0x0008)  
	class UCommonVisibilitySwitcher*                   Switcher_SidePanels;                                        // 0x0948   (0x0008)  
	class UFortEmporiumItemDetailsPanel*               ItemDetailsSidePanel_DefaultSidePanel;                      // 0x0950   (0x0008)  
	class UCommonVisibilitySwitcher*                   Switcher_ProductPage;                                       // 0x0958   (0x0008)  
	class UOverlay*                                    Overlay_ItemBrowser;                                        // 0x0960   (0x0008)  
	class UFortEmporiumItemDetailsPanel*               ItemProductPagePanel;                                       // 0x0968   (0x0008)  
	class UWidgetSwitcher*                             Switcher_InventoryPermission;                               // 0x0970   (0x0008)  
	class UOverlay*                                    Overlay_EmporiumPanel;                                      // 0x0978   (0x0008)  
	class UOverlay*                                    Overlay_InventoryNotAllowed;                                // 0x0980   (0x0008)  
	class UOverlay*                                    Overlay_EditorDisconnected;                                 // 0x0988   (0x0008)  


	/// Functions
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.UpdatePermissionsDisplay
	// void UpdatePermissionsDisplay();                                                                                      // [0xb61a914] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.UpdateDetailsPanel
	// void UpdateDetailsPanel();                                                                                            // [0xb61a900] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.UpdateBackButtonText
	// void UpdateBackButtonText(bool bFilterFocus);                                                                         // [0xb61a86c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.SwitchItemDetailsPanel
	// void SwitchItemDetailsPanel(bool bUseLegacy);                                                                         // [0xb61a7ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.SpawnContainer
	// void SpawnContainer(class UClass* SupplyDropClass);                                                                   // [0xb61a758] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.SetSubTabOpened
	// void SetSubTabOpened(class UFortItemDefinition* ItemDefinition);                                                      // [0xb61a6c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.SetIsItemCommandsEnabled
	// void SetIsItemCommandsEnabled(bool bInIsItemCommandEnabled);                                                          // [0xb61a498] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.RefreshTabWarningState
	// void RefreshTabWarningState();                                                                                        // [0xb619b24] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.PlaceSelectionInMoveTool
	// bool PlaceSelectionInMoveTool();                                                                                      // [0xb619b00] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OpenSelection
	// bool OpenSelection();                                                                                                 // [0xb619adc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnUpdateCommandBarVisibility
	// void OnUpdateCommandBarVisibility(bool bShowBar);                                                                     // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnShowCategoryModal
	// void OnShowCategoryModal(bool bShowModal);                                                                            // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnSelectionOpened
	// void OnSelectionOpened(class UFortItemDefinition* SelectedItemDefinition);                                            // [0x2177018] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnSearchFiltersVisibilityChanged
	// void OnSearchFiltersVisibilityChanged(bool bIsVisible);                                                               // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnQuickbarStateChanged
	// void OnQuickbarStateChanged(EFortContentBrowserQuickbarState State);                                                  // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnItemsLoaded
	// void OnItemsLoaded();                                                                                                 // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnItemEquipped
	// void OnItemEquipped(FFortItemEntry& EquippedItemEntry);                                                               // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnFabItemQueryComplete
	// void OnFabItemQueryComplete(bool bSuccess, FString JsonString);                                                       // [0xb6193e4] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnFabCategoryListLoaded
	// void OnFabCategoryListLoaded(bool bSuccess, FString JsonString);                                                      // [0xb618cec] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnExitSubTab
	// void OnExitSubTab();                                                                                                  // [0x2177018] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnCursorModeChanged
	// void OnCursorModeChanged(bool bCursorModeEnabled, FName ActionName, class UUserWidget* CursorModeContentWidget);      // [0xb618be0] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnCreativeQuickbarComponentLoaded
	// void OnCreativeQuickbarComponentLoaded();                                                                             // [0xa1bca80] Final|Native|Public  
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnContentRatingFilterChanged
	// void OnContentRatingFilterChanged();                                                                                  // [0xb618908] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnBuiltInItemsLoaded
	// void OnBuiltInItemsLoaded();                                                                                          // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.NativeOnItemsRefreshed
	// void NativeOnItemsRefreshed();                                                                                        // [0xb618bcc] Final|Native|Public  
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.NativeOnItemsLoaded
	// void NativeOnItemsLoaded();                                                                                           // [0xb618bb8] Final|Native|Public  
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.NativeOnBuiltInItemsLoaded
	// void NativeOnBuiltInItemsLoaded();                                                                                    // [0xb618ba4] Final|Native|Public  
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.LoadFabItems
	// void LoadFabItems();                                                                                                  // [0xb618b90] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.IsSubTabOpened
	// bool IsSubTabOpened();                                                                                                // [0x65115bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.InitializeTabs
	// void InitializeTabs();                                                                                                // [0xb618b20] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.InitializeFabTab
	// void InitializeFabTab();                                                                                              // [0xb618b0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleTabSortButtonClicked
	// void HandleTabSortButtonClicked();                                                                                    // [0xb618a6c] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleTabSelected
	// void HandleTabSelected(FName TabID, bool bCaptureFocus);                                                              // [0xb6189a8] Final|Native|Private|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleTabItemDetailClicked
	// void HandleTabItemDetailClicked(FName& TagID);                                                                        // [0xb61891c] Final|Native|Private|HasOutParms 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleSortChanged
	// void HandleSortChanged();                                                                                             // [0xb618908] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleSortButtonClicked
	// void HandleSortButtonClicked(FName SortNameId, class UCommonButtonBase* NewButton);                                   // [0xb618844] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleSelectionChanged
	// void HandleSelectionChanged(class UFortCreativeContentBrowserTabPanelBase* Tab);                                      // [0xb6186ec] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleQuickbarStateChanged
	// void HandleQuickbarStateChanged(EFortContentBrowserQuickbarState State);                                              // [0xb6185d0] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleQuickbarPanelIsFocused
	// void HandleQuickbarPanelIsFocused(bool bIsFocused);                                                                   // [0xb618550] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleModalHitBlockerClicked
	// void HandleModalHitBlockerClicked();                                                                                  // [0xb618514] Final|Native|Private|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleItemThumbnailDownloaded
	// void HandleItemThumbnailDownloaded(class UFortEmporiumItemDefinition* ItemDefinition);                                // [0xb618494] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleItemTagSelected
	// void HandleItemTagSelected(FName& TagID, bool bSelected);                                                             // [0xb618384] Final|Native|Private|HasOutParms 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleItemDoubleClicked
	// void HandleItemDoubleClicked(FFortItemEntry& ItemEntry);                                                              // [0xb618208] Final|Native|Private|HasOutParms 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleItemClicked
	// void HandleItemClicked(FFortItemEntry& ItemEntry);                                                                    // [0xb6180b4] Final|Native|Private|HasOutParms 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleGlobalSortPanelToggle
	// void HandleGlobalSortPanelToggle();                                                                                   // [0xb6180a0] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleFilterPanelIsFocused
	// void HandleFilterPanelIsFocused(bool bIsFocused);                                                                     // [0xb617f2c] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleFilterChanged
	// void HandleFilterChanged();                                                                                           // [0xb617c50] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleFilterButtonClicked
	// void HandleFilterButtonClicked(FName FilterNameId, class UCommonButtonBase* NewButton);                               // [0xb617b8c] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleEquipItem
	// void HandleEquipItem(FFortItemEntry& ItemEntry);                                                                      // [0xb617ac8] Final|Native|Private|HasOutParms 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleChestItemCountChanged
	// void HandleChestItemCountChanged(int32_t Count);                                                                      // [0xb617a48] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleCategoryFocused
	// void HandleCategoryFocused(FName CategoryID);                                                                         // [0xb617930] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleCategoryActivated
	// void HandleCategoryActivated(FName CategoryID);                                                                       // [0xb6178b0] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleAddSelectionToMoveToolComplete
	// void HandleAddSelectionToMoveToolComplete();                                                                          // [0xb6177c8] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.GetSubTabSelectedItemDefinition
	// class UFortItemDefinition* GetSubTabSelectedItemDefinition();                                                         // [0xb6176dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.GetLastSelectedTabName
	// FName GetLastSelectedTabName();                                                                                       // [0xb6176a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.GetCurrentTab
	// class UFortCreativeContentBrowserTabPanelBase* GetCurrentTab();                                                       // [0xb617620] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.GetCurrentSelection
	// FFortItemEntry GetCurrentSelection();                                                                                 // [0xb6175bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.EquipSelection
	// bool EquipSelection();                                                                                                // [0xb617288] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.EquipItem
	// bool EquipItem(FFortItemEntry& ItemEntry);                                                                            // [0xb6171c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.DropItem
	// bool DropItem(FFortItemEntry& SelectedItem);                                                                          // [0xb6170d8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.CanEquip
	// bool CanEquip(FFortItemEntry& SelectedItem);                                                                          // [0xb616fb0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.CanDropItem
	// bool CanDropItem(FFortItemEntry& SelectedItem);                                                                       // [0xb616ee8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.CanAddToChest
	// bool CanAddToChest(FFortItemEntry& SelectedItem);                                                                     // [0xb616e20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.AddSelectionToQuickBar
	// bool AddSelectionToQuickBar();                                                                                        // [0xb616df4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel
/// Size: 0x0418 (0x000448 - 0x000860)
class UFortEmporiumItemListTabPanel : public UFortCreativeContentBrowserTabPanelBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0448   (0x0008)  MISSED
	SDK_UNDEFINED(16,12449) /* FMulticastInlineDelegate */ __um(OnSourceItemCountChanged);                         // 0x0450   (0x0010)  
	SDK_UNDEFINED(16,12450) /* FMulticastInlineDelegate */ __um(OnItemClickedDelegate);                            // 0x0460   (0x0010)  
	SDK_UNDEFINED(16,12451) /* FMulticastInlineDelegate */ __um(OnItemDoubleClickedDelegate);                      // 0x0470   (0x0010)  
	unsigned char                                      UnknownData01_5[0x30];                                      // 0x0480   (0x0030)  MISSED
	class UAthenaCreativeItemTileView*                 CreativeTileView_ItemOptions;                               // 0x04B0   (0x0008)  
	class UCommonButtonBase*                           Button_Sort;                                                // 0x04B8   (0x0008)  
	FFortItemEntry                                     CurrentItemEntry;                                           // 0x04C0   (0x01A8)  
	SDK_UNDEFINED(16,12452) /* FMulticastInlineDelegate */ __um(OnItemCountChanged);                               // 0x0668   (0x0010)  
	TArray<FFortItemEntry>                             Items;                                                      // 0x0678   (0x0010)  
	TArray<FFortItemEntry>                             SourceItems;                                                // 0x0688   (0x0010)  
	unsigned char                                      UnknownData02_5[0x1B0];                                     // 0x0698   (0x01B0)  MISSED
	class UFortEmporiumItemListMenu*                   EmporiumItemListMenuParent;                                 // 0x0848   (0x0008)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0850   (0x0010)  MISSED


	/// Functions
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.UpdateTabHeader
	// void UpdateTabHeader();                                                                                               // [0x2177018] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.UpdateSortButton
	// void UpdateSortButton(FText& SortType);                                                                               // [0x2177018] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.ShowTopButtonBar
	// void ShowTopButtonBar(bool bShow);                                                                                    // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.ShowLegacyItemDetailsPanel
	// bool ShowLegacyItemDetailsPanel();                                                                                    // [0xb61a740] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.SetActiveItemDetailTags
	// void SetActiveItemDetailTags(TArray<FName>& TagIDs);                                                                  // [0x2177018] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.RestoreLastSelection
	// void RestoreLastSelection();                                                                                          // [0xb61a404] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.RemoveSelectedItem
	// void RemoveSelectedItem();                                                                                            // [0xb619b38] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.ItemEquipped
	// void ItemEquipped(FFortItemEntry& Item);                                                                              // [0x2177018] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.IsSubTabOpened
	// bool IsSubTabOpened();                                                                                                // [0xb618b68] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.IsEmpty
	// bool IsEmpty();                                                                                                       // [0xb618b34] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.HandleItemDetailTagSelected
	// void HandleItemDetailTagSelected(FName& TagID);                                                                       // [0xb618178] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.GetSubTabSelectedItemDefinition
	// class UFortItemDefinition* GetSubTabSelectedItemDefinition();                                                         // [0xb617704] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.GetCollapseBorderPadFlagForCategory
	// bool GetCollapseBorderPadFlagForCategory();                                                                           // [0xb617414] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.GetCardSizeForCategory
	// EFortItemCardSize GetCardSizeForCategory();                                                                           // [0xb57d968] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.FocusCurrentSelection
	// void FocusCurrentSelection();                                                                                         // [0x2177018] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.ClearFilteredItems
	// void ClearFilteredItems();                                                                                            // [0xb6170c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.ClearAllItems
	// void ClearAllItems();                                                                                                 // [0xb6170b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.CanPlayerCreateInVolume
	// bool CanPlayerCreateInVolume();                                                                                       // [0xb617078] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.AddItemToSource
	// void AddItemToSource(FFortItemEntry& ItemToAdd);                                                                      // [0xb616cf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.AddItem
	// void AddItem(FFortItemEntry& ItemToAdd);                                                                              // [0xb616c2c] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumUtilities
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortEmporiumUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/CreativeEmporiumUI.FortEmporiumUtilities.RequestLicenseText
	// void RequestLicenseText(EFortEmporiumItemLicense License, FDelegateProperty& Callback);                               // [0xb61a32c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumUtilities.RequestJSON
	// void RequestJSON(class UObject* WorldContextObject, FUniqueNetIdRepl& UniqueNetId, FString JSONURL, FDelegateProperty& Callback); // [0xb619b4c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumUtilities.GetTextFromEmporiumLicense
	// FText GetTextFromEmporiumLicense(EFortEmporiumItemLicense License);                                                   // [0xb617740] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CreativeEmporiumUI.FortEmporiumUtilities.GetCreativeTagLabel
	// FText GetCreativeTagLabel(FName& TagID, bool& bOutIsBeta);                                                            // [0xb6174c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/CreativeEmporiumUI.FortEmporiumUtilities.GetCreativeTagIDs
	// TArray<FName> GetCreativeTagIDs(class UFortItemDefinition* ItemDefinition);                                           // [0xb61742c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CreativeEmporiumUI.FortEmporiumUtilities.GetCategoryDisplayName
	// FText GetCategoryDisplayName(FName& CategoryID);                                                                      // [0xb617358] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/CreativeEmporiumUI.FortEmporiumItemData
/// Size: 0x00E8 (0x000000 - 0x0000E8)
struct FFortEmporiumItemData
{ 
	SDK_UNDEFINED(16,12453) /* FString */              __um(ID);                                                   // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,12454) /* FString */              __um(Title);                                                // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,12455) /* FString */              __um(NameSpace);                                            // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,12456) /* FString */              __um(EntityType);                                           // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,12457) /* FString */              __um(ThumbnailURL);                                         // 0x0040   (0x0010)  
	float                                              Price;                                                      // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	SDK_UNDEFINED(16,12458) /* FString */              __um(BaseCurrency);                                         // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,12459) /* FString */              __um(SketchfabUID);                                         // 0x0068   (0x0010)  
	TArray<FName>                                      TagList;                                                    // 0x0078   (0x0010)  
	EFortEmporiumItemLicense                           LicenseType;                                                // 0x0088   (0x0001)  
	bool                                               bRequiresEntitlement;                                       // 0x0089   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x008A   (0x0006)  MISSED
	SDK_UNDEFINED(16,12460) /* FString */              __um(VersePath);                                            // 0x0090   (0x0010)  
	SDK_UNDEFINED(16,12461) /* TArray<FString> */      __um(AssetIds);                                             // 0x00A0   (0x0010)  
	int32_t                                            FileSize;                                                   // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x00B4   (0x0004)  MISSED
	SDK_UNDEFINED(16,12462) /* FString */              __um(Description);                                          // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,12463) /* FString */              __um(Seller);                                               // 0x00C8   (0x0010)  
	int32_t                                            MaterialCount;                                              // 0x00D8   (0x0004)  
	int32_t                                            PolygonCount;                                               // 0x00DC   (0x0004)  
	int32_t                                            VertexCount;                                                // 0x00E0   (0x0004)  
	int32_t                                            ChildAssetCount;                                            // 0x00E4   (0x0004)  
};

/// Struct /Script/CreativeEmporiumUI.FortEmporiumItemLicenseData
/// Size: 0x0048 (0x000000 - 0x000048)
struct FFortEmporiumItemLicenseData
{ 
	FName                                              ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,12464) /* FString */              __um(Keyword);                                              // 0x0008   (0x0010)  
	SDK_UNDEFINED(24,12465) /* FText */                __um(Name);                                                 // 0x0018   (0x0018)  
	EFortEmporiumItemLicense                           License;                                                    // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	SDK_UNDEFINED(16,12466) /* FString */              __um(URL);                                                  // 0x0038   (0x0010)  
};

/// Struct /Script/CreativeEmporiumUI.FortEmporiumFilterCategory
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFortEmporiumFilterCategory
{ 
	FName                                              ID;                                                         // 0x0000   (0x0004)  
	FName                                              ParentID;                                                   // 0x0004   (0x0004)  
	bool                                               bIsTab;                                                     // 0x0008   (0x0001)  
	bool                                               bShowCategoryModal;                                         // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x000A   (0x0006)  MISSED
	TArray<FName>                                      SubcategoryIDList;                                          // 0x0010   (0x0010)  
};

