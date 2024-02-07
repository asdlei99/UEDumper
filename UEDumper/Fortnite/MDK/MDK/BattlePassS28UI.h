
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: BattlePassBase
/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameplayTags
/// dependency: UMG

/// Class /Script/BattlePassS28UI.BattlePassBulkBuyPageS28
/// Size: 0x0000 (0x0005A0 - 0x0005A0)
class UBattlePassBulkBuyPageS28 : public UFortBattlePassBulkBuyPageBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1440;

public:
};

/// Class /Script/BattlePassS28UI.BattlePassLandingPageS28
/// Size: 0x0068 (0x000550 - 0x0005B8)
class UBattlePassLandingPageS28 : public UBattlePassLandingPageBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1464;

public:
	CMember(class UBattlePassLandingPageButton*)       Button_Rewards                                              OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(class UBattlePassLandingPageButton*)       Button_CharacterCustomizer                                  OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(class UBattlePassLandingPageButton*)       Button_BonusRewards                                         OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(class UBattlePassLandingPageButton*)       Button_Quests                                               OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(class UBattlePassLandingPageButton*)       Button_JoinSubscription                                     OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(class UBattlePassLandingPageButton*)       Button_WeeklyRewards                                        OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_SeasonNumber                                           OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(class UAthenaSeasonItemData_BattleStar*)   SeasonData_BattleStar                                       OFFSET(get<T>, {0x588, 8, 0, 0})


	/// Functions
	// Function /Script/BattlePassS28UI.BattlePassLandingPageS28.OnBattlePassSubscriptionAllowed
	// void OnBattlePassSubscriptionAllowed(bool bSubscriptionAllowed);                                                         // [0x2047e54] Event|Public|BlueprintEvent 
};

/// Class /Script/BattlePassS28UI.BattlePassRewardPageS28
/// Size: 0x00A0 (0x000518 - 0x0005B8)
class UBattlePassRewardPageS28 : public UBattlePassRewardPageBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1464;

public:
	CMember(class UClass*)                             RewardsTrackClass                                           OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(class UFortBattlePassTile*)                FocusedReward                                               OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(TArray<class UFortBattlePassRewardTrack*>) TrackPages                                                  OFFSET(get<T>, {0x528, 16, 0, 0})
	CMember(ERewardPageType)                           RewardPageType                                              OFFSET(get<T>, {0x53C, 1, 0, 0})
	DMember(int32_t)                                   HoldTileTooltip_ClaimedRewardsToHide                        OFFSET(get<int32_t>, {0x540, 4, 0, 0})
	DMember(int32_t)                                   HoldTileTooltip_ClaimedBattlePassToHide                     OFFSET(get<int32_t>, {0x544, 4, 0, 0})
	DMember(int32_t)                                   HoldTileTooltip_RequiredBattleStarsToShow                   OFFSET(get<int32_t>, {0x548, 4, 0, 0})
	DMember(int32_t)                                   LevelRequirementUnlockTooltip_RequiredLevel                 OFFSET(get<int32_t>, {0x54C, 4, 0, 0})
	DMember(int32_t)                                   ClaimAllRewardsTooltip_RequiredLevelToShow                  OFFSET(get<int32_t>, {0x550, 4, 0, 0})
	CMember(class UCommonAnimatedSwitcher*)            Switcher_RewardTracks                                       OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(class UFortBattlePassTutorialTooltipS28*)  TutorialTooltip_LevelRequirementUnlock                      OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(class UFortBattlePassTutorialTooltipS28*)  TutorialTooltip_ClaimAllRewards                             OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(class UFortBattlePassTutorialTooltipS28*)  TutorialTooltip_HoldTile                                    OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(class UAthenaSeasonItemData_BattleStar*)   SeasonData_BattleStar                                       OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(class UBattlePassBulkBuyInputData*)        BulkBuyInputData                                            OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_NextPage                                             OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_PreviousPage                                         OFFSET(get<T>, {0x590, 8, 0, 0})


	/// Functions
	// Function /Script/BattlePassS28UI.BattlePassRewardPageS28.OnPageChanged
	// void OnPageChanged(int32_t PageNumber, int32_t RewardPageTotal);                                                         // [0x2047e54] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassRewardPageS28.OnLoadingScreenSelectedChanged
	// void OnLoadingScreenSelectedChanged(bool bIsSelected);                                                                   // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassRewardPageS28.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType InputType);                                                                   // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassRewardPageS28.OnInitForPageType
	// void OnInitForPageType(ERewardPageType InRewardPageType);                                                                // [0x2047e54] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassRewardPageS28.HandleRewardTracksBoundaryNavigation
	// class UWidget* HandleRewardTracksBoundaryNavigation(EUINavigation InNavigation);                                         // [0xaabc040] Final|Native|Private 
	// Function /Script/BattlePassS28UI.BattlePassRewardPageS28.GetRewardPageBackgroundData
	// FVaultWorldBackgroundData GetRewardPageBackgroundData();                                                                 // [0xaabbc64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/BattlePassS28UI.BattlePassScreenS28
