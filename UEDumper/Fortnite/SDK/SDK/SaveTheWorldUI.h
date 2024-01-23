
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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

/// Enum /Script/SaveTheWorldUI.EViewerNavigationDirection
/// Size: 0x03
enum class EViewerNavigationDirection : uint8_t
{
	EViewerNavigationDirection__Previous                                             = 0,
	EViewerNavigationDirection__Next                                                 = 1,
	EViewerNavigationDirection__EViewerNavigationDirection_MAX                       = 2
};

/// Enum /Script/SaveTheWorldUI.EFortCollectionBookPopupButtonType
/// Size: 0x07
enum class EFortCollectionBookPopupButtonType : uint8_t
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
enum class ECollectionBookSectionNavTarget : uint8_t
{
	ECollectionBookSectionNavTarget__SlotSelect                                      = 0,
	ECollectionBookSectionNavTarget__SlotPicker                                      = 1,
	ECollectionBookSectionNavTarget__ECollectionBookSectionNavTarget_MAX             = 2
};

/// Enum /Script/SaveTheWorldUI.EHeroLoadoutSlotType
/// Size: 0x05
enum class EHeroLoadoutSlotType : uint8_t
{
	EHeroLoadoutSlotType__CommanderSlot                                              = 0,
	EHeroLoadoutSlotType__TeamPerkSlot                                               = 1,
	EHeroLoadoutSlotType__CrewSlot                                                   = 2,
	EHeroLoadoutSlotType__GadgetSlot                                                 = 3,
	EHeroLoadoutSlotType__EHeroLoadoutSlotType_MAX                                   = 4
};

/// Enum /Script/SaveTheWorldUI.ESquadSlotSortType
/// Size: 0x06
enum class ESquadSlotSortType : uint8_t
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
enum class EFrontEndRewardType : uint8_t
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
enum class ECollectionBookRewardStatus : uint8_t
{
	ECollectionBookRewardStatus__Unknown                                             = 0,
	ECollectionBookRewardStatus__Available                                           = 1,
	ECollectionBookRewardStatus__Claimed                                             = 2,
	ECollectionBookRewardStatus__ECollectionBookRewardStatus_MAX                     = 3
};

/// Enum /Script/SaveTheWorldUI.ECollectionBookPrimaryNavTarget
/// Size: 0x03
enum class ECollectionBookPrimaryNavTarget : uint8_t
{
	ECollectionBookPrimaryNavTarget__Overview                                        = 0,
	ECollectionBookPrimaryNavTarget__SectionTileView                                 = 1,
	ECollectionBookPrimaryNavTarget__ECollectionBookPrimaryNavTarget_MAX             = 2
};

/// Enum /Script/SaveTheWorldUI.EFortExpeditionListSort
/// Size: 0x04
enum class EFortExpeditionListSort : uint8_t
{
	EFortExpeditionListSort__ByRating                                                = 0,
	EFortExpeditionListSort__ByDuration                                              = 1,
	EFortExpeditionListSort__ByName                                                  = 2,
	EFortExpeditionListSort__EFortExpeditionListSort_MAX                             = 3
};

/// Enum /Script/SaveTheWorldUI.EFortRewardItemTypeSTW
/// Size: 0x05
enum class EFortRewardItemTypeSTW : uint8_t
{
	EFortRewardItemTypeSTW__RewardedBadges                                           = 0,
	EFortRewardItemTypeSTW__MissedBadges                                             = 1,
	EFortRewardItemTypeSTW__RewardedItems                                            = 2,
	EFortRewardItemTypeSTW__RewardedAccountItems                                     = 3,
	EFortRewardItemTypeSTW__EFortRewardItemTypeSTW_MAX                               = 4
};

/// Enum /Script/SaveTheWorldUI.EFortHeroPerkDisplayType
/// Size: 0x06
enum class EFortHeroPerkDisplayType : uint8_t
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
enum class EFortAlterationOptionType : uint8_t
{
	EFortAlterationOptionType__Upgrade                                               = 0,
	EFortAlterationOptionType__Replacement                                           = 1,
	EFortAlterationOptionType__Max_NONE                                              = 2,
	EFortAlterationOptionType__EFortAlterationOptionType_MAX                         = 3
};

/// Enum /Script/SaveTheWorldUI.EFortMissionActivationWidgetSTWState
/// Size: 0x05
enum class EFortMissionActivationWidgetSTWState : uint8_t
{
	EFortMissionActivationWidgetSTWState__Default                                    = 0,
	EFortMissionActivationWidgetSTWState__StartObjective                             = 1,
	EFortMissionActivationWidgetSTWState__IncreaseDifficulty                         = 2,
	EFortMissionActivationWidgetSTWState__Invalid                                    = 3,
	EFortMissionActivationWidgetSTWState__EFortMissionActivationWidgetSTWState_MAX   = 4
};

/// Enum /Script/SaveTheWorldUI.ECalloutNavigationDirection
/// Size: 0x03
enum class ECalloutNavigationDirection : uint8_t
{
	ECalloutNavigationDirection__Previous                                            = 0,
	ECalloutNavigationDirection__Next                                                = 1,
	ECalloutNavigationDirection__ECalloutNavigationDirection_MAX                     = 2
};

/// Enum /Script/SaveTheWorldUI.EFortUISurvivorSquadMatchType
/// Size: 0x05
enum class EFortUISurvivorSquadMatchType : uint8_t
{
	EFortUISurvivorSquadMatchType__Multi                                             = 0,
	EFortUISurvivorSquadMatchType__Single                                            = 1,
	EFortUISurvivorSquadMatchType__Summary                                           = 2,
	EFortUISurvivorSquadMatchType__Max_None                                          = 3,
	EFortUISurvivorSquadMatchType__EFortUISurvivorSquadMatchType_MAX                 = 4
};

/// Enum /Script/SaveTheWorldUI.EUpgradeInfoImageSize
/// Size: 0x03
enum class EUpgradeInfoImageSize : uint8_t
{
	EUpgradeInfoImageSize__Small                                                     = 0,
	EUpgradeInfoImageSize__Large                                                     = 1,
	EUpgradeInfoImageSize__EUpgradeInfoImageSize_MAX                                 = 2
};

/// Class /Script/SaveTheWorldUI.FortQuestMapViewer
/// Size: 0x0080 (0x0002E8 - 0x000368)
class UFortQuestMapViewer : public UCommonUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x02E8   (0x0010)  MISSED
	class UCommonButtonBase*                           Button_PageRight;                                           // 0x02F8   (0x0008)  
	class UCommonButtonBase*                           Button_PageLeft;                                            // 0x0300   (0x0008)  
	class UCommonTextBlock*                            Text_Title;                                                 // 0x0308   (0x0008)  
	class UCommonTextBlock*                            Text_Page;                                                  // 0x0310   (0x0008)  
	class USizeBox*                                    SizeBox_Viewer;                                             // 0x0318   (0x0008)  
	class UCanvasPanel*                                CanvasPanel_Cosmetic;                                       // 0x0320   (0x0008)  
	class UFortQuestMapScreen*                         ParentScreen;                                               // 0x0328   (0x0008)  
	class UFortQuestMapNodeLayout*                     NodeLayout;                                                 // 0x0330   (0x0008)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x0338   (0x0030)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapViewer.UpdateViewerData
	// void UpdateViewerData();                                                                                              // [0xbe38df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapViewer.OnTryUpdateUserWidgetColor
	// void OnTryUpdateUserWidgetColor(class UUserWidget* Widget, FSlateColor OverrideColor);                                // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapViewer.OnPlayLayoutOutroAnimation
	// void OnPlayLayoutOutroAnimation(EViewerNavigationDirection TravelDirection);                                          // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapViewer.OnPlayLayoutFadeInAnimation
	// void OnPlayLayoutFadeInAnimation();                                                                                   // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapViewer.HandleLayoutOutroAnimationFinished
	// void HandleLayoutOutroAnimationFinished();                                                                            // [0xbe33bcc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortArmoryScreen
/// Size: 0x0000 (0x000400 - 0x000400)
class UFortArmoryScreen : public UCommonActivatableWidget
{ 
public:


	/// Functions
	// Function /Script/SaveTheWorldUI.FortArmoryScreen.PushItemManagementScreen
	// void PushItemManagementScreen(EFortFrontendInventoryFilter ItemManagementFilter, class UFortItem* ItemToSelect, bool bShowAutoMulch); // [0xbe37234] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortArmoryScreen.PushItemInspectionScreen
	// void PushItemInspectionScreen(class UFortItem* ItemToInspect, EFortItemInspectionMode Mode, class UFortItemTileView* CycleTileView, bool bReadOnly, bool bAllowFavoriting, bool bIsTemporaryItem, bool bAllowRarityUpgrading); // [0xbe3700c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortArmoryScreen.PushHeroLoadoutScreen
	// void PushHeroLoadoutScreen(class UFortCampaignHeroLoadoutItem* HeroLoadout);                                          // [0xbe36ec4] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortArmoryScreen_Legacy
/// Size: 0x0000 (0x000570 - 0x000570)
class UFortArmoryScreen_Legacy : public UFortActivatablePanel
{ 
public:
};

/// Class /Script/SaveTheWorldUI.FortCommandScreen
/// Size: 0x0028 (0x000400 - 0x000428)
class UFortCommandScreen : public UCommonActivatableWidget
{ 
public:
	FDataTableRowHandle                                ShowAllStatsActionData;                                     // 0x0400   (0x0010)  
	FDataTableRowHandle                                InspectHeroActionData;                                      // 0x0410   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0420   (0x0008)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCommandScreen.PushItemInspectionScreen
	// void PushItemInspectionScreen(class UFortItem* ItemToInspect, EFortItemInspectionMode Mode, class UFortItemTileView* CycleTileView, bool bReadOnly, bool bAllowFavoriting, bool bIsTemporaryItem, bool bAllowRarityUpgrading); // [0xbe3700c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCommandScreen.PushHeroLoadoutScreen
	// void PushHeroLoadoutScreen(class UFortCampaignHeroLoadoutItem* HeroLoadout);                                          // [0xbe36ec4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCommandScreen.HandleUpgradeInspectHero
	// void HandleUpgradeInspectHero();                                                                                      // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCommandScreen.HandleShowAllStats
	// void HandleShowAllStats();                                                                                            // [0x2177018] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget
/// Size: 0x0018 (0x0002E8 - 0x000300)
class UFortCollectionBookGenericRewardWidget : public UCommonUserWidget
{ 
public:
	bool                                               bUpdateVisibilityBasedOnRewardExistence : 1;                // 0x02E8:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x02E9   (0x0003)  MISSED
	ESlateVisibility                                   VisibilityWhenNoRewardSpecified;                            // 0x02EC   (0x0001)  
	ESlateVisibility                                   VisibilityWhenRewardSpecified;                              // 0x02ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x02EE   (0x0002)  MISSED
	class UFortCollectionBookRewardCardWidget*         RewardCardWidget;                                           // 0x02F0   (0x0008)  
	ECollectionBookRewardStatus                        RewardStatus;                                               // 0x02F8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x02F9   (0x0007)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget.SetRewardStatus
	// void SetRewardStatus(ECollectionBookRewardStatus Status);                                                             // [0x7065144] Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget.SetRewards
	// void SetRewards(FFortRewardInfo& Rewards);                                                                            // [0xbe388e4] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget.SetCurrentItemToDisplay
	// void SetCurrentItemToDisplay(class UFortItem* ItemToDisplay);                                                         // [0xbe37e04] Native|Protected     
	// Function /Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget.OnRewardStatusChanged
	// void OnRewardStatusChanged(ECollectionBookRewardStatus NewStatus);                                                    // [0xbe361d0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget.HasRewards
	// bool HasRewards();                                                                                                    // [0x9f6db48] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget.GetRewardStatus
	// ECollectionBookRewardStatus GetRewardStatus();                                                                        // [0xa885e70] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget.ClearRewards
	// void ClearRewards();                                                                                                  // [0x9982828] Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookHelpWidget
/// Size: 0x0000 (0x000570 - 0x000570)
class UFortCollectionBookHelpWidget : public UFortActivatablePanel
{ 
public:
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookItemPopupMenu
/// Size: 0x0008 (0x000558 - 0x000560)
class UFortCollectionBookItemPopupMenu : public UFortPopupMenu_Legacy
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0558   (0x0008)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookItemPopupMenu.HandleItemUpdated
	// void HandleItemUpdated();                                                                                             // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookItemPopupMenu.HandleItemChanged
	// void HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);                               // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookItemPopupMenu.GetHostButton
	// class UFortCollectionBookSlotButton* GetHostButton();                                                                 // [0xbe32c9c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortCollectionBookItemPopupMenu.CanItemBeUnslotted
	// bool CanItemBeUnslotted();                                                                                            // [0xbe32614] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookItemPopupMenu.CanItemBePurchased
	// bool CanItemBePurchased();                                                                                            // [0xbe325c0] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookOverviewWidget
/// Size: 0x0048 (0x0002E8 - 0x000330)
class UFortCollectionBookOverviewWidget : public UCommonUserWidget
{ 
public:
	SDK_UNDEFINED(16,14975) /* FMulticastInlineDelegate */ __um(OnCollectionBookPageSelected);                     // 0x02E8   (0x0010)  
	SDK_UNDEFINED(16,14976) /* FMulticastInlineDelegate */ __um(OnCollectionBookPageClicked);                      // 0x02F8   (0x0010)  
	class UFortCollectionBookPage*                     LastSelectedPage;                                           // 0x0308   (0x0008)  
	class UFortCollectionBookCategory*                 LastSelectedCategory;                                       // 0x0310   (0x0008)  
	TArray<class UFortCollectionBookCategory*>         CategoryObjectPool;                                         // 0x0318   (0x0010)  
	class UCommonTreeView*                             PageTreeViewWidget;                                         // 0x0328   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookOverviewWidget.OnDeactivated
	// void OnDeactivated();                                                                                                 // [0x1555df0] Native|Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookOverviewWidget.OnActivated
	// void OnActivated();                                                                                                   // [0x1486378] Native|Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookOverviewWidget.HandlePagesChanged
	// void HandlePagesChanged(class UFortCollectionBookManager* CBManager);                                                 // [0xbe33d18] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookPageCompletionRewardWidget
/// Size: 0x0000 (0x000300 - 0x000300)
class UFortCollectionBookPageCompletionRewardWidget : public UFortCollectionBookGenericRewardWidget
{ 
public:
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookPageDetailsWidget
/// Size: 0x0068 (0x0002E8 - 0x000350)
class UFortCollectionBookPageDetailsWidget : public UCommonUserWidget
{ 
public:
	class UCommonTextBlock*                            PageCompletionText;                                         // 0x02E8   (0x0008)  
	class UFortMaterialProgressBar*                    ProgressBar;                                                // 0x02F0   (0x0008)  
	class UFortCollectionBookPageCompletionRewardWidget* PageRewardWidget;                                         // 0x02F8   (0x0008)  
	class UCommonButtonLegacy*                         RewardDetailsButton;                                        // 0x0300   (0x0008)  
	class UFortCollectionBookPage*                     DetailsPage;                                                // 0x0308   (0x0008)  
	SDK_UNDEFINED(32,14977) /* TWeakObjectPtr<UClass*> */ __um(RewardDetailsModalWidgetClass);                     // 0x0310   (0x0020)  
	SDK_UNDEFINED(24,14978) /* FText */                __um(ModalTitle);                                           // 0x0330   (0x0018)  
	class UFortCollectionBookRewardModalWidget*        RewardDetailsModalWidget;                                   // 0x0348   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookPageDetailsWidget.OnUnslotItemComplete
	// void OnUnslotItemComplete(class UFortAccountItem* SlottedItem, class UFortAccountItem* OldItem, FName SlotId);        // [0xbe36c3c] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPageDetailsWidget.OnSlotItemComplete
	// void OnSlotItemComplete(class UFortAccountItem* SlottedItem, FName SlotId);                                           // [0xbe368a8] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPageDetailsWidget.OnPageProgressionUpdated
	// void OnPageProgressionUpdated(int32_t TotalFilledSlots, int32_t TotalSlots, EFortCollectionBookState State);          // [0xbe358d8] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPageDetailsWidget.OnDetailsPageChanged
	// void OnDetailsPageChanged(class UFortCollectionBookPage* InNewDetailsPage);                                           // [0x9039b80] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPageDetailsWidget.HandleRewardDetailsModalWidgetDeactivated
	// void HandleRewardDetailsModalWidgetDeactivated(class UCommonActivatablePanelLegacy* DeactivatedPanel);                // [0xbe3466c] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookPageListWidget
/// Size: 0x0030 (0x0014E0 - 0x001510)
class UFortCollectionBookPageListWidget : public UCommonButtonLegacy
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x14E0   (0x0008)  MISSED
	class UCommonTextBlock*                            PageNameWidget;                                             // 0x14E8   (0x0008)  
	class UCommonNumericTextBlock*                     AvailableSlotsWidget;                                       // 0x14F0   (0x0008)  
	class UCommonTextBlock*                            PageCompletionWidget;                                       // 0x14F8   (0x0008)  
	SDK_UNDEFINED(8,14979) /* TWeakObjectPtr<UObject*> */ __um(AssociatedPageOrCategory);                          // 0x1500   (0x0008)  
	bool                                               bIsExpanded;                                                // 0x1508   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x1509   (0x0007)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookPageListWidget.SetupAsPage
	// void SetupAsPage(class UFortCollectionBookPage* Page);                                                                // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPageListWidget.SetupAsCategory
	// void SetupAsCategory(class UFortCollectionBookCategory* Category);                                                    // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPageListWidget.OnSlottedItemOperationComplete
	// void OnSlottedItemOperationComplete(class UFortAccountItem* SlottedItem, FName SlotId);                               // [0xbe36960] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPageListWidget.OnPageDetailsUpdated
	// void OnPageDetailsUpdated(int32_t AvailableSlots, int32_t FilledSlots, int32_t TotalSlots, EFortCollectionBookState State); // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPageListWidget.OnCategoryDetailsUpdated
	// void OnCategoryDetailsUpdated(int32_t AvailableSlots, int32_t FilledSlots, int32_t TotalSlots);                       // [0x2177018] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookPicker
/// Size: 0x0028 (0x000420 - 0x000448)
class UFortCollectionBookPicker : public UFortItemPickerBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0420   (0x0008)  MISSED
	class UClass*                                      MulchConfirmationModalClass;                                // 0x0428   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0430   (0x0008)  MISSED
	class UFortAccountItem*                            CurrentSlottedItem;                                         // 0x0438   (0x0008)  
	class UFortMulchConfirmationModalWidget*           MulchConfirmationModal;                                     // 0x0440   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookPicker.ShowMulchDialogForItem
	// void ShowMulchDialogForItem(class UFortItem* ItemToMulch);                                                            // [0xbe38c14] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPicker.ShowMulchConfirmationModal
	// void ShowMulchConfirmationModal();                                                                                    // [0xbe38bf8] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPicker.OnCollectComplete
	// void OnCollectComplete();                                                                                             // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPicker.NotifyPanelDeactivated
	// void NotifyPanelDeactivated();                                                                                        // [0xbe34eec] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPicker.NotifyPanelActivated
	// void NotifyPanelActivated();                                                                                          // [0xbe34ed0] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPicker.HideMulchConfirmationModal
	// void HideMulchConfirmationModal();                                                                                    // [0xbe34c70] Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel
/// Size: 0x00C8 (0x000400 - 0x0004C8)
class UFortCollectionBookPrimaryPanel : public UCommonActivatableWidget
{ 
public:
	SDK_UNDEFINED(16,14980) /* FMulticastInlineDelegate */ __um(OnCollectionBookPageSelectedDelegate);             // 0x0400   (0x0010)  
	SDK_UNDEFINED(16,14981) /* FMulticastInlineDelegate */ __um(OnCollectionBookPageClickedDelegate);              // 0x0410   (0x0010)  
	SDK_UNDEFINED(16,14982) /* FMulticastInlineDelegate */ __um(OnCollectionBookSectionClickedDelegate);           // 0x0420   (0x0010)  
	FDataTableRowHandle                                BackActionRowHandle;                                        // 0x0430   (0x0010)  
	FDataTableRowHandle                                SummonInfoPanelActionRowHandle;                             // 0x0440   (0x0010)  
	class UFortCollectionBookOverviewWidget*           OverviewWidget;                                             // 0x0450   (0x0008)  
	class UCommonTileView*                             SectionTileViewWidget;                                      // 0x0458   (0x0008)  
	ECollectionBookPrimaryNavTarget                    CurrentNavTarget;                                           // 0x0460   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0461   (0x0007)  MISSED
	class UFortCollectionBookSection*                  LastClickedSection;                                         // 0x0468   (0x0008)  
	unsigned char                                      UnknownData01_6[0x58];                                      // 0x0470   (0x0058)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnSummonInfoPanelExecuted
	// void OnSummonInfoPanelExecuted(bool& bPassThrough);                                                                   // [0x7062500] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType CurrentInputType);                                                         // [0xbe3536c] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnCollectionBookSectionClicked
	// void OnCollectionBookSectionClicked(class UFortCollectionBookSection* ClickedSection);                                // [0x8fc5428] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnCollectionBookPageSelected
	// void OnCollectionBookPageSelected(class UFortCollectionBookPage* SelectedPage);                                       // [0x9f6e7f4] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnCollectionBookPageClicked
	// void OnCollectionBookPageClicked(class UFortCollectionBookPage* ClickedPage);                                         // [0xbe350b8] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnBackActionExecuted
	// void OnBackActionExecuted();                                                                                          // [0xbe34f08] Final|Native|Public  
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy
/// Size: 0x00C0 (0x000538 - 0x0005F8)
class UFortCollectionBookPrimaryPanel_Legacy : public UCommonActivatablePanelLegacy
{ 
public:
	SDK_UNDEFINED(16,14983) /* FMulticastInlineDelegate */ __um(OnCollectionBookPageSelectedDelegate);             // 0x0538   (0x0010)  
	SDK_UNDEFINED(16,14984) /* FMulticastInlineDelegate */ __um(OnCollectionBookPageClickedDelegate);              // 0x0548   (0x0010)  
	SDK_UNDEFINED(16,14985) /* FMulticastInlineDelegate */ __um(OnCollectionBookSectionClickedDelegate);           // 0x0558   (0x0010)  
	FDataTableRowHandle                                BackActionRowHandle;                                        // 0x0568   (0x0010)  
	FDataTableRowHandle                                SummonInfoPanelActionRowHandle;                             // 0x0578   (0x0010)  
	class UFortCollectionBookOverviewWidget*           OverviewWidget;                                             // 0x0588   (0x0008)  
	class UCommonTileView*                             SectionTileViewWidget;                                      // 0x0590   (0x0008)  
	ECollectionBookPrimaryNavTarget                    CurrentNavTarget;                                           // 0x0598   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0599   (0x0007)  MISSED
	class UFortCollectionBookSection*                  LastClickedSection;                                         // 0x05A0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x05A8   (0x0050)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy.OnSummonInfoPanelExecuted
	// void OnSummonInfoPanelExecuted(bool& bPassThrough);                                                                   // [0xa1ed79c] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType CurrentInputType);                                                         // [0xbe353f0] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy.OnCollectionBookSectionClicked
	// void OnCollectionBookSectionClicked(class UFortCollectionBookSection* ClickedSection);                                // [0xbe351c0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy.OnCollectionBookPageSelected
	// void OnCollectionBookPageSelected(class UFortCollectionBookPage* SelectedPage);                                       // [0xbe35244] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy.OnCollectionBookPageClicked
	// void OnCollectionBookPageClicked(class UFortCollectionBookPage* ClickedPage);                                         // [0xbe3513c] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy.OnBackActionExecuted
	// void OnBackActionExecuted(bool& bPassThrough);                                                                        // [0xbe34f1c] Final|Native|Public|HasOutParms 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardDetailInspectWidget
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UFortCollectionBookProgressionRewardDetailInspectWidget : public UCommonUserWidget
{ 
public:
	class UCommonNumericTextBlock*                     LevelTextWidget;                                            // 0x02E8   (0x0008)  
	class UFortRewardInfoWidget_Legacy*                RewardWidget;                                               // 0x02F0   (0x0008)  
	class UWidget*                                     CheckmarkImage;                                             // 0x02F8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0300   (0x0008)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardDetailInspectWidget.SetAssociatedLevel
	// void SetAssociatedLevel(int32_t Level);                                                                               // [0xbe37c84] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardDetailInspectWidget.OnXPRequiredChanged
	// void OnXPRequiredChanged(int32_t NewXPRequired);                                                                      // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardDetailInspectWidget.GetXPRequired
	// int32_t GetXPRequired();                                                                                              // [0xa260600] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardsModalWidget
/// Size: 0x0060 (0x000570 - 0x0005D0)
class UFortCollectionBookProgressionRewardsModalWidget : public UFortActivatablePanel
{ 
public:
	SDK_UNDEFINED(32,14986) /* TWeakObjectPtr<UClass*> */ __um(RewardWidgetClass);                                 // 0x0570   (0x0020)  
	FMargin                                            RewardWidgetPadding;                                        // 0x0590   (0x0010)  
	int32_t                                            NumRewardsToShow;                                           // 0x05A0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x05A4   (0x0004)  MISSED
	class UVerticalBox*                                RewardBoxWidget;                                            // 0x05A8   (0x0008)  
	class UVerticalBox*                                MajorRewardBoxWidget;                                       // 0x05B0   (0x0008)  
	class UCommonTextBlock*                            XPTextWidget;                                               // 0x05B8   (0x0008)  
	class UCommonNumericTextBlock*                     LevelTextWidget;                                            // 0x05C0   (0x0008)  
	class UCommonButtonGroupLegacy*                    ButtonGroup;                                                // 0x05C8   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardsModalWidget.OnSelectedButtonChanged
	// void OnSelectedButtonChanged(class UCommonButtonLegacy* SelectedButton, int32_t ButtonIndex);                         // [0xbe36350] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardsModalWidget.OnLevelProgressionSet
	// void OnLevelProgressionSet(int32_t CurrentLevel, float NextLvlPct, int32_t MaxAchievedLevel);                         // [0xbe356e8] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardsModalWidget.InspectItemBP
	// void InspectItemBP(class UFortItem* Item);                                                                            // [0x2177018] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardsPreviewWidget
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortCollectionBookProgressionRewardsPreviewWidget : public UCommonUserWidget
{ 
public:
	class UFortCollectionBookProgressionRewardWidget*  NextRewardWidget;                                           // 0x02E8   (0x0008)  
	class UFortCollectionBookProgressionRewardWidget*  NextMajorRewardWidget;                                      // 0x02F0   (0x0008)  
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardWidget
/// Size: 0x0010 (0x000300 - 0x000310)
class UFortCollectionBookProgressionRewardWidget : public UFortCollectionBookGenericRewardWidget
{ 
public:
	class UCommonNumericTextBlock*                     LevelTextWidget;                                            // 0x0300   (0x0008)  
	class UCommonTextBlock*                            DisplayNameWidget;                                          // 0x0308   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardWidget.SetAssociatedLevel
	// void SetAssociatedLevel(int32_t Level);                                                                               // [0xbe37d04] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookProgressWidget
/// Size: 0x0058 (0x0002E8 - 0x000340)
class UFortCollectionBookProgressWidget : public UCommonUserWidget
{ 
public:
	int32_t                                            CachedXPLevel;                                              // 0x02E8   (0x0004)  
	float                                              CachedXPCompletionPct;                                      // 0x02EC   (0x0004)  
	SDK_UNDEFINED(32,14987) /* TWeakObjectPtr<UClass*> */ __um(RewardDetailsModalWidgetClass);                     // 0x02F0   (0x0020)  
	class UFortCollectionBookProgressionRewardsPreviewWidget* ProgressionRewardsPreviewWidget;                     // 0x0310   (0x0008)  
	class UCommonTextBlock*                            XPTextWidget;                                               // 0x0318   (0x0008)  
	class UCommonNumericTextBlock*                     LevelTextWidget;                                            // 0x0320   (0x0008)  
	class UCommonButtonLegacy*                         DetailsButtonWidget;                                        // 0x0328   (0x0008)  
	class UFortCollectionBookPageDetailsWidget*        PageDetailsWidget;                                          // 0x0330   (0x0008)  
	class UFortCollectionBookProgressionRewardsModalWidget* DetailsModalWidget;                                    // 0x0338   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.OnSlottedItemOperationComplete
	// void OnSlottedItemOperationComplete(class UFortAccountItem* ItemSlotted, FName SlotId);                               // [0xbe36a24] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.OnInventoryUpdated
	// void OnInventoryUpdated();                                                                                            // [0xbe354fc] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.OnCollectionBookPreviewXPChange
	// void OnCollectionBookPreviewXPChange(float PreviewCompletionPct);                                                     // [0xb4372d4] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.OnCollectionBookPageSelected
	// void OnCollectionBookPageSelected(class UFortCollectionBookPage* SelectedPage);                                       // [0x73b87f8] Native|Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.OnCollectionBookLevelProgressionChanged
	// void OnCollectionBookLevelProgressionChanged(float NewCompletionPct);                                                 // [0xbe35034] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.OnCollectionBookLevelChanged
	// void OnCollectionBookLevelChanged(int32_t NewLevel);                                                                  // [0x8b7e9c8] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.HandleDetailsModalWidgetDeactivated
	// void HandleDetailsModalWidgetDeactivated(class UCommonActivatablePanelLegacy* DeactivatedPanel);                      // [0xbe33a34] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookRecycleSlotResultsWidget
/// Size: 0x0018 (0x0002E8 - 0x000300)
class UFortCollectionBookRecycleSlotResultsWidget : public UCommonUserWidget
{ 
public:
	class UPanelWidget*                                RecycleResultsWidget;                                       // 0x02E8   (0x0008)  
	EFortItemCardSize                                  ItemCardSize;                                               // 0x02F0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02F1   (0x0007)  MISSED
	class UFortAccountItem*                            ItemToRecycle;                                              // 0x02F8   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookRecycleSlotResultsWidget.SetCurrentItemToRecycle
	// void SetCurrentItemToRecycle(class UFortAccountItem* InItemToRecycle);                                                // [0xbe37e88] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookRewardCardWidget
/// Size: 0x0088 (0x0002E8 - 0x000370)
class UFortCollectionBookRewardCardWidget : public UCommonUserWidget
{ 
public:
	SDK_UNDEFINED(16,14988) /* FMulticastInlineDelegate */ __um(OnDisplayedItemChangedEvent);                      // 0x02E8   (0x0010)  
	class UFortMultiSizeItemCard*                      ItemCardWidget;                                             // 0x02F8   (0x0008)  
	class UWidget*                                     MultiItemRewardOverlay;                                     // 0x0300   (0x0008)  
	class UWidget*                                     ChoiceRewardOverlay;                                        // 0x0308   (0x0008)  
	class UWidget*                                     CheckmarkImage;                                             // 0x0310   (0x0008)  
	float                                              UpdateCardInterval;                                         // 0x0318   (0x0004)  
	EFortItemCardSize                                  ItemCardSize;                                               // 0x031C   (0x0001)  
	bool                                               bDisplayAsRewardCard;                                       // 0x031D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x031E   (0x0002)  MISSED
	FFortRewardInfo                                    RepresentedRewards;                                         // 0x0320   (0x0030)  
	TArray<class UFortItem*>                           DummyItems;                                                 // 0x0350   (0x0010)  
	FTimerHandle                                       UpdateCardTimer;                                            // 0x0360   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0368   (0x0008)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookRewardCardWidget.SetRewards
	// void SetRewards(FFortRewardInfo& Rewards);                                                                            // [0xbe389dc] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookRewardCardWidget.OnDisplayedItemChangedEvent__DelegateSignature
	// void OnDisplayedItemChangedEvent__DelegateSignature(class UFortItem* DisplayedItem);                                  // [0x2177018] MulticastDelegate|Public|Delegate 
	// Function /Script/SaveTheWorldUI.FortCollectionBookRewardCardWidget.HasRewards
	// bool HasRewards();                                                                                                    // [0x81b8740] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortCollectionBookRewardCardWidget.ClearRewards
	// void ClearRewards();                                                                                                  // [0x1486378] Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookRewardModalWidget
/// Size: 0x0050 (0x000538 - 0x000588)
class UFortCollectionBookRewardModalWidget : public UCommonActivatablePanelLegacy
{ 
public:
	class UCommonTextBlock*                            TitleWidget;                                                // 0x0538   (0x0008)  
	class UFortRewardInfoWidget_Legacy*                RewardWidget;                                               // 0x0540   (0x0008)  
	class UFortMaterialProgressBar*                    ProgressBar;                                                // 0x0548   (0x0008)  
	class UCommonTextBlock*                            ProgressTextWidget;                                         // 0x0550   (0x0008)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0558   (0x0030)  MISSED
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookSectionCompletionRewardWidget
/// Size: 0x0050 (0x000300 - 0x000350)
class UFortCollectionBookSectionCompletionRewardWidget : public UFortCollectionBookGenericRewardWidget
{ 
public:
	class UCommonButtonLegacy*                         RewardDetailsButton;                                        // 0x0300   (0x0008)  
	SDK_UNDEFINED(32,14989) /* TWeakObjectPtr<UClass*> */ __um(RewardDetailsModalWidgetClass);                     // 0x0308   (0x0020)  
	SDK_UNDEFINED(24,14990) /* FText */                __um(ModalTitle);                                           // 0x0328   (0x0018)  
	class UFortCollectionBookRewardModalWidget*        RewardDetailsModalWidget;                                   // 0x0340   (0x0008)  
	class UFortCollectionBookSection*                  Section;                                                    // 0x0348   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionCompletionRewardWidget.HandleRewardDetailsModalWidgetDeactivated
	// void HandleRewardDetailsModalWidgetDeactivated(class UCommonActivatablePanelLegacy* DeactivatedPanel);                // [0xbe346ec] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookSectionPanel
/// Size: 0x01D0 (0x000538 - 0x000708)
class UFortCollectionBookSectionPanel : public UCommonActivatablePanelLegacy
{ 
public:
	SDK_UNDEFINED(16,14991) /* FMulticastInlineDelegate */ __um(OnSectionCloseRequest);                            // 0x0538   (0x0010)  
	SDK_UNDEFINED(16,14992) /* FMulticastInlineDelegate */ __um(OnPreviewXPChangeEvent);                           // 0x0548   (0x0010)  
	class UCommonTextBlock*                            SectionNameTextWidget;                                      // 0x0558   (0x0008)  
	class UFortCollectionBookSlotView*                 SlotViewWidget;                                             // 0x0560   (0x0008)  
	class UFortCollectionBookPicker*                   SlotItemPicker;                                             // 0x0568   (0x0008)  
	class UWidget*                                     ContextOverlayWidget;                                       // 0x0570   (0x0008)  
	class UTextBlock*                                  ContextTextWidget;                                          // 0x0578   (0x0008)  
	class UFortCollectionBookSectionCompletionRewardWidget* SectionRewardWidget;                                   // 0x0580   (0x0008)  
	class UWidget*                                     ItemAcquisitionSourceContainerWidget;                       // 0x0588   (0x0008)  
	class UCommonTextBlock*                            ItemAcquisitionSourceDescWidget;                            // 0x0590   (0x0008)  
	class UCommonTextBlock*                            ItemAcquisitionSourceDesc2Widget;                           // 0x0598   (0x0008)  
	class UWidget*                                     ResearchRecruitUnslotContainerWidget;                       // 0x05A0   (0x0008)  
	class UCommonTextBlock*                            PersonRecruitUnavailableMessageWidget;                      // 0x05A8   (0x0008)  
	class UCommonTextBlock*                            ItemResearchUnavailableMessageWidget;                       // 0x05B0   (0x0008)  
	class UCommonTextBlock*                            UnslotUnavailableMessageWidget;                             // 0x05B8   (0x0008)  
	FDataTableRowHandle                                BackActionRowHandle;                                        // 0x05C0   (0x0010)  
	FDataTableRowHandle                                CloseActionRowHandle;                                       // 0x05D0   (0x0010)  
	FDataTableRowHandle                                SlotItemActionRowHandle;                                    // 0x05E0   (0x0010)  
	FDataTableRowHandle                                InspectItemActionRowHandle;                                 // 0x05F0   (0x0010)  
	FDataTableRowHandle                                InspectCollectionBookItemActionRowHandle;                   // 0x0600   (0x0010)  
	FDataTableRowHandle                                InspectPreviewItemActionRowHandle;                          // 0x0610   (0x0010)  
	FDataTableRowHandle                                OpenPickerActionRowHandle;                                  // 0x0620   (0x0010)  
	FDataTableRowHandle                                LogAllowedItemsActionRowHandle;                             // 0x0630   (0x0010)  
	FDataTableRowHandle                                ResearchItemActionRowHandle;                                // 0x0640   (0x0010)  
	FDataTableRowHandle                                RecruitActionRowHandle;                                     // 0x0650   (0x0010)  
	FDataTableRowHandle                                UnslotItemActionRowHandle;                                  // 0x0660   (0x0010)  
	ECollectionBookSectionNavTarget                    CurrentNavTarget;                                           // 0x0670   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0671   (0x0007)  MISSED
	class UFortCollectionBookSection*                  AssociatedSection;                                          // 0x0678   (0x0008)  
	bool                                               bHasSummonedPanel;                                          // 0x0680   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0681   (0x0003)  MISSED
	FFortDialogExternalLatentActionHandle              SlotConfirmationDialogLatentHandle;                         // 0x0684   (0x0004)  
	SDK_UNDEFINED(16,14993) /* FMulticastInlineDelegate */ __um(OnShowItemDetailEvent);                            // 0x0688   (0x0010)  
	SDK_UNDEFINED(16,14994) /* FMulticastInlineDelegate */ __um(OnSlotItemConfirmEvent);                           // 0x0698   (0x0010)  
	SDK_UNDEFINED(16,14995) /* FMulticastInlineDelegate */ __um(OnResearchItemConfirmEvent);                       // 0x06A8   (0x0010)  
	SDK_UNDEFINED(16,14996) /* FMulticastInlineDelegate */ __um(OnUnslotItemConfirmEvent);                         // 0x06B8   (0x0010)  
	SDK_UNDEFINED(16,14997) /* FMulticastInlineDelegate */ __um(OnInspectItemEvent);                               // 0x06C8   (0x0010)  
	unsigned char                                      UnknownData02_5[0x28];                                      // 0x06D8   (0x0028)  MISSED
	class UClass*                                      SlotConfirmationModalClass;                                 // 0x0700   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnUnslotItemOperationComplete
	// void OnUnslotItemOperationComplete(class UFortAccountItem* UnslottedItem, class UFortAccountItem* OldSlottedItem, FName SlotId); // [0xbe36d34] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnUnslotItemComplete
	// void OnUnslotItemComplete(class UFortItem* UnslottedItem, FName SlotId);                                              // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnUnslotItemActionExecuted
	// void OnUnslotItemActionExecuted(bool& bPassThrough);                                                                  // [0xbe36bb4] Final|Native|Protected|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlottedItemOperationComplete
	// void OnSlottedItemOperationComplete(class UFortAccountItem* SlottedItem, FName SlotId);                               // [0xbe36adc] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlotItemActionExecuted
	// void OnSlotItemActionExecuted(bool& bPassThrough);                                                                    // [0xbe3681c] Final|Native|Protected|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlotButtonSelected
	// void OnSlotButtonSelected(class UFortCollectionBookSlotButton* SlotButton);                                           // [0xbe3679c] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlotButtonHovered
	// void OnSlotButtonHovered(int32_t ButtonIx);                                                                           // [0xbe36654] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlotButtonContextAction
	// void OnSlotButtonContextAction(EFortCollectionBookPopupButtonType ContextAction);                                     // [0xbe365d4] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnSectionChanged
	// void OnSectionChanged(class UFortCollectionBookSection* Section);                                                     // [0x9e119a0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnResearchItemOperationComplete
	// void OnResearchItemOperationComplete(class UFortAccountItem* NewItem, FString TemplateId);                            // [0xbe35adc] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnResearchItemAction__DelegateSignature
	// void OnResearchItemAction__DelegateSignature(class UFortItem* SelectedItem, FFortCollectionBookSlotData SlotData);    // [0x2177018] MulticastDelegate|Public|Delegate 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnPurchaseItemActionExecuted
	// void OnPurchaseItemActionExecuted(bool& bPassThrough);                                                                // [0xbe35a54] Final|Native|Protected|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnOpenPickerActionExecuted
	// void OnOpenPickerActionExecuted(bool& bPassThrough);                                                                  // [0xbe35858] Final|Native|Protected|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnLogAllowedItemsActionExecuted
	// void OnLogAllowedItemsActionExecuted(bool& bPassThrough);                                                             // [0xbe357e4] Final|Native|Protected|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnItemInspectAction__DelegateSignature
	// void OnItemInspectAction__DelegateSignature(class UFortItem* SelectedItem, bool EnableItemActions, bool IsPlaceholderItem); // [0x2177018] MulticastDelegate|Public|Delegate 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnItemAction__DelegateSignature
	// void OnItemAction__DelegateSignature(class UFortItem* SelectedItem);                                                  // [0x2177018] MulticastDelegate|Public|Delegate 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnInspectActionExecuted
	// void OnInspectActionExecuted(bool& bPassThrough);                                                                     // [0xbe35474] Final|Native|Protected|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnBackActionExecuted
	// void OnBackActionExecuted(bool& bPassThrough);                                                                        // [0xbe34fa8] Final|Native|Protected|HasOutParms 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookSectionTileWidget
/// Size: 0x0070 (0x0014E0 - 0x001550)
class UFortCollectionBookSectionTileWidget : public UCommonButtonLegacy
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x14E0   (0x0008)  MISSED
	SDK_UNDEFINED(32,14998) /* TWeakObjectPtr<UClass*> */ __um(SlotWidgetClass);                                   // 0x14E8   (0x0020)  
	FMargin                                            SlotWidgetPadding;                                          // 0x1508   (0x0010)  
	SDK_UNDEFINED(1,14999) /* TEnumAsByte<EHorizontalAlignment> */ __um(SlotWidgetHorizontalAlignment);            // 0x1518   (0x0001)  
	SDK_UNDEFINED(1,15000) /* TEnumAsByte<EVerticalAlignment> */ __um(SlotWidgetVerticalAlignment);                // 0x1519   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x151A   (0x0002)  MISSED
	int32_t                                            MaxNumSlotsSupported;                                       // 0x151C   (0x0004)  
	class UHorizontalBox*                              SlotBoxWidget;                                              // 0x1520   (0x0008)  
	class UCommonTextBlock*                            SectionNameWidget;                                          // 0x1528   (0x0008)  
	class UFortCollectionBookGenericRewardWidget*      SectionRewardWidget;                                        // 0x1530   (0x0008)  
	class UFortCollectionBookSection*                  AssociatedSection;                                          // 0x1538   (0x0008)  
	TArray<class UFortCollectionBookSlotWidget*>       SlotWidgets;                                                // 0x1540   (0x0010)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionTileWidget.OnSectionSlotUpdate
	// void OnSectionSlotUpdate(int32_t NumFilledSlots, int32_t NumSlots, EFortCollectionBookState SectionState);            // [0xbe36254] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionTileWidget.OnItemUnslotted
	// void OnItemUnslotted(class UFortAccountItem* ItemUnslotted, class UFortAccountItem* OldSlottedItem, FName SlotId);    // [0xbe355ec] Native|Protected     
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionTileWidget.OnItemSlotted
	// void OnItemSlotted(class UFortAccountItem* ItemSlotted, FName SlotId);                                                // [0xbe35524] Native|Protected     
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookSlotButton
/// Size: 0x0040 (0x0014E0 - 0x001520)
class UFortCollectionBookSlotButton : public UCommonButtonLegacy
{ 
public:
	class UFortCollectionBookSlotWidget*               CollectionBookSlotWidget;                                   // 0x14E0   (0x0008)  
	class UMenuAnchor*                                 PopupMenuAnchor;                                            // 0x14E8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x14F0   (0x0030)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotButton.PopupMenuClosedWithAction
	// void PopupMenuClosedWithAction(EFortCollectionBookPopupButtonType Selection);                                         // [0xbe36e2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotButton.OnSlottedItemUpdated
	// void OnSlottedItemUpdated();                                                                                          // [0xbe36ba0] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotButton.GetPopupMenu
	// class UUserWidget* GetPopupMenu();                                                                                    // [0xbe32ea8] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookSlotConfirmationModal
/// Size: 0x0058 (0x000570 - 0x0005C8)
class UFortCollectionBookSlotConfirmationModal : public UFortActivatablePanel
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0570   (0x0008)  MISSED
	class UFortAccountItem*                            CurrentlySlottedItem;                                       // 0x0578   (0x0008)  
	class UFortAccountItem*                            NewItemToSlot;                                              // 0x0580   (0x0008)  
	class UCommonTextBlock*                            Text_SlottingDescription;                                   // 0x0588   (0x0008)  
	class UFortMultiSizeItemCard*                      ItemCard_NewlySlottedItem;                                  // 0x0590   (0x0008)  
	class UFortCollectionBookRecycleSlotResultsWidget* RecycleSlotResultsWidget;                                   // 0x0598   (0x0008)  
	class UCommonButtonLegacy*                         Button_SlotItem;                                            // 0x05A0   (0x0008)  
	class UCommonButtonLegacy*                         Button_Back;                                                // 0x05A8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x05B0   (0x0018)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotConfirmationModal.OnSlotItemRequestedComplete
	// void OnSlotItemRequestedComplete();                                                                                   // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotConfirmationModal.OnSlotItemRequested
	// void OnSlotItemRequested();                                                                                           // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotConfirmationModal.HandleSlotItemComplete
	// void HandleSlotItemComplete(class UFortAccountItem* SlottedItem, FName SlotId);                                       // [0xbe3476c] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookSlotDetailsWidget
/// Size: 0x0000 (0x0002E8 - 0x0002E8)
class UFortCollectionBookSlotDetailsWidget : public UCommonUserWidget
{ 
public:
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookSlotView
/// Size: 0x00A0 (0x0002E8 - 0x000388)
class UFortCollectionBookSlotView : public UCommonUserWidget
{ 
public:
	SDK_UNDEFINED(32,15001) /* TWeakObjectPtr<UClass*> */ __um(CollectionBookButtonClass);                         // 0x02E8   (0x0020)  
	class UHorizontalBox*                              CollectionBookButtonBox;                                    // 0x0308   (0x0008)  
	class UCommonButtonGroupLegacy*                    CollectionBookSlotButtonGroup;                              // 0x0310   (0x0008)  
	TArray<class UFortCollectionBookSlotButton*>       CollectionBookSlotButtons;                                  // 0x0318   (0x0010)  
	class UFortCollectionBookSection*                  AssociatedSection;                                          // 0x0328   (0x0008)  
	unsigned char                                      UnknownData00_5[0x48];                                      // 0x0330   (0x0048)  MISSED
	int32_t                                            PreviousSelectedButtonIdx;                                  // 0x0378   (0x0004)  
	int32_t                                            CurrentSelectedButtonIdx;                                   // 0x037C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0380   (0x0008)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotView.OnSlotButtonHovered
	// void OnSlotButtonHovered(class UCommonButtonLegacy* HoveredButton, int32_t ButtonIdx);                                // [0xbe366d4] Native|Protected     
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotView.OnSlotButtonClicked
	// void OnSlotButtonClicked(class UCommonButtonLegacy* ClickedButton, int32_t ButtonIdx);                                // [0xbe3650c] Native|Protected     
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotView.OnSelectedSlotButtonChanged
	// void OnSelectedSlotButtonChanged(class UCommonButtonLegacy* SelectedButton, int32_t ButtonIdx);                       // [0xbe36444] Native|Protected     
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookSlotWidget
/// Size: 0x0128 (0x0002E8 - 0x000410)
class UFortCollectionBookSlotWidget : public UCommonUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x02E8   (0x0010)  MISSED
	EFortItemCardSize                                  ItemCardSize;                                               // 0x02F8   (0x0001)  
	bool                                               bIsRewardCard;                                              // 0x02F9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x02FA   (0x0006)  MISSED
	class UFortMultiSizeItemCard*                      ItemCardWidget;                                             // 0x0300   (0x0008)  
	class UWidget*                                     UnslottedOverlayWidget;                                     // 0x0308   (0x0008)  
	class UWidget*                                     ReadyToSlotOverlayWidget;                                   // 0x0310   (0x0008)  
	class UWidget*                                     UnslottedButReadyOverlayWidget;                             // 0x0318   (0x0008)  
	FName                                              SlotRowName;                                                // 0x0320   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0324   (0x0004)  MISSED
	SDK_UNDEFINED(24,15002) /* FText */                __um(ItemAvailableToSlotText);                              // 0x0328   (0x0018)  
	SDK_UNDEFINED(24,15003) /* FText */                __um(NoItemsAvailableToSlotText);                           // 0x0340   (0x0018)  
	SDK_UNDEFINED(24,15004) /* FText */                __um(HigherQualityItemsAvailableToSlotAndUpgradeAvailableText); // 0x0358   (0x0018)  
	SDK_UNDEFINED(24,15005) /* FText */                __um(HigherQualityItemsAvailableToSlotAndEvolveAvailableText); // 0x0370   (0x0018)  
	SDK_UNDEFINED(24,15006) /* FText */                __um(HigherQualityItemsAvailableToSlotText);                // 0x0388   (0x0018)  
	SDK_UNDEFINED(24,15007) /* FText */                __um(ItemInSlotFullyUpgradedText);                          // 0x03A0   (0x0018)  
	SDK_UNDEFINED(24,15008) /* FText */                __um(ItemInSlotCanBeUpgradedText);                          // 0x03B8   (0x0018)  
	SDK_UNDEFINED(24,15009) /* FText */                __um(ItemInSlotCanBeEvolvedText);                           // 0x03D0   (0x0018)  
	class UFortItem*                                   SlottedItemRepresentation;                                  // 0x03E8   (0x0008)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x03F0   (0x0020)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.OnItemDestroyed
	// void OnItemDestroyed();                                                                                               // [0xbe35510] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.OnItemCardUpdated
	// void OnItemCardUpdated();                                                                                             // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.IsItemSlotted
	// bool IsItemSlotted();                                                                                                 // [0xa060bf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.HasItemsToSlot
	// bool HasItemsToSlot();                                                                                                // [0xbe34b1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.HandleUnslotItemComplete
	// void HandleUnslotItemComplete(class UFortAccountItem* UnslottedItem, class UFortAccountItem* OldItem, FName SlotId);  // [0xbe348f4] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.HandleSlottedItemOperationComplete
	// void HandleSlottedItemOperationComplete(class UFortAccountItem* NewItem, FName TemplateId);                           // [0xbe34830] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.HandleResearchItemComplete
	// void HandleResearchItemComplete(class UFortAccountItem* ResearchedItem, FString SlotId);                              // [0xbe33f78] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.GetSlottedItemRepresentation
	// class UFortItem* GetSlottedItemRepresentation();                                                                      // [0xb7c1f38] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.GetSlotRowName
	// FName GetSlotRowName();                                                                                               // [0x3f1ffc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.GetNumItemsToSlot
	// int32_t GetNumItemsToSlot();                                                                                          // [0xbe32e84] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.FortCollectionBookSlottedItemUpdatedDelegate__DelegateSignature
	// void FortCollectionBookSlottedItemUpdatedDelegate__DelegateSignature();                                               // [0x2177018] MulticastDelegate|Public|Delegate 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookWidget
/// Size: 0x0030 (0x000570 - 0x0005A0)
class UFortCollectionBookWidget : public UFortActivatablePanel
{ 
public:
	class UFortCollectionBookProgressWidget*           ProgressWidget;                                             // 0x0570   (0x0008)  
	class UCommonActivatableWidgetSwitcher*            MainWidgetSwitcher;                                         // 0x0578   (0x0008)  
	class UFortCollectionBookPrimaryPanel*             PrimaryPanelWidget;                                         // 0x0580   (0x0008)  
	class UFortCollectionBookSectionPanel*             SectionPanelWidget;                                         // 0x0588   (0x0008)  
	int32_t                                            PrimaryPanelIdx;                                            // 0x0590   (0x0004)  
	int32_t                                            SectionPanelIdx;                                            // 0x0594   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0598   (0x0008)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget.RequestToClose
	// void RequestToClose();                                                                                                // [0xbe37b60] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget.OnPreviewXPChangeRequest
	// void OnPreviewXPChangeRequest(int32_t XPChange);                                                                      // [0xbe359d4] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget.OnCollectionBookSectionCloseRequest
	// void OnCollectionBookSectionCloseRequest();                                                                           // [0xbe352c8] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget.OnCollectionBookSectionClicked
	// void OnCollectionBookSectionClicked(class UFortCollectionBookSection* ClickedSection);                                // [0x9e119a0] Native|Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget.OnCollectionBookPageSelected
	// void OnCollectionBookPageSelected(class UFortCollectionBookPage* SelectedPage);                                       // [0xbe3513c] Native|Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget.OnCollectionBookPageClicked
	// void OnCollectionBookPageClicked(class UFortCollectionBookPage* ClickedPage);                                         // [0xbe351c0] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookWidget_Legacy
/// Size: 0x0030 (0x000570 - 0x0005A0)
class UFortCollectionBookWidget_Legacy : public UFortActivatablePanel
{ 
public:
	class UFortCollectionBookProgressWidget*           ProgressWidget;                                             // 0x0570   (0x0008)  
	class UCommonWidgetSwitcherLegacy*                 MainWidgetSwitcher;                                         // 0x0578   (0x0008)  
	class UFortCollectionBookPrimaryPanel_Legacy*      PrimaryPanelWidget;                                         // 0x0580   (0x0008)  
	class UFortCollectionBookSectionPanel*             SectionPanelWidget;                                         // 0x0588   (0x0008)  
	int32_t                                            PrimaryPanelIdx;                                            // 0x0590   (0x0004)  
	int32_t                                            SectionPanelIdx;                                            // 0x0594   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0598   (0x0008)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget_Legacy.RequestToClose
	// void RequestToClose();                                                                                                // [0xbe37ba8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget_Legacy.OnPreviewXPChangeRequest
	// void OnPreviewXPChangeRequest(int32_t XPChange);                                                                      // [0xbe359d4] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget_Legacy.OnCollectionBookSectionCloseRequest
	// void OnCollectionBookSectionCloseRequest();                                                                           // [0xbe352c8] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget_Legacy.OnCollectionBookSectionClicked
	// void OnCollectionBookSectionClicked(class UFortCollectionBookSection* ClickedSection);                                // [0x9e119a0] Native|Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget_Legacy.OnCollectionBookPageSelected
	// void OnCollectionBookPageSelected(class UFortCollectionBookPage* SelectedPage);                                       // [0xbe3513c] Native|Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget_Legacy.OnCollectionBookPageClicked
	// void OnCollectionBookPageClicked(class UFortCollectionBookPage* ClickedPage);                                         // [0xbe351c0] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortAbilitySystemContext
/// Size: 0x0050 (0x000030 - 0x000080)
class UFortAbilitySystemContext : public UBlueprintContextBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0030   (0x0050)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortAbilitySystemContext.RemoveDelegatesFromWidget
	// void RemoveDelegatesFromWidget(class UWidget* Widget);                                                                // [0xbe37acc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortAbilitySystemContext.RegisterForAttributeChanged
	// void RegisterForAttributeChanged(class UWidget* Widget, class UAbilitySystemComponent* ASC, FGameplayAttribute Attribute, FDelegateProperty Callback); // [0xbe37594] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortAbilitySystemContext.HasMatchingGameplayTag
	// bool HasMatchingGameplayTag(FGameplayTag TagToCheck);                                                                 // [0xbe34b34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase
/// Size: 0x0058 (0x000488 - 0x0004E0)
class UFortDirectAcquisitionWidgetBase : public UFortMtxStoreRootBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0488   (0x0008)  MISSED
	bool                                               bShowIneligible;                                            // 0x0490   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0491   (0x0007)  MISSED
	class UUserWidget*                                 FirstOfferGenerated;                                        // 0x0498   (0x0008)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x04A0   (0x0010)  MISSED
	class UHorizontalBox*                              HorizontalBox_LargeTile;                                    // 0x04B0   (0x0008)  
	class UGridPanel*                                  GridPanel_SmallTile;                                        // 0x04B8   (0x0008)  
	class UHorizontalBox*                              HorizontalBox_ReorderedItems;                               // 0x04C0   (0x0008)  
	class UVerticalBox*                                VerticalBox_FeatureItems;                                   // 0x04C8   (0x0008)  
	class UVerticalBox*                                VerticalBox_DailyItems;                                     // 0x04D0   (0x0008)  
	class UScaleBox*                                   ScaleBox_Main;                                              // 0x04D8   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase.OnDisplayToast
	// void OnDisplayToast(bool bDisplayToast);                                                                              // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase.IsTabsLayout
	// void IsTabsLayout(bool bShouldDisplayTabs);                                                                           // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase.HandleAffiliateButtonClicked
	// void HandleAffiliateButtonClicked();                                                                                  // [0xbe33874] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase.GetWeeklyStoreEndDate
	// FDateTime GetWeeklyStoreEndDate();                                                                                    // [0xbe3370c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase.GetStoreCurrencies
	// TArray<UFortAccountItemDefinition*> GetStoreCurrencies();                                                             // [0xbe33054] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase.GetSeasonStoreEndDate
	// FDateTime GetSeasonStoreEndDate();                                                                                    // [0xbe32fe4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase.GetDailyStoreEndDate
	// FDateTime GetDailyStoreEndDate();                                                                                     // [0xbe328bc] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy
/// Size: 0x0058 (0x0005F8 - 0x000650)
class UFortDirectAcquisitionWidgetBase_Legacy : public UFortMtxStoreRootBase_Legacy
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x05F8   (0x0008)  MISSED
	bool                                               bShowIneligible;                                            // 0x0600   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0601   (0x0007)  MISSED
	class UUserWidget*                                 FirstOfferGenerated;                                        // 0x0608   (0x0008)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x0610   (0x0010)  MISSED
	class UHorizontalBox*                              HorizontalBox_LargeTile;                                    // 0x0620   (0x0008)  
	class UGridPanel*                                  GridPanel_SmallTile;                                        // 0x0628   (0x0008)  
	class UHorizontalBox*                              HorizontalBox_ReorderedItems;                               // 0x0630   (0x0008)  
	class UVerticalBox*                                VerticalBox_FeatureItems;                                   // 0x0638   (0x0008)  
	class UVerticalBox*                                VerticalBox_DailyItems;                                     // 0x0640   (0x0008)  
	class UScaleBox*                                   ScaleBox_Main;                                              // 0x0648   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.OnDisplayToast
	// void OnDisplayToast(bool bDisplayToast);                                                                              // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.IsTabsLayout
	// void IsTabsLayout(bool bShouldDisplayTabs);                                                                           // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.HandleAffiliateButtonClicked
	// void HandleAffiliateButtonClicked();                                                                                  // [0xbe33874] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.GetWeeklyStoreEndDate
	// FDateTime GetWeeklyStoreEndDate();                                                                                    // [0xbe3370c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.GetStoreCurrencies
	// TArray<UFortAccountItemDefinition*> GetStoreCurrencies();                                                             // [0xbe33090] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.GetSeasonStoreEndDate
	// FDateTime GetSeasonStoreEndDate();                                                                                    // [0xbe32fe4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.GetDailyStoreEndDate
	// FDateTime GetDailyStoreEndDate();                                                                                     // [0xbe328bc] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget
/// Size: 0x0060 (0x000538 - 0x000598)
class UFortExpeditionBuildSquadWidget : public UCommonActivatablePanelLegacy
{ 
public:
	SDK_UNDEFINED(8,15010) /* TWeakObjectPtr<UFortExpeditionItem*> */ __um(Item);                                  // 0x0538   (0x0008)  
	FName                                              CurrentSquadId;                                             // 0x0540   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0544   (0x0004)  MISSED
	class UFortSquadSlotsView*                         ExpeditionSquadSlotsView;                                   // 0x0548   (0x0008)  
	class UFortSquadSlotDetailsPanel*                  ExpeditionSquadSlotDetails;                                 // 0x0550   (0x0008)  
	class UFortSquadSlotItemPicker*                    ExpeditionSquadSlotPicker;                                  // 0x0558   (0x0008)  
	class UFortItemViewContext_ExpeditionSquadSlotsView* ItemViewContext_ExpeditionSlotsView;                      // 0x0560   (0x0008)  
	class UFortItemViewContext_ExpeditionSquadSlotItemPicker* ItemViewContext_ExpeditionSlotItemPicker;            // 0x0568   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0570   (0x0028)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.SetData
	// void SetData(class UFortExpeditionItem* InItem);                                                                      // [0xbe351c0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.SetCurrentSquadId
	// void SetCurrentSquadId(FName SquadId);                                                                                // [0xbe37f08] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.OnRequestClosePicker
	// void OnRequestClosePicker();                                                                                          // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.OnRefreshBuildSquadWidget
	// void OnRefreshBuildSquadWidget();                                                                                     // [0x788579c] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.IsSquadSlotLocked
	// bool IsSquadSlotLocked(int32_t SlotIndex);                                                                            // [0xbe34dd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.IsExpeditionValidToStart
	// bool IsExpeditionValidToStart();                                                                                      // [0xbe34cdc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.HandleRequestStartExpedition
	// void HandleRequestStartExpedition(bool& bPassThrough);                                                                // [0xbe33efc] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.HandleDifferentSquadSlotSelected
	// void HandleDifferentSquadSlotSelected(int32_t SquadSlotIndex);                                                        // [0xbe33ab4] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.ClearTemporaryExpeditionSquadState
	// void ClearTemporaryExpeditionSquadState(bool bPreviewOnly);                                                           // [0xbe32668] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionDetailsWidget
/// Size: 0x0040 (0x0002E8 - 0x000328)
class UFortExpeditionDetailsWidget : public UCommonUserWidget
{ 
public:
	SDK_UNDEFINED(8,15011) /* TWeakObjectPtr<UFortExpeditionItem*> */ __um(Item);                                  // 0x02E8   (0x0008)  
	class UFortSquadSlotsView*                         ExpeditionSquadSlotsView;                                   // 0x02F0   (0x0008)  
	FName                                              CurrentSquadId;                                             // 0x02F8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02FC   (0x0004)  MISSED
	class UFortItemViewContext_ExpeditionSquadSlotsView* ItemViewContext_ExpeditionSlotsView;                      // 0x0300   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0308   (0x0020)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortExpeditionDetailsWidget.SetData
	// void SetData(class UFortExpeditionItem* InItem);                                                                      // [0x7a74a64] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortExpeditionDetailsWidget.SetCurrentSquadId
	// void SetCurrentSquadId(FName SquadId);                                                                                // [0xbe37f9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionDetailsWidget.RequestAbandonExpedition
	// void RequestAbandonExpedition();                                                                                      // [0xbe37b4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionDetailsWidget.HandleAbandonExpeditionCompleted
	// void HandleAbandonExpeditionCompleted(class UFortExpeditionItem* Expedition, bool bSuccess);                          // [0xbe337bc] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionExpiresWidget
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortExpeditionExpiresWidget : public UCommonUserWidget
{ 
public:
	SDK_UNDEFINED(8,15012) /* TWeakObjectPtr<UFortExpeditionItem*> */ __um(Item);                                  // 0x02E8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x02F0   (0x0008)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortExpeditionExpiresWidget.SetData
	// void SetData(class UFortExpeditionItem* InItem);                                                                      // [0x9039b80] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortExpeditionExpiresWidget.OnExpeditionExpirationUpdated
	// void OnExpeditionExpirationUpdated();                                                                                 // [0x1555df0] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionListItemWidget
/// Size: 0x0020 (0x0014E0 - 0x001500)
class UFortExpeditionListItemWidget : public UCommonButtonLegacy
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x14E0   (0x0008)  MISSED
	SDK_UNDEFINED(8,15013) /* TWeakObjectPtr<UFortExpeditionItem*> */ __um(Item);                                  // 0x14E8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x14F0   (0x0010)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortExpeditionListItemWidget.OnItemChanged
	// void OnItemChanged();                                                                                                 // [0x2177018] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionListViewWidget
/// Size: 0x0030 (0x0002E8 - 0x000318)
class UFortExpeditionListViewWidget : public UCommonUserWidget
{ 
public:
	SDK_UNDEFINED(16,15014) /* FMulticastInlineDelegate */ __um(OnExpeditionSelected);                             // 0x02E8   (0x0010)  
	SDK_UNDEFINED(16,15015) /* FMulticastInlineDelegate */ __um(OnExpeditionListViewRefreshed);                    // 0x02F8   (0x0010)  
	class UCommonListView*                             ExpeditionListView;                                         // 0x0308   (0x0008)  
	FName                                              CurrentTabNameId;                                           // 0x0310   (0x0004)  
	EFortExpeditionListSort                            SortType;                                                   // 0x0314   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0315   (0x0003)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortExpeditionListViewWidget.SetExpeditionListSortType
	// void SetExpeditionListSortType(EFortExpeditionListSort InSortType);                                                   // [0xbe386d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionListViewWidget.GetExpeditionListSortName
	// FText GetExpeditionListSortName();                                                                                    // [0xbe32968] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionMasterWidget
/// Size: 0x0020 (0x000538 - 0x000558)
class UFortExpeditionMasterWidget : public UCommonActivatablePanelLegacy
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0538   (0x0020)  MISSED
};

/// Struct /Script/SaveTheWorldUI.ExpeditionTabInfo
/// Size: 0x0120 (0x000000 - 0x000120)
struct FExpeditionTabInfo
{ 
	FName                                              TabNameID;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0004   (0x000C)  MISSED
	FFortTabButtonLabelInfo                            TabLabelInfo;                                               // 0x0010   (0x0110)  
};

/// Class /Script/SaveTheWorldUI.FortExpeditionOverviewWidget
/// Size: 0x0028 (0x0002E8 - 0x000310)
class UFortExpeditionOverviewWidget : public UCommonUserWidget
{ 
public:
	class UClass*                                      TabButtonType;                                              // 0x02E8   (0x0008)  
	TArray<FExpeditionTabInfo>                         TabListRegistrationInfo;                                    // 0x02F0   (0x0010)  
	class UFortTabListWidgetBase_Legacy*               ExpeditionTabList;                                          // 0x0300   (0x0008)  
	class UFortExpeditionListViewWidget*               ExpeditionListView;                                         // 0x0308   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortExpeditionOverviewWidget.UpdateExpeditionTabs
	// void UpdateExpeditionTabs();                                                                                          // [0xbe38ddc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionOverviewWidget.OnExpeditionTabSelected
	// void OnExpeditionTabSelected(FName& TabNameID);                                                                       // [0xbe352dc] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortExpeditionOverviewWidget.OnExpeditionOverviewRefresh
	// void OnExpeditionOverviewRefresh();                                                                                   // [0x1486378] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortExpeditionOverviewWidget.HandleExpeditionTabSelected
	// void HandleExpeditionTabSelected(FName TabNameID);                                                                    // [0xbe33b38] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortExpeditionOverviewWidget.HandleExpeditionTabButtonCreated
	// void HandleExpeditionTabButtonCreated(FName TabNameID, class UCommonButtonBase* TabButton);                           // [0x8888064] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionPickVehicleWidget
/// Size: 0x0008 (0x000538 - 0x000540)
class UFortExpeditionPickVehicleWidget : public UCommonActivatablePanelLegacy
{ 
public:
	SDK_UNDEFINED(8,15016) /* TWeakObjectPtr<UFortExpeditionItem*> */ __um(Item);                                  // 0x0538   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortExpeditionPickVehicleWidget.SetData
	// void SetData(class UFortExpeditionItem* InItem);                                                                      // [0x9e119a0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionReturnsWidget
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortExpeditionReturnsWidget : public UCommonUserWidget
{ 
public:
	SDK_UNDEFINED(8,15017) /* TWeakObjectPtr<UFortExpeditionItem*> */ __um(Item);                                  // 0x02E8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x02F0   (0x0008)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortExpeditionReturnsWidget.SetData
	// void SetData(class UFortExpeditionItem* InItem);                                                                      // [0x9039b80] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortExpeditionReturnsWidget.OnExpeditionInProgressUpdated
	// void OnExpeditionInProgressUpdated();                                                                                 // [0x1555df0] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionRewardsWidget
/// Size: 0x0028 (0x0002E8 - 0x000310)
class UFortExpeditionRewardsWidget : public UCommonUserWidget
{ 
public:
	SDK_UNDEFINED(16,15018) /* FMulticastInlineDelegate */ __um(OnAllExpeditionsCollected);                        // 0x02E8   (0x0010)  
	class UCommonTileView*                             RewardsTileView;                                            // 0x02F8   (0x0008)  
	bool                                               bPendingCollection;                                         // 0x0300   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0301   (0x000F)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortExpeditionRewardsWidget.RefreshRewardsUI
	// void RefreshRewardsUI(class UFortExpeditionItem* Expedition, bool bExpeditionSucceeded, TArray<FFortItemInstanceQuantityPair>& Rewards); // [0xbe373e4] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortExpeditionRewardsWidget.ProcessNextReward
	// void ProcessNextReward();                                                                                             // [0xbe36eb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionRewardsWidget.HandleCollectionExpeditionCompleted
	// void HandleCollectionExpeditionCompleted(bool bMcpSuccess, class UFortExpeditionItem* Expedition, bool bExpeditionSuccess, TArray<FFortItemInstanceQuantityPair>& Rewards); // [0xbe338bc] Final|Native|Protected|HasOutParms 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionSummaryWidget
/// Size: 0x0058 (0x0002E8 - 0x000340)
class UFortExpeditionSummaryWidget : public UCommonUserWidget
{ 
public:
	int32_t                                            AvailableExpeditions;                                       // 0x02E8   (0x0004)  
	int32_t                                            CompletedExpeditions;                                       // 0x02EC   (0x0004)  
	int32_t                                            LandVehiclesTotal;                                          // 0x02F0   (0x0004)  
	int32_t                                            LandVehiclesAvailable;                                      // 0x02F4   (0x0004)  
	int32_t                                            AirVehiclesTotal;                                           // 0x02F8   (0x0004)  
	int32_t                                            AirVehiclesAvailable;                                       // 0x02FC   (0x0004)  
	int32_t                                            SeaVehiclesTotal;                                           // 0x0300   (0x0004)  
	int32_t                                            SeaVehiclesAvailable;                                       // 0x0304   (0x0004)  
	int32_t                                            LandExpeditionsTotal;                                       // 0x0308   (0x0004)  
	int32_t                                            LandExpeditionsAvailable;                                   // 0x030C   (0x0004)  
	int32_t                                            AirExpeditionsTotal;                                        // 0x0310   (0x0004)  
	int32_t                                            AirExpeditionsAvailable;                                    // 0x0314   (0x0004)  
	int32_t                                            SeaExpeditionsTotal;                                        // 0x0318   (0x0004)  
	int32_t                                            SeaExpeditionsAvailable;                                    // 0x031C   (0x0004)  
	TArray<class UFortExpeditionItem*>                 InProgressExpeditions;                                      // 0x0320   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0330   (0x0010)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortExpeditionSummaryWidget.UnbindInventoryDelegates
	// void UnbindInventoryDelegates();                                                                                      // [0xbe38d64] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionSummaryWidget.OnRefreshSummaryWidget
	// void OnRefreshSummaryWidget();                                                                                        // [0x1555df0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortExpeditionSummaryWidget.BindInventoryDelegates
	// void BindInventoryDelegates();                                                                                        // [0xbe320f4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionUtilities
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortExpeditionUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.TotalUnseenExpeditionsForTab
	// int32_t TotalUnseenExpeditionsForTab(class UWidget* Widget, FName& TabNameID);                                        // [0xbe38c94] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.IsSquadOnExpedition
	// bool IsSquadOnExpedition(class UWidget* Widget, FName& SquadId);                                                      // [0xbe34d00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.GetVehicleTagRequiredForExpedition
	// FGameplayTag GetVehicleTagRequiredForExpedition(class UFortExpeditionItem* Expedition);                               // [0xbe33590] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.GetVehicleTagFromSquadId
	// bool GetVehicleTagFromSquadId(FName& SquadId, FGameplayTag& OutFoundVehicleTag);                                      // [0xbe33478] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.GetTotalExpeditionVehiclesAvailable
	// void GetTotalExpeditionVehiclesAvailable(class UWidget* Widget, class AFortPlayerController* FortPC, int32_t& OutLandVehicles, int32_t& OutLandVehiclesAvailable, int32_t& OutSeaVehicles, int32_t& OutSeaVehiclesAvailable, int32_t& OutAirVehicles, int32_t& OutAirVehiclesAvailable); // [0xbe3314c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.GetMatchedCriteriaTags
	// void GetMatchedCriteriaTags(class UFortExpeditionItem* Expedition, TArray<UFortItem*>& SlottedItems, TArray<FGameplayTag>& OutMatchedCriteria); // [0xbe32d04] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.GetExpeditionSquadsThatMatchRequirements
	// bool GetExpeditionSquadsThatMatchRequirements(FGameplayTagContainer& RequirementTags, class AFortPlayerController* FortPC, TArray<FName>& OutExpeditionSquadIds); // [0xbe32ae0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.GetExpeditionSquadPower
	// float GetExpeditionSquadPower(class AFortPlayerController* FortPC, FName& SquadId);                                   // [0xbe32a10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.GetAllExpeditionSquadIds
	// void GetAllExpeditionSquadIds(TArray<FName>& OutExpeditionSquadIds);                                                  // [0xbe3282c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.CalculateTotalPower
	// float CalculateTotalPower(class AFortPlayerController* FortPC, class UFortExpeditionItem* Expedition, FName& SquadId, TArray<UFortItem*>& SlottedItems); // [0xbe32458] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.CalculateGlobalAndItemRatingModValuesBP
	// void CalculateGlobalAndItemRatingModValuesBP(class UFortExpeditionItem* Expedition, TArray<UFortItem*>& SlottedItems, float& GlobalPowerMod, TArray<float>& SlottedItemMods); // [0xbe32230] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.CalculateExpeditionPercentageChanceForSuccess
	// float CalculateExpeditionPercentageChanceForSuccess(class UFortExpeditionItem* Expedition, float TotalPower);         // [0xbe3211c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.AreExpeditionsUnlocked
	// bool AreExpeditionsUnlocked(class UObject* WorldContextObject, FUniqueNetIdRepl& UniqueID);                           // [0xbe31fa0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.AreAnyExpeditionsComplete
	// bool AreAnyExpeditionsComplete(class UWidget* Widget);                                                                // [0xbe31f20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionVehicleTileItemWidget
/// Size: 0x0010 (0x0014E0 - 0x0014F0)
class UFortExpeditionVehicleTileItemWidget : public UCommonButtonLegacy
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x14E0   (0x0008)  MISSED
	SDK_UNDEFINED(8,15019) /* TWeakObjectPtr<UObject*> */ __um(SquadId);                                           // 0x14E8   (0x0008)  
};

/// Class /Script/SaveTheWorldUI.FortFeatureUnlockWidget
/// Size: 0x0038 (0x000570 - 0x0005A8)
class UFortFeatureUnlockWidget : public UFortActivatablePanel
{ 
public:
	class UCommonWidgetSwitcherLegacy*                 MediaSwitcher;                                              // 0x0570   (0x0008)  
	class UWidget*                                     VideoContent;                                               // 0x0578   (0x0008)  
	class UWidget*                                     ImageContent;                                               // 0x0580   (0x0008)  
	class UFortVideoPlayerWidget*                      VideoWidget;                                                // 0x0588   (0x0008)  
	class UCommonLazyImage*                            ImageWidget;                                                // 0x0590   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0598   (0x0010)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortFeatureUnlockWidget.SetData
	// void SetData(FString ItemTemplateID);                                                                                 // [0xbe3801c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortFeatureUnlockWidget.RefreshDataBP
	// void RefreshDataBP();                                                                                                 // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortFeatureUnlockWidget.GetVideo
	// class UMediaSource* GetVideo();                                                                                       // [0xbe336ec] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortFeatureUnlockWidget.GetTitle
	// FText GetTitle();                                                                                                     // [0xbe330cc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortFeatureUnlockWidget.GetSmallIcon
	// TWeakObjectPtr<UTexture2D*> GetSmallIcon();                                                                           // [0xbe33010] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortFeatureUnlockWidget.GetLargeIcon
	// TWeakObjectPtr<UTexture2D*> GetLargeIcon();                                                                           // [0xbe32cc0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortFeatureUnlockWidget.GetDescription
	// FText GetDescription();                                                                                               // [0xbe328e8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortResultsWidgetSTW
/// Size: 0x00C8 (0x000400 - 0x0004C8)
class UFortResultsWidgetSTW : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x78];                                      // 0x0400   (0x0078)  MISSED
	int32_t                                            AdditionalGrantedMissionPoints;                             // 0x0478   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x047C   (0x0004)  MISSED
	TArray<class UFortItem*>                           RewardedBadges;                                             // 0x0480   (0x0010)  
	TArray<class UFortItem*>                           MissedBadges;                                               // 0x0490   (0x0010)  
	TArray<class UFortItem*>                           RewardedItems;                                              // 0x04A0   (0x0010)  
	TArray<class UFortItem*>                           RewardedAccountItems;                                       // 0x04B0   (0x0010)  
	class UCommonUserWidget*                           Radial_Picker;                                              // 0x04C0   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.TriggerSetupTeleportCameraEvent
	// void TriggerSetupTeleportCameraEvent();                                                                               // [0xa1f4a60] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.ToggleChat
	// void ToggleChat(bool bShow);                                                                                          // [0xa1f49ac] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.SendEndOfRoundUpVoteAnalytic
	// void SendEndOfRoundUpVoteAnalytic(FUniqueNetIdRepl& TargetId, FString TargetPlayerName);                              // [0xa1f209c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.SendEndOfRoundScreenAnalytic
	// void SendEndOfRoundScreenAnalytic(FString ScreenName, bool Skipped, float TimeSpent);                                 // [0xa1f195c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.SendEndOfRoundFriendInviteAnalytic
	// void SendEndOfRoundFriendInviteAnalytic(FUniqueNetIdRepl& TargetId, FString TargetPlayerName);                        // [0xa1f11ec] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.RequestExitZone
	// void RequestExitZone();                                                                                               // [0xa1f01d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.LogXPData
	// void LogXPData();                                                                                                     // [0xbe34ebc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.IsDataFinalized
	// bool IsDataFinalized();                                                                                               // [0xbe34cb8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.HandlePickerCancel
	// void HandlePickerCancel(bool& bPassThrough);                                                                          // [0xbe33d94] Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.HandleEmoteClicked
	// void HandleEmoteClicked(bool& bPassThrough);                                                                          // [0x7062500] Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.GetZoneCompletionResultText
	// FText GetZoneCompletionResultText();                                                                                  // [0xbe33768] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.GetZoneCompletionResult
	// EFortCompletionResult GetZoneCompletionResult();                                                                      // [0xbe33738] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.GetTotalMissionPointsEarned
	// int32_t GetTotalMissionPointsEarned();                                                                                // [0xbe33454] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.GetRewardsByType
	// void GetRewardsByType(EFortRewardItemTypeSTW Type, TArray<UFortItem*>& OutRewards);                                   // [0xbe32ecc] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortSTWUIData
/// Size: 0x0020 (0x000030 - 0x000050)
class UFortSTWUIData : public UFortSTWUIDataBase
{ 
public:
	SDK_UNDEFINED(32,15020) /* TWeakObjectPtr<UDataTable*> */ __um(UpgradesDisplayDataTable);                      // 0x0030   (0x0020)  
};

/// Class /Script/SaveTheWorldUI.FortRootViewportLayout_STW
/// Size: 0x0008 (0x000420 - 0x000428)
class UFortRootViewportLayout_STW : public UFortRootViewportLayout
{ 
public:
	class UTalkingHead*                                TalkingHead;                                                // 0x0420   (0x0008)  
};

/// Class /Script/SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW
/// Size: 0x0058 (0x000570 - 0x0005C8)
class UFortItemAutoMulchActivatablePanel_STW : public UFortActivatablePanel
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0570   (0x0058)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.SetItemManagementScreen
	// void SetItemManagementScreen(class UFortItemManagementScreen_STW* InItemManagementScreen);                            // [0xa3d9c5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.SaveSettings
	// void SaveSettings();                                                                                                  // [0xbe37bf8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.RestoreAutoMulchSettings
	// void RestoreAutoMulchSettings();                                                                                      // [0xa3d8e50] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.GetMulchCategoriesForInventoryFilter
	// TArray<EFortAutoMulchCategory> GetMulchCategoriesForInventoryFilter();                                                // [0xbe32e48] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.GetFrontendInventoryFilter
	// EFortFrontendInventoryFilter GetFrontendInventoryFilter();                                                            // [0xbe32c58] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.EnterMulchModeForAutoMulch
	// void EnterMulchModeForAutoMulch();                                                                                    // [0xbe327f0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.CacheAutoMulchSettings
	// void CacheAutoMulchSettings();                                                                                        // [0xbe32108] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW
/// Size: 0x00A0 (0x000570 - 0x000610)
class UFortItemCraftingOptionsActivatablePanel_STW : public UFortActivatablePanel
{ 
public:
	class UFortSchematicItem*                          BaseItem;                                                   // 0x0570   (0x0008)  
	class UFortSchematicItem*                          TargetItem;                                                 // 0x0578   (0x0008)  
	int32_t                                            MaxCraftingTierIndex;                                       // 0x0580   (0x0004)  
	int32_t                                            TargetCraftingTierIndex;                                    // 0x0584   (0x0004)  
	int32_t                                            TargetPromotionTierIndex;                                   // 0x0588   (0x0004)  
	int32_t                                            MaxQuantity;                                                // 0x058C   (0x0004)  
	int32_t                                            SelectedQuantity;                                           // 0x0590   (0x0004)  
	bool                                               CanCraftTargetItem;                                         // 0x0594   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0595   (0x0003)  MISSED
	class UWidget*                                     TierImageParent;                                            // 0x0598   (0x0008)  
	class UWidget*                                     TierImageParent0;                                           // 0x05A0   (0x0008)  
	class UWidget*                                     TierImageParent1;                                           // 0x05A8   (0x0008)  
	class UWidget*                                     TierImageParent2;                                           // 0x05B0   (0x0008)  
	class UWidget*                                     TierImageParent3;                                           // 0x05B8   (0x0008)  
	class UImage*                                      TierImage;                                                  // 0x05C0   (0x0008)  
	class UImage*                                      TierImage4;                                                 // 0x05C8   (0x0008)  
	class UImage*                                      TierImage5;                                                 // 0x05D0   (0x0008)  
	class UImage*                                      TierImage6;                                                 // 0x05D8   (0x0008)  
	class UImage*                                      TierImage7;                                                 // 0x05E0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x05E8   (0x0028)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.UpdateTierImages
	// void UpdateTierImages();                                                                                              // [0xa3db6ac] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SetTargetCraftingTierIndex
	// void SetTargetCraftingTierIndex(int32_t NewTierIndex);                                                                // [0xbe38b54] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SetSelectedQuantity_BP
	// void SetSelectedQuantity_BP(int32_t NewQuantity);                                                                     // [0xbe38ad4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SetItemManagementScreen
	// void SetItemManagementScreen(class UFortItemManagementScreen_STW* InItemManagementScreen);                            // [0xa3d9d5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SetBaseSchematicItem
	// void SetBaseSchematicItem(class UFortSchematicItem* InBaseItem);                                                      // [0xbe37d84] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SelectPreviousTier
	// void SelectPreviousTier();                                                                                            // [0xbe37c4c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SelectNextTier
	// void SelectNextTier();                                                                                                // [0xbe37c0c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.OnTargetItemChanged
	// void OnTargetItemChanged(class UFortSchematicItem* NewTargetItem);                                                    // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.OnSelectedQuantityChanged
	// void OnSelectedQuantityChanged(int32_t NewSelectedQuantity);                                                          // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.OnMaxQuantityChanged
	// void OnMaxQuantityChanged(int32_t NewMaxQuantity);                                                                    // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.OnBaseItemChanged
	// void OnBaseItemChanged(class UFortSchematicItem* NewBaseItem);                                                        // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.IncreaseSelectedQuantity
	// void IncreaseSelectedQuantity();                                                                                      // [0xbe34c8c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.DecreaseSelectedQuantity
	// void DecreaseSelectedQuantity();                                                                                      // [0xbe327c8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.CraftTargetItem
	// void CraftTargetItem();                                                                                               // [0xbe32758] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.CraftAndSlotTargetItem
	// void CraftAndSlotTargetItem();                                                                                        // [0xbe326e8] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW
/// Size: 0x01C8 (0x000400 - 0x0005C8)
class UFortItemDetailsActivatablePanel_STW : public UCommonActivatableWidget
{ 
public:
	FDataTableRowHandle                                DropInputActionHandle;                                      // 0x0400   (0x0010)  
	FDataTableRowHandle                                DestroyInputActionHandle;                                   // 0x0410   (0x0010)  
	FDataTableRowHandle                                BackInputActionHandle;                                      // 0x0420   (0x0010)  
	FDataTableRowHandle                                LeaveInventoryInputActionHandle;                            // 0x0430   (0x0010)  
	FDataTableRowHandle                                CraftingOptionsInputActionHandle;                           // 0x0440   (0x0010)  
	FDataTableRowHandle                                CraftInputActionHandle;                                     // 0x0450   (0x0010)  
	FDataTableRowHandle                                MulchInputActionHandle;                                     // 0x0460   (0x0010)  
	FDataTableRowHandle                                InspectInputActionHandle;                                   // 0x0470   (0x0010)  
	FDataTableRowHandle                                InventoryInspectInputActionHandle;                          // 0x0480   (0x0010)  
	FDataTableRowHandle                                UnequipInputActionHandle;                                   // 0x0490   (0x0010)  
	FDataTableRowHandle                                EquipInputActionHandle;                                     // 0x04A0   (0x0010)  
	FDataTableRowHandle                                MoreInfoInputActionHandle;                                  // 0x04B0   (0x0010)  
	FDataTableRowHandle                                WithdrawAllInputActionHandle;                               // 0x04C0   (0x0010)  
	FDataTableRowHandle                                SwitchPanelInputActionHandle;                               // 0x04D0   (0x0010)  
	FDataTableRowHandle                                TransferInputActionHandle;                                  // 0x04E0   (0x0010)  
	FDataTableRowHandle                                ConsumeItemInputActionHandle;                               // 0x04F0   (0x0010)  
	FDataTableRowHandle                                SortInputActionHandle;                                      // 0x0500   (0x0010)  
	FDataTableRowHandle                                CompareInputActionHandle;                                   // 0x0510   (0x0010)  
	FDataTableRowHandle                                OpenCustomFilterInputActionHandle;                          // 0x0520   (0x0010)  
	SDK_UNDEFINED(8,15021) /* TWeakObjectPtr<UFortItem*> */ __um(ItemToDetail);                                    // 0x0530   (0x0008)  
	SDK_UNDEFINED(8,15022) /* TWeakObjectPtr<UFortItem*> */ __um(ItemToCompareWith);                               // 0x0538   (0x0008)  
	SDK_UNDEFINED(8,15023) /* TWeakObjectPtr<UFortItemManagementScreen_STW*> */ __um(HostItemManagementScreen);    // 0x0540   (0x0008)  
	unsigned char                                      UnknownData00_5[0x70];                                      // 0x0548   (0x0070)  MISSED
	class UFortTooltipLoadingWrapper*                  ItemToDetailLoadingWrapper;                                 // 0x05B8   (0x0008)  
	class UCommonLoadGuard*                            ItemToDetailLoadGuard;                                      // 0x05C0   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.SetupInputHandling
	// void SetupInputHandling();                                                                                            // [0xbe38be4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.SetInputActionState
	// void SetInputActionState(FDataTableRowHandle& RowHandle, bool State);                                                 // [0xbe3875c] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterTransferActions
	// void RegisterTransferActions();                                                                                       // [0xbe37ab8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterSort
	// void RegisterSort();                                                                                                  // [0xbe37aa4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterRetire
	// void RegisterRetire();                                                                                                // [0xbe37a90] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterOpenCustomFilter
	// void RegisterOpenCustomFilter();                                                                                      // [0xbe37a74] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterMulch
	// void RegisterMulch();                                                                                                 // [0xbe37a60] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterMore
	// void RegisterMore();                                                                                                  // [0xbe37a4c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterLeaveInventory
	// void RegisterLeaveInventory();                                                                                        // [0xbe37a38] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterInventoryInspect
	// void RegisterInventoryInspect();                                                                                      // [0xbe37a24] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterInspectUpgrade
	// void RegisterInspectUpgrade();                                                                                        // [0xbe37a08] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterInspect
	// void RegisterInspect();                                                                                               // [0xbe379f4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterEquip
	// void RegisterEquip();                                                                                                 // [0xbe37580] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterDropOrDestroy
	// void RegisterDropOrDestroy();                                                                                         // [0xbe3756c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterCraft
	// void RegisterCraft();                                                                                                 // [0xbe37558] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterConsumeItem
	// void RegisterConsumeItem();                                                                                           // [0xbe37544] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterCompare
	// void RegisterCompare();                                                                                               // [0xbe37528] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterBack
	// void RegisterBack();                                                                                                  // [0xbe37514] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RefreshTransferActions
	// void RefreshTransferActions();                                                                                        // [0x2177018] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RefreshSwitchPanelAction
	// void RefreshSwitchPanelAction();                                                                                      // [0x2177018] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RefreshOnNewItemSelected
	// void RefreshOnNewItemSelected();                                                                                      // [0xbe373d0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RefreshOnMenuChange
	// void RefreshOnMenuChange();                                                                                           // [0xbe373bc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RefreshDropAction
	// void RefreshDropAction();                                                                                             // [0xbe373a8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RefreshDestroyAction
	// void RefreshDestroyAction();                                                                                          // [0xbe37358] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RefreshCraftActions
	// void RefreshCraftActions();                                                                                           // [0xbe37344] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RefreshConsumeAction
	// void RefreshConsumeAction();                                                                                          // [0xbe37330] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.MulchQuestComplete
	// bool MulchQuestComplete();                                                                                            // [0x2177018] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleWorldItemsChanged
	// void HandleWorldItemsChanged();                                                                                       // [0xbe34b08] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleWorldItemListChanged
	// void HandleWorldItemListChanged(TArray<UFortWorldItem*>& ItemsAdded, TArray<UFortWorldItem*>& ItemsRemoved);          // [0xbe349f4] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleWithdrawAll
	// void HandleWithdrawAll();                                                                                             // [0x2177018] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleTransfer
	// void HandleTransfer();                                                                                                // [0x2177018] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleSwitchPanel
	// void HandleSwitchPanel();                                                                                             // [0x2177018] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleSort
	// void HandleSort();                                                                                                    // [0x2177018] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleQuickbarContentsChanged
	// void HandleQuickbarContentsChanged(EFortQuickBars QuickbarIndex, TArray<int32_t>& ChangedSlots);                      // [0xbe33e24] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleOpenCustomFilter
	// void HandleOpenCustomFilter();                                                                                        // [0x2177018] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleMulchNative
	// void HandleMulchNative();                                                                                             // [0x2177018] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleMulch
	// void HandleMulch();                                                                                                   // [0x2177018] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleMore
	// void HandleMore();                                                                                                    // [0x2177018] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleItemToDetailTooltipAssetsLoaded
	// void HandleItemToDetailTooltipAssetsLoaded();                                                                         // [0xbe33bb8] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleInspect
	// void HandleInspect();                                                                                                 // [0x2177018] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleEquip
	// void HandleEquip();                                                                                                   // [0x2177018] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleDrop
	// void HandleDrop();                                                                                                    // [0x2177018] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleDifferentItemToDetailSetBP
	// void HandleDifferentItemToDetailSetBP();                                                                              // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleDifferentItemToCompareSetBP
	// void HandleDifferentItemToCompareSetBP();                                                                             // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleDestroy
	// void HandleDestroy();                                                                                                 // [0x2177018] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleCraftingOptions
	// void HandleCraftingOptions();                                                                                         // [0x2177018] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleCraft
	// void HandleCraft();                                                                                                   // [0x2177018] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleConsumeItemProgressChangedBP
	// void HandleConsumeItemProgressChangedBP();                                                                            // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleConsumeItem
	// void HandleConsumeItem();                                                                                             // [0x2177018] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleCompare
	// void HandleCompare();                                                                                                 // [0x2177018] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleBackNative
	// void HandleBackNative();                                                                                              // [0x2177018] Event|Protected|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortItemDetailsModeActivatablePanel_STW
/// Size: 0x0008 (0x0005C8 - 0x0005D0)
class UFortItemDetailsModeActivatablePanel_STW : public UFortItemDetailsActivatablePanel_STW
{ 
public:
	class UCommonWidgetSwitcherLegacy*                 DetailPanelWidgetSwitcher;                                  // 0x05C8   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemDetailsModeActivatablePanel_STW.HandleOnActiveWidgetChanged
	// void HandleOnActiveWidgetChanged(class UWidget* ActiveWidget, int32_t ActiveWidgetIndex);                             // [0xbe33c48] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortItemCompareModeActivatablePanel_STW
/// Size: 0x0010 (0x0005C8 - 0x0005D8)
class UFortItemCompareModeActivatablePanel_STW : public UFortItemDetailsActivatablePanel_STW
{ 
public:
	class UFortItemManagementItemDetailsPanel_STW*     ComparisonModeLeftItemDetailsPanel;                         // 0x05C8   (0x0008)  
	class UFortItemManagementItemDetailsPanel_STW*     ComparisonModeRightItemDetailsPanel;                        // 0x05D0   (0x0008)  
};

/// Class /Script/SaveTheWorldUI.FortItemMulchModeActivatablePanel_STW
/// Size: 0x0010 (0x0005C8 - 0x0005D8)
class UFortItemMulchModeActivatablePanel_STW : public UFortItemDetailsActivatablePanel_STW
{ 
public:
	class UFortItemManagementItemDetailsPanel_STW*     MulchModeItemDetailsPanel;                                  // 0x05C8   (0x0008)  
	class UFortItemManagementMulchDetailsPanel_STW*    MulchDetailsPanel;                                          // 0x05D0   (0x0008)  
};

/// Class /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW
/// Size: 0x0068 (0x000570 - 0x0005D8)
class UFortItemManagementCustomFilterModalWidget_STW : public UFortActivatablePanel
{ 
public:
	SDK_UNDEFINED(8,15024) /* TWeakObjectPtr<UFortItemManagementScreen_STW*> */ __um(HostItemManagementScreen);    // 0x0570   (0x0008)  
	TArray<EFortInventoryCustomFilter>                 AvailableFilters;                                           // 0x0578   (0x0010)  
	SDK_UNDEFINED(80,15025) /* TSet<EFortInventoryCustomFilter> */ __um(LocalCustomFilterSet);                     // 0x0588   (0x0050)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.ToggleFilter
	// void ToggleFilter(EFortInventoryCustomFilter Filter);                                                                 // [0xbe61140] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.OnEndCommitCustomFilter
	// void OnEndCommitCustomFilter(bool bWasSuccessful);                                                                    // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.OnCustomFilterSetUpdated
	// void OnCustomFilterSetUpdated();                                                                                      // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.OnBeginCommitCustomFilter
	// void OnBeginCommitCustomFilter();                                                                                     // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.IsCustomFilterEnabled
	// bool IsCustomFilterEnabled(EFortInventoryCustomFilter Filter);                                                        // [0xa351a0c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.EnableAllFilters
	// void EnableAllFilters();                                                                                              // [0xbe5bc84] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.DisableAllFilters
	// void DisableAllFilters();                                                                                             // [0xbe5ba8c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.CommitCustomFilters
	// void CommitCustomFilters();                                                                                           // [0xbe5b788] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW
/// Size: 0x01D8 (0x0002E8 - 0x0004C0)
class UFortItemManagementInventoryPanel_STW : public UCommonUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x02E8   (0x0050)  MISSED
	FName                                              CurrentFilterName;                                          // 0x0338   (0x0004)  
	EInventoryContentSortType                          CurrentSortType;                                            // 0x033C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x033D   (0x0003)  MISSED
	class UClass*                                      FilterTabButtonType;                                        // 0x0340   (0x0008)  
	class UClass*                                      FilterTabButtonStyle;                                       // 0x0348   (0x0008)  
	TArray<FFortItemManagementInventoryFilterTabLabelInfo> FilterTabLabelInfoArray;                                // 0x0350   (0x0010)  
	class UFortTabListWidgetBase*                      FilterTabList;                                              // 0x0360   (0x0008)  
	class UCommonLoadGuard*                            TileViewLoadGuard;                                          // 0x0368   (0x0008)  
	class UFortItemTileView*                           TileView;                                                   // 0x0370   (0x0008)  
	class UPanelWidget*                                CraftingPanel;                                              // 0x0378   (0x0008)  
	class UCommonLoadGuard*                            CraftingTileViewLoadGuard;                                  // 0x0380   (0x0008)  
	class UFortItemTileView*                           CraftingTileView;                                           // 0x0388   (0x0008)  
	class UPanelWidget*                                StoragePanel;                                               // 0x0390   (0x0008)  
	class UCommonLoadGuard*                            StorageTileViewLoadGuard;                                   // 0x0398   (0x0008)  
	class UFortItemTileView*                           StorageTileView;                                            // 0x03A0   (0x0008)  
	class UCommonTextBlock*                            MulchRestrictionReasonText;                                 // 0x03A8   (0x0008)  
	EFortItemCardSize                                  SmallTileSize;                                              // 0x03B0   (0x0001)  
	EFortItemCardSize                                  LargeTileSize;                                              // 0x03B1   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x03B2   (0x0002)  MISSED
	SDK_UNDEFINED(8,15026) /* TWeakObjectPtr<UFortItemManagementScreen_STW*> */ __um(HostItemManagementScreen);    // 0x03B4   (0x0008)  
	bool                                               bCanDragItems;                                              // 0x03BC   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x03BD   (0x0003)  MISSED
	TArray<FQuickbarEquipSlotIndicesConfig>            DefaultQuickbarEquipSlotIndicesConfigs;                     // 0x03C0   (0x0010)  
	SDK_UNDEFINED(80,15027) /* TMap<FName, int32_t> */ __um(QuickbarEquipSlotIndices);                             // 0x03D0   (0x0050)  
	unsigned char                                      UnknownData04_5[0x90];                                      // 0x0420   (0x0090)  MISSED
	class UFortInventoryContext*                       InventoryContext;                                           // 0x04B0   (0x0008)  
	class UWidget*                                     WidgetToCenter;                                             // 0x04B8   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.UpdateSchematicTiles
	// void UpdateSchematicTiles();                                                                                          // [0xbe61b74] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.ToggleTileSize
	// void ToggleTileSize();                                                                                                // [0xbe612f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.TogglePrioritizeFavorites
	// void TogglePrioritizeFavorites();                                                                                     // [0xbe611f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.SwitchPanelFocus
	// void SwitchPanelFocus();                                                                                              // [0xbe6112c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.SetSortType
	// void SetSortType(EInventoryContentSortType SortType);                                                                 // [0xbe608f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.SetFilter
	// void SetFilter(FName FilterName);                                                                                     // [0xbe6000c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.RequestFocusEquipSlots
	// void RequestFocusEquipSlots();                                                                                        // [0xbe5f500] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.RefreshCraftingSort
	// void RefreshCraftingSort();                                                                                           // [0xbe5f354] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.OnMulchRestrictionTextShown
	// void OnMulchRestrictionTextShown(bool bShown);                                                                        // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.MarkAllItemsAsSeen
	// void MarkAllItemsAsSeen();                                                                                            // [0xbe5ecbc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.IsSwitchPanelAvailable
	// bool IsSwitchPanelAvailable();                                                                                        // [0xbe5eb7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.IsSelectedItem
	// bool IsSelectedItem(class UFortItem* Item);                                                                           // [0xbe5eac8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HasUnlockedStorageSlots
	// bool HasUnlockedStorageSlots();                                                                                       // [0xa351960] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleSetOfItemsToMulchChangedBP
	// void HandleSetOfItemsToMulchChangedBP();                                                                              // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleQuickBarChangedBP
	// void HandleQuickBarChangedBP(EFortQuickBars QuickBarType);                                                            // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleItemBeginDrag
	// void HandleItemBeginDrag(class UObject* Item);                                                                        // [0xbe5e0dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleInventoryUpdatedEvent
	// void HandleInventoryUpdatedEvent();                                                                                   // [0xbe5e0c8] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleFocusEquipSlotsBP
	// void HandleFocusEquipSlotsBP();                                                                                       // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleFilterTabSelected
	// void HandleFilterTabSelected(FName TabNameID);                                                                        // [0xbe5def4] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleFilterTabButtonCreated
	// void HandleFilterTabButtonCreated(FName TabNameID, class UCommonButtonBase* TabButton);                               // [0xa351340] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleDifferentSortTypeSetBP
	// void HandleDifferentSortTypeSetBP();                                                                                  // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleDifferentItemManagementModeSetBP
	// void HandleDifferentItemManagementModeSetBP();                                                                        // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleDifferentFrontendInventoryFilterSetBP
	// void HandleDifferentFrontendInventoryFilterSetBP();                                                                   // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleDifferentFilterSetBP
	// void HandleDifferentFilterSetBP();                                                                                    // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleCustomInventoryFilterChanged
	// void HandleCustomInventoryFilterChanged();                                                                            // [0xbe5dbf0] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleCursorModeChangedBP
	// void HandleCursorModeChangedBP(bool bCursorModeEnabled, FName ActionName, class UUserWidget* CursorModeContentWidget); // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleCursorModeChanged
	// void HandleCursorModeChanged(bool bCursorModeEnabled, FName ActionName, class UUserWidget* CursorModeContentWidget);  // [0xbe5dae8] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleCraftItemStarted
	// void HandleCraftItemStarted();                                                                                        // [0xbe5dad4] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.GetUpgradeItemDefinitionsForCurrentInventory
	// TArray<UFortItemDefinition*> GetUpgradeItemDefinitionsForCurrentInventory();                                          // [0xbe5d160] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.GetSupportedSortTypesForCurrentInventory
	// TArray<EInventoryContentSortType> GetSupportedSortTypesForCurrentInventory();                                         // [0xbe5d124] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.GetShouldPrioritizeFavorites
	// bool GetShouldPrioritizeFavorites();                                                                                  // [0xa350d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.GetQualifiedFilterDisplayName
	// FText GetQualifiedFilterDisplayName();                                                                                // [0xbe5cea0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.CycleSortType
	// void CycleSortType();                                                                                                 // [0xbe5ba5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.CanDragItems
	// bool CanDragItems();                                                                                                  // [0xa3504a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.AdvanceSelection
	// void AdvanceSelection();                                                                                              // [0xbe5b204] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.AddItemStackToMulch
	// void AddItemStackToMulch(class UFortItem* Item, int32_t Count);                                                       // [0xa34fc4c] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW
/// Size: 0x0070 (0x001520 - 0x001590)
class UFortItemManagementItemTileButton_STW : public UFortItemTileButton
{ 
public:
	SDK_UNDEFINED(8,15028) /* TWeakObjectPtr<UFortItemManagementScreen_STW*> */ __um(HostItemManagementScreen);    // 0x1518   (0x0008)  
	bool                                               HasTheItemToDetail;                                         // 0x1520   (0x0001)  
	bool                                               HasTheItemToCompareDetailsWith;                             // 0x1521   (0x0001)  
	bool                                               HasAnItemMarkedForMulching;                                 // 0x1522   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x1523   (0x0001)  MISSED
	int32_t                                            MulchCount;                                                 // 0x1524   (0x0004)  
	class UOverlay*                                    NotCraftableOverlay;                                        // 0x1528   (0x0008)  
	class UFortDynamicEntryBox*                        EquipSlotOverlay;                                           // 0x1530   (0x0008)  
	class UMenuAnchor*                                 PopupMenuAnchor;                                            // 0x1538   (0x0008)  
	bool                                               ShowCollectionBookIndicator;                                // 0x1540   (0x0001)  
	bool                                               ShowRefundIndicator;                                        // 0x1541   (0x0001)  
	unsigned char                                      UnknownData01_5[0x46];                                      // 0x1542   (0x0046)  MISSED
	class UFortInventoryContext*                       InventoryContext;                                           // 0x1588   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.UpdateEquipSlotOverlay
	// void UpdateEquipSlotOverlay(int32_t CurrentSlotIndex);                                                                // [0xbe61970] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.PopulateEquipSlotOverlay
	// void PopulateEquipSlotOverlay();                                                                                      // [0xbe5f2c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.OnSlotItemComplete
	// void OnSlotItemComplete(class UFortAccountItem* SlottedItem, FName SlotId);                                           // [0xbe5eda4] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.IsValidEquipSlotOverlayIndex
	// bool IsValidEquipSlotOverlayIndex(int32_t SlotIndex);                                                                 // [0xbe5ec28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleShowRefundIndicatorChanged
	// void HandleShowRefundIndicatorChanged();                                                                              // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleShowCollectionBookIndicatorChanged
	// void HandleShowCollectionBookIndicatorChanged();                                                                      // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleItemMulchStateChanged
	// void HandleItemMulchStateChanged();                                                                                   // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleItemChangedBP
	// void HandleItemChangedBP();                                                                                           // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleHasItemToDetailChanged
	// void HandleHasItemToDetailChanged();                                                                                  // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleHasItemToCompareDetailsWithChanged
	// void HandleHasItemToCompareDetailsWithChanged();                                                                      // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleEquipSlotChanged
	// void HandleEquipSlotChanged(int32_t EquipSlot);                                                                       // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleDifferentItemManagementModeSetBP
	// void HandleDifferentItemManagementModeSetBP();                                                                        // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.GetPopupMenu
	// class UUserWidget* GetPopupMenu();                                                                                    // [0xa38d900] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.GetItemManagementMode
	// EFortItemManagementMode GetItemManagementMode();                                                                      // [0xbe5cb30] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.GetHomebaseSquadSlotForItem
	// FHomebaseSquadSlotId GetHomebaseSquadSlotForItem();                                                                   // [0xa38d534] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortItemManagementItemDetailsPanel_STW
/// Size: 0x0020 (0x0003C8 - 0x0003E8)
class UFortItemManagementItemDetailsPanel_STW : public UFortItemDetailsHostPanel
{ 
public:
	bool                                               HasItemMarkedForMulching;                                   // 0x03C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x03C9   (0x0003)  MISSED
	SDK_UNDEFINED(8,15029) /* TWeakObjectPtr<UFortItemManagementScreen_STW*> */ __um(HostItemManagementScreen);    // 0x03CC   (0x0008)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x03D4   (0x000C)  MISSED
	class UFortInventoryContext*                       InventoryContext;                                           // 0x03E0   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemManagementItemDetailsPanel_STW.HandleHostSet
	// void HandleHostSet();                                                                                                 // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemDetailsPanel_STW.HandleHasItemMarkedForMulchingChanged
	// void HandleHasItemMarkedForMulchingChanged();                                                                         // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemDetailsPanel_STW.GetAmmoTypeItemDefinitions
	// TArray<UFortAmmoItemDefinition*> GetAmmoTypeItemDefinitions();                                                        // [0xa38c700] Final|Native|Static|Protected|BlueprintCallable|BlueprintPure 
};

/// Class /Script/SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW
/// Size: 0x0028 (0x0002E8 - 0x000310)
class UFortItemManagementMulchDetailsPanel_STW : public UCommonUserWidget
{ 
public:
	class UFortItemQuantityListBase*                   ResourceList;                                               // 0x02E8   (0x0008)  
	SDK_UNDEFINED(16,15030) /* TScriptInterface<Class> */ __um(HostItemManagementMulchPanel);                      // 0x02F0   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0300   (0x0008)  MISSED
	class UFortInventoryContext*                       InventoryContext;                                           // 0x0308   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.IsSpaceAvailableForMulch
	// bool IsSpaceAvailableForMulch();                                                                                      // [0xbe5eb58] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.HandleSetOfItemsToMulchChangedBP
	// void HandleSetOfItemsToMulchChangedBP();                                                                              // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.HandleHostSet
	// void HandleHostSet();                                                                                                 // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.GetItemsToMulch
	// TArray<UFortItem*> GetItemsToMulch();                                                                                 // [0xa38d790] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.GetItemCountsToMulch
	// TArray<int32_t> GetItemCountsToMulch();                                                                               // [0xa38d68c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.CommitMulch
	// void CommitMulch();                                                                                                   // [0xa38bf90] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortItemManagementModeDetailsPanel_STW
/// Size: 0x0030 (0x0002E8 - 0x000318)
class UFortItemManagementModeDetailsPanel_STW : public UCommonUserWidget
{ 
public:
	class UCommonWidgetSwitcherLegacy*                 ModeWidgetSwitcher;                                         // 0x02E8   (0x0008)  
	class UFortItemDetailsActivatablePanel_STW*        DetailsModeItemDetailsPanel;                                // 0x02F0   (0x0008)  
	class UFortItemDetailsActivatablePanel_STW*        ComparisonModeItemDetailsPanel;                             // 0x02F8   (0x0008)  
	class UFortItemDetailsActivatablePanel_STW*        MulchModeItemDetailsPanel;                                  // 0x0300   (0x0008)  
	SDK_UNDEFINED(8,15031) /* TWeakObjectPtr<UFortItemManagementScreen_STW*> */ __um(HostItemManagementScreen);    // 0x0308   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0310   (0x0008)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemManagementModeDetailsPanel_STW.HandleHostSet
	// void HandleHostSet();                                                                                                 // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementModeDetailsPanel_STW.HandleDifferentItemManagementModeSetBP
	// void HandleDifferentItemManagementModeSetBP();                                                                        // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementModeDetailsPanel_STW.GetItemManagementMode
	// EFortItemManagementMode GetItemManagementMode();                                                                      // [0xbe5cb54] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortItemManagementScreen_STW
/// Size: 0x0208 (0x000400 - 0x000608)
class UFortItemManagementScreen_STW : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0400   (0x0008)  MISSED
	SDK_UNDEFINED(16,15032) /* FMulticastInlineDelegate */ __um(OnItemViewRefreshed);                              // 0x0408   (0x0010)  
	unsigned char                                      UnknownData01_5[0xC0];                                      // 0x0418   (0x00C0)  MISSED
	EFortItemManagementMode                            Mode;                                                       // 0x04D8   (0x0001)  
	EFortFrontendInventoryFilter                       FrontendInventoryFilter;                                    // 0x04D9   (0x0001)  
	bool                                               bReadOnlyModeWIFE;                                          // 0x04DA   (0x0001)  
	bool                                               ConsumeItemRequestInProgress;                               // 0x04DB   (0x0001)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x04DC   (0x0004)  MISSED
	class UFortItemManagementInventoryPanel_STW*       InventoryPanel;                                             // 0x04E0   (0x0008)  
	class UFortItemManagementModeDetailsPanel_STW*     ModeDetailsPanel;                                           // 0x04E8   (0x0008)  
	SDK_UNDEFINED(8,15033) /* TWeakObjectPtr<UFortItem*> */ __um(ItemToDetail);                                    // 0x04F0   (0x0008)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x04F8   (0x0008)  MISSED
	class UClass*                                      MulchConfirmationModalClass;                                // 0x0500   (0x0008)  
	class UClass*                                      CustomFilterModalClass;                                     // 0x0508   (0x0008)  
	unsigned char                                      UnknownData04_5[0x18];                                      // 0x0510   (0x0018)  MISSED
	class UFortMulchConfirmationModalWidget*           MulchConfirmationModal;                                     // 0x0528   (0x0008)  
	class UFortItemManagementCustomFilterModalWidget_STW* CustomFilterModal;                                       // 0x0530   (0x0008)  
	SDK_UNDEFINED(80,15034) /* TMap<EInventoryContentSortType, FText> */ __um(SortLabels);                         // 0x0538   (0x0050)  
	SDK_UNDEFINED(80,15035) /* TMap<FName, FText> */   __um(MoreLabels);                                           // 0x0588   (0x0050)  
	unsigned char                                      UnknownData05_5[0x8];                                       // 0x05D8   (0x0008)  MISSED
	class UAthenaCustomizationPickerSortAndFilterBlade* Blade_SortAndMore;                                         // 0x05E0   (0x0008)  
	unsigned char                                      UnknownData06_5[0x8];                                       // 0x05E8   (0x0008)  MISSED
	class UFortInventoryContext*                       InventoryContext;                                           // 0x05F0   (0x0008)  
	unsigned char                                      UnknownData07_6[0x10];                                      // 0x05F8   (0x0010)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.UpdateSorts
	// void UpdateSorts();                                                                                                   // [0xbe61b88] Final|Native|Private|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.TransferItem
	// void TransferItem(class UFortItem* Item);                                                                             // [0xbe61308] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.ToggleSortAndMoreBlade
	// void ToggleSortAndMoreBlade();                                                                                        // [0xbe61298] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.ToggleShowRefundIndicator
	// void ToggleShowRefundIndicator();                                                                                     // [0xbe6126c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.ToggleShowCollectionBookIndicator
	// void ToggleShowCollectionBookIndicator();                                                                             // [0xbe61240] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.ShowWarningReadOnlyWIFE
	// void ShowWarningReadOnlyWIFE(bool Force);                                                                             // [0x2177018] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.ShowMulchConfirmationModal
	// void ShowMulchConfirmationModal();                                                                                    // [0xbe61014] Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.ShowCustomFilterModal
	// void ShowCustomFilterModal();                                                                                         // [0xbe60fec] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.SetFrontendInventoryFilter
	// void SetFrontendInventoryFilter(EFortFrontendInventoryFilter FrontendInventoryFilter);                                // [0xbe6008c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.SetConsumeItemRequestInProgress
	// void SetConsumeItemRequestInProgress(bool InProgress);                                                                // [0xbe5fef8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.RequestPopupMenuForSelectedItem
	// void RequestPopupMenuForSelectedItem();                                                                               // [0xbe5f544] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.OpenCraftingOptions
	// void OpenCraftingOptions(class UFortSchematicItem* SchematicItem);                                                    // [0xbe5ef60] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.OpenAutoMulchOptions
	// void OpenAutoMulchOptions();                                                                                          // [0xbe5ef4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.NotifyPanelDeactivated
	// void NotifyPanelDeactivated();                                                                                        // [0xbe5ed6c] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.NotifyPanelActivated
	// void NotifyPanelActivated();                                                                                          // [0xbe5ed34] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.MarkAllItemsAsSeen
	// void MarkAllItemsAsSeen();                                                                                            // [0xbe5ecd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.IsScreenWIFE
	// bool IsScreenWIFE();                                                                                                  // [0xbe5eaa4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.InspectItem
	// void InspectItem(class UFortItem* Item);                                                                              // [0xbe5e858] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HideMulchConfirmationModal
	// void HideMulchConfirmationModal();                                                                                    // [0xbe5e820] Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HideCustomFilterModal
	// void HideCustomFilterModal();                                                                                         // [0xbe5e7cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HasItemBeenSeen
	// bool HasItemBeenSeen(class UFortAccountItem* AccountItem);                                                            // [0x96a320c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HasDefaultItemsToMulch
	// bool HasDefaultItemsToMulch();                                                                                        // [0xbe5e7a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleTransferItemBP
	// void HandleTransferItemBP(class UFortItem* Item);                                                                     // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleOpenCraftingOptionsBP
	// void HandleOpenCraftingOptionsBP(class UFortSchematicItem* SchematicItem);                                            // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleOpenAutoMulchOptionsBP
	// void HandleOpenAutoMulchOptionsBP();                                                                                  // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleMulchQuantitySelection
	// void HandleMulchQuantitySelection(class UFortItem* Item);                                                             // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleMoreButtonSelected
	// void HandleMoreButtonSelected(FName MoreNameId, class UCommonButtonBase* NewButton);                                  // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleItemToDetailChanged
	// void HandleItemToDetailChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);                       // [0xbe5e248] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleItemToCompareWithChanged
	// void HandleItemToCompareWithChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);                  // [0xbe5e15c] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleInspectItemBP
	// void HandleInspectItemBP(class UFortItem* Item);                                                                      // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleEquipItemBP
	// void HandleEquipItemBP(class UFortItem* Item);                                                                        // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleDropItemBP
	// void HandleDropItemBP(class UFortItem* Item);                                                                         // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleDifferentItemManagementModeSetBP
	// void HandleDifferentItemManagementModeSetBP();                                                                        // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleCraftItemBP
	// void HandleCraftItemBP(class UFortSchematicItem* SchematicItem, EFortItemTier RequestedTier, int32_t CraftCount);     // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleCraftAndSlotItemBP
	// void HandleCraftAndSlotItemBP(class UFortSchematicItem* SchematicItem, EFortItemTier RequestedTier, int32_t CraftCount); // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleConsumeItemBP
	// void HandleConsumeItemBP(class UFortConsumableAccountItem* ConsumableItem);                                           // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.GuardActionForReadOnlyWIFE
	// bool GuardActionForReadOnlyWIFE();                                                                                    // [0xbe5d860] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.GetShouldShowRefundIndicator
	// bool GetShouldShowRefundIndicator();                                                                                  // [0xbe5d10c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.GetShouldShowCollectionBookIndicator
	// bool GetShouldShowCollectionBookIndicator();                                                                          // [0xbe5d0f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.GetItemToDetail
	// class UFortItem* GetItemToDetail();                                                                                   // [0xbe5cbe4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.GetItemToCompareDetailsWith
	// class UFortItem* GetItemToCompareDetailsWith();                                                                       // [0xbe5cbc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.EquipItem
	// void EquipItem(class UFortItem* Item);                                                                                // [0xbe5bffc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.EnterMulchModeForAutoMulch
	// void EnterMulchModeForAutoMulch();                                                                                    // [0xbe5bfe8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.EnterMulchMode
	// void EnterMulchMode(class UFortItem* ItemToMulch);                                                                    // [0xbe5be80] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.EnterDetailsMode
	// void EnterDetailsMode(class UFortItem* ItemToDetail);                                                                 // [0xbe5be00] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.EnterComparisonMode
	// void EnterComparisonMode(class UFortItem* ItemToCompareDetailsWith);                                                  // [0xbe5bcec] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.DropItem
	// void DropItem(class UFortItem* Item);                                                                                 // [0xbe5bbe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.CycleSortType
	// void CycleSortType();                                                                                                 // [0xbe5ba70] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.CraftItem
	// void CraftItem(class UFortSchematicItem* SchematicItem, EFortItemTier RequestedTier, int32_t CraftCount);             // [0xbe5b964] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.CraftAndSlotItem
	// void CraftAndSlotItem(class UFortSchematicItem* SchematicItem, EFortItemTier RequestedTier, int32_t CraftCount);      // [0xbe5b86c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.ConsumeItem
	// void ConsumeItem(class UFortConsumableAccountItem* ConsumableItem);                                                   // [0xbe5b7d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.CanRequestPopupMenuForSelectedItem
	// bool CanRequestPopupMenuForSelectedItem();                                                                            // [0xbe5b6a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.CanEquipItem
	// bool CanEquipItem(class UFortItem* Item);                                                                             // [0xa38bccc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.CancelInventoryPanelTileViewRefresh
	// void CancelInventoryPanelTileViewRefresh();                                                                           // [0xbe5b6c0] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.MainMenu_STW
/// Size: 0x0130 (0x000400 - 0x000530)
class UMainMenu_STW : public UCommonActivatableWidget
{ 
public:
	SDK_UNDEFINED(24,15036) /* FText */                __um(DefaultHelpText);                                      // 0x0400   (0x0018)  
	class UCommonTextBlock*                            Text_CountDownTimer;                                        // 0x0418   (0x0008)  
	class UCommonButtonBase*                           Button_LeaveExperience;                                     // 0x0420   (0x0008)  
	class UCommonUserWidget*                           Button_Leave;                                               // 0x0428   (0x0008)  
	class UCommonTextBlock*                            ContextualHelpText;                                         // 0x0430   (0x0008)  
	class UCommonButtonBase*                           Button_BackBoard;                                           // 0x0438   (0x0008)  
	class UBackgroundBlur*                             BackgroundBlur;                                             // 0x0440   (0x0008)  
	class UBorder*                                     BackgroundDarkener;                                         // 0x0448   (0x0008)  
	class UCommonButtonBase*                           Button_ReportPlayer;                                        // 0x0450   (0x0008)  
	class UCommonButtonBase*                           Button_Logout;                                              // 0x0458   (0x0008)  
	class UCommonButtonBase*                           Button_Support;                                             // 0x0460   (0x0008)  
	class UCommonButtonBase*                           Button_Exit;                                                // 0x0468   (0x0008)  
	class UCommonButtonBase*                           Button_Settings;                                            // 0x0470   (0x0008)  
	FDataTableRowHandle                                CloseMenuAction;                                            // 0x0478   (0x0010)  
	FDataTableRowHandle                                SwitchProfileAction;                                        // 0x0488   (0x0010)  
	class UClass*                                      SettingsScreenClass;                                        // 0x0498   (0x0008)  
	SDK_UNDEFINED(24,15037) /* FText */                __um(LogoutTitle);                                          // 0x04A0   (0x0018)  
	SDK_UNDEFINED(24,15038) /* FText */                __um(LogoutDescription);                                    // 0x04B8   (0x0018)  
	SDK_UNDEFINED(24,15039) /* FText */                __um(ExitTitle);                                            // 0x04D0   (0x0018)  
	SDK_UNDEFINED(24,15040) /* FText */                __um(ExitDescription);                                      // 0x04E8   (0x0018)  
	bool                                               bIsMainMenuOpen;                                            // 0x0500   (0x0001)  
	unsigned char                                      UnknownData00_5[0x27];                                      // 0x0501   (0x0027)  MISSED
	class UFortCampaignTabsScreenBase*                 MainTabsScreen;                                             // 0x0528   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.MainMenu_STW.TryShowPrimaryContent
	// void TryShowPrimaryContent(TWeakObjectPtr<UClass*>& ContentWidgetClass);                                              // [0xbe61428] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.MainMenu_STW.TryShowModal
	// void TryShowModal(TWeakObjectPtr<UClass*>& ModalWidgetClass);                                                         // [0xbe61388] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.MainMenu_STW.ShouldShowLeaveExperienceButton
	// bool ShouldShowLeaveExperienceButton();                                                                               // [0xbe60fc8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.MainMenu_STW.IsActiveTabMainShop
	// bool IsActiveTabMainShop();                                                                                           // [0xbe5e8d8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortUIStateWidget_STWFrontend
/// Size: 0x0070 (0x000418 - 0x000488)
class UFortUIStateWidget_STWFrontend : public UFortUIStateWidgetBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0418   (0x0008)  MISSED
	class UTopBar_STW*                                 TopBar_STW;                                                 // 0x0420   (0x0008)  
	class UCommonUserWidget*                           BottomBar_STW;                                              // 0x0428   (0x0008)  
	class UFortActivatableChatWidget*                  ChatWidget_STW;                                             // 0x0430   (0x0008)  
	SDK_UNDEFINED(8,15041) /* TWeakObjectPtr<UFortCampaignTabsScreenBase*> */ __um(MainTabsScreen);                // 0x0438   (0x0008)  
	class UClass*                                      PlayerBannedScreenClass;                                    // 0x0440   (0x0008)  
	TArray<class UClass*>                              ScriptedActionsToRegister;                                  // 0x0448   (0x0010)  
	TArray<EFortStoreState>                            DeferredSquadAutoSlottingStoreStates;                       // 0x0458   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0468   (0x0020)  MISSED
};

/// Class /Script/SaveTheWorldUI.FortUIStateWidget_STWJoinServer
/// Size: 0x0028 (0x000418 - 0x000440)
class UFortUIStateWidget_STWJoinServer : public UFortUIStateWidgetBase
{ 
public:
	class UFortRejoinWindowBase*                       RejoinWindow;                                               // 0x0418   (0x0008)  
	FDataTableRowHandle                                TutorialCompleteStatHandle;                                 // 0x0420   (0x0010)  
	class UClass*                                      RejoinWindowClass;                                          // 0x0430   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0438   (0x0008)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortUIStateWidget_STWJoinServer.OnShowTutorialDialog
	// void OnShowTutorialDialog();                                                                                          // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortUIStateWidget_STWJoinServer.HandleMatchmakingStateChange
	// void HandleMatchmakingStateChange(TEnumAsByte<EMatchmakingState> OldState, TEnumAsByte<EMatchmakingState> NewState);  // [0xbe5e5b8] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortUIStateWidget_STWJoinServer.HandleMatchmakingComplete
	// void HandleMatchmakingComplete(EMatchmakingCompleteResult MatchmakingResult);                                         // [0xbe5e4e8] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortUIStateWidget_STWJoinServer.HandleLobbyTimeUpdated
	// void HandleLobbyTimeUpdated(int32_t TimeRemaining);                                                                   // [0xbe5e468] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortUIStateWidget_STWJoinServer.HandleLobbyDisconnected
	// void HandleLobbyDisconnected();                                                                                       // [0xbe5e454] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.TopBar_STW
/// Size: 0x0098 (0x000400 - 0x000498)
class UTopBar_STW : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0400   (0x0010)  MISSED
	class UDataTable*                                  PhoenixSeasonDisplayInfoMap;                                // 0x0410   (0x0008)  
	SDK_UNDEFINED(80,15042) /* TMap<EFortUIFeatureStateReason, FText> */ __um(ReasonDescriptions);                 // 0x0418   (0x0050)  
	class UCommonButtonLegacy*                         Button_MainMenu;                                            // 0x0468   (0x0008)  
	class UMainMenu_STW*                               MainMenu;                                                   // 0x0470   (0x0008)  
	class UImage*                                      Image_ActiveInvitesNotification;                            // 0x0478   (0x0008)  
	class UCommonButtonLegacy*                         Button_Social;                                              // 0x0480   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0488   (0x0010)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.TopBar_STW.SetOnlineFriendsCount
	// void SetOnlineFriendsCount(int32_t NewOnlineFriendsCount);                                                            // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.TopBar_STW.OnSocialMenuOpened
	// void OnSocialMenuOpened();                                                                                            // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.TopBar_STW.OnShouldShowPhoenixDisplay
	// void OnShouldShowPhoenixDisplay(bool bShow, class UFortPhoenixSeasonDisplayInfo* PhoenixDisplayInfo);                 // [0x2177018] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutGadgetPicker
/// Size: 0x0020 (0x000420 - 0x000440)
class UFortHeroLoadoutGadgetPicker : public UFortItemPickerBase
{ 
public:
	SDK_UNDEFINED(8,15043) /* TWeakObjectPtr<UFortCampaignHeroLoadoutItem*> */ __um(TargetLoadoutItem);            // 0x0420   (0x0008)  
	int32_t                                            TargetSlotIndex;                                            // 0x0428   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x042C   (0x0004)  MISSED
	TArray<class UFortItem*>                           TemporaryGadgetItemInstances;                               // 0x0430   (0x0010)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutGadgetPicker.SetTargetLoadoutSlot
	// void SetTargetLoadoutSlot(class UFortCampaignHeroLoadoutItem* LoadoutItem, int32_t SlotIndex);                        // [0xbe60bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutGadgetPicker.HandleDifferentTargetLoadoutSlotSetBP
	// void HandleDifferentTargetLoadoutSlotSetBP();                                                                         // [0x2177018] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker
/// Size: 0x00C0 (0x000420 - 0x0004E0)
class UFortHeroLoadoutHeroPicker : public UFortItemPickerBase
{ 
public:
	class UFortTabListWidgetBase_Legacy*               ExternalFilterTabList;                                      // 0x0420   (0x0008)  
	SDK_UNDEFINED(8,15044) /* TWeakObjectPtr<UFortCampaignHeroLoadoutItem*> */ __um(TargetLoadoutItem);            // 0x0428   (0x0008)  
	FName                                              TargetSlotName;                                             // 0x0430   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0434   (0x0004)  MISSED
	class UClass*                                      FilterTabButtonType;                                        // 0x0438   (0x0008)  
	SDK_UNDEFINED(80,15045) /* TMap<FName, FFortTabButtonLabelInfo> */ __um(TabButtonLabelInfoMap);                // 0x0440   (0x0050)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0490   (0x0050)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker.UpdateFilterTabList
	// void UpdateFilterTabList(FName PreviouslySelectedTab);                                                                // [0xbe619f0] Final|Native|Private|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker.SetTargetLoadoutSlot
	// void SetTargetLoadoutSlot(class UFortCampaignHeroLoadoutItem* LoadoutItem, FName& SlotName);                          // [0xbe60c94] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker.HandleFilterTabSelectedBP
	// void HandleFilterTabSelectedBP(FName TabID);                                                                          // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker.HandleFilterTabSelected
	// void HandleFilterTabSelected(FName TabID);                                                                            // [0xbe5de74] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker.HandleDifferentTargetLoadoutSetBP
	// void HandleDifferentTargetLoadoutSetBP();                                                                             // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker.GetCurrentlySelectedTab
	// FName GetCurrentlySelectedTab();                                                                                      // [0xbe5c270] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker.AssociateFilterTabList
	// void AssociateFilterTabList(class UFortTabListWidgetBase_Legacy* ExternalFilterTabList);                              // [0xbe5b31c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutHeroPickerFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortHeroLoadoutHeroPickerFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase
/// Size: 0x01B0 (0x000400 - 0x0005B0)
class UFortHeroLoadoutScreenBase : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0400   (0x0008)  MISSED
	class UFortItemView*                               ItemViewObject;                                             // 0x0408   (0x0008)  
	FDataTableRowHandle                                BackInputAction;                                            // 0x0410   (0x0010)  
	FDataTableRowHandle                                HelpInputAction;                                            // 0x0420   (0x0010)  
	FDataTableRowHandle                                CancelInputAction;                                          // 0x0430   (0x0010)  
	FDataTableRowHandle                                ToggleDetailInputAction;                                    // 0x0440   (0x0010)  
	FDataTableRowHandle                                ClearAllInputAction;                                        // 0x0450   (0x0010)  
	FDataTableRowHandle                                ShowAllStatsInputAction;                                    // 0x0460   (0x0010)  
	FDataTableRowHandle                                InspectRootSlotsInputAction;                                // 0x0470   (0x0010)  
	FDataTableRowHandle                                CyclePickerSortModeInputAction;                             // 0x0480   (0x0010)  
	FDataTableRowHandle                                InspectPickerInputAction;                                   // 0x0490   (0x0010)  
	FDataTableRowHandle                                ToggleDescInputAction;                                      // 0x04A0   (0x0010)  
	unsigned char                                      UnknownData01_5[0xA0];                                      // 0x04B0   (0x00A0)  MISSED
	bool                                               AllowItemRotation;                                          // 0x0550   (0x0001)  
	bool                                               AllowItemZooming;                                           // 0x0551   (0x0001)  
	bool                                               AutomaticallyRegisterCameraView;                            // 0x0552   (0x0001)  
	bool                                               OverrideFixedCameras;                                       // 0x0553   (0x0001)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0554   (0x0004)  MISSED
	class UDataTable*                                  ActionDataTable;                                            // 0x0558   (0x0008)  
	class UWidgetAnimation*                            AnimationToHideItemInfo;                                    // 0x0560   (0x0008)  
	bool                                               bAutoShowDetails;                                           // 0x0568   (0x0001)  
	bool                                               bItemDetailsHidden;                                         // 0x0569   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x056A   (0x0002)  MISSED
	float                                              HideItemInfoHeaderDurationSecs;                             // 0x056C   (0x0004)  
	unsigned char                                      UnknownData04_6[0x40];                                      // 0x0570   (0x0040)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.ShowItemDetails
	// void ShowItemDetails();                                                                                               // [0xbe61000] Final|Native|Private|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.SetInputBindings
	// void SetInputBindings(bool ActivePickerBox, bool CommanderSlot, bool NoneSlot, bool CanClearAll);                     // [0xbe60338] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.SetHeroLoadout
	// void SetHeroLoadout(class UFortCampaignHeroLoadoutItem* HeroLoadout);                                                 // [0x2177018] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.PushItemInspectionScreen
	// void PushItemInspectionScreen(class UFortItem* ItemToInspect, EFortItemInspectionMode Mode, class UFortItemTileView* CycleTileView, bool bReadOnly, bool bAllowFavoriting, bool bIsTemporaryItem, bool bAllowRarityUpgrading); // [0xbe3700c] Final|Native|Private|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.OnVaultItemsViewed
	// void OnVaultItemsViewed(TArray<UFortItem*>& Items);                                                                   // [0xbe5eeb0] Final|Native|Private|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.OnItemPreviewChanged
	// void OnItemPreviewChanged(class AActor* NewPrefab, class UFortItem* NewItem);                                         // [0x696d714] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.IsLoadoutSwitchingAllowed
	// bool IsLoadoutSwitchingAllowed();                                                                                     // [0xbe5ea44] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.HideItemDetails
	// void HideItemDetails();                                                                                               // [0xbe5e80c] Final|Native|Private|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleToggleDescInputAction
	// void HandleToggleDescInputAction();                                                                                   // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleShowAllStatsInputAction
	// void HandleShowAllStatsInputAction();                                                                                 // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleInspectRootSlotsInputAction
	// void HandleInspectRootSlotsInputAction();                                                                             // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleInspectPickerInputAction
	// void HandleInspectPickerInputAction();                                                                                // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleHelpInputAction
	// void HandleHelpInputAction();                                                                                         // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleDetailsInputAction
	// void HandleDetailsInputAction();                                                                                      // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleCyclePickerInputAction
	// void HandleCyclePickerInputAction();                                                                                  // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleClearAllInputAction
	// void HandleClearAllInputAction();                                                                                     // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleBackInputAction
	// void HandleBackInputAction();                                                                                         // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.GetWidgetForFramingViewedItem
	// class UWidget* GetWidgetForFramingViewedItem();                                                                       // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.GetIsReadOnly
	// bool GetIsReadOnly();                                                                                                 // [0xbe5cad0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutScreenLegacy
/// Size: 0x0000 (0x0006B8 - 0x0006B8)
class UFortHeroLoadoutScreenLegacy : public UFortActivatablePanelWithItemPreview
{ 
public:


	/// Functions
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenLegacy.SetHeroLoadout
	// void SetHeroLoadout(class UFortCampaignHeroLoadoutItem* HeroLoadout);                                                 // [0x2177018] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenLegacy.IsLoadoutSwitchingAllowed
	// bool IsLoadoutSwitchingAllowed();                                                                                     // [0xbe5ea44] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenLegacy.GetIsReadOnly
	// bool GetIsReadOnly();                                                                                                 // [0xbe5cad0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutSlotButton
/// Size: 0x0040 (0x0014E0 - 0x001520)
class UFortHeroLoadoutSlotButton : public UCommonButtonLegacy
{ 
public:
	FName                                              SlotName;                                                   // 0x14E0   (0x0004)  
	int32_t                                            SlotIndex;                                                  // 0x14E4   (0x0004)  
	EHeroLoadoutSlotType                               SlotType;                                                   // 0x14E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x14E9   (0x0007)  MISSED
	SDK_UNDEFINED(16,15046) /* FMulticastInlineDelegate */ __um(OnRequestChangeHero);                              // 0x14F0   (0x0010)  
	SDK_UNDEFINED(16,15047) /* FMulticastInlineDelegate */ __um(OnContextMenuOpenChanged);                         // 0x1500   (0x0010)  
	class UMenuAnchor*                                 ContextMenuAnchor;                                          // 0x1510   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x1518   (0x0008)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutSlotButton.OnRequestChangeHero__DelegateSignature
	// void OnRequestChangeHero__DelegateSignature(class UFortHeroLoadoutSlotButton* SlotButton);                            // [0x2177018] MulticastDelegate|Public|Delegate 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutSlotButton.OnMenuOpenChangedEvent__DelegateSignature
	// void OnMenuOpenChangedEvent__DelegateSignature(class UFortHeroLoadoutSlotButton* SlotButton, bool bIsMenuOpen);       // [0x2177018] MulticastDelegate|Public|Delegate 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutSlotButton.IsContextMenuOpen
	// bool IsContextMenuOpen();                                                                                             // [0xbe5e964] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutSlotButton.HandleMenuOpenChanged
	// void HandleMenuOpenChanged(bool bIsMenuOpen);                                                                         // [0xbe5e68c] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutTeamPerkPicker
/// Size: 0x0008 (0x000420 - 0x000428)
class UFortHeroLoadoutTeamPerkPicker : public UFortItemPickerBase
{ 
public:
	SDK_UNDEFINED(8,15048) /* TWeakObjectPtr<UFortCampaignHeroLoadoutItem*> */ __um(TargetLoadoutItem);            // 0x0420   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutTeamPerkPicker.SetTargetLoadout
	// void SetTargetLoadout(class UFortCampaignHeroLoadoutItem* LoadoutItem);                                               // [0xbe60b50] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutTeamPerkPicker.HandleDifferentTargetLoadoutSetBP
	// void HandleDifferentTargetLoadoutSetBP();                                                                             // [0x2177018] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortCampaignTabsScreenBase
/// Size: 0x0078 (0x000400 - 0x000478)
class UFortCampaignTabsScreenBase : public UCommonActivatableWidget
{ 
public:
	SDK_UNDEFINED(80,15049) /* TMap<EFortUIFeature, FName> */ __um(FeaturesTabsMap);                               // 0x0400   (0x0050)  
	class UHorizontalBox*                              TopTabContainer;                                            // 0x0450   (0x0008)  
	class UFortTabListWidgetBase*                      TopTabList;                                                 // 0x0458   (0x0008)  
	class UClass*                                      MainTabSet;                                                 // 0x0460   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0468   (0x0008)  MISSED
	class UCommonAnimatedSwitcher*                     Switcher_TabContent;                                        // 0x0470   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase.UpdateItemShopButtonBang
	// void UpdateItemShopButtonBang(FName Tab);                                                                             // [0xbe61a70] Native|Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase.ShouldShowItemShopBang
	// bool ShouldShowItemShopBang();                                                                                        // [0xbe60f88] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase.HandleMainTabSelected
	// void HandleMainTabSelected(FName TabNameID);                                                                          // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase.HandleMainTabCreated
	// void HandleMainTabCreated(FName TabNameID, class UCommonButtonBase* TabButton);                                       // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase.HandleFeatureStateChanged
	// void HandleFeatureStateChanged(EFortUIFeature ChangedFeature, EFortUIFeatureState NewState, EFortUIFeatureStateReason Reason); // [0xbe5dc84] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase.ConstructTabs
	// void ConstructTabs();                                                                                                 // [0xbe5b7b0] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy
/// Size: 0x0070 (0x000538 - 0x0005A8)
class UFortCampaignTabsScreenBase_Legacy : public UCommonActivatablePanelLegacy
{ 
public:
	SDK_UNDEFINED(80,15050) /* TMap<EFortUIFeature, FName> */ __um(FeaturesTabsMap);                               // 0x0538   (0x0050)  
	class UHorizontalBox*                              TopTabContainer;                                            // 0x0588   (0x0008)  
	class UFortTabListWidgetBase_Legacy*               TopTabList;                                                 // 0x0590   (0x0008)  
	class UClass*                                      MainTabSet;                                                 // 0x0598   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x05A0   (0x0008)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy.HandleMainTabSelected
	// void HandleMainTabSelected(FName TabNameID);                                                                          // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy.HandleMainTabCreated
	// void HandleMainTabCreated(FName TabNameID, class UCommonButtonBase* TabButton);                                       // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy.HandleFeatureStateChanged
	// void HandleFeatureStateChanged(EFortUIFeature ChangedFeature, EFortUIFeatureState NewState, EFortUIFeatureStateReason Reason); // [0xbe5dd7c] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy.HandleFeatureNavigateRequest
	// void HandleFeatureNavigateRequest(EFortUIFeature Feature);                                                            // [0xbe5dc04] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy.ConstructTabs
	// void ConstructTabs();                                                                                                 // [0xbe5b7c4] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.StoreCardObject
/// Size: 0x0020 (0x000028 - 0x000048)
class UStoreCardObject : public UObject
{ 
public:
	FCard                                              Card;                                                       // 0x0028   (0x0018)  
	int32_t                                            OriginalIndex;                                              // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/SaveTheWorldUI.FortStoreSummary
/// Size: 0x0048 (0x000538 - 0x000580)
class UFortStoreSummary : public UCommonActivatablePanelLegacy
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0538   (0x0008)  MISSED
	TArray<class UStoreCardObject*>                    StoreCardObjects;                                           // 0x0540   (0x0010)  
	class UCommonTileView*                             TileView;                                                   // 0x0550   (0x0008)  
	class UClass*                                      MulchConfirmationModalClass;                                // 0x0558   (0x0008)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0560   (0x0018)  MISSED
	class UFortMulchConfirmationModalWidget*           MulchConfirmationModal;                                     // 0x0578   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortStoreSummary.ShowMulchConfirmationModal
	// void ShowMulchConfirmationModal();                                                                                    // [0xbe61030] Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary.SetIsInChoiceSelectionMode
	// void SetIsInChoiceSelectionMode(bool InIsInChoiceSelectionMode);                                                      // [0xbe605f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary.SetCards
	// void SetCards(TArray<FCard>& Cards);                                                                                  // [0xbe5f838] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary.NotifyPanelDeactivated
	// void NotifyPanelDeactivated();                                                                                        // [0xbe5ed88] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary.NotifyPanelActivated
	// void NotifyPanelActivated();                                                                                          // [0xbe5ed50] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary.MarkDefaultItemsForMulch
	// void MarkDefaultItemsForMulch();                                                                                      // [0xbe5ecf8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary.HideMulchConfirmationModal
	// void HideMulchConfirmationModal();                                                                                    // [0xbe5e83c] Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary.HandleContextMenuOpenChangedBP
	// void HandleContextMenuOpenChangedBP(bool bIsOpen);                                                                    // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortStoreSummary.HandleContextMenuOpenChanged
	// void HandleContextMenuOpenChanged(bool bIsOpen);                                                                      // [0xbe5d9d4] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortStoreSummary.GetIsInChoiceSelectionMode
	// bool GetIsInChoiceSelectionMode();                                                                                    // [0xbe5cab8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortStoreSummary.FinalizeFavoriteStatus
	// void FinalizeFavoriteStatus();                                                                                        // [0xbe5c07c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary.CloseSummaryScreen
	// void CloseSummaryScreen();                                                                                            // [0x2177018] Event|Public|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortStoreSummaryItemButton
/// Size: 0x0050 (0x0014E0 - 0x001530)
class UFortStoreSummaryItemButton : public UCommonButtonLegacy
{ 
public:
	bool                                               HasAnItemMarkedForMulching;                                 // 0x14E0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2F];                                      // 0x14E1   (0x002F)  MISSED
	class UMenuAnchor*                                 PopupMenuAnchor;                                            // 0x1510   (0x0008)  
	class UStoreCardObject*                            StoreCardObject;                                            // 0x1518   (0x0008)  
	class UFortInventoryContext*                       InventoryContext;                                           // 0x1520   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x1528   (0x0008)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton.UpdateMulchListWithItem
	// void UpdateMulchListWithItem(bool bAddingItem);                                                                       // [0xbe61af4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton.SetStoreCardObject
	// void SetStoreCardObject(class UStoreCardObject* CardObject);                                                          // [0xbe60970] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton.HandleMenuOpenChanged
	// void HandleMenuOpenChanged(bool bIsOpen);                                                                             // [0xbe5e70c] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton.HandleItemMulchStateChanged
	// void HandleItemMulchStateChanged();                                                                                   // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton.GetStoreCardObject
	// class UStoreCardObject* GetStoreCardObject();                                                                         // [0x30be484] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton.GetPopupMenu
	// class UUserWidget* GetPopupMenu();                                                                                    // [0xbe5cd24] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy
/// Size: 0x0050 (0x0014E0 - 0x001530)
class UFortStoreSummaryItemButton_Legacy : public UCommonButtonLegacy
{ 
public:
	bool                                               HasAnItemMarkedForMulching;                                 // 0x14E0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2F];                                      // 0x14E1   (0x002F)  MISSED
	class UMenuAnchor*                                 PopupMenuAnchor;                                            // 0x1510   (0x0008)  
	class UStoreCardObject*                            StoreCardObject;                                            // 0x1518   (0x0008)  
	class UFortInventoryContext*                       InventoryContext;                                           // 0x1520   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x1528   (0x0008)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.UpdateMulchListWithItem
	// void UpdateMulchListWithItem(bool bAddingItem);                                                                       // [0xbe61af4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.SetStoreCardObject
	// void SetStoreCardObject(class UStoreCardObject* CardObject);                                                          // [0xbe60a60] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.OnContextMenuOpenChangedEvent__DelegateSignature
	// void OnContextMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);                                                  // [0x2177018] MulticastDelegate|Public|Delegate 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.HandleMenuOpenChanged
	// void HandleMenuOpenChanged(bool bIsOpen);                                                                             // [0xbe5e70c] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.HandleItemMulchStateChanged
	// void HandleItemMulchStateChanged();                                                                                   // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.GetStoreCardObject
	// class UStoreCardObject* GetStoreCardObject();                                                                         // [0x30be484] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.GetPopupMenu
	// class UUserWidget* GetPopupMenu();                                                                                    // [0xbe5cd24] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortStoreSummaryItemPopupMenu
/// Size: 0x0008 (0x000558 - 0x000560)
class UFortStoreSummaryItemPopupMenu : public UFortPopupMenu
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0558   (0x0008)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemPopupMenu.MulchItem
	// void MulchItem();                                                                                                     // [0xbe5ed0c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemPopupMenu.HandleItemChanged
	// void HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);                               // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemPopupMenu.GetHostButton
	// class UFortStoreSummaryItemButton* GetHostButton();                                                                   // [0xbe5ca70] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortStoreSummaryItemPopupMenu_Legacy
/// Size: 0x0008 (0x000558 - 0x000560)
class UFortStoreSummaryItemPopupMenu_Legacy : public UFortPopupMenu_Legacy
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0558   (0x0008)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemPopupMenu_Legacy.MulchItem
	// void MulchItem();                                                                                                     // [0xbe5ed20] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemPopupMenu_Legacy.HandleItemChanged
	// void HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);                               // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemPopupMenu_Legacy.GetHostButton
	// class UFortStoreSummaryItemButton_Legacy* GetHostButton();                                                            // [0xbe5ca94] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortStoreSummary_Legacy
/// Size: 0x0048 (0x000538 - 0x000580)
class UFortStoreSummary_Legacy : public UCommonActivatablePanelLegacy
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0538   (0x0008)  MISSED
	TArray<class UStoreCardObject*>                    StoreCardObjects;                                           // 0x0540   (0x0010)  
	class UCommonTileView*                             TileView;                                                   // 0x0550   (0x0008)  
	class UClass*                                      MulchConfirmationModalClass;                                // 0x0558   (0x0008)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0560   (0x0018)  MISSED
	class UFortMulchConfirmationModalWidget*           MulchConfirmationModal;                                     // 0x0578   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.ShowMulchConfirmationModal
	// void ShowMulchConfirmationModal();                                                                                    // [0xbe61030] Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.SetIsInChoiceSelectionMode
	// void SetIsInChoiceSelectionMode(bool InIsInChoiceSelectionMode);                                                      // [0xbe605f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.SetCards
	// void SetCards(TArray<FCard>& Cards);                                                                                  // [0xbe5f838] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.NotifyPanelDeactivated
	// void NotifyPanelDeactivated();                                                                                        // [0xbe5ed88] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.NotifyPanelActivated
	// void NotifyPanelActivated();                                                                                          // [0xbe5ed50] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.MarkDefaultItemsForMulch
	// void MarkDefaultItemsForMulch();                                                                                      // [0xbe5ecf8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.HideMulchConfirmationModal
	// void HideMulchConfirmationModal();                                                                                    // [0xbe5e83c] Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.HandleContextMenuOpenChangedBP
	// void HandleContextMenuOpenChangedBP(bool bIsOpen);                                                                    // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.HandleContextMenuOpenChanged
	// void HandleContextMenuOpenChanged(bool bIsOpen);                                                                      // [0xbe5da54] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.GetIsInChoiceSelectionMode
	// bool GetIsInChoiceSelectionMode();                                                                                    // [0xbe5cab8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.FinalizeFavoriteStatus
	// void FinalizeFavoriteStatus();                                                                                        // [0xbe5c0cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.CloseSummaryScreen
	// void CloseSummaryScreen();                                                                                            // [0x2177018] Event|Public|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutGadgetTileBase
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UFortHeroLoadoutGadgetTileBase : public UCommonUserWidget
{ 
public:
	class UCommonTextBlock*                            Text_GadgetName;                                            // 0x02E8   (0x0008)  
	class UCommonLazyImage*                            Image_Icon;                                                 // 0x02F0   (0x0008)  
	class URichTextBlock*                              RichText_Description;                                       // 0x02F8   (0x0008)  
	class UFortGadgetItemDefinition*                   GadgetToRepresent;                                          // 0x0300   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutGadgetTileBase.SetGadgetToRepresent
	// void SetGadgetToRepresent(class UFortGadgetItemDefinition* GadgetItemDefinition);                                     // [0xbe6010c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutGadgetTileBase.OnGadgetUpdated
	// void OnGadgetUpdated(bool bIsValidGadget);                                                                            // [0x2177018] Event|Public|BlueprintEvent 
};

/// Struct /Script/SaveTheWorldUI.FortInGamePerkDisplayData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFortInGamePerkDisplayData
{ 
	EFortHeroPerkDisplayType                           PerkDisplayType;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            Index;                                                      // 0x0004   (0x0004)  
	int32_t                                            Row;                                                        // 0x0008   (0x0004)  
	int32_t                                            Column;                                                     // 0x000C   (0x0004)  
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutInGameScreenBase
/// Size: 0x0050 (0x000538 - 0x000588)
class UFortHeroLoadoutInGameScreenBase : public UCommonActivatablePanelLegacy
{ 
public:
	TArray<FFortInGamePerkDisplayData>                 PerksDisplayData;                                           // 0x0538   (0x0010)  
	class UClass*                                      TileClass;                                                  // 0x0548   (0x0008)  
	class UScrollBox*                                  ScrollBox_Content;                                          // 0x0550   (0x0008)  
	class UFortItemDetailsHostPanel*                   ItemDetailsHostPanel_Header;                                // 0x0558   (0x0008)  
	class UGridPanel*                                  GridPanel_Perks;                                            // 0x0560   (0x0008)  
	class UFortHeroLoadoutGadgetTileBase*              GadgetTile_Gadget1;                                         // 0x0568   (0x0008)  
	class UFortHeroLoadoutGadgetTileBase*              GadgetTile_Gadget2;                                         // 0x0570   (0x0008)  
	TArray<class UFortHeroLoadoutGadgetTileBase*>      GadgetTiles;                                                // 0x0578   (0x0010)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutInGameScreenBase.OnPerkWidgetAdded
	// void OnPerkWidgetAdded(class UGridSlot* GridSlot);                                                                    // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutInGameScreenBase.GetGadgetDefinitionBySlot
	// class UFortGadgetItemDefinition* GetGadgetDefinitionBySlot(int32_t SlotIndex);                                        // [0xbe5c9e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutPerkTileBase
/// Size: 0x0088 (0x0002E8 - 0x000370)
class UFortHeroLoadoutPerkTileBase : public UCommonUserWidget
{ 
public:
	SDK_UNDEFINED(1,15051) /* TEnumAsByte<EFortBrushSize> */ __um(BrushSize);                                      // 0x02E8   (0x0001)  
	bool                                               bShowSummaryDescription;                                    // 0x02E9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x02EA   (0x0006)  MISSED
	class UCommonTextBlock*                            Text_PerkName;                                              // 0x02F0   (0x0008)  
	class URichTextBlock*                              Text_Description;                                           // 0x02F8   (0x0008)  
	class UFortLazyImage*                              Image_PerkIcon;                                             // 0x0300   (0x0008)  
	class UHorizontalBox*                              Hbox_PerkDetails;                                           // 0x0308   (0x0008)  
	SDK_UNDEFINED(24,15052) /* FText */                __um(ActiveText);                                           // 0x0310   (0x0018)  
	SDK_UNDEFINED(24,15053) /* FText */                __um(InactiveText);                                         // 0x0328   (0x0018)  
	float                                              InactiveOpacity;                                            // 0x0340   (0x0004)  
	float                                              ActiveOpacity;                                              // 0x0344   (0x0004)  
	class UFortAbilityKit*                             AbilityKit;                                                 // 0x0348   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0350   (0x0020)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutPerkTileBase.OnPerkInitialized
	// void OnPerkInitialized(EFortHeroPerkDisplayType InPerkType, bool bActive, bool bShowWarning);                         // [0x2177018] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortAlterationModOptinScreenBase
/// Size: 0x0018 (0x000538 - 0x000550)
class UFortAlterationModOptinScreenBase : public UCommonActivatablePanelLegacy
{ 
public:
	class UFortItem*                                   ItemToOptin;                                                // 0x0538   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0540   (0x0010)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortAlterationModOptinScreenBase.SetupItem
	// void SetupItem(class UFortItem* Item);                                                                                // [0xbe60f08] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortAlterationModOptinScreenBase.RequestClose
	// void RequestClose(bool bCancelled);                                                                                   // [0xbe5f3ac] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortAlterationModOptinScreenBase.OnSetupItem
	// void OnSetupItem();                                                                                                   // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortAlterationModOptinScreenBase.OnItemConversionComplete
	// void OnItemConversionComplete();                                                                                      // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortAlterationModOptinScreenBase.ConvertItemAlterations
	// void ConvertItemAlterations();                                                                                        // [0xbe5b858] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortAlterationModScreenBase
/// Size: 0x0060 (0x000570 - 0x0005D0)
class UFortAlterationModScreenBase : public UFortActivatablePanel
{ 
public:
	class UFortAlterationsWidget*                      AlterationsToEdit;                                          // 0x0570   (0x0008)  
	class UFortAlterationOptionsBase*                  AlterationSlotOptions;                                      // 0x0578   (0x0008)  
	class UFortItemDetailsHostPanel*                   ItemInspectionMainItemDetailsHostPanel;                     // 0x0580   (0x0008)  
	class UFortItemDetailsHostPanel*                   AlterationsExtraDetailsPanel;                               // 0x0588   (0x0008)  
	class UClass*                                      AlterationModOptinScreenClass;                              // 0x0590   (0x0008)  
	FDataTableRowHandle                                BackInputAction;                                            // 0x0598   (0x0010)  
	SDK_UNDEFINED(8,15054) /* TWeakObjectPtr<UFortAlterableItem*> */ __um(AlterableItem);                          // 0x05A8   (0x0008)  
	class UFortAlterationOption*                       CurrentAlterationOptionInternal;                            // 0x05B0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x05B8   (0x0018)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.SetItemForAlterationsModding
	// void SetItemForAlterationsModding(class UFortAlterableItem* InAlterableItem);                                         // [0xbe60670] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.RefreshItemAndAlterationsBP
	// void RefreshItemAndAlterationsBP();                                                                                   // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.OnItemSlotChanged
	// void OnItemSlotChanged(bool SelectedSlot);                                                                            // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.OnAlterationOptionChanged
	// void OnAlterationOptionChanged(class UFortAlterationOption* CurrentAlterationOption);                                 // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.OnAlterationModificationSucess
	// void OnAlterationModificationSucess(int32_t ModifiedSlotIndex);                                                       // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.OnAlterationModificationStarted
	// void OnAlterationModificationStarted();                                                                               // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.OnAlterationModificationCompleted
	// void OnAlterationModificationCompleted();                                                                             // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.HandleBackAction
	// void HandleBackAction(bool& bPassThrough);                                                                            // [0xbe5d948] Final|Native|Private|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.ConfirmSelection
	// void ConfirmSelection();                                                                                              // [0xbe5b79c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.CancelSelection
	// void CancelSelection();                                                                                               // [0xbe5b724] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.AreIngredientRequirementsMent
	// bool AreIngredientRequirementsMent(TArray<FFortItemQuantityPair>& RequiredIngredients);                               // [0xbe5b218] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortItemInspectionScreen
/// Size: 0x00F8 (0x0006B8 - 0x0007B0)
class UFortItemInspectionScreen : public UFortActivatablePanelWithItemPreview
{ 
public:
	EFortItemInspectionMode                            CurrentInspectMode;                                         // 0x06B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06B9   (0x0003)  MISSED
	SDK_UNDEFINED(8,15055) /* TWeakObjectPtr<UFortItem*> */ __um(InspectedItem);                                   // 0x06BC   (0x0008)  
	bool                                               UpgradeAllowed;                                             // 0x06C4   (0x0001)  
	bool                                               EvolveAllowed;                                              // 0x06C5   (0x0001)  
	bool                                               FavoriteAllowed;                                            // 0x06C6   (0x0001)  
	bool                                               RarityUpgradingAllowed;                                     // 0x06C7   (0x0001)  
	bool                                               IsPreviewing;                                               // 0x06C8   (0x0001)  
	bool                                               bHasSeenRefundHelpPrompt;                                   // 0x06C9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x06CA   (0x0006)  MISSED
	class UFortItemInspectCycleWidget*                 CycleWidget;                                                // 0x06D0   (0x0008)  
	FGameplayTagQuery                                  InspectAnimationTag;                                        // 0x06D8   (0x0048)  
	class UClass*                                      AlterationModOptinScreenClass;                              // 0x0720   (0x0008)  
	class UClass*                                      AlterationModScreenClass;                                   // 0x0728   (0x0008)  
	SDK_UNDEFINED(32,15056) /* TWeakObjectPtr<UDataTable*> */ __um(RefundDescriptionsDataTable);                   // 0x0730   (0x0020)  
	unsigned char                                      UnknownData02_6[0x60];                                      // 0x0750   (0x0060)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.SetItemToRepresent
	// void SetItemToRepresent(class UFortItem* Item);                                                                       // [0xbe60770] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.SetInspectionMode
	// void SetInspectionMode(EFortItemInspectionMode NewInspectMode);                                                       // [0xbe60570] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.SetAttemptingConversion
	// void SetAttemptingConversion(bool bIsAttemptingConversion);                                                           // [0xbe5f7b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.OpenItemInspect
	// void OpenItemInspect(class UFortItem* ItemToInspect, EFortItemInspectionMode Mode, bool ShouldAllowUpgrading, bool ShouldAllowEvolution, bool ShouldAllowFavorite, bool IsTemporaryItem, bool bAllowRarityUpgrading, int32_t QuantityOverride, class UFortItemTileView* TileViewWidget); // [0xbe5f004] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.IsItemSlottedInCollectionBook
	// bool IsItemSlottedInCollectionBook(class UFortItem* Item);                                                            // [0xbe5e998] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.HandleItemToInspectDestroyedBP
	// void HandleItemToInspectDestroyedBP();                                                                                // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.HandleItemToInspectDestroyed
	// void HandleItemToInspectDestroyed();                                                                                  // [0xbe5e440] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.HandleItemToInspectChangedBP
	// void HandleItemToInspectChangedBP(bool bWasFavoritedChanged);                                                         // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.HandleItemToInspectChanged
	// void HandleItemToInspectChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);                      // [0xbe5e334] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.HandleIsPreviewingChanged
	// void HandleIsPreviewingChanged();                                                                                     // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.HandleDifferentItemToInspectSetBP
	// void HandleDifferentItemToInspectSetBP();                                                                             // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.HandleDifferentInspectionModeSetBP
	// void HandleDifferentInspectionModeSetBP();                                                                            // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.GetRefundResultItem
	// class UFortAccountItem* GetRefundResultItem();                                                                        // [0xbe5cf28] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.GetRefundDescriptionText
	// FText GetRefundDescriptionText();                                                                                     // [0xbe5cee4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.GetItemQuantityOverride
	// int32_t GetItemQuantityOverride();                                                                                    // [0xbe5cb84] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.GetCycleWidget
	// class UFortItemInspectCycleWidget* GetCycleWidget();                                                                  // [0xbe5c2b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.DoesItemHaveLegacyAlterations
	// bool DoesItemHaveLegacyAlterations();                                                                                 // [0xbe5bb74] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.DoAlterationModification
	// void DoAlterationModification();                                                                                      // [0xbe5babc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortItemInspectCycleWidget
/// Size: 0x0050 (0x0002E8 - 0x000338)
class UFortItemInspectCycleWidget : public UCommonUserWidget
{ 
public:
	SDK_UNDEFINED(16,15057) /* FMulticastInlineDelegate */ __um(OnItemToRepresentChanged);                         // 0x02E8   (0x0010)  
	SDK_UNDEFINED(8,15058) /* TWeakObjectPtr<UFortItemTileView*> */ __um(ItemTileView);                            // 0x02F8   (0x0008)  
	SDK_UNDEFINED(8,15059) /* TWeakObjectPtr<UFortItem*> */ __um(ItemToRepresent);                                 // 0x0300   (0x0008)  
	FDataTableRowHandle                                PreviousItemActionRowHandle;                                // 0x0308   (0x0010)  
	FDataTableRowHandle                                NextItemActionRowHandle;                                    // 0x0318   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0328   (0x0010)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemInspectCycleWidget.SetupActionHandlers
	// void SetupActionHandlers();                                                                                           // [0xbe60ef4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemInspectCycleWidget.SetOwningItemInspectScreen
	// void SetOwningItemInspectScreen(class UFortItemInspectionScreen* ItemInspect);                                        // [0xbe607f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemInspectCycleWidget.SetItemToRepresent
	// void SetItemToRepresent(class UFortItem* NewItemToRepresent);                                                         // [0xbe606f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemInspectCycleWidget.SelectPreviousItem
	// void SelectPreviousItem();                                                                                            // [0xbe5f798] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemInspectCycleWidget.SelectNextItem
	// void SelectNextItem();                                                                                                // [0xbe5f780] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemInspectCycleWidget.SelectItemWithOffset
	// void SelectItemWithOffset(int32_t Offset);                                                                            // [0xbe5f700] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemInspectCycleWidget.OnItemCycled
	// void OnItemCycled(class UFortItem* OldItem, class UFortItem* NewItem, int32_t OffsetFromPreviousItem);                // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemInspectCycleWidget.GetItemWithOffset_BP
	// class UFortItem* GetItemWithOffset_BP(int32_t IndexOffset);                                                           // [0xbe5cc08] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortAlterationOption
/// Size: 0x0040 (0x0014E0 - 0x001520)
class UFortAlterationOption : public UCommonButtonLegacy
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x14E0   (0x0008)  MISSED
	FAlterationOption                                  AlterationOption;                                           // 0x14E8   (0x0030)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x1518   (0x0008)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortAlterationOption.Setup
	// void Setup(FAlterationOption& InAlterationOption, EFortAlterationOptionType InAlterationOptionType);                  // [0xbe60d64] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortAlterationOption.OnSetup
	// void OnSetup();                                                                                                       // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortAlterationOption.GetRequiredIngredients
	// TArray<FFortItemQuantityPair> GetRequiredIngredients();                                                               // [0xbe5cf4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortAlterationOption.GetNextPipCount
	// float GetNextPipCount(float MaxPipCount);                                                                             // [0xbe5cc94] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortAlterationOption.GetCurrentPipCount
	// float GetCurrentPipCount(float MaxPipCount);                                                                          // [0xbe5c1e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortAlterationOption.GetAlterationOptionType
	// EFortAlterationOptionType GetAlterationOptionType();                                                                  // [0xbe5c1c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortAlterationOption.GetAlterationDefinition
	// class UFortAlterationItemDefinition* GetAlterationDefinition();                                                       // [0xbe5c1a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortAlterationOptionsBase
/// Size: 0x00A0 (0x0002E8 - 0x000388)
class UFortAlterationOptionsBase : public UCommonUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x02E8   (0x0010)  MISSED
	class UClass*                                      AlterationOptionClass;                                      // 0x02F8   (0x0008)  
	class UCommonButtonGroupLegacy*                    AlterationOptionButtons;                                    // 0x0300   (0x0008)  
	unsigned char                                      UnknownData01_5[0x20];                                      // 0x0308   (0x0020)  MISSED
	class UFortAlterableItem*                          Item;                                                       // 0x0328   (0x0008)  
	int32_t                                            SlotIndex;                                                  // 0x0330   (0x0004)  
	bool                                               bUpgradeOptionExists;                                       // 0x0334   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0335   (0x0003)  MISSED
	FAlterationOption                                  UpgradeOption;                                              // 0x0338   (0x0030)  
	TArray<FAlterationOption>                          RespecOptions;                                              // 0x0368   (0x0010)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0378   (0x0010)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortAlterationOptionsBase.ProcessAlterationOptions
	// void ProcessAlterationOptions(bool bIntroAlterations);                                                                // [0xbe5f2d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortAlterationOptionsBase.OnItemChanged
	// void OnItemChanged(bool bIntroAlterations);                                                                           // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortAlterationOptionsBase.OnGenerateOption
	// void OnGenerateOption(EFortAlterationOptionType OptionType, class UFortAlterationOption* OptionWidget);               // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortAlterationOptionsBase.IsValidAlterationSlot
	// bool IsValidAlterationSlot();                                                                                         // [0xbe5ebfc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortAlterationOptionsBase.HandleAlterationsOptionSelected
	// void HandleAlterationsOptionSelected(class UCommonButtonLegacy* AlterationOptionButton, int32_t GroupIndex);          // [0xbe5d884] Final|Native|Public  
	// Function /Script/SaveTheWorldUI.FortAlterationOptionsBase.HandleAlterationsOptionHovered
	// void HandleAlterationsOptionHovered(class UCommonButtonLegacy* AlterationOptionButton, int32_t GroupIndex);           // [0xbe5d884] Final|Native|Public  
	// Function /Script/SaveTheWorldUI.FortAlterationOptionsBase.DoAlterationOptionsExist
	// bool DoAlterationOptionsExist(EFortAlterationOptionType OptionType);                                                  // [0xbe5bad0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortMissionActivationInfoSTW
/// Size: 0x0150 (0x000028 - 0x000178)
class UFortMissionActivationInfoSTW : public UObject
{ 
public:
	bool                                               bIsMultiplayer;                                             // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x77];                                      // 0x0029   (0x0077)  MISSED
	class AFortPlayerController*                       FortPC;                                                     // 0x00A0   (0x0008)  
	class AFortGameStateZone*                          GameStateZone;                                              // 0x00A8   (0x0008)  
	class UCurveFloat*                                 DifficultyIncreaseBluGloCurve;                              // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData01_6[0xC0];                                      // 0x00B8   (0x00C0)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.TimeSecondsToText
	// FText TimeSecondsToText(float InSeconds);                                                                             // [0xa40b540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.SubmitVote
	// void SubmitVote(EFortVoteType VoteType, bool bApprove);                                                               // [0xbe6104c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.RequestVote
	// void RequestVote(EFortVoteType VoteType, float VoteDuration, float FailedVoteLockOutDuration, EFortVoteArbitratorType ArbitratorType); // [0xbe5f5c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.IsVoteLocked
	// bool IsVoteLocked(EFortVoteType VoteType);                                                                            // [0xa40528c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.IsVoteActive
	// bool IsVoteActive(EFortVoteType VoteType);                                                                            // [0xa405200] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.IsPlayerVoteInstigator
	// bool IsPlayerVoteInstigator(EFortVoteType VoteType);                                                                  // [0xa405158] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.IsAnyVoteActive
	// bool IsAnyVoteActive();                                                                                               // [0xa405070] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.HasPlayerVoted
	// bool HasPlayerVoted(EFortVoteType VoteType);                                                                          // [0xa404f68] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.HandleTeamMemberRemoved
	// void HandleTeamMemberRemoved(int32_t RemovedIndex);                                                                   // [0xa404d0c] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.HandleTeamMemberAdded
	// void HandleTeamMemberAdded(FFortTeamMemberInfo NewInfo);                                                              // [0xa404b78] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.HandleGameplayVoteUpdated
	// void HandleGameplayVoteUpdated(EFortVoteType VoteType, EFortVoteStatus VoteStatus, int32_t VoteResult, TArray<FVoter>& Voters); // [0xbe5df74] Final|Native|Private|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetVoteTimeRemaining
	// float GetVoteTimeRemaining(EFortVoteType VoteType);                                                                   // [0xa404344] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetVoters
	// TArray<FVoter> GetVoters(EFortVoteType VoteType);                                                                     // [0xa4044a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetVoteCounts
	// void GetVoteCounts(EFortVoteType VoteType, int32_t& OutYesVoteCount, int32_t& OutNoVoteCount);                        // [0xa4041ec] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetStartObjectiveBluGloRequirement
	// int32_t GetStartObjectiveBluGloRequirement();                                                                         // [0xa404138] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetPrimaryMissionInfo
	// class UFortMissionInfo* GetPrimaryMissionInfo();                                                                      // [0xa404098] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetPrimaryMission
	// class AFortMission* GetPrimaryMission();                                                                              // [0xa404074] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetMissionVoteType
	// EFortVoteType GetMissionVoteType();                                                                                   // [0xa403d28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetMissionObjectiveTimeRemaining
	// float GetMissionObjectiveTimeRemaining();                                                                             // [0xa403d00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetLockoutTimeRemaining
	// FText GetLockoutTimeRemaining(EFortVoteType VoteType);                                                                // [0xa403bc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetInstigatorId
	// FUniqueNetIdRepl GetInstigatorId(EFortVoteType VoteType);                                                             // [0xa403b10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetIncreaseDifficultyBluGloRequirement
	// int32_t GetIncreaseDifficultyBluGloRequirement();                                                                     // [0xa403a78] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetDeltaRewards
	// void GetDeltaRewards(int32_t BaseDifficultyIncreaseTier, int32_t ComparedDifficultyIncreaseTier, TArray<FFortItemDelta>& DeltaRewards); // [0xa4032b8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetAvailableBluGloCount
	// int32_t GetAvailableBluGloCount();                                                                                    // [0xa40327c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetArbitratorType
	// EFortVoteArbitratorType GetArbitratorType(EFortVoteType VoteType);                                                    // [0xa4031e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.DoesPrimaryMissionContainTags
	// bool DoesPrimaryMissionContainTags(FGameplayTagContainer& Tags);                                                      // [0xa4010c4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.CanRequestVote
	// bool CanRequestVote(EFortVoteType VoteType);                                                                          // [0xa400dd4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortMissionActivationWidgetSTWPanel
/// Size: 0x0028 (0x0002E8 - 0x000310)
class UFortMissionActivationWidgetSTWPanel : public UCommonUserWidget
{ 
public:
	class UFortMissionActivationInfoSTW*               InfoObject;                                                 // 0x02E8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x02F0   (0x0020)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.SetInfoObject
	// void SetInfoObject(class UFortMissionActivationInfoSTW* NewInfoObject);                                               // [0xbe6018c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.OnVoteUpdatedBP
	// void OnVoteUpdatedBP(EFortVoteType VoteType);                                                                         // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.OnVoteLockoutChangedBP
	// void OnVoteLockoutChangedBP(EFortVoteType VoteType, bool bIsLocked);                                                  // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.OnMultiplayerChangedBP
	// void OnMultiplayerChangedBP(bool bIsMultiplayer);                                                                     // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.OnActiveVoteChangedBP
	// void OnActiveVoteChangedBP(EFortVoteType VoteType, bool bIsVoteActive, int32_t VoteResult);                           // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.InfoObjectUpdated
	// void InfoObjectUpdated();                                                                                             // [0x2177018] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW
/// Size: 0x0050 (0x000400 - 0x000450)
class UFortMissionActivationWidgetSTW : public UCommonActivatableWidget
{ 
public:
	class UFortMissionActivationInfoSTW*               InfoObject;                                                 // 0x0400   (0x0008)  
	FGameplayTagContainer                              ReadyUpObjectiveHandle;                                     // 0x0408   (0x0020)  
	class UCurveFloat*                                 DifficultyIncreaseBluGloCurve;                              // 0x0428   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0430   (0x0020)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW.RequestStartObjectiveState
	// void RequestStartObjectiveState();                                                                                    // [0xbe5f560] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW.RequestDifficultyIncreaseState
	// void RequestDifficultyIncreaseState();                                                                                // [0xbe5f488] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW.RequestDefaultState
	// void RequestDefaultState();                                                                                           // [0xbe5f42c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW.OnVoteLockoutChangedBP
	// void OnVoteLockoutChangedBP(EFortVoteType VoteType, bool bIsLocked);                                                  // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW.OnStateUpdated
	// void OnStateUpdated(EFortMissionActivationWidgetSTWState ActiveState, EFortMissionActivationWidgetSTWState PreviousState); // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW.OnMultiplayerChangedBP
	// void OnMultiplayerChangedBP(bool bIsMultiplayer);                                                                     // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW.OnActiveVoteChangedBP
	// void OnActiveVoteChangedBP(EFortVoteType VoteType, bool bIsVoteActive, int32_t VoteResult);                           // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW.GetCurrentState
	// EFortMissionActivationWidgetSTWState GetCurrentState();                                                               // [0x6f200a0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortOutpostScreen
/// Size: 0x0000 (0x000400 - 0x000400)
class UFortOutpostScreen : public UCommonActivatableWidget
{ 
public:


	/// Functions
	// Function /Script/SaveTheWorldUI.FortOutpostScreen.SetInputReflectorBoxVisibility
	// void SetInputReflectorBoxVisibility(bool bShow);                                                                      // [0xbe6049c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortCampaignPlayFlow
/// Size: 0x0000 (0x000400 - 0x000400)
class UFortCampaignPlayFlow : public UCommonActivatableWidget
{ 
public:
};

/// Class /Script/SaveTheWorldUI.FortJournalQuestDetails
/// Size: 0x0008 (0x0002E8 - 0x0002F0)
class UFortJournalQuestDetails : public UCommonUserWidget
{ 
public:
	class UFortQuestItem*                              CurrentQuest;                                               // 0x02E8   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.SetCurrentQuest
	// void SetCurrentQuest(class UFortQuestItem* InCurrentQuest);                                                           // [0xbe5ff8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.RegisterEndSpokenDialogEvent
	// void RegisterEndSpokenDialogEvent();                                                                                  // [0xbe5f368] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.OnEndSpokenDialog
	// void OnEndSpokenDialog();                                                                                             // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.HandleCurrentQuestChangedBP
	// void HandleCurrentQuestChangedBP();                                                                                   // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.GetVisibleObjectives
	// void GetVisibleObjectives(TArray<UFortQuestObjectiveInfo*>& VisibleObjectives);                                       // [0xbe5d1a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.GetRewards
	// void GetRewards(TArray<FFortItemInstanceQuantityPair>& OutRewards, TArray<FFortItemInstanceQuantityPair>& OutSelectableRewards); // [0xbe5cfe0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.GetFutureObjectives
	// void GetFutureObjectives(TArray<UFortQuestObjectiveInfo*>& FutureObjectives);                                         // [0xbe5c324] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.GetActiveMissionTileType
	// EFortTheaterMapTileType GetActiveMissionTileType();                                                                   // [0xbe5c11c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.CanPlayQuest
	// bool CanPlayQuest();                                                                                                  // [0xbe5b67c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.CanPartyLeaderPlayQuest
	// bool CanPartyLeaderPlayQuest();                                                                                       // [0xbe5b658] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.CanGotoQuest
	// bool CanGotoQuest();                                                                                                  // [0xbe5b62c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortJournalQuestProgressBar
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortJournalQuestProgressBar : public UCommonUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x02E8   (0x0008)  MISSED
	SDK_UNDEFINED(8,15060) /* TWeakObjectPtr<UFortQuestObjectiveInfo*> */ __um(QuestObjectiveInfo);                // 0x02F0   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortJournalQuestProgressBar.GetProgressDetails
	// void GetProgressDetails(FText& OutNumerator, FText& OutDenominator, float& OutFraction);                              // [0xbe5cd48] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortLayoutQuestNode
/// Size: 0x0028 (0x0002E8 - 0x000310)
class UFortLayoutQuestNode : public UCommonUserWidget
{ 
public:
	class UFortQuestMapQuestTile*                      QuestTile;                                                  // 0x02E8   (0x0008)  
	int32_t                                            QuestNodeIndex;                                             // 0x02F0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02F4   (0x0004)  MISSED
	FFortQuestMapNode                                  QuestMapNode;                                               // 0x02F8   (0x0018)  
};

/// Class /Script/SaveTheWorldUI.FortLayoutQuestNode_Legacy
/// Size: 0x0028 (0x0002E8 - 0x000310)
class UFortLayoutQuestNode_Legacy : public UCommonUserWidget
{ 
public:
	class UFortQuestMapQuestTile_Legacy*               QuestTile;                                                  // 0x02E8   (0x0008)  
	int32_t                                            QuestNodeIndex;                                             // 0x02F0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02F4   (0x0004)  MISSED
	FFortQuestMapNode                                  QuestMapNode;                                               // 0x02F8   (0x0018)  
};

/// Class /Script/SaveTheWorldUI.FortProgressArrowButton
/// Size: 0x0040 (0x001490 - 0x0014D0)
class UFortProgressArrowButton : public UCommonButtonBase
{ 
public:
	FSlateColor                                        ArrowColor;                                                 // 0x1490   (0x0014)  
	FSlateColor                                        HoverColor;                                                 // 0x14A4   (0x0014)  
	FSlateColor                                        ShadowColor;                                                // 0x14B8   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x14CC   (0x0004)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortProgressArrowButton.UpdateArrowColor
	// void UpdateArrowColor(FSlateColor Color, FSlateColor HoverColor);                                                     // [0xbe614c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortProgressArrowButton.OnShadowColorSet
	// void OnShadowColorSet();                                                                                              // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortProgressArrowButton.OnIsInteractiveSet
	// void OnIsInteractiveSet(bool bIsInteractive);                                                                         // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortProgressArrowButton.OnArrowColorSet
	// void OnArrowColorSet();                                                                                               // [0x2177018] Event|Public|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortProgressArrowButton_Legacy
/// Size: 0x0040 (0x0014E0 - 0x001520)
class UFortProgressArrowButton_Legacy : public UCommonButtonLegacy
{ 
public:
	FSlateColor                                        ArrowColor;                                                 // 0x14E0   (0x0014)  
	FSlateColor                                        HoverColor;                                                 // 0x14F4   (0x0014)  
	FSlateColor                                        ShadowColor;                                                // 0x1508   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x151C   (0x0004)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortProgressArrowButton_Legacy.UpdateArrowColor
	// void UpdateArrowColor(FSlateColor Color, FSlateColor HoverColor);                                                     // [0xbe6171c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortProgressArrowButton_Legacy.OnShadowColorSet
	// void OnShadowColorSet();                                                                                              // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortProgressArrowButton_Legacy.OnIsInteractiveSet
	// void OnIsInteractiveSet(bool bIsInteractive);                                                                         // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortProgressArrowButton_Legacy.OnArrowColorSet
	// void OnArrowColorSet();                                                                                               // [0x2177018] Event|Public|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortQuestExpiresWidget
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortQuestExpiresWidget : public UCommonUserWidget
{ 
public:
	SDK_UNDEFINED(8,15061) /* TWeakObjectPtr<UFortQuestItem*> */ __um(Item);                                       // 0x02E8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x02F0   (0x0008)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestExpiresWidget.SetData
	// void SetData(class UFortQuestItem* InItem);                                                                           // [0x9039b80] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestExpiresWidget.OnQuestExpirationUpdated
	// void OnQuestExpirationUpdated();                                                                                      // [0x1555df0] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortQuestMapCosmeticListWidget
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortQuestMapCosmeticListWidget : public UCommonUserWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x02E8   (0x0010)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapCosmeticListWidget.UpdateCosmeticListDisplay
	// void UpdateCosmeticListDisplay();                                                                                     // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapCosmeticListWidget.GetDisplayItemDefs
	// TArray<UFortItemDefinition*> GetDisplayItemDefs();                                                                    // [0xbe5c2c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortQuestMapDetailsPanelBase
/// Size: 0x0018 (0x0002E8 - 0x000300)
class UFortQuestMapDetailsPanelBase : public UCommonUserWidget
{ 
public:
	class UClass*                                      QuestConversationClass;                                     // 0x02E8   (0x0008)  
	float                                              QuestUpdateDelayTime;                                       // 0x02F0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02F4   (0x0004)  MISSED
	FTimerHandle                                       QuestUpdateTimerHandle;                                     // 0x02F8   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapDetailsPanelBase.SetScrollWidget
	// void SetScrollWidget();                                                                                               // [0x9982828] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapDetailsPanelBase.SetQuestToDisplay
	// void SetQuestToDisplay(class UFortQuestItemDefinition* QuestDef);                                                     // [0x7a74a64] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapDetailsPanelBase.HandleQuestsUpdatedInternal
	// void HandleQuestsUpdatedInternal();                                                                                   // [0xbe5e78c] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortQuestMapDetailsPanel
/// Size: 0x00B0 (0x000300 - 0x0003B0)
class UFortQuestMapDetailsPanel : public UFortQuestMapDetailsPanelBase
{ 
public:
	FDataTableRowHandle                                PlayButtonTriggeringAction;                                 // 0x0300   (0x0010)  
	TArray<class UClass*>                              PriorityActivatableWidgetClassList;                         // 0x0310   (0x0010)  
	class UClass*                                      CurrentQuestBorder;                                         // 0x0320   (0x0008)  
	class UClass*                                      CompletedQuestBorder;                                       // 0x0328   (0x0008)  
	class UFortJournalQuestDetails*                    Panel_JournalDetails;                                       // 0x0330   (0x0008)  
	class UCommonTextBlock*                            Text_QuestTitle;                                            // 0x0338   (0x0008)  
	class UCommonTextBlock*                            Text_QuestDescription;                                      // 0x0340   (0x0008)  
	class UCommonTextBlock*                            Text_Header;                                                // 0x0348   (0x0008)  
	class UCommonTextBlock*                            Text_NotOwnedHeader;                                        // 0x0350   (0x0008)  
	class UCommonTextBlock*                            Text_InactiveQuestName;                                     // 0x0358   (0x0008)  
	class UImage*                                      Image_QuestIcon;                                            // 0x0360   (0x0008)  
	class UCommonListView*                             List_Tasks;                                                 // 0x0368   (0x0008)  
	class UCommonBorder*                               Border_Header;                                              // 0x0370   (0x0008)  
	class UWidgetSwitcher*                             Switcher_Body;                                              // 0x0378   (0x0008)  
	class UFortRewardInfoWidget*                       Widget_FutureQuestRewardInfo;                               // 0x0380   (0x0008)  
	class UScrollBox*                                  ScrollBox_Quest;                                            // 0x0388   (0x0008)  
	class UScrollBox*                                  ScrollBox_NoQuest;                                          // 0x0390   (0x0008)  
	TArray<class UFortQuestObjectiveInfo*>             VisibleObjectives;                                          // 0x0398   (0x0010)  
	class UFortQuestItem*                              CurrentQuestItem;                                           // 0x03A8   (0x0008)  
};

/// Class /Script/SaveTheWorldUI.FortQuestMapDetailsPanel_Legacy
/// Size: 0x00B0 (0x000300 - 0x0003B0)
class UFortQuestMapDetailsPanel_Legacy : public UFortQuestMapDetailsPanelBase
{ 
public:
	FDataTableRowHandle                                PlayButtonTriggeringAction;                                 // 0x0300   (0x0010)  
	TArray<class UClass*>                              PriorityActivatablePanelClassList;                          // 0x0310   (0x0010)  
	class UClass*                                      CurrentQuestBorder;                                         // 0x0320   (0x0008)  
	class UClass*                                      CompletedQuestBorder;                                       // 0x0328   (0x0008)  
	class UFortJournalQuestDetails*                    Panel_JournalDetails;                                       // 0x0330   (0x0008)  
	class UCommonTextBlock*                            Text_QuestTitle;                                            // 0x0338   (0x0008)  
	class UCommonTextBlock*                            Text_QuestDescription;                                      // 0x0340   (0x0008)  
	class UCommonTextBlock*                            Text_Header;                                                // 0x0348   (0x0008)  
	class UCommonTextBlock*                            Text_NotOwnedHeader;                                        // 0x0350   (0x0008)  
	class UCommonTextBlock*                            Text_InactiveQuestName;                                     // 0x0358   (0x0008)  
	class UImage*                                      Image_QuestIcon;                                            // 0x0360   (0x0008)  
	class UCommonListView*                             List_Tasks;                                                 // 0x0368   (0x0008)  
	class UCommonBorder*                               Border_Header;                                              // 0x0370   (0x0008)  
	class UWidgetSwitcher*                             Switcher_Body;                                              // 0x0378   (0x0008)  
	class UFortRewardInfoWidget_Legacy*                Widget_FutureQuestRewardInfo;                               // 0x0380   (0x0008)  
	class UScrollBox*                                  ScrollBox_Quest;                                            // 0x0388   (0x0008)  
	class UScrollBox*                                  ScrollBox_NoQuest;                                          // 0x0390   (0x0008)  
	TArray<class UFortQuestObjectiveInfo*>             VisibleObjectives;                                          // 0x0398   (0x0010)  
	class UFortQuestItem*                              CurrentQuestItem;                                           // 0x03A8   (0x0008)  
};

/// Class /Script/SaveTheWorldUI.FortQuestMapEventCallout
/// Size: 0x0138 (0x000400 - 0x000538)
class UFortQuestMapEventCallout : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0400   (0x0048)  MISSED
	class UFortBangWrapper_NUI*                        BangWrapper_GoButton;                                       // 0x0448   (0x0008)  
	class UFortProgressArrowButton*                    Button_LeftNav;                                             // 0x0450   (0x0008)  
	class UFortProgressArrowButton*                    Button_RightNav;                                            // 0x0458   (0x0008)  
	class UCommonButtonBase*                           Button_SwitchMode;                                          // 0x0460   (0x0008)  
	class UFortQuestMapNewBangWrapper*                 BangWrapper_Arrow;                                          // 0x0468   (0x0008)  
	class UFortQuestMapEventSequence*                  Sequence_EventProgress;                                     // 0x0470   (0x0008)  
	class UHorizontalBox*                              HorizontalBox_NavButtons;                                   // 0x0478   (0x0008)  
	class UCommonTextBlock*                            Text_Header;                                                // 0x0480   (0x0008)  
	class UCommonTextBlock*                            Text_Body;                                                  // 0x0488   (0x0008)  
	class UImage*                                      Image_Callout;                                              // 0x0490   (0x0008)  
	class UFortBangWrapper_NUI*                        BangWrapper_UnHover;                                        // 0x0498   (0x0008)  
	class USoundBase*                                  DefaultSound;                                               // 0x04A0   (0x0008)  
	class UFortQuestItemDefinition*                    DefaultRequiredCompletedQuest;                              // 0x04A8   (0x0008)  
	class USoundBase*                                  OverrideSound;                                              // 0x04B0   (0x0008)  
	class UAudioComponent*                             SoundLoop;                                                  // 0x04B8   (0x0008)  
	class UFortQuestMapData*                           QuestMapData;                                               // 0x04C0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x70];                                      // 0x04C8   (0x0070)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.UpdateGoButtonBangState
	// void UpdateGoButtonBangState(bool bClear);                                                                            // [0xbe8ebf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.UpdateCalloutData
	// void UpdateCalloutData();                                                                                             // [0xbe8ebc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.UpdateActiveEvents
	// void UpdateActiveEvents();                                                                                            // [0xbe8eb50] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.SetIsFaded
	// void SetIsFaded(bool Faded);                                                                                          // [0xbe8d714] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.SetIsExpanded
	// void SetIsExpanded(bool Expanded);                                                                                    // [0xbe8d614] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.ResetCallout
	// void ResetCallout();                                                                                                  // [0xbe8c9a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.PlayFadeOut
	// void PlayFadeOut();                                                                                                   // [0xbe8c018] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.PlayFadeIn
	// void PlayFadeIn();                                                                                                    // [0xbe8bfc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.OnResetCallout
	// void OnResetCallout();                                                                                                // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.OnPlayFadeAnimation
	// void OnPlayFadeAnimation(bool bIsFadeOut);                                                                            // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.OnEventIndexChanged
	// void OnEventIndexChanged();                                                                                           // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.OnDeactivatePlayAnimation
	// void OnDeactivatePlayAnimation();                                                                                     // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.OnActivatePlayAnimation
	// void OnActivatePlayAnimation();                                                                                       // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.IsCurrentEventUnlocked
	// bool IsCurrentEventUnlocked();                                                                                        // [0xbe8b438] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.GetRequiredQuestForCurrentEvent
	// class UFortQuestItemDefinition* GetRequiredQuestForCurrentEvent();                                                    // [0xbe8a4f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.GetIsFaded
	// bool GetIsFaded();                                                                                                    // [0xbe8a0f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.GetIsExpanded
	// bool GetIsExpanded();                                                                                                 // [0x8d98ee4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.GetEventCount
	// int32_t GetEventCount();                                                                                              // [0x3b2ec5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.DeactivateCallout
	// void DeactivateCallout();                                                                                             // [0xbe898f8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy
/// Size: 0x0138 (0x000570 - 0x0006A8)
class UFortQuestMapEventCallout_Legacy : public UFortActivatablePanel
{ 
public:
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0570   (0x0048)  MISSED
	class UFortBangWrapper_NUI*                        BangWrapper_GoButton;                                       // 0x05B8   (0x0008)  
	class UFortProgressArrowButton_Legacy*             Button_LeftNav;                                             // 0x05C0   (0x0008)  
	class UFortProgressArrowButton_Legacy*             Button_RightNav;                                            // 0x05C8   (0x0008)  
	class UCommonButtonLegacy*                         Button_SwitchMode;                                          // 0x05D0   (0x0008)  
	class UFortQuestMapNewBangWrapper_Legacy*          BangWrapper_Arrow;                                          // 0x05D8   (0x0008)  
	class UFortQuestMapEventSequence*                  Sequence_EventProgress;                                     // 0x05E0   (0x0008)  
	class UHorizontalBox*                              HorizontalBox_NavButtons;                                   // 0x05E8   (0x0008)  
	class UCommonTextBlock*                            Text_Header;                                                // 0x05F0   (0x0008)  
	class UCommonTextBlock*                            Text_Body;                                                  // 0x05F8   (0x0008)  
	class UImage*                                      Image_Callout;                                              // 0x0600   (0x0008)  
	class UFortBangWrapper_NUI*                        BangWrapper_UnHover;                                        // 0x0608   (0x0008)  
	class USoundBase*                                  DefaultSound;                                               // 0x0610   (0x0008)  
	class UFortQuestItemDefinition*                    DefaultRequiredCompletedQuest;                              // 0x0618   (0x0008)  
	class USoundBase*                                  OverrideSound;                                              // 0x0620   (0x0008)  
	class UAudioComponent*                             SoundLoop;                                                  // 0x0628   (0x0008)  
	class UFortQuestMapData*                           QuestMapData;                                               // 0x0630   (0x0008)  
	unsigned char                                      UnknownData01_6[0x70];                                      // 0x0638   (0x0070)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.UpdateGoButtonBangState
	// void UpdateGoButtonBangState(bool bClear);                                                                            // [0xbe8ec94] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.UpdateCalloutData
	// void UpdateCalloutData();                                                                                             // [0xbe8ebdc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.UpdateActiveEvents
	// void UpdateActiveEvents();                                                                                            // [0xbe8eb8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.SetIsFaded
	// void SetIsFaded(bool Faded);                                                                                          // [0xbe8d794] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.SetIsExpanded
	// void SetIsExpanded(bool Expanded);                                                                                    // [0xbe8d694] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.ResetCallout
	// void ResetCallout();                                                                                                  // [0xbe8c9b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.PlayFadeOut
	// void PlayFadeOut();                                                                                                   // [0xbe8c044] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.PlayFadeIn
	// void PlayFadeIn();                                                                                                    // [0xbe8bfec] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnResetCallout
	// void OnResetCallout();                                                                                                // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnPlayFadeAnimation
	// void OnPlayFadeAnimation(bool bIsFadeOut);                                                                            // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnEventIndexChanged
	// void OnEventIndexChanged();                                                                                           // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnDeactivatePlayAnimation
	// void OnDeactivatePlayAnimation();                                                                                     // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnActivatePlayAnimation
	// void OnActivatePlayAnimation();                                                                                       // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.IsCurrentEventUnlocked
	// bool IsCurrentEventUnlocked();                                                                                        // [0xbe8b45c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.GetRequiredQuestForCurrentEvent
	// class UFortQuestItemDefinition* GetRequiredQuestForCurrentEvent();                                                    // [0xbe8a52c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.GetIsFaded
	// bool GetIsFaded();                                                                                                    // [0xb5309f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.GetIsExpanded
	// bool GetIsExpanded();                                                                                                 // [0xb530a0c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.GetEventCount
	// int32_t GetEventCount();                                                                                              // [0xbe89c24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.DeactivateCallout
	// void DeactivateCallout();                                                                                             // [0xbe8990c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortQuestMapEventDetailsPanel
/// Size: 0x0098 (0x000300 - 0x000398)
class UFortQuestMapEventDetailsPanel : public UFortQuestMapDetailsPanelBase
{ 
public:
	class UClass*                                      CurrentQuestBorder;                                         // 0x0300   (0x0008)  
	class UClass*                                      CompletedQuestBorder;                                       // 0x0308   (0x0008)  
	class UClass*                                      FutureQuestBorder;                                          // 0x0310   (0x0008)  
	class UVerticalBox*                                VBox_QuestContainer;                                        // 0x0318   (0x0008)  
	class UVerticalBox*                                VBox_CompletedQuestContainer;                               // 0x0320   (0x0008)  
	class UCommonAnimatedSwitcher*                     Switcher_Quests;                                            // 0x0328   (0x0008)  
	class UCommonBorder*                               Border_NextQuest;                                           // 0x0330   (0x0008)  
	class UCommonTextBlock*                            Text_QuestName;                                             // 0x0338   (0x0008)  
	class UCommonTextBlock*                            Text_QuestDescription;                                      // 0x0340   (0x0008)  
	class UCommonTextBlock*                            Text_Title;                                                 // 0x0348   (0x0008)  
	class UCommonListView*                             List_Tasks;                                                 // 0x0350   (0x0008)  
	class UImage*                                      Image_QuestIcon;                                            // 0x0358   (0x0008)  
	class UScrollBox*                                  ScrollBox_SideBar;                                          // 0x0360   (0x0008)  
	class UDataTable*                                  EventQuestTable;                                            // 0x0368   (0x0008)  
	class UClass*                                      SideBarEntryClass;                                          // 0x0370   (0x0008)  
	class UFortQuestItemDefinition*                    UnlockEventQuestDefinition;                                 // 0x0378   (0x0008)  
	class UFortQuestItemDefinition*                    CurrentQuestDef;                                            // 0x0380   (0x0008)  
	TArray<class UFortQuestObjectiveInfo*>             VisibleObjectives;                                          // 0x0388   (0x0010)  
};

/// Class /Script/SaveTheWorldUI.FortQuestMapEventDetailsPanel_Legacy
/// Size: 0x0098 (0x000300 - 0x000398)
class UFortQuestMapEventDetailsPanel_Legacy : public UFortQuestMapDetailsPanelBase
{ 
public:
	class UClass*                                      CurrentQuestBorder;                                         // 0x0300   (0x0008)  
	class UClass*                                      CompletedQuestBorder;                                       // 0x0308   (0x0008)  
	class UClass*                                      FutureQuestBorder;                                          // 0x0310   (0x0008)  
	class UVerticalBox*                                VBox_QuestContainer;                                        // 0x0318   (0x0008)  
	class UVerticalBox*                                VBox_CompletedQuestContainer;                               // 0x0320   (0x0008)  
	class UCommonWidgetSwitcherLegacy*                 Switcher_Quests;                                            // 0x0328   (0x0008)  
	class UCommonBorder*                               Border_NextQuest;                                           // 0x0330   (0x0008)  
	class UCommonTextBlock*                            Text_QuestName;                                             // 0x0338   (0x0008)  
	class UCommonTextBlock*                            Text_QuestDescription;                                      // 0x0340   (0x0008)  
	class UCommonTextBlock*                            Text_Title;                                                 // 0x0348   (0x0008)  
	class UCommonListView*                             List_Tasks;                                                 // 0x0350   (0x0008)  
	class UImage*                                      Image_QuestIcon;                                            // 0x0358   (0x0008)  
	class UScrollBox*                                  ScrollBox_SideBar;                                          // 0x0360   (0x0008)  
	class UDataTable*                                  EventQuestTable;                                            // 0x0368   (0x0008)  
	class UClass*                                      SideBarEntryClass;                                          // 0x0370   (0x0008)  
	class UFortQuestItemDefinition*                    UnlockEventQuestDefinition;                                 // 0x0378   (0x0008)  
	class UFortQuestItemDefinition*                    CurrentQuestDef;                                            // 0x0380   (0x0008)  
	TArray<class UFortQuestObjectiveInfo*>             VisibleObjectives;                                          // 0x0388   (0x0010)  
};

/// Class /Script/SaveTheWorldUI.FortQuestMapEventDot
/// Size: 0x0008 (0x0002E8 - 0x0002F0)
class UFortQuestMapEventDot : public UCommonUserWidget
{ 
public:
	class UImage*                                      Image_ActiveDot;                                            // 0x02E8   (0x0008)  
};

/// Class /Script/SaveTheWorldUI.FortQuestMapEventSequence
/// Size: 0x0018 (0x0002E8 - 0x000300)
class UFortQuestMapEventSequence : public UCommonUserWidget
{ 
public:
	class UHorizontalBox*                              HorizontalBox_DotBox;                                       // 0x02E8   (0x0008)  
	class UClass*                                      DotWidgetClass;                                             // 0x02F0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x02F8   (0x0008)  MISSED
};

/// Class /Script/SaveTheWorldUI.FortQuestMapEventSideEntry
/// Size: 0x0060 (0x0002E8 - 0x000348)
class UFortQuestMapEventSideEntry : public UCommonUserWidget
{ 
public:
	class UCommonAnimatedSwitcher*                     Switcher_Rewards;                                           // 0x02E8   (0x0008)  
	class UCommonListView*                             List_SideTasks;                                             // 0x02F0   (0x0008)  
	class UCommonTextBlock*                            Text_SideQuestTitle;                                        // 0x02F8   (0x0008)  
	class UImage*                                      Image_Arrow;                                                // 0x0300   (0x0008)  
	class UImage*                                      Image_QuestComplete;                                        // 0x0308   (0x0008)  
	FMargin                                            RewardPadding;                                              // 0x0310   (0x0010)  
	class UFortQuestItemDefinition*                    CurrentQuestItemDef;                                        // 0x0320   (0x0008)  
	class UFortQuestItem*                              CurrentQuestItem;                                           // 0x0328   (0x0008)  
	FTimerHandle                                       RewardAnimationTimer;                                       // 0x0330   (0x0008)  
	TArray<class UFortQuestObjectiveInfo*>             SideQuestObjectives;                                        // 0x0338   (0x0010)  
};

/// Class /Script/SaveTheWorldUI.FortQuestMapEventSideEntry_Legacy
/// Size: 0x0070 (0x0002E8 - 0x000358)
class UFortQuestMapEventSideEntry_Legacy : public UCommonUserWidget
{ 
public:
	class UCommonWidgetSwitcherLegacy*                 Switcher_Rewards;                                           // 0x02E8   (0x0008)  
	class UCommonListView*                             List_SideTasks;                                             // 0x02F0   (0x0008)  
	class UCommonTextBlock*                            Text_SideQuestTitle;                                        // 0x02F8   (0x0008)  
	class UImage*                                      Image_Arrow;                                                // 0x0300   (0x0008)  
	class UImage*                                      Image_QuestComplete;                                        // 0x0308   (0x0008)  
	FMargin                                            RewardPadding;                                              // 0x0310   (0x0010)  
	class UFortQuestItemDefinition*                    CurrentQuestItemDef;                                        // 0x0320   (0x0008)  
	class UFortQuestItem*                              CurrentQuestItem;                                           // 0x0328   (0x0008)  
	TArray<class UCommonWidgetSwitcherLegacy*>         RewardSwitchers;                                            // 0x0330   (0x0010)  
	FTimerHandle                                       RewardAnimationTimer;                                       // 0x0340   (0x0008)  
	TArray<class UFortQuestObjectiveInfo*>             SideQuestObjectives;                                        // 0x0348   (0x0010)  
};

/// Class /Script/SaveTheWorldUI.FortQuestMapNewBangWrapper
/// Size: 0x0010 (0x000300 - 0x000310)
class UFortQuestMapNewBangWrapper : public UFortBangWrapper_NUI
{ 
public:
	class UCommonAnimatedSwitcher*                     Switcher_Bangs;                                             // 0x0300   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0308   (0x0008)  MISSED
};

/// Class /Script/SaveTheWorldUI.FortQuestMapNewBangWrapper_Legacy
/// Size: 0x0010 (0x000300 - 0x000310)
class UFortQuestMapNewBangWrapper_Legacy : public UFortBangWrapper_NUI
{ 
public:
	class UCommonWidgetSwitcherLegacy*                 Switcher_Bangs;                                             // 0x0300   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0308   (0x0008)  MISSED
};

/// Class /Script/SaveTheWorldUI.FortQuestMapNodeLayout
/// Size: 0x0068 (0x0002C0 - 0x000328)
class UFortQuestMapNodeLayout : public UUserWidget
{ 
public:
	class UPanelWidget*                                Panel_NodeLayout;                                           // 0x02C0   (0x0008)  
	class UCommonButtonBase*                           ButtonPrevious;                                             // 0x02C8   (0x0008)  
	class UCommonButtonBase*                           ButtonNext;                                                 // 0x02D0   (0x0008)  
	class USizeBox*                                    StartArrow;                                                 // 0x02D8   (0x0008)  
	class USizeBox*                                    EndArrow;                                                   // 0x02E0   (0x0008)  
	class UCommonButtonGroupBase*                      QuestButtonGroup;                                           // 0x02E8   (0x0008)  
	class UFortQuestMapScreen*                         ParentScreen;                                               // 0x02F0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x02F8   (0x0030)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapNodeLayout.HandleQuestIndexSelectionModelIndexChanged
	// void HandleQuestIndexSelectionModelIndexChanged(bool bUpdateButtonSelection);                                         // [0xbe8b030] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortQuestMapNodeLayout.HandleQuestButtonSelected
	// void HandleQuestButtonSelected(class UCommonButtonBase* SelectedQuestButton, int32_t ButtonIndex);                    // [0xbe8ae6c] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortQuestMapNodeLayout_Legacy
/// Size: 0x0068 (0x0002C0 - 0x000328)
class UFortQuestMapNodeLayout_Legacy : public UUserWidget
{ 
public:
	class UPanelWidget*                                Panel_NodeLayout;                                           // 0x02C0   (0x0008)  
	class UCommonButtonLegacy*                         ButtonPrevious;                                             // 0x02C8   (0x0008)  
	class UCommonButtonLegacy*                         ButtonNext;                                                 // 0x02D0   (0x0008)  
	class USizeBox*                                    StartArrow;                                                 // 0x02D8   (0x0008)  
	class USizeBox*                                    EndArrow;                                                   // 0x02E0   (0x0008)  
	class UCommonButtonGroupLegacy*                    QuestButtonGroup;                                           // 0x02E8   (0x0008)  
	class UFortQuestMapScreen_Legacy*                  ParentScreen;                                               // 0x02F0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x02F8   (0x0030)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapNodeLayout_Legacy.HandleQuestIndexSelectionModelIndexChanged
	// void HandleQuestIndexSelectionModelIndexChanged(bool bUpdateButtonSelection);                                         // [0xbe8b0b0] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortQuestMapNodeLayout_Legacy.HandleQuestButtonSelected
	// void HandleQuestButtonSelected(class UCommonButtonLegacy* SelectedQuestButton, int32_t ButtonIndex);                  // [0xbe8ae6c] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortQuestMapQuestTile
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UFortQuestMapQuestTile : public UCommonUserWidget
{ 
public:
	class UCommonButtonBase*                           QuestButton;                                                // 0x02E8   (0x0008)  
	FFortQuestMapNode                                  QuestNodeData;                                              // 0x02F0   (0x0018)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapQuestTile.HandleSelectedChange
	// void HandleSelectedChange(bool Selected);                                                                             // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapQuestTile.HandleQuestDataChangedBP
	// void HandleQuestDataChangedBP();                                                                                      // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapQuestTile.GetQuestNodeData
	// void GetQuestNodeData(class UFortQuestItemDefinition*& QuestItemDefinition, FFortQuestMapNode& NodeData);             // [0xbe8a3e4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortQuestMapQuestTile_Legacy
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UFortQuestMapQuestTile_Legacy : public UCommonUserWidget
{ 
public:
	class UCommonButtonLegacy*                         QuestButton;                                                // 0x02E8   (0x0008)  
	FFortQuestMapNode                                  QuestNodeData;                                              // 0x02F0   (0x0018)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapQuestTile_Legacy.HandleSelectedChange
	// void HandleSelectedChange(bool Selected);                                                                             // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapQuestTile_Legacy.HandleQuestDataChangedBP
	// void HandleQuestDataChangedBP();                                                                                      // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapQuestTile_Legacy.GetQuestNodeData
	// void GetQuestNodeData(class UFortQuestItemDefinition*& QuestItemDefinition, FFortQuestMapNode& NodeData);             // [0xbe8a3e4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortQuestMapScreen
/// Size: 0x00B8 (0x000400 - 0x0004B8)
class UFortQuestMapScreen : public UCommonActivatableWidget
{ 
public:
	class UFortQuestMapDetailsPanelBase*               CampaignDetailsPanel;                                       // 0x0400   (0x0008)  
	class UFortQuestMapDetailsPanelBase*               EventDetailsPanel;                                          // 0x0408   (0x0008)  
	class UFortQuestMapEventCallout*                   EventCalloutPanel;                                          // 0x0410   (0x0008)  
	class UFortQuestMapViewer*                         QuestMapViewer;                                             // 0x0418   (0x0008)  
	EQuestMapScreenMode                                CurrentMode;                                                // 0x0420   (0x0001)  
	bool                                               bEventsActive;                                              // 0x0421   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0422   (0x0006)  MISSED
	class UFortQuestMapDataAsset*                      CampaignQuestMapDataTable;                                  // 0x0428   (0x0008)  
	class UFortQuestItemDefinition*                    CutoffQuest;                                                // 0x0430   (0x0008)  
	class UFortQuestMapDataAsset*                      CurrentQuestMapDataTable;                                   // 0x0438   (0x0008)  
	unsigned char                                      UnknownData01_5[0x28];                                      // 0x0440   (0x0028)  MISSED
	class UClass*                                      CampaignNewsModalClass;                                     // 0x0468   (0x0008)  
	class UClass*                                      QuestLogScreenClass;                                        // 0x0470   (0x0008)  
	FDataTableRowHandle                                CurrentQuestAction;                                         // 0x0478   (0x0010)  
	FDataTableRowHandle                                STWNewsAction;                                              // 0x0488   (0x0010)  
	FDataTableRowHandle                                BackAction;                                                 // 0x0498   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x04A8   (0x0010)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.UpdateQuestMapMode
	// void UpdateQuestMapMode(EQuestMapScreenMode QuestMapMode);                                                            // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.UpdateInputActionStates
	// void UpdateInputActionStates(bool bShowingCallout);                                                                   // [0xbe8ed38] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.ToggleQuestMapState
	// void ToggleQuestMapState();                                                                                           // [0xbe8de50] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.ShowQuestLog
	// void ShowQuestLog(class UFortQuestItem* QuestItem);                                                                   // [0xbe8ddd0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.SetQuestMapViewer
	// void SetQuestMapViewer(class UFortQuestMapViewer* Value);                                                             // [0xbe8daa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.SetIgnorePageNavigation
	// void SetIgnorePageNavigation(bool bIgnoreNavigation);                                                                 // [0xbe8d27c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.SetBeyondCutoffQuest
	// void SetBeyondCutoffQuest(bool bBeyondCutoff);                                                                        // [0xbe8ca78] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.OnShowCurrentQuestInputActionValueChanged
	// void OnShowCurrentQuestInputActionValueChanged();                                                                     // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.OnEventCalloutExpandChanged
	// void OnEventCalloutExpandChanged();                                                                                   // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.OnEventCalloutButtonClicked
	// void OnEventCalloutButtonClicked();                                                                                   // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.IsEventFlagActive
	// bool IsEventFlagActive(FString EventFlag);                                                                            // [0xbe8b480] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.IsBeyondQuest
	// bool IsBeyondQuest(class UFortQuestItemDefinition* QuestDef);                                                         // [0xbe8b3a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.InitializeQuestData
	// void InitializeQuestData();                                                                                           // [0xbe8b278] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.HandleQuestPageChanged
	// void HandleQuestPageChanged();                                                                                        // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.HandleQuestIndexSelectionModelChanged
	// void HandleQuestIndexSelectionModelChanged(bool bUpdateButtonSelection);                                              // [0xbe8af30] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.HandleQuestDetailsUpdated
	// void HandleQuestDetailsUpdated(class UFortQuestItem* QuestDefinition);                                                // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.HandleMapViewerNavigationRequest
	// void HandleMapViewerNavigationRequest(EViewerNavigationDirection Direction);                                          // [0xbe8a7b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.HandleMapModeSwitch
	// void HandleMapModeSwitch();                                                                                           // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.HandleEventQuestMapActivate
	// void HandleEventQuestMapActivate();                                                                                   // [0xbe8a6d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.HandleEventCalloutDataChangedBP
	// void HandleEventCalloutDataChangedBP();                                                                               // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.HandleBackInputAction
	// void HandleBackInputAction();                                                                                         // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.GetCurrentPageCameraMode
	// EFrontEndCamera GetCurrentPageCameraMode();                                                                           // [0xbe899d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.GetBeyondCutoffQuest
	// bool GetBeyondCutoffQuest();                                                                                          // [0x8723b44] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.ClaimQuestRewards
	// void ClaimQuestRewards(class UFortQuestItem* QuestItem);                                                              // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.CheckForNewMainQuest
	// void CheckForNewMainQuest();                                                                                          // [0xbe895b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy
/// Size: 0x0068 (0x000538 - 0x0005A0)
class UFortQuestMapScreen_Legacy : public UCommonActivatablePanelLegacy
{ 
public:
	class UFortQuestMapDetailsPanelBase*               CampaignDetailsPanel;                                       // 0x0538   (0x0008)  
	class UFortQuestMapDetailsPanelBase*               EventDetailsPanel;                                          // 0x0540   (0x0008)  
	class UFortQuestMapEventCallout_Legacy*            EventCalloutPanel;                                          // 0x0548   (0x0008)  
	class UFortQuestMapViewer_Legacy*                  QuestMapViewer;                                             // 0x0550   (0x0008)  
	EQuestMapScreenMode                                CurrentMode;                                                // 0x0558   (0x0001)  
	bool                                               bEventsActive;                                              // 0x0559   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x055A   (0x0006)  MISSED
	class UFortQuestMapDataAsset*                      CampaignQuestMapDataTable;                                  // 0x0560   (0x0008)  
	class UFortQuestItemDefinition*                    CutoffQuest;                                                // 0x0568   (0x0008)  
	class UFortQuestMapDataAsset*                      CurrentQuestMapDataTable;                                   // 0x0570   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0578   (0x0028)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.UpdateQuestMapMode
	// void UpdateQuestMapMode(EQuestMapScreenMode QuestMapMode);                                                            // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.ToggleQuestMapState
	// void ToggleQuestMapState();                                                                                           // [0xbe8de70] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.SetQuestMapViewer
	// void SetQuestMapViewer(class UFortQuestMapViewer_Legacy* Value);                                                      // [0xbe8db20] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.SetIgnorePageNavigation
	// void SetIgnorePageNavigation(bool bIgnoreNavigation);                                                                 // [0xbe8d308] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.SetFindCurrentActionVisibility
	// void SetFindCurrentActionVisibility(EInputActionState ActionVisibility);                                              // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.SetBeyondCutoffQuest
	// void SetBeyondCutoffQuest(bool bBeyondCutoff);                                                                        // [0xbe8cb10] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.OnEventCalloutExpandChanged
	// void OnEventCalloutExpandChanged();                                                                                   // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.OnEventCalloutButtonClicked
	// void OnEventCalloutButtonClicked();                                                                                   // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.IsEventFlagActive
	// bool IsEventFlagActive(FString EventFlag);                                                                            // [0xbe8b480] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.IsBeyondQuest
	// bool IsBeyondQuest(class UFortQuestItemDefinition* QuestDef);                                                         // [0xbe8b3a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.InitializeQuestData
	// void InitializeQuestData();                                                                                           // [0xbe8b28c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleRequestCurrentQuestNavigation
	// void HandleRequestCurrentQuestNavigation();                                                                           // [0xbe8b154] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleQuestPageChanged
	// void HandleQuestPageChanged();                                                                                        // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleQuestIndexSelectionModelChanged
	// void HandleQuestIndexSelectionModelChanged(bool bUpdateButtonSelection);                                              // [0xbe8afb0] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleQuestDetailsUpdated
	// void HandleQuestDetailsUpdated(class UFortQuestItem* QuestDefinition);                                                // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleMapViewerNavigationRequest
	// void HandleMapViewerNavigationRequest(EViewerNavigationDirection Direction);                                          // [0xbe8a838] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleMapModeSwitch
	// void HandleMapModeSwitch();                                                                                           // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleEventQuestMapActivate
	// void HandleEventQuestMapActivate();                                                                                   // [0xbe8a6ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleEventCalloutDataChangedBP
	// void HandleEventCalloutDataChangedBP();                                                                               // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.GetCurrentPageCameraMode
	// EFrontEndCamera GetCurrentPageCameraMode();                                                                           // [0xbe89a08] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.GetBeyondCutoffQuest
	// bool GetBeyondCutoffQuest();                                                                                          // [0xbe89920] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.CheckForNewMainQuest
	// void CheckForNewMainQuest();                                                                                          // [0xbe89604] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortQuestMapViewer_Legacy
/// Size: 0x0080 (0x0002E8 - 0x000368)
class UFortQuestMapViewer_Legacy : public UCommonUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x02E8   (0x0010)  MISSED
	class UCommonButtonLegacy*                         Button_PageRight;                                           // 0x02F8   (0x0008)  
	class UCommonButtonLegacy*                         Button_PageLeft;                                            // 0x0300   (0x0008)  
	class UCommonTextBlock*                            Text_Title;                                                 // 0x0308   (0x0008)  
	class UCommonTextBlock*                            Text_Page;                                                  // 0x0310   (0x0008)  
	class USizeBox*                                    SizeBox_Viewer;                                             // 0x0318   (0x0008)  
	class UCanvasPanel*                                CanvasPanel_Cosmetic;                                       // 0x0320   (0x0008)  
	class UFortQuestMapScreen_Legacy*                  ParentScreen;                                               // 0x0328   (0x0008)  
	class UFortQuestMapNodeLayout_Legacy*              NodeLayout;                                                 // 0x0330   (0x0008)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x0338   (0x0030)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapViewer_Legacy.UpdateViewerData
	// void UpdateViewerData();                                                                                              // [0xbe8edb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapViewer_Legacy.OnTryUpdateUserWidgetColor
	// void OnTryUpdateUserWidgetColor(class UUserWidget* Widget, FSlateColor OverrideColor);                                // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapViewer_Legacy.OnPlayLayoutOutroAnimation
	// void OnPlayLayoutOutroAnimation(EViewerNavigationDirection TravelDirection);                                          // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapViewer_Legacy.OnPlayLayoutFadeInAnimation
	// void OnPlayLayoutFadeInAnimation();                                                                                   // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapViewer_Legacy.HandleLayoutOutroAnimationFinished
	// void HandleLayoutOutroAnimationFinished();                                                                            // [0xbe8a728] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortQuestPlayButton
/// Size: 0x0008 (0x0002E8 - 0x0002F0)
class UFortQuestPlayButton : public UCommonUserWidget
{ 
public:
	class UFortQuestItem*                              QuestItem;                                                  // 0x02E8   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestPlayButton.OnContentMissing
	// void OnContentMissing();                                                                                              // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestPlayButton.HandlePlayerStateChanged
	// void HandlePlayerStateChanged();                                                                                      // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestPlayButton.HandleMatchmakingStarted
	// void HandleMatchmakingStarted();                                                                                      // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestPlayButton.HandleMatchmakingComplete
	// void HandleMatchmakingComplete(EMatchmakingCompleteResult Result);                                                    // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestPlayButton.HandleLobbyDisconnected
	// void HandleLobbyDisconnected();                                                                                       // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestPlayButton.CanPlayQuest
	// bool CanPlayQuest();                                                                                                  // [0xbe8958c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestPlayButton.AttemptToPlayQuest
	// void AttemptToPlayQuest();                                                                                            // [0xbe894ac] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortQuestTreeItemWidget
/// Size: 0x0010 (0x001490 - 0x0014A0)
class UFortQuestTreeItemWidget : public UCommonButtonBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x1490   (0x0008)  MISSED
	SDK_UNDEFINED(8,15062) /* TWeakObjectPtr<UObject*> */ __um(QuestOrCategory);                                   // 0x1498   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestTreeItemWidget.SetupAsQuest
	// void SetupAsQuest(class UFortQuestItem* Category);                                                                    // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestTreeItemWidget.SetupAsCategory
	// void SetupAsCategory(class UFortQuestCategory* Category);                                                             // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestTreeItemWidget.OnQuestsUpdated
	// void OnQuestsUpdated();                                                                                               // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestTreeItemWidget.HandleQuestsUpdated
	// void HandleQuestsUpdated();                                                                                           // [0xbe8b12c] Final|Native|Protected 
};

/// Class /Script/SaveTheWorldUI.FortQuestTreeItemWidget_Legacy
/// Size: 0x0010 (0x0014E0 - 0x0014F0)
class UFortQuestTreeItemWidget_Legacy : public UCommonButtonLegacy
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x14E0   (0x0008)  MISSED
	SDK_UNDEFINED(8,15063) /* TWeakObjectPtr<UObject*> */ __um(QuestOrCategory);                                   // 0x14E8   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestTreeItemWidget_Legacy.SetupAsQuest
	// void SetupAsQuest(class UFortQuestItem* Category);                                                                    // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestTreeItemWidget_Legacy.SetupAsCategory
	// void SetupAsCategory(class UFortQuestCategory* Category);                                                             // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestTreeItemWidget_Legacy.OnQuestsUpdated
	// void OnQuestsUpdated();                                                                                               // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestTreeItemWidget_Legacy.HandleQuestsUpdated
	// void HandleQuestsUpdated();                                                                                           // [0xbe8b140] Final|Native|Protected 
};

/// Class /Script/SaveTheWorldUI.FortQuestScreen
/// Size: 0x00F8 (0x000400 - 0x0004F8)
class UFortQuestScreen : public UCommonActivatableWidget
{ 
public:
	class UCommonTreeView*                             TreeView_Quests;                                            // 0x0400   (0x0008)  
	class UScrollBox*                                  ScrollBox_QuestDetails;                                     // 0x0408   (0x0008)  
	class UClass*                                      QuestManagerComponentClass;                                 // 0x0410   (0x0008)  
	FDataTableRowHandle                                BackAction;                                                 // 0x0418   (0x0010)  
	FDataTableRowHandle                                LeaveInventoryAction;                                       // 0x0428   (0x0010)  
	FDataTableRowHandle                                PlayQuestAction;                                            // 0x0438   (0x0010)  
	FDataTableRowHandle                                AbandonQuestAction;                                         // 0x0448   (0x0010)  
	FDataTableRowHandle                                ClaimRewardAction;                                          // 0x0458   (0x0010)  
	FDataTableRowHandle                                ReplayIntroAction;                                          // 0x0468   (0x0010)  
	FDataTableRowHandle                                ReplayOutroAction;                                          // 0x0478   (0x0010)  
	FDataTableRowHandle                                PinQuestAction;                                             // 0x0488   (0x0010)  
	FDataTableRowHandle                                UnpinQuestAction;                                           // 0x0498   (0x0010)  
	FDataTableRowHandle                                StopConversationAction;                                     // 0x04A8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x04B8   (0x0040)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestScreen.TriggerClaimRewardEvent
	// void TriggerClaimRewardEvent(class UFortQuestItem* QuestItem);                                                        // [0xbe8defc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.SetInputActionStates
	// void SetInputActionStates(class UFortQuestItem* QuestItem, bool bIsQuestAudioPlaying, bool bShouldShowPlayQuest, bool bAreQuestItemsDifferent); // [0xbe8d4c4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.SetDisableClaimRewardButton
	// void SetDisableClaimRewardButton(bool bToDisable);                                                                    // [0xbe8cd2c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.ProcessPendingSeenQuestItems
	// void ProcessPendingSeenQuestItems();                                                                                  // [0xbe8c0f0] Final|Native|Private|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.OnContentMissing
	// void OnContentMissing();                                                                                              // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_SetInitialQuestToSelect
	// void BP_SetInitialQuestToSelect(class UFortQuestItem* QuestItem);                                                     // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandleUnpinQuestAction
	// void BP_HandleUnpinQuestAction();                                                                                     // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandleStopConversationAction
	// void BP_HandleStopConversationAction();                                                                               // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandleReplayOutroAction
	// void BP_HandleReplayOutroAction();                                                                                    // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandleReplayIntroAction
	// void BP_HandleReplayIntroAction();                                                                                    // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandlePlayQuestAction
	// void BP_HandlePlayQuestAction();                                                                                      // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandlePinQuestAction
	// void BP_HandlePinQuestAction();                                                                                       // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandleClaimRewardAction
	// void BP_HandleClaimRewardAction();                                                                                    // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandleBackAction
	// void BP_HandleBackAction();                                                                                           // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandleAbandonQuestAction
	// void BP_HandleAbandonQuestAction();                                                                                   // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.AttemptToPlayQuest
	// void AttemptToPlayQuest(class UFortQuestItem* QuestItem);                                                             // [0xbe894c0] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortQuestScreen_Legacy
/// Size: 0x0000 (0x000570 - 0x000570)
class UFortQuestScreen_Legacy : public UFortActivatablePanel
{ 
public:


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestScreen_Legacy.ProcessPendingSeenQuestItems
	// void ProcessPendingSeenQuestItems();                                                                                  // [0xbe8c0f0] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortResearchMenuBase
/// Size: 0x0008 (0x000570 - 0x000578)
class UFortResearchMenuBase : public UFortActivatablePanel
{ 
public:
	class UFortItemDefinition*                         ResearchRespecToken;                                        // 0x0570   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortResearchMenuBase.UseResearchRespecToken
	// void UseResearchRespecToken();                                                                                        // [0xbe8edcc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResearchMenuBase.RequestPurchaseResearchLevel
	// void RequestPurchaseResearchLevel(FString StatId);                                                                    // [0xbe8c260] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResearchMenuBase.OnUseResearchRespecTokenComplete
	// void OnUseResearchRespecTokenComplete();                                                                              // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortResearchMenuBase.OnPurchaseResearchLevelStarted
	// void OnPurchaseResearchLevelStarted();                                                                                // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortResearchMenuBase.OnPurchaseResearchLevelCompleted
	// void OnPurchaseResearchLevelCompleted();                                                                              // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortResearchMenuBase.GetResearchRespecTokenCount
	// int32_t GetResearchRespecTokenCount();                                                                                // [0xbe8a568] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResearchMenuBase.GetClaimableResearchPointEstimate
	// int32_t GetClaimableResearchPointEstimate();                                                                          // [0xbe89938] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResearchMenuBase.AreResearchRespecTokensAvailable
	// bool AreResearchRespecTokensAvailable();                                                                              // [0xbe89484] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortResearchStatTileWidget
/// Size: 0x0040 (0x0002C0 - 0x000300)
class UFortResearchStatTileWidget : public UUserWidget
{ 
public:
	class UFortStatItemDefinition*                     PersonalStatItemDefinition;                                 // 0x02C0   (0x0008)  
	class UFortStatItemDefinition*                     TeamStatItemDefinition;                                     // 0x02C8   (0x0008)  
	FName                                              StatCostCurveName;                                          // 0x02D0   (0x0004)  
	FName                                              StatPersonalDeltaCurveName;                                 // 0x02D4   (0x0004)  
	FName                                              StatPersonalCumulativeCurveName;                            // 0x02D8   (0x0004)  
	FName                                              StatTeamDeltaCurveName;                                     // 0x02DC   (0x0004)  
	FName                                              StatTeamCumulativeCurveName;                                // 0x02E0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x02E4   (0x001C)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.OnStatChanged
	// void OnStatChanged();                                                                                                 // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.IsAtMaxResearchLevel
	// bool IsAtMaxResearchLevel();                                                                                          // [0xbe8b390] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetStatIdName
	// FString GetStatIdName();                                                                                              // [0xbe8a5c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetPersonalStatType
	// EFortStatType GetPersonalStatType();                                                                                  // [0xbe8a3c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetNextTeamStatValueDelta
	// int32_t GetNextTeamStatValueDelta();                                                                                  // [0xbe8a37c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetNextPersonalStatValueDelta
	// int32_t GetNextPersonalStatValueDelta();                                                                              // [0xbe8a358] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetNextCombinedStatValueDelta
	// int32_t GetNextCombinedStatValueDelta();                                                                              // [0xbe8a310] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetCurrentTeamStatValue
	// int32_t GetCurrentTeamStatValue();                                                                                    // [0xbe89a74] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetCurrentResearchLevel
	// int32_t GetCurrentResearchLevel();                                                                                    // [0xbe89a5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetCurrentPersonalStatValue
	// int32_t GetCurrentPersonalStatValue();                                                                                // [0xbe89a38] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetCurrentCombinedStatValue
	// int32_t GetCurrentCombinedStatValue();                                                                                // [0xbe89990] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetCostToIncreaseStat
	// int32_t GetCostToIncreaseStat();                                                                                      // [0xbe8995c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortRewardNotificationData
/// Size: 0x0008 (0x000028 - 0x000030)
class UFortRewardNotificationData : public UObject
{ 
public:
	EFrontEndRewardType                                RewardType;                                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortRewardNotificationData.GetIconBrush
	// bool GetIconBrush(FSlateBrush& IconBrush, TEnumAsByte<EFortBrushSize> BrushSize);                                     // [0xbe89c3c] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortRewardCollectionBookData
/// Size: 0x0060 (0x000030 - 0x000090)
class UFortRewardCollectionBookData : public UFortRewardNotificationData
{ 
public:
	FFortCollectionBookRewards                         CollectionBookRewards;                                      // 0x0030   (0x0060)  
};

/// Class /Script/SaveTheWorldUI.FortRewardNotificationSubWidget
/// Size: 0x0028 (0x0002E8 - 0x000310)
class UFortRewardNotificationSubWidget : public UCommonUserWidget
{ 
public:
	SDK_UNDEFINED(16,15064) /* FMulticastInlineDelegate */ __um(OnTransitionInComplete);                           // 0x02E8   (0x0010)  
	SDK_UNDEFINED(16,15065) /* FMulticastInlineDelegate */ __um(OnTransitionOutComplete);                          // 0x02F8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0308   (0x0008)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.TransitionOutBegin
	// void TransitionOutBegin();                                                                                            // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.TransitionOut
	// void TransitionOut();                                                                                                 // [0xbe8dee8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.TransitionInBegin
	// void TransitionInBegin();                                                                                             // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.TransitionIn
	// void TransitionIn();                                                                                                  // [0xbe8de90] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.SetPrimaryActionText
	// void SetPrimaryActionText(FText Text);                                                                                // [0xbe8d948] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.SetPrimaryActionHidden
	// void SetPrimaryActionHidden();                                                                                        // [0xbe8d918] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.SetPrimaryActionEnabled
	// void SetPrimaryActionEnabled(bool bEnabled);                                                                          // [0xbe8d814] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.SetInputActionHandlerState
	// void SetInputActionHandlerState(class UDataTable* DataTable, FName RowName, EInputActionState State);                 // [0xbe8d394] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.RemoveInputActionHandler
	// void RemoveInputActionHandler(FDataTableRowHandle InputActionRow);                                                    // [0xbe8c120] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.RemoveAllInputActionHandlers
	// void RemoveAllInputActionHandlers();                                                                                  // [0xbe8c104] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.OnPrimaryAction
	// void OnPrimaryAction();                                                                                               // [0x2177018] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.OnNavigationUp
	// void OnNavigationUp();                                                                                                // [0x2177018] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.OnNavigationRight
	// void OnNavigationRight();                                                                                             // [0x2177018] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.OnNavigationLeft
	// void OnNavigationLeft();                                                                                              // [0x2177018] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.OnNavigationDown
	// void OnNavigationDown();                                                                                              // [0x2177018] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.OnDeactivated
	// void OnDeactivated();                                                                                                 // [0x2177018] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.OnActivated
	// void OnActivated();                                                                                                   // [0x2177018] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.IsPrimaryActionHidden
	// void IsPrimaryActionHidden(bool& bHidden);                                                                            // [0xbe8bb30] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.IsPrimaryActionEnabled
	// void IsPrimaryActionEnabled(bool& bEnabled);                                                                          // [0xbe8bb30] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.InspectItem
	// void InspectItem(class UFortItem* ItemToInspect, int32_t QuantityOverride);                                           // [0xbe8b2a0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.Init
	// void Init(class UFortRewardNotificationWidget* MainWidget);                                                           // [0xbe8b1f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.AddInputActionHandler
	// void AddInputActionHandler(class UDataTable* DataTable, FName RowName, FDelegateProperty CommittedEvent);             // [0xbe89158] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortRewardConversationWidget
/// Size: 0x0000 (0x000310 - 0x000310)
class UFortRewardConversationWidget : public UFortRewardNotificationSubWidget
{ 
public:


	/// Functions
	// Function /Script/SaveTheWorldUI.FortRewardConversationWidget.IsValidConversation
	// bool IsValidConversation(class UFortConversation* Conversation);                                                      // [0xbe8be0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardConversationWidget.GetDataFromSentence
	// void GetDataFromSentence(FFortConversationSentence& Sentence, FText& Text, class UTexture2D*& TalkingHeadTexture);    // [0xbe89a98] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortRewardDifficultyIncrease
/// Size: 0x0000 (0x000030 - 0x000030)
class UFortRewardDifficultyIncrease : public UFortRewardNotificationData
{ 
public:
};

/// Class /Script/SaveTheWorldUI.FortRewardEpicQuestData
/// Size: 0x0008 (0x000030 - 0x000038)
class UFortRewardEpicQuestData : public UFortRewardNotificationData
{ 
public:
	class UFortQuestItem*                              Quest;                                                      // 0x0030   (0x0008)  
};

/// Class /Script/SaveTheWorldUI.FortRewardExpeditionData
/// Size: 0x0008 (0x000030 - 0x000038)
class UFortRewardExpeditionData : public UFortRewardNotificationData
{ 
public:
	class UFortExpeditionItem*                         Expedition;                                                 // 0x0030   (0x0008)  
};

/// Class /Script/SaveTheWorldUI.FortRewardExpeditionWidget
/// Size: 0x0068 (0x000310 - 0x000378)
class UFortRewardExpeditionWidget : public UFortRewardNotificationSubWidget
{ 
public:
	SDK_UNDEFINED(16,15066) /* FMulticastInlineDelegate */ __um(OnMcpError);                                       // 0x0310   (0x0010)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x0320   (0x0058)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortRewardExpeditionWidget.OnCollectExpeditionCompleted
	// void OnCollectExpeditionCompleted(class UFortExpeditionItem* Expedition, bool bSucceeded, TArray<FFortItemInstanceQuantityPair>& Rewards); // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardExpeditionWidget.CollectExpedition
	// void CollectExpedition(class UFortExpeditionItem* Expedition);                                                        // [0xbe8966c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortRewardGiftBoxData
/// Size: 0x0008 (0x000030 - 0x000038)
class UFortRewardGiftBoxData : public UFortRewardNotificationData
{ 
public:
	class UFortGiftBoxItem*                            GiftBox;                                                    // 0x0030   (0x0008)  
};

/// Class /Script/SaveTheWorldUI.FortRewardItemCacheData
/// Size: 0x0008 (0x000030 - 0x000038)
class UFortRewardItemCacheData : public UFortRewardNotificationData
{ 
public:
	class UFortItem*                                   ItemCache;                                                  // 0x0030   (0x0008)  
};

/// Class /Script/SaveTheWorldUI.FortRewardMissionAlertData
/// Size: 0x0000 (0x000030 - 0x000030)
class UFortRewardMissionAlertData : public UFortRewardNotificationData
{ 
public:
};

/// Class /Script/SaveTheWorldUI.FortRewardMissionData
/// Size: 0x0000 (0x000030 - 0x000030)
class UFortRewardMissionData : public UFortRewardNotificationData
{ 
public:
};

/// Class /Script/SaveTheWorldUI.FortRewardNewQuestWidget
/// Size: 0x0000 (0x000310 - 0x000310)
class UFortRewardNewQuestWidget : public UFortRewardNotificationSubWidget
{ 
public:


	/// Functions
	// Function /Script/SaveTheWorldUI.FortRewardNewQuestWidget.IsValidConversation
	// bool IsValidConversation(class UFortConversation* Conversation);                                                      // [0xbe8be0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNewQuestWidget.GetDataFromSentence
	// void GetDataFromSentence(FFortConversationSentence& Sentence, FText& Text, class UTexture2D*& TalkingHeadTexture);    // [0xbe89a98] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortRewardNotificationWidget
/// Size: 0x00F8 (0x000538 - 0x000630)
class UFortRewardNotificationWidget : public UCommonActivatablePanelLegacy
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0538   (0x0008)  MISSED
	TArray<class UFortRewardNotificationData*>         NotificationDataList;                                       // 0x0540   (0x0010)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0550   (0x0010)  MISSED
	class UOverlay*                                    OverlayMain;                                                // 0x0560   (0x0008)  
	FFortSwipeDetector                                 SwipeDetector;                                              // 0x0568   (0x0098)  
	unsigned char                                      UnknownData02_5[0x20];                                      // 0x0600   (0x0020)  MISSED
	class UClass*                                      MulchConfirmationModalClass;                                // 0x0620   (0x0008)  
	class UFortMulchConfirmationModalWidget*           MulchConfirmationModal;                                     // 0x0628   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.ShowMulchConfirmationModal
	// void ShowMulchConfirmationModal();                                                                                    // [0xbe61030] Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.SetPrimaryActionText
	// void SetPrimaryActionText(FText Text);                                                                                // [0xbe8da04] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.SetPrimaryActionHidden
	// void SetPrimaryActionHidden();                                                                                        // [0xbe8d934] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.SetPrimaryActionEnabled
	// void SetPrimaryActionEnabled(bool bEnabled);                                                                          // [0xbe8d898] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.ResetAllRewardData
	// void ResetAllRewardData();                                                                                            // [0xbe8c970] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.PopulateReward
	// void PopulateReward(class UFortRewardNotificationData* Reward);                                                       // [0xbe8c070] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnRewardsScreenClosed
	// void OnRewardsScreenClosed();                                                                                         // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnRewardsClaimFailed
	// void OnRewardsClaimFailed();                                                                                          // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnRewardsClaimed
	// void OnRewardsClaimed(TArray<FFortItemInstanceQuantityPair>& ItemList);                                               // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnPrimaryActionTextChanged
	// void OnPrimaryActionTextChanged(FText& Text);                                                                         // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnPrimaryActionHidden
	// void OnPrimaryActionHidden();                                                                                         // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnPrimaryActionEnabled
	// void OnPrimaryActionEnabled();                                                                                        // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnPrimaryActionDisabled
	// void OnPrimaryActionDisabled();                                                                                       // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnPopulateNewQuestReward
	// void OnPopulateNewQuestReward(class UFortRewardEpicQuestData* QuestReward);                                           // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnPopulateGiftBoxReward
	// void OnPopulateGiftBoxReward(class UFortRewardGiftBoxData* GiftBoxReward);                                            // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnPopulateExpeditionReward
	// void OnPopulateExpeditionReward(class UFortRewardExpeditionData* ExpeditionReward);                                   // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnPopulateChoiceRewards
	// void OnPopulateChoiceRewards(TArray<FFortItemInstanceQuantityPair>& ItemList);                                        // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnNavigationUp
	// void OnNavigationUp();                                                                                                // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnNavigationRight
	// void OnNavigationRight();                                                                                             // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnNavigationLeft
	// void OnNavigationLeft();                                                                                              // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnNavigationDown
	// void OnNavigationDown();                                                                                              // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnMulchCompleted
	// void OnMulchCompleted();                                                                                              // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.NotifyPanelDeactivated
	// void NotifyPanelDeactivated();                                                                                        // [0xbe5ed88] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.NotifyPanelActivated
	// void NotifyPanelActivated();                                                                                          // [0xbe5ed50] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.MarkDefaultItemsForMulch
	// void MarkDefaultItemsForMulch(TArray<FFortItemInstanceQuantityPair> ItemList);                                        // [0xbe8be94] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.IsPrimaryActionHidden
	// void IsPrimaryActionHidden(bool& bHidden);                                                                            // [0xbe8bc50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.IsPrimaryActionEnabled
	// void IsPrimaryActionEnabled(bool& bEnabled);                                                                          // [0xbe8bbc4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.InspectItem
	// void InspectItem(class UFortItem* ItemToInspect, int32_t QuantityOverride);                                           // [0x2177018] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HideMulchConfirmationModal
	// void HideMulchConfirmationModal();                                                                                    // [0xbe5e83c] Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnQuestRewardClaimed
	// void HandleOnQuestRewardClaimed(class UFortQuestItem* Quest, TArray<FFortItemInstanceQuantityPair>& Rewards);         // [0xbe8ac0c] Final|Native|Private|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnNoQuestRewardsToClaim
	// void HandleOnNoQuestRewardsToClaim();                                                                                 // [0xbe8ab5c] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnMissionRewardsOpenFailed
	// void HandleOnMissionRewardsOpenFailed();                                                                              // [0xbe8ab5c] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnMissionRewardsOpened
	// void HandleOnMissionRewardsOpened(TArray<FFortItemInstanceQuantityPair>& MissionRewards);                             // [0xbe8ab70] Final|Native|Private|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnMissionAlertRewardsOpened
	// void HandleOnMissionAlertRewardsOpened(TArray<FFortItemInstanceQuantityPair>& AlertRewards);                          // [0xbe8ab70] Final|Native|Private|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnItemCacheRewardsClaimFailed
	// void HandleOnItemCacheRewardsClaimFailed();                                                                           // [0xbe8ab5c] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnItemCacheRewardsClaimed
	// void HandleOnItemCacheRewardsClaimed(TArray<FFortItemInstanceQuantityPair>& ClaimedRewards);                          // [0xbe8ab70] Final|Native|Private|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnDifficultyIncreaseRewardsClaimFailed
	// void HandleOnDifficultyIncreaseRewardsClaimFailed();                                                                  // [0xbe8ab5c] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnDifficultyIncreaseRewardsClaimed
	// void HandleOnDifficultyIncreaseRewardsClaimed(TArray<FFortItemInstanceQuantityPair>& DifficultyRewards);              // [0xbe8ab70] Final|Native|Private|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnCollectionBookRewardClaimed
	// void HandleOnCollectionBookRewardClaimed(FFortCollectionBookRewards RewardClaimed, bool bSuccess, TArray<FFortItemInstanceQuantityPair>& ActualRewards); // [0xbe8a8b8] Final|Native|Private|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.BeginCloseRewardsScreen
	// void BeginCloseRewardsScreen();                                                                                       // [0xbe89540] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddQuestData
	// void AddQuestData(class UFortQuestItem* Quest);                                                                       // [0xbe89404] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddPhoenixLevelUpRewardData
	// void AddPhoenixLevelUpRewardData();                                                                                   // [0xbe893f0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddMissionData
	// void AddMissionData();                                                                                                // [0xbe89368] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddMissionAlertData
	// void AddMissionAlertData();                                                                                           // [0xbe892e0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddItemCacheRewardData
	// void AddItemCacheRewardData(class UFortItem* ItemCache);                                                              // [0xbe89260] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddGiftBoxData
	// void AddGiftBoxData();                                                                                                // [0xbe890d0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddExpeditionData
	// void AddExpeditionData(class UFortExpeditionItem* ExpeditionItem);                                                    // [0xbe89050] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddEpicQuestData
	// void AddEpicQuestData(class UFortQuestItem* Quest);                                                                   // [0xbe88fd0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddDifficultyIncreaseRewardData
	// void AddDifficultyIncreaseRewardData();                                                                               // [0xbe88f48] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddCollectionBookData
	// void AddCollectionBookData(FFortCollectionBookRewards& CollectionBookRewards);                                        // [0xbe88ea4] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortRewardPhoenixLevelUpData
/// Size: 0x0018 (0x000030 - 0x000048)
class UFortRewardPhoenixLevelUpData : public UFortRewardNotificationData
{ 
public:
	int32_t                                            PhoenixLevel;                                               // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<FFortItemInstanceQuantityPair>              Rewards;                                                    // 0x0038   (0x0010)  
};

/// Class /Script/SaveTheWorldUI.FortRewardQuestData
/// Size: 0x0008 (0x000030 - 0x000038)
class UFortRewardQuestData : public UFortRewardNotificationData
{ 
public:
	class UFortQuestItem*                              Quest;                                                      // 0x0030   (0x0008)  
};

/// Class /Script/SaveTheWorldUI.SaveTheWorldRegisterUIManager
/// Size: 0x0000 (0x000028 - 0x000028)
class USaveTheWorldRegisterUIManager : public UFortUIGameFeatureAction
{ 
public:
};

/// Class /Script/SaveTheWorldUI.SaveTheWorldRequestsFeatureAction
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class USaveTheWorldRequestsFeatureAction : public UFortUIGameFeatureAction
{ 
public:
	SDK_UNDEFINED(32,15067) /* TWeakObjectPtr<UClass*> */ __um(ItemManagementScreenClass);                         // 0x0028   (0x0020)  
	SDK_UNDEFINED(32,15068) /* TWeakObjectPtr<UClass*> */ __um(ItemManagementScreenClass_STW);                     // 0x0048   (0x0020)  
	SDK_UNDEFINED(32,15069) /* TWeakObjectPtr<UClass*> */ __um(ItemInspectionScreenClass);                         // 0x0068   (0x0020)  
	SDK_UNDEFINED(32,15070) /* TWeakObjectPtr<UClass*> */ __um(HeroLoadoutScreenClass);                            // 0x0088   (0x0020)  
	SDK_UNDEFINED(32,15071) /* TWeakObjectPtr<UClass*> */ __um(HeroLoadoutScreenLegacyClass);                      // 0x00A8   (0x0020)  
	SDK_UNDEFINED(32,15072) /* TWeakObjectPtr<UClass*> */ __um(SurvivorSquadManagementScreenClass);                // 0x00C8   (0x0020)  
};

/// Class /Script/SaveTheWorldUI.FortSquadSelectorButton
/// Size: 0x0020 (0x0014E0 - 0x001500)
class UFortSquadSelectorButton : public UCommonButtonLegacy
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x14E0   (0x0020)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadSelectorButton.TryGetStaticSquadDataBP
	// bool TryGetStaticSquadDataBP(FHomebaseSquad& OutSquadData);                                                           // [0xbeb03d4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSelectorButton.SetIdOfSquadToManageBP
	// void SetIdOfSquadToManageBP(FName& SquadId);                                                                          // [0xbeaf7f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSelectorButton.HandleSquadChangedBP
	// void HandleSquadChangedBP();                                                                                          // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadSelectorButton.HandleDifferentSquadSetBP
	// void HandleDifferentSquadSetBP();                                                                                     // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadSelectorButton.GetIdOfSquadToManageBP
	// FName GetIdOfSquadToManageBP();                                                                                       // [0xbead37c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortDefenderSquadSelectorButton
/// Size: 0x0000 (0x001500 - 0x001500)
class UFortDefenderSquadSelectorButton : public UFortSquadSelectorButton
{ 
public:


	/// Functions
	// Function /Script/SaveTheWorldUI.FortDefenderSquadSelectorButton.TryGetTheaterUniqueId
	// bool TryGetTheaterUniqueId(FString& OutTheaterUniqueId, bool& OutIsUnlocked);                                         // [0xbe8e458] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortDefenderSquadSelectorButton.TryGetPowerLevel
	// bool TryGetPowerLevel(int32_t& OutPowerLevel);                                                                        // [0xbe8e150] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/SaveTheWorldUI.FortSquadStatDetailsWidget
/// Size: 0x0030 (0x0002E8 - 0x000318)
class UFortSquadStatDetailsWidget : public UCommonUserWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x02E8   (0x0030)  MISSED
};

/// Class /Script/SaveTheWorldUI.FortHeroSquadBonusPerksWidgetBase
/// Size: 0x0010 (0x000318 - 0x000328)
class UFortHeroSquadBonusPerksWidgetBase : public UFortSquadStatDetailsWidget
{ 
public:
	class UFortPerkWidget_NUI*                         SupportBonusPerkWidget;                                     // 0x0318   (0x0008)  
	class UFortPerkWidget_NUI*                         TacticalBonusPerkWidget;                                    // 0x0320   (0x0008)  
};

/// Class /Script/SaveTheWorldUI.FortSquadManagementScreenBase
/// Size: 0x0120 (0x000570 - 0x000690)
class UFortSquadManagementScreenBase : public UFortActivatablePanel
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0570   (0x0010)  MISSED
	bool                                               bReadOnlyModeWIFE;                                          // 0x0580   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0581   (0x0007)  MISSED
	class UFortSquadStatsWidgetBase*                   SquadStatsWidget;                                           // 0x0588   (0x0008)  
	class UFortSquadSlotsView*                         SquadSlotsView;                                             // 0x0590   (0x0008)  
	class UFortSquadSlotDetailsPanel*                  SelectedSlotDetailsPanel;                                   // 0x0598   (0x0008)  
	class UFortSquadSlotItemPicker*                    SelectedSlotItemPicker;                                     // 0x05A0   (0x0008)  
	FDataTableRowHandle                                InspectInputActionRowHandle;                                // 0x05A8   (0x0010)  
	FDataTableRowHandle                                ManageInputActionRowHandle;                                 // 0x05B8   (0x0010)  
	FDataTableRowHandle                                BackInputActionRowHandle;                                   // 0x05C8   (0x0010)  
	FDataTableRowHandle                                InventoryInputActionRowHandle;                              // 0x05D8   (0x0010)  
	FDataTableRowHandle                                InventoryCloseInputActionRowHandle;                         // 0x05E8   (0x0010)  
	FDataTableRowHandle                                ClosePickerInputActionRowHandle;                            // 0x05F8   (0x0010)  
	FDataTableRowHandle                                SelectPickerSlotActionRowHandle;                            // 0x0608   (0x0010)  
	FDataTableRowHandle                                CyclePickerSortActionRowHandle;                             // 0x0618   (0x0010)  
	FDataTableRowHandle                                PreviousSquadActionRowHandle;                               // 0x0628   (0x0010)  
	FDataTableRowHandle                                NextSquadActionRowHandle;                                   // 0x0638   (0x0010)  
	FDataTableRowHandle                                ClearAllActionRowHandle;                                    // 0x0648   (0x0010)  
	FDataTableRowHandle                                HelpScreenActionRowHandle;                                  // 0x0658   (0x0010)  
	class UClass*                                      DisableAutoSlottingToClearSquadPromptAction;                // 0x0668   (0x0008)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x0670   (0x0010)  MISSED
	class UFortItemViewContext_SquadSlotsView*         ItemViewContext_SquadSlotsView;                             // 0x0680   (0x0008)  
	class UFortItemViewContext_SquadSlotItemPicker*    ItemViewContext_SquadSlotItemPicker;                        // 0x0688   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.TryGetStaticSquadDataBP
	// bool TryGetStaticSquadDataBP(FHomebaseSquad& OutSquadData);                                                           // [0xbe8e3a8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.TryGetSquadTeamAttribute
	// bool TryGetSquadTeamAttribute(FGameplayAttribute& OutGameplayAttribute);                                              // [0xbe8e2c8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.TryGetSquadMainAttribute
	// bool TryGetSquadMainAttribute(FGameplayAttribute& OutGameplayAttribute);                                              // [0xbe8e1e8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.TryGetAttributeValueFromSquad
	// bool TryGetAttributeValueFromSquad(float& OutValue, FGameplayAttribute& Attribute);                                   // [0xbe8df88] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.ShowWarningReadOnlyWIFE
	// void ShowWarningReadOnlyWIFE(bool Force);                                                                             // [0x2177018] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.SetupInputHandlers
	// void SetupInputHandlers();                                                                                            // [0x788579c] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.SetIdOfSquadToManageBP
	// void SetIdOfSquadToManageBP(FName& SquadId);                                                                          // [0xbe8d1ec] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.SelectSquadWithOffset
	// void SelectSquadWithOffset(int32_t Offset);                                                                           // [0xbe8c9f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.SelectPreviousSquad
	// void SelectPreviousSquad();                                                                                           // [0xbe8c9e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.SelectNextSquad
	// void SelectNextSquad();                                                                                               // [0xbe8c9c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.NavigateToSquadSlot
	// void NavigateToSquadSlot(int32_t SquadSlotIndex);                                                                     // [0xbe8bf40] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.IsScreenWIFE
	// bool IsScreenWIFE();                                                                                                  // [0xbe8bcdc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleViewInAll
	// void HandleViewInAll(int32_t SquadSlotIndex);                                                                         // [0xbe8b17c] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleSquadStateChanged
	// void HandleSquadStateChanged();                                                                                       // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleSquadSlotPickerShown
	// void HandleSquadSlotPickerShown();                                                                                    // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleSquadSlotPickerHidden
	// void HandleSquadSlotPickerHidden();                                                                                   // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleShouldAutoSlotSurvivorSquadsChanged
	// void HandleShouldAutoSlotSurvivorSquadsChanged();                                                                     // [0x788579c] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleSelectPickerSlotInputAction
	// void HandleSelectPickerSlotInputAction();                                                                             // [0xbe8b168] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandlePreviousSquadInputAction
	// void HandlePreviousSquadInputAction();                                                                                // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandlePickerSelectionCommitted
	// void HandlePickerSelectionCommitted(class UFortItem* CommittedItem);                                                  // [0xbe8adf0] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandlePickerSelectionChanged
	// void HandlePickerSelectionChanged(class UFortItem* SelectedItem);                                                     // [0xbe8ad70] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleOpenSquadSlot
	// void HandleOpenSquadSlot(int32_t SquadSlotIndex);                                                                     // [0xbe8acf0] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleNextSquadInputAction
	// void HandleNextSquadInputAction();                                                                                    // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleManageInputAction
	// void HandleManageInputAction();                                                                                       // [0xbe8a7a4] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleInventoryInputAction
	// void HandleInventoryInputAction();                                                                                    // [0xbe8a714] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleInspectInputAction
	// void HandleInspectInputAction();                                                                                      // [0xbe8a700] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleDifferentSquadSlotSelected
	// void HandleDifferentSquadSlotSelected(int32_t SquadSlotIndex);                                                        // [0xbe8a654] Native|Protected     
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleDifferentSquadSetBP
	// void HandleDifferentSquadSetBP();                                                                                     // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleCyclePickerSortInputAction
	// void HandleCyclePickerSortInputAction();                                                                              // [0xbe8a640] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleClosePickerInputAction
	// void HandleClosePickerInputAction();                                                                                  // [0xbe8a62c] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleBackInputAction
	// void HandleBackInputAction();                                                                                         // [0xbe8a618] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.GetNumUnlockedSquads
	// int32_t GetNumUnlockedSquads();                                                                                       // [0xbe8a3a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.GetIdOfSquadToManageBP
	// FName GetIdOfSquadToManageBP();                                                                                       // [0x33c99f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.ClearSquad
	// void ClearSquad();                                                                                                    // [0xbe89658] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortHeroSquadManagementScreen
/// Size: 0x0020 (0x000690 - 0x0006B0)
class UFortHeroSquadManagementScreen : public UFortSquadManagementScreenBase
{ 
public:
	FDataTableRowHandle                                ManageDefendersInputActionRowHandle;                        // 0x0690   (0x0010)  
	class UFortHeroSquadBonusPerksWidgetBase*          BonusPerksWidget;                                           // 0x06A0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x06A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortHeroSquadManagementScreen.PlayFeedbackForSlottingPerson
	// void PlayFeedbackForSlottingPerson(class UFortCharacter* Character, int32_t SlotIndex);                               // [0x2177018] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSquadIcon
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortSquadIcon : public UCommonUserWidget
{ 
public:
	FName                                              Name;                                                       // 0x02E8   (0x0004)  
	SDK_UNDEFINED(1,15073) /* TEnumAsByte<EFortBrushSize> */ __um(ImageSize);                                      // 0x02EC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02ED   (0x0003)  MISSED
	class UImage*                                      Icon;                                                       // 0x02F0   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadIcon.SetSquad
	// void SetSquad(FName& InName);                                                                                         // [0xbe8dd14] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadIcon.HandleDifferentSquadSetBP
	// void HandleDifferentSquadSetBP();                                                                                     // [0x2177018] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetails
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortSquadLandingPageDefenderSquadDetails : public UCommonUserWidget
{ 
public:
	class UCommonTextBlock*                            OutpostName;                                                // 0x02E8   (0x0008)  
	class UCommonNumericTextBlock*                     PowerRating;                                                // 0x02F0   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetails.SetDefenderSquadInfo
	// void SetDefenderSquadInfo(FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);                                  // [0xbe8cba8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetails.HandleDefenderSquadInfoSetBP
	// void HandleDefenderSquadInfoSetBP(FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);                          // [0x2177018] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetails.HandleAddDefenderSquadMemberBP
	// void HandleAddDefenderSquadMemberBP(FName& SquadId, int32_t Index);                                                   // [0x2177018] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetailsLocked
/// Size: 0x0008 (0x0002E8 - 0x0002F0)
class UFortSquadLandingPageDefenderSquadDetailsLocked : public UCommonUserWidget
{ 
public:
	class UCommonTextBlock*                            OutpostName;                                                // 0x02E8   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetailsLocked.SetDefenderSquadInfo
	// void SetDefenderSquadInfo(FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);                                  // [0xbe8cc44] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSummary
/// Size: 0x0008 (0x0002E8 - 0x0002F0)
class UFortSquadLandingPageDefenderSummary : public UCommonUserWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x02E8   (0x0008)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSummary.HandleClearDefenderSquadDetailsBP
	// void HandleClearDefenderSquadDetailsBP();                                                                             // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSummary.HandleAddLockedDefenderSquadDetailsBP
	// void HandleAddLockedDefenderSquadDetailsBP(FFortLandingPageDefenderSummaryInfo DefenderSummaryInfo);                  // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSummary.HandleAddDefenderSquadDetailsBP
	// void HandleAddDefenderSquadDetailsBP(FFortLandingPageDefenderSummaryInfo DefenderSummaryInfo);                        // [0x2177018] Event|Public|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSquadLandingPageSurvivorSummary
/// Size: 0x0088 (0x0002E8 - 0x000370)
class UFortSquadLandingPageSurvivorSummary : public UCommonUserWidget
{ 
public:
	class UFortSquadStatValueWithIcon*                 FortitudeStatValue;                                         // 0x02E8   (0x0008)  
	class UFortSquadStatValueWithIcon*                 OffenseStatValue;                                           // 0x02F0   (0x0008)  
	class UFortSquadStatValueWithIcon*                 ResistanceStatValue;                                        // 0x02F8   (0x0008)  
	class UFortSquadStatValueWithIcon*                 TechStatValue;                                              // 0x0300   (0x0008)  
	unsigned char                                      UnknownData00_6[0x68];                                      // 0x0308   (0x0068)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadLandingPageSurvivorSummary.HandleClearSetBonusSummaryLineItemsBP
	// void HandleClearSetBonusSummaryLineItemsBP();                                                                         // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadLandingPageSurvivorSummary.HandleAddSetBonusSummaryLineItemBP
	// void HandleAddSetBonusSummaryLineItemBP(FFortAttributeModifierAccumulation AttributeModifierAccumulation);            // [0x2177018] Event|Public|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSquadManagementItemViewContextBase
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UFortSquadManagementItemViewContextBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xD0];                                      // 0x0028   (0x00D0)  MISSED
};

/// Class /Script/SaveTheWorldUI.FortItemViewContext_SquadSlotsView
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UFortItemViewContext_SquadSlotsView : public UFortSquadManagementItemViewContextBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00F8   (0x0008)  MISSED
};

/// Class /Script/SaveTheWorldUI.FortItemViewContext_SquadSlotItemPicker
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UFortItemViewContext_SquadSlotItemPicker : public UFortSquadManagementItemViewContextBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00F8   (0x0008)  MISSED
};

/// Class /Script/SaveTheWorldUI.FortItemViewContext_ExpeditionSquadSlotsView
/// Size: 0x0008 (0x000100 - 0x000108)
class UFortItemViewContext_ExpeditionSquadSlotsView : public UFortItemViewContext_SquadSlotsView
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0100   (0x0008)  MISSED
};

/// Class /Script/SaveTheWorldUI.FortItemViewContext_ExpeditionSquadSlotItemPicker
/// Size: 0x0008 (0x000100 - 0x000108)
class UFortItemViewContext_ExpeditionSquadSlotItemPicker : public UFortItemViewContext_SquadSlotItemPicker
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0100   (0x0008)  MISSED
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel
/// Size: 0x0058 (0x0002E8 - 0x000340)
class UFortSquadSlotDetailsPanel : public UCommonUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x02E8   (0x0020)  MISSED
	class UFortSquadSlotItemDetailsHostPanel*          ItemDetailsPanel;                                           // 0x0308   (0x0008)  
	SDK_UNDEFINED(16,15074) /* TScriptInterface<Class> */ __um(ItemViewContext);                                   // 0x0310   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0320   (0x0020)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.TryGetItemToPreviewInSlot
	// bool TryGetItemToPreviewInSlot(class UFortItem*& OutItemToPreviewInSlot);                                             // [0xbe8e0b8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.SetScrollWidget
	// void SetScrollWidget();                                                                                               // [0xbe8dba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.SetIdOfSquadSlotToManageBP
	// void SetIdOfSquadSlotToManageBP(FName& SquadId, int32_t SquadSlotIndex);                                              // [0xbe8cdac] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.IsSquadSlotLockedBP
	// bool IsSquadSlotLockedBP();                                                                                           // [0xbe8bd40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.HandleSquadSlotStateChangedBP
	// void HandleSquadSlotStateChangedBP();                                                                                 // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.HandleSquadSlotRestrictionFactorsChangedBP
	// void HandleSquadSlotRestrictionFactorsChangedBP();                                                                    // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.HandleDifferentSquadSlotSetBP
	// void HandleDifferentSquadSlotSetBP();                                                                                 // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.GetSlottingRestrictionReasons
	// TArray<EFortSquadSlottingRestrictionReason> GetSlottingRestrictionReasons();                                          // [0xbe8a58c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.GetItemInSquadSlotBP
	// class UFortItem* GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer);                                               // [0xbe8a110] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.GetIdOfSquadSlotToManageBP
	// void GetIdOfSquadSlotToManageBP(FName& OutSquadId, int32_t& OutSquadSlotIndex);                                       // [0xbe89d88] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotItemDetailElementWidget
/// Size: 0x0020 (0x000340 - 0x000360)
class UFortSquadSlotItemDetailElementWidget : public UFortItemDetailElementWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0340   (0x0020)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemDetailElementWidget.SetIdOfSquadSlotToManageBP
	// void SetIdOfSquadSlotToManageBP(FName& SquadId, int32_t SquadSlotIndex);                                              // [0xbe8cebc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemDetailElementWidget.IsSquadSlotLockedBP
	// bool IsSquadSlotLockedBP();                                                                                           // [0xbe8bd84] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemDetailElementWidget.HandlePostDifferentSquadSlotSetBP
	// void HandlePostDifferentSquadSlotSetBP();                                                                             // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemDetailElementWidget.GetItemInSquadSlotBP
	// class UFortItem* GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer);                                               // [0xbe8a1c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemDetailElementWidget.GetIdOfSquadSlotToManageBP
	// void GetIdOfSquadSlotToManageBP(FName& OutSquadId, int32_t& OutSquadSlotIndex);                                       // [0xbe89e64] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel
/// Size: 0x0020 (0x0003C8 - 0x0003E8)
class UFortSquadSlotItemDetailsHostPanel : public UFortItemDetailsHostPanel
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x03C8   (0x0020)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel.SetIdOfSquadSlotToManageBP
	// void SetIdOfSquadSlotToManageBP(FName& SquadId, int32_t SquadSlotIndex);                                              // [0xbe8cfcc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel.IsSquadSlotLockedBP
	// bool IsSquadSlotLockedBP();                                                                                           // [0xbe8bdc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel.GetItemInSquadSlotBP
	// class UFortItem* GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer);                                               // [0xbe8a26c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel.GetIdOfSquadSlotToManageBP
	// void GetIdOfSquadSlotToManageBP(FName& OutSquadId, int32_t& OutSquadSlotIndex);                                       // [0xbe89f40] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotItemPicker
/// Size: 0x00C8 (0x000420 - 0x0004E8)
class UFortSquadSlotItemPicker : public UFortItemPickerBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0420   (0x0038)  MISSED
	SDK_UNDEFINED(16,15075) /* FMulticastInlineDelegate */ __um(OnSortChanged);                                    // 0x0458   (0x0010)  
	unsigned char                                      UnknownData01_6[0x80];                                      // 0x0468   (0x0080)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemPicker.SetSortTypes
	// void SetSortTypes(FSquadSlotSortTypes SquadSlotSortTypes);                                                            // [0xbe8dbc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemPicker.SetIdOfSquadSlotToManageBP
	// void SetIdOfSquadSlotToManageBP(FName& SquadId, int32_t SquadSlotIndex);                                              // [0xbe8d0dc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemPicker.GetIdOfSquadSlotToManageBP
	// void GetIdOfSquadSlotToManageBP(FName& OutSquadId, int32_t& OutSquadSlotIndex);                                       // [0xbe8a01c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemPicker.FortSquadSlotSortChanged__DelegateSignature
	// void FortSquadSlotSortChanged__DelegateSignature(ESquadSlotSortType CurrentSortType, ESquadSlotType SquadSlotType);   // [0x2177018] MulticastDelegate|Public|Delegate 
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemPicker.CycleSortType
	// void CycleSortType();                                                                                                 // [0xbe898e4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotItemPickerTileButton
/// Size: 0x0010 (0x001520 - 0x001530)
class UFortSquadSlotItemPickerTileButton : public UFortItemTileButton
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x1520   (0x0010)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemPickerTileButton.HandleSlottingRestrictionReasonsChanged
	// void HandleSlottingRestrictionReasonsChanged();                                                                       // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemPickerTileButton.HandleItemSlottedToDifferentSquad
	// void HandleItemSlottedToDifferentSquad(FHomebaseSquadSlotId& SquadSlotId);                                            // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemPickerTileButton.GetSlottingRestrictionReasons
	// TArray<EFortSquadSlottingRestrictionReason> GetSlottingRestrictionReasons();                                          // [0xbead694] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotSelectorPopupMenu
/// Size: 0x0008 (0x000558 - 0x000560)
class UFortSquadSlotSelectorPopupMenu : public UFortPopupMenu_Legacy
{ 
public:
	bool                                               bReadOnlyModeWIFE;                                          // 0x0558   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0559   (0x0007)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorPopupMenu.IsScreenWIFE
	// bool IsScreenWIFE();                                                                                                  // [0xbe8bcdc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorPopupMenu.GetHostButton
	// class UFortSquadSlotSelectorButton* GetHostButton();                                                                  // [0xbead0c8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotSurvivorTraitMatchesDetailWidget
/// Size: 0x0028 (0x000360 - 0x000388)
class UFortSquadSlotSurvivorTraitMatchesDetailWidget : public UFortSquadSlotItemDetailElementWidget
{ 
public:
	bool                                               IsSquadLeaderSlot;                                          // 0x0360   (0x0001)  
	bool                                               LeaderMatchesSquadType;                                     // 0x0361   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0362   (0x0002)  MISSED
	int32_t                                            SubordinatePersonalityMatchCount;                           // 0x0364   (0x0004)  
	bool                                               MatchesLeaderPersonality;                                   // 0x0368   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0369   (0x0003)  MISSED
	int32_t                                            MatchingSetBonusCount;                                      // 0x036C   (0x0004)  
	int32_t                                            SetBonusSize;                                               // 0x0370   (0x0004)  
	unsigned char                                      UnknownData02_6[0x14];                                      // 0x0374   (0x0014)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadSlotSurvivorTraitMatchesDetailWidget.HandleTraitValuesUpdatedBP
	// void HandleTraitValuesUpdatedBP();                                                                                    // [0x2177018] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotSelectorButton
/// Size: 0x0080 (0x0014E0 - 0x001560)
class UFortSquadSlotSelectorButton : public UCommonButtonLegacy
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x14E0   (0x0020)  MISSED
	SDK_UNDEFINED(16,15076) /* FMulticastInlineDelegate */ __um(OnRequestOpenSquadSlotEvent);                      // 0x1500   (0x0010)  
	SDK_UNDEFINED(16,15077) /* FMulticastInlineDelegate */ __um(OnRequestViewInAllEvent);                          // 0x1510   (0x0010)  
	class UFortSquadSlotWidget*                        SquadSlotWidget;                                            // 0x1520   (0x0008)  
	class UMenuAnchor*                                 PopupMenuAnchor;                                            // 0x1528   (0x0008)  
	SDK_UNDEFINED(16,15078) /* TScriptInterface<Class> */ __um(ItemViewContext);                                   // 0x1530   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x1540   (0x0020)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.ViewInAll
	// void ViewInAll();                                                                                                     // [0xbeb064c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.SquadSlotWidgetUpdated
	// void SquadSlotWidgetUpdated();                                                                                        // [0x94c78d8] Native|Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.SetIdOfSquadSlotToManageBP
	// void SetIdOfSquadSlotToManageBP(FName& SquadId, int32_t SquadSlotIndex);                                              // [0xbeaf5d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.OpenSquadSlot
	// void OpenSquadSlot();                                                                                                 // [0xbeaf120] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.IsSquadSlotLockedBP
	// bool IsSquadSlotLockedBP();                                                                                           // [0xbeaee20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.HandlePreDifferentSquadSlotSetBP
	// void HandlePreDifferentSquadSlotSetBP();                                                                              // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.HandlePostDifferentSquadSlotSetBP
	// void HandlePostDifferentSquadSlotSetBP();                                                                             // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.GetPopupMenu
	// class UUserWidget* GetPopupMenu();                                                                                    // [0xbead61c] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.GetInPreviewMode
	// bool GetInPreviewMode();                                                                                              // [0xbead394] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.GetIdOfSquadSlotToManageBP
	// void GetIdOfSquadSlotToManageBP(FName& OutSquadId, int32_t& OutSquadSlotIndex);                                       // [0xbead1c4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotsView
/// Size: 0x00F8 (0x0002E8 - 0x0003E0)
class UFortSquadSlotsView : public UCommonUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x02E8   (0x0010)  MISSED
	SDK_UNDEFINED(16,15079) /* FMulticastInlineDelegate */ __um(OnDifferentSquadSlotSelectedEvent);                // 0x02F8   (0x0010)  
	SDK_UNDEFINED(16,15080) /* FMulticastInlineDelegate */ __um(OnRequestOpenSquadSlotEvent);                      // 0x0308   (0x0010)  
	SDK_UNDEFINED(16,15081) /* FMulticastInlineDelegate */ __um(OnRequestViewInAllEvent);                          // 0x0318   (0x0010)  
	bool                                               bReadOnlyModeWIFE;                                          // 0x0328   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0329   (0x0003)  MISSED
	int32_t                                            IndexOfSelectedSquadSlot;                                   // 0x032C   (0x0004)  
	bool                                               bSlotButtonsRequireSelection;                               // 0x0330   (0x0001)  
	bool                                               bInPreviewMode;                                             // 0x0331   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x0332   (0x0006)  MISSED
	SDK_UNDEFINED(80,15082) /* TMap<ESquadSlotType, FSquadSlotSortTypes> */ __um(SquadSlotSortTypesMap);           // 0x0338   (0x0050)  
	class UClass*                                      DisableAutoSlottingToOpenSquadSlotPromptAction;             // 0x0388   (0x0008)  
	class UFortCommittableButtonGroup*                 SquadSlotButtonGroup;                                       // 0x0390   (0x0008)  
	unsigned char                                      UnknownData03_5[0x30];                                      // 0x0398   (0x0030)  MISSED
	SDK_UNDEFINED(16,15083) /* TScriptInterface<Class> */ __um(ItemViewContext);                                   // 0x03C8   (0x0010)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x03D8   (0x0008)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.TryGetStaticSquadDataBP
	// bool TryGetStaticSquadDataBP(FHomebaseSquad& OutSquadData);                                                           // [0xbeb04a4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.TryGetSelectedSquadSlotSortTypes
	// bool TryGetSelectedSquadSlotSortTypes(FSquadSlotSortTypes& OutSlotSortTypes);                                         // [0xbeafc6c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.SetIsSelectionLocked
	// void SetIsSelectionLocked(bool ShouldSelectionBeLocked);                                                              // [0xbeaf990] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.SetInPreviewMode
	// void SetInPreviewMode(bool bPreview);                                                                                 // [0xbeaf910] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.SetIdOfSquadToManageBP
	// void SetIdOfSquadToManageBP(FName& SquadId);                                                                          // [0xbeaf880] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.SelectSlot
	// void SelectSlot(int32_t SquadSlotIndex);                                                                              // [0xbeaf1cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.OnDifferentSquadSlotSelected__DelegateSignature
	// void OnDifferentSquadSlotSelected__DelegateSignature(int32_t SquadSlotIndex);                                         // [0x2177018] MulticastDelegate|Public|Delegate 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.HandleSelectedButtonChanged
	// void HandleSelectedButtonChanged(class UCommonButtonLegacy* SelectedButton, int32_t ButtonIndex);                     // [0xbeaec10] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.HandleRequestViewInAll
	// void HandleRequestViewInAll(int32_t SquadSlotIndex);                                                                  // [0xbeaeb90] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.HandleRequestOpenSquadSlot
	// void HandleRequestOpenSquadSlot(int32_t SquadSlotIndex);                                                              // [0xbeaeb10] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.HandleHoveredButtonChanged
	// void HandleHoveredButtonChanged(class UCommonButtonLegacy* HoveredButton, int32_t ButtonIndex);                       // [0xbeae93c] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.HandleButtonDoubleClicked
	// void HandleButtonDoubleClicked(class UCommonButtonLegacy* CommittedButton, int32_t ButtonIndex);                      // [0xbeae734] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.HandleButtonClicked
	// void HandleButtonClicked(class UCommonButtonLegacy* CommittedButton, int32_t ButtonIndex);                            // [0xbeae5bc] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.GetIndexOfSelectedSquadSlot
	// int32_t GetIndexOfSelectedSquadSlot();                                                                                // [0xb6d4504] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.GetIdOfSquadToManageBP
	// FName GetIdOfSquadToManageBP();                                                                                       // [0x9fc3434] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.CreateAndAddSquadSlotButton
	// class UFortSquadSlotSelectorButton* CreateAndAddSquadSlotButton(int32_t SquadSlotIndex, FHomebaseSquadSlot& SquadSlotDefinition, class UWidget*& OutSquadSlotButtonHost); // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotWidget
/// Size: 0x0090 (0x000178 - 0x000208)
class UFortSquadSlotWidget : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0178   (0x0020)  MISSED
	EFortItemCardSize                                  ItemCardSize;                                               // 0x0198   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3F];                                      // 0x0199   (0x003F)  MISSED
	class UFortMultiSizeItemCard*                      SlottedItemCard;                                            // 0x01D8   (0x0008)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x01E0   (0x0008)  MISSED
	SDK_UNDEFINED(16,15084) /* TScriptInterface<Class> */ __um(ItemViewContext);                                   // 0x01E8   (0x0010)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x01F8   (0x0010)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadSlotWidget.SetIdOfSquadSlotToManageBP
	// void SetIdOfSquadSlotToManageBP(FName& SquadId, int32_t SquadSlotIndex);                                              // [0xbeaf6e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotWidget.SetCardSize
	// void SetCardSize(EFortItemCardSize CardSize);                                                                         // [0xbeaf448] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotWidget.IsSquadSlotLockedBP
	// bool IsSquadSlotLockedBP();                                                                                           // [0xbeaee44] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotWidget.GetItemInSquadSlotBP
	// class UFortItem* GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer);                                               // [0xbead430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotWidget.GetIdOfSquadSlotToManageBP
	// void GetIdOfSquadSlotToManageBP(FName& OutSquadId, int32_t& OutSquadSlotIndex);                                       // [0xbead2a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortSquadStatsWidgetBase
/// Size: 0x0038 (0x0002E8 - 0x000320)
class UFortSquadStatsWidgetBase : public UCommonUserWidget
{ 
public:
	TArray<class UFortAttributeListItem_NUI*>          OverviewStats;                                              // 0x02E8   (0x0010)  
	class UFortAttributeList_NUI*                      DetailedStats;                                              // 0x02F8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0300   (0x0020)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadStatsWidgetBase.RequestStatsUpdate
	// void RequestStatsUpdate();                                                                                            // [0xbeaf1a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadStatsWidgetBase.RequestShowPreviewStats
	// void RequestShowPreviewStats();                                                                                       // [0xbeaf190] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadStatsWidgetBase.HandleSquadSlottingPreviewStateChanged
	// void HandleSquadSlottingPreviewStateChanged();                                                                        // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadStatsWidgetBase.HandlePowerRatingChanged_BP
	// void HandlePowerRatingChanged_BP(bool bHasTeamMebers);                                                                // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadStatsWidgetBase.GetLocalPlayerId
	// FUniqueNetIdRepl GetLocalPlayerId();                                                                                  // [0xbead500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortSquadStatValueWithIcon
/// Size: 0x0088 (0x0002E8 - 0x000370)
class UFortSquadStatValueWithIcon : public UCommonUserWidget
{ 
public:
	FGameplayAttribute                                 Attribute;                                                  // 0x02E8   (0x0038)  
	FGameplayAttribute                                 TeamAttribute;                                              // 0x0320   (0x0038)  
	SDK_UNDEFINED(1,15085) /* TEnumAsByte<EFortBrushSize> */ __um(ImageSize);                                      // 0x0358   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0359   (0x0007)  MISSED
	class UCommonNumericTextBlock*                     Value;                                                      // 0x0360   (0x0008)  
	class UImage*                                      Icon;                                                       // 0x0368   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadStatValueWithIcon.HandleDifferentAttributeSetBP
	// void HandleDifferentAttributeSetBP();                                                                                 // [0x2177018] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSquadTypeLandingPageBase
/// Size: 0x0030 (0x000570 - 0x0005A0)
class UFortSquadTypeLandingPageBase : public UFortActivatablePanel
{ 
public:
	bool                                               bReadOnlyModeWIFE;                                          // 0x0570   (0x0001)  
	EFortHomebaseSquadType                             SquadType;                                                  // 0x0571   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0572   (0x0006)  MISSED
	FDataTableRowHandle                                BackInputActionRowHandle;                                   // 0x0578   (0x0010)  
	EFortFrontendInventoryFilter                       ItemManagementScreenFilter;                                 // 0x0588   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0589   (0x0007)  MISSED
	SDK_UNDEFINED(16,15086) /* TArray<TWeakObjectPtr<UFortSquadSelectorButton*>> */ __um(SquadSelectorButtons);    // 0x0590   (0x0010)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadTypeLandingPageBase.ShowWarningReadOnlyWIFE
	// void ShowWarningReadOnlyWIFE(bool Force);                                                                             // [0x2177018] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadTypeLandingPageBase.IsScreenWIFE
	// bool IsScreenWIFE();                                                                                                  // [0xbe8bcdc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadTypeLandingPageBase.HandlePendingNavigationOp
	// void HandlePendingNavigationOp();                                                                                     // [0xbeaea04] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadTypeLandingPageBase.HandleBackInputAction
	// void HandleBackInputAction(bool& bPassThrough);                                                                       // [0xbeae530] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadTypeLandingPageBase.CreateAndAddSquadButton
	// class UFortSquadSelectorButton* CreateAndAddSquadButton(FName& SquadId);                                              // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortStatIcon
/// Size: 0x0048 (0x0002E8 - 0x000330)
class UFortStatIcon : public UCommonUserWidget
{ 
public:
	FGameplayAttribute                                 Attribute;                                                  // 0x02E8   (0x0038)  
	SDK_UNDEFINED(1,15087) /* TEnumAsByte<EFortBrushSize> */ __um(ImageSize);                                      // 0x0320   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0321   (0x0007)  MISSED
	class UImage*                                      Icon;                                                       // 0x0328   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortStatIcon.SetAttribute
	// void SetAttribute(FGameplayAttribute& InAttribute);                                                                   // [0xbeaf24c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStatIcon.HandleDifferentAttributeSetBP
	// void HandleDifferentAttributeSetBP();                                                                                 // [0x2177018] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSurvivorSquadManagementScreen
/// Size: 0x00E0 (0x000690 - 0x000770)
class UFortSurvivorSquadManagementScreen : public UFortSquadManagementScreenBase
{ 
public:
	class UFortSurvivorSquadStatMatchesBase*           StatMatchesWidget;                                          // 0x0690   (0x0008)  
	unsigned char                                      UnknownData00_6[0xD8];                                      // 0x0698   (0x00D8)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadManagementScreen.UpdateCycleButtons
	// void UpdateCycleButtons();                                                                                            // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadManagementScreen.ShowHelpDialog
	// void ShowHelpDialog();                                                                                                // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadManagementScreen.PlayFeedbackForSlottingPerson
	// void PlayFeedbackForSlottingPerson(class UFortWorker* Worker, int32_t SlotIndex, FFortSurvivorSquadSlottingFeedbackData& FeedbackData); // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSurvivorSquadSelectorButton
/// Size: 0x0020 (0x001500 - 0x001520)
class UFortSurvivorSquadSelectorButton : public UFortSquadSelectorButton
{ 
public:
	TArray<FGameplayAttribute>                         FortStatAttributes;                                         // 0x14F8   (0x0010)  
	TArray<FGameplayAttribute>                         FortTeamStatAttributes;                                     // 0x1508   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x1518   (0x0008)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadSelectorButton.TryGetSummaryStats
	// bool TryGetSummaryStats(FFortSurvivorSquadSelectorButtonSummaryStats& OutSummaryStats);                               // [0xbeb0574] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadSelectorButton.TryGetSquadMembers
	// bool TryGetSquadMembers(TArray<UFortWorker*>& OutSquadMembers);                                                       // [0xbeb0328] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadSelectorButton.TryGetPersonalityMatches
	// bool TryGetPersonalityMatches(FFortSurvivorSquadSelectorButtonPersonalityMatches& OutPersonalityMatches);             // [0xbeafb84] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/SaveTheWorldUI.FortUISurvivorSquadStatMatch
/// Size: 0x04C0 (0x000000 - 0x0004C0)
struct FFortUISurvivorSquadStatMatch
{ 
	FFortMultiSizeBrush                                Icons;                                                      // 0x0000   (0x0480)  
	SDK_UNDEFINED(24,15088) /* FText */                __um(MagnitudeText);                                        // 0x0480   (0x0018)  
	SDK_UNDEFINED(24,15089) /* FText */                __um(AttributeDisplayName);                                 // 0x0498   (0x0018)  
	int32_t                                            NumMembersMeetingCriteria;                                  // 0x04B0   (0x0004)  
	int32_t                                            NumMembersRequired;                                         // 0x04B4   (0x0004)  
	EFortUISurvivorSquadMatchType                      MatchType;                                                  // 0x04B8   (0x0001)  
	EFortBuffState                                     PreviewEffect;                                              // 0x04B9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x04BA   (0x0006)  MISSED
};

/// Class /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchBase
/// Size: 0x04C8 (0x0002E8 - 0x0007B0)
class UFortSurvivorSquadStatMatchBase : public UCommonUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x02E8   (0x0008)  MISSED
	FFortUISurvivorSquadStatMatch                      StatMatch;                                                  // 0x02F0   (0x04C0)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchBase.OnStatMatchUpdated
	// void OnStatMatchUpdated(FFortUISurvivorSquadStatMatch UpdatedMatch);                                                  // [0x2177018] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchesBase
/// Size: 0x0030 (0x000318 - 0x000348)
class UFortSurvivorSquadStatMatchesBase : public UFortSquadStatDetailsWidget
{ 
public:
	class UClass*                                      StatMatchClass;                                             // 0x0318   (0x0008)  
	bool                                               bSummaryView;                                               // 0x0320   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0321   (0x0007)  MISSED
	TArray<class UFortSurvivorSquadStatMatchBase*>     StatMatches;                                                // 0x0328   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0338   (0x0010)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.TryGetStaticSquadDataBP
	// bool TryGetStaticSquadDataBP(FHomebaseSquad& OutSquadData);                                                           // [0xbeb04a4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.SetSummaryView
	// void SetSummaryView(bool bInSummaryView);                                                                             // [0xb4af650] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.SetIdOfSquadToManageBP
	// void SetIdOfSquadToManageBP(FName& SquadId);                                                                          // [0xbeaf880] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.HandleDifferentSquadSetBP
	// void HandleDifferentSquadSetBP();                                                                                     // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.GetIdOfSquadToManageBP
	// FName GetIdOfSquadToManageBP();                                                                                       // [0x9fc3434] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.AddStatMatch
	// void AddStatMatch(class UFortSurvivorSquadStatMatchBase* SetBonus);                                                   // [0x2177018] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSurvivorSquadSummaryStatItem
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UFortSurvivorSquadSummaryStatItem : public UCommonUserWidget
{ 
public:
	SDK_UNDEFINED(1,15090) /* TEnumAsByte<EFortBrushSize> */ __um(ImageSize);                                      // 0x02E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02E9   (0x0007)  MISSED
	class UImage*                                      Icon;                                                       // 0x02F0   (0x0008)  
	class UCommonTextBlock*                            Value;                                                      // 0x02F8   (0x0008)  
	class UCommonTextBlock*                            Name;                                                       // 0x0300   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadSummaryStatItem.SetAttributeModifierAccumulation
	// void SetAttributeModifierAccumulation(FFortAttributeModifierAccumulation& Accumulation);                              // [0xbeaf36c] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortWorkerSetBonusIcon
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortWorkerSetBonusIcon : public UCommonUserWidget
{ 
public:
	FGameplayTag                                       GameplayTag;                                                // 0x02E8   (0x0004)  
	SDK_UNDEFINED(1,15091) /* TEnumAsByte<EFortBrushSize> */ __um(ImageSize);                                      // 0x02EC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02ED   (0x0003)  MISSED
	class UImage*                                      Icon;                                                       // 0x02F0   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortWorkerSetBonusIcon.SetGameplayTag
	// void SetGameplayTag(FGameplayTag& InGameplayTag);                                                                     // [0xbeaf4d4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortWorkerSetBonusIcon.HandleDifferentGameplayTagSetBP
	// void HandleDifferentGameplayTagSetBP();                                                                               // [0x2177018] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortStatsOverviewDetailsBase
/// Size: 0x0038 (0x0002E8 - 0x000320)
class UFortStatsOverviewDetailsBase : public UCommonUserWidget
{ 
public:
	TArray<class UFortAttributeListItem_NUI*>          OverviewStats;                                              // 0x02E8   (0x0010)  
	class UFortAttributeList_NUI*                      DetailedStats;                                              // 0x02F8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0300   (0x0020)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortStatsOverviewDetailsBase.RequestStatsUpdate
	// void RequestStatsUpdate();                                                                                            // [0xbeaf1b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStatsOverviewDetailsBase.ListenForChanges
	// void ListenForChanges(bool bListen);                                                                                  // [0xbeaee88] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStatsOverviewDetailsBase.GetLocalPlayerId
	// FUniqueNetIdRepl GetLocalPlayerId();                                                                                  // [0xbead500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortLlamaStoreData
/// Size: 0x0040 (0x000030 - 0x000070)
class UFortLlamaStoreData : public UPrimaryDataAsset
{ 
public:
	SDK_UNDEFINED(16,15092) /* TArray<FText> */        __um(RandomLoadingTexts);                                   // 0x0030   (0x0010)  
	FName                                              NotEnoughCurrencyDialogCloseAction;                         // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	class UClass*                                      InspectWidgetClass;                                         // 0x0048   (0x0008)  
	float                                              ShowOfferDelay;                                             // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	class UClass*                                      StoreOpeningCardPackClass;                                  // 0x0058   (0x0008)  
	class UClass*                                      UnopenedCardpacksModalClass;                                // 0x0060   (0x0008)  
	class UClass*                                      UnopenedCardpacksModalClass_Legacy;                         // 0x0068   (0x0008)  
};

/// Struct /Script/SaveTheWorldUI.OfferGroup
/// Size: 0x0018 (0x000000 - 0x000018)
struct FOfferGroup
{ 
	SDK_UNDEFINED(16,15093) /* FString */              __um(Name);                                                 // 0x0000   (0x0010)  
	int32_t                                            MaxNumberToShow;                                            // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/SaveTheWorldUI.FortLlamaStoreBase
/// Size: 0x00A0 (0x0004E0 - 0x000580)
class UFortLlamaStoreBase : public UFortDirectAcquisitionWidgetBase
{ 
public:
	TArray<FOfferGroup>                                OfferCategoriesToDisplay;                                   // 0x04E0   (0x0010)  
	FDataTableRowHandle                                TencentDetailsActionData;                                   // 0x04F0   (0x0010)  
	FDataTableRowHandle                                AddVBucksActionData;                                        // 0x0500   (0x0010)  
	bool                                               bShouldShowAddVBucksAction;                                 // 0x0510   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0511   (0x0007)  MISSED
	class UDynamicEntryBox*                            OfferEntryBox;                                              // 0x0518   (0x0008)  
	class UCommonButtonGroupBase*                      OfferButtonGroup;                                           // 0x0520   (0x0008)  
	class UFortLlamaStoreDetailsBase*                  OfferDetails;                                               // 0x0528   (0x0008)  
	class UFortLlamaStoreData*                         StoreData;                                                  // 0x0530   (0x0008)  
	class UCommonButtonBase*                           Button_UnopenedLlamas;                                      // 0x0538   (0x0008)  
	class UFortLlamaStoreOfferInfo*                    PendingPurchaseOffer;                                       // 0x0540   (0x0008)  
	class UCommonActivatablePanelLegacy*               StoreOpeningCardPack;                                       // 0x0548   (0x0008)  
	bool                                               bHideSoldOffers;                                            // 0x0550   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2F];                                      // 0x0551   (0x002F)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase.SwapToCardEnterState
	// void SwapToCardEnterState();                                                                                          // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase.SetupFocus
	// void SetupFocus();                                                                                                    // [0xbeafa54] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase.OnStoreStateChanged
	// void OnStoreStateChanged(EFortStoreState NewStoreState);                                                              // [0xbeaf020] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase.OnStorePurchaseCompleted
	// void OnStorePurchaseCompleted();                                                                                      // [0xbeaeff8] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase.HandleTencentDetails
	// void HandleTencentDetails();                                                                                          // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase.HandleAddVBucks
	// void HandleAddVBucks();                                                                                               // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase.CreateTencentPuchaseOpenModal
	// void CreateTencentPuchaseOpenModal();                                                                                 // [0x2177018] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortLlamaStoreBase_Legacy
/// Size: 0x0078 (0x000650 - 0x0006C8)
class UFortLlamaStoreBase_Legacy : public UFortDirectAcquisitionWidgetBase_Legacy
{ 
public:
	TArray<FOfferGroup>                                OfferCategoriesToDisplay;                                   // 0x0650   (0x0010)  
	class UDynamicEntryBox*                            OfferEntryBox;                                              // 0x0660   (0x0008)  
	class UCommonButtonGroupLegacy*                    OfferButtonGroup;                                           // 0x0668   (0x0008)  
	class UFortLlamaStoreDetailsBase*                  OfferDetails;                                               // 0x0670   (0x0008)  
	class UFortLlamaStoreData*                         StoreData;                                                  // 0x0678   (0x0008)  
	class UCommonButtonLegacy*                         Button_UnopenedLlamas;                                      // 0x0680   (0x0008)  
	class UFortLlamaStoreOfferInfo*                    PendingPurchaseOffer;                                       // 0x0688   (0x0008)  
	class UCommonActivatablePanelLegacy*               StoreOpeningCardPack;                                       // 0x0690   (0x0008)  
	bool                                               bHideSoldOffers;                                            // 0x0698   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2F];                                      // 0x0699   (0x002F)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase_Legacy.SwapToCardEnterState
	// void SwapToCardEnterState();                                                                                          // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase_Legacy.SetupFocus
	// void SetupFocus();                                                                                                    // [0xbeafa68] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase_Legacy.OnStoreStateChanged
	// void OnStoreStateChanged(EFortStoreState NewStoreState);                                                              // [0xbeaf0a0] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase_Legacy.OnStorePurchaseCompleted
	// void OnStorePurchaseCompleted();                                                                                      // [0xbeaf00c] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase_Legacy.CreateTencentPuchaseOpenModal
	// void CreateTencentPuchaseOpenModal();                                                                                 // [0x2177018] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortLlamaStoreDetailsBase
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UFortLlamaStoreDetailsBase : public UCommonUserWidget
{ 
public:
	class UFortStoreFrontOfferInfo*                    OfferInfo;                                                  // 0x02E8   (0x0008)  
	class UCommonTileView*                             ItemTileView;                                               // 0x02F0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x02F8   (0x0010)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortLlamaStoreDetailsBase.StartUpgradingToSilver
	// void StartUpgradingToSilver();                                                                                        // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreDetailsBase.StartUpgradingToGold
	// void StartUpgradingToGold();                                                                                          // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreDetailsBase.SetScrollWidget
	// void SetScrollWidget();                                                                                               // [0xbeafa10] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreDetailsBase.OnOfferInfoChanged
	// void OnOfferInfoChanged(int32_t CurrentOfferRarity);                                                                  // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreDetailsBase.GetNotInCollectionBookCount
	// int32_t GetNotInCollectionBookCount();                                                                                // [0xa25fb78] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreDetailsBase.GetNewItemCount
	// int32_t GetNewItemCount();                                                                                            // [0xa260600] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreDetailsBase.GetChoiceItemCount
	// int32_t GetChoiceItemCount();                                                                                         // [0xbe89a5c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortLlamaStoreInspectionScreen
/// Size: 0x0010 (0x000830 - 0x000840)
class UFortLlamaStoreInspectionScreen : public UFortStoreFrontOfferDetailsWidgetBase
{ 
public:
	class UCommonTileView*                             GrantedItemTileView;                                        // 0x0830   (0x0008)  
	bool                                               bIsInChoiceViewMode;                                        // 0x0838   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0839   (0x0007)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortLlamaStoreInspectionScreen.IsItemChoicePack
	// bool IsItemChoicePack(class UObject* ItemToCheck);                                                                    // [0xbeaed54] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreInspectionScreen.GetSelectedCardPack
	// class UFortCardPackItem* GetSelectedCardPack();                                                                       // [0xbead640] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreInspectionScreen.GetInspectChoiceInputState
	// EInputActionState GetInspectChoiceInputState();                                                                       // [0xbead3ac] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortOpenCardPackModal
/// Size: 0x0040 (0x000570 - 0x0005B0)
class UFortOpenCardPackModal : public UFortActivatablePanel
{ 
public:
	class UCommonListView*                             CardPackList;                                               // 0x0570   (0x0008)  
	class UCommonButtonLegacy*                         OpenAllButton;                                              // 0x0578   (0x0008)  
	class UCommonButtonLegacy*                         CancelButton;                                               // 0x0580   (0x0008)  
	SDK_UNDEFINED(16,15094) /* FMulticastInlineDelegate */ __um(BPOnRequestOpenCardPack);                          // 0x0588   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0598   (0x0018)  MISSED
};

/// Class /Script/SaveTheWorldUI.FortOpenCardPackModal_Legacy
/// Size: 0x0040 (0x000570 - 0x0005B0)
class UFortOpenCardPackModal_Legacy : public UFortActivatablePanel
{ 
public:
	class UCommonListView*                             CardPackList;                                               // 0x0570   (0x0008)  
	class UCommonButtonLegacy*                         OpenAllButton;                                              // 0x0578   (0x0008)  
	class UCommonButtonLegacy*                         CancelButton;                                               // 0x0580   (0x0008)  
	SDK_UNDEFINED(16,15095) /* FMulticastInlineDelegate */ __um(BPOnRequestOpenCardPack);                          // 0x0588   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0598   (0x0018)  MISSED
};

/// Class /Script/SaveTheWorldUI.StWHUD
/// Size: 0x0168 (0x000418 - 0x000580)
class UStWHUD : public UFortUIStateWidgetBase
{ 
public:
	class UFortPickerData*                             PickerData;                                                 // 0x0418   (0x0008)  
	SDK_UNDEFINED(32,15096) /* TWeakObjectPtr<UClass*> */ __um(EmotePickerClass);                                  // 0x0420   (0x0020)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0440   (0x0008)  MISSED
	SDK_UNDEFINED(32,15097) /* TWeakObjectPtr<UClass*> */ __um(ManagementTabsScreenClass);                         // 0x0448   (0x0020)  
	SDK_UNDEFINED(32,15098) /* TWeakObjectPtr<UClass*> */ __um(TopBarClass);                                       // 0x0468   (0x0020)  
	SDK_UNDEFINED(32,15099) /* TWeakObjectPtr<UClass*> */ __um(MissionActivationWidgetClass);                      // 0x0488   (0x0020)  
	SDK_UNDEFINED(32,15100) /* TWeakObjectPtr<UClass*> */ __um(PostGameScreenClass);                               // 0x04A8   (0x0020)  
	SDK_UNDEFINED(32,15101) /* TWeakObjectPtr<UClass*> */ __um(DefenderConfigPanelClass);                          // 0x04C8   (0x0020)  
	SDK_UNDEFINED(16,15102) /* FMulticastInlineDelegate */ __um(OnSTWHUDMenuStackChanged);                         // 0x04E8   (0x0010)  
	int32_t                                            ReticleExtensionSize;                                       // 0x04F8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x04FC   (0x0004)  MISSED
	class UCommonUserWidget*                           BottomBarWidget;                                            // 0x0500   (0x0008)  
	class UOverlay*                                    PersistentHUDContent;                                       // 0x0508   (0x0008)  
	class UCommonActivatableWidget*                    TitleBar;                                                   // 0x0510   (0x0008)  
	class UOverlay*                                    IndicatorContent;                                           // 0x0518   (0x0008)  
	class UFortActivatableChatWidget*                  ChatWidget_STW;                                             // 0x0520   (0x0008)  
	SDK_UNDEFINED(32,15103) /* TWeakObjectPtr<UClass*> */ __um(InspectionScreenClass);                             // 0x0528   (0x0020)  
	class UFortUINavigationManager*                    NavigationManager;                                          // 0x0548   (0x0008)  
	unsigned char                                      UnknownData02_5[0x18];                                      // 0x0550   (0x0018)  MISSED
	class UFortWeaponReticleExtensionWidgetBase*       CurrentCustomReticleExtension;                              // 0x0568   (0x0008)  
	TArray<class UFortWeaponReticleExtensionWidgetBase*> RecentReticleExtensions;                                  // 0x0570   (0x0010)  


	/// Functions
	// Function /Script/SaveTheWorldUI.StWHUD.NativeHandleWeaponEquipped
	// void NativeHandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                         // [0xbeaef34] Final|Native|Public  
	// Function /Script/SaveTheWorldUI.StWHUD.HandlePickerOpenRequest
	// void HandlePickerOpenRequest(EFortPickerMode Mode, int32_t InitialOption, bool bIgnoreFirstAccept);                   // [0xbeaea18] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.StWHUD.HandleCursorModeChanged
	// void HandleCursorModeChanged(bool bCursorModeEnabled, FName ActionName, class UUserWidget* CursorModeContentWidget);  // [0xbeae834] Final|Native|Protected 
};

/// Class /Script/SaveTheWorldUI.FortTheaterSelect
/// Size: 0x0030 (0x000400 - 0x000430)
class UFortTheaterSelect : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0400   (0x0010)  MISSED
	class UOverlay*                                    OverlayMain;                                                // 0x0410   (0x0008)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0418   (0x0010)  MISSED
	class UFortQuestItemDefinition*                    DefaultRequiredCompletedQuest;                              // 0x0428   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortTheaterSelect.OnNavigationRight
	// void OnNavigationRight();                                                                                             // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortTheaterSelect.OnNavigationLeft
	// void OnNavigationLeft();                                                                                              // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortTheaterSelect.GetTheaterRecommendedRatingRange
	// bool GetTheaterRecommendedRatingRange(FString UniqueID, int32_t& Minimum, int32_t& Maximum);                          // [0xbeadd48] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortTheaterSelect_Legacy
/// Size: 0x0030 (0x000538 - 0x000568)
class UFortTheaterSelect_Legacy : public UCommonActivatablePanelLegacy
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0538   (0x0010)  MISSED
	class UOverlay*                                    OverlayMain;                                                // 0x0548   (0x0008)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0550   (0x0010)  MISSED
	class UFortQuestItemDefinition*                    DefaultRequiredCompletedQuest;                              // 0x0560   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortTheaterSelect_Legacy.OnNavigationRight
	// void OnNavigationRight();                                                                                             // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortTheaterSelect_Legacy.OnNavigationLeft
	// void OnNavigationLeft();                                                                                              // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortTheaterSelect_Legacy.GetTheaterRecommendedRatingRange
	// bool GetTheaterRecommendedRatingRange(FString UniqueID, int32_t& Minimum, int32_t& Maximum);                          // [0xbeadd48] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortHomebaseNodeItemTooltip
/// Size: 0x0020 (0x000050 - 0x000070)
class UFortHomebaseNodeItemTooltip : public UFortItemTooltip
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0050   (0x0020)  MISSED
};

/// Class /Script/SaveTheWorldUI.FortUpgradeDetailsBase
/// Size: 0x0040 (0x0002E8 - 0x000328)
class UFortUpgradeDetailsBase : public UCommonUserWidget
{ 
public:
	class UMediaPlayer*                                VideoPlayer;                                                // 0x02E8   (0x0008)  
	class UFortUpgradeInfo*                            UpgradeInfo;                                                // 0x02F0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x02F8   (0x0030)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortUpgradeDetailsBase.RequestPurchaseNode
	// void RequestPurchaseNode();                                                                                           // [0xbeaf17c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortUpgradeDetailsBase.OnUpgradeToDetailChanged
	// void OnUpgradeToDetailChanged();                                                                                      // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortUpgradeDetailsBase.OnShowIcon
	// void OnShowIcon(class UTexture2D* Icon);                                                                              // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortUpgradeDetailsBase.OnScreenActive
	// void OnScreenActive();                                                                                                // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortUpgradeDetailsBase.OnPurchaseComplete
	// void OnPurchaseComplete();                                                                                            // [0x2177018] Event|Public|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortUpgradeInfo
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UFortUpgradeInfo : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0028   (0x0020)  MISSED
	class UFortHomebaseNodeItemDefinition*             NodeItemDef;                                                // 0x0048   (0x0008)  
	unsigned char                                      UnknownData01_6[0x60];                                      // 0x0050   (0x0060)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.IsUpgradeUnlocked
	// bool IsUpgradeUnlocked();                                                                                             // [0x975cc40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.IsPreviewing
	// bool IsPreviewing();                                                                                                  // [0xbeaedec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetVideo
	// class UMediaSource* GetVideo();                                                                                       // [0xbeae50c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetUpgradeUnlockLevel
	// int32_t GetUpgradeUnlockLevel();                                                                                      // [0x2bfc2c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetTitle
	// FText GetTitle();                                                                                                     // [0xbeae494] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetNextLevelTitle
	// FText GetNextLevelTitle();                                                                                            // [0xbead5d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetNextLevelDescription
	// FText GetNextLevelDescription();                                                                                      // [0xbead594] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetNextLevel
	// int32_t GetNextLevel();                                                                                               // [0xbead570] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetMaxLevel
	// int32_t GetMaxLevel();                                                                                                // [0xbead558] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetItemName
	// FText GetItemName();                                                                                                  // [0xbead4bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetIcon
	// TWeakObjectPtr<UTexture2D*> GetIcon(EUpgradeInfoImageSize ImageSize);                                                 // [0xbead114] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetDisplayAttributes
	// bool GetDisplayAttributes(TArray<FFortDisplayAttribute>& OutDisplayAttributes);                                       // [0xbead020] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetDescription
	// FText GetDescription();                                                                                               // [0xbeacfbc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetCurrentLevel
	// int32_t GetCurrentLevel();                                                                                            // [0xbeacfa4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetCost
	// int32_t GetCost();                                                                                                    // [0xbeacf18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.ForwardPreview
	// void ForwardPreview();                                                                                                // [0xbeacedc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.CanPreview
	// bool CanPreview();                                                                                                    // [0xbeace84] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.CanAffordUpgrade
	// bool CanAffordUpgrade();                                                                                              // [0xbeace70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.BackwardPreview
	// void BackwardPreview();                                                                                               // [0xbeace34] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortUpgradeScreenBase
/// Size: 0x00C8 (0x000538 - 0x000600)
class UFortUpgradeScreenBase : public UCommonActivatablePanelLegacy
{ 
public:
	class UFortTabListWidgetBase*                      UpgradesTabSelector;                                        // 0x0538   (0x0008)  
	class UCommonTileView*                             UpgradesTileView;                                           // 0x0540   (0x0008)  
	class UCommonLoadGuard*                            UpgradeTileViewLoadGuard;                                   // 0x0548   (0x0008)  
	class UFortUpgradeDetailsBase*                     Details;                                                    // 0x0550   (0x0008)  
	SDK_UNDEFINED(80,15104) /* TMap<FName, EHomebaseNodeType> */ __um(TabToNodeTypeMap);                           // 0x0558   (0x0050)  
	class UFortItemDefinition*                         UpgradesRespecToken;                                        // 0x05A8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x05B0   (0x0050)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.UseUpgradesRespecToken
	// void UseUpgradesRespecToken();                                                                                        // [0xbeb0624] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.TogglePreview
	// void TogglePreview();                                                                                                 // [0xbeafa7c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.RefreshFocus
	// void RefreshFocus();                                                                                                  // [0xbeaf154] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.OnUseUpgradesRespecTokenComplete
	// void OnUseUpgradesRespecTokenComplete();                                                                              // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.OnUpgradeInfoChanged
	// void OnUpgradeInfoChanged();                                                                                          // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.OnPurchaseNodeComplete
	// void OnPurchaseNodeComplete();                                                                                        // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.IsPreviewing
	// bool IsPreviewing();                                                                                                  // [0xbeaee00] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.HandleTabSelected
	// void HandleTabSelected(FName TabID);                                                                                  // [0xbeaecd4] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.GetUpgradesRespecTokenCount
	// int32_t GetUpgradesRespecTokenCount();                                                                                // [0xbeae4e8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.CanPreview
	// bool CanPreview();                                                                                                    // [0xbeacea4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.AreUpgradesRespecTokensAvailable
	// bool AreUpgradesRespecTokensAvailable();                                                                              // [0xbeace0c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy
/// Size: 0x00C8 (0x000538 - 0x000600)
class UFortUpgradeScreenBase_Legacy : public UCommonActivatablePanelLegacy
{ 
public:
	class UFortTabListWidgetBase_Legacy*               UpgradesTabSelector;                                        // 0x0538   (0x0008)  
	class UCommonTileView*                             UpgradesTileView;                                           // 0x0540   (0x0008)  
	class UCommonLoadGuard*                            UpgradeTileViewLoadGuard;                                   // 0x0548   (0x0008)  
	class UFortUpgradeDetailsBase*                     Details;                                                    // 0x0550   (0x0008)  
	SDK_UNDEFINED(80,15105) /* TMap<FName, EHomebaseNodeType> */ __um(TabToNodeTypeMap);                           // 0x0558   (0x0050)  
	class UFortItemDefinition*                         UpgradesRespecToken;                                        // 0x05A8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x05B0   (0x0050)  MISSED


	/// Functions
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.UseUpgradesRespecToken
	// void UseUpgradesRespecToken();                                                                                        // [0xbeb0638] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.TogglePreview
	// void TogglePreview();                                                                                                 // [0xbeafb00] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.RefreshFocus
	// void RefreshFocus();                                                                                                  // [0xbeaf168] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.OnUseUpgradesRespecTokenComplete
	// void OnUseUpgradesRespecTokenComplete();                                                                              // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.OnUpgradeInfoChanged
	// void OnUpgradeInfoChanged();                                                                                          // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.OnPurchaseNodeComplete
	// void OnPurchaseNodeComplete();                                                                                        // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.IsPreviewing
	// bool IsPreviewing();                                                                                                  // [0xbeaee00] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.HandleTabSelected
	// void HandleTabSelected(FName TabID);                                                                                  // [0xbeaecd4] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.GetUpgradesRespecTokenCount
	// int32_t GetUpgradesRespecTokenCount();                                                                                // [0xbeae4e8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.CanPreview
	// bool CanPreview();                                                                                                    // [0xbeacea4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.AreUpgradesRespecTokensAvailable
	// bool AreUpgradesRespecTokensAvailable();                                                                              // [0xbeace0c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortUpgradeTileBase
/// Size: 0x0010 (0x0014E0 - 0x0014F0)
class UFortUpgradeTileBase : public UCommonButtonLegacy
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x14E0   (0x0008)  MISSED
	class UFortUpgradeInfo*                            UpgradeInfo;                                                // 0x14E8   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortUpgradeTileBase.OnDataRefresh
	// void OnDataRefresh(bool bUpgrade);                                                                                    // [0x2177018] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortUpgradeTileBase_Legacy
/// Size: 0x0010 (0x0014E0 - 0x0014F0)
class UFortUpgradeTileBase_Legacy : public UCommonButtonLegacy
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x14E0   (0x0008)  MISSED
	class UFortUpgradeInfo*                            UpgradeInfo;                                                // 0x14E8   (0x0008)  


	/// Functions
	// Function /Script/SaveTheWorldUI.FortUpgradeTileBase_Legacy.OnDataRefresh
	// void OnDataRefresh(bool bUpgrade);                                                                                    // [0x2177018] Event|Protected|BlueprintEvent 
};

/// Struct /Script/SaveTheWorldUI.SquadSlotSortTypes
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSquadSlotSortTypes
{ 
	TArray<ESquadSlotSortType>                         SortTypes;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/SaveTheWorldUI.ConsumedCriteriaData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FConsumedCriteriaData
{ 
	float                                              PowerMod;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FName>                                      CriteriaNames;                                              // 0x0008   (0x0010)  
};

/// Struct /Script/SaveTheWorldUI.FortHeroLoadoutHeroPickerTabConfiguration
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FFortHeroLoadoutHeroPickerTabConfiguration
{ 
	FFortItemFilterDefinition                          Filter;                                                     // 0x0000   (0x0060)  
	FFortItemSorterDefinition                          Sorter;                                                     // 0x0060   (0x0050)  
};

/// Struct /Script/SaveTheWorldUI.FortRefundDescriptionsData
/// Size: 0x0038 (0x000008 - 0x000040)
struct FFortRefundDescriptionsData : FTableRowBase
{ 
	SDK_UNDEFINED(16,15106) /* FString */              __um(SearchString);                                         // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,15107) /* FString */              __um(TargetReleaseVersion);                                 // 0x0018   (0x0010)  
	SDK_UNDEFINED(24,15108) /* FText */                __um(RefundDescriptionText);                                // 0x0028   (0x0018)  
};

/// Struct /Script/SaveTheWorldUI.FortQuestMapEventQuestSideBarData
/// Size: 0x0020 (0x000008 - 0x000028)
struct FFortQuestMapEventQuestSideBarData : FTableRowBase
{ 
	class UFortQuestItemDefinition*                    QuestItemDefinition;                                        // 0x0008   (0x0008)  
	SDK_UNDEFINED(16,15109) /* TArray<FString> */      __um(EventFlags);                                           // 0x0010   (0x0010)  
	bool                                               bShowAlways;                                                // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	float                                              CycleTime;                                                  // 0x0024   (0x0004)  
};

/// Struct /Script/SaveTheWorldUI.FortLandingPageDefenderSummaryInfo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FFortLandingPageDefenderSummaryInfo
{ 
	FName                                              SquadId;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(24,15110) /* FText */                __um(TheaterDisplayName);                                   // 0x0008   (0x0018)  
	SDK_UNDEFINED(16,15111) /* FString */              __um(TheaterUniqueId);                                      // 0x0020   (0x0010)  
};

/// Struct /Script/SaveTheWorldUI.FortAttributeModifierAccumulation
/// Size: 0x0048 (0x000000 - 0x000048)
struct FFortAttributeModifierAccumulation
{ 
	FGameplayTag                                       GameplayTag;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FGameplayAttribute                                 Attribute;                                                  // 0x0008   (0x0038)  
	SDK_UNDEFINED(1,15112) /* TEnumAsByte<EGameplayModOp> */ __um(ModifierOp);                                     // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              Magnitude;                                                  // 0x0044   (0x0004)  
};

/// Struct /Script/SaveTheWorldUI.FortSurvivorSquadSlottingFeedbackData
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FFortSurvivorSquadSlottingFeedbackData
{ 
	bool                                               HadLeaderMatch;                                             // 0x0000   (0x0001)  
	bool                                               HasLeaderMatch;                                             // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	SDK_UNDEFINED(80,15113) /* TMap<FGameplayTag, int32_t> */ __um(PreviousSetBonusCounts);                        // 0x0008   (0x0050)  
	SDK_UNDEFINED(80,15114) /* TMap<FGameplayTag, int32_t> */ __um(CurrentSetBonusCounts);                         // 0x0058   (0x0050)  
	int32_t                                            PreviousPersonalityMatchCount;                              // 0x00A8   (0x0004)  
	int32_t                                            CurrentPersonalityMatchCount;                               // 0x00AC   (0x0004)  
};

/// Struct /Script/SaveTheWorldUI.FortSurvivorSquadSelectorButtonSummaryStats
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FFortSurvivorSquadSelectorButtonSummaryStats
{ 
	FName                                              SquadId;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FGameplayAttribute                                 FortAttribute;                                              // 0x0008   (0x0038)  
	float                                              FortAttributeValue;                                         // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	FGameplayAttribute                                 FortTeamAttribute;                                          // 0x0048   (0x0038)  
	float                                              TeamFortAttributeValue;                                     // 0x0080   (0x0004)  
	float                                              SquadPowerValue;                                            // 0x0084   (0x0004)  
	SDK_UNDEFINED(24,15115) /* FText */                __um(FortAttributeName);                                    // 0x0088   (0x0018)  
};

/// Struct /Script/SaveTheWorldUI.FortSurvivorSquadSelectorButtonPersonalityMatches
/// Size: 0x0490 (0x000000 - 0x000490)
struct FFortSurvivorSquadSelectorButtonPersonalityMatches
{ 
	int32_t                                            NumPersonalityMatches;                                      // 0x0000   (0x0004)  
	int32_t                                            TotalNonLeaderSquadMembers;                                 // 0x0004   (0x0004)  
	bool                                               HavePersonalityIcons;                                       // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FFortMultiSizeBrush                                PersonalityIcons;                                           // 0x0010   (0x0480)  
};

/// Struct /Script/SaveTheWorldUI.HomebaseNodeDisplayData
/// Size: 0x0078 (0x000008 - 0x000080)
struct FHomebaseNodeDisplayData : FTableRowBase
{ 
	SDK_UNDEFINED(24,15116) /* FText */                __um(Title);                                                // 0x0008   (0x0018)  
	SDK_UNDEFINED(24,15117) /* FText */                __um(Description);                                          // 0x0020   (0x0018)  
	SDK_UNDEFINED(32,15118) /* TWeakObjectPtr<UTexture2D*> */ __um(LargePreviewImage);                             // 0x0038   (0x0020)  
	SDK_UNDEFINED(32,15119) /* TWeakObjectPtr<UTexture2D*> */ __um(SmallPreviewImage);                             // 0x0058   (0x0020)  
	class UMediaSource*                                PreviewVideoMediaSource;                                    // 0x0078   (0x0008)  
};

