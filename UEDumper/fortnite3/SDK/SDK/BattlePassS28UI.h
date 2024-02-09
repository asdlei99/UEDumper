
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: BattlePassBase
/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameplayTags
/// dependency: UMG

/// Enum /Script/BattlePassS28UI.EBattlePassStatusBarTypeS28
/// Size: 0x08
enum class EBattlePassStatusBarTypeS28 : uint8_t
{
	EBattlePassStatusBarTypeS28__Hidden                                              = 0,
	EBattlePassStatusBarTypeS28__Prerequisite                                        = 1,
	EBattlePassStatusBarTypeS28__Delayed                                             = 2,
	EBattlePassStatusBarTypeS28__Unclaimable                                         = 3,
	EBattlePassStatusBarTypeS28__Claimable                                           = 4,
	EBattlePassStatusBarTypeS28__Special                                             = 5,
	EBattlePassStatusBarTypeS28__Owned                                               = 6,
	EBattlePassStatusBarTypeS28__EBattlePassStatusBarTypeS28_MAX                     = 7
};

/// Enum /Script/BattlePassS28UI.ERewardWarningTooltipType28
/// Size: 0x04
enum class ERewardWarningTooltipType28 : uint8_t
{
	ERewardWarningTooltipType28__None                                                = 0,
	ERewardWarningTooltipType28__Custom                                              = 1,
	ERewardWarningTooltipType28__AgeGating                                           = 2,
	ERewardWarningTooltipType28__Max                                                 = 3
};

/// Class /Script/BattlePassS28UI.BattlePassBulkBuyPageS28
/// Size: 0x0000 (0x0005A0 - 0x0005A0)
class UBattlePassBulkBuyPageS28 : public UFortBattlePassBulkBuyPageBase
{ 
public:
};

/// Class /Script/BattlePassS28UI.BattlePassLandingPageS28
/// Size: 0x0068 (0x000550 - 0x0005B8)
class UBattlePassLandingPageS28 : public UBattlePassLandingPageBase
{ 
public:
	class UBattlePassLandingPageButton*                Button_Rewards;                                             // 0x0550   (0x0008)  
	class UBattlePassLandingPageButton*                Button_CharacterCustomizer;                                 // 0x0558   (0x0008)  
	class UBattlePassLandingPageButton*                Button_BonusRewards;                                        // 0x0560   (0x0008)  
	class UBattlePassLandingPageButton*                Button_Quests;                                              // 0x0568   (0x0008)  
	class UBattlePassLandingPageButton*                Button_JoinSubscription;                                    // 0x0570   (0x0008)  
	class UBattlePassLandingPageButton*                Button_WeeklyRewards;                                       // 0x0578   (0x0008)  
	class UCommonTextBlock*                            Text_SeasonNumber;                                          // 0x0580   (0x0008)  
	class UAthenaSeasonItemData_BattleStar*            SeasonData_BattleStar;                                      // 0x0588   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0590   (0x0028)  MISSED


	/// Functions
	// Function /Script/BattlePassS28UI.BattlePassLandingPageS28.OnBattlePassSubscriptionAllowed
	// void OnBattlePassSubscriptionAllowed(bool bSubscriptionAllowed);                                                      // [0x2047e54] Event|Public|BlueprintEvent 
};