/// Size: 0x04E8 (0x000940 - 0x000E28)
class UBattlePassScreenS28 : public UBattlePassScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3624;

public:
	CMember(class UClass*)                             ResourcePurchaseScreenClass                                 OFFSET(get<T>, {0x940, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Close                                                OFFSET(get<T>, {0x950, 8, 0, 0})
	CMember(class UCommonButtonLegacy*)                Button_TouchClose                                           OFFSET(get<T>, {0x958, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_ToggleViewDetails                                    OFFSET(get<T>, {0x960, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_ReplayTrailer                                        OFFSET(get<T>, {0x968, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_ReplayTrailer_Mobile                                 OFFSET(get<T>, {0x970, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_ShowAbout                                            OFFSET(get<T>, {0x978, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_ShowAbout_Mobile                                     OFFSET(get<T>, {0x980, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_ShowAboutCustomization                               OFFSET(get<T>, {0x988, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_ShowAboutCustomization_Mobile                        OFFSET(get<T>, {0x990, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_BulkBuyRewards                                       OFFSET(get<T>, {0x998, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_PageComplete                                         OFFSET(get<T>, {0x9A0, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_GiftBattlePass                                       OFFSET(get<T>, {0x9A8, 8, 0, 0})
	CMember(class UCommonVisibilitySwitcher*)          VisibilitySwitcher_PlatformBasedButtons                     OFFSET(get<T>, {0x9B0, 8, 0, 0})
	CMember(class UFortBattlePassResourcesWidgetBase*) BattlePassCurrencyPanel                                     OFFSET(get<T>, {0x9B8, 8, 0, 0})
	CMember(class UAthenaExclusiveRewardBanner*)       AthenaExclusiveRewardBanner                                 OFFSET(get<T>, {0x9C0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Description                                            OFFSET(get<T>, {0x9C8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_ItemName                                               OFFSET(get<T>, {0x9D0, 8, 0, 0})
	CMember(class UAthenaRewardItemTypeRarityTag*)     ItemRewardTag                                               OFFSET(get<T>, {0x9D8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_SetDetails                                             OFFSET(get<T>, {0x9E0, 8, 0, 0})
	CMember(class UWidgetSwitcher*)                    Switcher_PrerequisiteInfo                                   OFFSET(get<T>, {0x9E8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Prerequisite                                           OFFSET(get<T>, {0x9F0, 8, 0, 0})
	CMember(class UWidget*)                            Widget_PrerequisiteProgress                                 OFFSET(get<T>, {0x9F8, 8, 0, 0})
	CMember(class UWidget*)                            Widget_LevelUpMessageFree                                   OFFSET(get<T>, {0xA00, 8, 0, 0})
	CMember(class UWidget*)                            Widget_LevelUpMessagePremium                                OFFSET(get<T>, {0xA08, 8, 0, 0})
	CMember(class UWidget*)                            Widget_CustomResourceMessage                                OFFSET(get<T>, {0xA10, 8, 0, 0})
	CMember(class UWidgetSwitcher*)                    Switcher_PrimaryAction                                      OFFSET(get<T>, {0xA18, 8, 0, 0})
	CMember(class UFortCTAButton*)                     Button_BuyLevels                                            OFFSET(get<T>, {0xA20, 8, 0, 0})
	CMember(class UFortCTAButton*)                     Button_BuyBattlePass                                        OFFSET(get<T>, {0xA28, 8, 0, 0})
	CMember(class UFortCTAButton*)                     Button_ClaimReward                                          OFFSET(get<T>, {0xA30, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_ViewQuests                                           OFFSET(get<T>, {0xA38, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_PreviewLoadingScreen                                 OFFSET(get<T>, {0xA40, 8, 0, 0})
	CMember(class UFortDynamicEntryBox*)               ItemVMCards                                                 OFFSET(get<T>, {0xA48, 8, 0, 0})
	CMember(class UBorder*)                            Tag_RequiresBP                                              OFFSET(get<T>, {0xA50, 8, 0, 0})
	CMember(class UBorder*)                            Tag_PageLocked                                              OFFSET(get<T>, {0xA58, 8, 0, 0})
	CMember(class UBorder*)                            Tag_BaseItem                                                OFFSET(get<T>, {0xA60, 8, 0, 0})
	CMember(class UBorder*)                            Tag_Prerequisite                                            OFFSET(get<T>, {0xA68, 8, 0, 0})
	CMember(class UBorder*)                            Tag_CompletePage                                            OFFSET(get<T>, {0xA70, 8, 0, 0})
	CMember(class UBorder*)                            Tag_NotEnough_Currency                                      OFFSET(get<T>, {0xA78, 8, 0, 0})
	CMember(class UBorder*)                            Tag_Cost                                                    OFFSET(get<T>, {0xA80, 8, 0, 0})
	CMember(class UBorder*)                            Tag_Owned                                                   OFFSET(get<T>, {0xA88, 8, 0, 0})
	CMember(class UBorder*)                            Tag_Delayed                                                 OFFSET(get<T>, {0xA90, 8, 0, 0})
	SMember(FGameplayTag)                              QuestCategoryParentTag                                      OFFSET(getStruct<T>, {0xA98, 4, 0, 0})
	CMember(class UClass*)                             PreviewLoadingScreenWidgetClass                             OFFSET(get<T>, {0xAA0, 8, 0, 0})
	SMember(FGameplayTag)                              JunoTag                                                     OFFSET(getStruct<T>, {0xAA8, 4, 0, 0})
	CMember(class UAthenaSeasonItemData_BattleStar*)   SeasonData_BattleStar                                       OFFSET(get<T>, {0xB08, 8, 0, 0})
	CMember(class UAthenaSeasonItemEntryBase*)         CurrentSelectedEntry                                        OFFSET(get<T>, {0xB10, 8, 0, 0})
	CMember(TArray<EBattlePassView>)                   SwitcherSubPageTypes                                        OFFSET(get<T>, {0xB18, 16, 0, 0})
	CMember(class UCommonVisibilitySwitcher*)          VisibilitySwitcher_SubPage                                  OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(class UFortItemDefinition*)                SeasonalBaseCustomizationItem                               OFFSET(get<T>, {0xC30, 8, 0, 0})
	DMember(bool)                                      bHasSubscription                                            OFFSET(get<bool>, {0xC38, 1, 0, 0})
	CMember(class UFortBattlePassTutorialTooltipS28*)  TutorialTooltip_BattleStars                                 OFFSET(get<T>, {0xC40, 8, 0, 0})
	CMember(class UFortBattlePassTutorialTooltipS28*)  TutorialTooltip_StylePoints                                 OFFSET(get<T>, {0xC48, 8, 0, 0})
	CMember(class UFortSwipePanel*)                    SwipePanel_Navigation                                       OFFSET(get<T>, {0xC50, 8, 0, 0})


	/// Functions
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OverviewShowAnimationFinished
	// void OverviewShowAnimationFinished();                                                                                    // [0x307d48c] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnUpdateStatusBar
	// void OnUpdateStatusBar(FText& StatusText, EBattlePassStatusBarTypeS28& BarType);                                         // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnUpdateOwnedOrEquippedTag
	// void OnUpdateOwnedOrEquippedTag(FText& StatusText);                                                                      // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnUpdateBattlePassRequiredBar
	// void OnUpdateBattlePassRequiredBar(bool bPassRequiredVisible);                                                           // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnTransitionItemDetails
	// void OnTransitionItemDetails(bool bTransitionForward);                                                                   // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnSetWeeklyRewardsInfo
	// void OnSetWeeklyRewardsInfo(FTimespan& DelayTimespan, int32_t AvailableRewards, int32_t OwnedRewards, int32_t TotalRewards, int32_t AvailablePages, int32_t CompletedPages, int32_t TotalPages); // [0x2047e54] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnSetWarningToolTip
	// void OnSetWarningToolTip(ERewardWarningTooltipType28& WarningTooltipType, FText& Description);                           // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnSetResourcePrice
	// void OnSetResourcePrice(int32_t Cost, class UFortPersistentResourceItemDefinition* PersistentResource);                  // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnSetQuestRewardsInfo
	// void OnSetQuestRewardsInfo(FTimespan& DelayTimespan, int32_t OwnedRewards, int32_t TotalRewards, int32_t CompletedPages, int32_t TotalPages); // [0x2047e54] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnSetPrerequisiteInfo
	// void OnSetPrerequisiteInfo(FText& Description, int32_t CurrentAmount, int32_t NeededAmount, EBattlePassRewardPrerequisiteType PrerequisiteType, bool bShowPrerequisiteLock); // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnSetItemPrice
	// void OnSetItemPrice(int32_t Cost, EBattlePassCurrencyType CurrencyType);                                                 // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnSetEquipButtonEnable
	// void OnSetEquipButtonEnable(bool bIsEnable);                                                                             // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnSetCrewInfo
	// void OnSetCrewInfo(bool bIsNextMonthRewards, FText& MonthText, FTimespan& NextMonthlyRewardTimespan, FText& CharacterDisplayName, FText& CharacterDescription); // [0x2047e54] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnSetCoverPageData
	// void OnSetCoverPageData(FText& Title, FText& Description, bool bPageComplete);                                           // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnSetBonusRewardsInfo
	// void OnSetBonusRewardsInfo(bool bIsUnlocked, int32_t OwnedRewards, int32_t TotalRewards, int32_t CompletedPages, int32_t TotalPages, int32_t ClaimedOutfits, int32_t TotalOutfits); // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnSetBonusInfo
	// void OnSetBonusInfo(FBonusInfoMiniTagData& BonusInfo);                                                                   // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnSetBaseRewardsInfo
	// void OnSetBaseRewardsInfo(int32_t OwnedRewards, int32_t TotalRewards, int32_t CompletedPages, int32_t TotalPages);       // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnItemVmCardUpdate
	// void OnItemVmCardUpdate(FExpandedItemVM ItemVMs, class UAthenaSeasonItemEntryBase* EntrySelected);                       // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnItemDelayed
	// void OnItemDelayed(FTimespan Delay);                                                                                     // [0x2047e54] Event|Protected|HasDefaults|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnInsufficientResource
	// void OnInsufficientResource(class UFortPersistentResourceItemDefinition* PersistentResource);                            // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnInsufficientFunds
	// void OnInsufficientFunds(EBattlePassCurrencyType CurrencyType);                                                          // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnGameModeCompatibilityTagUpdate
	// void OnGameModeCompatibilityTagUpdate(class UFortItemDefinition* ItemDefinition);                                        // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnBattlePassOwned
	// void OnBattlePassOwned();                                                                                                // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.OnBattlePassGiftingAllowed
	// void OnBattlePassGiftingAllowed(bool bGiftingAllowed);                                                                   // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.IsSeasonalCustomizationItemOwned
	// bool IsSeasonalCustomizationItemOwned();                                                                                 // [0xaabc138] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.HandleSwitcherVisibilityShown
	// void HandleSwitcherVisibilityShown();                                                                                    // [0xaabc110] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.HandleItemVMCardClicked
	// void HandleItemVMCardClicked(class UFortItemVM* ItemVM, class UAthenaSeasonItemEntryBase* EntrySelected);                // [0xaabbf00] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.HandleFullScreenMapToggled
	// void HandleFullScreenMapToggled(bool bMapVisible);                                                                       // [0xaabbe3c] Final|Native|Private 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.HandleClaimRewardComplete
	// void HandleClaimRewardComplete(bool bSuccess, TArray<FString>& OfferTemplateIdList);                                     // [0xaabbd14] Final|Native|Private|HasOutParms 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.GoBackOneScreen
	// void GoBackOneScreen();                                                                                                  // [0xaabbd00] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.GetQuestPageDelay
	// FTimespan GetQuestPageDelay();                                                                                           // [0xaabbc38] Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassS28UI.BattlePassScreenS28.GetEquipButtonEnable
	// bool GetEquipButtonEnable();                                                                                             // [0xaabbc1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/BattlePassS28UI.FortBattlePassCustomSkinPageS28
/// Size: 0x0018 (0x0005C8 - 0x0005E0)
class UFortBattlePassCustomSkinPageS28 : public UFortBattlePassCustomSkinPageBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1504;

public:
	SMember(FString)                                   ClaimBaseItemTooltip_ClaimCheckTemplateId                   OFFSET(getStruct<T>, {0x5C8, 16, 0, 0})
	CMember(class UFortBattlePassTutorialTooltip*)     TutorialTooltip_ClaimBaseItem                               OFFSET(get<T>, {0x5D8, 8, 0, 0})
};

/// Class /Script/BattlePassS28UI.FortBattlePassResourcesWidgetS28
/// Size: 0x0020 (0x0002F8 - 0x000318)
class UFortBattlePassResourcesWidgetS28 : public UFortBattlePassResourcesWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(class UCommonTextBlock*)                   Text_BattleStarsAmount                                      OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_StylePointsAmount                                      OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UBorder*)                            Border_StylePointsRewardsTag                                OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UBorder*)                            Border_BattleStarsRewardsTag                                OFFSET(get<T>, {0x310, 8, 0, 0})


	/// Functions
	// Function /Script/BattlePassS28UI.FortBattlePassResourcesWidgetS28.OnStylePointsRewardsSet
	// void OnStylePointsRewardsSet(int32_t Rewards);                                                                           // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS28UI.FortBattlePassResourcesWidgetS28.OnBattleStarRewardsSet
	// void OnBattleStarRewardsSet(int32_t Rewards);                                                                            // [0x2047e54] Event|Protected|BlueprintEvent 
};

/// Class /Script/BattlePassS28UI.FortBattlePassTutorialTooltipS28
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortBattlePassTutorialTooltipS28 : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(class UCommonRichTextBlock*)               Text_Tooltip                                                OFFSET(get<T>, {0x2E8, 8, 0, 0})


	/// Functions
	// Function /Script/BattlePassS28UI.FortBattlePassTutorialTooltipS28.ShowTooltip
	// void ShowTooltip();                                                                                                      // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS28UI.FortBattlePassTutorialTooltipS28.SetText
	// void SetText(FText Text);                                                                                                // [0xaa96c1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassS28UI.FortBattlePassTutorialTooltipS28.HideTooltip
	// void HideTooltip();                                                                                                      // [0x2047e54] Event|Protected|BlueprintEvent 
};

/// Enum /Script/BattlePassS28UI.EBattlePassStatusBarTypeS28
/// Size: 0x08
enum EBattlePassStatusBarTypeS28 : uint8_t
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
enum ERewardWarningTooltipType28 : uint8_t
{
	ERewardWarningTooltipType28__None                                                = 0,
	ERewardWarningTooltipType28__Custom                                              = 1,
	ERewardWarningTooltipType28__AgeGating                                           = 2,
	ERewardWarningTooltipType28__Max                                                 = 3
};

