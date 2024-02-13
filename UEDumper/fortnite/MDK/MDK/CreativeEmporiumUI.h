
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: ItemizationCoreRuntime
/// dependency: McpProfileSys
/// dependency: UMG

/// Class /Script/CreativeEmporiumUI.EmporiumBrowserFilterEntry
/// Size: 0x0060 (0x001490 - 0x0014F0)
class UEmporiumBrowserFilterEntry : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5360;

public:
	SMember(FMulticastInlineDelegate)                  OnFilterEnabled                                             OFFSET(getStruct<T>, {0x1490, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFilterSelected                                            OFFSET(getStruct<T>, {0x14A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnWidgetDestroyed                                           OFFSET(getStruct<T>, {0x14B0, 16, 0, 0})
	CMember(class UCommonTextBlock*)                   TextBlock_FilterName                                        OFFSET(get<T>, {0x14C0, 8, 0, 0})
	DMember(bool)                                      bFilterActive                                               OFFSET(get<bool>, {0x14C8, 1, 0, 0})
	CMember(class UEmporiumBrowserTag*)                tag                                                         OFFSET(get<T>, {0x14D0, 8, 0, 0})
	SMember(FText)                                     ButtonText                                                  OFFSET(getStruct<T>, {0x14D8, 24, 0, 0})


	/// Functions
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFilterEntry.UpdateItemCount
	// void UpdateItemCount(int32_t ItemCount);                                                                                 // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFilterEntry.UpdateCheckMarkState
	// void UpdateCheckMarkState(bool bIsChecked);                                                                              // [0x130d900] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFilterEntry.UpdateButtonText
	// void UpdateButtonText();                                                                                                 // [0xb892990] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFilterEntry.SetIsFilterActive
	// void SetIsFilterActive(bool bInFilterActive);                                                                            // [0xb89226c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFilterEntry.IsFilterActive
	// bool IsFilterActive();                                                                                                   // [0xb890724] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CreativeEmporiumUI.EmporiumBrowserTag
/// Size: 0x0008 (0x000028 - 0x000030)
class UEmporiumBrowserTag : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     TagID                                                       OFFSET(getStruct<T>, {0x28, 4, 0, 0})
};

/// Class /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel
/// Size: 0x0210 (0x0002E8 - 0x0004F8)
class UEmporiumBrowserFiltersPanel : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1272;

public:
	SMember(FMulticastInlineDelegate)                  OnFilterChanged                                             OFFSET(getStruct<T>, {0x2E8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSortChanged                                               OFFSET(getStruct<T>, {0x2F8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSubFilterToggled                                          OFFSET(getStruct<T>, {0x308, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFocusChanged                                              OFFSET(getStruct<T>, {0x318, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCategoryActivated                                         OFFSET(getStruct<T>, {0x328, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCategoryFocused                                           OFFSET(getStruct<T>, {0x338, 16, 0, 0})
	CMember(class UClass*)                             FilterSectionHeaderWidgetClass                              OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(class UClass*)                             FilterCategoryHeaderWidgetClass                             OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(class UClass*)                             FilterHomeHeaderWidgetClass                                 OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(class UClass*)                             FilterEntryWidgetClass                                      OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(TArray<FFortEmporiumSortEntry>)            SortEntries                                                 OFFSET(get<T>, {0x368, 16, 0, 0})
	CMember(TArray<FFortEmporiumFilterEntry>)          FilterEntries                                               OFFSET(get<T>, {0x378, 16, 0, 0})
	CMember(TArray<FFortEmporiumPriceFilterEntry>)     PriceFilterEntries                                          OFFSET(get<T>, {0x388, 16, 0, 0})
	CMember(TArray<FName>)                             LicenseFilterEntries                                        OFFSET(get<T>, {0x398, 16, 0, 0})
	SMember(FName)                                     DefaultCategoryFilter                                       OFFSET(getStruct<T>, {0x3A8, 4, 0, 0})
	CMember(class UScrollBox*)                         ScrollBox_FilterScroll                                      OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(class UEmporiumBrowserFilterEntry*)        Button_All                                                  OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_SortAndFilter                                        OFFSET(get<T>, {0x410, 8, 0, 0})
	SMember(FDataTableRowHandle)                       FocusSearchInputActionRow                                   OFFSET(getStruct<T>, {0x4D0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ClearSearchInputActionRow                                   OFFSET(getStruct<T>, {0x4E0, 16, 0, 0})


	/// Functions
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.SetItemDetailTags
	// void SetItemDetailTags(TArray<FName>& TagIDs);                                                                           // [0xb8923f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.OnSetSearchVisible
	// void OnSetSearchVisible(bool bVisible);                                                                                  // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.OnSetSearchText
	// void OnSetSearchText(FText& NewSearchText);                                                                              // [0x130d900] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.OnSetSearchFocused
	// void OnSetSearchFocused();                                                                                               // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.IncludeItemDetailTag
	// void IncludeItemDetailTag(FName& TagID);                                                                                 // [0xb890654] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.HandleSortAndFilterClicked
	// void HandleSortAndFilterClicked();                                                                                       // [0xb890310] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.HandleShowAllEnabled
	// void HandleShowAllEnabled(bool bShowAllItems, class UObject* ListItemObject);                                            // [0xb8901c0] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.HandleSearchTextChanged
	// void HandleSearchTextChanged(FText& Text);                                                                               // [0xb890064] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.HandleFilterSelected
	// void HandleFilterSelected(bool bIsFilterEnabled, class UEmporiumBrowserFilterEntry* Entry);                              // [0xb88f7f8] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.HandleFilterEnabled
	// void HandleFilterEnabled(bool bIsFilterEnabled, class UObject* ListItemObject);                                          // [0xb88f3e8] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.HandleCategoryWidgetDestroyed
	// void HandleCategoryWidgetDestroyed(class UObject* ListItemObject);                                                       // [0xb88f038] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.HandleCategoryActivated
	// void HandleCategoryActivated(bool bIsExpanded, class UObject* ListItemObject);                                           // [0xb88ed5c] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.GetFilterCount
	// int32_t GetFilterCount();                                                                                                // [0xb88eba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.ExcludeItemDetailTag
	// void ExcludeItemDetailTag(FName& TagID);                                                                                 // [0xb88e794] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader
/// Size: 0x0028 (0x0002C0 - 0x0002E8)
class UFortEmporiumFilterCategoryHeader : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	SMember(FMulticastInlineDelegate)                  OnCategoryActivated                                         OFFSET(getStruct<T>, {0x2C0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnWidgetDestroyed                                           OFFSET(getStruct<T>, {0x2D0, 16, 0, 0})
	CMember(class UEmporiumBrowserTag*)                tag                                                         OFFSET(get<T>, {0x2E0, 8, 0, 0})


	/// Functions
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.UpdateCategoryCount
	// void UpdateCategoryCount(int32_t NewCount, bool bHideIfEmpty);                                                           // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.ShowCategoryActive
	// void ShowCategoryActive(bool bIsActive);                                                                                 // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.SetSubcategoryCount
	// void SetSubcategoryCount(int32_t NewCount);                                                                              // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.SetCategoryText
	// void SetCategoryText(FText& NewButtonText);                                                                              // [0x130d900] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.GetSubcategoryWidgets
	// TArray<UWidget*> GetSubcategoryWidgets();                                                                                // [0x878ed90] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.GetCategoryButton
	// class UCommonButtonBase* GetCategoryButton();                                                                            // [0x130d900] Event|Public|BlueprintEvent|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.ExpandCategory
	// void ExpandCategory(bool bExpanded);                                                                                     // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.EnableCategoryExpansion
	// void EnableCategoryExpansion(bool bShow);                                                                                // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.ClearSubcategoryWidgets
	// void ClearSubcategoryWidgets();                                                                                          // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.AddSubcategoryWidget
	// void AddSubcategoryWidget(class UWidget* SubcategoryWidget);                                                             // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.ActivateCategory
	// void ActivateCategory(bool bExpanded);                                                                                   // [0xb88e038] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumFiltersSubPanel
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class UFortEmporiumFiltersSubPanel : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumHomeEntryObjectWrapper
/// Size: 0x0008 (0x000028 - 0x000030)
class UFortEmporiumHomeEntryObjectWrapper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UFortEmporiumItemListTabPanel*)      TabPanel                                                    OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumHomeListEntry
/// Size: 0x0208 (0x0002C0 - 0x0004C8)
class UFortEmporiumHomeListEntry : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1224;

public:
	CMember(class UFortEmporiumHomeListView*)          ParentView                                                  OFFSET(get<T>, {0x2C8, 8, 0, 0})
	DMember(int32_t)                                   MaxItemsToShow                                              OFFSET(get<int32_t>, {0x300, 4, 0, 0})
	CMember(class UFortEmporiumItemListTabPanel*)      TabPanel                                                    OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_CategoryLabel                                          OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UAthenaCreativeItemTileView*)        HomeListView_ItemOptions                                    OFFSET(get<T>, {0x318, 8, 0, 0})


	/// Functions
	// Function /Script/CreativeEmporiumUI.FortEmporiumHomeListEntry.UpdateWarningMessage
	// void UpdateWarningMessage(bool bShowMessage);                                                                            // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumHomeListEntry.GetCollapseBorderPadFlagForCategory
	// bool GetCollapseBorderPadFlagForCategory();                                                                              // [0xb88e8ec] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumHomeListEntry.GetCardSizeForCategory
	// EFortItemCardSize GetCardSizeForCategory();                                                                              // [0xb88e820] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumHomeListView
/// Size: 0x0250 (0x000BD0 - 0x000E20)
class UFortEmporiumHomeListView : public UCommonListView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3616;

public:
	CMember(TArray<class UFortEmporiumItemListTabPanel*>) TabPanelList                                             OFFSET(get<T>, {0xC58, 16, 0, 0})


	/// Functions
	// Function /Script/CreativeEmporiumUI.FortEmporiumHomeListView.GetFocusWidget
	// class UWidget* GetFocusWidget();                                                                                         // [0xb88ebb8] Native|Public|BlueprintCallable 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumHomeTabPanel
/// Size: 0x0040 (0x000448 - 0x000488)
class UFortEmporiumHomeTabPanel : public UFortCreativeContentBrowserTabPanelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1160;

public:
	SMember(FName)                                     FeaturedItemTag                                             OFFSET(getStruct<T>, {0x478, 4, 0, 0})
	CMember(class UFortEmporiumHomeListView*)          FortEmporiumHomeListView_Options                            OFFSET(get<T>, {0x480, 8, 0, 0})
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumItem
/// Size: 0x0008 (0x000088 - 0x000090)
class UFortEmporiumItem : public UFortItem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(class UFortEmporiumItemDefinition*)        ItemDefinition                                              OFFSET(get<T>, {0x88, 8, 0, 0})
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumItemDefinition
/// Size: 0x0110 (0x000338 - 0x000448)
class UFortEmporiumItemDefinition : public UFortItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	SMember(FMulticastInlineDelegate)                  OnItemThumbnailDownloaded                                   OFFSET(getStruct<T>, {0x340, 16, 0, 0})
	CMember(class UTexture2D*)                         ThumbnailTexture                                            OFFSET(get<T>, {0x438, 8, 0, 0})


	/// Functions
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDefinition.GetEmporiumItemData
	// FFortEmporiumItemData GetEmporiumItemData();                                                                             // [0xb88eb84] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel
/// Size: 0x0068 (0x0002E8 - 0x000350)
class UFortEmporiumItemDetailsPanel : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	SMember(FDataTableRowHandle)                       ItemDetailTagsInputRowHandle                                OFFSET(getStruct<T>, {0x318, 16, 0, 0})
	CMember(class UFortItemDefinition*)                CachedItemDefinition                                        OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(class UCommonVisibilitySwitcher*)          Switcher_Details                                            OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(class UFortEmporiumItemInfo*)              ItemDetails                                                 OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(class UFortItemDetailsHostPanel*)          LegacyItemDetails                                           OFFSET(get<T>, {0x348, 8, 0, 0})


	/// Functions
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.UpdateItemDetailsDisplay
	// void UpdateItemDetailsDisplay(bool bShowItemDetails);                                                                    // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.ToggleItemDetailsPanel
	// void ToggleItemDetailsPanel();                                                                                           // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.ShowExtendedDataPanel
	// void ShowExtendedDataPanel();                                                                                            // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.SetSpecialItemTagVisibility
	// void SetSpecialItemTagVisibility(FName& SpecialItemTag);                                                                 // [0x130d900] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.SetItemToDetail
	// void SetItemToDetail(class UFortItem* InItemToDetail, bool bUseLargeThumbnail, bool bAllowInteractiveTags);              // [0xb89248c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.SetItemDetails
	// void SetItemDetails(class UFortItem* FortItem, bool bUseLargeThumbnail, bool bAllowInteractiveTags);                     // [0x130d900] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.SetActiveItemDetailTags
	// void SetActiveItemDetailTags(TArray<FName>& ActiveTags);                                                                 // [0x130d900] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.IsShowingExtendedDataPanel
	// bool IsShowingExtendedDataPanel();                                                                                       // [0x2bf8390] Native|Event|Protected|BlueprintEvent|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.IsShowingAdditionalButtons
	// bool IsShowingAdditionalButtons();                                                                                       // [0x2bf8390] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.HideExtendedDataPanel
	// void HideExtendedDataPanel();                                                                                            // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.HideAdditionalButtons
	// void HideAdditionalButtons();                                                                                            // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.HasLegacyItemDetailsPanel
	// bool HasLegacyItemDetailsPanel();                                                                                        // [0x2bf8390] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.HandleItemTagSelected
	// void HandleItemTagSelected(FName TagID, bool bSelected);                                                                 // [0xb88fb88] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.BP_GetSpecialItemTags
	// TArray<FName> BP_GetSpecialItemTags();                                                                                   // [0x130d900] Event|Protected|BlueprintEvent|Const 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumItemInfo
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortEmporiumItemInfo : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(TArray<FName>)                             HiddenTags                                                  OFFSET(get<T>, {0x2E8, 16, 0, 0})


	/// Functions
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemInfo.UpdateWithFortItem
	// void UpdateWithFortItem(class UFortItem* Item, bool bAllowInteractiveTags);                                              // [0x130d900] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemInfo.ShowSelectItemTagsPrompt
	// void ShowSelectItemTagsPrompt(bool bShowPrompt);                                                                         // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemInfo.SetTagFocus
	// void SetTagFocus();                                                                                                      // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemInfo.SetSelectItemTagsPrompt
	// void SetSelectItemTagsPrompt(FText& Prompt);                                                                             // [0x130d900] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemInfo.SetSelectItemTagsIcon
	// void SetSelectItemTagsIcon(FSlateBrush SelectItemTagsIcon);                                                              // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemInfo.HasFocusableTags
	// bool HasFocusableTags();                                                                                                 // [0x130d900] Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumCategoryEntry
/// Size: 0x0020 (0x000028 - 0x000048)
class UFortEmporiumCategoryEntry : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   Path                                                        OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   Hash                                                        OFFSET(getStruct<T>, {0x38, 16, 0, 0})
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumItemListMenu
/// Size: 0x0590 (0x000400 - 0x000990)
class UFortEmporiumItemListMenu : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2448;

public:
	CMember(class UClass*)                             PanelDataClass                                              OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(class UDataTable*)                         ItemListCategorySource                                      OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(class UFortCreativeItemListPanelData*)     ItemListPanelData                                           OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(class UClass*)                             InventoryTabClass                                           OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(class UClass*)                             LevelManagementTabClass                                     OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(class UClass*)                             HomeTabClass                                                OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(class UClass*)                             InventoryTabButton                                          OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(TMap<FName, FText>)                        Map_CreativeBetaTagNames                                    OFFSET(get<T>, {0x468, 80, 0, 0})
	CMember(class UFortEmporiumItemListTabPanel*)      ChestTabPanel                                               OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(class UFortCreativeLevelManagementTabPanel*) LevelManagementTabPanel                                   OFFSET(get<T>, {0x4C0, 8, 0, 0})
	CMember(class UFortEmporiumHomeTabPanel*)          HomeTabPanel                                                OFFSET(get<T>, {0x4C8, 8, 0, 0})
	CMember(class UFortEmporiumItemListTabPanel*)      FabTabPanel                                                 OFFSET(get<T>, {0x4D0, 8, 0, 0})
	CMember(class UFortEmporiumItemListTabPanel*)      SubItemsTabPanel                                            OFFSET(get<T>, {0x4D8, 8, 0, 0})
	SMember(FName)                                     FabTabNameId                                                OFFSET(getStruct<T>, {0x4E0, 4, 0, 0})
	SMember(FFortTabButtonLabelInfo)                   TabButtonLabelInfo                                          OFFSET(getStruct<T>, {0x4F0, 272, 0, 0})
	SMember(FAthenaMapScreenContainerTabInfo)          MapScreenContainerTabInfo                                   OFFSET(getStruct<T>, {0x600, 72, 0, 0})
	DMember(bool)                                      bIsDefaultActiveTab                                         OFFSET(get<bool>, {0x648, 1, 0, 0})
	DMember(bool)                                      bAddItemToInventoryOnEquip                                  OFFSET(get<bool>, {0x649, 1, 0, 0})
	DMember(bool)                                      bLoadItemsOnInitialized                                     OFFSET(get<bool>, {0x64A, 1, 0, 0})
	DMember(int32_t)                                   LastUsedSlot                                                OFFSET(get<int32_t>, {0x64C, 4, 0, 0})
	CMember(TMap<FName, UFortCreativeContentBrowserTabPanelBase*>) TabMap                                          OFFSET(get<T>, {0x658, 80, 0, 0})
	CMember(TArray<class UFortEmporiumItemDefinition*>) EmporiumItemDefinitionList                                 OFFSET(get<T>, {0x868, 16, 0, 0})
	CMember(class UCommonAnimatedSwitcher*)            Switcher_Categories                                         OFFSET(get<T>, {0x880, 8, 0, 0})
	CMember(class UWidgetSwitcher*)                    Switcher_ItemTabWarnings                                    OFFSET(get<T>, {0x888, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_ChestEmpty                                          OFFSET(get<T>, {0x890, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_TabEmpty                                            OFFSET(get<T>, {0x898, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_DownloadingFabCategories                            OFFSET(get<T>, {0x8A0, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_FabCategoriesNotLoaded                              OFFSET(get<T>, {0x8A8, 8, 0, 0})
	CMember(class UWidgetSwitcher*)                    Switcher_CommandBar                                         OFFSET(get<T>, {0x8B0, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_ChestCommands                                       OFFSET(get<T>, {0x8B8, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_VendCommands                                        OFFSET(get<T>, {0x8C0, 8, 0, 0})
	CMember(class UFortCreativeMenuQuickbar*)          MenuQuickbar_QuickBars                                      OFFSET(get<T>, {0x8C8, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_ResetChest                                           OFFSET(get<T>, {0x8D0, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_CreateChest                                          OFFSET(get<T>, {0x8D8, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_AddToQuickBar                                        OFFSET(get<T>, {0x8E0, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_OpenItem                                             OFFSET(get<T>, {0x8E8, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_PlaceNow                                             OFFSET(get<T>, {0x8F0, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Equip                                                OFFSET(get<T>, {0x8F8, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_AddToChest                                           OFFSET(get<T>, {0x900, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Drop                                                 OFFSET(get<T>, {0x908, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_CreateLlama                                          OFFSET(get<T>, {0x910, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_RemoveFromChest                                      OFFSET(get<T>, {0x918, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_SearchFilters                                       OFFSET(get<T>, {0x920, 8, 0, 0})
	CMember(class UCommonAnimatedSwitcher*)            Switcher_LeftPanel                                          OFFSET(get<T>, {0x928, 8, 0, 0})
	CMember(class UEmporiumBrowserFiltersPanel*)       FiltersPanel                                                OFFSET(get<T>, {0x930, 8, 0, 0})
	CMember(class UFortEmporiumItemDetailsPanel*)      SubTabItemDetailsPanel                                      OFFSET(get<T>, {0x938, 8, 0, 0})
	CMember(class UAthenaCustomizationPickerSortAndFilterBlade*) Blade_SortAndFilter                               OFFSET(get<T>, {0x940, 8, 0, 0})
	CMember(class UCommonVisibilitySwitcher*)          Switcher_SidePanels                                         OFFSET(get<T>, {0x948, 8, 0, 0})
	CMember(class UFortEmporiumItemDetailsPanel*)      ItemDetailsSidePanel_DefaultSidePanel                       OFFSET(get<T>, {0x950, 8, 0, 0})
	CMember(class UCommonVisibilitySwitcher*)          Switcher_ProductPage                                        OFFSET(get<T>, {0x958, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_ItemBrowser                                         OFFSET(get<T>, {0x960, 8, 0, 0})
	CMember(class UFortEmporiumItemDetailsPanel*)      ItemProductPagePanel                                        OFFSET(get<T>, {0x968, 8, 0, 0})
	CMember(class UWidgetSwitcher*)                    Switcher_InventoryPermission                                OFFSET(get<T>, {0x970, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_EmporiumPanel                                       OFFSET(get<T>, {0x978, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_InventoryNotAllowed                                 OFFSET(get<T>, {0x980, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_EditorDisconnected                                  OFFSET(get<T>, {0x988, 8, 0, 0})


	/// Functions
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.UpdatePermissionsDisplay
	// void UpdatePermissionsDisplay();                                                                                         // [0xb8929b8] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.UpdateDetailsPanel
	// void UpdateDetailsPanel();                                                                                               // [0xb8929a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.UpdateBackButtonText
	// void UpdateBackButtonText(bool bFilterFocus);                                                                            // [0xb8928cc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.SwitchItemDetailsPanel
	// void SwitchItemDetailsPanel(bool bUseLegacy);                                                                            // [0xb892808] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.SpawnContainer
	// void SpawnContainer(class UClass* SupplyDropClass);                                                                      // [0xb892730] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.SetSubTabOpened
	// void SetSubTabOpened(class UFortItemDefinition* ItemDefinition);                                                         // [0xb892658] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.SetIsItemCommandsEnabled
	// void SetIsItemCommandsEnabled(bool bInIsItemCommandEnabled);                                                             // [0xb892330] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.RefreshTabWarningState
	// void RefreshTabWarningState();                                                                                           // [0xb8918d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.PlaceSelectionInMoveTool
	// bool PlaceSelectionInMoveTool();                                                                                         // [0xb8918b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OpenSelection
	// bool OpenSelection();                                                                                                    // [0xb891890] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnUpdateCommandBarVisibility
	// void OnUpdateCommandBarVisibility(bool bShowBar);                                                                        // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnShowCategoryModal
	// void OnShowCategoryModal(bool bShowModal);                                                                               // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnSelectionOpened
	// void OnSelectionOpened(class UFortItemDefinition* SelectedItemDefinition);                                               // [0x130d900] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnSearchFiltersVisibilityChanged
	// void OnSearchFiltersVisibilityChanged(bool bIsVisible);                                                                  // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnQuickbarStateChanged
	// void OnQuickbarStateChanged(EFortContentBrowserQuickbarState State);                                                     // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnItemsLoaded
	// void OnItemsLoaded();                                                                                                    // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnItemEquipped
	// void OnItemEquipped(FFortItemEntry& EquippedItemEntry);                                                                  // [0x130d900] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnFabItemQueryComplete
	// void OnFabItemQueryComplete(bool bSuccess, FString JsonString);                                                          // [0xb891114] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnFabCategoryListLoaded
	// void OnFabCategoryListLoaded(bool bSuccess, FString JsonString);                                                         // [0xb890998] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnExitSubTab
	// void OnExitSubTab();                                                                                                     // [0x130d900] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnCursorModeChanged
	// void OnCursorModeChanged(bool bCursorModeEnabled, FName ActionName, class UUserWidget* CursorModeContentWidget);         // [0xb8907cc] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnCreativeQuickbarComponentLoaded
	// void OnCreativeQuickbarComponentLoaded();                                                                                // [0xa39a414] Final|Native|Public  
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnContentRatingFilterChanged
	// void OnContentRatingFilterChanged();                                                                                     // [0xb890460] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnBuiltInItemsLoaded
	// void OnBuiltInItemsLoaded();                                                                                             // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.NativeOnItemsRefreshed
	// void NativeOnItemsRefreshed();                                                                                           // [0xb8907b8] Final|Native|Public  
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.NativeOnItemsLoaded
	// void NativeOnItemsLoaded();                                                                                              // [0xb8907a4] Final|Native|Public  
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.NativeOnBuiltInItemsLoaded
	// void NativeOnBuiltInItemsLoaded();                                                                                       // [0xb890790] Final|Native|Public  
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.LoadFabItems
	// void LoadFabItems();                                                                                                     // [0xb89077c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.IsSubTabOpened
	// bool IsSubTabOpened();                                                                                                   // [0xb89073c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.InitializeTabs
	// void InitializeTabs();                                                                                                   // [0xb8906f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.InitializeFabTab
	// void InitializeFabTab();                                                                                                 // [0xb8906e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleTabSortButtonClicked
	// void HandleTabSortButtonClicked();                                                                                       // [0xb890640] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleTabSelected
	// void HandleTabSelected(FName TabID, bool bCaptureFocus);                                                                 // [0xb890500] Final|Native|Private|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleTabItemDetailClicked
	// void HandleTabItemDetailClicked(FName& TagID);                                                                           // [0xb890474] Final|Native|Private|HasOutParms 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleSortChanged
	// void HandleSortChanged();                                                                                                // [0xb890460] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleSortButtonClicked
	// void HandleSortButtonClicked(FName SortNameId, class UCommonButtonBase* NewButton);                                      // [0xb890324] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleSelectionChanged
	// void HandleSelectionChanged(class UFortCreativeContentBrowserTabPanelBase* Tab);                                         // [0xb890100] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleQuickbarStateChanged
	// void HandleQuickbarStateChanged(EFortContentBrowserQuickbarState State);                                                 // [0xb88ffa4] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleQuickbarPanelIsFocused
	// void HandleQuickbarPanelIsFocused(bool bIsFocused);                                                                      // [0xb88fee0] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleModalHitBlockerClicked
	// void HandleModalHitBlockerClicked();                                                                                     // [0xb88fea4] Final|Native|Private|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleItemThumbnailDownloaded
	// void HandleItemThumbnailDownloaded(class UFortEmporiumItemDefinition* ItemDefinition);                                   // [0xb88fde4] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleItemTagSelected
	// void HandleItemTagSelected(FName& TagID, bool bSelected);                                                                // [0xb88fcd4] Final|Native|Private|HasOutParms 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleItemDoubleClicked
	// void HandleItemDoubleClicked(FFortItemEntry& ItemEntry);                                                                 // [0xb88fad0] Final|Native|Private|HasOutParms 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleItemClicked
	// void HandleItemClicked(FFortItemEntry& ItemEntry);                                                                       // [0xb88f97c] Final|Native|Private|HasOutParms 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleGlobalSortPanelToggle
	// void HandleGlobalSortPanelToggle();                                                                                      // [0xb88f968] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleFilterPanelIsFocused
	// void HandleFilterPanelIsFocused(bool bIsFocused);                                                                        // [0xb88f734] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleFilterChanged
	// void HandleFilterChanged();                                                                                              // [0xb88f3d4] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleFilterButtonClicked
	// void HandleFilterButtonClicked(FName FilterNameId, class UCommonButtonBase* NewButton);                                  // [0xb88f298] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleEquipItem
	// void HandleEquipItem(FFortItemEntry& ItemEntry);                                                                         // [0xb88f1d4] Final|Native|Private|HasOutParms 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleChestItemCountChanged
	// void HandleChestItemCountChanged(int32_t Count);                                                                         // [0xb88f114] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleCategoryFocused
	// void HandleCategoryFocused(FName CategoryID);                                                                            // [0xb88ef78] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleCategoryActivated
	// void HandleCategoryActivated(FName CategoryID);                                                                          // [0xb88eeb8] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleAddSelectionToMoveToolComplete
	// void HandleAddSelectionToMoveToolComplete();                                                                             // [0xb88ed48] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.GetSubTabSelectedItemDefinition
	// class UFortItemDefinition* GetSubTabSelectedItemDefinition();                                                            // [0xb88ec1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.GetLastSelectedTabName
	// FName GetLastSelectedTabName();                                                                                          // [0xb88ebe0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.GetCurrentTab
	// class UFortCreativeContentBrowserTabPanelBase* GetCurrentTab();                                                          // [0xb88eb60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.GetCurrentSelection
	// FFortItemEntry GetCurrentSelection();                                                                                    // [0xb88eafc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.EquipSelection
	// bool EquipSelection();                                                                                                   // [0xb88e770] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.EquipItem
	// bool EquipItem(FFortItemEntry& ItemEntry);                                                                               // [0xb88e6a8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.DropItem
	// bool DropItem(FFortItemEntry& SelectedItem);                                                                             // [0xb88e5c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.CanEquip
	// bool CanEquip(FFortItemEntry& SelectedItem);                                                                             // [0xb88e498] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.CanDropItem
	// bool CanDropItem(FFortItemEntry& SelectedItem);                                                                          // [0xb88e3d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.CanAddToChest
	// bool CanAddToChest(FFortItemEntry& SelectedItem);                                                                        // [0xb88e308] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.AddSelectionToQuickBar
	// bool AddSelectionToQuickBar();                                                                                           // [0xb88e2dc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel
/// Size: 0x0418 (0x000448 - 0x000860)
class UFortEmporiumItemListTabPanel : public UFortCreativeContentBrowserTabPanelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2144;

public:
	SMember(FMulticastInlineDelegate)                  OnSourceItemCountChanged                                    OFFSET(getStruct<T>, {0x450, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnItemClickedDelegate                                       OFFSET(getStruct<T>, {0x460, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnItemDoubleClickedDelegate                                 OFFSET(getStruct<T>, {0x470, 16, 0, 0})
	CMember(class UAthenaCreativeItemTileView*)        CreativeTileView_ItemOptions                                OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Sort                                                 OFFSET(get<T>, {0x4B8, 8, 0, 0})
	SMember(FFortItemEntry)                            CurrentItemEntry                                            OFFSET(getStruct<T>, {0x4C0, 424, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnItemCountChanged                                          OFFSET(getStruct<T>, {0x668, 16, 0, 0})
	CMember(TArray<FFortItemEntry>)                    Items                                                       OFFSET(get<T>, {0x678, 16, 0, 0})
	CMember(TArray<FFortItemEntry>)                    SourceItems                                                 OFFSET(get<T>, {0x688, 16, 0, 0})
	CMember(class UFortEmporiumItemListMenu*)          EmporiumItemListMenuParent                                  OFFSET(get<T>, {0x848, 8, 0, 0})


	/// Functions
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.UpdateTabHeader
	// void UpdateTabHeader();                                                                                                  // [0x130d900] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.UpdateSortButton
	// void UpdateSortButton(FText& SortType);                                                                                  // [0x130d900] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.ShowTopButtonBar
	// void ShowTopButtonBar(bool bShow);                                                                                       // [0x130d900] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.ShowLegacyItemDetailsPanel
	// bool ShowLegacyItemDetailsPanel();                                                                                       // [0xb892718] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.SetActiveItemDetailTags
	// void SetActiveItemDetailTags(TArray<FName>& TagIDs);                                                                     // [0x130d900] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.RestoreLastSelection
	// void RestoreLastSelection();                                                                                             // [0xb892258] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.RemoveSelectedItem
	// void RemoveSelectedItem();                                                                                               // [0xb8918ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.ItemEquipped
	// void ItemEquipped(FFortItemEntry& Item);                                                                                 // [0x130d900] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.IsSubTabOpened
	// bool IsSubTabOpened();                                                                                                   // [0xb890754] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.IsEmpty
	// bool IsEmpty();                                                                                                          // [0xb890708] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.HandleItemDetailTagSelected
	// void HandleItemDetailTagSelected(FName& TagID);                                                                          // [0xb88fa40] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.GetSubTabSelectedItemDefinition
	// class UFortItemDefinition* GetSubTabSelectedItemDefinition();                                                            // [0xb88ec44] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.GetCollapseBorderPadFlagForCategory
	// bool GetCollapseBorderPadFlagForCategory();                                                                              // [0xb88e914] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.GetCardSizeForCategory
	// EFortItemCardSize GetCardSizeForCategory();                                                                              // [0xb88e840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.FocusCurrentSelection
	// void FocusCurrentSelection();                                                                                            // [0x130d900] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.ClearFilteredItems
	// void ClearFilteredItems();                                                                                               // [0xb88e5ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.ClearAllItems
	// void ClearAllItems();                                                                                                    // [0xb88e598] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.CanPlayerCreateInVolume
	// bool CanPlayerCreateInVolume();                                                                                          // [0xb88e560] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.AddItemToSource
	// void AddItemToSource(FFortItemEntry& ItemToAdd);                                                                         // [0xb88e1d8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.AddItem
	// void AddItem(FFortItemEntry& ItemToAdd);                                                                                 // [0xb88e114] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumUtilities
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortEmporiumUtilities : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/CreativeEmporiumUI.FortEmporiumUtilities.RequestLicenseText
	// void RequestLicenseText(EFortEmporiumItemLicense License, FDelegateProperty& Callback);                                  // [0xb892138] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumUtilities.RequestJSON
	// void RequestJSON(class UObject* WorldContextObject, FUniqueNetIdRepl& UniqueNetId, FString JSONURL, FDelegateProperty& Callback); // [0xb891900] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumUtilities.GetTextFromEmporiumLicense
	// FText GetTextFromEmporiumLicense(EFortEmporiumItemLicense License);                                                      // [0xb88ec80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CreativeEmporiumUI.FortEmporiumUtilities.GetCreativeTagLabel
	// FText GetCreativeTagLabel(FName& TagID, bool& bOutIsBeta);                                                               // [0xb88ea00] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/CreativeEmporiumUI.FortEmporiumUtilities.GetCreativeTagIDs
	// TArray<FName> GetCreativeTagIDs(class UFortItemDefinition* ItemDefinition);                                              // [0xb88e92c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CreativeEmporiumUI.FortEmporiumUtilities.GetCategoryDisplayName
	// FText GetCategoryDisplayName(FName& CategoryID);                                                                         // [0xb88e858] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/CreativeEmporiumUI.FortEmporiumItemData
/// Size: 0x00E8 (0x000000 - 0x0000E8)
class FFortEmporiumItemData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FString)                                   ID                                                          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Title                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   NameSpace                                                   OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   EntityType                                                  OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   ThumbnailURL                                                OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	DMember(float)                                     Price                                                       OFFSET(get<float>, {0x50, 4, 0, 0})
	SMember(FString)                                   BaseCurrency                                                OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FString)                                   SketchfabUID                                                OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	CMember(TArray<FName>)                             TagList                                                     OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(EFortEmporiumItemLicense)                  LicenseType                                                 OFFSET(get<T>, {0x88, 1, 0, 0})
	DMember(bool)                                      bRequiresEntitlement                                        OFFSET(get<bool>, {0x89, 1, 0, 0})
	SMember(FString)                                   VersePath                                                   OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	CMember(TArray<FString>)                           AssetIds                                                    OFFSET(get<T>, {0xA0, 16, 0, 0})
	DMember(int32_t)                                   FileSize                                                    OFFSET(get<int32_t>, {0xB0, 4, 0, 0})
	SMember(FString)                                   Description                                                 OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FString)                                   Seller                                                      OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	DMember(int32_t)                                   MaterialCount                                               OFFSET(get<int32_t>, {0xD8, 4, 0, 0})
	DMember(int32_t)                                   PolygonCount                                                OFFSET(get<int32_t>, {0xDC, 4, 0, 0})
	DMember(int32_t)                                   vertexcount                                                 OFFSET(get<int32_t>, {0xE0, 4, 0, 0})
	DMember(int32_t)                                   ChildAssetCount                                             OFFSET(get<int32_t>, {0xE4, 4, 0, 0})
};

/// Struct /Script/CreativeEmporiumUI.FortEmporiumItemLicenseData
/// Size: 0x0048 (0x000000 - 0x000048)
class FFortEmporiumItemLicenseData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FName)                                     ID                                                          OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FString)                                   Keyword                                                     OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FText)                                     Name                                                        OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	CMember(EFortEmporiumItemLicense)                  License                                                     OFFSET(get<T>, {0x30, 1, 0, 0})
	SMember(FString)                                   URL                                                         OFFSET(getStruct<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/CreativeEmporiumUI.FortEmporiumSortEntry
/// Size: 0x0020 (0x000000 - 0x000020)
class FFortEmporiumSortEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	CMember(EFortEmporiumItemSortMode)                 Mode                                                        OFFSET(get<T>, {0x18, 1, 0, 0})
};

/// Struct /Script/CreativeEmporiumUI.FortEmporiumPriceFilterEntry
/// Size: 0x0028 (0x000000 - 0x000028)
class FFortEmporiumPriceFilterEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     ID                                                          OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(EFortEmporiumItemPriceFilter)              Filter                                                      OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/CreativeEmporiumUI.FortEmporiumFilterEntry
/// Size: 0x0028 (0x000000 - 0x000028)
class FFortEmporiumFilterEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     ID                                                          OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FText)                                     TextRoot                                                    OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(EFortEmporiumItemFilterMode)               Mode                                                        OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/CreativeEmporiumUI.FortEmporiumFilterCategory
/// Size: 0x0020 (0x000000 - 0x000020)
class FFortEmporiumFilterCategory : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     ID                                                          OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     ParentID                                                    OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(bool)                                      bIsTab                                                      OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bShowCategoryModal                                          OFFSET(get<bool>, {0x9, 1, 0, 0})
	CMember(TArray<FName>)                             SubcategoryIDList                                           OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Enum /Script/CreativeEmporiumUI.EFortEmporiumItemSortMode
/// Size: 0x08
enum EFortEmporiumItemSortMode : uint8_t
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
enum EFortEmporiumItemFilterMode : uint8_t
{
	EFortEmporiumItemFilterMode__Price                                               = 0,
	EFortEmporiumItemFilterMode__License                                             = 1,
	EFortEmporiumItemFilterMode__EFortEmporiumItemFilterMode_MAX                     = 2
};

/// Enum /Script/CreativeEmporiumUI.EFortEmporiumItemPriceFilter
/// Size: 0x05
enum EFortEmporiumItemPriceFilter : uint8_t
{
	EFortEmporiumItemPriceFilter__Invalid                                            = 0,
	EFortEmporiumItemPriceFilter__Free                                               = 1,
	EFortEmporiumItemPriceFilter__Premium                                            = 2,
	EFortEmporiumItemPriceFilter__All                                                = 255,
	EFortEmporiumItemPriceFilter__EFortEmporiumItemPriceFilter_MAX                   = 256
};

/// Enum /Script/CreativeEmporiumUI.EFortEmporiumItemLicense
/// Size: 0x11
enum EFortEmporiumItemLicense : uint8_t
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