/// Class /Script/BattlePassS28UI.BattlePassRewardPageS28
/// Size: 0x00A0 (0x000518 - 0x0005B8)
class UBattlePassRewardPageS28 : public UBattlePassRewardPageBase
{ 
public:
	class UClass*                                      RewardsTrackClass;                                          // 0x0518   (0x0008)  
	class UFortBattlePassTile*                         FocusedReward;                                              // 0x0520   (0x0008)  
	TArray<class UFortBattlePassRewardTrack*>          TrackPages;                                                 // 0x0528   (0x0010)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0538   (0x0004)  MISSED
	ERewardPageType                                    RewardPageType;                                             // 0x053C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x053D   (0x0003)  MISSED
	int32_t                                            HoldTileTooltip_ClaimedRewardsToHide;                       // 0x0540   (0x0004)  
	int32_t                                            HoldTileTooltip_ClaimedBattlePassToHide;                    // 0x0544   (0x0004)  
	int32_t                                            HoldTileTooltip_RequiredBattleStarsToShow;                  // 0x0548   (0x0004)  
	int32_t                                            LevelRequirementUnlockTooltip_RequiredLevel;                // 0x054C   (0x0004)  
	int32_t                                            ClaimAllRewardsTooltip_RequiredLevelToShow;                 // 0x0550   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0554   (0x0004)  MISSED
	class UCommonAnimatedSwitcher*                     Switcher_RewardTracks;                                      // 0x0558   (0x0008)  
	class UFortBattlePassTutorialTooltipS28*           TutorialTooltip_LevelRequirementUnlock;                     // 0x0560   (0x0008)  
	class UFortBattlePassTutorialTooltipS28*           TutorialTooltip_ClaimAllRewards;                            // 0x0568   (0x0008)  
	class UFortBattlePassTutorialTooltipS28*           TutorialTooltip_HoldTile;                                   // 0x0570   (0x0008)  
	class UAthenaSeasonItemData_BattleStar*            SeasonData_BattleStar;                                      // 0x0578   (0x0008)  
	class UBattlePassBulkBuyInputData*                 BulkBuyInputData;                                           // 0x0580   (0x0008)  
	class UCommonButtonBase*                           Button_NextPage;                                            // 0x0588   (0x0008)  
	class UCommonButtonBase*                           Button_PreviousPage;                                        // 0x0590   (0x0008)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x0598   (0x0020)  MISSED


