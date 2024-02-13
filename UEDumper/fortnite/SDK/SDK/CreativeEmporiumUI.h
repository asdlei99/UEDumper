
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
/// dependency: ItemizationCoreRuntime
/// dependency: McpProfileSys
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
	SDK_UNDEFINED(16,12535) /* FMulticastInlineDelegate */ __um(OnFilterEnabled);                                  // 0x1490   (0x0010)  
	SDK_UNDEFINED(16,12536) /* FMulticastInlineDelegate */ __um(OnFilterSelected);                                 // 0x14A0   (0x0010)  
	SDK_UNDEFINED(16,12537) /* FMulticastInlineDelegate */ __um(OnWidgetDestroyed);                                // 0x14B0   (0x0010)  
	class UCommonTextBlock*                            TextBlock_FilterName;                                       // 0x14C0   (0x0008)  
	bool                                               bFilterActive;                                              // 0x14C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x14C9   (0x0007)  MISSED
	class UEmporiumBrowserTag*                         tag;                                                        // 0x14D0   (0x0008)  
	SDK_UNDEFINED(24,12538) /* FText */                __um(ButtonText);                                           // 0x14D8   (0x0018)  


	/// Functions
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFilterEntry.UpdateItemCount
	// void UpdateItemCount(int32_t ItemCount);                                                                              // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFilterEntry.UpdateCheckMarkState
	// void UpdateCheckMarkState(bool bIsChecked);                                                                           // [0x130d900] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFilterEntry.UpdateButtonText
	// void UpdateButtonText();                                                                                              // [0xb892990] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFilterEntry.SetIsFilterActive
	// void SetIsFilterActive(bool bInFilterActive);                                                                         // [0xb89226c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFilterEntry.IsFilterActive
	// bool IsFilterActive();                                                                                                // [0xb890724] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CreativeEmporiumUI.EmporiumBrowserTag
