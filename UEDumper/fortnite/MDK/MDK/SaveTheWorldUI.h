
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: BlueprintContext
/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameFeatures
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: MediaAssets
/// dependency: SaveTheWorldRuntime
/// dependency: SlateCore
/// dependency: UMG

/// Class /Script/SaveTheWorldUI.FortQuestMapViewer
/// Size: 0x0080 (0x0002E8 - 0x000368)
class UFortQuestMapViewer : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	CMember(class UCommonButtonBase*)                  Button_PageRight                                            OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_PageLeft                                             OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Title                                                  OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Page                                                   OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class USizeBox*)                           SizeBox_Viewer                                              OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UCanvasPanel*)                       CanvasPanel_Cosmetic                                        OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UFortQuestMapScreen*)                ParentScreen                                                OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class UFortQuestMapNodeLayout*)            NodeLayout                                                  OFFSET(get<T>, {0x330, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapViewer.UpdateViewerData
	// void UpdateViewerData();                                                                                                 // [0xc126d6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapViewer.OnTryUpdateUserWidgetColor
	// void OnTryUpdateUserWidgetColor(class UUserWidget* Widget, FSlateColor OverrideColor);                                   // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapViewer.OnPlayLayoutOutroAnimation
	// void OnPlayLayoutOutroAnimation(EViewerNavigationDirection TravelDirection);                                             // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapViewer.OnPlayLayoutFadeInAnimation
	// void OnPlayLayoutFadeInAnimation();                                                                                      // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapViewer.HandleLayoutOutroAnimationFinished
	// void HandleLayoutOutroAnimationFinished();                                                                               // [0xc12161c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortArmoryScreen
/// Size: 0x0000 (0x000400 - 0x000400)
class UFortArmoryScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:


	/// Functions
	// Function /Script/SaveTheWorldUI.FortArmoryScreen.PushItemManagementScreen
	// void PushItemManagementScreen(EFortFrontendInventoryFilter ItemManagementFilter, class UFortItem* ItemToSelect, bool bShowAutoMulch); // [0xc124b8c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortArmoryScreen.PushItemInspectionScreen
	// void PushItemInspectionScreen(class UFortItem* ItemToInspect, EFortItemInspectionMode Mode, class UFortItemTileView* CycleTileView, bool bReadOnly, bool bAllowFavoriting, bool bIsTemporaryItem, bool bAllowRarityUpgrading); // [0xc124964] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortArmoryScreen.PushHeroLoadoutScreen
	// void PushHeroLoadoutScreen(class UFortCampaignHeroLoadoutItem* HeroLoadout);                                             // [0xc12481c] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortArmoryScreen_Legacy
/// Size: 0x0000 (0x000570 - 0x000570)
class UFortArmoryScreen_Legacy : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
};

/// Class /Script/SaveTheWorldUI.FortCommandScreen
/// Size: 0x0028 (0x000400 - 0x000428)
class UFortCommandScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1064;

public:
	SMember(FDataTableRowHandle)                       ShowAllStatsActionData                                      OFFSET(getStruct<T>, {0x400, 16, 0, 0})
	SMember(FDataTableRowHandle)                       InspectHeroActionData                                       OFFSET(getStruct<T>, {0x410, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCommandScreen.PushItemInspectionScreen
	// void PushItemInspectionScreen(class UFortItem* ItemToInspect, EFortItemInspectionMode Mode, class UFortItemTileView* CycleTileView, bool bReadOnly, bool bAllowFavoriting, bool bIsTemporaryItem, bool bAllowRarityUpgrading); // [0xc124964] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCommandScreen.PushHeroLoadoutScreen
	// void PushHeroLoadoutScreen(class UFortCampaignHeroLoadoutItem* HeroLoadout);                                             // [0xc12481c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCommandScreen.HandleUpgradeInspectHero
	// void HandleUpgradeInspectHero();                                                                                         // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCommandScreen.HandleShowAllStats
	// void HandleShowAllStats();                                                                                               // [0x3d1d968] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget
/// Size: 0x0018 (0x0002E8 - 0x000300)
class UFortCollectionBookGenericRewardWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	DMember(bool)                                      bUpdateVisibilityBasedOnRewardExistence                     OFFSET(get<bool>, {0x2E8, 1, 1, 0})
	CMember(ESlateVisibility)                          VisibilityWhenNoRewardSpecified                             OFFSET(get<T>, {0x2EC, 1, 0, 0})
	CMember(ESlateVisibility)                          VisibilityWhenRewardSpecified                               OFFSET(get<T>, {0x2ED, 1, 0, 0})
	CMember(class UFortCollectionBookRewardCardWidget*) RewardCardWidget                                           OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(ECollectionBookRewardStatus)               RewardStatus                                                OFFSET(get<T>, {0x2F8, 1, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget.SetRewardStatus
	// void SetRewardStatus(ECollectionBookRewardStatus Status);                                                                // [0x6fcc24c] Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget.SetRewards
	// void SetRewards(FFortRewardInfo& Rewards);                                                                               // [0xc126860] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget.SetCurrentItemToDisplay
	// void SetCurrentItemToDisplay(class UFortItem* ItemToDisplay);                                                            // [0xc125d70] Native|Protected     
	// Function /Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget.OnRewardStatusChanged
	// void OnRewardStatusChanged(ECollectionBookRewardStatus NewStatus);                                                       // [0xc123b28] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget.HasRewards
	// bool HasRewards();                                                                                                       // [0xa110858] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget.GetRewardStatus
	// ECollectionBookRewardStatus GetRewardStatus();                                                                           // [0xad976a8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget.ClearRewards
	// void ClearRewards();                                                                                                     // [0x9aefd20] Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookHelpWidget
/// Size: 0x0000 (0x000570 - 0x000570)
class UFortCollectionBookHelpWidget : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookItemPopupMenu
/// Size: 0x0008 (0x000558 - 0x000560)
class UFortCollectionBookItemPopupMenu : public UFortPopupMenu_Legacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookItemPopupMenu.HandleItemUpdated
	// void HandleItemUpdated();                                                                                                // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookItemPopupMenu.HandleItemChanged
	// void HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);                                  // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookItemPopupMenu.GetHostButton
	// class UFortCollectionBookSlotButton* GetHostButton();                                                                    // [0xc1200f8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortCollectionBookItemPopupMenu.CanItemBeUnslotted
	// bool CanItemBeUnslotted();                                                                                               // [0xc11fa70] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookItemPopupMenu.CanItemBePurchased
	// bool CanItemBePurchased();                                                                                               // [0xc11fa1c] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookOverviewWidget
/// Size: 0x0048 (0x0002E8 - 0x000330)
class UFortCollectionBookOverviewWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FMulticastInlineDelegate)                  OnCollectionBookPageSelected                                OFFSET(getStruct<T>, {0x2E8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCollectionBookPageClicked                                 OFFSET(getStruct<T>, {0x2F8, 16, 0, 0})
	CMember(class UFortCollectionBookPage*)            LastSelectedPage                                            OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UFortCollectionBookCategory*)        LastSelectedCategory                                        OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(TArray<class UFortCollectionBookCategory*>) CategoryObjectPool                                         OFFSET(get<T>, {0x318, 16, 0, 0})
	CMember(class UCommonTreeView*)                    PageTreeViewWidget                                          OFFSET(get<T>, {0x328, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookOverviewWidget.OnDeactivated
	// void OnDeactivated();                                                                                                    // [0x1f2db84] Native|Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookOverviewWidget.OnActivated
	// void OnActivated();                                                                                                      // [0x134b420] Native|Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookOverviewWidget.HandlePagesChanged
	// void HandlePagesChanged(class UFortCollectionBookManager* CBManager);                                                    // [0xc121768] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookPageCompletionRewardWidget
/// Size: 0x0000 (0x000300 - 0x000300)
class UFortCollectionBookPageCompletionRewardWidget : public UFortCollectionBookGenericRewardWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookPageDetailsWidget
/// Size: 0x0068 (0x0002E8 - 0x000350)
class UFortCollectionBookPageDetailsWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	CMember(class UCommonTextBlock*)                   PageCompletionText                                          OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UFortMaterialProgressBar*)           ProgressBar                                                 OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UFortCollectionBookPageCompletionRewardWidget*) PageRewardWidget                                 OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UCommonButtonLegacy*)                RewardDetailsButton                                         OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UFortCollectionBookPage*)            DetailsPage                                                 OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   RewardDetailsModalWidgetClass                               OFFSET(get<T>, {0x310, 32, 0, 0})
	SMember(FText)                                     ModalTitle                                                  OFFSET(getStruct<T>, {0x330, 24, 0, 0})
	CMember(class UFortCollectionBookRewardModalWidget*) RewardDetailsModalWidget                                  OFFSET(get<T>, {0x348, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookPageDetailsWidget.OnUnslotItemComplete
	// void OnUnslotItemComplete(class UFortAccountItem* SlottedItem, class UFortAccountItem* OldItem, FName SlotId);           // [0xc124594] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPageDetailsWidget.OnSlotItemComplete
	// void OnSlotItemComplete(class UFortAccountItem* SlottedItem, FName SlotId);                                              // [0xc124200] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPageDetailsWidget.OnPageProgressionUpdated
	// void OnPageProgressionUpdated(int32_t TotalFilledSlots, int32_t TotalSlots, EFortCollectionBookState State);             // [0xc123230] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPageDetailsWidget.OnDetailsPageChanged
	// void OnDetailsPageChanged(class UFortCollectionBookPage* InNewDetailsPage);                                              // [0x90d37d8] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPageDetailsWidget.HandleRewardDetailsModalWidgetDeactivated
	// void HandleRewardDetailsModalWidgetDeactivated(class UCommonActivatablePanelLegacy* DeactivatedPanel);                   // [0xc1220bc] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookPageListWidget
/// Size: 0x0030 (0x0014E0 - 0x001510)
class UFortCollectionBookPageListWidget : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5392;

public:
	CMember(class UCommonTextBlock*)                   PageNameWidget                                              OFFSET(get<T>, {0x14E8, 8, 0, 0})
	CMember(class UCommonNumericTextBlock*)            AvailableSlotsWidget                                        OFFSET(get<T>, {0x14F0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   PageCompletionWidget                                        OFFSET(get<T>, {0x14F8, 8, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  AssociatedPageOrCategory                                    OFFSET(get<T>, {0x1500, 8, 0, 0})
	DMember(bool)                                      bIsExpanded                                                 OFFSET(get<bool>, {0x1508, 1, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookPageListWidget.SetupAsPage
	// void SetupAsPage(class UFortCollectionBookPage* Page);                                                                   // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPageListWidget.SetupAsCategory
	// void SetupAsCategory(class UFortCollectionBookCategory* Category);                                                       // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPageListWidget.OnSlottedItemOperationComplete
	// void OnSlottedItemOperationComplete(class UFortAccountItem* SlottedItem, FName SlotId);                                  // [0xc1242b8] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPageListWidget.OnPageDetailsUpdated
	// void OnPageDetailsUpdated(int32_t AvailableSlots, int32_t FilledSlots, int32_t TotalSlots, EFortCollectionBookState State); // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPageListWidget.OnCategoryDetailsUpdated
	// void OnCategoryDetailsUpdated(int32_t AvailableSlots, int32_t FilledSlots, int32_t TotalSlots);                          // [0x3d1d968] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookPicker
/// Size: 0x0028 (0x000420 - 0x000448)
class UFortCollectionBookPicker : public UFortItemPickerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	CMember(class UClass*)                             MulchConfirmationModalClass                                 OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(class UFortAccountItem*)                   CurrentSlottedItem                                          OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(class UFortMulchConfirmationModalWidget*)  MulchConfirmationModal                                      OFFSET(get<T>, {0x440, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookPicker.ShowMulchDialogForItem
	// void ShowMulchDialogForItem(class UFortItem* ItemToMulch);                                                               // [0xc126b90] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPicker.ShowMulchConfirmationModal
	// void ShowMulchConfirmationModal();                                                                                       // [0xc126b74] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPicker.OnCollectComplete
	// void OnCollectComplete();                                                                                                // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPicker.NotifyPanelDeactivated
	// void NotifyPanelDeactivated();                                                                                           // [0xc12294c] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPicker.NotifyPanelActivated
	// void NotifyPanelActivated();                                                                                             // [0xc122930] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPicker.HideMulchConfirmationModal
	// void HideMulchConfirmationModal();                                                                                       // [0xc1226d0] Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel
/// Size: 0x00C8 (0x000400 - 0x0004C8)
class UFortCollectionBookPrimaryPanel : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1224;

public:
	SMember(FMulticastInlineDelegate)                  OnCollectionBookPageSelectedDelegate                        OFFSET(getStruct<T>, {0x400, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCollectionBookPageClickedDelegate                         OFFSET(getStruct<T>, {0x410, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCollectionBookSectionClickedDelegate                      OFFSET(getStruct<T>, {0x420, 16, 0, 0})
	SMember(FDataTableRowHandle)                       BackActionRowHandle                                         OFFSET(getStruct<T>, {0x430, 16, 0, 0})
	SMember(FDataTableRowHandle)                       SummonInfoPanelActionRowHandle                              OFFSET(getStruct<T>, {0x440, 16, 0, 0})
	CMember(class UFortCollectionBookOverviewWidget*)  OverviewWidget                                              OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(class UCommonTileView*)                    SectionTileViewWidget                                       OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(ECollectionBookPrimaryNavTarget)           CurrentNavTarget                                            OFFSET(get<T>, {0x460, 1, 0, 0})
	CMember(class UFortCollectionBookSection*)         LastClickedSection                                          OFFSET(get<T>, {0x468, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnSummonInfoPanelExecuted
	// void OnSummonInfoPanelExecuted(bool& bPassThrough);                                                                      // [0x6fc9078] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType CurrentInputType);                                                            // [0xc122cc4] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnCollectionBookSectionClicked
	// void OnCollectionBookSectionClicked(class UFortCollectionBookSection* ClickedSection);                                   // [0xa3c7a54] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnCollectionBookPageSelected
	// void OnCollectionBookPageSelected(class UFortCollectionBookPage* SelectedPage);                                          // [0xa111710] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnCollectionBookPageClicked
	// void OnCollectionBookPageClicked(class UFortCollectionBookPage* ClickedPage);                                            // [0xc122b18] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnBackActionExecuted
	// void OnBackActionExecuted();                                                                                             // [0xc122968] Final|Native|Public  
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy
/// Size: 0x00C0 (0x000538 - 0x0005F8)
class UFortCollectionBookPrimaryPanel_Legacy : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1528;

public:
	SMember(FMulticastInlineDelegate)                  OnCollectionBookPageSelectedDelegate                        OFFSET(getStruct<T>, {0x538, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCollectionBookPageClickedDelegate                         OFFSET(getStruct<T>, {0x548, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCollectionBookSectionClickedDelegate                      OFFSET(getStruct<T>, {0x558, 16, 0, 0})
	SMember(FDataTableRowHandle)                       BackActionRowHandle                                         OFFSET(getStruct<T>, {0x568, 16, 0, 0})
	SMember(FDataTableRowHandle)                       SummonInfoPanelActionRowHandle                              OFFSET(getStruct<T>, {0x578, 16, 0, 0})
	CMember(class UFortCollectionBookOverviewWidget*)  OverviewWidget                                              OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(class UCommonTileView*)                    SectionTileViewWidget                                       OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(ECollectionBookPrimaryNavTarget)           CurrentNavTarget                                            OFFSET(get<T>, {0x598, 1, 0, 0})
	CMember(class UFortCollectionBookSection*)         LastClickedSection                                          OFFSET(get<T>, {0x5A0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy.OnSummonInfoPanelExecuted
	// void OnSummonInfoPanelExecuted(bool& bPassThrough);                                                                      // [0xa3c5d58] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType CurrentInputType);                                                            // [0xc122d48] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy.OnCollectionBookSectionClicked
	// void OnCollectionBookSectionClicked(class UFortCollectionBookSection* ClickedSection);                                   // [0xbc4ae34] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy.OnCollectionBookPageSelected
	// void OnCollectionBookPageSelected(class UFortCollectionBookPage* SelectedPage);                                          // [0xc122b9c] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy.OnCollectionBookPageClicked
	// void OnCollectionBookPageClicked(class UFortCollectionBookPage* ClickedPage);                                            // [0xbc4aeb8] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy.OnBackActionExecuted
	// void OnBackActionExecuted(bool& bPassThrough);                                                                           // [0xc12297c] Final|Native|Public|HasOutParms 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardDetailInspectWidget
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UFortCollectionBookProgressionRewardDetailInspectWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	CMember(class UCommonNumericTextBlock*)            LevelTextWidget                                             OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UFortRewardInfoWidget_Legacy*)       RewardWidget                                                OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UWidget*)                            CheckmarkImage                                              OFFSET(get<T>, {0x2F8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardDetailInspectWidget.SetAssociatedLevel
	// void SetAssociatedLevel(int32_t Level);                                                                                  // [0xc125bf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardDetailInspectWidget.OnXPRequiredChanged
	// void OnXPRequiredChanged(int32_t NewXPRequired);                                                                         // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardDetailInspectWidget.GetXPRequired
	// int32_t GetXPRequired();                                                                                                 // [0xa442064] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardsModalWidget
/// Size: 0x0060 (0x000570 - 0x0005D0)
class UFortCollectionBookProgressionRewardsModalWidget : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
	CMember(TWeakObjectPtr<UClass*>)                   RewardWidgetClass                                           OFFSET(get<T>, {0x570, 32, 0, 0})
	SMember(FMargin)                                   RewardWidgetPadding                                         OFFSET(getStruct<T>, {0x590, 16, 0, 0})
	DMember(int32_t)                                   NumRewardsToShow                                            OFFSET(get<int32_t>, {0x5A0, 4, 0, 0})
	CMember(class UVerticalBox*)                       RewardBoxWidget                                             OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(class UVerticalBox*)                       MajorRewardBoxWidget                                        OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   XPTextWidget                                                OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(class UCommonNumericTextBlock*)            LevelTextWidget                                             OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(class UCommonButtonGroupLegacy*)           ButtonGroup                                                 OFFSET(get<T>, {0x5C8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardsModalWidget.OnSelectedButtonChanged
	// void OnSelectedButtonChanged(class UCommonButtonLegacy* SelectedButton, int32_t ButtonIndex);                            // [0xc123ca8] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardsModalWidget.OnLevelProgressionSet
	// void OnLevelProgressionSet(int32_t CurrentLevel, float NextLvlPct, int32_t MaxAchievedLevel);                            // [0xc123040] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardsModalWidget.InspectItemBP
	// void InspectItemBP(class UFortItem* Item);                                                                               // [0x3d1d968] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardsPreviewWidget
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortCollectionBookProgressionRewardsPreviewWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(class UFortCollectionBookProgressionRewardWidget*) NextRewardWidget                                    OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UFortCollectionBookProgressionRewardWidget*) NextMajorRewardWidget                               OFFSET(get<T>, {0x2F0, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardWidget
/// Size: 0x0010 (0x000300 - 0x000310)
class UFortCollectionBookProgressionRewardWidget : public UFortCollectionBookGenericRewardWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(class UCommonNumericTextBlock*)            LevelTextWidget                                             OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   DisplayNameWidget                                           OFFSET(get<T>, {0x308, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardWidget.SetAssociatedLevel
	// void SetAssociatedLevel(int32_t Level);                                                                                  // [0xc125c70] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookProgressWidget
/// Size: 0x0058 (0x0002E8 - 0x000340)
class UFortCollectionBookProgressWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	DMember(int32_t)                                   CachedXPLevel                                               OFFSET(get<int32_t>, {0x2E8, 4, 0, 0})
	DMember(float)                                     CachedXPCompletionPct                                       OFFSET(get<float>, {0x2EC, 4, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   RewardDetailsModalWidgetClass                               OFFSET(get<T>, {0x2F0, 32, 0, 0})
	CMember(class UFortCollectionBookProgressionRewardsPreviewWidget*) ProgressionRewardsPreviewWidget             OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   XPTextWidget                                                OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UCommonNumericTextBlock*)            LevelTextWidget                                             OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UCommonButtonLegacy*)                DetailsButtonWidget                                         OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class UFortCollectionBookPageDetailsWidget*) PageDetailsWidget                                         OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(class UFortCollectionBookProgressionRewardsModalWidget*) DetailsModalWidget                            OFFSET(get<T>, {0x338, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.OnSlottedItemOperationComplete
	// void OnSlottedItemOperationComplete(class UFortAccountItem* ItemSlotted, FName SlotId);                                  // [0xc12437c] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.OnInventoryUpdated
	// void OnInventoryUpdated();                                                                                               // [0xc122e54] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.OnCollectionBookPreviewXPChange
	// void OnCollectionBookPreviewXPChange(float PreviewCompletionPct);                                                        // [0xb795ac0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.OnCollectionBookPageSelected
	// void OnCollectionBookPageSelected(class UFortCollectionBookPage* SelectedPage);                                          // [0x62e889c] Native|Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.OnCollectionBookLevelProgressionChanged
	// void OnCollectionBookLevelProgressionChanged(float NewCompletionPct);                                                    // [0xc122a94] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.OnCollectionBookLevelChanged
	// void OnCollectionBookLevelChanged(int32_t NewLevel);                                                                     // [0x8bf8db0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.HandleDetailsModalWidgetDeactivated
	// void HandleDetailsModalWidgetDeactivated(class UCommonActivatablePanelLegacy* DeactivatedPanel);                         // [0xc121484] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookRecycleSlotResultsWidget
/// Size: 0x0018 (0x0002E8 - 0x000300)
class UFortCollectionBookRecycleSlotResultsWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(class UPanelWidget*)                       RecycleResultsWidget                                        OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(EFortItemCardSize)                         ItemCardSize                                                OFFSET(get<T>, {0x2F0, 1, 0, 0})
	CMember(class UFortAccountItem*)                   ItemToRecycle                                               OFFSET(get<T>, {0x2F8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookRecycleSlotResultsWidget.SetCurrentItemToRecycle
	// void SetCurrentItemToRecycle(class UFortAccountItem* InItemToRecycle);                                                   // [0xc125df4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookRewardCardWidget
/// Size: 0x0088 (0x0002E8 - 0x000370)
class UFortCollectionBookRewardCardWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	SMember(FMulticastInlineDelegate)                  OnDisplayedItemChangedEvent                                 OFFSET(getStruct<T>, {0x2E8, 16, 0, 0})
	CMember(class UFortMultiSizeItemCard*)             ItemCardWidget                                              OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UWidget*)                            MultiItemRewardOverlay                                      OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UWidget*)                            ChoiceRewardOverlay                                         OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UWidget*)                            CheckmarkImage                                              OFFSET(get<T>, {0x310, 8, 0, 0})
	DMember(float)                                     UpdateCardInterval                                          OFFSET(get<float>, {0x318, 4, 0, 0})
	CMember(EFortItemCardSize)                         ItemCardSize                                                OFFSET(get<T>, {0x31C, 1, 0, 0})
	DMember(bool)                                      bDisplayAsRewardCard                                        OFFSET(get<bool>, {0x31D, 1, 0, 0})
	SMember(FFortRewardInfo)                           RepresentedRewards                                          OFFSET(getStruct<T>, {0x320, 48, 0, 0})
	CMember(TArray<class UFortItem*>)                  DummyItems                                                  OFFSET(get<T>, {0x350, 16, 0, 0})
	SMember(FTimerHandle)                              UpdateCardTimer                                             OFFSET(getStruct<T>, {0x360, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookRewardCardWidget.SetRewards
	// void SetRewards(FFortRewardInfo& Rewards);                                                                               // [0xc126958] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookRewardCardWidget.OnDisplayedItemChangedEvent__DelegateSignature
	// void OnDisplayedItemChangedEvent__DelegateSignature(class UFortItem* DisplayedItem);                                     // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/SaveTheWorldUI.FortCollectionBookRewardCardWidget.HasRewards
	// bool HasRewards();                                                                                                       // [0x81c6660] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortCollectionBookRewardCardWidget.ClearRewards
	// void ClearRewards();                                                                                                     // [0x134b420] Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookRewardModalWidget
/// Size: 0x0050 (0x000538 - 0x000588)
class UFortCollectionBookRewardModalWidget : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1416;

public:
	CMember(class UCommonTextBlock*)                   TitleWidget                                                 OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(class UFortRewardInfoWidget_Legacy*)       RewardWidget                                                OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(class UFortMaterialProgressBar*)           ProgressBar                                                 OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   ProgressTextWidget                                          OFFSET(get<T>, {0x550, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookSectionCompletionRewardWidget
/// Size: 0x0050 (0x000300 - 0x000350)
class UFortCollectionBookSectionCompletionRewardWidget : public UFortCollectionBookGenericRewardWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	CMember(class UCommonButtonLegacy*)                RewardDetailsButton                                         OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   RewardDetailsModalWidgetClass                               OFFSET(get<T>, {0x308, 32, 0, 0})
	SMember(FText)                                     ModalTitle                                                  OFFSET(getStruct<T>, {0x328, 24, 0, 0})
	CMember(class UFortCollectionBookRewardModalWidget*) RewardDetailsModalWidget                                  OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(class UFortCollectionBookSection*)         Section                                                     OFFSET(get<T>, {0x348, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionCompletionRewardWidget.HandleRewardDetailsModalWidgetDeactivated
	// void HandleRewardDetailsModalWidgetDeactivated(class UCommonActivatablePanelLegacy* DeactivatedPanel);                   // [0xc12213c] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookSectionPanel
/// Size: 0x01D0 (0x000538 - 0x000708)
class UFortCollectionBookSectionPanel : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1800;

public:
	SMember(FMulticastInlineDelegate)                  OnSectionCloseRequest                                       OFFSET(getStruct<T>, {0x538, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPreviewXPChangeEvent                                      OFFSET(getStruct<T>, {0x548, 16, 0, 0})
	CMember(class UCommonTextBlock*)                   SectionNameTextWidget                                       OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(class UFortCollectionBookSlotView*)        SlotViewWidget                                              OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(class UFortCollectionBookPicker*)          SlotItemPicker                                              OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(class UWidget*)                            ContextOverlayWidget                                        OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(class UTextBlock*)                         ContextTextWidget                                           OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(class UFortCollectionBookSectionCompletionRewardWidget*) SectionRewardWidget                           OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(class UWidget*)                            ItemAcquisitionSourceContainerWidget                        OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   ItemAcquisitionSourceDescWidget                             OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   ItemAcquisitionSourceDesc2Widget                            OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(class UWidget*)                            ResearchRecruitUnslotContainerWidget                        OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   PersonRecruitUnavailableMessageWidget                       OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   ItemResearchUnavailableMessageWidget                        OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   UnslotUnavailableMessageWidget                              OFFSET(get<T>, {0x5B8, 8, 0, 0})
	SMember(FDataTableRowHandle)                       BackActionRowHandle                                         OFFSET(getStruct<T>, {0x5C0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       CloseActionRowHandle                                        OFFSET(getStruct<T>, {0x5D0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       SlotItemActionRowHandle                                     OFFSET(getStruct<T>, {0x5E0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       InspectItemActionRowHandle                                  OFFSET(getStruct<T>, {0x5F0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       InspectCollectionBookItemActionRowHandle                    OFFSET(getStruct<T>, {0x600, 16, 0, 0})
	SMember(FDataTableRowHandle)                       InspectPreviewItemActionRowHandle                           OFFSET(getStruct<T>, {0x610, 16, 0, 0})
	SMember(FDataTableRowHandle)                       OpenPickerActionRowHandle                                   OFFSET(getStruct<T>, {0x620, 16, 0, 0})
	SMember(FDataTableRowHandle)                       LogAllowedItemsActionRowHandle                              OFFSET(getStruct<T>, {0x630, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ResearchItemActionRowHandle                                 OFFSET(getStruct<T>, {0x640, 16, 0, 0})
	SMember(FDataTableRowHandle)                       RecruitActionRowHandle                                      OFFSET(getStruct<T>, {0x650, 16, 0, 0})
	SMember(FDataTableRowHandle)                       UnslotItemActionRowHandle                                   OFFSET(getStruct<T>, {0x660, 16, 0, 0})
	CMember(ECollectionBookSectionNavTarget)           CurrentNavTarget                                            OFFSET(get<T>, {0x670, 1, 0, 0})
	CMember(class UFortCollectionBookSection*)         AssociatedSection                                           OFFSET(get<T>, {0x678, 8, 0, 0})
	DMember(bool)                                      bHasSummonedPanel                                           OFFSET(get<bool>, {0x680, 1, 0, 0})
	SMember(FFortDialogExternalLatentActionHandle)     SlotConfirmationDialogLatentHandle                          OFFSET(getStruct<T>, {0x684, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnShowItemDetailEvent                                       OFFSET(getStruct<T>, {0x688, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSlotItemConfirmEvent                                      OFFSET(getStruct<T>, {0x698, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnResearchItemConfirmEvent                                  OFFSET(getStruct<T>, {0x6A8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnUnslotItemConfirmEvent                                    OFFSET(getStruct<T>, {0x6B8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInspectItemEvent                                          OFFSET(getStruct<T>, {0x6C8, 16, 0, 0})
	CMember(class UClass*)                             SlotConfirmationModalClass                                  OFFSET(get<T>, {0x700, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnUnslotItemOperationComplete
	// void OnUnslotItemOperationComplete(class UFortAccountItem* UnslottedItem, class UFortAccountItem* OldSlottedItem, FName SlotId); // [0xc12468c] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnUnslotItemComplete
	// void OnUnslotItemComplete(class UFortItem* UnslottedItem, FName SlotId);                                                 // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnUnslotItemActionExecuted
	// void OnUnslotItemActionExecuted(bool& bPassThrough);                                                                     // [0xc12450c] Final|Native|Protected|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlottedItemOperationComplete
	// void OnSlottedItemOperationComplete(class UFortAccountItem* SlottedItem, FName SlotId);                                  // [0xc124434] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlotItemActionExecuted
	// void OnSlotItemActionExecuted(bool& bPassThrough);                                                                       // [0xc124174] Final|Native|Protected|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlotButtonSelected
	// void OnSlotButtonSelected(class UFortCollectionBookSlotButton* SlotButton);                                              // [0xc1240f4] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlotButtonHovered
	// void OnSlotButtonHovered(int32_t ButtonIx);                                                                              // [0xc123fac] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlotButtonContextAction
	// void OnSlotButtonContextAction(EFortCollectionBookPopupButtonType ContextAction);                                        // [0xc123f2c] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnSectionChanged
	// void OnSectionChanged(class UFortCollectionBookSection* Section);                                                        // [0x9fade68] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnResearchItemOperationComplete
	// void OnResearchItemOperationComplete(class UFortAccountItem* NewItem, FString TemplateId);                               // [0xc123434] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnResearchItemAction__DelegateSignature
	// void OnResearchItemAction__DelegateSignature(class UFortItem* SelectedItem, FFortCollectionBookSlotData SlotData);       // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnPurchaseItemActionExecuted
	// void OnPurchaseItemActionExecuted(bool& bPassThrough);                                                                   // [0xc1233ac] Final|Native|Protected|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnOpenPickerActionExecuted
	// void OnOpenPickerActionExecuted(bool& bPassThrough);                                                                     // [0xc1231b0] Final|Native|Protected|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnLogAllowedItemsActionExecuted
	// void OnLogAllowedItemsActionExecuted(bool& bPassThrough);                                                                // [0xc12313c] Final|Native|Protected|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnItemInspectAction__DelegateSignature
	// void OnItemInspectAction__DelegateSignature(class UFortItem* SelectedItem, bool EnableItemActions, bool IsPlaceholderItem); // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnItemAction__DelegateSignature
	// void OnItemAction__DelegateSignature(class UFortItem* SelectedItem);                                                     // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnInspectActionExecuted
	// void OnInspectActionExecuted(bool& bPassThrough);                                                                        // [0xc122dcc] Final|Native|Protected|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnBackActionExecuted
	// void OnBackActionExecuted(bool& bPassThrough);                                                                           // [0xc122a08] Final|Native|Protected|HasOutParms 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookSectionTileWidget
/// Size: 0x0070 (0x0014E0 - 0x001550)
class UFortCollectionBookSectionTileWidget : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5456;

public:
	CMember(TWeakObjectPtr<UClass*>)                   SlotWidgetClass                                             OFFSET(get<T>, {0x14E8, 32, 0, 0})
	SMember(FMargin)                                   SlotWidgetPadding                                           OFFSET(getStruct<T>, {0x1508, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         SlotWidgetHorizontalAlignment                               OFFSET(get<T>, {0x1518, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           SlotWidgetVerticalAlignment                                 OFFSET(get<T>, {0x1519, 1, 0, 0})
	DMember(int32_t)                                   MaxNumSlotsSupported                                        OFFSET(get<int32_t>, {0x151C, 4, 0, 0})
	CMember(class UHorizontalBox*)                     SlotBoxWidget                                               OFFSET(get<T>, {0x1520, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   SectionNameWidget                                           OFFSET(get<T>, {0x1528, 8, 0, 0})
	CMember(class UFortCollectionBookGenericRewardWidget*) SectionRewardWidget                                     OFFSET(get<T>, {0x1530, 8, 0, 0})
	CMember(class UFortCollectionBookSection*)         AssociatedSection                                           OFFSET(get<T>, {0x1538, 8, 0, 0})
	CMember(TArray<class UFortCollectionBookSlotWidget*>) SlotWidgets                                              OFFSET(get<T>, {0x1540, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionTileWidget.OnSectionSlotUpdate
	// void OnSectionSlotUpdate(int32_t NumFilledSlots, int32_t NumSlots, EFortCollectionBookState SectionState);               // [0xc123bac] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionTileWidget.OnItemUnslotted
	// void OnItemUnslotted(class UFortAccountItem* ItemUnslotted, class UFortAccountItem* OldSlottedItem, FName SlotId);       // [0xc122f44] Native|Protected     
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionTileWidget.OnItemSlotted
	// void OnItemSlotted(class UFortAccountItem* ItemSlotted, FName SlotId);                                                   // [0xc122e7c] Native|Protected     
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookSlotButton
/// Size: 0x0040 (0x0014E0 - 0x001520)
class UFortCollectionBookSlotButton : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5408;

public:
	CMember(class UFortCollectionBookSlotWidget*)      CollectionBookSlotWidget                                    OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(class UMenuAnchor*)                        PopupMenuAnchor                                             OFFSET(get<T>, {0x14E8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotButton.PopupMenuClosedWithAction
	// void PopupMenuClosedWithAction(EFortCollectionBookPopupButtonType Selection);                                            // [0xc124784] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotButton.OnSlottedItemUpdated
	// void OnSlottedItemUpdated();                                                                                             // [0xc1244f8] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotButton.GetPopupMenu
	// class UUserWidget* GetPopupMenu();                                                                                       // [0xc120304] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookSlotConfirmationModal
/// Size: 0x0058 (0x000570 - 0x0005C8)
class UFortCollectionBookSlotConfirmationModal : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1480;

public:
	CMember(class UFortAccountItem*)                   CurrentlySlottedItem                                        OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(class UFortAccountItem*)                   NewItemToSlot                                               OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_SlottingDescription                                    OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(class UFortMultiSizeItemCard*)             ItemCard_NewlySlottedItem                                   OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(class UFortCollectionBookRecycleSlotResultsWidget*) RecycleSlotResultsWidget                           OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(class UCommonButtonLegacy*)                Button_SlotItem                                             OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(class UCommonButtonLegacy*)                Button_Back                                                 OFFSET(get<T>, {0x5A8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotConfirmationModal.OnSlotItemRequestedComplete
	// void OnSlotItemRequestedComplete();                                                                                      // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotConfirmationModal.OnSlotItemRequested
	// void OnSlotItemRequested();                                                                                              // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotConfirmationModal.HandleSlotItemComplete
	// void HandleSlotItemComplete(class UFortAccountItem* SlottedItem, FName SlotId);                                          // [0xc1221bc] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookSlotDetailsWidget
/// Size: 0x0000 (0x0002E8 - 0x0002E8)
class UFortCollectionBookSlotDetailsWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookSlotView
/// Size: 0x00A0 (0x0002E8 - 0x000388)
class UFortCollectionBookSlotView : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	CMember(TWeakObjectPtr<UClass*>)                   CollectionBookButtonClass                                   OFFSET(get<T>, {0x2E8, 32, 0, 0})
	CMember(class UHorizontalBox*)                     CollectionBookButtonBox                                     OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UCommonButtonGroupLegacy*)           CollectionBookSlotButtonGroup                               OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(TArray<class UFortCollectionBookSlotButton*>) CollectionBookSlotButtons                                OFFSET(get<T>, {0x318, 16, 0, 0})
	CMember(class UFortCollectionBookSection*)         AssociatedSection                                           OFFSET(get<T>, {0x328, 8, 0, 0})
	DMember(int32_t)                                   PreviousSelectedButtonIdx                                   OFFSET(get<int32_t>, {0x378, 4, 0, 0})
	DMember(int32_t)                                   CurrentSelectedButtonIdx                                    OFFSET(get<int32_t>, {0x37C, 4, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotView.OnSlotButtonHovered
	// void OnSlotButtonHovered(class UCommonButtonLegacy* HoveredButton, int32_t ButtonIdx);                                   // [0xc12402c] Native|Protected     
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotView.OnSlotButtonClicked
	// void OnSlotButtonClicked(class UCommonButtonLegacy* ClickedButton, int32_t ButtonIdx);                                   // [0xc123e64] Native|Protected     
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotView.OnSelectedSlotButtonChanged
	// void OnSelectedSlotButtonChanged(class UCommonButtonLegacy* SelectedButton, int32_t ButtonIdx);                          // [0xc123d9c] Native|Protected     
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookSlotWidget
/// Size: 0x0128 (0x0002E8 - 0x000410)
class UFortCollectionBookSlotWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
	CMember(EFortItemCardSize)                         ItemCardSize                                                OFFSET(get<T>, {0x2F8, 1, 0, 0})
	DMember(bool)                                      bIsRewardCard                                               OFFSET(get<bool>, {0x2F9, 1, 0, 0})
	CMember(class UFortMultiSizeItemCard*)             ItemCardWidget                                              OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UWidget*)                            UnslottedOverlayWidget                                      OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UWidget*)                            ReadyToSlotOverlayWidget                                    OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UWidget*)                            UnslottedButReadyOverlayWidget                              OFFSET(get<T>, {0x318, 8, 0, 0})
	SMember(FName)                                     SlotRowName                                                 OFFSET(getStruct<T>, {0x320, 4, 0, 0})
	SMember(FText)                                     ItemAvailableToSlotText                                     OFFSET(getStruct<T>, {0x328, 24, 0, 0})
	SMember(FText)                                     NoItemsAvailableToSlotText                                  OFFSET(getStruct<T>, {0x340, 24, 0, 0})
	SMember(FText)                                     HigherQualityItemsAvailableToSlotAndUpgradeAvailableText    OFFSET(getStruct<T>, {0x358, 24, 0, 0})
	SMember(FText)                                     HigherQualityItemsAvailableToSlotAndEvolveAvailableText     OFFSET(getStruct<T>, {0x370, 24, 0, 0})
	SMember(FText)                                     HigherQualityItemsAvailableToSlotText                       OFFSET(getStruct<T>, {0x388, 24, 0, 0})
	SMember(FText)                                     ItemInSlotFullyUpgradedText                                 OFFSET(getStruct<T>, {0x3A0, 24, 0, 0})
	SMember(FText)                                     ItemInSlotCanBeUpgradedText                                 OFFSET(getStruct<T>, {0x3B8, 24, 0, 0})
	SMember(FText)                                     ItemInSlotCanBeEvolvedText                                  OFFSET(getStruct<T>, {0x3D0, 24, 0, 0})
	CMember(class UFortItem*)                          SlottedItemRepresentation                                   OFFSET(get<T>, {0x3E8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.OnItemDestroyed
	// void OnItemDestroyed();                                                                                                  // [0xc122e68] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.OnItemCardUpdated
	// void OnItemCardUpdated();                                                                                                // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.IsItemSlotted
	// bool IsItemSlotted();                                                                                                    // [0xa221aa8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.HasItemsToSlot
	// bool HasItemsToSlot();                                                                                                   // [0xc12256c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.HandleUnslotItemComplete
	// void HandleUnslotItemComplete(class UFortAccountItem* UnslottedItem, class UFortAccountItem* OldItem, FName SlotId);     // [0xc122344] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.HandleSlottedItemOperationComplete
	// void HandleSlottedItemOperationComplete(class UFortAccountItem* NewItem, FName TemplateId);                              // [0xc122280] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.HandleResearchItemComplete
	// void HandleResearchItemComplete(class UFortAccountItem* ResearchedItem, FString SlotId);                                 // [0xc1219c8] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.GetSlottedItemRepresentation
	// class UFortItem* GetSlottedItemRepresentation();                                                                         // [0xbdf7f18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.GetSlotRowName
	// FName GetSlotRowName();                                                                                                  // [0x7861b40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.GetNumItemsToSlot
	// int32_t GetNumItemsToSlot();                                                                                             // [0xc1202e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.FortCollectionBookSlottedItemUpdatedDelegate__DelegateSignature
	// void FortCollectionBookSlottedItemUpdatedDelegate__DelegateSignature();                                                  // [0x3d1d968] MulticastDelegate|Public|Delegate 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookWidget
/// Size: 0x0030 (0x000570 - 0x0005A0)
class UFortCollectionBookWidget : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1440;

public:
	CMember(class UFortCollectionBookProgressWidget*)  ProgressWidget                                              OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(class UCommonActivatableWidgetSwitcher*)   MainWidgetSwitcher                                          OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(class UFortCollectionBookPrimaryPanel*)    PrimaryPanelWidget                                          OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(class UFortCollectionBookSectionPanel*)    SectionPanelWidget                                          OFFSET(get<T>, {0x588, 8, 0, 0})
	DMember(int32_t)                                   PrimaryPanelIdx                                             OFFSET(get<int32_t>, {0x590, 4, 0, 0})
	DMember(int32_t)                                   SectionPanelIdx                                             OFFSET(get<int32_t>, {0x594, 4, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget.RequestToClose
	// void RequestToClose();                                                                                                   // [0xc125acc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget.OnPreviewXPChangeRequest
	// void OnPreviewXPChangeRequest(int32_t XPChange);                                                                         // [0xc12332c] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget.OnCollectionBookSectionCloseRequest
	// void OnCollectionBookSectionCloseRequest();                                                                              // [0xc122c20] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget.OnCollectionBookSectionClicked
	// void OnCollectionBookSectionClicked(class UFortCollectionBookSection* ClickedSection);                                   // [0x9fade68] Native|Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget.OnCollectionBookPageSelected
	// void OnCollectionBookPageSelected(class UFortCollectionBookPage* SelectedPage);                                          // [0xbc4aeb8] Native|Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget.OnCollectionBookPageClicked
	// void OnCollectionBookPageClicked(class UFortCollectionBookPage* ClickedPage);                                            // [0xbc4ae34] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookWidget_Legacy
/// Size: 0x0030 (0x000570 - 0x0005A0)
class UFortCollectionBookWidget_Legacy : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1440;

public:
	CMember(class UFortCollectionBookProgressWidget*)  ProgressWidget                                              OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(class UCommonWidgetSwitcherLegacy*)        MainWidgetSwitcher                                          OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(class UFortCollectionBookPrimaryPanel_Legacy*) PrimaryPanelWidget                                      OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(class UFortCollectionBookSectionPanel*)    SectionPanelWidget                                          OFFSET(get<T>, {0x588, 8, 0, 0})
	DMember(int32_t)                                   PrimaryPanelIdx                                             OFFSET(get<int32_t>, {0x590, 4, 0, 0})
	DMember(int32_t)                                   SectionPanelIdx                                             OFFSET(get<int32_t>, {0x594, 4, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget_Legacy.RequestToClose
	// void RequestToClose();                                                                                                   // [0xc125b14] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget_Legacy.OnPreviewXPChangeRequest
	// void OnPreviewXPChangeRequest(int32_t XPChange);                                                                         // [0xc12332c] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget_Legacy.OnCollectionBookSectionCloseRequest
	// void OnCollectionBookSectionCloseRequest();                                                                              // [0xc122c20] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget_Legacy.OnCollectionBookSectionClicked
	// void OnCollectionBookSectionClicked(class UFortCollectionBookSection* ClickedSection);                                   // [0x9fade68] Native|Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget_Legacy.OnCollectionBookPageSelected
	// void OnCollectionBookPageSelected(class UFortCollectionBookPage* SelectedPage);                                          // [0xbc4aeb8] Native|Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget_Legacy.OnCollectionBookPageClicked
	// void OnCollectionBookPageClicked(class UFortCollectionBookPage* ClickedPage);                                            // [0xbc4ae34] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortAbilitySystemContext
/// Size: 0x0050 (0x000030 - 0x000080)
class UFortAbilitySystemContext : public UBlueprintContextBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:


	/// Functions
	// Function /Script/SaveTheWorldUI.FortAbilitySystemContext.RemoveDelegatesFromWidget
	// void RemoveDelegatesFromWidget(class UWidget* Widget);                                                                   // [0xc125a38] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortAbilitySystemContext.RegisterForAttributeChanged
	// void RegisterForAttributeChanged(class UWidget* Widget, class UAbilitySystemComponent* ASC, FGameplayAttribute Attribute, FDelegateProperty Callback); // [0xc1254dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortAbilitySystemContext.HasMatchingGameplayTag
	// bool HasMatchingGameplayTag(FGameplayTag TagToCheck);                                                                    // [0xc122584] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase
/// Size: 0x0058 (0x000488 - 0x0004E0)
class UFortDirectAcquisitionWidgetBase : public UFortMtxStoreRootBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1248;

public:
	DMember(bool)                                      bShowIneligible                                             OFFSET(get<bool>, {0x490, 1, 0, 0})
	CMember(class UUserWidget*)                        FirstOfferGenerated                                         OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(class UHorizontalBox*)                     HorizontalBox_LargeTile                                     OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(class UGridPanel*)                         GridPanel_SmallTile                                         OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(class UHorizontalBox*)                     HorizontalBox_ReorderedItems                                OFFSET(get<T>, {0x4C0, 8, 0, 0})
	CMember(class UVerticalBox*)                       VerticalBox_FeatureItems                                    OFFSET(get<T>, {0x4C8, 8, 0, 0})
	CMember(class UVerticalBox*)                       VerticalBox_DailyItems                                      OFFSET(get<T>, {0x4D0, 8, 0, 0})
	CMember(class UScaleBox*)                          ScaleBox_Main                                               OFFSET(get<T>, {0x4D8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase.OnDisplayToast
	// void OnDisplayToast(bool bDisplayToast);                                                                                 // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase.IsTabsLayout
	// void IsTabsLayout(bool bShouldDisplayTabs);                                                                              // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase.HandleAffiliateButtonClicked
	// void HandleAffiliateButtonClicked();                                                                                     // [0xc120cd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase.GetWeeklyStoreEndDate
	// FDateTime GetWeeklyStoreEndDate();                                                                                       // [0xc120b68] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase.GetStoreCurrencies
	// TArray<UFortAccountItemDefinition*> GetStoreCurrencies();                                                                // [0xc1204b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase.GetSeasonStoreEndDate
	// FDateTime GetSeasonStoreEndDate();                                                                                       // [0xc120440] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase.GetDailyStoreEndDate
	// FDateTime GetDailyStoreEndDate();                                                                                        // [0xc11fd18] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy
/// Size: 0x0058 (0x0005F8 - 0x000650)
class UFortDirectAcquisitionWidgetBase_Legacy : public UFortMtxStoreRootBase_Legacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1616;

public:
	DMember(bool)                                      bShowIneligible                                             OFFSET(get<bool>, {0x600, 1, 0, 0})
	CMember(class UUserWidget*)                        FirstOfferGenerated                                         OFFSET(get<T>, {0x608, 8, 0, 0})
	CMember(class UHorizontalBox*)                     HorizontalBox_LargeTile                                     OFFSET(get<T>, {0x620, 8, 0, 0})
	CMember(class UGridPanel*)                         GridPanel_SmallTile                                         OFFSET(get<T>, {0x628, 8, 0, 0})
	CMember(class UHorizontalBox*)                     HorizontalBox_ReorderedItems                                OFFSET(get<T>, {0x630, 8, 0, 0})
	CMember(class UVerticalBox*)                       VerticalBox_FeatureItems                                    OFFSET(get<T>, {0x638, 8, 0, 0})
	CMember(class UVerticalBox*)                       VerticalBox_DailyItems                                      OFFSET(get<T>, {0x640, 8, 0, 0})
	CMember(class UScaleBox*)                          ScaleBox_Main                                               OFFSET(get<T>, {0x648, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.OnDisplayToast
	// void OnDisplayToast(bool bDisplayToast);                                                                                 // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.IsTabsLayout
	// void IsTabsLayout(bool bShouldDisplayTabs);                                                                              // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.HandleAffiliateButtonClicked
	// void HandleAffiliateButtonClicked();                                                                                     // [0xc120cd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.GetWeeklyStoreEndDate
	// FDateTime GetWeeklyStoreEndDate();                                                                                       // [0xc120b68] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.GetStoreCurrencies
	// TArray<UFortAccountItemDefinition*> GetStoreCurrencies();                                                                // [0xc1204ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.GetSeasonStoreEndDate
	// FDateTime GetSeasonStoreEndDate();                                                                                       // [0xc120440] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.GetDailyStoreEndDate
	// FDateTime GetDailyStoreEndDate();                                                                                        // [0xc11fd18] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget
/// Size: 0x0060 (0x000538 - 0x000598)
class UFortExpeditionBuildSquadWidget : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1432;

public:
	CMember(TWeakObjectPtr<UFortExpeditionItem*>)      Item                                                        OFFSET(get<T>, {0x538, 8, 0, 0})
	SMember(FName)                                     CurrentSquadId                                              OFFSET(getStruct<T>, {0x540, 4, 0, 0})
	CMember(class UFortSquadSlotsView*)                ExpeditionSquadSlotsView                                    OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(class UFortSquadSlotDetailsPanel*)         ExpeditionSquadSlotDetails                                  OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(class UFortSquadSlotItemPicker*)           ExpeditionSquadSlotPicker                                   OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(class UFortItemViewContext_ExpeditionSquadSlotsView*) ItemViewContext_ExpeditionSlotsView              OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(class UFortItemViewContext_ExpeditionSquadSlotItemPicker*) ItemViewContext_ExpeditionSlotItemPicker    OFFSET(get<T>, {0x568, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.SetData
	// void SetData(class UFortExpeditionItem* InItem);                                                                         // [0xbc4ae34] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.SetCurrentSquadId
	// void SetCurrentSquadId(FName SquadId);                                                                                   // [0xc125e74] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.OnRequestClosePicker
	// void OnRequestClosePicker();                                                                                             // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.OnRefreshBuildSquadWidget
	// void OnRefreshBuildSquadWidget();                                                                                        // [0x787a850] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.IsSquadSlotLocked
	// bool IsSquadSlotLocked(int32_t SlotIndex);                                                                               // [0xc122830] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.IsExpeditionValidToStart
	// bool IsExpeditionValidToStart();                                                                                         // [0xc12273c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.HandleRequestStartExpedition
	// void HandleRequestStartExpedition(bool& bPassThrough);                                                                   // [0xc12194c] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.HandleDifferentSquadSlotSelected
	// void HandleDifferentSquadSlotSelected(int32_t SquadSlotIndex);                                                           // [0xc121504] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.ClearTemporaryExpeditionSquadState
	// void ClearTemporaryExpeditionSquadState(bool bPreviewOnly);                                                              // [0xc11fac4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionDetailsWidget
/// Size: 0x0040 (0x0002E8 - 0x000328)
class UFortExpeditionDetailsWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(TWeakObjectPtr<UFortExpeditionItem*>)      Item                                                        OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UFortSquadSlotsView*)                ExpeditionSquadSlotsView                                    OFFSET(get<T>, {0x2F0, 8, 0, 0})
	SMember(FName)                                     CurrentSquadId                                              OFFSET(getStruct<T>, {0x2F8, 4, 0, 0})
	CMember(class UFortItemViewContext_ExpeditionSquadSlotsView*) ItemViewContext_ExpeditionSlotsView              OFFSET(get<T>, {0x300, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortExpeditionDetailsWidget.SetData
	// void SetData(class UFortExpeditionItem* InItem);                                                                         // [0x7ab04e4] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortExpeditionDetailsWidget.SetCurrentSquadId
	// void SetCurrentSquadId(FName SquadId);                                                                                   // [0xc125f08] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionDetailsWidget.RequestAbandonExpedition
	// void RequestAbandonExpedition();                                                                                         // [0xc125ab8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionDetailsWidget.HandleAbandonExpeditionCompleted
	// void HandleAbandonExpeditionCompleted(class UFortExpeditionItem* Expedition, bool bSuccess);                             // [0xc120c18] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionExpiresWidget
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortExpeditionExpiresWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(TWeakObjectPtr<UFortExpeditionItem*>)      Item                                                        OFFSET(get<T>, {0x2E8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortExpeditionExpiresWidget.SetData
	// void SetData(class UFortExpeditionItem* InItem);                                                                         // [0x90d37d8] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortExpeditionExpiresWidget.OnExpeditionExpirationUpdated
	// void OnExpeditionExpirationUpdated();                                                                                    // [0x1f2db84] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionListItemWidget
/// Size: 0x0020 (0x0014E0 - 0x001500)
class UFortExpeditionListItemWidget : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5376;

public:
	CMember(TWeakObjectPtr<UFortExpeditionItem*>)      Item                                                        OFFSET(get<T>, {0x14E8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortExpeditionListItemWidget.OnItemChanged
	// void OnItemChanged();                                                                                                    // [0x3d1d968] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionListViewWidget
/// Size: 0x0030 (0x0002E8 - 0x000318)
class UFortExpeditionListViewWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	SMember(FMulticastInlineDelegate)                  OnExpeditionSelected                                        OFFSET(getStruct<T>, {0x2E8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnExpeditionListViewRefreshed                               OFFSET(getStruct<T>, {0x2F8, 16, 0, 0})
	CMember(class UCommonListView*)                    ExpeditionListView                                          OFFSET(get<T>, {0x308, 8, 0, 0})
	SMember(FName)                                     CurrentTabNameId                                            OFFSET(getStruct<T>, {0x310, 4, 0, 0})
	CMember(EFortExpeditionListSort)                   SortType                                                    OFFSET(get<T>, {0x314, 1, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortExpeditionListViewWidget.SetExpeditionListSortType
	// void SetExpeditionListSortType(EFortExpeditionListSort InSortType);                                                      // [0xc12663c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionListViewWidget.GetExpeditionListSortName
	// FText GetExpeditionListSortName();                                                                                       // [0xc11fdc4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionMasterWidget
/// Size: 0x0020 (0x000538 - 0x000558)
class UFortExpeditionMasterWidget : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1368;

public:
};

/// Class /Script/SaveTheWorldUI.FortExpeditionOverviewWidget
/// Size: 0x0028 (0x0002E8 - 0x000310)
class UFortExpeditionOverviewWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(class UClass*)                             TabButtonType                                               OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(TArray<FExpeditionTabInfo>)                TabListRegistrationInfo                                     OFFSET(get<T>, {0x2F0, 16, 0, 0})
	CMember(class UFortTabListWidgetBase_Legacy*)      ExpeditionTabList                                           OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UFortExpeditionListViewWidget*)      ExpeditionListView                                          OFFSET(get<T>, {0x308, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortExpeditionOverviewWidget.UpdateExpeditionTabs
	// void UpdateExpeditionTabs();                                                                                             // [0xc126d58] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionOverviewWidget.OnExpeditionTabSelected
	// void OnExpeditionTabSelected(FName& TabNameID);                                                                          // [0xc122c34] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortExpeditionOverviewWidget.OnExpeditionOverviewRefresh
	// void OnExpeditionOverviewRefresh();                                                                                      // [0x134b420] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortExpeditionOverviewWidget.HandleExpeditionTabSelected
	// void HandleExpeditionTabSelected(FName TabNameID);                                                                       // [0xc121588] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortExpeditionOverviewWidget.HandleExpeditionTabButtonCreated
	// void HandleExpeditionTabButtonCreated(FName TabNameID, class UCommonButtonBase* TabButton);                              // [0x88a0158] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionPickVehicleWidget
/// Size: 0x0008 (0x000538 - 0x000540)
class UFortExpeditionPickVehicleWidget : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1344;

public:
	CMember(TWeakObjectPtr<UFortExpeditionItem*>)      Item                                                        OFFSET(get<T>, {0x538, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortExpeditionPickVehicleWidget.SetData
	// void SetData(class UFortExpeditionItem* InItem);                                                                         // [0x9fade68] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionReturnsWidget
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortExpeditionReturnsWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(TWeakObjectPtr<UFortExpeditionItem*>)      Item                                                        OFFSET(get<T>, {0x2E8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortExpeditionReturnsWidget.SetData
	// void SetData(class UFortExpeditionItem* InItem);                                                                         // [0x90d37d8] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortExpeditionReturnsWidget.OnExpeditionInProgressUpdated
	// void OnExpeditionInProgressUpdated();                                                                                    // [0x1f2db84] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionRewardsWidget
/// Size: 0x0028 (0x0002E8 - 0x000310)
class UFortExpeditionRewardsWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FMulticastInlineDelegate)                  OnAllExpeditionsCollected                                   OFFSET(getStruct<T>, {0x2E8, 16, 0, 0})
	CMember(class UCommonTileView*)                    RewardsTileView                                             OFFSET(get<T>, {0x2F8, 8, 0, 0})
	DMember(bool)                                      bPendingCollection                                          OFFSET(get<bool>, {0x300, 1, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortExpeditionRewardsWidget.RefreshRewardsUI
	// void RefreshRewardsUI(class UFortExpeditionItem* Expedition, bool bExpeditionSucceeded, TArray<FFortItemInstanceQuantityPair>& Rewards); // [0xc124d3c] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortExpeditionRewardsWidget.ProcessNextReward
	// void ProcessNextReward();                                                                                                // [0xc124808] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionRewardsWidget.HandleCollectionExpeditionCompleted
	// void HandleCollectionExpeditionCompleted(bool bMcpSuccess, class UFortExpeditionItem* Expedition, bool bExpeditionSuccess, TArray<FFortItemInstanceQuantityPair>& Rewards); // [0xc120d18] Final|Native|Protected|HasOutParms 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionSummaryWidget
/// Size: 0x0058 (0x0002E8 - 0x000340)
class UFortExpeditionSummaryWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	DMember(int32_t)                                   AvailableExpeditions                                        OFFSET(get<int32_t>, {0x2E8, 4, 0, 0})
	DMember(int32_t)                                   CompletedExpeditions                                        OFFSET(get<int32_t>, {0x2EC, 4, 0, 0})
	DMember(int32_t)                                   LandVehiclesTotal                                           OFFSET(get<int32_t>, {0x2F0, 4, 0, 0})
	DMember(int32_t)                                   LandVehiclesAvailable                                       OFFSET(get<int32_t>, {0x2F4, 4, 0, 0})
	DMember(int32_t)                                   AirVehiclesTotal                                            OFFSET(get<int32_t>, {0x2F8, 4, 0, 0})
	DMember(int32_t)                                   AirVehiclesAvailable                                        OFFSET(get<int32_t>, {0x2FC, 4, 0, 0})
	DMember(int32_t)                                   SeaVehiclesTotal                                            OFFSET(get<int32_t>, {0x300, 4, 0, 0})
	DMember(int32_t)                                   SeaVehiclesAvailable                                        OFFSET(get<int32_t>, {0x304, 4, 0, 0})
	DMember(int32_t)                                   LandExpeditionsTotal                                        OFFSET(get<int32_t>, {0x308, 4, 0, 0})
	DMember(int32_t)                                   LandExpeditionsAvailable                                    OFFSET(get<int32_t>, {0x30C, 4, 0, 0})
	DMember(int32_t)                                   AirExpeditionsTotal                                         OFFSET(get<int32_t>, {0x310, 4, 0, 0})
	DMember(int32_t)                                   AirExpeditionsAvailable                                     OFFSET(get<int32_t>, {0x314, 4, 0, 0})
	DMember(int32_t)                                   SeaExpeditionsTotal                                         OFFSET(get<int32_t>, {0x318, 4, 0, 0})
	DMember(int32_t)                                   SeaExpeditionsAvailable                                     OFFSET(get<int32_t>, {0x31C, 4, 0, 0})
	CMember(TArray<class UFortExpeditionItem*>)        InProgressExpeditions                                       OFFSET(get<T>, {0x320, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortExpeditionSummaryWidget.UnbindInventoryDelegates
	// void UnbindInventoryDelegates();                                                                                         // [0xc126ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionSummaryWidget.OnRefreshSummaryWidget
	// void OnRefreshSummaryWidget();                                                                                           // [0x1f2db84] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortExpeditionSummaryWidget.BindInventoryDelegates
	// void BindInventoryDelegates();                                                                                           // [0xc11f540] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionUtilities
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortExpeditionUtilities : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.TotalUnseenExpeditionsForTab
	// int32_t TotalUnseenExpeditionsForTab(class UWidget* Widget, FName& TabNameID);                                           // [0xc126c10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.IsSquadOnExpedition
	// bool IsSquadOnExpedition(class UWidget* Widget, FName& SquadId);                                                         // [0xc122760] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.GetVehicleTagRequiredForExpedition
	// FGameplayTag GetVehicleTagRequiredForExpedition(class UFortExpeditionItem* Expedition);                                  // [0xc1209ec] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.GetVehicleTagFromSquadId
	// bool GetVehicleTagFromSquadId(FName& SquadId, FGameplayTag& OutFoundVehicleTag);                                         // [0xc1208d4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.GetTotalExpeditionVehiclesAvailable
	// void GetTotalExpeditionVehiclesAvailable(class UWidget* Widget, class AFortPlayerController* FortPC, int32_t& OutLandVehicles, int32_t& OutLandVehiclesAvailable, int32_t& OutSeaVehicles, int32_t& OutSeaVehiclesAvailable, int32_t& OutAirVehicles, int32_t& OutAirVehiclesAvailable); // [0xc1205a8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.GetMatchedCriteriaTags
	// void GetMatchedCriteriaTags(class UFortExpeditionItem* Expedition, TArray<UFortItem*>& SlottedItems, TArray<FGameplayTag>& OutMatchedCriteria); // [0xc120160] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.GetExpeditionSquadsThatMatchRequirements
	// bool GetExpeditionSquadsThatMatchRequirements(FGameplayTagContainer& RequirementTags, class AFortPlayerController* FortPC, TArray<FName>& OutExpeditionSquadIds); // [0xc11ff3c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.GetExpeditionSquadPower
	// float GetExpeditionSquadPower(class AFortPlayerController* FortPC, FName& SquadId);                                      // [0xc11fe6c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.GetAllExpeditionSquadIds
	// void GetAllExpeditionSquadIds(TArray<FName>& OutExpeditionSquadIds);                                                     // [0xc11fc88] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.CalculateTotalPower
	// float CalculateTotalPower(class AFortPlayerController* FortPC, class UFortExpeditionItem* Expedition, FName& SquadId, TArray<UFortItem*>& SlottedItems); // [0xc11f8b4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.CalculateGlobalAndItemRatingModValuesBP
	// void CalculateGlobalAndItemRatingModValuesBP(class UFortExpeditionItem* Expedition, TArray<UFortItem*>& SlottedItems, float& GlobalPowerMod, TArray<float>& SlottedItemMods); // [0xc11f67c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.CalculateExpeditionPercentageChanceForSuccess
	// float CalculateExpeditionPercentageChanceForSuccess(class UFortExpeditionItem* Expedition, float TotalPower);            // [0xc11f568] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.AreExpeditionsUnlocked
	// bool AreExpeditionsUnlocked(class UObject* WorldContextObject, FUniqueNetIdRepl& UniqueID);                              // [0xc11f3ec] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.AreAnyExpeditionsComplete
	// bool AreAnyExpeditionsComplete(class UWidget* Widget);                                                                   // [0xc11f36c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionVehicleTileItemWidget
/// Size: 0x0010 (0x0014E0 - 0x0014F0)
class UFortExpeditionVehicleTileItemWidget : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5360;

public:
	CMember(TWeakObjectPtr<UObject*>)                  SquadId                                                     OFFSET(get<T>, {0x14E8, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortFeatureUnlockWidget
/// Size: 0x0038 (0x000570 - 0x0005A8)
class UFortFeatureUnlockWidget : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1448;

public:
	CMember(class UCommonWidgetSwitcherLegacy*)        MediaSwitcher                                               OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(class UWidget*)                            VideoContent                                                OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(class UWidget*)                            ImageContent                                                OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(class UFortVideoPlayerWidget*)             VideoWidget                                                 OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(class UCommonLazyImage*)                   ImageWidget                                                 OFFSET(get<T>, {0x590, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortFeatureUnlockWidget.SetData
	// void SetData(FString ItemTemplateID);                                                                                    // [0xc125f88] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortFeatureUnlockWidget.RefreshDataBP
	// void RefreshDataBP();                                                                                                    // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortFeatureUnlockWidget.GetVideo
	// class UMediaSource* GetVideo();                                                                                          // [0xc120b48] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortFeatureUnlockWidget.GetTitle
	// FText GetTitle();                                                                                                        // [0xc120528] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortFeatureUnlockWidget.GetSmallIcon
	// TWeakObjectPtr<UTexture2D*> GetSmallIcon();                                                                              // [0xc12046c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortFeatureUnlockWidget.GetLargeIcon
	// TWeakObjectPtr<UTexture2D*> GetLargeIcon();                                                                              // [0xc12011c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortFeatureUnlockWidget.GetDescription
	// FText GetDescription();                                                                                                  // [0xc11fd44] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortResultsWidgetSTW
/// Size: 0x00C8 (0x000400 - 0x0004C8)
class UFortResultsWidgetSTW : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1224;

public:
	DMember(int32_t)                                   AdditionalGrantedMissionPoints                              OFFSET(get<int32_t>, {0x478, 4, 0, 0})
	CMember(TArray<class UFortItem*>)                  RewardedBadges                                              OFFSET(get<T>, {0x480, 16, 0, 0})
	CMember(TArray<class UFortItem*>)                  MissedBadges                                                OFFSET(get<T>, {0x490, 16, 0, 0})
	CMember(TArray<class UFortItem*>)                  RewardedItems                                               OFFSET(get<T>, {0x4A0, 16, 0, 0})
	CMember(TArray<class UFortItem*>)                  RewardedAccountItems                                        OFFSET(get<T>, {0x4B0, 16, 0, 0})
	CMember(class UCommonUserWidget*)                  Radial_Picker                                               OFFSET(get<T>, {0x4C0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.TriggerSetupTeleportCameraEvent
	// void TriggerSetupTeleportCameraEvent();                                                                                  // [0xa3cd4b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.ToggleChat
	// void ToggleChat(bool bShow);                                                                                             // [0xa3cd3fc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.SendEndOfRoundUpVoteAnalytic
	// void SendEndOfRoundUpVoteAnalytic(FUniqueNetIdRepl& TargetId, FString TargetPlayerName);                                 // [0xa3ca8f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.SendEndOfRoundScreenAnalytic
	// void SendEndOfRoundScreenAnalytic(FString ScreenName, bool Skipped, float TimeSpent);                                    // [0xa3ca1b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.SendEndOfRoundFriendInviteAnalytic
	// void SendEndOfRoundFriendInviteAnalytic(FUniqueNetIdRepl& TargetId, FString TargetPlayerName);                           // [0xa3c9a40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.RequestExitZone
	// void RequestExitZone();                                                                                                  // [0xa3c8a2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.LogXPData
	// void LogXPData();                                                                                                        // [0xc12291c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.IsDataFinalized
	// bool IsDataFinalized();                                                                                                  // [0xc122718] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.HandlePickerCancel
	// void HandlePickerCancel(bool& bPassThrough);                                                                             // [0xc1217e4] Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.HandleEmoteClicked
	// void HandleEmoteClicked(bool& bPassThrough);                                                                             // [0x6fc9078] Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.GetZoneCompletionResultText
	// FText GetZoneCompletionResultText();                                                                                     // [0xc120bc4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.GetZoneCompletionResult
	// EFortCompletionResult GetZoneCompletionResult();                                                                         // [0xc120b94] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.GetTotalMissionPointsEarned
	// int32_t GetTotalMissionPointsEarned();                                                                                   // [0xc1208b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.GetRewardsByType
	// void GetRewardsByType(EFortRewardItemTypeSTW Type, TArray<UFortItem*>& OutRewards);                                      // [0xc120328] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortSTWUIData
/// Size: 0x0020 (0x000030 - 0x000050)
class UFortSTWUIData : public UFortSTWUIDataBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TWeakObjectPtr<UDataTable*>)               UpgradesDisplayDataTable                                    OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortRootViewportLayout_STW
/// Size: 0x0008 (0x000420 - 0x000428)
class UFortRootViewportLayout_STW : public UFortRootViewportLayout
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1064;

public:
	CMember(class UTalkingHead*)                       TalkingHead                                                 OFFSET(get<T>, {0x420, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW
/// Size: 0x0058 (0x000570 - 0x0005C8)
class UFortItemAutoMulchActivatablePanel_STW : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1480;

public:


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.SetItemManagementScreen
	// void SetItemManagementScreen(class UFortItemManagementScreen_STW* InItemManagementScreen);                               // [0xa5808c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.SaveSettings
	// void SaveSettings();                                                                                                     // [0xc125b64] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.RestoreAutoMulchSettings
	// void RestoreAutoMulchSettings();                                                                                         // [0xa57fbd8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.GetMulchCategoriesForInventoryFilter
	// TArray<EFortAutoMulchCategory> GetMulchCategoriesForInventoryFilter();                                                   // [0xc1202a4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.GetFrontendInventoryFilter
	// EFortFrontendInventoryFilter GetFrontendInventoryFilter();                                                               // [0xc1200b4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.EnterMulchModeForAutoMulch
	// void EnterMulchModeForAutoMulch();                                                                                       // [0xc11fc4c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.CacheAutoMulchSettings
	// void CacheAutoMulchSettings();                                                                                           // [0xc11f554] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW
/// Size: 0x00A0 (0x000570 - 0x000610)
class UFortItemCraftingOptionsActivatablePanel_STW : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1552;

public:
	CMember(class UFortSchematicItem*)                 BaseItem                                                    OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(class UFortSchematicItem*)                 TargetItem                                                  OFFSET(get<T>, {0x578, 8, 0, 0})
	DMember(int32_t)                                   MaxCraftingTierIndex                                        OFFSET(get<int32_t>, {0x580, 4, 0, 0})
	DMember(int32_t)                                   TargetCraftingTierIndex                                     OFFSET(get<int32_t>, {0x584, 4, 0, 0})
	DMember(int32_t)                                   TargetPromotionTierIndex                                    OFFSET(get<int32_t>, {0x588, 4, 0, 0})
	DMember(int32_t)                                   MaxQuantity                                                 OFFSET(get<int32_t>, {0x58C, 4, 0, 0})
	DMember(int32_t)                                   SelectedQuantity                                            OFFSET(get<int32_t>, {0x590, 4, 0, 0})
	DMember(bool)                                      CanCraftTargetItem                                          OFFSET(get<bool>, {0x594, 1, 0, 0})
	CMember(class UWidget*)                            TierImageParent                                             OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(class UWidget*)                            TierImageParent1                                            OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(class UWidget*)                            TierImageParent2                                            OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(class UWidget*)                            TierImageParent3                                            OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(class UWidget*)                            TierImageParent4                                            OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(class UImage*)                             TierImage                                                   OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(class UImage*)                             TierImage1                                                  OFFSET(get<T>, {0x5C8, 8, 0, 0})
	CMember(class UImage*)                             TierImage2                                                  OFFSET(get<T>, {0x5D0, 8, 0, 0})
	CMember(class UImage*)                             TierImage3                                                  OFFSET(get<T>, {0x5D8, 8, 0, 0})
	CMember(class UImage*)                             TierImage4                                                  OFFSET(get<T>, {0x5E0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.UpdateTierImages
	// void UpdateTierImages();                                                                                                 // [0xa5cca40] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SetTargetCraftingTierIndex
	// void SetTargetCraftingTierIndex(int32_t NewTierIndex);                                                                   // [0xc126ad0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SetSelectedQuantity_BP
	// void SetSelectedQuantity_BP(int32_t NewQuantity);                                                                        // [0xc126a50] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SetItemManagementScreen
	// void SetItemManagementScreen(class UFortItemManagementScreen_STW* InItemManagementScreen);                               // [0xa5ca388] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SetBaseSchematicItem
	// void SetBaseSchematicItem(class UFortSchematicItem* InBaseItem);                                                         // [0xc125cf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SelectPreviousTier
	// void SelectPreviousTier();                                                                                               // [0xc125bb8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SelectNextTier
	// void SelectNextTier();                                                                                                   // [0xc125b78] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.OnTargetItemChanged
	// void OnTargetItemChanged(class UFortSchematicItem* NewTargetItem);                                                       // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.OnSelectedQuantityChanged
	// void OnSelectedQuantityChanged(int32_t NewSelectedQuantity);                                                             // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.OnMaxQuantityChanged
	// void OnMaxQuantityChanged(int32_t NewMaxQuantity);                                                                       // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.OnBaseItemChanged
	// void OnBaseItemChanged(class UFortSchematicItem* NewBaseItem);                                                           // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.IncreaseSelectedQuantity
	// void IncreaseSelectedQuantity();                                                                                         // [0xc1226ec] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.DecreaseSelectedQuantity
	// void DecreaseSelectedQuantity();                                                                                         // [0xc11fc24] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.CraftTargetItem
	// void CraftTargetItem();                                                                                                  // [0xc11fbb4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.CraftAndSlotTargetItem
	// void CraftAndSlotTargetItem();                                                                                           // [0xc11fb44] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW
/// Size: 0x01C8 (0x000400 - 0x0005C8)
class UFortItemDetailsActivatablePanel_STW : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1480;

public:
	SMember(FDataTableRowHandle)                       DropInputActionHandle                                       OFFSET(getStruct<T>, {0x400, 16, 0, 0})
	SMember(FDataTableRowHandle)                       DestroyInputActionHandle                                    OFFSET(getStruct<T>, {0x410, 16, 0, 0})
	SMember(FDataTableRowHandle)                       BackInputActionHandle                                       OFFSET(getStruct<T>, {0x420, 16, 0, 0})
	SMember(FDataTableRowHandle)                       LeaveInventoryInputActionHandle                             OFFSET(getStruct<T>, {0x430, 16, 0, 0})
	SMember(FDataTableRowHandle)                       CraftingOptionsInputActionHandle                            OFFSET(getStruct<T>, {0x440, 16, 0, 0})
	SMember(FDataTableRowHandle)                       CraftInputActionHandle                                      OFFSET(getStruct<T>, {0x450, 16, 0, 0})
	SMember(FDataTableRowHandle)                       MulchInputActionHandle                                      OFFSET(getStruct<T>, {0x460, 16, 0, 0})
	SMember(FDataTableRowHandle)                       InspectInputActionHandle                                    OFFSET(getStruct<T>, {0x470, 16, 0, 0})
	SMember(FDataTableRowHandle)                       InventoryInspectInputActionHandle                           OFFSET(getStruct<T>, {0x480, 16, 0, 0})
	SMember(FDataTableRowHandle)                       UnequipInputActionHandle                                    OFFSET(getStruct<T>, {0x490, 16, 0, 0})
	SMember(FDataTableRowHandle)                       EquipInputActionHandle                                      OFFSET(getStruct<T>, {0x4A0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       MoreInfoInputActionHandle                                   OFFSET(getStruct<T>, {0x4B0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       WithdrawAllInputActionHandle                                OFFSET(getStruct<T>, {0x4C0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       SwitchPanelInputActionHandle                                OFFSET(getStruct<T>, {0x4D0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       TransferInputActionHandle                                   OFFSET(getStruct<T>, {0x4E0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ConsumeItemInputActionHandle                                OFFSET(getStruct<T>, {0x4F0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       SortInputActionHandle                                       OFFSET(getStruct<T>, {0x500, 16, 0, 0})
	SMember(FDataTableRowHandle)                       CompareInputActionHandle                                    OFFSET(getStruct<T>, {0x510, 16, 0, 0})
	SMember(FDataTableRowHandle)                       OpenCustomFilterInputActionHandle                           OFFSET(getStruct<T>, {0x520, 16, 0, 0})
	CMember(TWeakObjectPtr<UFortItem*>)                ItemToDetail                                                OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortItem*>)                ItemToCompareWith                                           OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortItemManagementScreen_STW*>) HostItemManagementScreen                               OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(class UFortTooltipLoadingWrapper*)         ItemToDetailLoadingWrapper                                  OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(class UCommonLoadGuard*)                   ItemToDetailLoadGuard                                       OFFSET(get<T>, {0x5C0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.SetupInputHandling
	// void SetupInputHandling();                                                                                               // [0xc126b60] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.SetInputActionState
	// void SetInputActionState(FDataTableRowHandle& RowHandle, bool State);                                                    // [0xc1266c8] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterTransferActions
	// void RegisterTransferActions();                                                                                          // [0xc125a24] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterSort
	// void RegisterSort();                                                                                                     // [0xc125a10] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterRetire
	// void RegisterRetire();                                                                                                   // [0xc1259fc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterOpenCustomFilter
	// void RegisterOpenCustomFilter();                                                                                         // [0xc1259e0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterMulch
	// void RegisterMulch();                                                                                                    // [0xc1259cc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterMore
	// void RegisterMore();                                                                                                     // [0xc1259b8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterLeaveInventory
	// void RegisterLeaveInventory();                                                                                           // [0xc1259a4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterInventoryInspect
	// void RegisterInventoryInspect();                                                                                         // [0xc125990] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterInspectUpgrade
	// void RegisterInspectUpgrade();                                                                                           // [0xc125974] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterInspect
	// void RegisterInspect();                                                                                                  // [0xc125960] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterEquip
	// void RegisterEquip();                                                                                                    // [0xc1254c8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterDropOrDestroy
	// void RegisterDropOrDestroy();                                                                                            // [0xc1254b4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterCraft
	// void RegisterCraft();                                                                                                    // [0xc1254a0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterConsumeItem
	// void RegisterConsumeItem();                                                                                              // [0xc12548c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterCompare
	// void RegisterCompare();                                                                                                  // [0xc125470] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterBack
	// void RegisterBack();                                                                                                     // [0xc12545c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RefreshTransferActions
	// void RefreshTransferActions();                                                                                           // [0x3d1d968] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RefreshSwitchPanelAction
	// void RefreshSwitchPanelAction();                                                                                         // [0x3d1d968] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RefreshOnNewItemSelected
	// void RefreshOnNewItemSelected();                                                                                         // [0xc124d28] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RefreshOnMenuChange
	// void RefreshOnMenuChange();                                                                                              // [0xc124d14] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RefreshDropAction
	// void RefreshDropAction();                                                                                                // [0xc124d00] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RefreshDestroyAction
	// void RefreshDestroyAction();                                                                                             // [0xc124cb0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RefreshCraftActions
	// void RefreshCraftActions();                                                                                              // [0xc124c9c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RefreshConsumeAction
	// void RefreshConsumeAction();                                                                                             // [0xc124c88] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.MulchQuestComplete
	// bool MulchQuestComplete();                                                                                               // [0x3d1d968] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleWorldItemsChanged
	// void HandleWorldItemsChanged();                                                                                          // [0xc122558] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleWorldItemListChanged
	// void HandleWorldItemListChanged(TArray<UFortWorldItem*>& ItemsAdded, TArray<UFortWorldItem*>& ItemsRemoved);             // [0xc122444] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleWithdrawAll
	// void HandleWithdrawAll();                                                                                                // [0x3d1d968] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleTransfer
	// void HandleTransfer();                                                                                                   // [0x3d1d968] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleSwitchPanel
	// void HandleSwitchPanel();                                                                                                // [0x3d1d968] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleSort
	// void HandleSort();                                                                                                       // [0x3d1d968] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleQuickbarContentsChanged
	// void HandleQuickbarContentsChanged(EFortQuickBars QuickbarIndex, TArray<int32_t>& ChangedSlots);                         // [0xc121874] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleOpenCustomFilter
	// void HandleOpenCustomFilter();                                                                                           // [0x3d1d968] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleMulchNative
	// void HandleMulchNative();                                                                                                // [0x3d1d968] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleMulch
	// void HandleMulch();                                                                                                      // [0x3d1d968] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleMore
	// void HandleMore();                                                                                                       // [0x3d1d968] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleItemToDetailTooltipAssetsLoaded
	// void HandleItemToDetailTooltipAssetsLoaded();                                                                            // [0xc121608] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleInspect
	// void HandleInspect();                                                                                                    // [0x3d1d968] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleEquip
	// void HandleEquip();                                                                                                      // [0x3d1d968] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleDrop
	// void HandleDrop();                                                                                                       // [0x3d1d968] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleDifferentItemToDetailSetBP
	// void HandleDifferentItemToDetailSetBP();                                                                                 // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleDifferentItemToCompareSetBP
	// void HandleDifferentItemToCompareSetBP();                                                                                // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleDestroy
	// void HandleDestroy();                                                                                                    // [0x3d1d968] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleCraftingOptions
	// void HandleCraftingOptions();                                                                                            // [0x3d1d968] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleCraft
	// void HandleCraft();                                                                                                      // [0x3d1d968] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleConsumeItemProgressChangedBP
	// void HandleConsumeItemProgressChangedBP();                                                                               // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleConsumeItem
	// void HandleConsumeItem();                                                                                                // [0x3d1d968] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleCompare
	// void HandleCompare();                                                                                                    // [0x3d1d968] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleBackNative
	// void HandleBackNative();                                                                                                 // [0x3d1d968] Event|Protected|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortItemDetailsModeActivatablePanel_STW
/// Size: 0x0008 (0x0005C8 - 0x0005D0)
class UFortItemDetailsModeActivatablePanel_STW : public UFortItemDetailsActivatablePanel_STW
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
	CMember(class UCommonWidgetSwitcherLegacy*)        DetailPanelWidgetSwitcher                                   OFFSET(get<T>, {0x5C8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemDetailsModeActivatablePanel_STW.HandleOnActiveWidgetChanged
	// void HandleOnActiveWidgetChanged(class UWidget* ActiveWidget, int32_t ActiveWidgetIndex);                                // [0xc121698] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortItemCompareModeActivatablePanel_STW
/// Size: 0x0010 (0x0005C8 - 0x0005D8)
class UFortItemCompareModeActivatablePanel_STW : public UFortItemDetailsActivatablePanel_STW
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1496;

public:
	CMember(class UFortItemManagementItemDetailsPanel_STW*) ComparisonModeLeftItemDetailsPanel                     OFFSET(get<T>, {0x5C8, 8, 0, 0})
	CMember(class UFortItemManagementItemDetailsPanel_STW*) ComparisonModeRightItemDetailsPanel                    OFFSET(get<T>, {0x5D0, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortItemMulchModeActivatablePanel_STW
/// Size: 0x0010 (0x0005C8 - 0x0005D8)
class UFortItemMulchModeActivatablePanel_STW : public UFortItemDetailsActivatablePanel_STW
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1496;

public:
	CMember(class UFortItemManagementItemDetailsPanel_STW*) MulchModeItemDetailsPanel                              OFFSET(get<T>, {0x5C8, 8, 0, 0})
	CMember(class UFortItemManagementMulchDetailsPanel_STW*) MulchDetailsPanel                                     OFFSET(get<T>, {0x5D0, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW
/// Size: 0x0068 (0x000570 - 0x0005D8)
class UFortItemManagementCustomFilterModalWidget_STW : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1496;

public:
	CMember(TWeakObjectPtr<UFortItemManagementScreen_STW*>) HostItemManagementScreen                               OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(TArray<EFortInventoryCustomFilter>)        AvailableFilters                                            OFFSET(get<T>, {0x578, 16, 0, 0})
	CMember(TSet<EFortInventoryCustomFilter>)          LocalCustomFilterSet                                        OFFSET(get<T>, {0x588, 80, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.ToggleFilter
	// void ToggleFilter(EFortInventoryCustomFilter Filter);                                                                    // [0xc14f79c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.OnEndCommitCustomFilter
	// void OnEndCommitCustomFilter(bool bWasSuccessful);                                                                       // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.OnCustomFilterSetUpdated
	// void OnCustomFilterSetUpdated();                                                                                         // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.OnBeginCommitCustomFilter
	// void OnBeginCommitCustomFilter();                                                                                        // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.IsCustomFilterEnabled
	// bool IsCustomFilterEnabled(EFortInventoryCustomFilter Filter);                                                           // [0xa5459c0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.EnableAllFilters
	// void EnableAllFilters();                                                                                                 // [0xc149780] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.DisableAllFilters
	// void DisableAllFilters();                                                                                                // [0xc149588] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.CommitCustomFilters
	// void CommitCustomFilters();                                                                                              // [0xc149284] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW
/// Size: 0x01D8 (0x0002E8 - 0x0004C0)
class UFortItemManagementInventoryPanel_STW : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1216;

public:
	SMember(FName)                                     CurrentFilterName                                           OFFSET(getStruct<T>, {0x338, 4, 0, 0})
	CMember(EInventoryContentSortType)                 CurrentSortType                                             OFFSET(get<T>, {0x33C, 1, 0, 0})
	CMember(class UClass*)                             FilterTabButtonType                                         OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(class UClass*)                             FilterTabButtonStyle                                        OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(TArray<FFortItemManagementInventoryFilterTabLabelInfo>) FilterTabLabelInfoArray                        OFFSET(get<T>, {0x350, 16, 0, 0})
	CMember(class UFortTabListWidgetBase*)             FilterTabList                                               OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(class UCommonLoadGuard*)                   TileViewLoadGuard                                           OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(class UFortItemTileView*)                  TileView                                                    OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(class UPanelWidget*)                       CraftingPanel                                               OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(class UCommonLoadGuard*)                   CraftingTileViewLoadGuard                                   OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(class UFortItemTileView*)                  CraftingTileView                                            OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(class UPanelWidget*)                       StoragePanel                                                OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(class UCommonLoadGuard*)                   StorageTileViewLoadGuard                                    OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(class UFortItemTileView*)                  StorageTileView                                             OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   MulchRestrictionReasonText                                  OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(EFortItemCardSize)                         SmallTileSize                                               OFFSET(get<T>, {0x3B0, 1, 0, 0})
	CMember(EFortItemCardSize)                         LargeTileSize                                               OFFSET(get<T>, {0x3B1, 1, 0, 0})
	CMember(TWeakObjectPtr<UFortItemManagementScreen_STW*>) HostItemManagementScreen                               OFFSET(get<T>, {0x3B4, 8, 0, 0})
	DMember(bool)                                      bCanDragItems                                               OFFSET(get<bool>, {0x3BC, 1, 0, 0})
	CMember(TArray<FQuickbarEquipSlotIndicesConfig>)   DefaultQuickbarEquipSlotIndicesConfigs                      OFFSET(get<T>, {0x3C0, 16, 0, 0})
	CMember(TMap<FName, int32_t>)                      QuickbarEquipSlotIndices                                    OFFSET(get<T>, {0x3D0, 80, 0, 0})
	CMember(class UFortInventoryContext*)              InventoryContext                                            OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(class UWidget*)                            WidgetToCenter                                              OFFSET(get<T>, {0x4B8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.UpdateSchematicTiles
	// void UpdateSchematicTiles();                                                                                             // [0xc150210] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.ToggleTileSize
	// void ToggleTileSize();                                                                                                   // [0xc14f950] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.TogglePrioritizeFavorites
	// void TogglePrioritizeFavorites();                                                                                        // [0xc14f84c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.SwitchPanelFocus
	// void SwitchPanelFocus();                                                                                                 // [0xc14f788] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.SetSortType
	// void SetSortType(EInventoryContentSortType SortType);                                                                    // [0xc14ef38] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.SetFilter
	// void SetFilter(FName FilterName);                                                                                        // [0xc14e654] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.RequestFocusEquipSlots
	// void RequestFocusEquipSlots();                                                                                           // [0xc14db48] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.RefreshCraftingSort
	// void RefreshCraftingSort();                                                                                              // [0xc14d99c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.OnMulchRestrictionTextShown
	// void OnMulchRestrictionTextShown(bool bShown);                                                                           // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.MarkAllItemsAsSeen
	// void MarkAllItemsAsSeen();                                                                                               // [0xc14d304] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.IsSwitchPanelAvailable
	// bool IsSwitchPanelAvailable();                                                                                           // [0xc14d1c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.IsSelectedItem
	// bool IsSelectedItem(class UFortItem* Item);                                                                              // [0xc14d110] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HasUnlockedStorageSlots
	// bool HasUnlockedStorageSlots();                                                                                          // [0xa545914] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleSetOfItemsToMulchChangedBP
	// void HandleSetOfItemsToMulchChangedBP();                                                                                 // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleQuickBarChangedBP
	// void HandleQuickBarChangedBP(EFortQuickBars QuickBarType);                                                               // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleItemBeginDrag
	// void HandleItemBeginDrag(class UObject* Item);                                                                           // [0xc14c738] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleInventoryUpdatedEvent
	// void HandleInventoryUpdatedEvent();                                                                                      // [0xc14c724] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleFocusEquipSlotsBP
	// void HandleFocusEquipSlotsBP();                                                                                          // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleFilterTabSelected
	// void HandleFilterTabSelected(FName TabNameID);                                                                           // [0xc14c550] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleFilterTabButtonCreated
	// void HandleFilterTabButtonCreated(FName TabNameID, class UCommonButtonBase* TabButton);                                  // [0xa5451ac] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleDifferentSortTypeSetBP
	// void HandleDifferentSortTypeSetBP();                                                                                     // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleDifferentItemManagementModeSetBP
	// void HandleDifferentItemManagementModeSetBP();                                                                           // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleDifferentFrontendInventoryFilterSetBP
	// void HandleDifferentFrontendInventoryFilterSetBP();                                                                      // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleDifferentFilterSetBP
	// void HandleDifferentFilterSetBP();                                                                                       // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleCustomInventoryFilterChanged
	// void HandleCustomInventoryFilterChanged();                                                                               // [0xc14c24c] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleCursorModeChangedBP
	// void HandleCursorModeChangedBP(bool bCursorModeEnabled, FName ActionName, class UUserWidget* CursorModeContentWidget);   // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleCursorModeChanged
	// void HandleCursorModeChanged(bool bCursorModeEnabled, FName ActionName, class UUserWidget* CursorModeContentWidget);     // [0xc14c144] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleCraftItemStarted
	// void HandleCraftItemStarted();                                                                                           // [0xc14c130] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.GetUpgradeItemDefinitionsForCurrentInventory
	// TArray<UFortItemDefinition*> GetUpgradeItemDefinitionsForCurrentInventory();                                             // [0xc14b7bc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.GetSupportedSortTypesForCurrentInventory
	// TArray<EInventoryContentSortType> GetSupportedSortTypesForCurrentInventory();                                            // [0xc14b780] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.GetShouldPrioritizeFavorites
	// bool GetShouldPrioritizeFavorites();                                                                                     // [0xa544cf4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.GetQualifiedFilterDisplayName
	// FText GetQualifiedFilterDisplayName();                                                                                   // [0xc14a99c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.CycleSortType
	// void CycleSortType();                                                                                                    // [0xc149558] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.CanDragItems
	// bool CanDragItems();                                                                                                     // [0xa544af4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.AdvanceSelection
	// void AdvanceSelection();                                                                                                 // [0xc148cf4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.AddItemStackToMulch
	// void AddItemStackToMulch(class UFortItem* Item, int32_t Count);                                                          // [0xa544994] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW
/// Size: 0x0070 (0x001520 - 0x001590)
class UFortItemManagementItemTileButton_STW : public UFortItemTileButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5520;

public:
	CMember(TWeakObjectPtr<UFortItemManagementScreen_STW*>) HostItemManagementScreen                               OFFSET(get<T>, {0x1518, 8, 0, 0})
	DMember(bool)                                      HasTheItemToDetail                                          OFFSET(get<bool>, {0x1520, 1, 0, 0})
	DMember(bool)                                      HasTheItemToCompareDetailsWith                              OFFSET(get<bool>, {0x1521, 1, 0, 0})
	DMember(bool)                                      HasAnItemMarkedForMulching                                  OFFSET(get<bool>, {0x1522, 1, 0, 0})
	DMember(int32_t)                                   MulchCount                                                  OFFSET(get<int32_t>, {0x1524, 4, 0, 0})
	CMember(class UOverlay*)                           NotCraftableOverlay                                         OFFSET(get<T>, {0x1528, 8, 0, 0})
	CMember(class UFortDynamicEntryBox*)               EquipSlotOverlay                                            OFFSET(get<T>, {0x1530, 8, 0, 0})
	CMember(class UMenuAnchor*)                        PopupMenuAnchor                                             OFFSET(get<T>, {0x1538, 8, 0, 0})
	DMember(bool)                                      ShowCollectionBookIndicator                                 OFFSET(get<bool>, {0x1540, 1, 0, 0})
	DMember(bool)                                      ShowRefundIndicator                                         OFFSET(get<bool>, {0x1541, 1, 0, 0})
	CMember(class UFortInventoryContext*)              InventoryContext                                            OFFSET(get<T>, {0x1588, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.UpdateEquipSlotOverlay
	// void UpdateEquipSlotOverlay(int32_t CurrentSlotIndex);                                                                   // [0xc15000c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.PopulateEquipSlotOverlay
	// void PopulateEquipSlotOverlay();                                                                                         // [0xc14d908] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.OnSlotItemComplete
	// void OnSlotItemComplete(class UFortAccountItem* SlottedItem, FName SlotId);                                              // [0xc14d3ec] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.IsValidEquipSlotOverlayIndex
	// bool IsValidEquipSlotOverlayIndex(int32_t SlotIndex);                                                                    // [0xc14d270] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleShowRefundIndicatorChanged
	// void HandleShowRefundIndicatorChanged();                                                                                 // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleShowCollectionBookIndicatorChanged
	// void HandleShowCollectionBookIndicatorChanged();                                                                         // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleItemMulchStateChanged
	// void HandleItemMulchStateChanged();                                                                                      // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleItemChangedBP
	// void HandleItemChangedBP();                                                                                              // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleHasItemToDetailChanged
	// void HandleHasItemToDetailChanged();                                                                                     // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleHasItemToCompareDetailsWithChanged
	// void HandleHasItemToCompareDetailsWithChanged();                                                                         // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleEquipSlotChanged
	// void HandleEquipSlotChanged(int32_t EquipSlot);                                                                          // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleDifferentItemManagementModeSetBP
	// void HandleDifferentItemManagementModeSetBP();                                                                           // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.GetPopupMenu
	// class UUserWidget* GetPopupMenu();                                                                                       // [0xa57a688] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.GetItemManagementMode
	// EFortItemManagementMode GetItemManagementMode();                                                                         // [0xc14a62c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.GetHomebaseSquadSlotForItem
	// FHomebaseSquadSlotId GetHomebaseSquadSlotForItem();                                                                      // [0xa57a25c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortItemManagementItemDetailsPanel_STW
/// Size: 0x0020 (0x0003C8 - 0x0003E8)
class UFortItemManagementItemDetailsPanel_STW : public UFortItemDetailsHostPanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1000;

public:
	DMember(bool)                                      HasItemMarkedForMulching                                    OFFSET(get<bool>, {0x3C8, 1, 0, 0})
	CMember(TWeakObjectPtr<UFortItemManagementScreen_STW*>) HostItemManagementScreen                               OFFSET(get<T>, {0x3CC, 8, 0, 0})
	CMember(class UFortInventoryContext*)              InventoryContext                                            OFFSET(get<T>, {0x3E0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemManagementItemDetailsPanel_STW.HandleHostSet
	// void HandleHostSet();                                                                                                    // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemDetailsPanel_STW.HandleHasItemMarkedForMulchingChanged
	// void HandleHasItemMarkedForMulchingChanged();                                                                            // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemDetailsPanel_STW.GetAmmoTypeItemDefinitions
	// TArray<UFortAmmoItemDefinition*> GetAmmoTypeItemDefinitions();                                                           // [0xa57935c] Final|Native|Static|Protected|BlueprintCallable|BlueprintPure 
};

/// Class /Script/SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW
/// Size: 0x0028 (0x0002E8 - 0x000310)
class UFortItemManagementMulchDetailsPanel_STW : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(class UFortItemQuantityListBase*)          ResourceList                                                OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   HostItemManagementMulchPanel                                OFFSET(get<T>, {0x2F0, 16, 0, 0})
	CMember(class UFortInventoryContext*)              InventoryContext                                            OFFSET(get<T>, {0x308, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.IsSpaceAvailableForMulch
	// bool IsSpaceAvailableForMulch();                                                                                         // [0xc14d1a0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.HandleSetOfItemsToMulchChangedBP
	// void HandleSetOfItemsToMulchChangedBP();                                                                                 // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.HandleHostSet
	// void HandleHostSet();                                                                                                    // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.GetItemsToMulch
	// TArray<UFortItem*> GetItemsToMulch();                                                                                    // [0xa57a4dc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.GetItemCountsToMulch
	// TArray<int32_t> GetItemCountsToMulch();                                                                                  // [0xa57a3b4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.CommitMulch
	// void CommitMulch();                                                                                                      // [0xa578bb0] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortItemManagementModeDetailsPanel_STW
/// Size: 0x0030 (0x0002E8 - 0x000318)
class UFortItemManagementModeDetailsPanel_STW : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(class UCommonWidgetSwitcherLegacy*)        ModeWidgetSwitcher                                          OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UFortItemDetailsActivatablePanel_STW*) DetailsModeItemDetailsPanel                               OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UFortItemDetailsActivatablePanel_STW*) ComparisonModeItemDetailsPanel                            OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UFortItemDetailsActivatablePanel_STW*) MulchModeItemDetailsPanel                                 OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortItemManagementScreen_STW*>) HostItemManagementScreen                               OFFSET(get<T>, {0x308, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemManagementModeDetailsPanel_STW.HandleHostSet
	// void HandleHostSet();                                                                                                    // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementModeDetailsPanel_STW.HandleDifferentItemManagementModeSetBP
	// void HandleDifferentItemManagementModeSetBP();                                                                           // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementModeDetailsPanel_STW.GetItemManagementMode
	// EFortItemManagementMode GetItemManagementMode();                                                                         // [0xc14a650] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortItemManagementScreen_STW
/// Size: 0x0208 (0x000400 - 0x000608)
class UFortItemManagementScreen_STW : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1544;

public:
	SMember(FMulticastInlineDelegate)                  OnItemViewRefreshed                                         OFFSET(getStruct<T>, {0x408, 16, 0, 0})
	CMember(EFortItemManagementMode)                   Mode                                                        OFFSET(get<T>, {0x4D8, 1, 0, 0})
	CMember(EFortFrontendInventoryFilter)              FrontendInventoryFilter                                     OFFSET(get<T>, {0x4D9, 1, 0, 0})
	DMember(bool)                                      bReadOnlyModeWIFE                                           OFFSET(get<bool>, {0x4DA, 1, 0, 0})
	DMember(bool)                                      ConsumeItemRequestInProgress                                OFFSET(get<bool>, {0x4DB, 1, 0, 0})
	CMember(class UFortItemManagementInventoryPanel_STW*) InventoryPanel                                           OFFSET(get<T>, {0x4E0, 8, 0, 0})
	CMember(class UFortItemManagementModeDetailsPanel_STW*) ModeDetailsPanel                                       OFFSET(get<T>, {0x4E8, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortItem*>)                ItemToDetail                                                OFFSET(get<T>, {0x4F0, 8, 0, 0})
	CMember(class UClass*)                             MulchConfirmationModalClass                                 OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(class UClass*)                             CustomFilterModalClass                                      OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(class UFortMulchConfirmationModalWidget*)  MulchConfirmationModal                                      OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(class UFortItemManagementCustomFilterModalWidget_STW*) CustomFilterModal                               OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(TMap<EInventoryContentSortType, FText>)    SortLabels                                                  OFFSET(get<T>, {0x538, 80, 0, 0})
	CMember(TMap<FName, FText>)                        MoreLabels                                                  OFFSET(get<T>, {0x588, 80, 0, 0})
	CMember(class UAthenaCustomizationPickerSortAndFilterBlade*) Blade_SortAndMore                                 OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(class UFortInventoryContext*)              InventoryContext                                            OFFSET(get<T>, {0x5F0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.UpdateSorts
	// void UpdateSorts();                                                                                                      // [0xc150224] Final|Native|Private|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.TransferItem
	// void TransferItem(class UFortItem* Item);                                                                                // [0xc14f964] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.ToggleSortAndMoreBlade
	// void ToggleSortAndMoreBlade();                                                                                           // [0xc14f8f4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.ToggleShowRefundIndicator
	// void ToggleShowRefundIndicator();                                                                                        // [0xc14f8c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.ToggleShowCollectionBookIndicator
	// void ToggleShowCollectionBookIndicator();                                                                                // [0xc14f89c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.ShowWarningReadOnlyWIFE
	// void ShowWarningReadOnlyWIFE(bool Force);                                                                                // [0x3d1d968] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.ShowMulchConfirmationModal
	// void ShowMulchConfirmationModal();                                                                                       // [0xc14f670] Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.ShowCustomFilterModal
	// void ShowCustomFilterModal();                                                                                            // [0xc14f648] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.SetFrontendInventoryFilter
	// void SetFrontendInventoryFilter(EFortFrontendInventoryFilter FrontendInventoryFilter);                                   // [0xc14e6d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.SetConsumeItemRequestInProgress
	// void SetConsumeItemRequestInProgress(bool InProgress);                                                                   // [0xc14e540] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.RequestPopupMenuForSelectedItem
	// void RequestPopupMenuForSelectedItem();                                                                                  // [0xc14db8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.OpenCraftingOptions
	// void OpenCraftingOptions(class UFortSchematicItem* SchematicItem);                                                       // [0xc14d5a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.OpenAutoMulchOptions
	// void OpenAutoMulchOptions();                                                                                             // [0xc14d594] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.NotifyPanelDeactivated
	// void NotifyPanelDeactivated();                                                                                           // [0xc14d3b4] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.NotifyPanelActivated
	// void NotifyPanelActivated();                                                                                             // [0xc14d37c] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.MarkAllItemsAsSeen
	// void MarkAllItemsAsSeen();                                                                                               // [0xc14d318] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.IsScreenWIFE
	// bool IsScreenWIFE();                                                                                                     // [0xc14d0ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.InspectItem
	// void InspectItem(class UFortItem* Item);                                                                                 // [0xc14cea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HideMulchConfirmationModal
	// void HideMulchConfirmationModal();                                                                                       // [0xc14ce68] Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HideCustomFilterModal
	// void HideCustomFilterModal();                                                                                            // [0xc14ce14] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HasItemBeenSeen
	// bool HasItemBeenSeen(class UFortAccountItem* AccountItem);                                                               // [0x98069a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HasDefaultItemsToMulch
	// bool HasDefaultItemsToMulch();                                                                                           // [0xc14cde8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleTransferItemBP
	// void HandleTransferItemBP(class UFortItem* Item);                                                                        // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleOpenCraftingOptionsBP
	// void HandleOpenCraftingOptionsBP(class UFortSchematicItem* SchematicItem);                                               // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleOpenAutoMulchOptionsBP
	// void HandleOpenAutoMulchOptionsBP();                                                                                     // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleMulchQuantitySelection
	// void HandleMulchQuantitySelection(class UFortItem* Item);                                                                // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleMoreButtonSelected
	// void HandleMoreButtonSelected(FName MoreNameId, class UCommonButtonBase* NewButton);                                     // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleItemToDetailChanged
	// void HandleItemToDetailChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);                          // [0xc14c8a4] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleItemToCompareWithChanged
	// void HandleItemToCompareWithChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);                     // [0xc14c7b8] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleInspectItemBP
	// void HandleInspectItemBP(class UFortItem* Item);                                                                         // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleEquipItemBP
	// void HandleEquipItemBP(class UFortItem* Item);                                                                           // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleDropItemBP
	// void HandleDropItemBP(class UFortItem* Item);                                                                            // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleDifferentItemManagementModeSetBP
	// void HandleDifferentItemManagementModeSetBP();                                                                           // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleCraftItemBP
	// void HandleCraftItemBP(class UFortSchematicItem* SchematicItem, EFortItemTier RequestedTier, int32_t CraftCount);        // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleCraftAndSlotItemBP
	// void HandleCraftAndSlotItemBP(class UFortSchematicItem* SchematicItem, EFortItemTier RequestedTier, int32_t CraftCount); // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleConsumeItemBP
	// void HandleConsumeItemBP(class UFortConsumableAccountItem* ConsumableItem);                                              // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.GuardActionForReadOnlyWIFE
	// bool GuardActionForReadOnlyWIFE();                                                                                       // [0xc14bebc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.GetShouldShowRefundIndicator
	// bool GetShouldShowRefundIndicator();                                                                                     // [0x38e680c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.GetShouldShowCollectionBookIndicator
	// bool GetShouldShowCollectionBookIndicator();                                                                             // [0x38e67f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.GetItemToDetail
	// class UFortItem* GetItemToDetail();                                                                                      // [0xc14a6e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.GetItemToCompareDetailsWith
	// class UFortItem* GetItemToCompareDetailsWith();                                                                          // [0xc14a6bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.EquipItem
	// void EquipItem(class UFortItem* Item);                                                                                   // [0xc149af8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.EnterMulchModeForAutoMulch
	// void EnterMulchModeForAutoMulch();                                                                                       // [0xc149ae4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.EnterMulchMode
	// void EnterMulchMode(class UFortItem* ItemToMulch);                                                                       // [0xc14997c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.EnterDetailsMode
	// void EnterDetailsMode(class UFortItem* ItemToDetail);                                                                    // [0xc1498fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.EnterComparisonMode
	// void EnterComparisonMode(class UFortItem* ItemToCompareDetailsWith);                                                     // [0xc1497e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.DropItem
	// void DropItem(class UFortItem* Item);                                                                                    // [0xc1496dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.CycleSortType
	// void CycleSortType();                                                                                                    // [0xc14956c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.CraftItem
	// void CraftItem(class UFortSchematicItem* SchematicItem, EFortItemTier RequestedTier, int32_t CraftCount);                // [0xc149460] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.CraftAndSlotItem
	// void CraftAndSlotItem(class UFortSchematicItem* SchematicItem, EFortItemTier RequestedTier, int32_t CraftCount);         // [0xc149368] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.ConsumeItem
	// void ConsumeItem(class UFortConsumableAccountItem* ConsumableItem);                                                      // [0xc1492d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.CanRequestPopupMenuForSelectedItem
	// bool CanRequestPopupMenuForSelectedItem();                                                                               // [0xc14919c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.CanEquipItem
	// bool CanEquipItem(class UFortItem* Item);                                                                                // [0xa5788ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.CancelInventoryPanelTileViewRefresh
	// void CancelInventoryPanelTileViewRefresh();                                                                              // [0xc1491bc] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.MainMenu_STW
/// Size: 0x0130 (0x000400 - 0x000530)
class UMainMenu_STW : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1328;

public:
	SMember(FText)                                     DefaultHelpText                                             OFFSET(getStruct<T>, {0x400, 24, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_CountDownTimer                                         OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_LeaveExperience                                      OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UCommonUserWidget*)                  Button_Leave                                                OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   ContextualHelpText                                          OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_BackBoard                                            OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(class UBackgroundBlur*)                    BackgroundBlur                                              OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(class UBorder*)                            BackgroundDarkener                                          OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_ReportPlayer                                         OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Logout                                               OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Support                                              OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Exit                                                 OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Settings                                             OFFSET(get<T>, {0x470, 8, 0, 0})
	SMember(FDataTableRowHandle)                       CloseMenuAction                                             OFFSET(getStruct<T>, {0x478, 16, 0, 0})
	SMember(FDataTableRowHandle)                       SwitchProfileAction                                         OFFSET(getStruct<T>, {0x488, 16, 0, 0})
	CMember(class UClass*)                             SettingsScreenClass                                         OFFSET(get<T>, {0x498, 8, 0, 0})
	SMember(FText)                                     LogoutTitle                                                 OFFSET(getStruct<T>, {0x4A0, 24, 0, 0})
	SMember(FText)                                     LogoutDescription                                           OFFSET(getStruct<T>, {0x4B8, 24, 0, 0})
	SMember(FText)                                     ExitTitle                                                   OFFSET(getStruct<T>, {0x4D0, 24, 0, 0})
	SMember(FText)                                     ExitDescription                                             OFFSET(getStruct<T>, {0x4E8, 24, 0, 0})
	DMember(bool)                                      bIsMainMenuOpen                                             OFFSET(get<bool>, {0x500, 1, 0, 0})
	CMember(class UFortCampaignTabsScreenBase*)        MainTabsScreen                                              OFFSET(get<T>, {0x528, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.MainMenu_STW.TryShowPrimaryContent
	// void TryShowPrimaryContent(TWeakObjectPtr<UClass*>& ContentWidgetClass);                                                 // [0xc14fa84] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.MainMenu_STW.TryShowModal
	// void TryShowModal(TWeakObjectPtr<UClass*>& ModalWidgetClass);                                                            // [0xc14f9e4] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.MainMenu_STW.ShouldShowLeaveExperienceButton
	// bool ShouldShowLeaveExperienceButton();                                                                                  // [0xc14f624] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.MainMenu_STW.IsActiveTabMainShop
	// bool IsActiveTabMainShop();                                                                                              // [0xc14cf20] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortUIStateWidget_STWFrontend
/// Size: 0x0070 (0x000418 - 0x000488)
class UFortUIStateWidget_STWFrontend : public UFortUIStateWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1160;

public:
	CMember(class UTopBar_STW*)                        TopBar_STW                                                  OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UCommonUserWidget*)                  BottomBar_STW                                               OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(class UFortActivatableChatWidget*)         ChatWidget_STW                                              OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortCampaignTabsScreenBase*>) MainTabsScreen                                           OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(class UClass*)                             PlayerBannedScreenClass                                     OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(TArray<class UClass*>)                     ScriptedActionsToRegister                                   OFFSET(get<T>, {0x448, 16, 0, 0})
	CMember(TArray<EFortStoreState>)                   DeferredSquadAutoSlottingStoreStates                        OFFSET(get<T>, {0x458, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortUIStateWidget_STWJoinServer
/// Size: 0x0028 (0x000418 - 0x000440)
class UFortUIStateWidget_STWJoinServer : public UFortUIStateWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
	CMember(class UFortRejoinWindowBase*)              RejoinWindow                                                OFFSET(get<T>, {0x418, 8, 0, 0})
	SMember(FDataTableRowHandle)                       TutorialCompleteStatHandle                                  OFFSET(getStruct<T>, {0x420, 16, 0, 0})
	CMember(class UClass*)                             RejoinWindowClass                                           OFFSET(get<T>, {0x430, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortUIStateWidget_STWJoinServer.OnShowTutorialDialog
	// void OnShowTutorialDialog();                                                                                             // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortUIStateWidget_STWJoinServer.HandleMatchmakingStateChange
	// void HandleMatchmakingStateChange(TEnumAsByte<EMatchmakingState> OldState, TEnumAsByte<EMatchmakingState> NewState);     // [0xc14cc14] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortUIStateWidget_STWJoinServer.HandleMatchmakingComplete
	// void HandleMatchmakingComplete(EMatchmakingCompleteResult MatchmakingResult);                                            // [0xc14cb44] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortUIStateWidget_STWJoinServer.HandleLobbyTimeUpdated
	// void HandleLobbyTimeUpdated(int32_t TimeRemaining);                                                                      // [0xc14cac4] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortUIStateWidget_STWJoinServer.HandleLobbyDisconnected
	// void HandleLobbyDisconnected();                                                                                          // [0xc14cab0] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.TopBar_STW
/// Size: 0x0098 (0x000400 - 0x000498)
class UTopBar_STW : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1176;

public:
	CMember(class UDataTable*)                         PhoenixSeasonDisplayInfoMap                                 OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(TMap<EFortUIFeatureStateReason, FText>)    ReasonDescriptions                                          OFFSET(get<T>, {0x418, 80, 0, 0})
	CMember(class UCommonButtonLegacy*)                Button_MainMenu                                             OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(class UMainMenu_STW*)                      MainMenu                                                    OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(class UImage*)                             Image_ActiveInvitesNotification                             OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(class UCommonButtonLegacy*)                Button_Social                                               OFFSET(get<T>, {0x480, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.TopBar_STW.SetOnlineFriendsCount
	// void SetOnlineFriendsCount(int32_t NewOnlineFriendsCount);                                                               // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.TopBar_STW.OnSocialMenuOpened
	// void OnSocialMenuOpened();                                                                                               // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.TopBar_STW.OnShouldShowPhoenixDisplay
	// void OnShouldShowPhoenixDisplay(bool bShow, class UFortPhoenixSeasonDisplayInfo* PhoenixDisplayInfo);                    // [0x3d1d968] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutGadgetPicker
/// Size: 0x0030 (0x000420 - 0x000450)
class UFortHeroLoadoutGadgetPicker : public UFortItemPickerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
	CMember(TWeakObjectPtr<UFortCampaignHeroLoadoutItem*>) TargetLoadoutItem                                       OFFSET(get<T>, {0x434, 8, 0, 0})
	DMember(int32_t)                                   TargetSlotIndex                                             OFFSET(get<int32_t>, {0x43C, 4, 0, 0})
	CMember(TArray<class UFortItem*>)                  TemporaryGadgetItemInstances                                OFFSET(get<T>, {0x440, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutGadgetPicker.SetTargetLoadoutSlot
	// void SetTargetLoadoutSlot(class UFortCampaignHeroLoadoutItem* LoadoutItem, int32_t SlotIndex);                           // [0xc14f218] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutGadgetPicker.HandleDifferentTargetLoadoutSlotSetBP
	// void HandleDifferentTargetLoadoutSlotSetBP();                                                                            // [0x3d1d968] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker
/// Size: 0x00D8 (0x000420 - 0x0004F8)
class UFortHeroLoadoutHeroPicker : public UFortItemPickerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1272;

public:
	CMember(class UFortTabListWidgetBase_Legacy*)      ExternalFilterTabList                                       OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortCampaignHeroLoadoutItem*>) TargetLoadoutItem                                       OFFSET(get<T>, {0x440, 8, 0, 0})
	SMember(FName)                                     TargetSlotName                                              OFFSET(getStruct<T>, {0x448, 4, 0, 0})
	CMember(class UClass*)                             FilterTabButtonType                                         OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(TMap<FName, FFortTabButtonLabelInfo>)      TabButtonLabelInfoMap                                       OFFSET(get<T>, {0x458, 80, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker.UpdateFilterTabList
	// void UpdateFilterTabList(FName PreviouslySelectedTab);                                                                   // [0xc15008c] Final|Native|Private|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker.SetTargetLoadoutSlot
	// void SetTargetLoadoutSlot(class UFortCampaignHeroLoadoutItem* LoadoutItem, FName& SlotName);                             // [0xc14f2dc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker.HandleFilterTabSelectedBP
	// void HandleFilterTabSelectedBP(FName TabID);                                                                             // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker.HandleFilterTabSelected
	// void HandleFilterTabSelected(FName TabID);                                                                               // [0xc14c4d0] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker.HandleDifferentTargetLoadoutSetBP
	// void HandleDifferentTargetLoadoutSetBP();                                                                                // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker.GetCurrentlySelectedTab
	// FName GetCurrentlySelectedTab();                                                                                         // [0xc149d84] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker.AssociateFilterTabList
	// void AssociateFilterTabList(class UFortTabListWidgetBase_Legacy* ExternalFilterTabList);                                 // [0xc148e0c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutHeroPickerFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortHeroLoadoutHeroPickerFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase
/// Size: 0x01B0 (0x000400 - 0x0005B0)
class UFortHeroLoadoutScreenBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1456;

public:
	CMember(class UFortItemView*)                      ItemViewObject                                              OFFSET(get<T>, {0x408, 8, 0, 0})
	SMember(FDataTableRowHandle)                       BackInputAction                                             OFFSET(getStruct<T>, {0x410, 16, 0, 0})
	SMember(FDataTableRowHandle)                       HelpInputAction                                             OFFSET(getStruct<T>, {0x420, 16, 0, 0})
	SMember(FDataTableRowHandle)                       CancelInputAction                                           OFFSET(getStruct<T>, {0x430, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ToggleDetailInputAction                                     OFFSET(getStruct<T>, {0x440, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ClearAllInputAction                                         OFFSET(getStruct<T>, {0x450, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ShowAllStatsInputAction                                     OFFSET(getStruct<T>, {0x460, 16, 0, 0})
	SMember(FDataTableRowHandle)                       InspectRootSlotsInputAction                                 OFFSET(getStruct<T>, {0x470, 16, 0, 0})
	SMember(FDataTableRowHandle)                       CyclePickerSortModeInputAction                              OFFSET(getStruct<T>, {0x480, 16, 0, 0})
	SMember(FDataTableRowHandle)                       InspectPickerInputAction                                    OFFSET(getStruct<T>, {0x490, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ToggleDescInputAction                                       OFFSET(getStruct<T>, {0x4A0, 16, 0, 0})
	DMember(bool)                                      AllowItemRotation                                           OFFSET(get<bool>, {0x550, 1, 0, 0})
	DMember(bool)                                      AllowItemZooming                                            OFFSET(get<bool>, {0x551, 1, 0, 0})
	DMember(bool)                                      AutomaticallyRegisterCameraView                             OFFSET(get<bool>, {0x552, 1, 0, 0})
	DMember(bool)                                      OverrideFixedCameras                                        OFFSET(get<bool>, {0x553, 1, 0, 0})
	CMember(class UDataTable*)                         ActionDataTable                                             OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   AnimationToHideItemInfo                                     OFFSET(get<T>, {0x560, 8, 0, 0})
	DMember(bool)                                      bAutoShowDetails                                            OFFSET(get<bool>, {0x568, 1, 0, 0})
	DMember(bool)                                      bItemDetailsHidden                                          OFFSET(get<bool>, {0x569, 1, 0, 0})
	DMember(float)                                     HideItemInfoHeaderDurationSecs                              OFFSET(get<float>, {0x56C, 4, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.ShowItemDetails
	// void ShowItemDetails();                                                                                                  // [0xc14f65c] Final|Native|Private|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.SetInputBindings
	// void SetInputBindings(bool ActivePickerBox, bool CommanderSlot, bool NoneSlot, bool CanClearAll);                        // [0xc14e980] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.SetHeroLoadout
	// void SetHeroLoadout(class UFortCampaignHeroLoadoutItem* HeroLoadout);                                                    // [0x3d1d968] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.PushItemInspectionScreen
	// void PushItemInspectionScreen(class UFortItem* ItemToInspect, EFortItemInspectionMode Mode, class UFortItemTileView* CycleTileView, bool bReadOnly, bool bAllowFavoriting, bool bIsTemporaryItem, bool bAllowRarityUpgrading); // [0xc124964] Final|Native|Private|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.OnVaultItemsViewed
	// void OnVaultItemsViewed(TArray<UFortItem*>& Items);                                                                      // [0xc14d4f8] Final|Native|Private|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.OnItemPreviewChanged
	// void OnItemPreviewChanged(class AActor* NewPrefab, class UFortItem* NewItem);                                            // [0x67b718c] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.IsLoadoutSwitchingAllowed
	// bool IsLoadoutSwitchingAllowed();                                                                                        // [0xc14d08c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.HideItemDetails
	// void HideItemDetails();                                                                                                  // [0xc14ce54] Final|Native|Private|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleToggleDescInputAction
	// void HandleToggleDescInputAction();                                                                                      // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleShowAllStatsInputAction
	// void HandleShowAllStatsInputAction();                                                                                    // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleInspectRootSlotsInputAction
	// void HandleInspectRootSlotsInputAction();                                                                                // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleInspectPickerInputAction
	// void HandleInspectPickerInputAction();                                                                                   // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleHelpInputAction
	// void HandleHelpInputAction();                                                                                            // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleDetailsInputAction
	// void HandleDetailsInputAction();                                                                                         // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleCyclePickerInputAction
	// void HandleCyclePickerInputAction();                                                                                     // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleClearAllInputAction
	// void HandleClearAllInputAction();                                                                                        // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleBackInputAction
	// void HandleBackInputAction();                                                                                            // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.GetWidgetForFramingViewedItem
	// class UWidget* GetWidgetForFramingViewedItem();                                                                          // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.GetIsReadOnly
	// bool GetIsReadOnly();                                                                                                    // [0xc14a5cc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutScreenLegacy
/// Size: 0x0000 (0x0006B8 - 0x0006B8)
class UFortHeroLoadoutScreenLegacy : public UFortActivatablePanelWithItemPreview
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1720;

public:


	/// Functions
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenLegacy.SetHeroLoadout
	// void SetHeroLoadout(class UFortCampaignHeroLoadoutItem* HeroLoadout);                                                    // [0x3d1d968] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenLegacy.IsLoadoutSwitchingAllowed
	// bool IsLoadoutSwitchingAllowed();                                                                                        // [0xc14d08c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenLegacy.GetIsReadOnly
	// bool GetIsReadOnly();                                                                                                    // [0xc14a5cc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutSlotButton
/// Size: 0x0040 (0x0014E0 - 0x001520)
class UFortHeroLoadoutSlotButton : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5408;

public:
	SMember(FName)                                     SlotName                                                    OFFSET(getStruct<T>, {0x14E0, 4, 0, 0})
	DMember(int32_t)                                   SlotIndex                                                   OFFSET(get<int32_t>, {0x14E4, 4, 0, 0})
	CMember(EHeroLoadoutSlotType)                      SlotType                                                    OFFSET(get<T>, {0x14E8, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRequestChangeHero                                         OFFSET(getStruct<T>, {0x14F0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnContextMenuOpenChanged                                    OFFSET(getStruct<T>, {0x1500, 16, 0, 0})
	CMember(class UMenuAnchor*)                        ContextMenuAnchor                                           OFFSET(get<T>, {0x1510, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutSlotButton.OnRequestChangeHero__DelegateSignature
	// void OnRequestChangeHero__DelegateSignature(class UFortHeroLoadoutSlotButton* SlotButton);                               // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutSlotButton.OnMenuOpenChangedEvent__DelegateSignature
	// void OnMenuOpenChangedEvent__DelegateSignature(class UFortHeroLoadoutSlotButton* SlotButton, bool bIsMenuOpen);          // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutSlotButton.IsContextMenuOpen
	// bool IsContextMenuOpen();                                                                                                // [0xc14cfac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutSlotButton.HandleMenuOpenChanged
	// void HandleMenuOpenChanged(bool bIsMenuOpen);                                                                            // [0xc14cce8] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutTeamPerkPicker
/// Size: 0x0020 (0x000420 - 0x000440)
class UFortHeroLoadoutTeamPerkPicker : public UFortItemPickerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
	CMember(TWeakObjectPtr<UFortCampaignHeroLoadoutItem*>) TargetLoadoutItem                                       OFFSET(get<T>, {0x434, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutTeamPerkPicker.SetTargetLoadout
	// void SetTargetLoadout(class UFortCampaignHeroLoadoutItem* LoadoutItem);                                                  // [0xc14f198] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutTeamPerkPicker.HandleDifferentTargetLoadoutSetBP
	// void HandleDifferentTargetLoadoutSetBP();                                                                                // [0x3d1d968] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortCampaignTabsScreenBase
/// Size: 0x0078 (0x000400 - 0x000478)
class UFortCampaignTabsScreenBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1144;

public:
	CMember(TMap<EFortUIFeature, FName>)               FeaturesTabsMap                                             OFFSET(get<T>, {0x400, 80, 0, 0})
	CMember(class UHorizontalBox*)                     TopTabContainer                                             OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(class UFortTabListWidgetBase*)             TopTabList                                                  OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(class UClass*)                             MainTabSet                                                  OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(class UCommonAnimatedSwitcher*)            Switcher_TabContent                                         OFFSET(get<T>, {0x470, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase.UpdateItemShopButtonBang
	// void UpdateItemShopButtonBang(FName Tab);                                                                                // [0xc15010c] Native|Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase.ShouldShowItemShopBang
	// bool ShouldShowItemShopBang();                                                                                           // [0xc14f5e4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase.HandleMainTabSelected
	// void HandleMainTabSelected(FName TabNameID);                                                                             // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase.HandleMainTabCreated
	// void HandleMainTabCreated(FName TabNameID, class UCommonButtonBase* TabButton);                                          // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase.HandleFeatureStateChanged
	// void HandleFeatureStateChanged(EFortUIFeature ChangedFeature, EFortUIFeatureState NewState, EFortUIFeatureStateReason Reason); // [0xc14c2e0] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase.ConstructTabs
	// void ConstructTabs();                                                                                                    // [0xc1492ac] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy
/// Size: 0x0070 (0x000538 - 0x0005A8)
class UFortCampaignTabsScreenBase_Legacy : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1448;

public:
	CMember(TMap<EFortUIFeature, FName>)               FeaturesTabsMap                                             OFFSET(get<T>, {0x538, 80, 0, 0})
	CMember(class UHorizontalBox*)                     TopTabContainer                                             OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(class UFortTabListWidgetBase_Legacy*)      TopTabList                                                  OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(class UClass*)                             MainTabSet                                                  OFFSET(get<T>, {0x598, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy.HandleMainTabSelected
	// void HandleMainTabSelected(FName TabNameID);                                                                             // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy.HandleMainTabCreated
	// void HandleMainTabCreated(FName TabNameID, class UCommonButtonBase* TabButton);                                          // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy.HandleFeatureStateChanged
	// void HandleFeatureStateChanged(EFortUIFeature ChangedFeature, EFortUIFeatureState NewState, EFortUIFeatureStateReason Reason); // [0xc14c3d8] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy.HandleFeatureNavigateRequest
	// void HandleFeatureNavigateRequest(EFortUIFeature Feature);                                                               // [0xc14c260] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy.ConstructTabs
	// void ConstructTabs();                                                                                                    // [0xc1492c0] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.StoreCardObject
/// Size: 0x0020 (0x000028 - 0x000048)
class UStoreCardObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FCard)                                     Card                                                        OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	DMember(int32_t)                                   OriginalIndex                                               OFFSET(get<int32_t>, {0x40, 4, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortStoreSummary
/// Size: 0x0048 (0x000538 - 0x000580)
class UFortStoreSummary : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	CMember(TArray<class UStoreCardObject*>)           StoreCardObjects                                            OFFSET(get<T>, {0x540, 16, 0, 0})
	CMember(class UCommonTileView*)                    TileView                                                    OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(class UClass*)                             MulchConfirmationModalClass                                 OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(class UFortMulchConfirmationModalWidget*)  MulchConfirmationModal                                      OFFSET(get<T>, {0x578, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortStoreSummary.ShowMulchConfirmationModal
	// void ShowMulchConfirmationModal();                                                                                       // [0xc14f68c] Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary.SetIsInChoiceSelectionMode
	// void SetIsInChoiceSelectionMode(bool InIsInChoiceSelectionMode);                                                         // [0xc14ec38] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary.SetCards
	// void SetCards(TArray<FCard>& Cards);                                                                                     // [0xc14de80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary.NotifyPanelDeactivated
	// void NotifyPanelDeactivated();                                                                                           // [0xc14d3d0] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary.NotifyPanelActivated
	// void NotifyPanelActivated();                                                                                             // [0xc14d398] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary.MarkDefaultItemsForMulch
	// void MarkDefaultItemsForMulch();                                                                                         // [0xc14d340] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary.HideMulchConfirmationModal
	// void HideMulchConfirmationModal();                                                                                       // [0xc14ce84] Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary.HandleContextMenuOpenChangedBP
	// void HandleContextMenuOpenChangedBP(bool bIsOpen);                                                                       // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortStoreSummary.HandleContextMenuOpenChanged
	// void HandleContextMenuOpenChanged(bool bIsOpen);                                                                         // [0xc14c030] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortStoreSummary.GetIsInChoiceSelectionMode
	// bool GetIsInChoiceSelectionMode();                                                                                       // [0xc14a5b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortStoreSummary.FinalizeFavoriteStatus
	// void FinalizeFavoriteStatus();                                                                                           // [0xc149b78] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary.CloseSummaryScreen
	// void CloseSummaryScreen();                                                                                               // [0x3d1d968] Event|Public|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortStoreSummaryItemButton
/// Size: 0x0050 (0x0014E0 - 0x001530)
class UFortStoreSummaryItemButton : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5424;

public:
	DMember(bool)                                      HasAnItemMarkedForMulching                                  OFFSET(get<bool>, {0x14E0, 1, 0, 0})
	CMember(class UMenuAnchor*)                        PopupMenuAnchor                                             OFFSET(get<T>, {0x1510, 8, 0, 0})
	CMember(class UStoreCardObject*)                   StoreCardObject                                             OFFSET(get<T>, {0x1518, 8, 0, 0})
	CMember(class UFortInventoryContext*)              InventoryContext                                            OFFSET(get<T>, {0x1520, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton.UpdateMulchListWithItem
	// void UpdateMulchListWithItem(bool bAddingItem);                                                                          // [0xc150190] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton.SetStoreCardObject
	// void SetStoreCardObject(class UStoreCardObject* CardObject);                                                             // [0xc14efb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton.HandleMenuOpenChanged
	// void HandleMenuOpenChanged(bool bIsOpen);                                                                                // [0xc14cd68] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton.HandleItemMulchStateChanged
	// void HandleItemMulchStateChanged();                                                                                      // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton.GetStoreCardObject
	// class UStoreCardObject* GetStoreCardObject();                                                                            // [0x9b67480] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton.GetPopupMenu
	// class UUserWidget* GetPopupMenu();                                                                                       // [0xc14a820] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy
/// Size: 0x0050 (0x0014E0 - 0x001530)
class UFortStoreSummaryItemButton_Legacy : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5424;

public:
	DMember(bool)                                      HasAnItemMarkedForMulching                                  OFFSET(get<bool>, {0x14E0, 1, 0, 0})
	CMember(class UMenuAnchor*)                        PopupMenuAnchor                                             OFFSET(get<T>, {0x1510, 8, 0, 0})
	CMember(class UStoreCardObject*)                   StoreCardObject                                             OFFSET(get<T>, {0x1518, 8, 0, 0})
	CMember(class UFortInventoryContext*)              InventoryContext                                            OFFSET(get<T>, {0x1520, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.UpdateMulchListWithItem
	// void UpdateMulchListWithItem(bool bAddingItem);                                                                          // [0xc150190] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.SetStoreCardObject
	// void SetStoreCardObject(class UStoreCardObject* CardObject);                                                             // [0xc14f0a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.OnContextMenuOpenChangedEvent__DelegateSignature
	// void OnContextMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);                                                     // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.HandleMenuOpenChanged
	// void HandleMenuOpenChanged(bool bIsOpen);                                                                                // [0xc14cd68] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.HandleItemMulchStateChanged
	// void HandleItemMulchStateChanged();                                                                                      // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.GetStoreCardObject
	// class UStoreCardObject* GetStoreCardObject();                                                                            // [0x9b67480] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.GetPopupMenu
	// class UUserWidget* GetPopupMenu();                                                                                       // [0xc14a820] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortStoreSummaryItemPopupMenu
/// Size: 0x0008 (0x000558 - 0x000560)
class UFortStoreSummaryItemPopupMenu : public UFortPopupMenu
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:


	/// Functions
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemPopupMenu.MulchItem
	// void MulchItem();                                                                                                        // [0xc14d354] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemPopupMenu.HandleItemChanged
	// void HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);                                  // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemPopupMenu.GetHostButton
	// class UFortStoreSummaryItemButton* GetHostButton();                                                                      // [0xc14a56c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortStoreSummaryItemPopupMenu_Legacy
/// Size: 0x0008 (0x000558 - 0x000560)
class UFortStoreSummaryItemPopupMenu_Legacy : public UFortPopupMenu_Legacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:


	/// Functions
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemPopupMenu_Legacy.MulchItem
	// void MulchItem();                                                                                                        // [0xc14d368] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemPopupMenu_Legacy.HandleItemChanged
	// void HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);                                  // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemPopupMenu_Legacy.GetHostButton
	// class UFortStoreSummaryItemButton_Legacy* GetHostButton();                                                               // [0xc14a590] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortStoreSummary_Legacy
/// Size: 0x0048 (0x000538 - 0x000580)
class UFortStoreSummary_Legacy : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	CMember(TArray<class UStoreCardObject*>)           StoreCardObjects                                            OFFSET(get<T>, {0x540, 16, 0, 0})
	CMember(class UCommonTileView*)                    TileView                                                    OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(class UClass*)                             MulchConfirmationModalClass                                 OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(class UFortMulchConfirmationModalWidget*)  MulchConfirmationModal                                      OFFSET(get<T>, {0x578, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.ShowMulchConfirmationModal
	// void ShowMulchConfirmationModal();                                                                                       // [0xc14f68c] Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.SetIsInChoiceSelectionMode
	// void SetIsInChoiceSelectionMode(bool InIsInChoiceSelectionMode);                                                         // [0xc14ec38] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.SetCards
	// void SetCards(TArray<FCard>& Cards);                                                                                     // [0xc14de80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.NotifyPanelDeactivated
	// void NotifyPanelDeactivated();                                                                                           // [0xc14d3d0] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.NotifyPanelActivated
	// void NotifyPanelActivated();                                                                                             // [0xc14d398] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.MarkDefaultItemsForMulch
	// void MarkDefaultItemsForMulch();                                                                                         // [0xc14d340] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.HideMulchConfirmationModal
	// void HideMulchConfirmationModal();                                                                                       // [0xc14ce84] Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.HandleContextMenuOpenChangedBP
	// void HandleContextMenuOpenChangedBP(bool bIsOpen);                                                                       // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.HandleContextMenuOpenChanged
	// void HandleContextMenuOpenChanged(bool bIsOpen);                                                                         // [0xc14c0b0] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.GetIsInChoiceSelectionMode
	// bool GetIsInChoiceSelectionMode();                                                                                       // [0xc14a5b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.FinalizeFavoriteStatus
	// void FinalizeFavoriteStatus();                                                                                           // [0xc149bc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.CloseSummaryScreen
	// void CloseSummaryScreen();                                                                                               // [0x3d1d968] Event|Public|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutGadgetTileBase
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UFortHeroLoadoutGadgetTileBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	CMember(class UCommonTextBlock*)                   Text_GadgetName                                             OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UCommonLazyImage*)                   Image_Icon                                                  OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class URichTextBlock*)                     RichText_Description                                        OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UFortGadgetItemDefinition*)          GadgetToRepresent                                           OFFSET(get<T>, {0x300, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutGadgetTileBase.SetGadgetToRepresent
	// void SetGadgetToRepresent(class UFortGadgetItemDefinition* GadgetItemDefinition);                                        // [0xc14e754] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutGadgetTileBase.OnGadgetUpdated
	// void OnGadgetUpdated(bool bIsValidGadget);                                                                               // [0x3d1d968] Event|Public|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutInGameScreenBase
/// Size: 0x0050 (0x000538 - 0x000588)
class UFortHeroLoadoutInGameScreenBase : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1416;

public:
	CMember(TArray<FFortInGamePerkDisplayData>)        PerksDisplayData                                            OFFSET(get<T>, {0x538, 16, 0, 0})
	CMember(class UClass*)                             TileClass                                                   OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(class UScrollBox*)                         ScrollBox_Content                                           OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(class UFortItemDetailsHostPanel*)          ItemDetailsHostPanel_Header                                 OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(class UGridPanel*)                         GridPanel_Perks                                             OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(class UFortHeroLoadoutGadgetTileBase*)     GadgetTile_Gadget1                                          OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(class UFortHeroLoadoutGadgetTileBase*)     GadgetTile_Gadget2                                          OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(TArray<class UFortHeroLoadoutGadgetTileBase*>) GadgetTiles                                             OFFSET(get<T>, {0x578, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutInGameScreenBase.OnPerkWidgetAdded
	// void OnPerkWidgetAdded(class UGridSlot* GridSlot);                                                                       // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutInGameScreenBase.GetGadgetDefinitionBySlot
	// class UFortGadgetItemDefinition* GetGadgetDefinitionBySlot(int32_t SlotIndex);                                           // [0xc14a4e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutPerkTileBase
/// Size: 0x0088 (0x0002E8 - 0x000370)
class UFortHeroLoadoutPerkTileBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	CMember(TEnumAsByte<EFortBrushSize>)               BrushSize                                                   OFFSET(get<T>, {0x2E8, 1, 0, 0})
	DMember(bool)                                      bShowSummaryDescription                                     OFFSET(get<bool>, {0x2E9, 1, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_PerkName                                               OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class URichTextBlock*)                     Text_Description                                            OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UFortLazyImage*)                     Image_PerkIcon                                              OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UHorizontalBox*)                     Hbox_PerkDetails                                            OFFSET(get<T>, {0x308, 8, 0, 0})
	SMember(FText)                                     ActiveText                                                  OFFSET(getStruct<T>, {0x310, 24, 0, 0})
	SMember(FText)                                     InactiveText                                                OFFSET(getStruct<T>, {0x328, 24, 0, 0})
	DMember(float)                                     InactiveOpacity                                             OFFSET(get<float>, {0x340, 4, 0, 0})
	DMember(float)                                     ActiveOpacity                                               OFFSET(get<float>, {0x344, 4, 0, 0})
	CMember(class UFortAbilityKit*)                    AbilityKit                                                  OFFSET(get<T>, {0x348, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutPerkTileBase.OnPerkInitialized
	// void OnPerkInitialized(EFortHeroPerkDisplayType InPerkType, bool bActive, bool bShowWarning);                            // [0x3d1d968] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortAlterationModOptinScreenBase
/// Size: 0x0018 (0x000538 - 0x000550)
class UFortAlterationModOptinScreenBase : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1360;

public:
	CMember(class UFortItem*)                          ItemToOptin                                                 OFFSET(get<T>, {0x538, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortAlterationModOptinScreenBase.SetupItem
	// void SetupItem(class UFortItem* Item);                                                                                   // [0xc14f564] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortAlterationModOptinScreenBase.RequestClose
	// void RequestClose(bool bCancelled);                                                                                      // [0xc14d9f4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortAlterationModOptinScreenBase.OnSetupItem
	// void OnSetupItem();                                                                                                      // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortAlterationModOptinScreenBase.OnItemConversionComplete
	// void OnItemConversionComplete();                                                                                         // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortAlterationModOptinScreenBase.ConvertItemAlterations
	// void ConvertItemAlterations();                                                                                           // [0xc149354] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortAlterationModScreenBase
/// Size: 0x0060 (0x000570 - 0x0005D0)
class UFortAlterationModScreenBase : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
	CMember(class UFortAlterationsWidget*)             AlterationsToEdit                                           OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(class UFortAlterationOptionsBase*)         AlterationSlotOptions                                       OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(class UFortItemDetailsHostPanel*)          ItemInspectionMainItemDetailsHostPanel                      OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(class UFortItemDetailsHostPanel*)          AlterationsExtraDetailsPanel                                OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(class UClass*)                             AlterationModOptinScreenClass                               OFFSET(get<T>, {0x590, 8, 0, 0})
	SMember(FDataTableRowHandle)                       BackInputAction                                             OFFSET(getStruct<T>, {0x598, 16, 0, 0})
	CMember(TWeakObjectPtr<UFortAlterableItem*>)       AlterableItem                                               OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(class UFortAlterationOption*)              CurrentAlterationOptionInternal                             OFFSET(get<T>, {0x5B0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.SetItemForAlterationsModding
	// void SetItemForAlterationsModding(class UFortAlterableItem* InAlterableItem);                                            // [0xc14ecb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.RefreshItemAndAlterationsBP
	// void RefreshItemAndAlterationsBP();                                                                                      // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.OnItemSlotChanged
	// void OnItemSlotChanged(bool SelectedSlot);                                                                               // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.OnAlterationOptionChanged
	// void OnAlterationOptionChanged(class UFortAlterationOption* CurrentAlterationOption);                                    // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.OnAlterationModificationSucess
	// void OnAlterationModificationSucess(int32_t ModifiedSlotIndex);                                                          // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.OnAlterationModificationStarted
	// void OnAlterationModificationStarted();                                                                                  // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.OnAlterationModificationCompleted
	// void OnAlterationModificationCompleted();                                                                                // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.HandleBackAction
	// void HandleBackAction(bool& bPassThrough);                                                                               // [0xc14bfa4] Final|Native|Private|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.ConfirmSelection
	// void ConfirmSelection();                                                                                                 // [0xc149298] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.CancelSelection
	// void CancelSelection();                                                                                                  // [0xc149220] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.AreIngredientRequirementsMent
	// bool AreIngredientRequirementsMent(TArray<FFortItemQuantityPair>& RequiredIngredients);                                  // [0xc148d08] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortItemInspectionScreen
/// Size: 0x00F8 (0x0006B8 - 0x0007B0)
class UFortItemInspectionScreen : public UFortActivatablePanelWithItemPreview
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1968;

public:
	CMember(EFortItemInspectionMode)                   CurrentInspectMode                                          OFFSET(get<T>, {0x6B8, 1, 0, 0})
	CMember(TWeakObjectPtr<UFortItem*>)                InspectedItem                                               OFFSET(get<T>, {0x6BC, 8, 0, 0})
	DMember(bool)                                      UpgradeAllowed                                              OFFSET(get<bool>, {0x6C4, 1, 0, 0})
	DMember(bool)                                      EvolveAllowed                                               OFFSET(get<bool>, {0x6C5, 1, 0, 0})
	DMember(bool)                                      FavoriteAllowed                                             OFFSET(get<bool>, {0x6C6, 1, 0, 0})
	DMember(bool)                                      RarityUpgradingAllowed                                      OFFSET(get<bool>, {0x6C7, 1, 0, 0})
	DMember(bool)                                      IsPreviewing                                                OFFSET(get<bool>, {0x6C8, 1, 0, 0})
	DMember(bool)                                      bHasSeenRefundHelpPrompt                                    OFFSET(get<bool>, {0x6C9, 1, 0, 0})
	CMember(class UFortItemInspectCycleWidget*)        CycleWidget                                                 OFFSET(get<T>, {0x6D0, 8, 0, 0})
	SMember(FGameplayTagQuery)                         InspectAnimationTag                                         OFFSET(getStruct<T>, {0x6D8, 72, 0, 0})
	CMember(class UClass*)                             AlterationModOptinScreenClass                               OFFSET(get<T>, {0x720, 8, 0, 0})
	CMember(class UClass*)                             AlterationModScreenClass                                    OFFSET(get<T>, {0x728, 8, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               RefundDescriptionsDataTable                                 OFFSET(get<T>, {0x730, 32, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.SetItemToRepresent
	// void SetItemToRepresent(class UFortItem* Item);                                                                          // [0xc14edb8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.SetInspectionMode
	// void SetInspectionMode(EFortItemInspectionMode NewInspectMode);                                                          // [0xc14ebb8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.SetAttemptingConversion
	// void SetAttemptingConversion(bool bIsAttemptingConversion);                                                              // [0xc14ddf8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.OpenItemInspect
	// void OpenItemInspect(class UFortItem* ItemToInspect, EFortItemInspectionMode Mode, bool ShouldAllowUpgrading, bool ShouldAllowEvolution, bool ShouldAllowFavorite, bool IsTemporaryItem, bool bAllowRarityUpgrading, int32_t QuantityOverride, class UFortItemTileView* TileViewWidget); // [0xc14d64c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.IsItemSlottedInCollectionBook
	// bool IsItemSlottedInCollectionBook(class UFortItem* Item);                                                               // [0xc14cfe0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.HandleItemToInspectDestroyedBP
	// void HandleItemToInspectDestroyedBP();                                                                                   // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.HandleItemToInspectDestroyed
	// void HandleItemToInspectDestroyed();                                                                                     // [0xc14ca9c] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.HandleItemToInspectChangedBP
	// void HandleItemToInspectChangedBP(bool bWasFavoritedChanged);                                                            // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.HandleItemToInspectChanged
	// void HandleItemToInspectChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);                         // [0xc14c990] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.HandleIsPreviewingChanged
	// void HandleIsPreviewingChanged();                                                                                        // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.HandleDifferentItemToInspectSetBP
	// void HandleDifferentItemToInspectSetBP();                                                                                // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.HandleDifferentInspectionModeSetBP
	// void HandleDifferentInspectionModeSetBP();                                                                               // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.GetRefundResultItem
	// class UFortAccountItem* GetRefundResultItem();                                                                           // [0xc14aa24] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.GetRefundDescriptionText
	// FText GetRefundDescriptionText();                                                                                        // [0xc14a9e0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.GetItemQuantityOverride
	// int32_t GetItemQuantityOverride();                                                                                       // [0xc14a680] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.GetCycleWidget
	// class UFortItemInspectCycleWidget* GetCycleWidget();                                                                     // [0x977166c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.DoesItemHaveLegacyAlterations
	// bool DoesItemHaveLegacyAlterations();                                                                                    // [0xc149670] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.DoAlterationModification
	// void DoAlterationModification();                                                                                         // [0xc1495b8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortItemInspectCycleWidget
/// Size: 0x0050 (0x0002E8 - 0x000338)
class UFortItemInspectCycleWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	SMember(FMulticastInlineDelegate)                  OnItemToRepresentChanged                                    OFFSET(getStruct<T>, {0x2E8, 16, 0, 0})
	CMember(TWeakObjectPtr<UFortItemTileView*>)        ItemTileView                                                OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortItem*>)                ItemToRepresent                                             OFFSET(get<T>, {0x300, 8, 0, 0})
	SMember(FDataTableRowHandle)                       PreviousItemActionRowHandle                                 OFFSET(getStruct<T>, {0x308, 16, 0, 0})
	SMember(FDataTableRowHandle)                       NextItemActionRowHandle                                     OFFSET(getStruct<T>, {0x318, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemInspectCycleWidget.SetupActionHandlers
	// void SetupActionHandlers();                                                                                              // [0xc14f550] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemInspectCycleWidget.SetOwningItemInspectScreen
	// void SetOwningItemInspectScreen(class UFortItemInspectionScreen* ItemInspect);                                           // [0xc14ee38] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemInspectCycleWidget.SetItemToRepresent
	// void SetItemToRepresent(class UFortItem* NewItemToRepresent);                                                            // [0xc14ed38] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemInspectCycleWidget.SelectPreviousItem
	// void SelectPreviousItem();                                                                                               // [0xc14dde0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemInspectCycleWidget.SelectNextItem
	// void SelectNextItem();                                                                                                   // [0xc14ddc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemInspectCycleWidget.SelectItemWithOffset
	// void SelectItemWithOffset(int32_t Offset);                                                                               // [0xc14dd48] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemInspectCycleWidget.OnItemCycled
	// void OnItemCycled(class UFortItem* OldItem, class UFortItem* NewItem, int32_t OffsetFromPreviousItem);                   // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemInspectCycleWidget.GetItemWithOffset_BP
	// class UFortItem* GetItemWithOffset_BP(int32_t IndexOffset);                                                              // [0xc14a704] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortAlterationOption
/// Size: 0x0040 (0x0014E0 - 0x001520)
class UFortAlterationOption : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5408;

public:
	SMember(FAlterationOption)                         AlterationOption                                            OFFSET(getStruct<T>, {0x14E8, 48, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortAlterationOption.Setup
	// void Setup(FAlterationOption& InAlterationOption, EFortAlterationOptionType InAlterationOptionType);                     // [0xc14f3ac] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortAlterationOption.OnSetup
	// void OnSetup();                                                                                                          // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortAlterationOption.GetRequiredIngredients
	// TArray<FFortItemQuantityPair> GetRequiredIngredients();                                                                  // [0xc14aa48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortAlterationOption.GetNextPipCount
	// float GetNextPipCount(float MaxPipCount);                                                                                // [0xc14a790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortAlterationOption.GetCurrentPipCount
	// float GetCurrentPipCount(float MaxPipCount);                                                                             // [0xc149cdc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortAlterationOption.GetAlterationOptionType
	// EFortAlterationOptionType GetAlterationOptionType();                                                                     // [0xc149cc4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortAlterationOption.GetAlterationDefinition
	// class UFortAlterationItemDefinition* GetAlterationDefinition();                                                          // [0xc149ca0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortAlterationOptionsBase
/// Size: 0x00A0 (0x0002E8 - 0x000388)
class UFortAlterationOptionsBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	CMember(class UClass*)                             AlterationOptionClass                                       OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UCommonButtonGroupLegacy*)           AlterationOptionButtons                                     OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UFortAlterableItem*)                 Item                                                        OFFSET(get<T>, {0x328, 8, 0, 0})
	DMember(int32_t)                                   SlotIndex                                                   OFFSET(get<int32_t>, {0x330, 4, 0, 0})
	DMember(bool)                                      bUpgradeOptionExists                                        OFFSET(get<bool>, {0x334, 1, 0, 0})
	SMember(FAlterationOption)                         UpgradeOption                                               OFFSET(getStruct<T>, {0x338, 48, 0, 0})
	CMember(TArray<FAlterationOption>)                 RespecOptions                                               OFFSET(get<T>, {0x368, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortAlterationOptionsBase.ProcessAlterationOptions
	// void ProcessAlterationOptions(bool bIntroAlterations);                                                                   // [0xc14d91c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortAlterationOptionsBase.OnItemChanged
	// void OnItemChanged(bool bIntroAlterations);                                                                              // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortAlterationOptionsBase.OnGenerateOption
	// void OnGenerateOption(EFortAlterationOptionType OptionType, class UFortAlterationOption* OptionWidget);                  // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortAlterationOptionsBase.IsValidAlterationSlot
	// bool IsValidAlterationSlot();                                                                                            // [0xc14d244] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortAlterationOptionsBase.HandleAlterationsOptionSelected
	// void HandleAlterationsOptionSelected(class UCommonButtonLegacy* AlterationOptionButton, int32_t GroupIndex);             // [0xc14bee0] Final|Native|Public  
	// Function /Script/SaveTheWorldUI.FortAlterationOptionsBase.HandleAlterationsOptionHovered
	// void HandleAlterationsOptionHovered(class UCommonButtonLegacy* AlterationOptionButton, int32_t GroupIndex);              // [0xc14bee0] Final|Native|Public  
	// Function /Script/SaveTheWorldUI.FortAlterationOptionsBase.DoAlterationOptionsExist
	// bool DoAlterationOptionsExist(EFortAlterationOptionType OptionType);                                                     // [0xc1495cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortMissionActivationInfoSTW
/// Size: 0x0150 (0x000028 - 0x000178)
class UFortMissionActivationInfoSTW : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	DMember(bool)                                      bIsMultiplayer                                              OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(class AFortPlayerController*)              FortPC                                                      OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class AFortGameStateZone*)                 GameStateZone                                               OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UCurveFloat*)                        DifficultyIncreaseBluGloCurve                               OFFSET(get<T>, {0xB0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.TimeSecondsToText
	// FText TimeSecondsToText(float InSeconds);                                                                                // [0xa604348] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.SubmitVote
	// void SubmitVote(EFortVoteType VoteType, bool bApprove);                                                                  // [0xc14f6a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.RequestVote
	// void RequestVote(EFortVoteType VoteType, float VoteDuration, float FailedVoteLockOutDuration, EFortVoteArbitratorType ArbitratorType); // [0xc14dc0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.IsVoteLocked
	// bool IsVoteLocked(EFortVoteType VoteType);                                                                               // [0xa5fdec0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.IsVoteActive
	// bool IsVoteActive(EFortVoteType VoteType);                                                                               // [0xa5fde34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.IsPlayerVoteInstigator
	// bool IsPlayerVoteInstigator(EFortVoteType VoteType);                                                                     // [0xa5fdd84] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.IsAnyVoteActive
	// bool IsAnyVoteActive();                                                                                                  // [0xa5fdc9c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.HasPlayerVoted
	// bool HasPlayerVoted(EFortVoteType VoteType);                                                                             // [0xa5fdb94] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.HandleTeamMemberRemoved
	// void HandleTeamMemberRemoved(int32_t RemovedIndex);                                                                      // [0xa5fd8a4] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.HandleTeamMemberAdded
	// void HandleTeamMemberAdded(FFortTeamMemberInfo NewInfo);                                                                 // [0xa5fd704] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.HandleGameplayVoteUpdated
	// void HandleGameplayVoteUpdated(EFortVoteType VoteType, EFortVoteStatus VoteStatus, int32_t VoteResult, TArray<FVoter>& Voters); // [0xc14c5d0] Final|Native|Private|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetVoteTimeRemaining
	// float GetVoteTimeRemaining(EFortVoteType VoteType);                                                                      // [0xa5fce0c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetVoters
	// TArray<FVoter> GetVoters(EFortVoteType VoteType);                                                                        // [0xa5fcf6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetVoteCounts
	// void GetVoteCounts(EFortVoteType VoteType, int32_t& OutYesVoteCount, int32_t& OutNoVoteCount);                           // [0xa5fccb4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetStartObjectiveBluGloRequirement
	// int32_t GetStartObjectiveBluGloRequirement();                                                                            // [0xa5fcbe8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetPrimaryMissionInfo
	// class UFortMissionInfo* GetPrimaryMissionInfo();                                                                         // [0xa5fca44] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetPrimaryMission
	// class AFortMission* GetPrimaryMission();                                                                                 // [0xa5fca20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetMissionVoteType
	// EFortVoteType GetMissionVoteType();                                                                                      // [0xa5fc88c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetMissionObjectiveTimeRemaining
	// float GetMissionObjectiveTimeRemaining();                                                                                // [0xa5fc864] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetLockoutTimeRemaining
	// FText GetLockoutTimeRemaining(EFortVoteType VoteType);                                                                   // [0xa5fc744] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetInstigatorId
	// FUniqueNetIdRepl GetInstigatorId(EFortVoteType VoteType);                                                                // [0xa5fc64c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetIncreaseDifficultyBluGloRequirement
	// int32_t GetIncreaseDifficultyBluGloRequirement();                                                                        // [0xa5fc5b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetDeltaRewards
	// void GetDeltaRewards(int32_t BaseDifficultyIncreaseTier, int32_t ComparedDifficultyIncreaseTier, TArray<FFortItemDelta>& DeltaRewards); // [0xa5fbdf4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetAvailableBluGloCount
	// int32_t GetAvailableBluGloCount();                                                                                       // [0xa5fbd70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetArbitratorType
	// EFortVoteArbitratorType GetArbitratorType(EFortVoteType VoteType);                                                       // [0xa5fbcdc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.DoesPrimaryMissionContainTags
	// bool DoesPrimaryMissionContainTags(FGameplayTagContainer& Tags);                                                         // [0xa5fa94c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.CanRequestVote
	// bool CanRequestVote(EFortVoteType VoteType);                                                                             // [0xa5fa624] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortMissionActivationWidgetSTWPanel
/// Size: 0x0028 (0x0002E8 - 0x000310)
class UFortMissionActivationWidgetSTWPanel : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(class UFortMissionActivationInfoSTW*)      InfoObject                                                  OFFSET(get<T>, {0x2E8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.SetInfoObject
	// void SetInfoObject(class UFortMissionActivationInfoSTW* NewInfoObject);                                                  // [0xc14e7d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.OnVoteUpdatedBP
	// void OnVoteUpdatedBP(EFortVoteType VoteType);                                                                            // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.OnVoteLockoutChangedBP
	// void OnVoteLockoutChangedBP(EFortVoteType VoteType, bool bIsLocked);                                                     // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.OnMultiplayerChangedBP
	// void OnMultiplayerChangedBP(bool bIsMultiplayer);                                                                        // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.OnActiveVoteChangedBP
	// void OnActiveVoteChangedBP(EFortVoteType VoteType, bool bIsVoteActive, int32_t VoteResult);                              // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.InfoObjectUpdated
	// void InfoObjectUpdated();                                                                                                // [0x3d1d968] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW
/// Size: 0x0050 (0x000400 - 0x000450)
class UFortMissionActivationWidgetSTW : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
	CMember(class UFortMissionActivationInfoSTW*)      InfoObject                                                  OFFSET(get<T>, {0x400, 8, 0, 0})
	SMember(FGameplayTagContainer)                     ReadyUpObjectiveHandle                                      OFFSET(getStruct<T>, {0x408, 32, 0, 0})
	CMember(class UCurveFloat*)                        DifficultyIncreaseBluGloCurve                               OFFSET(get<T>, {0x428, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW.RequestStartObjectiveState
	// void RequestStartObjectiveState();                                                                                       // [0xc14dba8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW.RequestDifficultyIncreaseState
	// void RequestDifficultyIncreaseState();                                                                                   // [0xc14dad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW.RequestDefaultState
	// void RequestDefaultState();                                                                                              // [0xc14da74] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW.OnVoteLockoutChangedBP
	// void OnVoteLockoutChangedBP(EFortVoteType VoteType, bool bIsLocked);                                                     // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW.OnStateUpdated
	// void OnStateUpdated(EFortMissionActivationWidgetSTWState ActiveState, EFortMissionActivationWidgetSTWState PreviousState); // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW.OnMultiplayerChangedBP
	// void OnMultiplayerChangedBP(bool bIsMultiplayer);                                                                        // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW.OnActiveVoteChangedBP
	// void OnActiveVoteChangedBP(EFortVoteType VoteType, bool bIsVoteActive, int32_t VoteResult);                              // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW.GetCurrentState
	// EFortMissionActivationWidgetSTWState GetCurrentState();                                                                  // [0xc149d6c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortOutpostScreen
/// Size: 0x0000 (0x000400 - 0x000400)
class UFortOutpostScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:


	/// Functions
	// Function /Script/SaveTheWorldUI.FortOutpostScreen.SetInputReflectorBoxVisibility
	// void SetInputReflectorBoxVisibility(bool bShow);                                                                         // [0xc14eae4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortCampaignPlayFlow
/// Size: 0x0000 (0x000400 - 0x000400)
class UFortCampaignPlayFlow : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
};

/// Class /Script/SaveTheWorldUI.FortJournalQuestDetails
/// Size: 0x0008 (0x0002E8 - 0x0002F0)
class UFortJournalQuestDetails : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(class UFortQuestItem*)                     CurrentQuest                                                OFFSET(get<T>, {0x2E8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.SetCurrentQuest
	// void SetCurrentQuest(class UFortQuestItem* InCurrentQuest);                                                              // [0xc14e5d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.RegisterEndSpokenDialogEvent
	// void RegisterEndSpokenDialogEvent();                                                                                     // [0xc14d9b0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.OnEndSpokenDialog
	// void OnEndSpokenDialog();                                                                                                // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.HandleCurrentQuestChangedBP
	// void HandleCurrentQuestChangedBP();                                                                                      // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.GetVisibleObjectives
	// void GetVisibleObjectives(TArray<UFortQuestObjectiveInfo*>& VisibleObjectives);                                          // [0xc14b7fc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.GetRewards
	// void GetRewards(TArray<FFortItemInstanceQuantityPair>& OutRewards, TArray<FFortItemInstanceQuantityPair>& OutSelectableRewards); // [0xc14aaa4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.GetFutureObjectives
	// void GetFutureObjectives(TArray<UFortQuestObjectiveInfo*>& FutureObjectives);                                            // [0xc149e20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.GetActiveMissionTileType
	// EFortTheaterMapTileType GetActiveMissionTileType();                                                                      // [0xc149c18] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.CanPlayQuest
	// bool CanPlayQuest();                                                                                                     // [0xc149178] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.CanPartyLeaderPlayQuest
	// bool CanPartyLeaderPlayQuest();                                                                                          // [0xc149154] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.CanGotoQuest
	// bool CanGotoQuest();                                                                                                     // [0xc149128] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortJournalQuestProgressBar
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortJournalQuestProgressBar : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(TWeakObjectPtr<UFortQuestObjectiveInfo*>)  QuestObjectiveInfo                                          OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortJournalQuestProgressBar.GetProgressDetails
	// void GetProgressDetails(FText& OutNumerator, FText& OutDenominator, float& OutFraction);                                 // [0xc14a844] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortLayoutQuestNode
/// Size: 0x0028 (0x0002E8 - 0x000310)
class UFortLayoutQuestNode : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(class UFortQuestMapQuestTile*)             QuestTile                                                   OFFSET(get<T>, {0x2E8, 8, 0, 0})
	DMember(int32_t)                                   QuestNodeIndex                                              OFFSET(get<int32_t>, {0x2F0, 4, 0, 0})
	SMember(FFortQuestMapNode)                         QuestMapNode                                                OFFSET(getStruct<T>, {0x2F8, 24, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortLayoutQuestNode_Legacy
/// Size: 0x0028 (0x0002E8 - 0x000310)
class UFortLayoutQuestNode_Legacy : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(class UFortQuestMapQuestTile_Legacy*)      QuestTile                                                   OFFSET(get<T>, {0x2E8, 8, 0, 0})
	DMember(int32_t)                                   QuestNodeIndex                                              OFFSET(get<int32_t>, {0x2F0, 4, 0, 0})
	SMember(FFortQuestMapNode)                         QuestMapNode                                                OFFSET(getStruct<T>, {0x2F8, 24, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortProgressArrowButton
/// Size: 0x0040 (0x001490 - 0x0014D0)
class UFortProgressArrowButton : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5328;

public:
	SMember(FSlateColor)                               ArrowColor                                                  OFFSET(getStruct<T>, {0x1490, 20, 0, 0})
	SMember(FSlateColor)                               HoverColor                                                  OFFSET(getStruct<T>, {0x14A4, 20, 0, 0})
	SMember(FSlateColor)                               ShadowColor                                                 OFFSET(getStruct<T>, {0x14B8, 20, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortProgressArrowButton.UpdateArrowColor
	// void UpdateArrowColor(FSlateColor Color, FSlateColor HoverColor);                                                        // [0xc14fb24] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortProgressArrowButton.OnShadowColorSet
	// void OnShadowColorSet();                                                                                                 // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortProgressArrowButton.OnIsInteractiveSet
	// void OnIsInteractiveSet(bool bIsInteractive);                                                                            // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortProgressArrowButton.OnArrowColorSet
	// void OnArrowColorSet();                                                                                                  // [0x3d1d968] Event|Public|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortProgressArrowButton_Legacy
/// Size: 0x0040 (0x0014E0 - 0x001520)
class UFortProgressArrowButton_Legacy : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5408;

public:
	SMember(FSlateColor)                               ArrowColor                                                  OFFSET(getStruct<T>, {0x14E0, 20, 0, 0})
	SMember(FSlateColor)                               HoverColor                                                  OFFSET(getStruct<T>, {0x14F4, 20, 0, 0})
	SMember(FSlateColor)                               ShadowColor                                                 OFFSET(getStruct<T>, {0x1508, 20, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortProgressArrowButton_Legacy.UpdateArrowColor
	// void UpdateArrowColor(FSlateColor Color, FSlateColor HoverColor);                                                        // [0xc14fd98] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortProgressArrowButton_Legacy.OnShadowColorSet
	// void OnShadowColorSet();                                                                                                 // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortProgressArrowButton_Legacy.OnIsInteractiveSet
	// void OnIsInteractiveSet(bool bIsInteractive);                                                                            // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortProgressArrowButton_Legacy.OnArrowColorSet
	// void OnArrowColorSet();                                                                                                  // [0x3d1d968] Event|Public|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortQuestExpiresWidget
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortQuestExpiresWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(TWeakObjectPtr<UFortQuestItem*>)           Item                                                        OFFSET(get<T>, {0x2E8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestExpiresWidget.SetData
	// void SetData(class UFortQuestItem* InItem);                                                                              // [0x90d37d8] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestExpiresWidget.OnQuestExpirationUpdated
	// void OnQuestExpirationUpdated();                                                                                         // [0x1f2db84] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortQuestMapCosmeticListWidget
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortQuestMapCosmeticListWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapCosmeticListWidget.UpdateCosmeticListDisplay
	// void UpdateCosmeticListDisplay();                                                                                        // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapCosmeticListWidget.GetDisplayItemDefs
	// TArray<UFortItemDefinition*> GetDisplayItemDefs();                                                                       // [0xc149dc4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortQuestMapDetailsPanelBase
/// Size: 0x0018 (0x0002E8 - 0x000300)
class UFortQuestMapDetailsPanelBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(class UClass*)                             QuestConversationClass                                      OFFSET(get<T>, {0x2E8, 8, 0, 0})
	DMember(float)                                     QuestUpdateDelayTime                                        OFFSET(get<float>, {0x2F0, 4, 0, 0})
	SMember(FTimerHandle)                              QuestUpdateTimerHandle                                      OFFSET(getStruct<T>, {0x2F8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapDetailsPanelBase.SetScrollWidget
	// void SetScrollWidget();                                                                                                  // [0x9aefd20] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapDetailsPanelBase.SetQuestToDisplay
	// void SetQuestToDisplay(class UFortQuestItemDefinition* QuestDef);                                                        // [0x7ab04e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapDetailsPanelBase.HandleQuestsUpdatedInternal
	// void HandleQuestsUpdatedInternal();                                                                                      // [0xc17c6dc] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortQuestMapDetailsPanel
/// Size: 0x00B0 (0x000300 - 0x0003B0)
class UFortQuestMapDetailsPanel : public UFortQuestMapDetailsPanelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	SMember(FDataTableRowHandle)                       PlayButtonTriggeringAction                                  OFFSET(getStruct<T>, {0x300, 16, 0, 0})
	CMember(TArray<class UClass*>)                     PriorityActivatableWidgetClassList                          OFFSET(get<T>, {0x310, 16, 0, 0})
	CMember(class UClass*)                             CurrentQuestBorder                                          OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UClass*)                             CompletedQuestBorder                                        OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class UFortJournalQuestDetails*)           Panel_JournalDetails                                        OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_QuestTitle                                             OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_QuestDescription                                       OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Header                                                 OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_NotOwnedHeader                                         OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_InactiveQuestName                                      OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(class UImage*)                             Image_QuestIcon                                             OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(class UCommonListView*)                    List_Tasks                                                  OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(class UCommonBorder*)                      Border_Header                                               OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(class UWidgetSwitcher*)                    Switcher_Body                                               OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(class UFortRewardInfoWidget*)              Widget_FutureQuestRewardInfo                                OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(class UScrollBox*)                         ScrollBox_Quest                                             OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(class UScrollBox*)                         ScrollBox_NoQuest                                           OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(TArray<class UFortQuestObjectiveInfo*>)    VisibleObjectives                                           OFFSET(get<T>, {0x398, 16, 0, 0})
	CMember(class UFortQuestItem*)                     CurrentQuestItem                                            OFFSET(get<T>, {0x3A8, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapDetailsPanel_Legacy
/// Size: 0x00B0 (0x000300 - 0x0003B0)
class UFortQuestMapDetailsPanel_Legacy : public UFortQuestMapDetailsPanelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	SMember(FDataTableRowHandle)                       PlayButtonTriggeringAction                                  OFFSET(getStruct<T>, {0x300, 16, 0, 0})
	CMember(TArray<class UClass*>)                     PriorityActivatablePanelClassList                           OFFSET(get<T>, {0x310, 16, 0, 0})
	CMember(class UClass*)                             CurrentQuestBorder                                          OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UClass*)                             CompletedQuestBorder                                        OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class UFortJournalQuestDetails*)           Panel_JournalDetails                                        OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_QuestTitle                                             OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_QuestDescription                                       OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Header                                                 OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_NotOwnedHeader                                         OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_InactiveQuestName                                      OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(class UImage*)                             Image_QuestIcon                                             OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(class UCommonListView*)                    List_Tasks                                                  OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(class UCommonBorder*)                      Border_Header                                               OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(class UWidgetSwitcher*)                    Switcher_Body                                               OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(class UFortRewardInfoWidget_Legacy*)       Widget_FutureQuestRewardInfo                                OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(class UScrollBox*)                         ScrollBox_Quest                                             OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(class UScrollBox*)                         ScrollBox_NoQuest                                           OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(TArray<class UFortQuestObjectiveInfo*>)    VisibleObjectives                                           OFFSET(get<T>, {0x398, 16, 0, 0})
	CMember(class UFortQuestItem*)                     CurrentQuestItem                                            OFFSET(get<T>, {0x3A8, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapEventCallout
/// Size: 0x0138 (0x000400 - 0x000538)
class UFortQuestMapEventCallout : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1336;

public:
	CMember(class UFortBangWrapper_NUI*)               BangWrapper_GoButton                                        OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(class UFortProgressArrowButton*)           Button_LeftNav                                              OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(class UFortProgressArrowButton*)           Button_RightNav                                             OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_SwitchMode                                           OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(class UFortQuestMapNewBangWrapper*)        BangWrapper_Arrow                                           OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(class UFortQuestMapEventSequence*)         Sequence_EventProgress                                      OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(class UHorizontalBox*)                     HorizontalBox_NavButtons                                    OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Header                                                 OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Body                                                   OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(class UImage*)                             Image_Callout                                               OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(class UFortBangWrapper_NUI*)               BangWrapper_UnHover                                         OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(class USoundBase*)                         DefaultSound                                                OFFSET(get<T>, {0x4A0, 8, 0, 0})
	CMember(class UFortQuestItemDefinition*)           DefaultRequiredCompletedQuest                               OFFSET(get<T>, {0x4A8, 8, 0, 0})
	CMember(class USoundBase*)                         OverrideSound                                               OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(class UAudioComponent*)                    SoundLoop                                                   OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(class UFortQuestMapData*)                  QuestMapData                                                OFFSET(get<T>, {0x4C0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.UpdateGoButtonBangState
	// void UpdateGoButtonBangState(bool bClear);                                                                               // [0xc180dd8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.UpdateCalloutData
	// void UpdateCalloutData();                                                                                                // [0xc180db0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.UpdateActiveEvents
	// void UpdateActiveEvents();                                                                                               // [0xc180d38] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.SetIsFaded
	// void SetIsFaded(bool Faded);                                                                                             // [0xc17f2cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.SetIsExpanded
	// void SetIsExpanded(bool Expanded);                                                                                       // [0xc17f1cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.ResetCallout
	// void ResetCallout();                                                                                                     // [0xc17e558] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.PlayFadeOut
	// void PlayFadeOut();                                                                                                      // [0xc17dbc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.PlayFadeIn
	// void PlayFadeIn();                                                                                                       // [0xc17db68] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.OnResetCallout
	// void OnResetCallout();                                                                                                   // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.OnPlayFadeAnimation
	// void OnPlayFadeAnimation(bool bIsFadeOut);                                                                               // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.OnEventIndexChanged
	// void OnEventIndexChanged();                                                                                              // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.OnDeactivatePlayAnimation
	// void OnDeactivatePlayAnimation();                                                                                        // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.OnActivatePlayAnimation
	// void OnActivatePlayAnimation();                                                                                          // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.IsCurrentEventUnlocked
	// bool IsCurrentEventUnlocked();                                                                                           // [0xc17c9d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.GetRequiredQuestForCurrentEvent
	// class UFortQuestItemDefinition* GetRequiredQuestForCurrentEvent();                                                       // [0xc17a804] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.GetIsFaded
	// bool GetIsFaded();                                                                                                       // [0xc17a3f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.GetIsExpanded
	// bool GetIsExpanded();                                                                                                    // [0x8e106a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.GetEventCount
	// int32_t GetEventCount();                                                                                                 // [0xc179ef0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.DeactivateCallout
	// void DeactivateCallout();                                                                                                // [0xc179bc4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy
/// Size: 0x0138 (0x000570 - 0x0006A8)
class UFortQuestMapEventCallout_Legacy : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1704;

public:
	CMember(class UFortBangWrapper_NUI*)               BangWrapper_GoButton                                        OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(class UFortProgressArrowButton_Legacy*)    Button_LeftNav                                              OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(class UFortProgressArrowButton_Legacy*)    Button_RightNav                                             OFFSET(get<T>, {0x5C8, 8, 0, 0})
	CMember(class UCommonButtonLegacy*)                Button_SwitchMode                                           OFFSET(get<T>, {0x5D0, 8, 0, 0})
	CMember(class UFortQuestMapNewBangWrapper_Legacy*) BangWrapper_Arrow                                           OFFSET(get<T>, {0x5D8, 8, 0, 0})
	CMember(class UFortQuestMapEventSequence*)         Sequence_EventProgress                                      OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(class UHorizontalBox*)                     HorizontalBox_NavButtons                                    OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Header                                                 OFFSET(get<T>, {0x5F0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Body                                                   OFFSET(get<T>, {0x5F8, 8, 0, 0})
	CMember(class UImage*)                             Image_Callout                                               OFFSET(get<T>, {0x600, 8, 0, 0})
	CMember(class UFortBangWrapper_NUI*)               BangWrapper_UnHover                                         OFFSET(get<T>, {0x608, 8, 0, 0})
	CMember(class USoundBase*)                         DefaultSound                                                OFFSET(get<T>, {0x610, 8, 0, 0})
	CMember(class UFortQuestItemDefinition*)           DefaultRequiredCompletedQuest                               OFFSET(get<T>, {0x618, 8, 0, 0})
	CMember(class USoundBase*)                         OverrideSound                                               OFFSET(get<T>, {0x620, 8, 0, 0})
	CMember(class UAudioComponent*)                    SoundLoop                                                   OFFSET(get<T>, {0x628, 8, 0, 0})
	CMember(class UFortQuestMapData*)                  QuestMapData                                                OFFSET(get<T>, {0x630, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.UpdateGoButtonBangState
	// void UpdateGoButtonBangState(bool bClear);                                                                               // [0xc180e7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.UpdateCalloutData
	// void UpdateCalloutData();                                                                                                // [0xc180dc4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.UpdateActiveEvents
	// void UpdateActiveEvents();                                                                                               // [0xc180d74] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.SetIsFaded
	// void SetIsFaded(bool Faded);                                                                                             // [0xc17f34c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.SetIsExpanded
	// void SetIsExpanded(bool Expanded);                                                                                       // [0xc17f24c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.ResetCallout
	// void ResetCallout();                                                                                                     // [0xc17e56c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.PlayFadeOut
	// void PlayFadeOut();                                                                                                      // [0xc17dbec] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.PlayFadeIn
	// void PlayFadeIn();                                                                                                       // [0xc17db94] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnResetCallout
	// void OnResetCallout();                                                                                                   // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnPlayFadeAnimation
	// void OnPlayFadeAnimation(bool bIsFadeOut);                                                                               // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnEventIndexChanged
	// void OnEventIndexChanged();                                                                                              // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnDeactivatePlayAnimation
	// void OnDeactivatePlayAnimation();                                                                                        // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnActivatePlayAnimation
	// void OnActivatePlayAnimation();                                                                                          // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.IsCurrentEventUnlocked
	// bool IsCurrentEventUnlocked();                                                                                           // [0xc17c9f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.GetRequiredQuestForCurrentEvent
	// class UFortQuestItemDefinition* GetRequiredQuestForCurrentEvent();                                                       // [0xc17a840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.GetIsFaded
	// bool GetIsFaded();                                                                                                       // [0xc17a40c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.GetIsExpanded
	// bool GetIsExpanded();                                                                                                    // [0xc17a3dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.GetEventCount
	// int32_t GetEventCount();                                                                                                 // [0xc179f08] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.DeactivateCallout
	// void DeactivateCallout();                                                                                                // [0xc179bd8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortQuestMapEventDetailsPanel
/// Size: 0x0098 (0x000300 - 0x000398)
class UFortQuestMapEventDetailsPanel : public UFortQuestMapDetailsPanelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
	CMember(class UClass*)                             CurrentQuestBorder                                          OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UClass*)                             CompletedQuestBorder                                        OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UClass*)                             FutureQuestBorder                                           OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UVerticalBox*)                       VBox_QuestContainer                                         OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UVerticalBox*)                       VBox_CompletedQuestContainer                                OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UCommonAnimatedSwitcher*)            Switcher_Quests                                             OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class UCommonBorder*)                      Border_NextQuest                                            OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_QuestName                                              OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_QuestDescription                                       OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Title                                                  OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(class UCommonListView*)                    List_Tasks                                                  OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(class UImage*)                             Image_QuestIcon                                             OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(class UScrollBox*)                         ScrollBox_SideBar                                           OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(class UDataTable*)                         EventQuestTable                                             OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(class UClass*)                             SideBarEntryClass                                           OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(class UFortQuestItemDefinition*)           UnlockEventQuestDefinition                                  OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(class UFortQuestItemDefinition*)           CurrentQuestDef                                             OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(TArray<class UFortQuestObjectiveInfo*>)    VisibleObjectives                                           OFFSET(get<T>, {0x388, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapEventDetailsPanel_Legacy
/// Size: 0x0098 (0x000300 - 0x000398)
class UFortQuestMapEventDetailsPanel_Legacy : public UFortQuestMapDetailsPanelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
	CMember(class UClass*)                             CurrentQuestBorder                                          OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UClass*)                             CompletedQuestBorder                                        OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UClass*)                             FutureQuestBorder                                           OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UVerticalBox*)                       VBox_QuestContainer                                         OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UVerticalBox*)                       VBox_CompletedQuestContainer                                OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UCommonWidgetSwitcherLegacy*)        Switcher_Quests                                             OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class UCommonBorder*)                      Border_NextQuest                                            OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_QuestName                                              OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_QuestDescription                                       OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Title                                                  OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(class UCommonListView*)                    List_Tasks                                                  OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(class UImage*)                             Image_QuestIcon                                             OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(class UScrollBox*)                         ScrollBox_SideBar                                           OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(class UDataTable*)                         EventQuestTable                                             OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(class UClass*)                             SideBarEntryClass                                           OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(class UFortQuestItemDefinition*)           UnlockEventQuestDefinition                                  OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(class UFortQuestItemDefinition*)           CurrentQuestDef                                             OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(TArray<class UFortQuestObjectiveInfo*>)    VisibleObjectives                                           OFFSET(get<T>, {0x388, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapEventDot
/// Size: 0x0008 (0x0002E8 - 0x0002F0)
class UFortQuestMapEventDot : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(class UImage*)                             Image_ActiveDot                                             OFFSET(get<T>, {0x2E8, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapEventSequence
/// Size: 0x0018 (0x0002E8 - 0x000300)
class UFortQuestMapEventSequence : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(class UHorizontalBox*)                     HorizontalBox_DotBox                                        OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UClass*)                             DotWidgetClass                                              OFFSET(get<T>, {0x2F0, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapEventSideEntry
/// Size: 0x0060 (0x0002E8 - 0x000348)
class UFortQuestMapEventSideEntry : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	CMember(class UCommonAnimatedSwitcher*)            Switcher_Rewards                                            OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UCommonListView*)                    List_SideTasks                                              OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_SideQuestTitle                                         OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UImage*)                             Image_Arrow                                                 OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UImage*)                             Image_QuestComplete                                         OFFSET(get<T>, {0x308, 8, 0, 0})
	SMember(FMargin)                                   RewardPadding                                               OFFSET(getStruct<T>, {0x310, 16, 0, 0})
	CMember(class UFortQuestItemDefinition*)           CurrentQuestItemDef                                         OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UFortQuestItem*)                     CurrentQuestItem                                            OFFSET(get<T>, {0x328, 8, 0, 0})
	SMember(FTimerHandle)                              RewardAnimationTimer                                        OFFSET(getStruct<T>, {0x330, 8, 0, 0})
	CMember(TArray<class UFortQuestObjectiveInfo*>)    SideQuestObjectives                                         OFFSET(get<T>, {0x338, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapEventSideEntry_Legacy
/// Size: 0x0070 (0x0002E8 - 0x000358)
class UFortQuestMapEventSideEntry_Legacy : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	CMember(class UCommonWidgetSwitcherLegacy*)        Switcher_Rewards                                            OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UCommonListView*)                    List_SideTasks                                              OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_SideQuestTitle                                         OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UImage*)                             Image_Arrow                                                 OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UImage*)                             Image_QuestComplete                                         OFFSET(get<T>, {0x308, 8, 0, 0})
	SMember(FMargin)                                   RewardPadding                                               OFFSET(getStruct<T>, {0x310, 16, 0, 0})
	CMember(class UFortQuestItemDefinition*)           CurrentQuestItemDef                                         OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UFortQuestItem*)                     CurrentQuestItem                                            OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(TArray<class UCommonWidgetSwitcherLegacy*>) RewardSwitchers                                            OFFSET(get<T>, {0x330, 16, 0, 0})
	SMember(FTimerHandle)                              RewardAnimationTimer                                        OFFSET(getStruct<T>, {0x340, 8, 0, 0})
	CMember(TArray<class UFortQuestObjectiveInfo*>)    SideQuestObjectives                                         OFFSET(get<T>, {0x348, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapNewBangWrapper
/// Size: 0x0010 (0x000300 - 0x000310)
class UFortQuestMapNewBangWrapper : public UFortBangWrapper_NUI
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(class UCommonAnimatedSwitcher*)            Switcher_Bangs                                              OFFSET(get<T>, {0x300, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapNewBangWrapper_Legacy
/// Size: 0x0010 (0x000300 - 0x000310)
class UFortQuestMapNewBangWrapper_Legacy : public UFortBangWrapper_NUI
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(class UCommonWidgetSwitcherLegacy*)        Switcher_Bangs                                              OFFSET(get<T>, {0x300, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapNodeLayout
/// Size: 0x0068 (0x0002C0 - 0x000328)
class UFortQuestMapNodeLayout : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(class UPanelWidget*)                       Panel_NodeLayout                                            OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  ButtonPrevious                                              OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  ButtonNext                                                  OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class USizeBox*)                           StartArrow                                                  OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class USizeBox*)                           EndArrow                                                    OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UCommonButtonGroupBase*)             QuestButtonGroup                                            OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UFortQuestMapScreen*)                ParentScreen                                                OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapNodeLayout.HandleQuestIndexSelectionModelIndexChanged
	// void HandleQuestIndexSelectionModelIndexChanged(bool bUpdateButtonSelection);                                            // [0xc17c5b8] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortQuestMapNodeLayout.HandleQuestButtonSelected
	// void HandleQuestButtonSelected(class UCommonButtonBase* SelectedQuestButton, int32_t ButtonIndex);                       // [0xc17c3f4] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortQuestMapNodeLayout_Legacy
/// Size: 0x0068 (0x0002C0 - 0x000328)
class UFortQuestMapNodeLayout_Legacy : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(class UPanelWidget*)                       Panel_NodeLayout                                            OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UCommonButtonLegacy*)                ButtonPrevious                                              OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UCommonButtonLegacy*)                ButtonNext                                                  OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class USizeBox*)                           StartArrow                                                  OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class USizeBox*)                           EndArrow                                                    OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UCommonButtonGroupLegacy*)           QuestButtonGroup                                            OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UFortQuestMapScreen_Legacy*)         ParentScreen                                                OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapNodeLayout_Legacy.HandleQuestIndexSelectionModelIndexChanged
	// void HandleQuestIndexSelectionModelIndexChanged(bool bUpdateButtonSelection);                                            // [0xc17c638] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortQuestMapNodeLayout_Legacy.HandleQuestButtonSelected
	// void HandleQuestButtonSelected(class UCommonButtonLegacy* SelectedQuestButton, int32_t ButtonIndex);                     // [0xc17c3f4] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortQuestMapQuestTile
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UFortQuestMapQuestTile : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	CMember(class UCommonButtonBase*)                  QuestButton                                                 OFFSET(get<T>, {0x2E8, 8, 0, 0})
	SMember(FFortQuestMapNode)                         QuestNodeData                                               OFFSET(getStruct<T>, {0x2F0, 24, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapQuestTile.HandleSelectedChange
	// void HandleSelectedChange(bool Selected);                                                                                // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapQuestTile.HandleQuestDataChangedBP
	// void HandleQuestDataChangedBP();                                                                                         // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapQuestTile.GetQuestNodeData
	// void GetQuestNodeData(class UFortQuestItemDefinition*& QuestItemDefinition, FFortQuestMapNode& NodeData);                // [0xc17a6f8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortQuestMapQuestTile_Legacy
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UFortQuestMapQuestTile_Legacy : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	CMember(class UCommonButtonLegacy*)                QuestButton                                                 OFFSET(get<T>, {0x2E8, 8, 0, 0})
	SMember(FFortQuestMapNode)                         QuestNodeData                                               OFFSET(getStruct<T>, {0x2F0, 24, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapQuestTile_Legacy.HandleSelectedChange
	// void HandleSelectedChange(bool Selected);                                                                                // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapQuestTile_Legacy.HandleQuestDataChangedBP
	// void HandleQuestDataChangedBP();                                                                                         // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapQuestTile_Legacy.GetQuestNodeData
	// void GetQuestNodeData(class UFortQuestItemDefinition*& QuestItemDefinition, FFortQuestMapNode& NodeData);                // [0xc17a6f8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortQuestMapScreen
/// Size: 0x00B8 (0x000400 - 0x0004B8)
class UFortQuestMapScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1208;

public:
	CMember(class UFortQuestMapDetailsPanelBase*)      CampaignDetailsPanel                                        OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(class UFortQuestMapDetailsPanelBase*)      EventDetailsPanel                                           OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(class UFortQuestMapEventCallout*)          EventCalloutPanel                                           OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class UFortQuestMapViewer*)                QuestMapViewer                                              OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(EQuestMapScreenMode)                       CurrentMode                                                 OFFSET(get<T>, {0x420, 1, 0, 0})
	DMember(bool)                                      bEventsActive                                               OFFSET(get<bool>, {0x421, 1, 0, 0})
	CMember(class UFortQuestMapDataAsset*)             CampaignQuestMapDataTable                                   OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(class UFortQuestItemDefinition*)           CutoffQuest                                                 OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(class UFortQuestMapDataAsset*)             CurrentQuestMapDataTable                                    OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(class UClass*)                             CampaignNewsModalClass                                      OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(class UClass*)                             QuestLogScreenClass                                         OFFSET(get<T>, {0x470, 8, 0, 0})
	SMember(FDataTableRowHandle)                       CurrentQuestAction                                          OFFSET(getStruct<T>, {0x478, 16, 0, 0})
	SMember(FDataTableRowHandle)                       STWNewsAction                                               OFFSET(getStruct<T>, {0x488, 16, 0, 0})
	SMember(FDataTableRowHandle)                       BackAction                                                  OFFSET(getStruct<T>, {0x498, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.UpdateQuestMapMode
	// void UpdateQuestMapMode(EQuestMapScreenMode QuestMapMode);                                                               // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.UpdateInputActionStates
	// void UpdateInputActionStates(bool bShowingCallout);                                                                      // [0xc180f20] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.ToggleQuestMapState
	// void ToggleQuestMapState();                                                                                              // [0xc180038] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.ShowQuestLog
	// void ShowQuestLog(class UFortQuestItem* QuestItem);                                                                      // [0xc17ffb8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.SetQuestMapViewer
	// void SetQuestMapViewer(class UFortQuestMapViewer* Value);                                                                // [0xc17f658] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.SetIgnorePageNavigation
	// void SetIgnorePageNavigation(bool bIgnoreNavigation);                                                                    // [0xc17ee34] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.SetBeyondCutoffQuest
	// void SetBeyondCutoffQuest(bool bBeyondCutoff);                                                                           // [0xc17e630] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.OnShowCurrentQuestInputActionValueChanged
	// void OnShowCurrentQuestInputActionValueChanged();                                                                        // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.OnEventCalloutExpandChanged
	// void OnEventCalloutExpandChanged();                                                                                      // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.OnEventCalloutButtonClicked
	// void OnEventCalloutButtonClicked();                                                                                      // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.IsEventFlagActive
	// bool IsEventFlagActive(FString EventFlag);                                                                               // [0xc17ca1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.IsBeyondQuest
	// bool IsBeyondQuest(class UFortQuestItemDefinition* QuestDef);                                                            // [0xc17c944] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.InitializeQuestData
	// void InitializeQuestData();                                                                                              // [0xc17c814] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.HandleQuestPageChanged
	// void HandleQuestPageChanged();                                                                                           // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.HandleQuestIndexSelectionModelChanged
	// void HandleQuestIndexSelectionModelChanged(bool bUpdateButtonSelection);                                                 // [0xc17c4b8] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.HandleQuestDetailsUpdated
	// void HandleQuestDetailsUpdated(class UFortQuestItem* QuestDefinition);                                                   // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.HandleMapViewerNavigationRequest
	// void HandleMapViewerNavigationRequest(EViewerNavigationDirection Direction);                                             // [0xc17aacc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.HandleMapModeSwitch
	// void HandleMapModeSwitch();                                                                                              // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.HandleEventQuestMapActivate
	// void HandleEventQuestMapActivate();                                                                                      // [0xc17a9ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.HandleEventCalloutDataChangedBP
	// void HandleEventCalloutDataChangedBP();                                                                                  // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.HandleBackInputAction
	// void HandleBackInputAction();                                                                                            // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.GetCurrentPageCameraMode
	// EFrontEndCamera GetCurrentPageCameraMode();                                                                              // [0xc179ca4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.GetBeyondCutoffQuest
	// bool GetBeyondCutoffQuest();                                                                                             // [0x872ff14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.ClaimQuestRewards
	// void ClaimQuestRewards(class UFortQuestItem* QuestItem);                                                                 // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.CheckForNewMainQuest
	// void CheckForNewMainQuest();                                                                                             // [0xc179890] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy
/// Size: 0x0068 (0x000538 - 0x0005A0)
class UFortQuestMapScreen_Legacy : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1440;

public:
	CMember(class UFortQuestMapDetailsPanelBase*)      CampaignDetailsPanel                                        OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(class UFortQuestMapDetailsPanelBase*)      EventDetailsPanel                                           OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(class UFortQuestMapEventCallout_Legacy*)   EventCalloutPanel                                           OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(class UFortQuestMapViewer_Legacy*)         QuestMapViewer                                              OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(EQuestMapScreenMode)                       CurrentMode                                                 OFFSET(get<T>, {0x558, 1, 0, 0})
	DMember(bool)                                      bEventsActive                                               OFFSET(get<bool>, {0x559, 1, 0, 0})
	CMember(class UFortQuestMapDataAsset*)             CampaignQuestMapDataTable                                   OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(class UFortQuestItemDefinition*)           CutoffQuest                                                 OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(class UFortQuestMapDataAsset*)             CurrentQuestMapDataTable                                    OFFSET(get<T>, {0x570, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.UpdateQuestMapMode
	// void UpdateQuestMapMode(EQuestMapScreenMode QuestMapMode);                                                               // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.ToggleQuestMapState
	// void ToggleQuestMapState();                                                                                              // [0xc180058] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.SetQuestMapViewer
	// void SetQuestMapViewer(class UFortQuestMapViewer_Legacy* Value);                                                         // [0xc17f6d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.SetIgnorePageNavigation
	// void SetIgnorePageNavigation(bool bIgnoreNavigation);                                                                    // [0xc17eec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.SetFindCurrentActionVisibility
	// void SetFindCurrentActionVisibility(EInputActionState ActionVisibility);                                                 // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.SetBeyondCutoffQuest
	// void SetBeyondCutoffQuest(bool bBeyondCutoff);                                                                           // [0xc17e6c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.OnEventCalloutExpandChanged
	// void OnEventCalloutExpandChanged();                                                                                      // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.OnEventCalloutButtonClicked
	// void OnEventCalloutButtonClicked();                                                                                      // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.IsEventFlagActive
	// bool IsEventFlagActive(FString EventFlag);                                                                               // [0xc17ca1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.IsBeyondQuest
	// bool IsBeyondQuest(class UFortQuestItemDefinition* QuestDef);                                                            // [0xc17c944] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.InitializeQuestData
	// void InitializeQuestData();                                                                                              // [0xc17c828] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleRequestCurrentQuestNavigation
	// void HandleRequestCurrentQuestNavigation();                                                                              // [0xc17c6f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleQuestPageChanged
	// void HandleQuestPageChanged();                                                                                           // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleQuestIndexSelectionModelChanged
	// void HandleQuestIndexSelectionModelChanged(bool bUpdateButtonSelection);                                                 // [0xc17c538] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleQuestDetailsUpdated
	// void HandleQuestDetailsUpdated(class UFortQuestItem* QuestDefinition);                                                   // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleMapViewerNavigationRequest
	// void HandleMapViewerNavigationRequest(EViewerNavigationDirection Direction);                                             // [0xc17ab4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleMapModeSwitch
	// void HandleMapModeSwitch();                                                                                              // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleEventQuestMapActivate
	// void HandleEventQuestMapActivate();                                                                                      // [0xc17aa00] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleEventCalloutDataChangedBP
	// void HandleEventCalloutDataChangedBP();                                                                                  // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.GetCurrentPageCameraMode
	// EFrontEndCamera GetCurrentPageCameraMode();                                                                              // [0xc179cd4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.GetBeyondCutoffQuest
	// bool GetBeyondCutoffQuest();                                                                                             // [0xc179bec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.CheckForNewMainQuest
	// void CheckForNewMainQuest();                                                                                             // [0xc1798e4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortQuestMapViewer_Legacy
/// Size: 0x0080 (0x0002E8 - 0x000368)
class UFortQuestMapViewer_Legacy : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	CMember(class UCommonButtonLegacy*)                Button_PageRight                                            OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UCommonButtonLegacy*)                Button_PageLeft                                             OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Title                                                  OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Page                                                   OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class USizeBox*)                           SizeBox_Viewer                                              OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UCanvasPanel*)                       CanvasPanel_Cosmetic                                        OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UFortQuestMapScreen_Legacy*)         ParentScreen                                                OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class UFortQuestMapNodeLayout_Legacy*)     NodeLayout                                                  OFFSET(get<T>, {0x330, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapViewer_Legacy.UpdateViewerData
	// void UpdateViewerData();                                                                                                 // [0xc180fa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapViewer_Legacy.OnTryUpdateUserWidgetColor
	// void OnTryUpdateUserWidgetColor(class UUserWidget* Widget, FSlateColor OverrideColor);                                   // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapViewer_Legacy.OnPlayLayoutOutroAnimation
	// void OnPlayLayoutOutroAnimation(EViewerNavigationDirection TravelDirection);                                             // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapViewer_Legacy.OnPlayLayoutFadeInAnimation
	// void OnPlayLayoutFadeInAnimation();                                                                                      // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapViewer_Legacy.HandleLayoutOutroAnimationFinished
	// void HandleLayoutOutroAnimationFinished();                                                                               // [0xc17aa3c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortQuestPlayButton
/// Size: 0x0008 (0x0002E8 - 0x0002F0)
class UFortQuestPlayButton : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(class UFortQuestItem*)                     QuestItem                                                   OFFSET(get<T>, {0x2E8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestPlayButton.OnContentMissing
	// void OnContentMissing();                                                                                                 // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestPlayButton.HandlePlayerStateChanged
	// void HandlePlayerStateChanged();                                                                                         // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestPlayButton.HandleMatchmakingStarted
	// void HandleMatchmakingStarted();                                                                                         // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestPlayButton.HandleMatchmakingComplete
	// void HandleMatchmakingComplete(EMatchmakingCompleteResult Result);                                                       // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestPlayButton.HandleLobbyDisconnected
	// void HandleLobbyDisconnected();                                                                                          // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestPlayButton.CanPlayQuest
	// bool CanPlayQuest();                                                                                                     // [0xc17986c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestPlayButton.AttemptToPlayQuest
	// void AttemptToPlayQuest();                                                                                               // [0xc17978c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortQuestTreeItemWidget
/// Size: 0x0010 (0x001490 - 0x0014A0)
class UFortQuestTreeItemWidget : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5280;

public:
	CMember(TWeakObjectPtr<UObject*>)                  QuestOrCategory                                             OFFSET(get<T>, {0x1498, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestTreeItemWidget.SetupAsQuest
	// void SetupAsQuest(class UFortQuestItem* Category);                                                                       // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestTreeItemWidget.SetupAsCategory
	// void SetupAsCategory(class UFortQuestCategory* Category);                                                                // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestTreeItemWidget.OnQuestsUpdated
	// void OnQuestsUpdated();                                                                                                  // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestTreeItemWidget.HandleQuestsUpdated
	// void HandleQuestsUpdated();                                                                                              // [0xc17c6b4] Final|Native|Protected 
};

/// Class /Script/SaveTheWorldUI.FortQuestTreeItemWidget_Legacy
/// Size: 0x0010 (0x0014E0 - 0x0014F0)
class UFortQuestTreeItemWidget_Legacy : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5360;

public:
	CMember(TWeakObjectPtr<UObject*>)                  QuestOrCategory                                             OFFSET(get<T>, {0x14E8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestTreeItemWidget_Legacy.SetupAsQuest
	// void SetupAsQuest(class UFortQuestItem* Category);                                                                       // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestTreeItemWidget_Legacy.SetupAsCategory
	// void SetupAsCategory(class UFortQuestCategory* Category);                                                                // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestTreeItemWidget_Legacy.OnQuestsUpdated
	// void OnQuestsUpdated();                                                                                                  // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestTreeItemWidget_Legacy.HandleQuestsUpdated
	// void HandleQuestsUpdated();                                                                                              // [0xc17c6c8] Final|Native|Protected 
};

/// Class /Script/SaveTheWorldUI.FortQuestScreen
/// Size: 0x00F8 (0x000400 - 0x0004F8)
class UFortQuestScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1272;

public:
	CMember(class UCommonTreeView*)                    TreeView_Quests                                             OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(class UScrollBox*)                         ScrollBox_QuestDetails                                      OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(class UClass*)                             QuestManagerComponentClass                                  OFFSET(get<T>, {0x410, 8, 0, 0})
	SMember(FDataTableRowHandle)                       BackAction                                                  OFFSET(getStruct<T>, {0x418, 16, 0, 0})
	SMember(FDataTableRowHandle)                       LeaveInventoryAction                                        OFFSET(getStruct<T>, {0x428, 16, 0, 0})
	SMember(FDataTableRowHandle)                       PlayQuestAction                                             OFFSET(getStruct<T>, {0x438, 16, 0, 0})
	SMember(FDataTableRowHandle)                       AbandonQuestAction                                          OFFSET(getStruct<T>, {0x448, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ClaimRewardAction                                           OFFSET(getStruct<T>, {0x458, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ReplayIntroAction                                           OFFSET(getStruct<T>, {0x468, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ReplayOutroAction                                           OFFSET(getStruct<T>, {0x478, 16, 0, 0})
	SMember(FDataTableRowHandle)                       PinQuestAction                                              OFFSET(getStruct<T>, {0x488, 16, 0, 0})
	SMember(FDataTableRowHandle)                       UnpinQuestAction                                            OFFSET(getStruct<T>, {0x498, 16, 0, 0})
	SMember(FDataTableRowHandle)                       StopConversationAction                                      OFFSET(getStruct<T>, {0x4A8, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestScreen.TriggerClaimRewardEvent
	// void TriggerClaimRewardEvent(class UFortQuestItem* QuestItem);                                                           // [0xc1800e4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.SetInputActionStates
	// void SetInputActionStates(class UFortQuestItem* QuestItem, bool bIsQuestAudioPlaying, bool bShouldShowPlayQuest, bool bAreQuestItemsDifferent); // [0xc17f07c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.SetDisableClaimRewardButton
	// void SetDisableClaimRewardButton(bool bToDisable);                                                                       // [0xc17e8e4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.ProcessPendingSeenQuestItems
	// void ProcessPendingSeenQuestItems();                                                                                     // [0xc17dc98] Final|Native|Private|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.OnContentMissing
	// void OnContentMissing();                                                                                                 // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_SetInitialQuestToSelect
	// void BP_SetInitialQuestToSelect(class UFortQuestItem* QuestItem);                                                        // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandleUnpinQuestAction
	// void BP_HandleUnpinQuestAction();                                                                                        // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandleStopConversationAction
	// void BP_HandleStopConversationAction();                                                                                  // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandleReplayOutroAction
	// void BP_HandleReplayOutroAction();                                                                                       // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandleReplayIntroAction
	// void BP_HandleReplayIntroAction();                                                                                       // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandlePlayQuestAction
	// void BP_HandlePlayQuestAction();                                                                                         // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandlePinQuestAction
	// void BP_HandlePinQuestAction();                                                                                          // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandleClaimRewardAction
	// void BP_HandleClaimRewardAction();                                                                                       // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandleBackAction
	// void BP_HandleBackAction();                                                                                              // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandleAbandonQuestAction
	// void BP_HandleAbandonQuestAction();                                                                                      // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.AttemptToPlayQuest
	// void AttemptToPlayQuest(class UFortQuestItem* QuestItem);                                                                // [0xc1797a0] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortQuestScreen_Legacy
/// Size: 0x0000 (0x000570 - 0x000570)
class UFortQuestScreen_Legacy : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestScreen_Legacy.ProcessPendingSeenQuestItems
	// void ProcessPendingSeenQuestItems();                                                                                     // [0xc17dc98] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortResearchMenuBase
/// Size: 0x0008 (0x000570 - 0x000578)
class UFortResearchMenuBase : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1400;

public:
	CMember(class UFortItemDefinition*)                ResearchRespecToken                                         OFFSET(get<T>, {0x570, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortResearchMenuBase.UseResearchRespecToken
	// void UseResearchRespecToken();                                                                                           // [0xc180fb4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResearchMenuBase.RequestPurchaseResearchLevel
	// void RequestPurchaseResearchLevel(FString StatId);                                                                       // [0xc17de18] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResearchMenuBase.OnUseResearchRespecTokenComplete
	// void OnUseResearchRespecTokenComplete();                                                                                 // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortResearchMenuBase.OnPurchaseResearchLevelStarted
	// void OnPurchaseResearchLevelStarted();                                                                                   // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortResearchMenuBase.OnPurchaseResearchLevelCompleted
	// void OnPurchaseResearchLevelCompleted();                                                                                 // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortResearchMenuBase.GetResearchRespecTokenCount
	// int32_t GetResearchRespecTokenCount();                                                                                   // [0xc17a87c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResearchMenuBase.GetClaimableResearchPointEstimate
	// int32_t GetClaimableResearchPointEstimate();                                                                             // [0xc179c04] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResearchMenuBase.AreResearchRespecTokensAvailable
	// bool AreResearchRespecTokensAvailable();                                                                                 // [0xc179764] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortResearchStatTileWidget
/// Size: 0x0040 (0x0002C0 - 0x000300)
class UFortResearchStatTileWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(class UFortStatItemDefinition*)            PersonalStatItemDefinition                                  OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UFortStatItemDefinition*)            TeamStatItemDefinition                                      OFFSET(get<T>, {0x2C8, 8, 0, 0})
	SMember(FName)                                     StatCostCurveName                                           OFFSET(getStruct<T>, {0x2D0, 4, 0, 0})
	SMember(FName)                                     StatPersonalDeltaCurveName                                  OFFSET(getStruct<T>, {0x2D4, 4, 0, 0})
	SMember(FName)                                     StatPersonalCumulativeCurveName                             OFFSET(getStruct<T>, {0x2D8, 4, 0, 0})
	SMember(FName)                                     StatTeamDeltaCurveName                                      OFFSET(getStruct<T>, {0x2DC, 4, 0, 0})
	SMember(FName)                                     StatTeamCumulativeCurveName                                 OFFSET(getStruct<T>, {0x2E0, 4, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.OnStatChanged
	// void OnStatChanged();                                                                                                    // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.IsAtMaxResearchLevel
	// bool IsAtMaxResearchLevel();                                                                                             // [0xc17c92c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetStatIdName
	// FString GetStatIdName();                                                                                                 // [0xc17a8dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetPersonalStatType
	// EFortStatType GetPersonalStatType();                                                                                     // [0xc17a6d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetNextTeamStatValueDelta
	// int32_t GetNextTeamStatValueDelta();                                                                                     // [0xc17a690] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetNextPersonalStatValueDelta
	// int32_t GetNextPersonalStatValueDelta();                                                                                 // [0xc17a66c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetNextCombinedStatValueDelta
	// int32_t GetNextCombinedStatValueDelta();                                                                                 // [0xc17a624] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetCurrentTeamStatValue
	// int32_t GetCurrentTeamStatValue();                                                                                       // [0xc179d40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetCurrentResearchLevel
	// int32_t GetCurrentResearchLevel();                                                                                       // [0xc179d28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetCurrentPersonalStatValue
	// int32_t GetCurrentPersonalStatValue();                                                                                   // [0xc179d04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetCurrentCombinedStatValue
	// int32_t GetCurrentCombinedStatValue();                                                                                   // [0xc179c5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetCostToIncreaseStat
	// int32_t GetCostToIncreaseStat();                                                                                         // [0xc179c28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortRewardNotificationData
/// Size: 0x0008 (0x000028 - 0x000030)
class UFortRewardNotificationData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EFrontEndRewardType)                       RewardType                                                  OFFSET(get<T>, {0x28, 1, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortRewardNotificationData.GetIconBrush
	// bool GetIconBrush(FSlateBrush& IconBrush, TEnumAsByte<EFortBrushSize> BrushSize);                                        // [0xc179f20] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortRewardCollectionBookData
/// Size: 0x0060 (0x000030 - 0x000090)
class UFortRewardCollectionBookData : public UFortRewardNotificationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FFortCollectionBookRewards)                CollectionBookRewards                                       OFFSET(getStruct<T>, {0x30, 96, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortRewardNotificationSubWidget
/// Size: 0x0028 (0x0002E8 - 0x000310)
class UFortRewardNotificationSubWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FMulticastInlineDelegate)                  OnTransitionInComplete                                      OFFSET(getStruct<T>, {0x2E8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTransitionOutComplete                                     OFFSET(getStruct<T>, {0x2F8, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.TransitionOutBegin
	// void TransitionOutBegin();                                                                                               // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.TransitionOut
	// void TransitionOut();                                                                                                    // [0xc1800d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.TransitionInBegin
	// void TransitionInBegin();                                                                                                // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.TransitionIn
	// void TransitionIn();                                                                                                     // [0xc180078] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.SetPrimaryActionText
	// void SetPrimaryActionText(FText Text);                                                                                   // [0xc17f500] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.SetPrimaryActionHidden
	// void SetPrimaryActionHidden();                                                                                           // [0xc17f4d0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.SetPrimaryActionEnabled
	// void SetPrimaryActionEnabled(bool bEnabled);                                                                             // [0xc17f3cc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.SetInputActionHandlerState
	// void SetInputActionHandlerState(class UDataTable* DataTable, FName RowName, EInputActionState State);                    // [0xc17ef4c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.RemoveInputActionHandler
	// void RemoveInputActionHandler(FDataTableRowHandle InputActionRow);                                                       // [0xc17dcc8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.RemoveAllInputActionHandlers
	// void RemoveAllInputActionHandlers();                                                                                     // [0xc17dcac] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.OnPrimaryAction
	// void OnPrimaryAction();                                                                                                  // [0x3d1d968] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.OnNavigationUp
	// void OnNavigationUp();                                                                                                   // [0x3d1d968] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.OnNavigationRight
	// void OnNavigationRight();                                                                                                // [0x3d1d968] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.OnNavigationLeft
	// void OnNavigationLeft();                                                                                                 // [0x3d1d968] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.OnNavigationDown
	// void OnNavigationDown();                                                                                                 // [0x3d1d968] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.OnDeactivated
	// void OnDeactivated();                                                                                                    // [0x3d1d968] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.OnActivated
	// void OnActivated();                                                                                                      // [0x3d1d968] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.IsPrimaryActionHidden
	// void IsPrimaryActionHidden(bool& bHidden);                                                                               // [0xc17d0cc] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.IsPrimaryActionEnabled
	// void IsPrimaryActionEnabled(bool& bEnabled);                                                                             // [0xc17d0cc] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.InspectItem
	// void InspectItem(class UFortItem* ItemToInspect, int32_t QuantityOverride);                                              // [0xc17c83c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.Init
	// void Init(class UFortRewardNotificationWidget* MainWidget);                                                              // [0xc17c794] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.AddInputActionHandler
	// void AddInputActionHandler(class UDataTable* DataTable, FName RowName, FDelegateProperty CommittedEvent);                // [0xc179438] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortRewardConversationWidget
/// Size: 0x0000 (0x000310 - 0x000310)
class UFortRewardConversationWidget : public UFortRewardNotificationSubWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:


	/// Functions
	// Function /Script/SaveTheWorldUI.FortRewardConversationWidget.IsValidConversation
	// bool IsValidConversation(class UFortConversation* Conversation);                                                         // [0xc17d3a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardConversationWidget.GetDataFromSentence
	// void GetDataFromSentence(FFortConversationSentence& Sentence, FText& Text, class UTexture2D*& TalkingHeadTexture);       // [0xc179d64] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortRewardDifficultyIncrease
/// Size: 0x0000 (0x000030 - 0x000030)
class UFortRewardDifficultyIncrease : public UFortRewardNotificationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/SaveTheWorldUI.FortRewardEpicQuestData
/// Size: 0x0008 (0x000030 - 0x000038)
class UFortRewardEpicQuestData : public UFortRewardNotificationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UFortQuestItem*)                     Quest                                                       OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortRewardExpeditionData
/// Size: 0x0008 (0x000030 - 0x000038)
class UFortRewardExpeditionData : public UFortRewardNotificationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UFortExpeditionItem*)                Expedition                                                  OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortRewardExpeditionWidget
/// Size: 0x0068 (0x000310 - 0x000378)
class UFortRewardExpeditionWidget : public UFortRewardNotificationSubWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 888;

public:
	SMember(FMulticastInlineDelegate)                  OnMcpError                                                  OFFSET(getStruct<T>, {0x310, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortRewardExpeditionWidget.OnCollectExpeditionCompleted
	// void OnCollectExpeditionCompleted(class UFortExpeditionItem* Expedition, bool bSucceeded, TArray<FFortItemInstanceQuantityPair>& Rewards); // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardExpeditionWidget.CollectExpedition
	// void CollectExpedition(class UFortExpeditionItem* Expedition);                                                           // [0xc17994c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortRewardGiftBoxData
/// Size: 0x0008 (0x000030 - 0x000038)
class UFortRewardGiftBoxData : public UFortRewardNotificationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UFortGiftBoxItem*)                   GiftBox                                                     OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortRewardItemCacheData
/// Size: 0x0008 (0x000030 - 0x000038)
class UFortRewardItemCacheData : public UFortRewardNotificationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UFortItem*)                          ItemCache                                                   OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortRewardMissionAlertData
/// Size: 0x0000 (0x000030 - 0x000030)
class UFortRewardMissionAlertData : public UFortRewardNotificationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/SaveTheWorldUI.FortRewardMissionData
/// Size: 0x0000 (0x000030 - 0x000030)
class UFortRewardMissionData : public UFortRewardNotificationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/SaveTheWorldUI.FortRewardNewQuestWidget
/// Size: 0x0000 (0x000310 - 0x000310)
class UFortRewardNewQuestWidget : public UFortRewardNotificationSubWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:


	/// Functions
	// Function /Script/SaveTheWorldUI.FortRewardNewQuestWidget.IsValidConversation
	// bool IsValidConversation(class UFortConversation* Conversation);                                                         // [0xc17d3a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNewQuestWidget.GetDataFromSentence
	// void GetDataFromSentence(FFortConversationSentence& Sentence, FText& Text, class UTexture2D*& TalkingHeadTexture);       // [0xc179d64] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortRewardNotificationWidget
/// Size: 0x00F8 (0x000538 - 0x000630)
class UFortRewardNotificationWidget : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1584;

public:
	CMember(TArray<class UFortRewardNotificationData*>) NotificationDataList                                       OFFSET(get<T>, {0x540, 16, 0, 0})
	CMember(class UOverlay*)                           OverlayMain                                                 OFFSET(get<T>, {0x560, 8, 0, 0})
	SMember(FFortSwipeDetector)                        SwipeDetector                                               OFFSET(getStruct<T>, {0x568, 152, 0, 0})
	CMember(class UClass*)                             MulchConfirmationModalClass                                 OFFSET(get<T>, {0x620, 8, 0, 0})
	CMember(class UFortMulchConfirmationModalWidget*)  MulchConfirmationModal                                      OFFSET(get<T>, {0x628, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.ShowMulchConfirmationModal
	// void ShowMulchConfirmationModal();                                                                                       // [0xc14f68c] Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.SetPrimaryActionText
	// void SetPrimaryActionText(FText Text);                                                                                   // [0xc17f5bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.SetPrimaryActionHidden
	// void SetPrimaryActionHidden();                                                                                           // [0xc17f4ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.SetPrimaryActionEnabled
	// void SetPrimaryActionEnabled(bool bEnabled);                                                                             // [0xc17f450] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.ResetAllRewardData
	// void ResetAllRewardData();                                                                                               // [0xc17e528] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.PopulateReward
	// void PopulateReward(class UFortRewardNotificationData* Reward);                                                          // [0xc17dc18] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnRewardsScreenClosed
	// void OnRewardsScreenClosed();                                                                                            // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnRewardsClaimFailed
	// void OnRewardsClaimFailed();                                                                                             // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnRewardsClaimed
	// void OnRewardsClaimed(TArray<FFortItemInstanceQuantityPair>& ItemList);                                                  // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnPrimaryActionTextChanged
	// void OnPrimaryActionTextChanged(FText& Text);                                                                            // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnPrimaryActionHidden
	// void OnPrimaryActionHidden();                                                                                            // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnPrimaryActionEnabled
	// void OnPrimaryActionEnabled();                                                                                           // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnPrimaryActionDisabled
	// void OnPrimaryActionDisabled();                                                                                          // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnPopulateNewQuestReward
	// void OnPopulateNewQuestReward(class UFortRewardEpicQuestData* QuestReward);                                              // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnPopulateGiftBoxReward
	// void OnPopulateGiftBoxReward(class UFortRewardGiftBoxData* GiftBoxReward);                                               // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnPopulateExpeditionReward
	// void OnPopulateExpeditionReward(class UFortRewardExpeditionData* ExpeditionReward);                                      // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnPopulateChoiceRewards
	// void OnPopulateChoiceRewards(TArray<FFortItemInstanceQuantityPair>& ItemList);                                           // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnNavigationUp
	// void OnNavigationUp();                                                                                                   // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnNavigationRight
	// void OnNavigationRight();                                                                                                // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnNavigationLeft
	// void OnNavigationLeft();                                                                                                 // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnNavigationDown
	// void OnNavigationDown();                                                                                                 // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnMulchCompleted
	// void OnMulchCompleted();                                                                                                 // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.NotifyPanelDeactivated
	// void NotifyPanelDeactivated();                                                                                           // [0xc14d3d0] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.NotifyPanelActivated
	// void NotifyPanelActivated();                                                                                             // [0xc14d398] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.MarkDefaultItemsForMulch
	// void MarkDefaultItemsForMulch(TArray<FFortItemInstanceQuantityPair> ItemList);                                           // [0xc17d430] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.IsPrimaryActionHidden
	// void IsPrimaryActionHidden(bool& bHidden);                                                                               // [0xc17d1ec] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.IsPrimaryActionEnabled
	// void IsPrimaryActionEnabled(bool& bEnabled);                                                                             // [0xc17d160] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.InspectItem
	// void InspectItem(class UFortItem* ItemToInspect, int32_t QuantityOverride);                                              // [0x3d1d968] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HideMulchConfirmationModal
	// void HideMulchConfirmationModal();                                                                                       // [0xc14ce84] Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnQuestRewardClaimed
	// void HandleOnQuestRewardClaimed(class UFortQuestItem* Quest, TArray<FFortItemInstanceQuantityPair>& Rewards);            // [0xc17bb8c] Final|Native|Private|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnNoQuestRewardsToClaim
	// void HandleOnNoQuestRewardsToClaim();                                                                                    // [0xc17b4b8] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnMissionRewardsOpenFailed
	// void HandleOnMissionRewardsOpenFailed();                                                                                 // [0xc17b4b8] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnMissionRewardsOpened
	// void HandleOnMissionRewardsOpened(TArray<FFortItemInstanceQuantityPair>& MissionRewards);                                // [0xc17b4cc] Final|Native|Private|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnMissionAlertRewardsOpened
	// void HandleOnMissionAlertRewardsOpened(TArray<FFortItemInstanceQuantityPair>& AlertRewards);                             // [0xc17b4cc] Final|Native|Private|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnItemCacheRewardsClaimFailed
	// void HandleOnItemCacheRewardsClaimFailed();                                                                              // [0xc17b4b8] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnItemCacheRewardsClaimed
	// void HandleOnItemCacheRewardsClaimed(TArray<FFortItemInstanceQuantityPair>& ClaimedRewards);                             // [0xc17b4cc] Final|Native|Private|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnDifficultyIncreaseRewardsClaimFailed
	// void HandleOnDifficultyIncreaseRewardsClaimFailed();                                                                     // [0xc17b4b8] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnDifficultyIncreaseRewardsClaimed
	// void HandleOnDifficultyIncreaseRewardsClaimed(TArray<FFortItemInstanceQuantityPair>& DifficultyRewards);                 // [0xc17b4cc] Final|Native|Private|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnCollectionBookRewardClaimed
	// void HandleOnCollectionBookRewardClaimed(FFortCollectionBookRewards RewardClaimed, bool bSuccess, TArray<FFortItemInstanceQuantityPair>& ActualRewards); // [0xc17abcc] Final|Native|Private|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.BeginCloseRewardsScreen
	// void BeginCloseRewardsScreen();                                                                                          // [0xc179820] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddQuestData
	// void AddQuestData(class UFortQuestItem* Quest);                                                                          // [0xc1796e4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddPhoenixLevelUpRewardData
	// void AddPhoenixLevelUpRewardData();                                                                                      // [0xc1796d0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddMissionData
	// void AddMissionData();                                                                                                   // [0xc179648] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddMissionAlertData
	// void AddMissionAlertData();                                                                                              // [0xc1795c0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddItemCacheRewardData
	// void AddItemCacheRewardData(class UFortItem* ItemCache);                                                                 // [0xc179540] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddGiftBoxData
	// void AddGiftBoxData();                                                                                                   // [0xc1793b0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddExpeditionData
	// void AddExpeditionData(class UFortExpeditionItem* ExpeditionItem);                                                       // [0xc179330] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddEpicQuestData
	// void AddEpicQuestData(class UFortQuestItem* Quest);                                                                      // [0xc1792b0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddDifficultyIncreaseRewardData
	// void AddDifficultyIncreaseRewardData();                                                                                  // [0xc179228] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddCollectionBookData
	// void AddCollectionBookData(FFortCollectionBookRewards& CollectionBookRewards);                                           // [0xc179184] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortRewardPhoenixLevelUpData
/// Size: 0x0018 (0x000030 - 0x000048)
class UFortRewardPhoenixLevelUpData : public UFortRewardNotificationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int32_t)                                   PhoenixLevel                                                OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	CMember(TArray<FFortItemInstanceQuantityPair>)     Rewards                                                     OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortRewardQuestData
/// Size: 0x0008 (0x000030 - 0x000038)
class UFortRewardQuestData : public UFortRewardNotificationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UFortQuestItem*)                     Quest                                                       OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.SaveTheWorldRegisterUIManager
/// Size: 0x0000 (0x000028 - 0x000028)
class USaveTheWorldRegisterUIManager : public UFortUIGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SaveTheWorldUI.SaveTheWorldRequestsFeatureAction
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class USaveTheWorldRequestsFeatureAction : public UFortUIGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TWeakObjectPtr<UClass*>)                   ItemManagementScreenClass                                   OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ItemManagementScreenClass_STW                               OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ItemInspectionScreenClass                                   OFFSET(get<T>, {0x68, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   HeroLoadoutScreenClass                                      OFFSET(get<T>, {0x88, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   HeroLoadoutScreenLegacyClass                                OFFSET(get<T>, {0xA8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   SurvivorSquadManagementScreenClass                          OFFSET(get<T>, {0xC8, 32, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortSquadSelectorButton
/// Size: 0x0020 (0x0014E0 - 0x001500)
class UFortSquadSelectorButton : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5376;

public:


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadSelectorButton.TryGetStaticSquadDataBP
	// bool TryGetStaticSquadDataBP(FHomebaseSquad& OutSquadData);                                                              // [0xc1a2408] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSelectorButton.SetIdOfSquadToManageBP
	// void SetIdOfSquadToManageBP(FName& SquadId);                                                                             // [0xc1a17a4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSelectorButton.HandleSquadChangedBP
	// void HandleSquadChangedBP();                                                                                             // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadSelectorButton.HandleDifferentSquadSetBP
	// void HandleDifferentSquadSetBP();                                                                                        // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadSelectorButton.GetIdOfSquadToManageBP
	// FName GetIdOfSquadToManageBP();                                                                                          // [0xc19f318] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortDefenderSquadSelectorButton
/// Size: 0x0000 (0x001500 - 0x001500)
class UFortDefenderSquadSelectorButton : public UFortSquadSelectorButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5376;

public:


	/// Functions
	// Function /Script/SaveTheWorldUI.FortDefenderSquadSelectorButton.TryGetTheaterUniqueId
	// bool TryGetTheaterUniqueId(FString& OutTheaterUniqueId, bool& OutIsUnlocked);                                            // [0xc180640] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortDefenderSquadSelectorButton.TryGetPowerLevel
	// bool TryGetPowerLevel(int32_t& OutPowerLevel);                                                                           // [0xc180338] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/SaveTheWorldUI.FortSquadStatDetailsWidget
/// Size: 0x0030 (0x0002E8 - 0x000318)
class UFortSquadStatDetailsWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
};

/// Class /Script/SaveTheWorldUI.FortHeroSquadBonusPerksWidgetBase
/// Size: 0x0010 (0x000318 - 0x000328)
class UFortHeroSquadBonusPerksWidgetBase : public UFortSquadStatDetailsWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(class UFortPerkWidget_NUI*)                SupportBonusPerkWidget                                      OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UFortPerkWidget_NUI*)                TacticalBonusPerkWidget                                     OFFSET(get<T>, {0x320, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortSquadManagementScreenBase
/// Size: 0x0120 (0x000570 - 0x000690)
class UFortSquadManagementScreenBase : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1680;

public:
	DMember(bool)                                      bReadOnlyModeWIFE                                           OFFSET(get<bool>, {0x580, 1, 0, 0})
	CMember(class UFortSquadStatsWidgetBase*)          SquadStatsWidget                                            OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(class UFortSquadSlotsView*)                SquadSlotsView                                              OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(class UFortSquadSlotDetailsPanel*)         SelectedSlotDetailsPanel                                    OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(class UFortSquadSlotItemPicker*)           SelectedSlotItemPicker                                      OFFSET(get<T>, {0x5A0, 8, 0, 0})
	SMember(FDataTableRowHandle)                       InspectInputActionRowHandle                                 OFFSET(getStruct<T>, {0x5A8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ManageInputActionRowHandle                                  OFFSET(getStruct<T>, {0x5B8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       BackInputActionRowHandle                                    OFFSET(getStruct<T>, {0x5C8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       InventoryInputActionRowHandle                               OFFSET(getStruct<T>, {0x5D8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       InventoryCloseInputActionRowHandle                          OFFSET(getStruct<T>, {0x5E8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ClosePickerInputActionRowHandle                             OFFSET(getStruct<T>, {0x5F8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       SelectPickerSlotActionRowHandle                             OFFSET(getStruct<T>, {0x608, 16, 0, 0})
	SMember(FDataTableRowHandle)                       CyclePickerSortActionRowHandle                              OFFSET(getStruct<T>, {0x618, 16, 0, 0})
	SMember(FDataTableRowHandle)                       PreviousSquadActionRowHandle                                OFFSET(getStruct<T>, {0x628, 16, 0, 0})
	SMember(FDataTableRowHandle)                       NextSquadActionRowHandle                                    OFFSET(getStruct<T>, {0x638, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ClearAllActionRowHandle                                     OFFSET(getStruct<T>, {0x648, 16, 0, 0})
	SMember(FDataTableRowHandle)                       HelpScreenActionRowHandle                                   OFFSET(getStruct<T>, {0x658, 16, 0, 0})
	CMember(class UClass*)                             DisableAutoSlottingToClearSquadPromptAction                 OFFSET(get<T>, {0x668, 8, 0, 0})
	CMember(class UFortItemViewContext_SquadSlotsView*) ItemViewContext_SquadSlotsView                             OFFSET(get<T>, {0x680, 8, 0, 0})
	CMember(class UFortItemViewContext_SquadSlotItemPicker*) ItemViewContext_SquadSlotItemPicker                   OFFSET(get<T>, {0x688, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.TryGetStaticSquadDataBP
	// bool TryGetStaticSquadDataBP(FHomebaseSquad& OutSquadData);                                                              // [0xc180590] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.TryGetSquadTeamAttribute
	// bool TryGetSquadTeamAttribute(FGameplayAttribute& OutGameplayAttribute);                                                 // [0xc1804b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.TryGetSquadMainAttribute
	// bool TryGetSquadMainAttribute(FGameplayAttribute& OutGameplayAttribute);                                                 // [0xc1803d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.TryGetAttributeValueFromSquad
	// bool TryGetAttributeValueFromSquad(float& OutValue, FGameplayAttribute& Attribute);                                      // [0xc180170] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.ShowWarningReadOnlyWIFE
	// void ShowWarningReadOnlyWIFE(bool Force);                                                                                // [0x3d1d968] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.SetupInputHandlers
	// void SetupInputHandlers();                                                                                               // [0x787a850] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.SetIdOfSquadToManageBP
	// void SetIdOfSquadToManageBP(FName& SquadId);                                                                             // [0xc17eda4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.SelectSquadWithOffset
	// void SelectSquadWithOffset(int32_t Offset);                                                                              // [0xc17e5b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.SelectPreviousSquad
	// void SelectPreviousSquad();                                                                                              // [0xc17e598] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.SelectNextSquad
	// void SelectNextSquad();                                                                                                  // [0xc17e580] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.NavigateToSquadSlot
	// void NavigateToSquadSlot(int32_t SquadSlotIndex);                                                                        // [0xc17dae8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.IsScreenWIFE
	// bool IsScreenWIFE();                                                                                                     // [0xc17d278] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleViewInAll
	// void HandleViewInAll(int32_t SquadSlotIndex);                                                                            // [0xc17c718] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleSquadStateChanged
	// void HandleSquadStateChanged();                                                                                          // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleSquadSlotPickerShown
	// void HandleSquadSlotPickerShown();                                                                                       // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleSquadSlotPickerHidden
	// void HandleSquadSlotPickerHidden();                                                                                      // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleShouldAutoSlotSurvivorSquadsChanged
	// void HandleShouldAutoSlotSurvivorSquadsChanged();                                                                        // [0x787a850] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleSelectPickerSlotInputAction
	// void HandleSelectPickerSlotInputAction();                                                                                // [0xc17c704] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandlePreviousSquadInputAction
	// void HandlePreviousSquadInputAction();                                                                                   // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandlePickerSelectionCommitted
	// void HandlePickerSelectionCommitted(class UFortItem* CommittedItem);                                                     // [0xc17c378] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandlePickerSelectionChanged
	// void HandlePickerSelectionChanged(class UFortItem* SelectedItem);                                                        // [0xc17c2f8] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleOpenSquadSlot
	// void HandleOpenSquadSlot(int32_t SquadSlotIndex);                                                                        // [0xc17c278] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleNextSquadInputAction
	// void HandleNextSquadInputAction();                                                                                       // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleManageInputAction
	// void HandleManageInputAction();                                                                                          // [0xc17aab8] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleInventoryInputAction
	// void HandleInventoryInputAction();                                                                                       // [0xc17aa28] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleInspectInputAction
	// void HandleInspectInputAction();                                                                                         // [0xc17aa14] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleDifferentSquadSlotSelected
	// void HandleDifferentSquadSlotSelected(int32_t SquadSlotIndex);                                                           // [0xc17a968] Native|Protected     
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleDifferentSquadSetBP
	// void HandleDifferentSquadSetBP();                                                                                        // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleCyclePickerSortInputAction
	// void HandleCyclePickerSortInputAction();                                                                                 // [0xc17a954] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleClosePickerInputAction
	// void HandleClosePickerInputAction();                                                                                     // [0xc17a940] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleBackInputAction
	// void HandleBackInputAction();                                                                                            // [0xc17a92c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.GetNumUnlockedSquads
	// int32_t GetNumUnlockedSquads();                                                                                          // [0xc17a6b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.GetIdOfSquadToManageBP
	// FName GetIdOfSquadToManageBP();                                                                                          // [0x38e68e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.ClearSquad
	// void ClearSquad();                                                                                                       // [0xc179938] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortHeroSquadManagementScreen
/// Size: 0x0020 (0x000690 - 0x0006B0)
class UFortHeroSquadManagementScreen : public UFortSquadManagementScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1712;

public:
	SMember(FDataTableRowHandle)                       ManageDefendersInputActionRowHandle                         OFFSET(getStruct<T>, {0x690, 16, 0, 0})
	CMember(class UFortHeroSquadBonusPerksWidgetBase*) BonusPerksWidget                                            OFFSET(get<T>, {0x6A0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortHeroSquadManagementScreen.PlayFeedbackForSlottingPerson
	// void PlayFeedbackForSlottingPerson(class UFortCharacter* Character, int32_t SlotIndex);                                  // [0x3d1d968] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSquadIcon
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortSquadIcon : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x2E8, 4, 0, 0})
	CMember(TEnumAsByte<EFortBrushSize>)               ImageSize                                                   OFFSET(get<T>, {0x2EC, 1, 0, 0})
	CMember(class UImage*)                             Icon                                                        OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadIcon.SetSquad
	// void SetSquad(FName& InName);                                                                                            // [0xc17fefc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadIcon.HandleDifferentSquadSetBP
	// void HandleDifferentSquadSetBP();                                                                                        // [0x3d1d968] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetails
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortSquadLandingPageDefenderSquadDetails : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(class UCommonTextBlock*)                   OutpostName                                                 OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UCommonNumericTextBlock*)            PowerRating                                                 OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetails.SetDefenderSquadInfo
	// void SetDefenderSquadInfo(FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);                                     // [0xc17e760] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetails.HandleDefenderSquadInfoSetBP
	// void HandleDefenderSquadInfoSetBP(FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);                             // [0x3d1d968] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetails.HandleAddDefenderSquadMemberBP
	// void HandleAddDefenderSquadMemberBP(FName& SquadId, int32_t Index);                                                      // [0x3d1d968] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetailsLocked
/// Size: 0x0008 (0x0002E8 - 0x0002F0)
class UFortSquadLandingPageDefenderSquadDetailsLocked : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(class UCommonTextBlock*)                   OutpostName                                                 OFFSET(get<T>, {0x2E8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetailsLocked.SetDefenderSquadInfo
	// void SetDefenderSquadInfo(FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);                                     // [0xc17e7fc] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSummary
/// Size: 0x0008 (0x0002E8 - 0x0002F0)
class UFortSquadLandingPageDefenderSummary : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSummary.HandleClearDefenderSquadDetailsBP
	// void HandleClearDefenderSquadDetailsBP();                                                                                // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSummary.HandleAddLockedDefenderSquadDetailsBP
	// void HandleAddLockedDefenderSquadDetailsBP(FFortLandingPageDefenderSummaryInfo DefenderSummaryInfo);                     // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSummary.HandleAddDefenderSquadDetailsBP
	// void HandleAddDefenderSquadDetailsBP(FFortLandingPageDefenderSummaryInfo DefenderSummaryInfo);                           // [0x3d1d968] Event|Public|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSquadLandingPageSurvivorSummary
/// Size: 0x0088 (0x0002E8 - 0x000370)
class UFortSquadLandingPageSurvivorSummary : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	CMember(class UFortSquadStatValueWithIcon*)        FortitudeStatValue                                          OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UFortSquadStatValueWithIcon*)        OffenseStatValue                                            OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UFortSquadStatValueWithIcon*)        ResistanceStatValue                                         OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UFortSquadStatValueWithIcon*)        TechStatValue                                               OFFSET(get<T>, {0x300, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadLandingPageSurvivorSummary.HandleClearSetBonusSummaryLineItemsBP
	// void HandleClearSetBonusSummaryLineItemsBP();                                                                            // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadLandingPageSurvivorSummary.HandleAddSetBonusSummaryLineItemBP
	// void HandleAddSetBonusSummaryLineItemBP(FFortAttributeModifierAccumulation AttributeModifierAccumulation);               // [0x3d1d968] Event|Public|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSquadManagementItemViewContextBase
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UFortSquadManagementItemViewContextBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /Script/SaveTheWorldUI.FortItemViewContext_SquadSlotsView
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UFortItemViewContext_SquadSlotsView : public UFortSquadManagementItemViewContextBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Class /Script/SaveTheWorldUI.FortItemViewContext_SquadSlotItemPicker
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UFortItemViewContext_SquadSlotItemPicker : public UFortSquadManagementItemViewContextBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Class /Script/SaveTheWorldUI.FortItemViewContext_ExpeditionSquadSlotsView
/// Size: 0x0008 (0x000100 - 0x000108)
class UFortItemViewContext_ExpeditionSquadSlotsView : public UFortItemViewContext_SquadSlotsView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
};

/// Class /Script/SaveTheWorldUI.FortItemViewContext_ExpeditionSquadSlotItemPicker
/// Size: 0x0008 (0x000100 - 0x000108)
class UFortItemViewContext_ExpeditionSquadSlotItemPicker : public UFortItemViewContext_SquadSlotItemPicker
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel
/// Size: 0x0058 (0x0002E8 - 0x000340)
class UFortSquadSlotDetailsPanel : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	CMember(class UFortSquadSlotItemDetailsHostPanel*) ItemDetailsPanel                                            OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   ItemViewContext                                             OFFSET(get<T>, {0x310, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.TryGetItemToPreviewInSlot
	// bool TryGetItemToPreviewInSlot(class UFortItem*& OutItemToPreviewInSlot);                                                // [0xc1802a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.SetScrollWidget
	// void SetScrollWidget();                                                                                                  // [0xc17f758] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.SetIdOfSquadSlotToManageBP
	// void SetIdOfSquadSlotToManageBP(FName& SquadId, int32_t SquadSlotIndex);                                                 // [0xc17e964] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.IsSquadSlotLockedBP
	// bool IsSquadSlotLockedBP();                                                                                              // [0xc17d2dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.HandleSquadSlotStateChangedBP
	// void HandleSquadSlotStateChangedBP();                                                                                    // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.HandleSquadSlotRestrictionFactorsChangedBP
	// void HandleSquadSlotRestrictionFactorsChangedBP();                                                                       // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.HandleDifferentSquadSlotSetBP
	// void HandleDifferentSquadSlotSetBP();                                                                                    // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.GetSlottingRestrictionReasons
	// TArray<EFortSquadSlottingRestrictionReason> GetSlottingRestrictionReasons();                                             // [0xc17a8a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.GetItemInSquadSlotBP
	// class UFortItem* GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer);                                                  // [0xc17a424] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.GetIdOfSquadSlotToManageBP
	// void GetIdOfSquadSlotToManageBP(FName& OutSquadId, int32_t& OutSquadSlotIndex);                                          // [0xc17a06c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotItemDetailElementWidget
/// Size: 0x0020 (0x000340 - 0x000360)
class UFortSquadSlotItemDetailElementWidget : public UFortItemDetailElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemDetailElementWidget.SetIdOfSquadSlotToManageBP
	// void SetIdOfSquadSlotToManageBP(FName& SquadId, int32_t SquadSlotIndex);                                                 // [0xc17ea74] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemDetailElementWidget.IsSquadSlotLockedBP
	// bool IsSquadSlotLockedBP();                                                                                              // [0xc17d320] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemDetailElementWidget.HandlePostDifferentSquadSlotSetBP
	// void HandlePostDifferentSquadSlotSetBP();                                                                                // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemDetailElementWidget.GetItemInSquadSlotBP
	// class UFortItem* GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer);                                                  // [0xc17a4dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemDetailElementWidget.GetIdOfSquadSlotToManageBP
	// void GetIdOfSquadSlotToManageBP(FName& OutSquadId, int32_t& OutSquadSlotIndex);                                          // [0xc17a148] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel
/// Size: 0x0020 (0x0003C8 - 0x0003E8)
class UFortSquadSlotItemDetailsHostPanel : public UFortItemDetailsHostPanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1000;

public:


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel.SetIdOfSquadSlotToManageBP
	// void SetIdOfSquadSlotToManageBP(FName& SquadId, int32_t SquadSlotIndex);                                                 // [0xc17eb84] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel.IsSquadSlotLockedBP
	// bool IsSquadSlotLockedBP();                                                                                              // [0xc17d364] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel.GetItemInSquadSlotBP
	// class UFortItem* GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer);                                                  // [0xc17a580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel.GetIdOfSquadSlotToManageBP
	// void GetIdOfSquadSlotToManageBP(FName& OutSquadId, int32_t& OutSquadSlotIndex);                                          // [0xc17a224] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotItemPicker
/// Size: 0x00C8 (0x000420 - 0x0004E8)
class UFortSquadSlotItemPicker : public UFortItemPickerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1256;

public:
	SMember(FMulticastInlineDelegate)                  OnSortChanged                                               OFFSET(getStruct<T>, {0x458, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemPicker.SetSortTypes
	// void SetSortTypes(FSquadSlotSortTypes SquadSlotSortTypes);                                                               // [0xc17f780] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemPicker.SetIdOfSquadSlotToManageBP
	// void SetIdOfSquadSlotToManageBP(FName& SquadId, int32_t SquadSlotIndex);                                                 // [0xc17ec94] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemPicker.GetIdOfSquadSlotToManageBP
	// void GetIdOfSquadSlotToManageBP(FName& OutSquadId, int32_t& OutSquadSlotIndex);                                          // [0xc17a300] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemPicker.FortSquadSlotSortChanged__DelegateSignature
	// void FortSquadSlotSortChanged__DelegateSignature(ESquadSlotSortType CurrentSortType, ESquadSlotType SquadSlotType);      // [0x3d1d968] MulticastDelegate|Public|Delegate 
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotItemPickerTileButton
/// Size: 0x0010 (0x001520 - 0x001530)
class UFortSquadSlotItemPickerTileButton : public UFortItemTileButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5424;

public:


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemPickerTileButton.HandleSlottingRestrictionReasonsChanged
	// void HandleSlottingRestrictionReasonsChanged();                                                                          // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemPickerTileButton.HandleItemSlottedToDifferentSquad
	// void HandleItemSlottedToDifferentSquad(FHomebaseSquadSlotId& SquadSlotId);                                               // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemPickerTileButton.GetSlottingRestrictionReasons
	// TArray<EFortSquadSlottingRestrictionReason> GetSlottingRestrictionReasons();                                             // [0xc19f648] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotSelectorPopupMenu
/// Size: 0x0008 (0x000558 - 0x000560)
class UFortSquadSlotSelectorPopupMenu : public UFortPopupMenu_Legacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
	DMember(bool)                                      bReadOnlyModeWIFE                                           OFFSET(get<bool>, {0x558, 1, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorPopupMenu.IsScreenWIFE
	// bool IsScreenWIFE();                                                                                                     // [0xc17d278] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorPopupMenu.GetHostButton
	// class UFortSquadSlotSelectorButton* GetHostButton();                                                                     // [0xc19f064] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotSurvivorTraitMatchesDetailWidget
/// Size: 0x0028 (0x000360 - 0x000388)
class UFortSquadSlotSurvivorTraitMatchesDetailWidget : public UFortSquadSlotItemDetailElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	DMember(bool)                                      IsSquadLeaderSlot                                           OFFSET(get<bool>, {0x360, 1, 0, 0})
	DMember(bool)                                      LeaderMatchesSquadType                                      OFFSET(get<bool>, {0x361, 1, 0, 0})
	DMember(int32_t)                                   SubordinatePersonalityMatchCount                            OFFSET(get<int32_t>, {0x364, 4, 0, 0})
	DMember(bool)                                      MatchesLeaderPersonality                                    OFFSET(get<bool>, {0x368, 1, 0, 0})
	DMember(int32_t)                                   MatchingSetBonusCount                                       OFFSET(get<int32_t>, {0x36C, 4, 0, 0})
	DMember(int32_t)                                   SetBonusSize                                                OFFSET(get<int32_t>, {0x370, 4, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadSlotSurvivorTraitMatchesDetailWidget.HandleTraitValuesUpdatedBP
	// void HandleTraitValuesUpdatedBP();                                                                                       // [0x3d1d968] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotSelectorButton
/// Size: 0x0080 (0x0014E0 - 0x001560)
class UFortSquadSlotSelectorButton : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5472;

public:
	SMember(FMulticastInlineDelegate)                  OnRequestOpenSquadSlotEvent                                 OFFSET(getStruct<T>, {0x1500, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRequestViewInAllEvent                                     OFFSET(getStruct<T>, {0x1510, 16, 0, 0})
	CMember(class UFortSquadSlotWidget*)               SquadSlotWidget                                             OFFSET(get<T>, {0x1520, 8, 0, 0})
	CMember(class UMenuAnchor*)                        PopupMenuAnchor                                             OFFSET(get<T>, {0x1528, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   ItemViewContext                                             OFFSET(get<T>, {0x1530, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.ViewInAll
	// void ViewInAll();                                                                                                        // [0xc1a2680] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.SquadSlotWidgetUpdated
	// void SquadSlotWidgetUpdated();                                                                                           // [0x9614b80] Native|Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.SetIdOfSquadSlotToManageBP
	// void SetIdOfSquadSlotToManageBP(FName& SquadId, int32_t SquadSlotIndex);                                                 // [0xc1a1584] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.OpenSquadSlot
	// void OpenSquadSlot();                                                                                                    // [0xc1a10d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.IsSquadSlotLockedBP
	// bool IsSquadSlotLockedBP();                                                                                              // [0xc1a0dd4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.HandlePreDifferentSquadSlotSetBP
	// void HandlePreDifferentSquadSlotSetBP();                                                                                 // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.HandlePostDifferentSquadSlotSetBP
	// void HandlePostDifferentSquadSlotSetBP();                                                                                // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.GetPopupMenu
	// class UUserWidget* GetPopupMenu();                                                                                       // [0xc19f5d0] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.GetInPreviewMode
	// bool GetInPreviewMode();                                                                                                 // [0xc19f330] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.GetIdOfSquadSlotToManageBP
	// void GetIdOfSquadSlotToManageBP(FName& OutSquadId, int32_t& OutSquadSlotIndex);                                          // [0xc19f160] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotsView
/// Size: 0x00F8 (0x0002E8 - 0x0003E0)
class UFortSquadSlotsView : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	SMember(FMulticastInlineDelegate)                  OnDifferentSquadSlotSelectedEvent                           OFFSET(getStruct<T>, {0x2F8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRequestOpenSquadSlotEvent                                 OFFSET(getStruct<T>, {0x308, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRequestViewInAllEvent                                     OFFSET(getStruct<T>, {0x318, 16, 0, 0})
	DMember(bool)                                      bReadOnlyModeWIFE                                           OFFSET(get<bool>, {0x328, 1, 0, 0})
	DMember(int32_t)                                   IndexOfSelectedSquadSlot                                    OFFSET(get<int32_t>, {0x32C, 4, 0, 0})
	DMember(bool)                                      bSlotButtonsRequireSelection                                OFFSET(get<bool>, {0x330, 1, 0, 0})
	DMember(bool)                                      bInPreviewMode                                              OFFSET(get<bool>, {0x331, 1, 0, 0})
	CMember(TMap<ESquadSlotType, FSquadSlotSortTypes>) SquadSlotSortTypesMap                                       OFFSET(get<T>, {0x338, 80, 0, 0})
	CMember(class UClass*)                             DisableAutoSlottingToOpenSquadSlotPromptAction              OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(class UFortCommittableButtonGroup*)        SquadSlotButtonGroup                                        OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   ItemViewContext                                             OFFSET(get<T>, {0x3C8, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.TryGetStaticSquadDataBP
	// bool TryGetStaticSquadDataBP(FHomebaseSquad& OutSquadData);                                                              // [0xc1a24d8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.TryGetSelectedSquadSlotSortTypes
	// bool TryGetSelectedSquadSlotSortTypes(FSquadSlotSortTypes& OutSlotSortTypes);                                            // [0xc1a1ca0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.SetIsSelectionLocked
	// void SetIsSelectionLocked(bool ShouldSelectionBeLocked);                                                                 // [0xc1a1944] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.SetInPreviewMode
	// void SetInPreviewMode(bool bPreview);                                                                                    // [0xc1a18c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.SetIdOfSquadToManageBP
	// void SetIdOfSquadToManageBP(FName& SquadId);                                                                             // [0xc1a1834] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.SelectSlot
	// void SelectSlot(int32_t SquadSlotIndex);                                                                                 // [0xc1a1180] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.OnDifferentSquadSlotSelected__DelegateSignature
	// void OnDifferentSquadSlotSelected__DelegateSignature(int32_t SquadSlotIndex);                                            // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.HandleSelectedButtonChanged
	// void HandleSelectedButtonChanged(class UCommonButtonLegacy* SelectedButton, int32_t ButtonIndex);                        // [0xc1a0bc4] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.HandleRequestViewInAll
	// void HandleRequestViewInAll(int32_t SquadSlotIndex);                                                                     // [0xc1a0b44] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.HandleRequestOpenSquadSlot
	// void HandleRequestOpenSquadSlot(int32_t SquadSlotIndex);                                                                 // [0xc1a0ac4] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.HandleHoveredButtonChanged
	// void HandleHoveredButtonChanged(class UCommonButtonLegacy* HoveredButton, int32_t ButtonIndex);                          // [0xc1a08f0] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.HandleButtonDoubleClicked
	// void HandleButtonDoubleClicked(class UCommonButtonLegacy* CommittedButton, int32_t ButtonIndex);                         // [0xc1a06e8] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.HandleButtonClicked
	// void HandleButtonClicked(class UCommonButtonLegacy* CommittedButton, int32_t ButtonIndex);                               // [0xc1a0570] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.GetIndexOfSelectedSquadSlot
	// int32_t GetIndexOfSelectedSquadSlot();                                                                                   // [0xc19f348] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.GetIdOfSquadToManageBP
	// FName GetIdOfSquadToManageBP();                                                                                          // [0xa1718e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.CreateAndAddSquadSlotButton
	// class UFortSquadSlotSelectorButton* CreateAndAddSquadSlotButton(int32_t SquadSlotIndex, FHomebaseSquadSlot& SquadSlotDefinition, class UWidget*& OutSquadSlotButtonHost); // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotWidget
/// Size: 0x0090 (0x000178 - 0x000208)
class UFortSquadSlotWidget : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	CMember(EFortItemCardSize)                         ItemCardSize                                                OFFSET(get<T>, {0x198, 1, 0, 0})
	CMember(class UFortMultiSizeItemCard*)             SlottedItemCard                                             OFFSET(get<T>, {0x1D8, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   ItemViewContext                                             OFFSET(get<T>, {0x1E8, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadSlotWidget.SetIdOfSquadSlotToManageBP
	// void SetIdOfSquadSlotToManageBP(FName& SquadId, int32_t SquadSlotIndex);                                                 // [0xc1a1694] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotWidget.SetCardSize
	// void SetCardSize(EFortItemCardSize CardSize);                                                                            // [0xc1a13fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotWidget.IsSquadSlotLockedBP
	// bool IsSquadSlotLockedBP();                                                                                              // [0xc1a0df8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotWidget.GetItemInSquadSlotBP
	// class UFortItem* GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer);                                                  // [0xc19f3e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotWidget.GetIdOfSquadSlotToManageBP
	// void GetIdOfSquadSlotToManageBP(FName& OutSquadId, int32_t& OutSquadSlotIndex);                                          // [0xc19f23c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortSquadStatsWidgetBase
/// Size: 0x0038 (0x0002E8 - 0x000320)
class UFortSquadStatsWidgetBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(TArray<class UFortAttributeListItem_NUI*>) OverviewStats                                               OFFSET(get<T>, {0x2E8, 16, 0, 0})
	CMember(class UFortAttributeList_NUI*)             DetailedStats                                               OFFSET(get<T>, {0x2F8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadStatsWidgetBase.RequestStatsUpdate
	// void RequestStatsUpdate();                                                                                               // [0xc1a1158] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadStatsWidgetBase.RequestShowPreviewStats
	// void RequestShowPreviewStats();                                                                                          // [0xc1a1144] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadStatsWidgetBase.HandleSquadSlottingPreviewStateChanged
	// void HandleSquadSlottingPreviewStateChanged();                                                                           // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadStatsWidgetBase.HandlePowerRatingChanged_BP
	// void HandlePowerRatingChanged_BP(bool bHasTeamMebers);                                                                   // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadStatsWidgetBase.GetLocalPlayerId
	// FUniqueNetIdRepl GetLocalPlayerId();                                                                                     // [0xc19f4b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortSquadStatValueWithIcon
/// Size: 0x0088 (0x0002E8 - 0x000370)
class UFortSquadStatValueWithIcon : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	SMember(FGameplayAttribute)                        Attribute                                                   OFFSET(getStruct<T>, {0x2E8, 56, 0, 0})
	SMember(FGameplayAttribute)                        TeamAttribute                                               OFFSET(getStruct<T>, {0x320, 56, 0, 0})
	CMember(TEnumAsByte<EFortBrushSize>)               ImageSize                                                   OFFSET(get<T>, {0x358, 1, 0, 0})
	CMember(class UCommonNumericTextBlock*)            Value                                                       OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(class UImage*)                             Icon                                                        OFFSET(get<T>, {0x368, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadStatValueWithIcon.HandleDifferentAttributeSetBP
	// void HandleDifferentAttributeSetBP();                                                                                    // [0x3d1d968] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSquadTypeLandingPageBase
/// Size: 0x0030 (0x000570 - 0x0005A0)
class UFortSquadTypeLandingPageBase : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1440;

public:
	DMember(bool)                                      bReadOnlyModeWIFE                                           OFFSET(get<bool>, {0x570, 1, 0, 0})
	CMember(EFortHomebaseSquadType)                    SquadType                                                   OFFSET(get<T>, {0x571, 1, 0, 0})
	SMember(FDataTableRowHandle)                       BackInputActionRowHandle                                    OFFSET(getStruct<T>, {0x578, 16, 0, 0})
	CMember(EFortFrontendInventoryFilter)              ItemManagementScreenFilter                                  OFFSET(get<T>, {0x588, 1, 0, 0})
	CMember(TArray<TWeakObjectPtr<UFortSquadSelectorButton*>>) SquadSelectorButtons                                OFFSET(get<T>, {0x590, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadTypeLandingPageBase.ShowWarningReadOnlyWIFE
	// void ShowWarningReadOnlyWIFE(bool Force);                                                                                // [0x3d1d968] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadTypeLandingPageBase.IsScreenWIFE
	// bool IsScreenWIFE();                                                                                                     // [0xc17d278] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadTypeLandingPageBase.HandlePendingNavigationOp
	// void HandlePendingNavigationOp();                                                                                        // [0xc1a09b8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadTypeLandingPageBase.HandleBackInputAction
	// void HandleBackInputAction(bool& bPassThrough);                                                                          // [0xc1a04e4] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadTypeLandingPageBase.CreateAndAddSquadButton
	// class UFortSquadSelectorButton* CreateAndAddSquadButton(FName& SquadId);                                                 // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortStatIcon
/// Size: 0x0048 (0x0002E8 - 0x000330)
class UFortStatIcon : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FGameplayAttribute)                        Attribute                                                   OFFSET(getStruct<T>, {0x2E8, 56, 0, 0})
	CMember(TEnumAsByte<EFortBrushSize>)               ImageSize                                                   OFFSET(get<T>, {0x320, 1, 0, 0})
	CMember(class UImage*)                             Icon                                                        OFFSET(get<T>, {0x328, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortStatIcon.SetAttribute
	// void SetAttribute(FGameplayAttribute& InAttribute);                                                                      // [0xc1a1200] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStatIcon.HandleDifferentAttributeSetBP
	// void HandleDifferentAttributeSetBP();                                                                                    // [0x3d1d968] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSurvivorSquadManagementScreen
/// Size: 0x00E0 (0x000690 - 0x000770)
class UFortSurvivorSquadManagementScreen : public UFortSquadManagementScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1904;

public:
	CMember(class UFortSurvivorSquadStatMatchesBase*)  StatMatchesWidget                                           OFFSET(get<T>, {0x690, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadManagementScreen.UpdateCycleButtons
	// void UpdateCycleButtons();                                                                                               // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadManagementScreen.ShowHelpDialog
	// void ShowHelpDialog();                                                                                                   // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadManagementScreen.PlayFeedbackForSlottingPerson
	// void PlayFeedbackForSlottingPerson(class UFortWorker* Worker, int32_t SlotIndex, FFortSurvivorSquadSlottingFeedbackData& FeedbackData); // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSurvivorSquadSelectorButton
/// Size: 0x0020 (0x001500 - 0x001520)
class UFortSurvivorSquadSelectorButton : public UFortSquadSelectorButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5408;

public:
	CMember(TArray<FGameplayAttribute>)                FortStatAttributes                                          OFFSET(get<T>, {0x14F8, 16, 0, 0})
	CMember(TArray<FGameplayAttribute>)                FortTeamStatAttributes                                      OFFSET(get<T>, {0x1508, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadSelectorButton.TryGetSummaryStats
	// bool TryGetSummaryStats(FFortSurvivorSquadSelectorButtonSummaryStats& OutSummaryStats);                                  // [0xc1a25a8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadSelectorButton.TryGetSquadMembers
	// bool TryGetSquadMembers(TArray<UFortWorker*>& OutSquadMembers);                                                          // [0xc1a235c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadSelectorButton.TryGetPersonalityMatches
	// bool TryGetPersonalityMatches(FFortSurvivorSquadSelectorButtonPersonalityMatches& OutPersonalityMatches);                // [0xc1a1bb8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchBase
/// Size: 0x04C8 (0x0002E8 - 0x0007B0)
class UFortSurvivorSquadStatMatchBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1968;

public:
	SMember(FFortUISurvivorSquadStatMatch)             StatMatch                                                   OFFSET(getStruct<T>, {0x2F0, 1216, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchBase.OnStatMatchUpdated
	// void OnStatMatchUpdated(FFortUISurvivorSquadStatMatch UpdatedMatch);                                                     // [0x3d1d968] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchesBase
/// Size: 0x0030 (0x000318 - 0x000348)
class UFortSurvivorSquadStatMatchesBase : public UFortSquadStatDetailsWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	CMember(class UClass*)                             StatMatchClass                                              OFFSET(get<T>, {0x318, 8, 0, 0})
	DMember(bool)                                      bSummaryView                                                OFFSET(get<bool>, {0x320, 1, 0, 0})
	CMember(TArray<class UFortSurvivorSquadStatMatchBase*>) StatMatches                                            OFFSET(get<T>, {0x328, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.TryGetStaticSquadDataBP
	// bool TryGetStaticSquadDataBP(FHomebaseSquad& OutSquadData);                                                              // [0xc1a24d8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.SetSummaryView
	// void SetSummaryView(bool bInSummaryView);                                                                                // [0xc1a1a08] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.SetIdOfSquadToManageBP
	// void SetIdOfSquadToManageBP(FName& SquadId);                                                                             // [0xc1a1834] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.HandleDifferentSquadSetBP
	// void HandleDifferentSquadSetBP();                                                                                        // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.GetIdOfSquadToManageBP
	// FName GetIdOfSquadToManageBP();                                                                                          // [0xa1718e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.AddStatMatch
	// void AddStatMatch(class UFortSurvivorSquadStatMatchBase* SetBonus);                                                      // [0x3d1d968] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSurvivorSquadSummaryStatItem
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UFortSurvivorSquadSummaryStatItem : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	CMember(TEnumAsByte<EFortBrushSize>)               ImageSize                                                   OFFSET(get<T>, {0x2E8, 1, 0, 0})
	CMember(class UImage*)                             Icon                                                        OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Value                                                       OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Name                                                        OFFSET(get<T>, {0x300, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadSummaryStatItem.SetAttributeModifierAccumulation
	// void SetAttributeModifierAccumulation(FFortAttributeModifierAccumulation& Accumulation);                                 // [0xc1a1320] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortWorkerSetBonusIcon
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortWorkerSetBonusIcon : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	SMember(FGameplayTag)                              GameplayTag                                                 OFFSET(getStruct<T>, {0x2E8, 4, 0, 0})
	CMember(TEnumAsByte<EFortBrushSize>)               ImageSize                                                   OFFSET(get<T>, {0x2EC, 1, 0, 0})
	CMember(class UImage*)                             Icon                                                        OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortWorkerSetBonusIcon.SetGameplayTag
	// void SetGameplayTag(FGameplayTag& InGameplayTag);                                                                        // [0xc1a1488] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortWorkerSetBonusIcon.HandleDifferentGameplayTagSetBP
	// void HandleDifferentGameplayTagSetBP();                                                                                  // [0x3d1d968] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortStatsOverviewDetailsBase
/// Size: 0x0038 (0x0002E8 - 0x000320)
class UFortStatsOverviewDetailsBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(TArray<class UFortAttributeListItem_NUI*>) OverviewStats                                               OFFSET(get<T>, {0x2E8, 16, 0, 0})
	CMember(class UFortAttributeList_NUI*)             DetailedStats                                               OFFSET(get<T>, {0x2F8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortStatsOverviewDetailsBase.RequestStatsUpdate
	// void RequestStatsUpdate();                                                                                               // [0xc1a116c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStatsOverviewDetailsBase.ListenForChanges
	// void ListenForChanges(bool bListen);                                                                                     // [0xc1a0e3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStatsOverviewDetailsBase.GetLocalPlayerId
	// FUniqueNetIdRepl GetLocalPlayerId();                                                                                     // [0xc19f4b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortLlamaStoreData
/// Size: 0x0040 (0x000030 - 0x000070)
class UFortLlamaStoreData : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<FText>)                             RandomLoadingTexts                                          OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FName)                                     NotEnoughCurrencyDialogCloseAction                          OFFSET(getStruct<T>, {0x40, 4, 0, 0})
	CMember(class UClass*)                             InspectWidgetClass                                          OFFSET(get<T>, {0x48, 8, 0, 0})
	DMember(float)                                     ShowOfferDelay                                              OFFSET(get<float>, {0x50, 4, 0, 0})
	CMember(class UClass*)                             StoreOpeningCardPackClass                                   OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(class UClass*)                             UnopenedCardpacksModalClass                                 OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(class UClass*)                             UnopenedCardpacksModalClass_Legacy                          OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortLlamaStoreBase
/// Size: 0x00A0 (0x0004E0 - 0x000580)
class UFortLlamaStoreBase : public UFortDirectAcquisitionWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	CMember(TArray<FOfferGroup>)                       OfferCategoriesToDisplay                                    OFFSET(get<T>, {0x4E0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       TencentDetailsActionData                                    OFFSET(getStruct<T>, {0x4F0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       AddVBucksActionData                                         OFFSET(getStruct<T>, {0x500, 16, 0, 0})
	DMember(bool)                                      bShouldShowAddVBucksAction                                  OFFSET(get<bool>, {0x510, 1, 0, 0})
	CMember(class UDynamicEntryBox*)                   OfferEntryBox                                               OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(class UCommonButtonGroupBase*)             OfferButtonGroup                                            OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(class UFortLlamaStoreDetailsBase*)         OfferDetails                                                OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(class UFortLlamaStoreData*)                StoreData                                                   OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_UnopenedLlamas                                       OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(class UFortLlamaStoreOfferInfo*)           PendingPurchaseOffer                                        OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(class UCommonActivatablePanelLegacy*)      StoreOpeningCardPack                                        OFFSET(get<T>, {0x548, 8, 0, 0})
	DMember(bool)                                      bHideSoldOffers                                             OFFSET(get<bool>, {0x550, 1, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase.SwapToCardEnterState
	// void SwapToCardEnterState();                                                                                             // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase.SetupFocus
	// void SetupFocus();                                                                                                       // [0xc1a1a88] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase.OnStoreStateChanged
	// void OnStoreStateChanged(EFortStoreState NewStoreState);                                                                 // [0xc1a0fd4] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase.OnStorePurchaseCompleted
	// void OnStorePurchaseCompleted();                                                                                         // [0xc1a0fac] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase.HandleTencentDetails
	// void HandleTencentDetails();                                                                                             // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase.HandleAddVBucks
	// void HandleAddVBucks();                                                                                                  // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase.CreateTencentPuchaseOpenModal
	// void CreateTencentPuchaseOpenModal();                                                                                    // [0x3d1d968] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortLlamaStoreBase_Legacy
/// Size: 0x0078 (0x000650 - 0x0006C8)
class UFortLlamaStoreBase_Legacy : public UFortDirectAcquisitionWidgetBase_Legacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1736;

public:
	CMember(TArray<FOfferGroup>)                       OfferCategoriesToDisplay                                    OFFSET(get<T>, {0x650, 16, 0, 0})
	CMember(class UDynamicEntryBox*)                   OfferEntryBox                                               OFFSET(get<T>, {0x660, 8, 0, 0})
	CMember(class UCommonButtonGroupLegacy*)           OfferButtonGroup                                            OFFSET(get<T>, {0x668, 8, 0, 0})
	CMember(class UFortLlamaStoreDetailsBase*)         OfferDetails                                                OFFSET(get<T>, {0x670, 8, 0, 0})
	CMember(class UFortLlamaStoreData*)                StoreData                                                   OFFSET(get<T>, {0x678, 8, 0, 0})
	CMember(class UCommonButtonLegacy*)                Button_UnopenedLlamas                                       OFFSET(get<T>, {0x680, 8, 0, 0})
	CMember(class UFortLlamaStoreOfferInfo*)           PendingPurchaseOffer                                        OFFSET(get<T>, {0x688, 8, 0, 0})
	CMember(class UCommonActivatablePanelLegacy*)      StoreOpeningCardPack                                        OFFSET(get<T>, {0x690, 8, 0, 0})
	DMember(bool)                                      bHideSoldOffers                                             OFFSET(get<bool>, {0x698, 1, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase_Legacy.SwapToCardEnterState
	// void SwapToCardEnterState();                                                                                             // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase_Legacy.SetupFocus
	// void SetupFocus();                                                                                                       // [0xc1a1a9c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase_Legacy.OnStoreStateChanged
	// void OnStoreStateChanged(EFortStoreState NewStoreState);                                                                 // [0xc1a1054] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase_Legacy.OnStorePurchaseCompleted
	// void OnStorePurchaseCompleted();                                                                                         // [0xc1a0fc0] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase_Legacy.CreateTencentPuchaseOpenModal
	// void CreateTencentPuchaseOpenModal();                                                                                    // [0x3d1d968] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortLlamaStoreDetailsBase
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UFortLlamaStoreDetailsBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	CMember(class UFortStoreFrontOfferInfo*)           OfferInfo                                                   OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UCommonTileView*)                    ItemTileView                                                OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortLlamaStoreDetailsBase.StartUpgradingToSilver
	// void StartUpgradingToSilver();                                                                                           // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreDetailsBase.StartUpgradingToGold
	// void StartUpgradingToGold();                                                                                             // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreDetailsBase.SetScrollWidget
	// void SetScrollWidget();                                                                                                  // [0xc1a19c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreDetailsBase.OnOfferInfoChanged
	// void OnOfferInfoChanged(int32_t CurrentOfferRarity);                                                                     // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreDetailsBase.GetNotInCollectionBookCount
	// int32_t GetNotInCollectionBookCount();                                                                                   // [0xa4414f8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreDetailsBase.GetNewItemCount
	// int32_t GetNewItemCount();                                                                                               // [0xa442064] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreDetailsBase.GetChoiceItemCount
	// int32_t GetChoiceItemCount();                                                                                            // [0xc179d28] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortLlamaStoreInspectionScreen
/// Size: 0x0010 (0x000830 - 0x000840)
class UFortLlamaStoreInspectionScreen : public UFortStoreFrontOfferDetailsWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2112;

public:
	CMember(class UCommonTileView*)                    GrantedItemTileView                                         OFFSET(get<T>, {0x830, 8, 0, 0})
	DMember(bool)                                      bIsInChoiceViewMode                                         OFFSET(get<bool>, {0x838, 1, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortLlamaStoreInspectionScreen.IsItemChoicePack
	// bool IsItemChoicePack(class UObject* ItemToCheck);                                                                       // [0xc1a0d08] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreInspectionScreen.GetSelectedCardPack
	// class UFortCardPackItem* GetSelectedCardPack();                                                                          // [0xc19f5f4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreInspectionScreen.GetInspectChoiceInputState
	// EInputActionState GetInspectChoiceInputState();                                                                          // [0xc19f360] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortOpenCardPackModal
/// Size: 0x0040 (0x000570 - 0x0005B0)
class UFortOpenCardPackModal : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1456;

public:
	CMember(class UCommonListView*)                    CardPackList                                                OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(class UCommonButtonLegacy*)                OpenAllButton                                               OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(class UCommonButtonLegacy*)                CancelButton                                                OFFSET(get<T>, {0x580, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  BPOnRequestOpenCardPack                                     OFFSET(getStruct<T>, {0x588, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortOpenCardPackModal_Legacy
/// Size: 0x0040 (0x000570 - 0x0005B0)
class UFortOpenCardPackModal_Legacy : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1456;

public:
	CMember(class UCommonListView*)                    CardPackList                                                OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(class UCommonButtonLegacy*)                OpenAllButton                                               OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(class UCommonButtonLegacy*)                CancelButton                                                OFFSET(get<T>, {0x580, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  BPOnRequestOpenCardPack                                     OFFSET(getStruct<T>, {0x588, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.StWHUD
/// Size: 0x0168 (0x000418 - 0x000580)
class UStWHUD : public UFortUIStateWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	CMember(class UFortPickerData*)                    PickerData                                                  OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   EmotePickerClass                                            OFFSET(get<T>, {0x420, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ManagementTabsScreenClass                                   OFFSET(get<T>, {0x448, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   TopBarClass                                                 OFFSET(get<T>, {0x468, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   MissionActivationWidgetClass                                OFFSET(get<T>, {0x488, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PostGameScreenClass                                         OFFSET(get<T>, {0x4A8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   DefenderConfigPanelClass                                    OFFSET(get<T>, {0x4C8, 32, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSTWHUDMenuStackChanged                                    OFFSET(getStruct<T>, {0x4E8, 16, 0, 0})
	DMember(int32_t)                                   ReticleExtensionSize                                        OFFSET(get<int32_t>, {0x4F8, 4, 0, 0})
	CMember(class UCommonUserWidget*)                  BottomBarWidget                                             OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(class UOverlay*)                           PersistentHUDContent                                        OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(class UCommonActivatableWidget*)           TitleBar                                                    OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(class UOverlay*)                           IndicatorContent                                            OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(class UFortActivatableChatWidget*)         ChatWidget_STW                                              OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   InspectionScreenClass                                       OFFSET(get<T>, {0x528, 32, 0, 0})
	CMember(class UFortUINavigationManager*)           NavigationManager                                           OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(class UFortWeaponReticleExtensionWidgetBase*) CurrentCustomReticleExtension                            OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(TArray<class UFortWeaponReticleExtensionWidgetBase*>) RecentReticleExtensions                          OFFSET(get<T>, {0x570, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.StWHUD.NativeHandleWeaponEquipped
	// void NativeHandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                            // [0xc1a0ee8] Final|Native|Public  
	// Function /Script/SaveTheWorldUI.StWHUD.HandlePickerOpenRequest
	// void HandlePickerOpenRequest(EFortPickerMode Mode, int32_t InitialOption, bool bIgnoreFirstAccept);                      // [0xc1a09cc] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.StWHUD.HandleCursorModeChanged
	// void HandleCursorModeChanged(bool bCursorModeEnabled, FName ActionName, class UUserWidget* CursorModeContentWidget);     // [0xc1a07e8] Final|Native|Protected 
};

/// Class /Script/SaveTheWorldUI.FortTheaterSelect
/// Size: 0x0030 (0x000400 - 0x000430)
class UFortTheaterSelect : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	CMember(class UOverlay*)                           OverlayMain                                                 OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class UFortQuestItemDefinition*)           DefaultRequiredCompletedQuest                               OFFSET(get<T>, {0x428, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortTheaterSelect.OnNavigationRight
	// void OnNavigationRight();                                                                                                // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortTheaterSelect.OnNavigationLeft
	// void OnNavigationLeft();                                                                                                 // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortTheaterSelect.GetTheaterRecommendedRatingRange
	// bool GetTheaterRecommendedRatingRange(FString UniqueID, int32_t& Minimum, int32_t& Maximum);                             // [0xc19fcfc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortTheaterSelect_Legacy
/// Size: 0x0030 (0x000538 - 0x000568)
class UFortTheaterSelect_Legacy : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1384;

public:
	CMember(class UOverlay*)                           OverlayMain                                                 OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(class UFortQuestItemDefinition*)           DefaultRequiredCompletedQuest                               OFFSET(get<T>, {0x560, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortTheaterSelect_Legacy.OnNavigationRight
	// void OnNavigationRight();                                                                                                // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortTheaterSelect_Legacy.OnNavigationLeft
	// void OnNavigationLeft();                                                                                                 // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortTheaterSelect_Legacy.GetTheaterRecommendedRatingRange
	// bool GetTheaterRecommendedRatingRange(FString UniqueID, int32_t& Minimum, int32_t& Maximum);                             // [0xc19fcfc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortHomebaseNodeItemTooltip
/// Size: 0x0020 (0x000050 - 0x000070)
class UFortHomebaseNodeItemTooltip : public UFortItemTooltip
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/SaveTheWorldUI.FortUpgradeDetailsBase
/// Size: 0x0040 (0x0002E8 - 0x000328)
class UFortUpgradeDetailsBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(class UMediaPlayer*)                       VideoPlayer                                                 OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UFortUpgradeInfo*)                   UpgradeInfo                                                 OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortUpgradeDetailsBase.RequestPurchaseNode
	// void RequestPurchaseNode();                                                                                              // [0xc1a1130] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortUpgradeDetailsBase.OnUpgradeToDetailChanged
	// void OnUpgradeToDetailChanged();                                                                                         // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortUpgradeDetailsBase.OnShowIcon
	// void OnShowIcon(class UTexture2D* Icon);                                                                                 // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortUpgradeDetailsBase.OnScreenActive
	// void OnScreenActive();                                                                                                   // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortUpgradeDetailsBase.OnPurchaseComplete
	// void OnPurchaseComplete();                                                                                               // [0x3d1d968] Event|Public|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortUpgradeInfo
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UFortUpgradeInfo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(class UFortHomebaseNodeItemDefinition*)    NodeItemDef                                                 OFFSET(get<T>, {0x48, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.IsUpgradeUnlocked
	// bool IsUpgradeUnlocked();                                                                                                // [0x98c57c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.IsPreviewing
	// bool IsPreviewing();                                                                                                     // [0xc1a0da0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetVideo
	// class UMediaSource* GetVideo();                                                                                          // [0xc1a04c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetUpgradeUnlockLevel
	// int32_t GetUpgradeUnlockLevel();                                                                                         // [0x30d0eb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetTitle
	// FText GetTitle();                                                                                                        // [0xc1a0448] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetNextLevelTitle
	// FText GetNextLevelTitle();                                                                                               // [0xc19f58c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetNextLevelDescription
	// FText GetNextLevelDescription();                                                                                         // [0xc19f548] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetNextLevel
	// int32_t GetNextLevel();                                                                                                  // [0xc19f524] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetMaxLevel
	// int32_t GetMaxLevel();                                                                                                   // [0xc19f50c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetItemName
	// FText GetItemName();                                                                                                     // [0xc19f470] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetIcon
	// TWeakObjectPtr<UTexture2D*> GetIcon(EUpgradeInfoImageSize ImageSize);                                                    // [0xc19f0b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetDisplayAttributes
	// bool GetDisplayAttributes(TArray<FFortDisplayAttribute>& OutDisplayAttributes);                                          // [0xc19efbc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetDescription
	// FText GetDescription();                                                                                                  // [0xc19ef58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetCurrentLevel
	// int32_t GetCurrentLevel();                                                                                               // [0xc19ef40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetCost
	// int32_t GetCost();                                                                                                       // [0xc19eeb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.ForwardPreview
	// void ForwardPreview();                                                                                                   // [0xc19ee78] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.CanPreview
	// bool CanPreview();                                                                                                       // [0xc19ee20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.CanAffordUpgrade
	// bool CanAffordUpgrade();                                                                                                 // [0xc19ee0c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.BackwardPreview
	// void BackwardPreview();                                                                                                  // [0xc19edd0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortUpgradeScreenBase
/// Size: 0x00C8 (0x000538 - 0x000600)
class UFortUpgradeScreenBase : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1536;

public:
	CMember(class UFortTabListWidgetBase*)             UpgradesTabSelector                                         OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(class UCommonTileView*)                    UpgradesTileView                                            OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(class UCommonLoadGuard*)                   UpgradeTileViewLoadGuard                                    OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(class UFortUpgradeDetailsBase*)            Details                                                     OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(TMap<FName, EHomebaseNodeType>)            TabToNodeTypeMap                                            OFFSET(get<T>, {0x558, 80, 0, 0})
	CMember(class UFortItemDefinition*)                UpgradesRespecToken                                         OFFSET(get<T>, {0x5A8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.UseUpgradesRespecToken
	// void UseUpgradesRespecToken();                                                                                           // [0xc1a2658] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.TogglePreview
	// void TogglePreview();                                                                                                    // [0xc1a1ab0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.RefreshFocus
	// void RefreshFocus();                                                                                                     // [0xc1a1108] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.OnUseUpgradesRespecTokenComplete
	// void OnUseUpgradesRespecTokenComplete();                                                                                 // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.OnUpgradeInfoChanged
	// void OnUpgradeInfoChanged();                                                                                             // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.OnPurchaseNodeComplete
	// void OnPurchaseNodeComplete();                                                                                           // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.IsPreviewing
	// bool IsPreviewing();                                                                                                     // [0xc1a0db4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.HandleTabSelected
	// void HandleTabSelected(FName TabID);                                                                                     // [0xc1a0c88] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.GetUpgradesRespecTokenCount
	// int32_t GetUpgradesRespecTokenCount();                                                                                   // [0xc1a049c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.CanPreview
	// bool CanPreview();                                                                                                       // [0xc19ee40] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.AreUpgradesRespecTokensAvailable
	// bool AreUpgradesRespecTokensAvailable();                                                                                 // [0xc19eda8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy
/// Size: 0x00C8 (0x000538 - 0x000600)
class UFortUpgradeScreenBase_Legacy : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1536;

public:
	CMember(class UFortTabListWidgetBase_Legacy*)      UpgradesTabSelector                                         OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(class UCommonTileView*)                    UpgradesTileView                                            OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(class UCommonLoadGuard*)                   UpgradeTileViewLoadGuard                                    OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(class UFortUpgradeDetailsBase*)            Details                                                     OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(TMap<FName, EHomebaseNodeType>)            TabToNodeTypeMap                                            OFFSET(get<T>, {0x558, 80, 0, 0})
	CMember(class UFortItemDefinition*)                UpgradesRespecToken                                         OFFSET(get<T>, {0x5A8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.UseUpgradesRespecToken
	// void UseUpgradesRespecToken();                                                                                           // [0xc1a266c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.TogglePreview
	// void TogglePreview();                                                                                                    // [0xc1a1b34] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.RefreshFocus
	// void RefreshFocus();                                                                                                     // [0xc1a111c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.OnUseUpgradesRespecTokenComplete
	// void OnUseUpgradesRespecTokenComplete();                                                                                 // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.OnUpgradeInfoChanged
	// void OnUpgradeInfoChanged();                                                                                             // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.OnPurchaseNodeComplete
	// void OnPurchaseNodeComplete();                                                                                           // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.IsPreviewing
	// bool IsPreviewing();                                                                                                     // [0xc1a0db4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.HandleTabSelected
	// void HandleTabSelected(FName TabID);                                                                                     // [0xc1a0c88] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.GetUpgradesRespecTokenCount
	// int32_t GetUpgradesRespecTokenCount();                                                                                   // [0xc1a049c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.CanPreview
	// bool CanPreview();                                                                                                       // [0xc19ee40] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.AreUpgradesRespecTokensAvailable
	// bool AreUpgradesRespecTokensAvailable();                                                                                 // [0xc19eda8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortUpgradeTileBase
/// Size: 0x0010 (0x0014E0 - 0x0014F0)
class UFortUpgradeTileBase : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5360;

public:
	CMember(class UFortUpgradeInfo*)                   UpgradeInfo                                                 OFFSET(get<T>, {0x14E8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortUpgradeTileBase.OnDataRefresh
	// void OnDataRefresh(bool bUpgrade);                                                                                       // [0x3d1d968] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortUpgradeTileBase_Legacy
/// Size: 0x0010 (0x0014E0 - 0x0014F0)
class UFortUpgradeTileBase_Legacy : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5360;

public:
	CMember(class UFortUpgradeInfo*)                   UpgradeInfo                                                 OFFSET(get<T>, {0x14E8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortUpgradeTileBase_Legacy.OnDataRefresh
	// void OnDataRefresh(bool bUpgrade);                                                                                       // [0x3d1d968] Event|Protected|BlueprintEvent 
};

/// Struct /Script/SaveTheWorldUI.SquadSlotSortTypes
/// Size: 0x0010 (0x000000 - 0x000010)
class FSquadSlotSortTypes : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<ESquadSlotSortType>)                SortTypes                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.ExpeditionTabInfo
/// Size: 0x0120 (0x000000 - 0x000120)
class FExpeditionTabInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FName)                                     TabNameID                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FFortTabButtonLabelInfo)                   TabLabelInfo                                                OFFSET(getStruct<T>, {0x10, 272, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.ConsumedCriteriaData
/// Size: 0x0018 (0x000000 - 0x000018)
class FConsumedCriteriaData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     PowerMod                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TArray<FName>)                             CriteriaNames                                               OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.FortHeroLoadoutHeroPickerTabConfiguration
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FFortHeroLoadoutHeroPickerTabConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FFortItemFilterDefinition)                 Filter                                                      OFFSET(getStruct<T>, {0x0, 96, 0, 0})
	SMember(FFortItemSorterDefinition)                 Sorter                                                      OFFSET(getStruct<T>, {0x60, 80, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.FortInGamePerkDisplayData
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortInGamePerkDisplayData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EFortHeroPerkDisplayType)                  PerkDisplayType                                             OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Row                                                         OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Column                                                      OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.FortRefundDescriptionsData
/// Size: 0x0038 (0x000008 - 0x000040)
class FFortRefundDescriptionsData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   SearchString                                                OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   TargetReleaseVersion                                        OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FText)                                     RefundDescriptionText                                       OFFSET(getStruct<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.FortQuestMapEventQuestSideBarData
/// Size: 0x0020 (0x000008 - 0x000028)
class FFortQuestMapEventQuestSideBarData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UFortQuestItemDefinition*)           QuestItemDefinition                                         OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<FString>)                           EventFlags                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bShowAlways                                                 OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(float)                                     CycleTime                                                   OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.FortLandingPageDefenderSummaryInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FFortLandingPageDefenderSummaryInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     SquadId                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FText)                                     TheaterDisplayName                                          OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FString)                                   TheaterUniqueId                                             OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.FortAttributeModifierAccumulation
/// Size: 0x0048 (0x000000 - 0x000048)
class FFortAttributeModifierAccumulation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FGameplayTag)                              GameplayTag                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FGameplayAttribute)                        Attribute                                                   OFFSET(getStruct<T>, {0x8, 56, 0, 0})
	CMember(TEnumAsByte<EGameplayModOp>)               ModifierOp                                                  OFFSET(get<T>, {0x40, 1, 0, 0})
	DMember(float)                                     Magnitude                                                   OFFSET(get<float>, {0x44, 4, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.FortSurvivorSquadSlottingFeedbackData
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FFortSurvivorSquadSlottingFeedbackData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      HadLeaderMatch                                              OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      HasLeaderMatch                                              OFFSET(get<bool>, {0x1, 1, 0, 0})
	CMember(TMap<FGameplayTag, int32_t>)               PreviousSetBonusCounts                                      OFFSET(get<T>, {0x8, 80, 0, 0})
	CMember(TMap<FGameplayTag, int32_t>)               CurrentSetBonusCounts                                       OFFSET(get<T>, {0x58, 80, 0, 0})
	DMember(int32_t)                                   PreviousPersonalityMatchCount                               OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
	DMember(int32_t)                                   CurrentPersonalityMatchCount                                OFFSET(get<int32_t>, {0xAC, 4, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.FortSurvivorSquadSelectorButtonSummaryStats
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FFortSurvivorSquadSelectorButtonSummaryStats : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FName)                                     SquadId                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FGameplayAttribute)                        FortAttribute                                               OFFSET(getStruct<T>, {0x8, 56, 0, 0})
	DMember(float)                                     FortAttributeValue                                          OFFSET(get<float>, {0x40, 4, 0, 0})
	SMember(FGameplayAttribute)                        FortTeamAttribute                                           OFFSET(getStruct<T>, {0x48, 56, 0, 0})
	DMember(float)                                     TeamFortAttributeValue                                      OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     SquadPowerValue                                             OFFSET(get<float>, {0x84, 4, 0, 0})
	SMember(FText)                                     FortAttributeName                                           OFFSET(getStruct<T>, {0x88, 24, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.FortSurvivorSquadSelectorButtonPersonalityMatches
/// Size: 0x0490 (0x000000 - 0x000490)
class FFortSurvivorSquadSelectorButtonPersonalityMatches : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
	DMember(int32_t)                                   NumPersonalityMatches                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   TotalNonLeaderSquadMembers                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(bool)                                      HavePersonalityIcons                                        OFFSET(get<bool>, {0x8, 1, 0, 0})
	SMember(FFortMultiSizeBrush)                       PersonalityIcons                                            OFFSET(getStruct<T>, {0x10, 1152, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.FortUISurvivorSquadStatMatch
/// Size: 0x04C0 (0x000000 - 0x0004C0)
class FFortUISurvivorSquadStatMatch : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1216;

public:
	SMember(FFortMultiSizeBrush)                       Icons                                                       OFFSET(getStruct<T>, {0x0, 1152, 0, 0})
	SMember(FText)                                     MagnitudeText                                               OFFSET(getStruct<T>, {0x480, 24, 0, 0})
	SMember(FText)                                     AttributeDisplayName                                        OFFSET(getStruct<T>, {0x498, 24, 0, 0})
	DMember(int32_t)                                   NumMembersMeetingCriteria                                   OFFSET(get<int32_t>, {0x4B0, 4, 0, 0})
	DMember(int32_t)                                   NumMembersRequired                                          OFFSET(get<int32_t>, {0x4B4, 4, 0, 0})
	CMember(EFortUISurvivorSquadMatchType)             MatchType                                                   OFFSET(get<T>, {0x4B8, 1, 0, 0})
	CMember(EFortBuffState)                            PreviewEffect                                               OFFSET(get<T>, {0x4B9, 1, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.OfferGroup
/// Size: 0x0018 (0x000000 - 0x000018)
class FOfferGroup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   MaxNumberToShow                                             OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.HomebaseNodeDisplayData
/// Size: 0x0078 (0x000008 - 0x000080)
class FHomebaseNodeDisplayData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FText)                                     Title                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               LargePreviewImage                                           OFFSET(get<T>, {0x38, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               SmallPreviewImage                                           OFFSET(get<T>, {0x58, 32, 0, 0})
	CMember(class UMediaSource*)                       PreviewVideoMediaSource                                     OFFSET(get<T>, {0x78, 8, 0, 0})
};

/// Enum /Script/SaveTheWorldUI.EViewerNavigationDirection
/// Size: 0x03
enum EViewerNavigationDirection : uint8_t
{
	EViewerNavigationDirection__Previous                                             = 0,
	EViewerNavigationDirection__Next                                                 = 1,
	EViewerNavigationDirection__EViewerNavigationDirection_MAX                       = 2
};

/// Enum /Script/SaveTheWorldUI.EFortCollectionBookPopupButtonType
/// Size: 0x07
enum EFortCollectionBookPopupButtonType : uint8_t
{
	EFortCollectionBookPopupButtonType__Invalid                                      = 0,
	EFortCollectionBookPopupButtonType__SelectItem                                   = 1,
	EFortCollectionBookPopupButtonType__Preview                                      = 2,
	EFortCollectionBookPopupButtonType__Purchase                                     = 3,
	EFortCollectionBookPopupButtonType__Unslot                                       = 4,
	EFortCollectionBookPopupButtonType__Back                                         = 5,
	EFortCollectionBookPopupButtonType__EFortCollectionBookPopupButtonType_MAX       = 6
};

/// Enum /Script/SaveTheWorldUI.ECollectionBookSectionNavTarget
/// Size: 0x03
enum ECollectionBookSectionNavTarget : uint8_t
{
	ECollectionBookSectionNavTarget__SlotSelect                                      = 0,
	ECollectionBookSectionNavTarget__SlotPicker                                      = 1,
	ECollectionBookSectionNavTarget__ECollectionBookSectionNavTarget_MAX             = 2
};

/// Enum /Script/SaveTheWorldUI.EHeroLoadoutSlotType
/// Size: 0x05
enum EHeroLoadoutSlotType : uint8_t
{
	EHeroLoadoutSlotType__CommanderSlot                                              = 0,
	EHeroLoadoutSlotType__TeamPerkSlot                                               = 1,
	EHeroLoadoutSlotType__CrewSlot                                                   = 2,
	EHeroLoadoutSlotType__GadgetSlot                                                 = 3,
	EHeroLoadoutSlotType__EHeroLoadoutSlotType_MAX                                   = 4
};

/// Enum /Script/SaveTheWorldUI.ESquadSlotSortType
/// Size: 0x06
enum ESquadSlotSortType : uint8_t
{
	ESquadSlotSortType__ByRating                                                     = 0,
	ESquadSlotSortType__ByLevel                                                      = 1,
	ESquadSlotSortType__ByRarity                                                     = 2,
	ESquadSlotSortType__ByBonus                                                      = 3,
	ESquadSlotSortType__ByMatch                                                      = 4,
	ESquadSlotSortType__ESquadSlotSortType_MAX                                       = 5
};

/// Enum /Script/SaveTheWorldUI.EFrontEndRewardType
/// Size: 0x11
enum EFrontEndRewardType : uint8_t
{
	EFrontEndRewardType__Mission                                                     = 0,
	EFrontEndRewardType__Quest                                                       = 1,
	EFrontEndRewardType__EpicNewQuest                                                = 2,
	EFrontEndRewardType__Expedition                                                  = 3,
	EFrontEndRewardType__CollectionBook                                              = 4,
	EFrontEndRewardType__MissionAlert                                                = 5,
	EFrontEndRewardType__DifficultyIncrease                                          = 6,
	EFrontEndRewardType__GiftBox                                                     = 7,
	EFrontEndRewardType__ItemCache                                                   = 8,
	EFrontEndRewardType__PhoenixLevelUp                                              = 9,
	EFrontEndRewardType__EFrontEndRewardType_MAX                                     = 10
};

/// Enum /Script/SaveTheWorldUI.ECollectionBookRewardStatus
/// Size: 0x04
enum ECollectionBookRewardStatus : uint8_t
{
	ECollectionBookRewardStatus__Unknown                                             = 0,
	ECollectionBookRewardStatus__Available                                           = 1,
	ECollectionBookRewardStatus__Claimed                                             = 2,
	ECollectionBookRewardStatus__ECollectionBookRewardStatus_MAX                     = 3
};

/// Enum /Script/SaveTheWorldUI.ECollectionBookPrimaryNavTarget
/// Size: 0x03
enum ECollectionBookPrimaryNavTarget : uint8_t
{
	ECollectionBookPrimaryNavTarget__Overview                                        = 0,
	ECollectionBookPrimaryNavTarget__SectionTileView                                 = 1,
	ECollectionBookPrimaryNavTarget__ECollectionBookPrimaryNavTarget_MAX             = 2
};

/// Enum /Script/SaveTheWorldUI.EFortExpeditionListSort
/// Size: 0x04
enum EFortExpeditionListSort : uint8_t
{
	EFortExpeditionListSort__ByRating                                                = 0,
	EFortExpeditionListSort__ByDuration                                              = 1,
	EFortExpeditionListSort__ByName                                                  = 2,
	EFortExpeditionListSort__EFortExpeditionListSort_MAX                             = 3
};

/// Enum /Script/SaveTheWorldUI.EFortRewardItemTypeSTW
/// Size: 0x05
enum EFortRewardItemTypeSTW : uint8_t
{
	EFortRewardItemTypeSTW__RewardedBadges                                           = 0,
	EFortRewardItemTypeSTW__MissedBadges                                             = 1,
	EFortRewardItemTypeSTW__RewardedItems                                            = 2,
	EFortRewardItemTypeSTW__RewardedAccountItems                                     = 3,
	EFortRewardItemTypeSTW__EFortRewardItemTypeSTW_MAX                               = 4
};

/// Enum /Script/SaveTheWorldUI.EFortHeroPerkDisplayType
/// Size: 0x06
enum EFortHeroPerkDisplayType : uint8_t
{
	EFortHeroPerkDisplayType__CommanderPerk                                          = 0,
	EFortHeroPerkDisplayType__TeamPerk                                               = 1,
	EFortHeroPerkDisplayType__ClassPerk                                              = 2,
	EFortHeroPerkDisplayType__StandardPerk                                           = 3,
	EFortHeroPerkDisplayType__Max_None                                               = 4,
	EFortHeroPerkDisplayType__EFortHeroPerkDisplayType_MAX                           = 5
};

/// Enum /Script/SaveTheWorldUI.EFortAlterationOptionType
/// Size: 0x04
enum EFortAlterationOptionType : uint8_t
{
	EFortAlterationOptionType__Upgrade                                               = 0,
	EFortAlterationOptionType__Replacement                                           = 1,
	EFortAlterationOptionType__Max_NONE                                              = 2,
	EFortAlterationOptionType__EFortAlterationOptionType_MAX                         = 3
};

/// Enum /Script/SaveTheWorldUI.EFortMissionActivationWidgetSTWState
/// Size: 0x05
enum EFortMissionActivationWidgetSTWState : uint8_t
{
	EFortMissionActivationWidgetSTWState__Default                                    = 0,
	EFortMissionActivationWidgetSTWState__StartObjective                             = 1,
	EFortMissionActivationWidgetSTWState__IncreaseDifficulty                         = 2,
	EFortMissionActivationWidgetSTWState__Invalid                                    = 3,
	EFortMissionActivationWidgetSTWState__EFortMissionActivationWidgetSTWState_MAX   = 4
};

/// Enum /Script/SaveTheWorldUI.ECalloutNavigationDirection
/// Size: 0x03
enum ECalloutNavigationDirection : uint8_t
{
	ECalloutNavigationDirection__Previous                                            = 0,
	ECalloutNavigationDirection__Next                                                = 1,
	ECalloutNavigationDirection__ECalloutNavigationDirection_MAX                     = 2
};

/// Enum /Script/SaveTheWorldUI.EFortUISurvivorSquadMatchType
/// Size: 0x05
enum EFortUISurvivorSquadMatchType : uint8_t
{
	EFortUISurvivorSquadMatchType__Multi                                             = 0,
	EFortUISurvivorSquadMatchType__Single                                            = 1,
	EFortUISurvivorSquadMatchType__Summary                                           = 2,
	EFortUISurvivorSquadMatchType__Max_None                                          = 3,
	EFortUISurvivorSquadMatchType__EFortUISurvivorSquadMatchType_MAX                 = 4
};

/// Enum /Script/SaveTheWorldUI.EUpgradeInfoImageSize
/// Size: 0x03
enum EUpgradeInfoImageSize : uint8_t
{
	EUpgradeInfoImageSize__Small                                                     = 0,
	EUpgradeInfoImageSize__Large                                                     = 1,
	EUpgradeInfoImageSize__EUpgradeInfoImageSize_MAX                                 = 2
};