	/// Functions
	// Function /Script/BattlePassS28UI.BattlePassRewardPageS28.OnPageChanged
	// void OnPageChanged(int32_t PageNumber, int32_t RewardPageTotal);                                                      // [0x2047e54] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassRewardPageS28.OnLoadingScreenSelectedChanged
	// void OnLoadingScreenSelectedChanged(bool bIsSelected);                                                                // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassRewardPageS28.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType InputType);                                                                // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassRewardPageS28.OnInitForPageType
	// void OnInitForPageType(ERewardPageType InRewardPageType);                                                             // [0x2047e54] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassRewardPageS28.HandleRewardTracksBoundaryNavigation
	// class UWidget* HandleRewardTracksBoundaryNavigation(EUINavigation InNavigation);                                      // [0xaabc040] Final|Native|Private 
	// Function /Script/BattlePassS28UI.BattlePassRewardPageS28.GetRewardPageBackgroundData
	// FVaultWorldBackgroundData GetRewardPageBackgroundData();                                                              // [0xaabbc64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/BattlePassS28UI.BattlePassScreenS28
/// Size: 0x04E8 (0x000940 - 0x000E28)
class UBattlePassScreenS28 : public UBattlePassScreenBase
{ 
public:
	class UClass*                                      ResourcePurchaseScreenClass;                                // 0x0940   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0948   (0x0008)  MISSED
	class UCommonButtonBase*                           Button_Close;                                               // 0x0950   (0x0008)  
	class UCommonButtonLegacy*                         Button_TouchClose;                                          // 0x0958   (0x0008)  
	class UCommonButtonBase*                           Button_ToggleViewDetails;                                   // 0x0960   (0x0008)  
	class UCommonButtonBase*                           Button_ReplayTrailer;                                       // 0x0968   (0x0008)  
	class UCommonButtonBase*                           Button_ReplayTrailer_Mobile;                                // 0x0970   (0x0008)  
	class UCommonButtonBase*                           Button_ShowAbout;                                           // 0x0978   (0x0008)  
	class UCommonButtonBase*                           Button_ShowAbout_Mobile;                                    // 0x0980   (0x0008)  
	class UCommonButtonBase*                           Button_ShowAboutCustomization;                              // 0x0988   (0x0008)  
	class UCommonButtonBase*                           Button_ShowAboutCustomization_Mobile;                       // 0x0990   (0x0008)  
	class UCommonButtonBase*                           Button_BulkBuyRewards;                                      // 0x0998   (0x0008)  
	class UCommonButtonBase*                           Button_PageComplete;                                        // 0x09A0   (0x0008)  
	class UCommonButtonBase*                           Button_GiftBattlePass;                                      // 0x09A8   (0x0008)  
	class UCommonVisibilitySwitcher*                   VisibilitySwitcher_PlatformBasedButtons;                    // 0x09B0   (0x0008)  
	class UFortBattlePassResourcesWidgetBase*          BattlePassCurrencyPanel;                                    // 0x09B8   (0x0008)  
	class UAthenaExclusiveRewardBanner*                AthenaExclusiveRewardBanner;                                // 0x09C0   (0x0008)  
	class UCommonTextBlock*                            Text_Description;                                           // 0x09C8   (0x0008)  
	class UCommonTextBlock*                            Text_ItemName;                                              // 0x09D0   (0x0008)  
	class UAthenaRewardItemTypeRarityTag*              ItemRewardTag;                                              // 0x09D8   (0x0008)  
	class UCommonTextBlock*                            Text_SetDetails;                                            // 0x09E0   (0x0008)  
	class UWidgetSwitcher*                             Switcher_PrerequisiteInfo;                                  // 0x09E8   (0x0008)  
	class UCommonTextBlock*                            Text_Prerequisite;                                          // 0x09F0   (0x0008)  
	class UWidget*                                     Widget_PrerequisiteProgress;                                // 0x09F8   (0x0008)  
	class UWidget*                                     Widget_LevelUpMessageFree;                                  // 0x0A00   (0x0008)  
	class UWidget*                                     Widget_LevelUpMessagePremium;                               // 0x0A08   (0x0008)  
	class UWidget*                                     Widget_CustomResourceMessage;                               // 0x0A10   (0x0008)  
	class UWidgetSwitcher*                             Switcher_PrimaryAction;                                     // 0x0A18   (0x0008)  
	class UFortCTAButton*                              Button_BuyLevels;                                           // 0x0A20   (0x0008)  
	class UFortCTAButton*                              Button_BuyBattlePass;                                       // 0x0A28   (0x0008)  
	class UFortCTAButton*                              Button_ClaimReward;                                         // 0x0A30   (0x0008)  
	class UCommonButtonBase*                           Button_ViewQuests;                                          // 0x0A38   (0x0008)  
	class UCommonButtonBase*                           Button_PreviewLoadingScreen;                                // 0x0A40   (0x0008)  
	class UFortDynamicEntryBox*                        ItemVMCards;                                                // 0x0A48   (0x0008)  
	class UBorder*                                     Tag_RequiresBP;                                             // 0x0A50   (0x0008)  
	class UBorder*                                     Tag_PageLocked;                                             // 0x0A58   (0x0008)  
	class UBorder*                                     Tag_BaseItem;                                               // 0x0A60   (0x0008)  
	class UBorder*                                     Tag_Prerequisite;                                           // 0x0A68   (0x0008)  
	class UBorder*                                     Tag_CompletePage;                                           // 0x0A70   (0x0008)  
	class UBorder*                                     Tag_NotEnough_Currency;                                     // 0x0A78   (0x0008)  
	class UBorder*                                     Tag_Cost;                                                   // 0x0A80   (0x0008)  
	class UBorder*                                     Tag_Owned;                                                  // 0x0A88   (0x0008)  
	class UBorder*                                     Tag_Delayed;                                                // 0x0A90   (0x0008)  
	FGameplayTag                                       QuestCategoryParentTag;                                     // 0x0A98   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0A9C   (0x0004)  MISSED
	class UClass*                                      PreviewLoadingScreenWidgetClass;                            // 0x0AA0   (0x0008)  
	FGameplayTag                                       JunoTag;                                                    // 0x0AA8   (0x0004)  
	unsigned char                                      UnknownData02_5[0x5C];                                      // 0x0AAC   (0x005C)  MISSED
	class UAthenaSeasonItemData_BattleStar*            SeasonData_BattleStar;                                      // 0x0B08   (0x0008)  
	class UAthenaSeasonItemEntryBase*                  CurrentSelectedEntry;                                       // 0x0B10   (0x0008)  
	TArray<EBattlePassView>                            SwitcherSubPageTypes;                                       // 0x0B18   (0x0010)  
	class UCommonVisibilitySwitcher*                   VisibilitySwitcher_SubPage;                                 // 0x0B28   (0x0008)  
	unsigned char                                      UnknownData03_5[0x100];                                     // 0x0B30   (0x0100)  MISSED
	class UFortItemDefinition*                         SeasonalBaseCustomizationItem;                              // 0x0C30   (0x0008)  
	bool                                               bHasSubscription;                                           // 0x0C38   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0C39   (0x0007)  MISSED
	class UFortBattlePassTutorialTooltipS28*           TutorialTooltip_BattleStars;                                // 0x0C40   (0x0008)  
	class UFortBattlePassTutorialTooltipS28*           TutorialTooltip_StylePoints;                                // 0x0C48   (0x0008)  
	class UFortSwipePanel*                             SwipePanel_Navigation;                                      // 0x0C50   (0x0008)  
	unsigned char                                      UnknownData05_6[0x1D0];                                     // 0x0C58   (0x01D0)  MISSED