/// Size: 0x0008 (0x000028 - 0x000030)
class UEmporiumBrowserTag : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FName                                              TagID;                                                      // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/CreativeEmporiumUI.FortEmporiumSortEntry
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFortEmporiumSortEntry
{ 
	SDK_UNDEFINED(24,12539) /* FText */                __um(Text);                                                 // 0x0000   (0x0018)  
	EFortEmporiumItemSortMode                          Mode;                                                       // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/CreativeEmporiumUI.FortEmporiumFilterEntry
/// Size: 0x0028 (0x000000 - 0x000028)
struct FFortEmporiumFilterEntry
{ 
	FName                                              ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(24,12540) /* FText */                __um(TextRoot);                                             // 0x0008   (0x0018)  
	EFortEmporiumItemFilterMode                        Mode;                                                       // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/CreativeEmporiumUI.FortEmporiumPriceFilterEntry
/// Size: 0x0028 (0x000000 - 0x000028)
struct FFortEmporiumPriceFilterEntry
{ 
	FName                                              ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(24,12541) /* FText */                __um(Text);                                                 // 0x0008   (0x0018)  
	EFortEmporiumItemPriceFilter                       Filter;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Class /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel
/// Size: 0x0210 (0x0002E8 - 0x0004F8)
class UEmporiumBrowserFiltersPanel : public UCommonUserWidget
{ 
public:
	SDK_UNDEFINED(16,12542) /* FMulticastInlineDelegate */ __um(OnFilterChanged);                                  // 0x02E8   (0x0010)  
	SDK_UNDEFINED(16,12543) /* FMulticastInlineDelegate */ __um(OnSortChanged);                                    // 0x02F8   (0x0010)  
	SDK_UNDEFINED(16,12544) /* FMulticastInlineDelegate */ __um(OnSubFilterToggled);                               // 0x0308   (0x0010)  
	SDK_UNDEFINED(16,12545) /* FMulticastInlineDelegate */ __um(OnFocusChanged);                                   // 0x0318   (0x0010)  
	SDK_UNDEFINED(16,12546) /* FMulticastInlineDelegate */ __um(OnCategoryActivated);                              // 0x0328   (0x0010)  
	SDK_UNDEFINED(16,12547) /* FMulticastInlineDelegate */ __um(OnCategoryFocused);                                // 0x0338   (0x0010)  
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
	// void SetItemDetailTags(TArray<FName>& TagIDs);                                                                        // [0xb8923f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.OnSetSearchVisible
	// void OnSetSearchVisible(bool bVisible);                                                                               // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.OnSetSearchText
	// void OnSetSearchText(FText& NewSearchText);                                                                           // [0x130d900] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.OnSetSearchFocused
	// void OnSetSearchFocused();                                                                                            // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.IncludeItemDetailTag
	// void IncludeItemDetailTag(FName& TagID);                                                                              // [0xb890654] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.HandleSortAndFilterClicked
	// void HandleSortAndFilterClicked();                                                                                    // [0xb890310] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.HandleShowAllEnabled
	// void HandleShowAllEnabled(bool bShowAllItems, class UObject* ListItemObject);                                         // [0xb8901c0] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.HandleSearchTextChanged
	// void HandleSearchTextChanged(FText& Text);                                                                            // [0xb890064] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.HandleFilterSelected
	// void HandleFilterSelected(bool bIsFilterEnabled, class UEmporiumBrowserFilterEntry* Entry);                           // [0xb88f7f8] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.HandleFilterEnabled
	// void HandleFilterEnabled(bool bIsFilterEnabled, class UObject* ListItemObject);                                       // [0xb88f3e8] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.HandleCategoryWidgetDestroyed
	// void HandleCategoryWidgetDestroyed(class UObject* ListItemObject);                                                    // [0xb88f038] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.HandleCategoryActivated
	// void HandleCategoryActivated(bool bIsExpanded, class UObject* ListItemObject);                                        // [0xb88ed5c] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.GetFilterCount
	// int32_t GetFilterCount();                                                                                             // [0xb88eba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.ExcludeItemDetailTag
	// void ExcludeItemDetailTag(FName& TagID);                                                                              // [0xb88e794] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader
/// Size: 0x0028 (0x0002C0 - 0x0002E8)
class UFortEmporiumFilterCategoryHeader : public UUserWidget
{ 
public:
	SDK_UNDEFINED(16,12548) /* FMulticastInlineDelegate */ __um(OnCategoryActivated);                              // 0x02C0   (0x0010)  
	SDK_UNDEFINED(16,12549) /* FMulticastInlineDelegate */ __um(OnWidgetDestroyed);                                // 0x02D0   (0x0010)  
	class UEmporiumBrowserTag*                         tag;                                                        // 0x02E0   (0x0008)  


	/// Functions
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.UpdateCategoryCount
	// void UpdateCategoryCount(int32_t NewCount, bool bHideIfEmpty);                                                        // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.ShowCategoryActive
	// void ShowCategoryActive(bool bIsActive);                                                                              // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.SetSubcategoryCount
	// void SetSubcategoryCount(int32_t NewCount);                                                                           // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.SetCategoryText
	// void SetCategoryText(FText& NewButtonText);                                                                           // [0x130d900] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.GetSubcategoryWidgets
	// TArray<UWidget*> GetSubcategoryWidgets();                                                                             // [0x878ed90] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.GetCategoryButton
	// class UCommonButtonBase* GetCategoryButton();                                                                         // [0x130d900] Event|Public|BlueprintEvent|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.ExpandCategory
	// void ExpandCategory(bool bExpanded);                                                                                  // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.EnableCategoryExpansion
	// void EnableCategoryExpansion(bool bShow);                                                                             // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.ClearSubcategoryWidgets
	// void ClearSubcategoryWidgets();                                                                                       // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.AddSubcategoryWidget
	// void AddSubcategoryWidget(class UWidget* SubcategoryWidget);                                                          // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.ActivateCategory
	// void ActivateCategory(bool bExpanded);                                                                                // [0xb88e038] Final|Native|Protected|BlueprintCallable 
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
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UFortEmporiumItemListTabPanel*               TabPanel;                                                   // 0x0028   (0x0008)  
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumHomeListEntry
/// Size: 0x0208 (0x0002C0 - 0x0004C8)
class UFortEmporiumHomeListEntry : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02C0   (0x0008)  MISSED
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
	// void UpdateWarningMessage(bool bShowMessage);                                                                         // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumHomeListEntry.GetCollapseBorderPadFlagForCategory
	// bool GetCollapseBorderPadFlagForCategory();                                                                           // [0xb88e8ec] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumHomeListEntry.GetCardSizeForCategory
	// EFortItemCardSize GetCardSizeForCategory();                                                                           // [0xb88e820] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumHomeListView
/// Size: 0x0250 (0x000BD0 - 0x000E20)
class UFortEmporiumHomeListView : public UCommonListView
{ 
public:
	unsigned char                                      UnknownData00_3[0x88];                                      // 0x0BD0   (0x0088)  MISSED
	TArray<class UFortEmporiumItemListTabPanel*>       TabPanelList;                                               // 0x0C58   (0x0010)  
	unsigned char                                      UnknownData01_6[0x1B8];                                     // 0x0C68   (0x01B8)  MISSED


	/// Functions
	// Function /Script/CreativeEmporiumUI.FortEmporiumHomeListView.GetFocusWidget
	// class UWidget* GetFocusWidget();                                                                                      // [0xb88ebb8] Native|Public|BlueprintCallable 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumHomeTabPanel
/// Size: 0x0040 (0x000448 - 0x000488)
class UFortEmporiumHomeTabPanel : public UFortCreativeContentBrowserTabPanelBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0448   (0x0030)  MISSED
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
/// Size: 0x0110 (0x000338 - 0x000448)
class UFortEmporiumItemDefinition : public UFortItemDefinition
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0338   (0x0008)  MISSED
	SDK_UNDEFINED(16,12550) /* FMulticastInlineDelegate */ __um(OnItemThumbnailDownloaded);                        // 0x0340   (0x0010)  
	unsigned char                                      UnknownData01_5[0xE8];                                      // 0x0350   (0x00E8)  MISSED
	class UTexture2D*                                  ThumbnailTexture;                                           // 0x0438   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0440   (0x0008)  MISSED


	/// Functions
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDefinition.GetEmporiumItemData
	// FFortEmporiumItemData GetEmporiumItemData();                                                                          // [0xb88eb84] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel
/// Size: 0x0068 (0x0002E8 - 0x000350)
class UFortEmporiumItemDetailsPanel : public UCommonUserWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x02E8   (0x0030)  MISSED
	FDataTableRowHandle                                ItemDetailTagsInputRowHandle;                               // 0x0318   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0328   (0x0008)  MISSED
	class UFortItemDefinition*                         CachedItemDefinition;                                       // 0x0330   (0x0008)  
	class UCommonVisibilitySwitcher*                   Switcher_Details;                                           // 0x0338   (0x0008)  
	class UFortEmporiumItemInfo*                       ItemDetails;                                                // 0x0340   (0x0008)  
	class UFortItemDetailsHostPanel*                   LegacyItemDetails;                                          // 0x0348   (0x0008)  


	/// Functions
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.UpdateItemDetailsDisplay
	// void UpdateItemDetailsDisplay(bool bShowItemDetails);                                                                 // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.ToggleItemDetailsPanel
	// void ToggleItemDetailsPanel();                                                                                        // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.ShowExtendedDataPanel
	// void ShowExtendedDataPanel();                                                                                         // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.SetSpecialItemTagVisibility
	// void SetSpecialItemTagVisibility(FName& SpecialItemTag);                                                              // [0x130d900] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.SetItemToDetail
	// void SetItemToDetail(class UFortItem* InItemToDetail, bool bUseLargeThumbnail, bool bAllowInteractiveTags);           // [0xb89248c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.SetItemDetails
	// void SetItemDetails(class UFortItem* FortItem, bool bUseLargeThumbnail, bool bAllowInteractiveTags);                  // [0x130d900] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.SetActiveItemDetailTags
	// void SetActiveItemDetailTags(TArray<FName>& ActiveTags);                                                              // [0x130d900] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.IsShowingExtendedDataPanel
	// bool IsShowingExtendedDataPanel();                                                                                    // [0x2bf8390] Native|Event|Protected|BlueprintEvent|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.IsShowingAdditionalButtons
	// bool IsShowingAdditionalButtons();                                                                                    // [0x2bf8390] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.HideExtendedDataPanel
	// void HideExtendedDataPanel();                                                                                         // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.HideAdditionalButtons
	// void HideAdditionalButtons();                                                                                         // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.HasLegacyItemDetailsPanel
	// bool HasLegacyItemDetailsPanel();                                                                                     // [0x2bf8390] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.HandleItemTagSelected
	// void HandleItemTagSelected(FName TagID, bool bSelected);                                                              // [0xb88fb88] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.BP_GetSpecialItemTags
	// TArray<FName> BP_GetSpecialItemTags();                                                                                // [0x130d900] Event|Protected|BlueprintEvent|Const 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumItemInfo
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortEmporiumItemInfo : public UCommonUserWidget
{ 
public:
	TArray<FName>                                      HiddenTags;                                                 // 0x02E8   (0x0010)  


	/// Functions
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemInfo.UpdateWithFortItem
	// void UpdateWithFortItem(class UFortItem* Item, bool bAllowInteractiveTags);                                           // [0x130d900] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemInfo.ShowSelectItemTagsPrompt
	// void ShowSelectItemTagsPrompt(bool bShowPrompt);                                                                      // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemInfo.SetTagFocus
	// void SetTagFocus();                                                                                                   // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemInfo.SetSelectItemTagsPrompt
	// void SetSelectItemTagsPrompt(FText& Prompt);                                                                          // [0x130d900] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemInfo.SetSelectItemTagsIcon
	// void SetSelectItemTagsIcon(FSlateBrush SelectItemTagsIcon);                                                           // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemInfo.HasFocusableTags
	// bool HasFocusableTags();                                                                                              // [0x130d900] Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumCategoryEntry
/// Size: 0x0020 (0x000028 - 0x000048)
class UFortEmporiumCategoryEntry : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,12551) /* FString */              __um(Path);                                                 // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,12552) /* FString */              __um(Hash);                                                 // 0x0038   (0x0010)  
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumItemListMenu
/// Size: 0x0590 (0x000400 - 0x000990)
class UFortEmporiumItemListMenu : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0400   (0x0030)  MISSED
	class UClass*                                      PanelDataClass;                                             // 0x0430   (0x0008)  
	class UDataTable*                                  ItemListCategorySource;                                     // 0x0438   (0x0008)  
	class UFortCreativeItemListPanelData*              ItemListPanelData;                                          // 0x0440   (0x0008)  
	class UClass*                                      InventoryTabClass;                                          // 0x0448   (0x0008)  
	class UClass*                                      LevelManagementTabClass;                                    // 0x0450   (0x0008)  
	class UClass*                                      HomeTabClass;                                               // 0x0458   (0x0008)  
	class UClass*                                      InventoryTabButton;                                         // 0x0460   (0x0008)  
	SDK_UNDEFINED(80,12553) /* TMap<FName, FText> */   __um(Map_CreativeBetaTagNames);                             // 0x0468   (0x0050)  
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
	SDK_UNDEFINED(80,12554) /* TMap<FName, UFortCreativeContentBrowserTabPanelBase*> */ __um(TabMap);              // 0x0658   (0x0050)  
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
	// void UpdatePermissionsDisplay();                                                                                      // [0xb8929b8] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.UpdateDetailsPanel
	// void UpdateDetailsPanel();                                                                                            // [0xb8929a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.UpdateBackButtonText
	// void UpdateBackButtonText(bool bFilterFocus);                                                                         // [0xb8928cc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.SwitchItemDetailsPanel
	// void SwitchItemDetailsPanel(bool bUseLegacy);                                                                         // [0xb892808] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.SpawnContainer
	// void SpawnContainer(class UClass* SupplyDropClass);                                                                   // [0xb892730] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.SetSubTabOpened
	// void SetSubTabOpened(class UFortItemDefinition* ItemDefinition);                                                      // [0xb892658] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.SetIsItemCommandsEnabled
	// void SetIsItemCommandsEnabled(bool bInIsItemCommandEnabled);                                                          // [0xb892330] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.RefreshTabWarningState
	// void RefreshTabWarningState();                                                                                        // [0xb8918d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.PlaceSelectionInMoveTool
	// bool PlaceSelectionInMoveTool();                                                                                      // [0xb8918b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OpenSelection
	// bool OpenSelection();                                                                                                 // [0xb891890] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnUpdateCommandBarVisibility
	// void OnUpdateCommandBarVisibility(bool bShowBar);                                                                     // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnShowCategoryModal
	// void OnShowCategoryModal(bool bShowModal);                                                                            // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnSelectionOpened
	// void OnSelectionOpened(class UFortItemDefinition* SelectedItemDefinition);                                            // [0x130d900] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnSearchFiltersVisibilityChanged
	// void OnSearchFiltersVisibilityChanged(bool bIsVisible);                                                               // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnQuickbarStateChanged
	// void OnQuickbarStateChanged(EFortContentBrowserQuickbarState State);                                                  // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnItemsLoaded
	// void OnItemsLoaded();                                                                                                 // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnItemEquipped
	// void OnItemEquipped(FFortItemEntry& EquippedItemEntry);                                                               // [0x130d900] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnFabItemQueryComplete
	// void OnFabItemQueryComplete(bool bSuccess, FString JsonString);                                                       // [0xb891114] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnFabCategoryListLoaded
	// void OnFabCategoryListLoaded(bool bSuccess, FString JsonString);                                                      // [0xb890998] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnExitSubTab
	// void OnExitSubTab();                                                                                                  // [0x130d900] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnCursorModeChanged
	// void OnCursorModeChanged(bool bCursorModeEnabled, FName ActionName, class UUserWidget* CursorModeContentWidget);      // [0xb8907cc] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnCreativeQuickbarComponentLoaded
	// void OnCreativeQuickbarComponentLoaded();                                                                             // [0xa39a414] Final|Native|Public  
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnContentRatingFilterChanged
	// void OnContentRatingFilterChanged();                                                                                  // [0xb890460] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnBuiltInItemsLoaded
	// void OnBuiltInItemsLoaded();                                                                                          // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.NativeOnItemsRefreshed
	// void NativeOnItemsRefreshed();                                                                                        // [0xb8907b8] Final|Native|Public  
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.NativeOnItemsLoaded
	// void NativeOnItemsLoaded();                                                                                           // [0xb8907a4] Final|Native|Public  
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.NativeOnBuiltInItemsLoaded
	// void NativeOnBuiltInItemsLoaded();                                                                                    // [0xb890790] Final|Native|Public  
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.LoadFabItems
	// void LoadFabItems();                                                                                                  // [0xb89077c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.IsSubTabOpened
	// bool IsSubTabOpened();                                                                                                // [0xb89073c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.InitializeTabs
	// void InitializeTabs();                                                                                                // [0xb8906f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.InitializeFabTab
	// void InitializeFabTab();                                                                                              // [0xb8906e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleTabSortButtonClicked
	// void HandleTabSortButtonClicked();                                                                                    // [0xb890640] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleTabSelected
	// void HandleTabSelected(FName TabID, bool bCaptureFocus);                                                              // [0xb890500] Final|Native|Private|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleTabItemDetailClicked
	// void HandleTabItemDetailClicked(FName& TagID);                                                                        // [0xb890474] Final|Native|Private|HasOutParms 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleSortChanged
	// void HandleSortChanged();                                                                                             // [0xb890460] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleSortButtonClicked
	// void HandleSortButtonClicked(FName SortNameId, class UCommonButtonBase* NewButton);                                   // [0xb890324] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleSelectionChanged
	// void HandleSelectionChanged(class UFortCreativeContentBrowserTabPanelBase* Tab);                                      // [0xb890100] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleQuickbarStateChanged
	// void HandleQuickbarStateChanged(EFortContentBrowserQuickbarState State);                                              // [0xb88ffa4] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleQuickbarPanelIsFocused
	// void HandleQuickbarPanelIsFocused(bool bIsFocused);                                                                   // [0xb88fee0] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleModalHitBlockerClicked
	// void HandleModalHitBlockerClicked();                                                                                  // [0xb88fea4] Final|Native|Private|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleItemThumbnailDownloaded
	// void HandleItemThumbnailDownloaded(class UFortEmporiumItemDefinition* ItemDefinition);                                // [0xb88fde4] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleItemTagSelected
	// void HandleItemTagSelected(FName& TagID, bool bSelected);                                                             // [0xb88fcd4] Final|Native|Private|HasOutParms 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleItemDoubleClicked
	// void HandleItemDoubleClicked(FFortItemEntry& ItemEntry);                                                              // [0xb88fad0] Final|Native|Private|HasOutParms 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleItemClicked
	// void HandleItemClicked(FFortItemEntry& ItemEntry);                                                                    // [0xb88f97c] Final|Native|Private|HasOutParms 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleGlobalSortPanelToggle
	// void HandleGlobalSortPanelToggle();                                                                                   // [0xb88f968] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleFilterPanelIsFocused
	// void HandleFilterPanelIsFocused(bool bIsFocused);                                                                     // [0xb88f734] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleFilterChanged
	// void HandleFilterChanged();                                                                                           // [0xb88f3d4] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleFilterButtonClicked
	// void HandleFilterButtonClicked(FName FilterNameId, class UCommonButtonBase* NewButton);                               // [0xb88f298] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleEquipItem
	// void HandleEquipItem(FFortItemEntry& ItemEntry);                                                                      // [0xb88f1d4] Final|Native|Private|HasOutParms 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleChestItemCountChanged
	// void HandleChestItemCountChanged(int32_t Count);                                                                      // [0xb88f114] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleCategoryFocused
	// void HandleCategoryFocused(FName CategoryID);                                                                         // [0xb88ef78] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleCategoryActivated
	// void HandleCategoryActivated(FName CategoryID);                                                                       // [0xb88eeb8] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleAddSelectionToMoveToolComplete
	// void HandleAddSelectionToMoveToolComplete();                                                                          // [0xb88ed48] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.GetSubTabSelectedItemDefinition
	// class UFortItemDefinition* GetSubTabSelectedItemDefinition();                                                         // [0xb88ec1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.GetLastSelectedTabName
	// FName GetLastSelectedTabName();                                                                                       // [0xb88ebe0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.GetCurrentTab
	// class UFortCreativeContentBrowserTabPanelBase* GetCurrentTab();                                                       // [0xb88eb60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.GetCurrentSelection
	// FFortItemEntry GetCurrentSelection();                                                                                 // [0xb88eafc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.EquipSelection
	// bool EquipSelection();                                                                                                // [0xb88e770] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.EquipItem
	// bool EquipItem(FFortItemEntry& ItemEntry);                                                                            // [0xb88e6a8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.DropItem
	// bool DropItem(FFortItemEntry& SelectedItem);                                                                          // [0xb88e5c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.CanEquip
	// bool CanEquip(FFortItemEntry& SelectedItem);                                                                          // [0xb88e498] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.CanDropItem
	// bool CanDropItem(FFortItemEntry& SelectedItem);                                                                       // [0xb88e3d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.CanAddToChest
	// bool CanAddToChest(FFortItemEntry& SelectedItem);                                                                     // [0xb88e308] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.AddSelectionToQuickBar
	// bool AddSelectionToQuickBar();                                                                                        // [0xb88e2dc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel
/// Size: 0x0418 (0x000448 - 0x000860)
class UFortEmporiumItemListTabPanel : public UFortCreativeContentBrowserTabPanelBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0448   (0x0008)  MISSED
	SDK_UNDEFINED(16,12555) /* FMulticastInlineDelegate */ __um(OnSourceItemCountChanged);                         // 0x0450   (0x0010)  
	SDK_UNDEFINED(16,12556) /* FMulticastInlineDelegate */ __um(OnItemClickedDelegate);                            // 0x0460   (0x0010)  
	SDK_UNDEFINED(16,12557) /* FMulticastInlineDelegate */ __um(OnItemDoubleClickedDelegate);                      // 0x0470   (0x0010)  
	unsigned char                                      UnknownData01_5[0x30];                                      // 0x0480   (0x0030)  MISSED
	class UAthenaCreativeItemTileView*                 CreativeTileView_ItemOptions;                               // 0x04B0   (0x0008)  
	class UCommonButtonBase*                           Button_Sort;                                                // 0x04B8   (0x0008)  
	FFortItemEntry                                     CurrentItemEntry;                                           // 0x04C0   (0x01A8)  
	SDK_UNDEFINED(16,12558) /* FMulticastInlineDelegate */ __um(OnItemCountChanged);                               // 0x0668   (0x0010)  
	TArray<FFortItemEntry>                             Items;                                                      // 0x0678   (0x0010)  
	TArray<FFortItemEntry>                             SourceItems;                                                // 0x0688   (0x0010)  
	unsigned char                                      UnknownData02_5[0x1B0];                                     // 0x0698   (0x01B0)  MISSED
	class UFortEmporiumItemListMenu*                   EmporiumItemListMenuParent;                                 // 0x0848   (0x0008)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0850   (0x0010)  MISSED


	/// Functions
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.UpdateTabHeader
	// void UpdateTabHeader();                                                                                               // [0x130d900] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.UpdateSortButton
	// void UpdateSortButton(FText& SortType);                                                                               // [0x130d900] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.ShowTopButtonBar
	// void ShowTopButtonBar(bool bShow);                                                                                    // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.ShowLegacyItemDetailsPanel
	// bool ShowLegacyItemDetailsPanel();                                                                                    // [0xb892718] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.SetActiveItemDetailTags
	// void SetActiveItemDetailTags(TArray<FName>& TagIDs);                                                                  // [0x130d900] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.RestoreLastSelection
	// void RestoreLastSelection();                                                                                          // [0xb892258] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.RemoveSelectedItem
	// void RemoveSelectedItem();                                                                                            // [0xb8918ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.ItemEquipped
	// void ItemEquipped(FFortItemEntry& Item);                                                                              // [0x130d900] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.IsSubTabOpened
	// bool IsSubTabOpened();                                                                                                // [0xb890754] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.IsEmpty
	// bool IsEmpty();                                                                                                       // [0xb890708] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.HandleItemDetailTagSelected
	// void HandleItemDetailTagSelected(FName& TagID);                                                                       // [0xb88fa40] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.GetSubTabSelectedItemDefinition
	// class UFortItemDefinition* GetSubTabSelectedItemDefinition();                                                         // [0xb88ec44] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.GetCollapseBorderPadFlagForCategory
	// bool GetCollapseBorderPadFlagForCategory();                                                                           // [0xb88e914] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.GetCardSizeForCategory
	// EFortItemCardSize GetCardSizeForCategory();                                                                           // [0xb88e840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.FocusCurrentSelection
	// void FocusCurrentSelection();                                                                                         // [0x130d900] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.ClearFilteredItems
	// void ClearFilteredItems();                                                                                            // [0xb88e5ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.ClearAllItems
	// void ClearAllItems();                                                                                                 // [0xb88e598] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.CanPlayerCreateInVolume
	// bool CanPlayerCreateInVolume();                                                                                       // [0xb88e560] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.AddItemToSource
	// void AddItemToSource(FFortItemEntry& ItemToAdd);                                                                      // [0xb88e1d8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.AddItem
	// void AddItem(FFortItemEntry& ItemToAdd);                                                                              // [0xb88e114] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumUtilities
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortEmporiumUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/CreativeEmporiumUI.FortEmporiumUtilities.RequestLicenseText
	// void RequestLicenseText(EFortEmporiumItemLicense License, FDelegateProperty& Callback);                               // [0xb892138] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumUtilities.RequestJSON
	// void RequestJSON(class UObject* WorldContextObject, FUniqueNetIdRepl& UniqueNetId, FString JSONURL, FDelegateProperty& Callback); // [0xb891900] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumUtilities.GetTextFromEmporiumLicense
	// FText GetTextFromEmporiumLicense(EFortEmporiumItemLicense License);                                                   // [0xb88ec80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CreativeEmporiumUI.FortEmporiumUtilities.GetCreativeTagLabel
	// FText GetCreativeTagLabel(FName& TagID, bool& bOutIsBeta);                                                            // [0xb88ea00] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/CreativeEmporiumUI.FortEmporiumUtilities.GetCreativeTagIDs
	// TArray<FName> GetCreativeTagIDs(class UFortItemDefinition* ItemDefinition);                                           // [0xb88e92c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CreativeEmporiumUI.FortEmporiumUtilities.GetCategoryDisplayName
	// FText GetCategoryDisplayName(FName& CategoryID);                                                                      // [0xb88e858] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/CreativeEmporiumUI.FortEmporiumItemData
/// Size: 0x00E8 (0x000000 - 0x0000E8)
struct FFortEmporiumItemData
{ 
	SDK_UNDEFINED(16,12559) /* FString */              __um(ID);                                                   // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,12560) /* FString */              __um(Title);                                                // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,12561) /* FString */              __um(NameSpace);                                            // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,12562) /* FString */              __um(EntityType);                                           // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,12563) /* FString */              __um(ThumbnailURL);                                         // 0x0040   (0x0010)  
	float                                              Price;                                                      // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	SDK_UNDEFINED(16,12564) /* FString */              __um(BaseCurrency);                                         // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,12565) /* FString */              __um(SketchfabUID);                                         // 0x0068   (0x0010)  
	TArray<FName>                                      TagList;                                                    // 0x0078   (0x0010)  
	EFortEmporiumItemLicense                           LicenseType;                                                // 0x0088   (0x0001)  
	bool                                               bRequiresEntitlement;                                       // 0x0089   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x008A   (0x0006)  MISSED
	SDK_UNDEFINED(16,12566) /* FString */              __um(VersePath);                                            // 0x0090   (0x0010)  
	SDK_UNDEFINED(16,12567) /* TArray<FString> */      __um(AssetIds);                                             // 0x00A0   (0x0010)  
	int32_t                                            FileSize;                                                   // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x00B4   (0x0004)  MISSED
	SDK_UNDEFINED(16,12568) /* FString */              __um(Description);                                          // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,12569) /* FString */              __um(Seller);                                               // 0x00C8   (0x0010)  
	int32_t                                            MaterialCount;                                              // 0x00D8   (0x0004)  
	int32_t                                            PolygonCount;                                               // 0x00DC   (0x0004)  
	int32_t                                            vertexcount;                                                // 0x00E0   (0x0004)  
	int32_t                                            ChildAssetCount;                                            // 0x00E4   (0x0004)  
};

/// Struct /Script/CreativeEmporiumUI.FortEmporiumItemLicenseData
/// Size: 0x0048 (0x000000 - 0x000048)
struct FFortEmporiumItemLicenseData
{ 
	FName                                              ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,12570) /* FString */              __um(Keyword);                                              // 0x0008   (0x0010)  
	SDK_UNDEFINED(24,12571) /* FText */                __um(Name);                                                 // 0x0018   (0x0018)  
	EFortEmporiumItemLicense                           License;                                                    // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	SDK_UNDEFINED(16,12572) /* FString */              __um(URL);                                                  // 0x0038   (0x0010)  
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

