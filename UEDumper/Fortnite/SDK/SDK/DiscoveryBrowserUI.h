
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: ModelViewViewModel
/// dependency: UMG

/// Enum /Script/DiscoveryBrowserUI.EActivityBrowserTileStyle
/// Size: 0x04
enum class EActivityBrowserTileStyle : uint8_t
{
	EActivityBrowserTileStyle__Default                                               = 0,
	EActivityBrowserTileStyle__Minimal                                               = 1,
	EActivityBrowserTileStyle__Detailed                                              = 2,
	EActivityBrowserTileStyle__EActivityBrowserTileStyle_MAX                         = 3
};

/// Class /Script/DiscoveryBrowserUI.DiscoverSelectedActivityViewModel
/// Size: 0x0030 (0x000068 - 0x000098)
class UDiscoverSelectedActivityViewModel : public UMVVMViewModelBase
{ 
public:
	bool                                               bLoading;                                                   // 0x0068   (0x0001)  
	bool                                               bHasPartyData;                                              // 0x0069   (0x0001)  
	bool                                               bIsActiveInvite;                                            // 0x006A   (0x0001)  
	bool                                               bIsPartyPrivate;                                            // 0x006B   (0x0001)  
	int32_t                                            CurrentPartySize;                                           // 0x006C   (0x0004)  
	SDK_UNDEFINED(24,13066) /* FText */                __um(RichPresenceText);                                     // 0x0070   (0x0018)  
	class UFortActivityViewModel*                      ActivityVM;                                                 // 0x0088   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0090   (0x0008)  MISSED
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserTabButton
/// Size: 0x0000 (0x0014C0 - 0x0014C0)
class UFortActivityBrowserTabButton : public UFortTabButton
{ 
public:


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserTabButton.OnFavoriteChanged
	// void OnFavoriteChanged(bool bIsFavorite);                                                                             // [0x211c0a0] Event|Public|BlueprintEvent 
};

/// Class /Script/DiscoveryBrowserUI.FortDiscoverHomespace
/// Size: 0x0000 (0x000420 - 0x000420)
class UFortDiscoverHomespace : public UScrollableActivatableWidget
{ 
public:


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortDiscoverHomespace.OnPeekPushPercentMobileCVarChanged
	// void OnPeekPushPercentMobileCVarChanged(float PeekPushPercent);                                                       // [0x211c0a0] Event|Protected|BlueprintEvent 
};

/// Class /Script/DiscoveryBrowserUI.FortDiscoverPreviewManager
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UFortDiscoverPreviewManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xC8];                                      // 0x0028   (0x00C8)  MISSED
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowser
/// Size: 0x0260 (0x000400 - 0x000660)
class UFortActivityBrowser : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0400   (0x0008)  MISSED
	class UCommonActivatableWidgetSwitcher*            Switcher_TabActivityBrowserViews;                           // 0x0408   (0x0008)  
	class UCommonButtonBase*                           Button_Back;                                                // 0x0410   (0x0008)  
	class UCommonButtonBase*                           Button_ShowCustomMatchmakingModal;                          // 0x0418   (0x0008)  
	class UCommonButtonBase*                           Button_BackToTop;                                           // 0x0420   (0x0008)  
	class UCommonButtonBase*                           Button_MobileShowGameDetails;                               // 0x0428   (0x0008)  
	class UCommonButtonBase*                           Button_MobileAccept;                                        // 0x0430   (0x0008)  
	class UCommonButtonBase*                           Button_CloseTouch;                                          // 0x0438   (0x0008)  
	class UCommonButtonBase*                           Button_JoinAsSpectator;                                     // 0x0440   (0x0008)  
	class UCommonButtonBase*                           Button_ShowSpectateMatchModal;                              // 0x0448   (0x0008)  
	class UFortTabListWidgetBase_Legacy*               TabList_BrowserTabs;                                        // 0x0450   (0x0008)  
	FPrimaryContentSetup                               PrimaryContentSetup;                                        // 0x0458   (0x0003)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x045B   (0x0005)  MISSED
	class UClass*                                      TabButtonClass;                                             // 0x0460   (0x0008)  
	class UClass*                                      ActivityDetailsModalClass;                                  // 0x0468   (0x0008)  
	class UClass*                                      ActivityModeSetSelectionModalClass;                         // 0x0470   (0x0008)  
	class UClass*                                      ActivityModeSetFirstTimeNotificationModalClass;             // 0x0478   (0x0008)  
	class UClass*                                      AttributionsModalClass;                                     // 0x0480   (0x0008)  
	class UClass*                                      CreatorPageViewClass;                                       // 0x0488   (0x0008)  
	class UClass*                                      CategoryPageViewClass;                                      // 0x0490   (0x0008)  
	SDK_UNDEFINED(32,13067) /* TWeakObjectPtr<UClass*> */ __um(SoftCustomMatchmakingModalClass);                   // 0x0498   (0x0020)  
	SDK_UNDEFINED(32,13068) /* TWeakObjectPtr<UClass*> */ __um(SoftSpectateMatchModalClass);                       // 0x04B8   (0x0020)  
	class UClass*                                      CampaignPurchaseScreenClass;                                // 0x04D8   (0x0008)  
	class UClass*                                      CCUModalClass;                                              // 0x04E0   (0x0008)  
	SDK_UNDEFINED(80,13069) /* TMap<FName, UFortActivityBrowserColorSchemeAsset*> */ __um(ColorSchemes);           // 0x04E8   (0x0050)  
	SDK_UNDEFINED(24,13070) /* FText */                __um(MobileAcceptButtonBaseText);                           // 0x0538   (0x0018)  
	class UFortCreativeDiscoverySurfaceManager*        Manager;                                                    // 0x0550   (0x0008)  
	SDK_UNDEFINED(8,13071) /* TWeakObjectPtr<UFortActivityBrowserPlayWithFriendsTile*> */ __um(LastSelectedPlayWithFriendsTile); // 0x0558   (0x0008)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x0560   (0x0010)  MISSED
	class UFortGameActivity*                           SelectedGameActivity;                                       // 0x0570   (0x0008)  
	unsigned char                                      UnknownData03_5[0xB0];                                      // 0x0578   (0x00B0)  MISSED
	class UFortActivityBrowserColorSchemeAsset*        CurrentColorScheme;                                         // 0x0628   (0x0008)  
	unsigned char                                      UnknownData04_5[0x8];                                       // 0x0630   (0x0008)  MISSED
	class UFortActivityCategoryPageView*               CachedCategoryPageView;                                     // 0x0638   (0x0008)  
	class UFortActivityCreatorPageView*                CachedCreatorPageView;                                      // 0x0640   (0x0008)  
	bool                                               bCCUModalEnabled;                                           // 0x0648   (0x0001)  
	unsigned char                                      UnknownData05_6[0x17];                                      // 0x0649   (0x0017)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowser.OnSwapColorScheme
	// void OnSwapColorScheme(bool bInIsUsingAlternateColorScheme);                                                          // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowser.OnPlayerQueueTypeChanged
	// void OnPlayerQueueTypeChanged(EPlayerQueueType PlayerQueueType);                                                      // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowser.OnEnableColorScheme
	// void OnEnableColorScheme(bool bIsColorSchemeActive);                                                                  // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowser.OnActivitySelected
	// void OnActivitySelected();                                                                                            // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowser.HandleTabChanged
	// void HandleTabChanged(FName TabID);                                                                                   // [0xb65853c] Final|Native|Private 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserColorSchemeAsset
/// Size: 0x0050 (0x000030 - 0x000080)
class UFortActivityBrowserColorSchemeAsset : public UDataAsset
{ 
public:
	SDK_UNDEFINED(80,13072) /* TMap<UMaterialParameterCollection*, FColorSchemeParamaterValues> */ __um(MaterialCollectionOverrides); // 0x0030   (0x0050)  
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserListView
/// Size: 0x0240 (0x000298 - 0x0004D8)
class UFortActivityBrowserListView : public UListViewBase
{ 
public:
	unsigned char                                      UnknownData00_2[0xE8];                                      // 0x0298   (0x00E8)  MISSED
	float                                              DirectionalNavigationTimeThreshold;                         // 0x0380   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0384   (0x0004)  MISSED
	class UFortHabaneroDisplayData*                    HabaneroDisplayData;                                        // 0x0388   (0x0008)  
	class UClass*                                      PromotedActivityClass;                                      // 0x0390   (0x0008)  
	class UClass*                                      DiscoverItemRowClass;                                       // 0x0398   (0x0008)  
	class UClass*                                      HomebarItemRowClass;                                        // 0x03A0   (0x0008)  
	SDK_UNDEFINED(80,13073) /* TMap<FName, UClass*> */ __um(RowTypes);                                             // 0x03A8   (0x0050)  
	bool                                               bUseTinyOffsetWhenScrollingIntoView;                        // 0x03F8   (0x0001)  
	unsigned char                                      UnknownData02_6[0xDF];                                      // 0x03F9   (0x00DF)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserListView.NavigateToActivityInFirstRow
	// void NavigateToActivityInFirstRow(int32_t ActivityItemIndex);                                                         // [0x39cce0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserListView.HandleVisibleEntriesChanged
	// void HandleVisibleEntriesChanged();                                                                                   // [0xa34a770] Final|Native|Protected|BlueprintCallable|Const 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserTileBase
/// Size: 0x0070 (0x001490 - 0x001500)
class UFortActivityBrowserTileBase : public UCommonButtonBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x1490   (0x0018)  MISSED
	class UFortGameActivity*                           AssignedGameActivity;                                       // 0x14A8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x14B0   (0x0050)  MISSED
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile
/// Size: 0x00E0 (0x001500 - 0x0015E0)
class UFortActivityBrowserPlayWithFriendsTile : public UFortActivityBrowserTileBase
{ 
public:
	int32_t                                            MaxNamesToDisplay;                                          // 0x14F8   (0x0004)  
	int32_t                                            MaxPortraitsToDisplay;                                      // 0x14FC   (0x0004)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x1500   (0x0010)  MISSED
	class UFortJoinablePartyPortraitsDisplay*          PartyMembersAvatarsDisplay;                                 // 0x1510   (0x0008)  
	bool                                               bIsActiveInvite;                                            // 0x1518   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x1519   (0x0003)  MISSED
	int32_t                                            CurrentPartySize;                                           // 0x151C   (0x0004)  
	bool                                               bIsPartyPrivate;                                            // 0x1520   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x1521   (0x0007)  MISSED
	class UFortGameActivity*                           CachedGameActivity;                                         // 0x1528   (0x0008)  
	unsigned char                                      UnknownData03_5[0x10];                                      // 0x1530   (0x0010)  MISSED
	SDK_UNDEFINED(8,13074) /* TWeakObjectPtr<USocialUser*> */ __um(CachedTargetSocialUser);                        // 0x1540   (0x0008)  
	SDK_UNDEFINED(24,13075) /* FText */                __um(CurrentCTAButtonText);                                 // 0x1548   (0x0018)  
	SDK_UNDEFINED(24,13076) /* FText */                __um(JoinPartyText);                                        // 0x1560   (0x0018)  
	SDK_UNDEFINED(24,13077) /* FText */                __um(RequestToJoinText);                                    // 0x1578   (0x0018)  
	FDataTableRowHandle                                JoinFriendInputAction_Touch;                                // 0x1590   (0x0010)  
	unsigned char                                      UnknownData04_6[0x40];                                      // 0x15A0   (0x0040)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateSingleFriendName
	// void UpdateSingleFriendName(FText& SingleFriendName);                                                                 // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateRichPresence
	// void UpdateRichPresence(FText& RichPresence);                                                                         // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdatePartyMemberNames
	// void UpdatePartyMemberNames(FText& Names);                                                                            // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateOtherPlayersSubText
	// void UpdateOtherPlayersSubText(FText& OtherPlayersSubText);                                                           // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateLastInteraction
	// void UpdateLastInteraction(FText& LastInteraction);                                                                   // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateIslandThumbnail
	// void UpdateIslandThumbnail(class UTexture* ThumbnailTexture);                                                         // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateCTAButtonInteraction
	// void UpdateCTAButtonInteraction(bool bIsInteractionEnabled);                                                          // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateCTAButtonInfo
	// void UpdateCTAButtonInfo(FText& InteractionText, bool bInteractionFound);                                             // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OpenSidebar
	// void OpenSidebar();                                                                                                   // [0xb658b24] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OnUpdateColumnSize
	// void OnUpdateColumnSize(int32_t NewColumnSize);                                                                       // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OnTileActiveChanged
	// void OnTileActiveChanged(bool bIsTileActive);                                                                         // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OnTextureLoadingComplete
	// void OnTextureLoadingComplete(class UTexture* ThumbnailTexture);                                                      // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OnTextureBeginLoading
	// void OnTextureBeginLoading();                                                                                         // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OnGameActivityChanged
	// void OnGameActivityChanged(class UFortGameActivity* GameActivity);                                                    // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.HandleCTAButtonClicked
	// void HandleCTAButtonClicked();                                                                                        // [0xb6584d8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.GetMaxPartySize
	// int32_t GetMaxPartySize();                                                                                            // [0xb6583dc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.GetCTAButtonText
	// FText GetCTAButtonText();                                                                                             // [0xb65816c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.BP_PartyInformationUpdated
	// void BP_PartyInformationUpdated(bool bInIsTileSelected);                                                              // [0x211c0a0] Event|Protected|BlueprintEvent 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserRow
/// Size: 0x00C0 (0x0002E8 - 0x0003A8)
class UFortActivityBrowserRow : public UCommonUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0xB0];                                      // 0x02E8   (0x00B0)  MISSED
	class UCommonTextBlock*                            Text_CategoryName;                                          // 0x0398   (0x0008)  
	float                                              MinimumVisibilityPercentageForRowActivation;                // 0x03A0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x03A4   (0x0004)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnRowPeekStateChanged
	// void OnRowPeekStateChanged(bool bIsInPeekState);                                                                      // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnRowMoveUp
	// void OnRowMoveUp(bool bMovingOffscreen);                                                                              // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnRowMoveDown
	// void OnRowMoveDown(bool bMovingOffscreen);                                                                            // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnRowIsSelectedChanged
	// void OnRowIsSelectedChanged(bool bIsSelected);                                                                        // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnRowIsActiveChanged
	// void OnRowIsActiveChanged(bool bIsActive);                                                                            // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnCategoryItemChanged
	// void OnCategoryItemChanged(bool bPlayAnimation);                                                                      // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.GetIsSelected
	// bool GetIsSelected();                                                                                                 // [0xb658364] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.GetIsInPeekState
	// bool GetIsInPeekState();                                                                                              // [0x28306bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.GetIsActive
	// bool GetIsActive();                                                                                                   // [0x3682720] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero
/// Size: 0x0080 (0x0003A8 - 0x000428)
class UFortActivityBrowserRowHero : public UFortActivityBrowserRow
{ 
public:
	class UFortActivityListView*                       ListView_Activities;                                        // 0x03A8   (0x0008)  
	class UFortSwipePanel*                             SwipePanel_Navigation;                                      // 0x03B0   (0x0008)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x03B8   (0x0003)  MISSED
	bool                                               bPlayDetailsAnimationOnScreenOpen;                          // 0x03BB   (0x0001)  
	float                                              DetailsDisplayUpdateDelay;                                  // 0x03BC   (0x0004)  
	class UFortActivityDetailsDisplay*                 DetailsDisplay_SelectedActivity;                            // 0x03C0   (0x0008)  
	class UFortActivityVideoCycle*                     ActivityVideoCycleWidget;                                   // 0x03C8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x20];                                      // 0x03D0   (0x0020)  MISSED
	class UWidgetAnimation*                            BoundKeyArtOutroAnimation;                                  // 0x03F0   (0x0008)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x03F8   (0x0002)  MISSED
	bool                                               bShouldAutoCycle;                                           // 0x03FA   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2D];                                      // 0x03FB   (0x002D)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnVideoStarted
	// void OnVideoStarted();                                                                                                // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnVideoEndReached
	// void OnVideoEndReached();                                                                                             // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnUpdateDetailsDisplay
	// void OnUpdateDetailsDisplay();                                                                                        // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnTileClicked
	// void OnTileClicked();                                                                                                 // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnRowHeroFocusChanged
	// void OnRowHeroFocusChanged(bool bHasFocus);                                                                           // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnQueryStatusChanged
	// void OnQueryStatusChanged(bool bIsActive);                                                                            // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnQueryActivitiesFinished
	// void OnQueryActivitiesFinished();                                                                                     // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnPreviewImageChanged
	// void OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture);                                                 // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnPlayKeyArtOutro
	// void OnPlayKeyArtOutro();                                                                                             // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnPlayKeyArtIntro
	// void OnPlayKeyArtIntro();                                                                                             // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnListViewFinishedAddingEntries
	// void OnListViewFinishedAddingEntries(int32_t ActivityCount);                                                          // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnActivityUpdated
	// void OnActivityUpdated();                                                                                             // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.IsShowingSeasonalContent
	// bool IsShowingSeasonalContent();                                                                                      // [0xb6589a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.IsInOutroState
	// bool IsInOutroState();                                                                                                // [0x97f426c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.IsImageLoading
	// bool IsImageLoading();                                                                                                // [0x97f4284] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.HandleActivityVideoCycleStarted
	// void HandleActivityVideoCycleStarted();                                                                               // [0xb6584c4] Final|Native|Private 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.HandleActivityVideoCycleEndReached
	// void HandleActivityVideoCycleEndReached();                                                                            // [0xb6584b0] Final|Native|Private 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.GetKeyArtOutroAnimation
	// class UWidgetAnimation* GetKeyArtOutroAnimation();                                                                    // [0xb65838c] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.GetCyclingPauseDelay
	// float GetCyclingPauseDelay();                                                                                         // [0xb658248] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.GetCyclingDelay
	// float GetCyclingDelay();                                                                                              // [0xb658218] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.GetCurrentTexture
	// class UTexture* GetCurrentTexture();                                                                                  // [0xb6581c8] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.CycleNextActivity
	// void CycleNextActivity();                                                                                             // [0xb65802c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.CheckUpdateDetailsDelay
	// void CheckUpdateDetailsDelay();                                                                                       // [0xb657ff0] Final|Native|Private 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserRowList
/// Size: 0x0020 (0x0003A8 - 0x0003C8)
class UFortActivityBrowserRowList : public UFortActivityBrowserRow
{ 
public:
	class UFortActivityListView*                       ListView_Activities;                                        // 0x03A8   (0x0008)  
	class UCommonButtonBase*                           Button_PageLeft;                                            // 0x03B0   (0x0008)  
	class UCommonButtonBase*                           Button_PageRight;                                           // 0x03B8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x03C0   (0x0008)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowList.OnQueryStatusChanged
	// void OnQueryStatusChanged(bool bIsActive);                                                                            // [0x211c0a0] Event|Public|BlueprintEvent 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserRowPromoted
/// Size: 0x0008 (0x0003A8 - 0x0003B0)
class UFortActivityBrowserRowPromoted : public UFortActivityBrowserRow
{ 
public:
	class UCommonTextBlock*                            Text_ActivityName;                                          // 0x03A8   (0x0008)  


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowPromoted.OnPreviewImageChanged
	// void OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture);                                                 // [0x211c0a0] Event|Protected|BlueprintEvent 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserView
/// Size: 0x00C0 (0x000450 - 0x000510)
class UFortActivityBrowserView : public UFortActivityView
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0450   (0x0008)  MISSED
	bool                                               bShowCustomMatchmakingModalButton;                          // 0x0458   (0x0001)  
	bool                                               bShowSpectateMatchModalButton;                              // 0x0459   (0x0001)  
	bool                                               bShowMobileGameDetailsButton;                               // 0x045A   (0x0001)  
	bool                                               bShowMobileAcceptButton;                                    // 0x045B   (0x0001)  
	bool                                               bShowBackToTopButton;                                       // 0x045C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x045D   (0x0003)  MISSED
	FName                                              DiscoverySurfaceName;                                       // 0x0460   (0x0004)  
	unsigned char                                      UnknownData02_6[0xAC];                                      // 0x0464   (0x00AC)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserView.OnSurfaceDataDirty
	// void OnSurfaceDataDirty();                                                                                            // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserView.GetInvalidActivityReason
	// EFortInvalidActivityReason GetInvalidActivityReason();                                                                // [0xb6582c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserRowView
/// Size: 0x01B0 (0x000510 - 0x0006C0)
class UFortActivityBrowserRowView : public UFortActivityBrowserView
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0510   (0x0008)  MISSED
	float                                              MouseWheelScrollTimeThreshold;                              // 0x0518   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x051C   (0x0004)  MISSED
	class UFortActivityBrowserListView*                BrowserList_Activities;                                     // 0x0520   (0x0008)  
	unsigned char                                      UnknownData02_5[0x60];                                      // 0x0528   (0x0060)  MISSED
	FName                                              TabNameID;                                                  // 0x0588   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x058C   (0x0004)  MISSED
	FFortTabButtonLabelInfo                            TabButtonLabelInfo;                                         // 0x0590   (0x0110)  
	class UFortSwipePanel*                             SwipePanel_Navigation;                                      // 0x06A0   (0x0008)  
	unsigned char                                      UnknownData04_6[0x18];                                      // 0x06A8   (0x0018)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowView.OnRowChanged
	// void OnRowChanged(int32_t NewCategoryIndex);                                                                          // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowView.OnQueryActivitiesFinished
	// void OnQueryActivitiesFinished();                                                                                     // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowView.OnListViewScrolled
	// void OnListViewScrolled(float ItemOffset, float DistanceRemaining);                                                   // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowView.OnActivityUpdated
	// void OnActivityUpdated();                                                                                             // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowView.HandleVerticalSwipe
	// void HandleVerticalSwipe(int32_t Direction);                                                                          // [0xb658784] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserTile
/// Size: 0x0040 (0x001500 - 0x001540)
class UFortActivityBrowserTile : public UFortActivityBrowserTileBase
{ 
public:
	class UFortActivityTileDetailsDisplay*             Display_TileDetails;                                        // 0x14F8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x1500   (0x0040)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserTile.HandleActivitySelected
	// void HandleActivitySelected();                                                                                        // [0x2abf398] Final|Native|Private 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView
/// Size: 0x0150 (0x000510 - 0x000660)
class UFortActivityPlayerBrowserView : public UFortActivityBrowserView
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0510   (0x0008)  MISSED
	class UFortGameActivityProvider*                   ActivityProvider;                                           // 0x0518   (0x0008)  
	class UFortActivityTileView*                       TileView_PlayerActivities;                                  // 0x0520   (0x0008)  
	FName                                              TabNameID;                                                  // 0x0528   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x052C   (0x0004)  MISSED
	FFortTabButtonLabelInfo                            TabButtonLabelInfo;                                         // 0x0530   (0x0110)  
	EFortCreativeDiscoveryPlayHistoryType              PlayHistoryProviderType;                                    // 0x0640   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1F];                                      // 0x0641   (0x001F)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView.PlayViewIntro
	// void PlayViewIntro();                                                                                                 // [0xb658b54] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView.OnQueryActivitiesStarted
	// void OnQueryActivitiesStarted();                                                                                      // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView.OnQueryActivitiesComplete
	// void OnQueryActivitiesComplete();                                                                                     // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView.OnPlayViewIntro
	// void OnPlayViewIntro();                                                                                               // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView.BP_OnTileViewUpdated
	// void BP_OnTileViewUpdated();                                                                                          // [0x211c0a0] Event|Protected|BlueprintEvent 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityCategoryPageView
/// Size: 0x0040 (0x000660 - 0x0006A0)
class UFortActivityCategoryPageView : public UFortActivityPlayerBrowserView
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0660   (0x0008)  MISSED
	class UCommonRichTextBlock*                        Text_CategoryTitle;                                         // 0x0668   (0x0008)  
	class UCommonButtonBase*                           Button_BackToTop;                                           // 0x0670   (0x0008)  
	class UCommonButtonBase*                           Button_CloseTouch;                                          // 0x0678   (0x0008)  
	class UCommonButtonBase*                           Button_Back;                                                // 0x0680   (0x0008)  
	class UCommonButtonBase*                           Button_MobileAccept;                                        // 0x0688   (0x0008)  
	class UCommonButtonBase*                           Button_MobileShowGameDetails;                               // 0x0690   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0698   (0x0008)  MISSED
};

/// Class /Script/DiscoveryBrowserUI.FortActivityTileViewTileBase
/// Size: 0x0090 (0x001490 - 0x001520)
class UFortActivityTileViewTileBase : public UCommonButtonBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x90];                                      // 0x1490   (0x0090)  MISSED
};

/// Class /Script/DiscoveryBrowserUI.FortActivityCategoryTile
/// Size: 0x0010 (0x001520 - 0x001530)
class UFortActivityCategoryTile : public UFortActivityTileViewTileBase
{ 
public:
	class UCommonTextBlock*                            Text_CategoryTitle;                                         // 0x1520   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x1528   (0x0008)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryTile.OnTileActiveSet
	// void OnTileActiveSet(bool bIsTileActive);                                                                             // [0x211c0a0] Event|Protected|BlueprintEvent 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityCategoryTilePanel
/// Size: 0x0070 (0x0002E8 - 0x000358)
class UFortActivityCategoryTilePanel : public UCommonUserWidget
{ 
public:
	class UFortActivityTileView*                       TileView_Categories;                                        // 0x02E8   (0x0008)  
	class UCommonTextBlock*                            Text_Title;                                                 // 0x02F0   (0x0008)  
	int32_t                                            TileViewQueryThreshold;                                     // 0x02F8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02FC   (0x0004)  MISSED
	class UFortCreativeDiscoveryActivityProvider*      CachedActivityProvider;                                     // 0x0300   (0x0008)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0308   (0x0050)  MISSED
};

/// Class /Script/DiscoveryBrowserUI.FortActivityCategoryView
/// Size: 0x0140 (0x000510 - 0x000650)
class UFortActivityCategoryView : public UFortActivityBrowserView
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0510   (0x0008)  MISSED
	FName                                              TabNameID;                                                  // 0x0518   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x051C   (0x0004)  MISSED
	FFortTabButtonLabelInfo                            TabButtonLabelInfo;                                         // 0x0520   (0x0110)  
	class UFortActivityCategoryTilePanel*              TilePanel_Featured;                                         // 0x0630   (0x0008)  
	class UFortActivityCategoryTilePanel*              TilePanel_All;                                              // 0x0638   (0x0008)  
	class UFortActivityCategoryTilePanel*              CurrentSelectedPanel;                                       // 0x0640   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0648   (0x0008)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryView.OnSurfaceDataReady
	// void OnSurfaceDataReady();                                                                                            // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryView.OnCategoryTilePanelSelected
	// void OnCategoryTilePanelSelected(class UFortActivityCategoryTilePanel* SelectedPanel);                                // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryView.NavigateFromPanel
	// class UFortActivityCategoryTilePanel* NavigateFromPanel(EUINavigation Direction, class UFortActivityCategoryTilePanel* NavigatingPanel); // [0xb658a20] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryView.GetTopMostVisiblePanel
	// class UFortActivityCategoryTilePanel* GetTopMostVisiblePanel();                                                       // [0xb658474] Native|Event|Protected|BlueprintEvent|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryView.GetCurrentSelectedPanel
	// class UFortActivityCategoryTilePanel* GetCurrentSelectedPanel();                                                      // [0xb6581b0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityCreateView
/// Size: 0x0140 (0x000510 - 0x000650)
class UFortActivityCreateView : public UFortActivityBrowserView
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0510   (0x0008)  MISSED
	FName                                              TabNameID;                                                  // 0x0518   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x051C   (0x0004)  MISSED
	FFortTabButtonLabelInfo                            TabButtonLabelInfo;                                         // 0x0520   (0x0110)  
	class UCommonButtonBase*                           Button_Create;                                              // 0x0630   (0x0008)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0638   (0x0018)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityCreateView.OnCreativeActivityUpdated
	// void OnCreativeActivityUpdated();                                                                                     // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityCreateView.GetInvalidCreativeActivityReason
	// EFortInvalidActivityReason GetInvalidCreativeActivityReason();                                                        // [0xb6582fc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityCreatorPageView
/// Size: 0x0090 (0x0006A0 - 0x000730)
class UFortActivityCreatorPageView : public UFortActivityCategoryPageView
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x06A0   (0x0008)  MISSED
	class UFortGameActivity*                           ActivityDetailsSelectedGameActivity;                        // 0x06A8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x20];                                      // 0x06B0   (0x0020)  MISSED
	int32_t                                            AmountOfCreatorLinkEntriesQueried;                          // 0x06D0   (0x0004)  
	int32_t                                            ProcessedCreatorLinkEntries;                                // 0x06D4   (0x0004)  
	int32_t                                            AmountOfEntriesQueried;                                     // 0x06D8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x54];                                      // 0x06DC   (0x0054)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityCreatorPageView.OnNoContentFoundForCreator
	// void OnNoContentFoundForCreator();                                                                                    // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityCreatorPageView.OnCreatorActivitiesQueryFinished
	// void OnCreatorActivitiesQueryFinished();                                                                              // [0x211c0a0] Event|Protected|BlueprintEvent 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityDiscoverView
/// Size: 0x00A0 (0x0006C0 - 0x000760)
class UFortActivityDiscoverView : public UFortActivityBrowserRowView
{ 
public:
	bool                                               bPlayDetailsAnimationOnScreenOpen;                          // 0x06C0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06C1   (0x0003)  MISSED
	float                                              DetailsDisplayUpdateDelay;                                  // 0x06C4   (0x0004)  
	class UClass*                                      MovieWidgetClass;                                           // 0x06C8   (0x0008)  
	class UFortActivityDetailsDisplay*                 DetailsDisplay_SelectedActivity;                            // 0x06D0   (0x0008)  
	class UFortActivityDetailsDisplay*                 DetailsDisplay_PromotedActivity;                            // 0x06D8   (0x0008)  
	class UPanelWidget*                                Panel_VideoSlot;                                            // 0x06E0   (0x0008)  
	class UPanelWidget*                                Panel_PromotedVideoSlot;                                    // 0x06E8   (0x0008)  
	class UFortActivatableMovieWidget*                 ActivityMovieWidget;                                        // 0x06F0   (0x0008)  
	class UFortActivatableMovieWidget*                 PromotedActivityMovieWidget;                                // 0x06F8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x48];                                      // 0x0700   (0x0048)  MISSED
	class UWidgetAnimation*                            BoundKeyArtOutroAnimation;                                  // 0x0748   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0750   (0x0010)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnUpdateDetailsDisplay
	// void OnUpdateDetailsDisplay();                                                                                        // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnPreviewImageChanged
	// void OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture);                                                 // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnPlayKeyArtOutro
	// void OnPlayKeyArtOutro();                                                                                             // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnPlayKeyArtIntro
	// void OnPlayKeyArtIntro();                                                                                             // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnMoviePreEndEvent
	// void OnMoviePreEndEvent();                                                                                            // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnMoviePlayingChanged
	// void OnMoviePlayingChanged(bool bIsPlaying);                                                                          // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.IsShowingSeasonalContent
	// bool IsShowingSeasonalContent();                                                                                      // [0xb6589f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.IsShowingPromotedContent
	// bool IsShowingPromotedContent();                                                                                      // [0x39e2640] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.IsInOutroState
	// bool IsInOutroState();                                                                                                // [0xb658958] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.IsImageLoading
	// bool IsImageLoading();                                                                                                // [0xb658940] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.HandleMovieWidgetMediaStarted
	// void HandleMovieWidgetMediaStarted();                                                                                 // [0xb658500] Final|Native|Private 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.HandleMovieWidgetMediaPreEndEvent
	// void HandleMovieWidgetMediaPreEndEvent();                                                                             // [0xb6584ec] Final|Native|Private 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.GetPromotedMovieWidget
	// class UFortActivatableMovieWidget* GetPromotedMovieWidget();                                                          // [0xb65845c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.GetMovieWidget
	// class UFortActivatableMovieWidget* GetMovieWidget();                                                                  // [0xb658444] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.GetKeyArtOutroAnimation
	// class UWidgetAnimation* GetKeyArtOutroAnimation();                                                                    // [0xb6583b4] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.GetCurrentTexture
	// class UTexture* GetCurrentTexture();                                                                                  // [0xb6581f0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.CheckUpdateDetailsDelay
	// void CheckUpdateDetailsDelay();                                                                                       // [0xb658004] Final|Native|Private 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2
/// Size: 0x0150 (0x0006C0 - 0x000810)
class UFortActivityDiscoverViewV2 : public UFortActivityBrowserRowView
{ 
public:
	SDK_UNDEFINED(16,13078) /* FMulticastInlineDelegate */ __um(OnActivityRequested);                              // 0x06C0   (0x0010)  
	class UFortDiscoverPreviewManager*                 DiscoverPreviewManager;                                     // 0x06D0   (0x0008)  
	unsigned char                                      UnknownData00_5[0x30];                                      // 0x06D8   (0x0030)  MISSED
	class UDiscoverSelectedActivityViewModel*          SelectedActivityVM;                                         // 0x0708   (0x0008)  
	SDK_UNDEFINED(32,13079) /* TWeakObjectPtr<UClass*> */ __um(SoftCustomMatchmakingModalClass);                   // 0x0710   (0x0020)  
	SDK_UNDEFINED(32,13080) /* TWeakObjectPtr<UClass*> */ __um(SoftSpectateMatchModalClass);                       // 0x0730   (0x0020)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0750   (0x0008)  MISSED
	FDataTableRowHandle                                BackToTopInputAction;                                       // 0x0758   (0x0010)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0768   (0x0008)  MISSED
	FDataTableRowHandle                                CustomKeyInputAction;                                       // 0x0770   (0x0010)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0780   (0x0008)  MISSED
	FDataTableRowHandle                                ShowSpectateMatchModalInputAction;                          // 0x0788   (0x0010)  
	unsigned char                                      UnknownData04_5[0x8];                                       // 0x0798   (0x0008)  MISSED
	FDataTableRowHandle                                JoinAsSpectatorInputAction;                                 // 0x07A0   (0x0010)  
	unsigned char                                      UnknownData05_5[0x8];                                       // 0x07B0   (0x0008)  MISSED
	FDataTableRowHandle                                JoinAsPlayerInputAction;                                    // 0x07B8   (0x0010)  
	unsigned char                                      UnknownData06_5[0x8];                                       // 0x07C8   (0x0008)  MISSED
	FDataTableRowHandle                                SelectActivityInputAction_Touch;                            // 0x07D0   (0x0010)  
	unsigned char                                      UnknownData07_6[0x30];                                      // 0x07E0   (0x0030)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2.UpdateMiscActionBindingVisibility
	// void UpdateMiscActionBindingVisibility(bool bVisible);                                                                // [0x37905bc] Final|Native|Private|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2.StartDiscoverAnalyticSession
	// void StartDiscoverAnalyticSession();                                                                                  // [0x3ef4a50] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2.IsShowingSeasonalContent
	// bool IsShowingSeasonalContent();                                                                                      // [0xb6589f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2.IsShowingPromotedContent
	// bool IsShowingPromotedContent();                                                                                      // [0x39e2640] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2.FireDiscoverExitedAnalyticEvent
	// void FireDiscoverExitedAnalyticEvent();                                                                               // [0x3b255ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2.DeactivationTransitionCompleted
	// void DeactivationTransitionCompleted();                                                                               // [0xb658044] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityFavoriteBrowserView
/// Size: 0x0000 (0x000660 - 0x000660)
class UFortActivityFavoriteBrowserView : public UFortActivityPlayerBrowserView
{ 
public:
};

/// Class /Script/DiscoveryBrowserUI.FortActivityListItemWrapper
/// Size: 0x0018 (0x000028 - 0x000040)
class UFortActivityListItemWrapper : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0028   (0x0010)  MISSED
	class UFortGameActivity*                           GameActivity;                                               // 0x0038   (0x0008)  
};

/// Class /Script/DiscoveryBrowserUI.FortActivityListView
/// Size: 0x0190 (0x000298 - 0x000428)
class UFortActivityListView : public UListViewBase
{ 
public:
	unsigned char                                      UnknownData00_2[0xE8];                                      // 0x0298   (0x00E8)  MISSED
	float                                              DirectionalNavigationTimeThreshold;                         // 0x0380   (0x0004)  
	SDK_UNDEFINED(1,13081) /* TEnumAsByte<EOrientation> */ __um(orientation);                                      // 0x0384   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0385   (0x0003)  MISSED
	float                                              EntrySpacing;                                               // 0x0388   (0x0004)  
	bool                                               bCircularNavigationEnabled;                                 // 0x038C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x038D   (0x0003)  MISSED
	SDK_UNDEFINED(80,13082) /* TMap<EActivityBrowserTileStyle, UClass*> */ __um(TileTypes);                        // 0x0390   (0x0050)  
	unsigned char                                      UnknownData03_6[0x48];                                      // 0x03E0   (0x0048)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityListView.GetInViewCount
	// int32_t GetInViewCount();                                                                                             // [0xb658278] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityListView.AddTileType
	// void AddTileType(EActivityBrowserTileStyle style, class UClass* WidgetClass);                                         // [0xb657eec] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityLobbyTile
/// Size: 0x0070 (0x0014E0 - 0x001550)
class UFortActivityLobbyTile : public UCommonButtonLegacy
{ 
public:
	class UCommonTextBlock*                            Text_ActivityName;                                          // 0x14E0   (0x0008)  
	class UFortActivityBrowserTag*                     ActivityBrowserTag_EpicOriginal;                            // 0x14E8   (0x0008)  
	class UClass*                                      ActivityModeSetSelectionModalClass;                         // 0x14F0   (0x0008)  
	class UFortGameActivityProvider*                   ActivityProvider;                                           // 0x14F8   (0x0008)  
	TArray<class UFortGameActivity*>                   CachedQueriedActivities;                                    // 0x1500   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x1510   (0x0040)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.TrySendFirstTimeNotification
	// void TrySendFirstTimeNotification();                                                                                  // [0xb658c80] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.ShowModeSetSelectionModal
	// void ShowModeSetSelectionModal();                                                                                     // [0xb658c30] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.ShouldShowSubmodeSelectButton
	// bool ShouldShowSubmodeSelectButton();                                                                                 // [0x25c6fd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.OnShowChildActivityFirstTimeNotification
	// void OnShowChildActivityFirstTimeNotification();                                                                      // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.OnShowChildActivityChangedNotification
	// void OnShowChildActivityChangedNotification(FText& DisplayName);                                                      // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.OnPreviewImageChanged
	// void OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture);                                                 // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.OnHideChildActivityFirstTimeNotification
	// void OnHideChildActivityFirstTimeNotification();                                                                      // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.OnDetailsUpdated
	// void OnDetailsUpdated();                                                                                              // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.IsActivityEpicCreated
	// bool IsActivityEpicCreated();                                                                                         // [0xb65885c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.GetChildActivityDisplayName
	// FText GetChildActivityDisplayName();                                                                                  // [0x1bd2954] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal
/// Size: 0x0068 (0x000418 - 0x000480)
class UFortActivityModeSetSelectionModal : public UFortActivityModeSetSelectionModalBase
{ 
public:
	class UCommonTextBlock*                            Text_ActivityName;                                          // 0x0418   (0x0008)  
	unsigned char                                      UnknownData00_5[0x28];                                      // 0x0420   (0x0028)  MISSED
	class UCommonButtonBase*                           Button_Back;                                                // 0x0448   (0x0008)  
	class UCommonButtonBase*                           Button_BackBoard;                                           // 0x0450   (0x0008)  
	class UFortActivityModeSetSelection*               List_SubModeList;                                           // 0x0458   (0x0008)  
	class UFortActivitySquadFillButton*                Button_ActivitySquadFill;                                   // 0x0460   (0x0008)  
	class UFortActivityPrivacyButton*                  Button_ActivityPrivacy;                                     // 0x0468   (0x0008)  
	class UFortActivityHabaneroButton*                 Button_Activity_Habanero;                                   // 0x0470   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0478   (0x0008)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.SetIsRankedSwitchAvailable
	// void SetIsRankedSwitchAvailable(bool bIsRankedSwitchAvailable);                                                       // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.SetHabaneroValues
	// void SetHabaneroValues(bool bHabaneroEnabled, bool bHabaneroExists);                                                  // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.SaveSelectionAndClose
	// void SaveSelectionAndClose();                                                                                         // [0xb658c1c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnSubModeSelectionChanged
	// void OnSubModeSelectionChanged();                                                                                     // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnSubModeSelected
	// void OnSubModeSelected();                                                                                             // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnPreviewImageChanged
	// void OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture);                                                 // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnActivityChanged
	// void OnActivityChanged(class UFortGameActivity* GameActivity, FString StartingSelectedMnemonic);                      // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.IsCreativeModeSetActivity
	// bool IsCreativeModeSetActivity();                                                                                     // [0xb6588fc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserTile
/// Size: 0x0060 (0x001520 - 0x001580)
class UFortActivityPlayerBrowserTile : public UFortActivityTileViewTileBase
{ 
public:
	class UFortActivityTileDetailsDisplay*             Display_TileDetails;                                        // 0x1520   (0x0008)  
	class UCommonTextBlock*                            Text_LastPlayedDate;                                        // 0x1528   (0x0008)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x1530   (0x0050)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserTile.HandleActivitySelected
	// void HandleActivitySelected();                                                                                        // [0xb65849c] Final|Native|Private 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityPlayerView
/// Size: 0x0160 (0x000510 - 0x000670)
class UFortActivityPlayerView : public UFortActivityBrowserView
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0510   (0x0008)  MISSED
	FName                                              TabNameID;                                                  // 0x0518   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x051C   (0x0004)  MISSED
	FFortTabButtonLabelInfo                            TabButtonLabelInfo;                                         // 0x0520   (0x0110)  
	class UClass*                                      TabButtonClass;                                             // 0x0630   (0x0008)  
	class UFortTabListWidgetBase_Legacy*               TabList_PlayerViewTabs;                                     // 0x0638   (0x0008)  
	class UCommonActivatableWidgetSwitcher*            Switcher_PlayerBrowserViews;                                // 0x0640   (0x0008)  
	class UFortActivityPlayerBrowserView*              BrowserView_Favorites;                                      // 0x0648   (0x0008)  
	class UFortActivityPlayerBrowserView*              BrowserView_History;                                        // 0x0650   (0x0008)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0658   (0x0018)  MISSED
};

/// Class /Script/DiscoveryBrowserUI.FortActivityPlayerViewTabButton
/// Size: 0x0000 (0x0014C0 - 0x0014C0)
class UFortActivityPlayerViewTabButton : public UFortTabButton
{ 
public:
};

/// Class /Script/DiscoveryBrowserUI.FortActivitySearchView
/// Size: 0x0180 (0x000510 - 0x000690)
class UFortActivitySearchView : public UFortActivityBrowserView
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0510   (0x0008)  MISSED
	FName                                              TabNameID;                                                  // 0x0518   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x051C   (0x0004)  MISSED
	FFortTabButtonLabelInfo                            TabButtonLabelInfo;                                         // 0x0520   (0x0110)  
	class UEditableText*                               EditableText_IslandLink;                                    // 0x0630   (0x0008)  
	unsigned char                                      UnknownData02_6[0x58];                                      // 0x0638   (0x0058)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivitySearchView.OnActivityValidated
	// void OnActivityValidated(EFortActivityValidationResult ValidateResult);                                               // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivitySearchView.OnActivityClear
	// void OnActivityClear();                                                                                               // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivitySearchView.HandleTextCommitted
	// void HandleTextCommitted(FText& InText, TEnumAsByte<ETextCommit> CommitInfo);                                         // [0xb658658] Final|Native|Private|HasOutParms 
	// Function /Script/DiscoveryBrowserUI.FortActivitySearchView.HandleTextChanged
	// void HandleTextChanged(FText& Text);                                                                                  // [0xb6585bc] Final|Native|Private|HasOutParms 
};

/// Class /Script/DiscoveryBrowserUI.FortActivitySeasonalBrowserView
/// Size: 0x0000 (0x000660 - 0x000660)
class UFortActivitySeasonalBrowserView : public UFortActivityPlayerBrowserView
{ 
public:
};

/// Class /Script/DiscoveryBrowserUI.FortActivitySelector
/// Size: 0x00F0 (0x000028 - 0x000118)
class UFortActivitySelector : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0028   (0x0010)  MISSED
	class UFortGameActivity*                           SelectedGameActivity;                                       // 0x0038   (0x0008)  
	class UUserWidget*                                 SelectedContextWidget;                                      // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_5[0x20];                                      // 0x0048   (0x0020)  MISSED
	class UFortActivityCreatorPageView*                CachedCreatorPageView;                                      // 0x0068   (0x0008)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x0070   (0x0010)  MISSED
	SDK_UNDEFINED(80,13083) /* TMap<FName, UFortActivityBrowserColorSchemeAsset*> */ __um(ColorSchemes);           // 0x0080   (0x0050)  
	class UFortActivityBrowserColorSchemeAsset*        CurrentColorScheme;                                         // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData03_6[0x40];                                      // 0x00D8   (0x0040)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivitySelector.ToggleFavorite
	// void ToggleFavorite();                                                                                                // [0xb658c6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivitySelector.OpenCreatorPage
	// void OpenCreatorPage();                                                                                               // [0xb658b10] Final|Native|Private|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivitySelector.OnSwapColorScheme
	// void OnSwapColorScheme(bool bInIsUsingAlternateColorScheme);                                                          // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivitySelector.OnEnableColorScheme
	// void OnEnableColorScheme(bool bIsColorSchemeActive);                                                                  // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivitySelector.HandleShowActivityDetails
	// void HandleShowActivityDetails();                                                                                     // [0xb658514] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivitySelector.ConfirmSelectedActivity
	// void ConfirmSelectedActivity();                                                                                       // [0xb658018] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay
/// Size: 0x0180 (0x001490 - 0x001610)
class UFortActivityTileDetailsDisplay : public UCommonButtonBase
{ 
public:
	SDK_UNDEFINED(16,13084) /* FMulticastInlineDelegate */ __um(OnActivitySelectedDelegate);                       // 0x1490   (0x0010)  
	SDK_UNDEFINED(16,13085) /* FMulticastInlineDelegate */ __um(OnActivityUnSelectedDelegate);                     // 0x14A0   (0x0010)  
	bool                                               bShowDetailsButton;                                         // 0x14B0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x14B1   (0x0003)  MISSED
	int32_t                                            DefaultColumnSize;                                          // 0x14B4   (0x0004)  
	class UCommonTextBlock*                            Text_ActivityName;                                          // 0x14B8   (0x0008)  
	class UCommonTextBlock*                            Text_PlayerCount;                                           // 0x14C0   (0x0008)  
	class UCommonButtonBase*                           Button_Favorite;                                            // 0x14C8   (0x0008)  
	class UCommonButtonBase*                           Button_Details;                                             // 0x14D0   (0x0008)  
	class UFortActivityBrowserTag*                     ActivityBrowserTag_EpicOriginal;                            // 0x14D8   (0x0008)  
	class UTextBlock*                                  Text_DebugId;                                               // 0x14E0   (0x0008)  
	class UFortActivityVideoCycle*                     ActivityVideoCycleWidget;                                   // 0x14E8   (0x0008)  
	SDK_UNDEFINED(80,13086) /* TMap<uint32_t, ECreativeLinkPreviewSize> */ __um(MinColumnSizeToImageSize);         // 0x14F0   (0x0050)  
	char                                               MaxMobileColumnSize;                                        // 0x1540   (0x0001)  
	char                                               MinMobileColumnSize;                                        // 0x1541   (0x0001)  
	bool                                               bIsVideoEnabledForDynamicTileSizingV2;                      // 0x1542   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x1543   (0x0005)  MISSED
	class UClass*                                      ActivityDetailsModalClass;                                  // 0x1548   (0x0008)  
	class UClass*                                      ActivityCreatorPageViewClass;                               // 0x1550   (0x0008)  
	class UClass*                                      ActivityCampaignPurchaseScreenClass;                        // 0x1558   (0x0008)  
	class UClass*                                      ActivityAttributionsClass;                                  // 0x1560   (0x0008)  
	unsigned char                                      UnknownData02_6[0xA8];                                      // 0x1568   (0x00A8)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.UpdateSqueegeeWidgets
	// void UpdateSqueegeeWidgets(class UFortGameActivity* GameActivity);                                                    // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.UpdateFromFortActivityViewModel
	// void UpdateFromFortActivityViewModel();                                                                               // [0xb658ca8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.UpdateCCU
	// void UpdateCCU(int32_t CCUCount);                                                                                     // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.UpdateActivitySelector
	// void UpdateActivitySelector();                                                                                        // [0xb658c94] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.StopTileVideo
	// void StopTileVideo();                                                                                                 // [0xb658c58] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.StartTileVideo
	// void StartTileVideo();                                                                                                // [0xb658c44] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.ShouldPlayTileVideo
	// void ShouldPlayTileVideo(bool& bOutResult);                                                                           // [0x211c0a0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnTileActiveSet
	// void OnTileActiveSet(bool bIsTileActive);                                                                             // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnRespondToTileViewVisibilityChange
	// void OnRespondToTileViewVisibilityChange(bool bIsVisible);                                                            // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnRequiresPurchaseChanged
	// void OnRequiresPurchaseChanged(bool bRequiresPurchase);                                                               // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnPreviewImageChanged
	// void OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture);                                                 // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnPartySizeChanged
	// void OnPartySizeChanged(int32_t PartySize);                                                                           // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnLogoImageChanged
	// void OnLogoImageChanged(bool bIsLoading, class UTexture* Texture);                                                    // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnLocalPlayerPromotedToLeader
	// void OnLocalPlayerPromotedToLeader();                                                                                 // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnLocalPlayerDemoted
	// void OnLocalPlayerDemoted();                                                                                          // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnIsFavoriteChanged
	// void OnIsFavoriteChanged(bool bIsFavorite);                                                                           // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnFriendsPlayingChanged
	// void OnFriendsPlayingChanged(int32_t NumPlaying);                                                                     // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnDetailsUpdated
	// void OnDetailsUpdated();                                                                                              // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnActivityUnSelected__DelegateSignature
	// void OnActivityUnSelected__DelegateSignature();                                                                       // [0x211c0a0] MulticastDelegate|Public|Delegate 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnActivitySelected__DelegateSignature
	// void OnActivitySelected__DelegateSignature();                                                                         // [0x211c0a0] MulticastDelegate|Public|Delegate 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsModeSetActivity
	// bool IsModeSetActivity();                                                                                             // [0xb658970] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsActivityLocked
	// bool IsActivityLocked();                                                                                              // [0xb6588b8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsActivityFavorited
	// bool IsActivityFavorited();                                                                                           // [0xb658894] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.HandleShowActivityDetails
	// void HandleShowActivityDetails();                                                                                     // [0xb658528] Final|Native|Private 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.HandleActivitySelected
	// void HandleActivitySelected();                                                                                        // [0x3548d00] Final|Native|Private 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.GetIsActivityLockedReason
	// EFortActivityIsLockedReason GetIsActivityLockedReason();                                                              // [0xb658320] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.GetInvalidActivityReason
	// EFortInvalidActivityReason GetInvalidActivityReason();                                                                // [0x1bd2638] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.GetActivitySelector
	// class UFortActivitySelector* GetActivitySelector();                                                                   // [0xb658148] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.GetActivityCreatorDisplayText
	// FString GetActivityCreatorDisplayText();                                                                              // [0xb658108] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.DoesActivityRequirePurchase
	// bool DoesActivityRequirePurchase();                                                                                   // [0xb6580a0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.BroadcastOnActivityConfirmed
	// void BroadcastOnActivityConfirmed();                                                                                  // [0xb657fd4] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityTileView
/// Size: 0x0000 (0x000C00 - 0x000C00)
class UFortActivityTileView : public UCommonTileView
{ 
public:


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityTileView.SetListenForMouseWheelInput
	// void SetListenForMouseWheelInput(bool bListenForInput);                                                               // [0x1bde590] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileView.RespondToVisibilityChange
	// void RespondToVisibilityChange(bool bIsVisible);                                                                      // [0xb658b9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileView.NavigateToTop
	// void NavigateToTop();                                                                                                 // [0xb658ae4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DiscoveryBrowserUI.FortDiscoverItemBrowserRow
/// Size: 0x0050 (0x0003A8 - 0x0003F8)
class UFortDiscoverItemBrowserRow : public UFortActivityBrowserRow
{ 
public:
	class UFortDiscoverItemListView*                   ListView_Tiles;                                             // 0x03A8   (0x0008)  
	class UCommonButtonBase*                           Button_PageLeft;                                            // 0x03B0   (0x0008)  
	class UCommonButtonBase*                           Button_PageRight;                                           // 0x03B8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x03C0   (0x0038)  MISSED
};

/// Class /Script/DiscoveryBrowserUI.FortDiscoverItemListView
/// Size: 0x0150 (0x000298 - 0x0003E8)
class UFortDiscoverItemListView : public UListViewBase
{ 
public:
	unsigned char                                      UnknownData00_2[0xE8];                                      // 0x0298   (0x00E8)  MISSED
	float                                              DirectionalNavigationTimeThreshold;                         // 0x0380   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0384   (0x0004)  MISSED
	class UClass*                                      PlayWithFriendsEntryWidgetClass;                            // 0x0388   (0x0008)  
	class UClass*                                      ActivityEntryWidgetClass;                                   // 0x0390   (0x0008)  
	SDK_UNDEFINED(1,13087) /* TEnumAsByte<EOrientation> */ __um(orientation);                                      // 0x0398   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0399   (0x0003)  MISSED
	float                                              EntrySpacing;                                               // 0x039C   (0x0004)  
	bool                                               bCircularNavigationEnabled;                                 // 0x03A0   (0x0001)  
	unsigned char                                      UnknownData03_6[0x47];                                      // 0x03A1   (0x0047)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortDiscoverItemListView.GetInViewCount
	// int32_t GetInViewCount();                                                                                             // [0xb65829c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DiscoveryBrowserUI.ActivityLibraryComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UActivityLibraryComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x00A0   (0x0010)  MISSED
	class UFortActivitySelector*                       ActivitySelector;                                           // 0x00B0   (0x0008)  
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserContext
/// Size: 0x0018 (0x000030 - 0x000048)
class UFortActivityBrowserContext : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0030   (0x0018)  MISSED
};

/// Class /Script/DiscoveryBrowserUI.OverrideMatchmakingUIComponent
/// Size: 0x0060 (0x0000A0 - 0x000100)
class UOverrideMatchmakingUIComponent : public UActorComponent
{ 
public:
	FMatchmakingUIOverride                             MatchmakingUIOverride;                                      // 0x00A0   (0x0060)  
};

/// Struct /Script/DiscoveryBrowserUI.ColorSchemeParamaterValues
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FColorSchemeParamaterValues
{ 
	class UMaterialParameterCollection*                AlternateMaterialCollection;                                // 0x0000   (0x0008)  
	SDK_UNDEFINED(80,13088) /* TMap<FName, float> */   __um(ScalarParameterValues);                                // 0x0008   (0x0050)  
	SDK_UNDEFINED(80,13089) /* TMap<FName, FLinearColor> */ __um(VectorParameterValues);                           // 0x0058   (0x0050)  
};