	/// Functions
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OverviewShowAnimationFinished
	// void OverviewShowAnimationFinished();                                                                                 // [0x307d48c] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnUpdateStatusBar
	// void OnUpdateStatusBar(FText& StatusText, EBattlePassStatusBarTypeS28& BarType);                                      // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnUpdateOwnedOrEquippedTag
	// void OnUpdateOwnedOrEquippedTag(FText& StatusText);                                                                   // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnUpdateBattlePassRequiredBar
	// void OnUpdateBattlePassRequiredBar(bool bPassRequiredVisible);                                                        // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnTransitionItemDetails
	// void OnTransitionItemDetails(bool bTransitionForward);                                                                // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnSetWeeklyRewardsInfo
	// void OnSetWeeklyRewardsInfo(FTimespan& DelayTimespan, int32_t AvailableRewards, int32_t OwnedRewards, int32_t TotalRewards, int32_t AvailablePages, int32_t CompletedPages, int32_t TotalPages); // [0x2047e54] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnSetWarningToolTip
	// void OnSetWarningToolTip(ERewardWarningTooltipType28& WarningTooltipType, FText& Description);                        // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnSetResourcePrice
	// void OnSetResourcePrice(int32_t Cost, class UFortPersistentResourceItemDefinition* PersistentResource);               // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnSetQuestRewardsInfo
	// void OnSetQuestRewardsInfo(FTimespan& DelayTimespan, int32_t OwnedRewards, int32_t TotalRewards, int32_t CompletedPages, int32_t TotalPages); // [0x2047e54] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnSetPrerequisiteInfo
	// void OnSetPrerequisiteInfo(FText& Description, int32_t CurrentAmount, int32_t NeededAmount, EBattlePassRewardPrerequisiteType PrerequisiteType, bool bShowPrerequisiteLock); // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnSetItemPrice
	// void OnSetItemPrice(int32_t Cost, EBattlePassCurrencyType CurrencyType);                                              // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnSetEquipButtonEnable
	// void OnSetEquipButtonEnable(bool bIsEnable);                                                                          // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnSetCrewInfo
	// void OnSetCrewInfo(bool bIsNextMonthRewards, FText& MonthText, FTimespan& NextMonthlyRewardTimespan, FText& CharacterDisplayName, FText& CharacterDescription); // [0x2047e54] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnSetCoverPageData
	// void OnSetCoverPageData(FText& Title, FText& Description, bool bPageComplete);                                        // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnSetBonusRewardsInfo
	// void OnSetBonusRewardsInfo(bool bIsUnlocked, int32_t OwnedRewards, int32_t TotalRewards, int32_t CompletedPages, int32_t TotalPages, int32_t ClaimedOutfits, int32_t TotalOutfits); // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnSetBonusInfo
	// void OnSetBonusInfo(FBonusInfoMiniTagData& BonusInfo);                                                                // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnSetBaseRewardsInfo
	// void OnSetBaseRewardsInfo(int32_t OwnedRewards, int32_t TotalRewards, int32_t CompletedPages, int32_t TotalPages);    // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnItemVmCardUpdate
	// void OnItemVmCardUpdate(FExpandedItemVM ItemVMs, class UAthenaSeasonItemEntryBase* EntrySelected);                    // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnItemDelayed
	// void OnItemDelayed(FTimespan Delay);                                                                                  // [0x2047e54] Event|Protected|HasDefaults|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnInsufficientResource
	// void OnInsufficientResource(class UFortPersistentResourceItemDefinition* PersistentResource);                         // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnInsufficientFunds
	// void OnInsufficientFunds(EBattlePassCurrencyType CurrencyType);                                                       // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnGameModeCompatibilityTagUpdate
	// void OnGameModeCompatibilityTagUpdate(class UFortItemDefinition* ItemDefinition);                                     // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnBattlePassOwned
	// void OnBattlePassOwned();                                                                                             // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnBattlePassGiftingAllowed
	// void OnBattlePassGiftingAllowed(bool bGiftingAllowed);                                                                // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.IsSeasonalCustomizationItemOwned
	// bool IsSeasonalCustomizationItemOwned();                                                                              // [0xaabc138] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.HandleSwitcherVisibilityShown
	// void HandleSwitcherVisibilityShown();                                                                                 // [0xaabc110] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.HandleItemVMCardClicked
	// void HandleItemVMCardClicked(class UFortItemVM* ItemVM, class UAthenaSeasonItemEntryBase* EntrySelected);             // [0xaabbf00] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.HandleFullScreenMapToggled
	// void HandleFullScreenMapToggled(bool bMapVisible);                                                                    // [0xaabbe3c] Final|Native|Private 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.HandleClaimRewardComplete
	// void HandleClaimRewardComplete(bool bSuccess, TArray<FString>& OfferTemplateIdList);                                  // [0xaabbd14] Final|Native|Private|HasOutParms 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.GoBackOneScreen
	// void GoBackOneScreen();                                                                                               // [0xaabbd00] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.GetQuestPageDelay
	// FTimespan GetQuestPageDelay();                                                                                        // [0xaabbc38] Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.GetEquipButtonEnable
	// bool GetEquipButtonEnable();                                                                                          // [0xaabbc1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/BattlePassS28UI.FortBattlePassCustomSkinPageS28
/// Size: 0x0018 (0x0005C8 - 0x0005E0)
class UFortBattlePassCustomSkinPageS28 : public UFortBattlePassCustomSkinPageBase
{ 
public:
	SDK_UNDEFINED(16,11794) /* FString */              __um(ClaimBaseItemTooltip_ClaimCheckTemplateId);            // 0x05C8   (0x0010)  
	class UFortBattlePassTutorialTooltip*              TutorialTooltip_ClaimBaseItem;                              // 0x05D8   (0x0008)  
};

/// Class /Script/BattlePassS28UI.FortBattlePassResourcesWidgetS28
/// Size: 0x0020 (0x0002F8 - 0x000318)
class UFortBattlePassResourcesWidgetS28 : public UFortBattlePassResourcesWidgetBase
{ 
public:
	class UCommonTextBlock*                            Text_BattleStarsAmount;                                     // 0x02F8   (0x0008)  
	class UCommonTextBlock*                            Text_StylePointsAmount;                                     // 0x0300   (0x0008)  
	class UBorder*                                     Border_StylePointsRewardsTag;                               // 0x0308   (0x0008)  
	class UBorder*                                     Border_BattleStarsRewardsTag;                               // 0x0310   (0x0008)  


	/// Functions
	// Function /Script/BattlePassS28UI.FortBattlePassResourcesWidgetS28.OnStylePointsRewardsSet
	// void OnStylePointsRewardsSet(int32_t Rewards);                                                                        // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS28UI.FortBattlePassResourcesWidgetS28.OnBattleStarRewardsSet
	// void OnBattleStarRewardsSet(int32_t Rewards);                                                                         // [0x2047e54] Event|Protected|BlueprintEvent 
};

/// Class /Script/BattlePassS28UI.FortBattlePassTutorialTooltipS28
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortBattlePassTutorialTooltipS28 : public UCommonUserWidget
{ 
public:
	class UCommonRichTextBlock*                        Text_Tooltip;                                               // 0x02E8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x02F0   (0x0008)  MISSED


	/// Functions
	// Function /Script/BattlePassS28UI.FortBattlePassTutorialTooltipS28.ShowTooltip
	// void ShowTooltip();                                                                                                   // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS28UI.FortBattlePassTutorialTooltipS28.SetText
	// void SetText(FText Text);                                                                                             // [0xaa96c1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassS28UI.FortBattlePassTutorialTooltipS28.HideTooltip
	// void HideTooltip();                                                                                                   // [0x2047e54] Event|Protected|BlueprintEvent 
};

