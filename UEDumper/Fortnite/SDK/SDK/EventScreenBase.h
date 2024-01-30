
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
/// dependency: GameplayTags
/// dependency: SlateCore
/// dependency: UMG

/// Enum /Script/EventScreenBase.EEventScreenView
/// Size: 0x08
enum class EEventScreenView : uint8_t
{
	EEventScreenView__None                                                           = 0,
	EEventScreenView__LandingPage                                                    = 1,
	EEventScreenView__RewardPreview                                                  = 2,
	EEventScreenView__MoreInfo                                                       = 3,
	EEventScreenView__PurchaseLevels                                                 = 4,
	EEventScreenView__PurchasePremiumTrack                                           = 5,
	EEventScreenView__LoadError                                                      = 6,
	EEventScreenView__EEventScreenView_MAX                                           = 7
};

/// Enum /Script/EventScreenBase.EEventScreenRewardPreviewType
/// Size: 0x05
enum class EEventScreenRewardPreviewType : uint8_t
{
	EEventScreenRewardPreviewType__None                                              = 0,
	EEventScreenRewardPreviewType__RewardTrack                                       = 1,
	EEventScreenRewardPreviewType__SpecialItem                                       = 2,
	EEventScreenRewardPreviewType__SpecialPremiumItem                                = 3,
	EEventScreenRewardPreviewType__EEventScreenRewardPreviewType_MAX                 = 4
};

/// Struct /Script/EventScreenBase.EventItemOverride
/// Size: 0x0068 (0x000000 - 0x000068)
struct FEventItemOverride
{ 
	SDK_UNDEFINED(32,13293) /* TWeakObjectPtr<UFortItemDefinition*> */ __um(ItemDefinition);                       // 0x0000   (0x0020)  
	SDK_UNDEFINED(32,13294) /* TWeakObjectPtr<UTexture2D*> */ __um(CustomItemTexture);                             // 0x0020   (0x0020)  
	SDK_UNDEFINED(32,13295) /* TWeakObjectPtr<UTexture2D*> */ __um(CustomItemTextureMobile);                       // 0x0040   (0x0020)  
	bool                                               bIsDoubleWidth;                                             // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Struct /Script/EventScreenBase.EventScreenTrackData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FEventScreenTrackData
{ 
	FLinearColor                                       TrackColorPrimary;                                          // 0x0000   (0x0010)  
	FLinearColor                                       TrackColorSecondary;                                        // 0x0010   (0x0010)  
};

/// Class /Script/EventScreenBase.FortEventScreenData
/// Size: 0x0640 (0x000030 - 0x000670)
class UFortEventScreenData : public UDataAsset
{ 
public:
	SDK_UNDEFINED(16,13296) /* FString */              __um(EventCMSId);                                           // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,13297) /* FString */              __um(AccountResourceName);                                  // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,13298) /* FString */              __um(LevelOfferId);                                         // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,13299) /* FString */              __um(PremiumTrackOfferId);                                  // 0x0060   (0x0010)  
	class UFortTokenType*                              PremiumTrackPurchasedToken;                                 // 0x0070   (0x0008)  
	FGameplayTag                                       VaultWorldTag;                                              // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	FVaultWorldBackgroundData                          PreviewScreenBackgroundData;                                // 0x0080   (0x0058)  
	SDK_UNDEFINED(32,13300) /* TWeakObjectPtr<UFortChallengeBundleItemDefinition*> */ __um(QuestBundle);           // 0x00D8   (0x0020)  
	SDK_UNDEFINED(32,13301) /* TWeakObjectPtr<UFortItemDefinition*> */ __um(SpecialRewardItem);                    // 0x00F8   (0x0020)  
	SDK_UNDEFINED(32,13302) /* TWeakObjectPtr<UFortItemDefinition*> */ __um(SpecialPremiumRewardItem);             // 0x0118   (0x0020)  
	TArray<FEventItemOverride>                         ItemOverrides;                                              // 0x0138   (0x0010)  
	FEventScreenTrackData                              FreeTrackData;                                              // 0x0148   (0x0020)  
	FEventScreenTrackData                              PremiumTrackData;                                           // 0x0168   (0x0020)  
	FGameplayTag                                       QuestCategoryTag;                                           // 0x0188   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x018C   (0x0004)  MISSED
	TArray<class UClass*>                              RichTextDecorators;                                         // 0x0190   (0x0010)  
	class UMaterialInterface*                          EventBackgroundMaterial;                                    // 0x01A0   (0x0008)  
	class UMaterialInterface*                          ProgressBarMaterial;                                        // 0x01A8   (0x0008)  
	FSlateBrush                                        CurrencyBrush;                                              // 0x01B0   (0x00C0)  
	FSlateBrush                                        CompletionBannerBrush;                                      // 0x0270   (0x00C0)  
	FSlateBrush                                        GlowForeground;                                             // 0x0330   (0x00C0)  
	FSlateBrush                                        GlowBackground;                                             // 0x03F0   (0x00C0)  
	FLinearColor                                       EventBackgroundColor1;                                      // 0x04B0   (0x0010)  
	FLinearColor                                       EventBackgroundColor2;                                      // 0x04C0   (0x0010)  
	FLinearColor                                       RewardBackgroundColor1;                                     // 0x04D0   (0x0010)  
	FLinearColor                                       RewardBackgroundColor2;                                     // 0x04E0   (0x0010)  
	FLinearColor                                       RewardBackgroundColor3;                                     // 0x04F0   (0x0010)  
	FLinearColor                                       AccentColor;                                                // 0x0500   (0x0010)  
	SDK_UNDEFINED(80,13303) /* TMap<FName, FLinearColor> */ __um(RewardTileBackgroundColors);                      // 0x0510   (0x0050)  
	SDK_UNDEFINED(24,13304) /* FText */                __um(TimeRemainingFormat);                                  // 0x0560   (0x0018)  
	SDK_UNDEFINED(24,13305) /* FText */                __um(CurrencyFormat);                                       // 0x0578   (0x0018)  
	class USoundBase*                                  DefaultHoveredSound;                                        // 0x0590   (0x0008)  
	class USoundBase*                                  DefaultPressedSound;                                        // 0x0598   (0x0008)  
	class USoundBase*                                  BuyPressedSound;                                            // 0x05A0   (0x0008)  
	class USoundBase*                                  BuyHoldStartedSound;                                        // 0x05A8   (0x0008)  
	class USoundBase*                                  BuyHoldCompletedSound;                                      // 0x05B0   (0x0008)  
	class USoundBase*                                  BuyHoldAbortedSound;                                        // 0x05B8   (0x0008)  
	class USoundBase*                                  BackPressedSound;                                           // 0x05C0   (0x0008)  
	class USoundBase*                                  AddPressedSound;                                            // 0x05C8   (0x0008)  
	class USoundBase*                                  SubtractPressedSound;                                       // 0x05D0   (0x0008)  
	class USoundBase*                                  ProgressStartedSound;                                       // 0x05D8   (0x0008)  
	class USoundBase*                                  ProgressEndedSound;                                         // 0x05E0   (0x0008)  
	class USoundBase*                                  ProgressInterruptedSound;                                   // 0x05E8   (0x0008)  
	float                                              RewardPreviewZoomLevel;                                     // 0x05F0   (0x0004)  
	bool                                               bUseWidgetCameraFraming;                                    // 0x05F4   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x05F5   (0x0003)  MISSED
	SDK_UNDEFINED(32,13306) /* TWeakObjectPtr<UClass*> */ __um(MoreInfoModalClass);                                // 0x05F8   (0x0020)  
	SDK_UNDEFINED(32,13307) /* TWeakObjectPtr<UClass*> */ __um(PurchaseLevelsModalClass);                          // 0x0618   (0x0020)  
	SDK_UNDEFINED(32,13308) /* TWeakObjectPtr<UClass*> */ __um(PurchasePremiumTrackModalClass);                    // 0x0638   (0x0020)  
	SDK_UNDEFINED(16,13309) /* TArray<FString> */      __um(CalendarEvents);                                       // 0x0658   (0x0010)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0668   (0x0008)  MISSED
};

/// Class /Script/EventScreenBase.FortEventModalBase
/// Size: 0x0008 (0x000400 - 0x000408)
class UFortEventModalBase : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0400   (0x0008)  MISSED


	/// Functions
	// Function /Script/EventScreenBase.FortEventModalBase.CloseModal
	// void CloseModal();                                                                                                    // [0x3b255c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/EventScreenBase.FortEventMoreInfoGroup
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class UFortEventMoreInfoGroup : public UUserWidget
{ 
public:


	/// Functions
	// Function /Script/EventScreenBase.FortEventMoreInfoGroup.OnSetGroupText
	// void OnSetGroupText(FText& Header, FText& Body);                                                                      // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventMoreInfoGroup.OnIconLoaded
	// void OnIconLoaded(class UTexture2D* Icon);                                                                            // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventMoreInfoGroup.OnEventScreenDataSet
	// void OnEventScreenDataSet(class UFortEventScreenData* InEventScreenData);                                             // [0x211c0a0] Event|Protected|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventMoreInfoModal
/// Size: 0x0028 (0x000408 - 0x000430)
class UFortEventMoreInfoModal : public UFortEventModalBase
{ 
public:
	class UDynamicEntryBox*                            DynamicEntryBox_Groups;                                     // 0x0408   (0x0008)  
	class UCommonButtonBase*                           Button_Back;                                                // 0x0410   (0x0008)  
	class UCommonButtonBase*                           Button_CloseTouch;                                          // 0x0418   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0420   (0x0008)  MISSED
	class UScrollBox*                                  SB_Vertical;                                                // 0x0428   (0x0008)  


	/// Functions
	// Function /Script/EventScreenBase.FortEventMoreInfoModal.SetModalText
	// void SetModalText(FText& Header, FText& SubHeader, FText& Legal);                                                     // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventMoreInfoModal.OnModalBackout
	// void OnModalBackout();                                                                                                // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventMoreInfoModal.OnEventScreenDataSet
	// void OnEventScreenDataSet(class UFortEventScreenData* InEventScreenData);                                             // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventMoreInfoModal.GetEventScreenData
	// class UFortEventScreenData* GetEventScreenData();                                                                     // [0xb1d0728] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventScreenBase.FortEventPurchaseLevelsModal
/// Size: 0x0070 (0x000408 - 0x000478)
class UFortEventPurchaseLevelsModal : public UFortEventModalBase
{ 
public:
	class UCommonButtonBase*                           Button_Addition;                                            // 0x0408   (0x0008)  
	class UCommonButtonBase*                           Button_Subtraction;                                         // 0x0410   (0x0008)  
	class UCommonButtonBase*                           Button_Purchase;                                            // 0x0418   (0x0008)  
	class UCommonButtonBase*                           Button_GetVBucks;                                           // 0x0420   (0x0008)  
	class UCommonButtonBase*                           Button_Back;                                                // 0x0428   (0x0008)  
	class UCommonButtonBase*                           Button_CloseTouch;                                          // 0x0430   (0x0008)  
	class UEventScreenListView*                        ListView_RewardPreview;                                     // 0x0438   (0x0008)  
	int32_t                                            CurrentResourceValue;                                       // 0x0440   (0x0004)  
	int32_t                                            MaxResourceValue;                                           // 0x0444   (0x0004)  
	int32_t                                            CurrentVBucks;                                              // 0x0448   (0x0004)  
	int32_t                                            OfferResourceQuantity;                                      // 0x044C   (0x0004)  
	bool                                               bAnimateListViewFromEmpty;                                  // 0x0450   (0x0001)  
	unsigned char                                      UnknownData00_6[0x27];                                      // 0x0451   (0x0027)  MISSED


	/// Functions
	// Function /Script/EventScreenBase.FortEventPurchaseLevelsModal.OnPurchaseAmountChanged
	// void OnPurchaseAmountChanged(int32_t TotalPrice, int32_t LevelQuantity, int32_t PurchaseQuantity, int32_t ResourceQuantity); // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventPurchaseLevelsModal.OnEventScreenDataSet
	// void OnEventScreenDataSet(class UFortEventScreenData* InEventScreenData);                                             // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventPurchaseLevelsModal.OnCMSTextApplied
	// void OnCMSTextApplied(FText& LegalText);                                                                              // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventPurchaseLevelsModal.OnAmountChangeButtonClicked
	// void OnAmountChangeButtonClicked();                                                                                   // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventPurchaseLevelsModal.HandlePurchaseComplete
	// void HandlePurchaseComplete(bool bSuccess, TArray<FPurchasedItemInfo>& PurchasedItems, FString InOfferId);            // [0xb1d0a08] Final|Native|Private|HasOutParms 
	// Function /Script/EventScreenBase.FortEventPurchaseLevelsModal.GetEventScreenData
	// class UFortEventScreenData* GetEventScreenData();                                                                     // [0xb1d0750] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventScreenBase.FortPurchasePremiumTrackBody
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class UFortPurchasePremiumTrackBody : public UUserWidget
{ 
public:


	/// Functions
	// Function /Script/EventScreenBase.FortPurchasePremiumTrackBody.OnPopulate
	// void OnPopulate(int32_t BodyIndex, FText& BodyText);                                                                  // [0x211c0a0] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventPurchasePremiumTrackModal
/// Size: 0x0070 (0x000408 - 0x000478)
class UFortEventPurchasePremiumTrackModal : public UFortEventModalBase
{ 
public:
	class UDynamicEntryBox*                            DynamicEntryBox_Body;                                       // 0x0408   (0x0008)  
	class UScrollBox*                                  ScrollBox_Body;                                             // 0x0410   (0x0008)  
	class UFortCTAButton*                              Button_Purchase;                                            // 0x0418   (0x0008)  
	class UCommonButtonBase*                           Button_GetVBucks;                                           // 0x0420   (0x0008)  
	class UCommonButtonBase*                           Button_Back;                                                // 0x0428   (0x0008)  
	class UCommonButtonBase*                           Button_CloseTouch;                                          // 0x0430   (0x0008)  
	class UCommonButtonBase*                           Button_PreviewReward;                                       // 0x0438   (0x0008)  
	int32_t                                            CurrentVBucks;                                              // 0x0440   (0x0004)  
	unsigned char                                      UnknownData00_6[0x34];                                      // 0x0444   (0x0034)  MISSED


	/// Functions
	// Function /Script/EventScreenBase.FortEventPurchasePremiumTrackModal.OnPriceSet
	// void OnPriceSet(int32_t Price);                                                                                       // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventPurchasePremiumTrackModal.OnEventScreenDataSet
	// void OnEventScreenDataSet(class UFortEventScreenData* InEventScreenData);                                             // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventPurchasePremiumTrackModal.OnCMSTextApplied
	// void OnCMSTextApplied(FText& HeaderText, FText& LegalText);                                                           // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventPurchasePremiumTrackModal.HandlePurchaseComplete
	// void HandlePurchaseComplete(bool bSuccess, TArray<FPurchasedItemInfo>& PurchasedItems, FString InOfferId);            // [0xb1d0a08] Final|Native|Private|HasOutParms 
	// Function /Script/EventScreenBase.FortEventPurchasePremiumTrackModal.GetEventScreenData
	// class UFortEventScreenData* GetEventScreenData();                                                                     // [0xb1d0778] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventScreenBase.FortEventListViewWidgetBase
/// Size: 0x0008 (0x0002C0 - 0x0002C8)
class UFortEventListViewWidgetBase : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x02C0   (0x0008)  MISSED
};

/// Class /Script/EventScreenBase.FortEventRewardTracksWidget
/// Size: 0x0050 (0x0002C8 - 0x000318)
class UFortEventRewardTracksWidget : public UFortEventListViewWidgetBase
{ 
public:
	class UDynamicEntryBox*                            DynamicEntryBox_RewardTracks;                               // 0x02C8   (0x0008)  
	bool                                               bPreviewMode;                                               // 0x02D0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x47];                                      // 0x02D1   (0x0047)  MISSED


	/// Functions
	// Function /Script/EventScreenBase.FortEventRewardTracksWidget.BPSetProgressPercent
	// void BPSetProgressPercent(float Percent);                                                                             // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardTracksWidget.BPSetAllRewardsCollected
	// void BPSetAllRewardsCollected(bool bAllCollected);                                                                    // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardTracksWidget.BPOnSetRewardItem
	// void BPOnSetRewardItem(int32_t RequiredProgress, int32_t RemainingProgress, float RewardProgressPercent, float PreviewProgressPercent, float OverallProgressPercent, bool bInPreviewMode); // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardTracksWidget.BPOnEventScreenDataSet
	// void BPOnEventScreenDataSet(class UFortEventScreenData* InEventScreenData);                                           // [0x211c0a0] Event|Protected|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventSpacerWidget
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class UFortEventSpacerWidget : public UFortEventListViewWidgetBase
{ 
public:
};

/// Class /Script/EventScreenBase.FortEventRewardWidget
/// Size: 0x0090 (0x0002C0 - 0x000350)
class UFortEventRewardWidget : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x02C0   (0x0008)  MISSED
	class UCommonButtonBase*                           Button_RewardPreview;                                       // 0x02C8   (0x0008)  
	class UFortCosmeticItemCard*                       UserWidget_ItemCard;                                        // 0x02D0   (0x0008)  
	bool                                               bIsTrackOwned;                                              // 0x02D8   (0x0001)  
	bool                                               bPreviewMode;                                               // 0x02D9   (0x0001)  
	bool                                               bInPreviewSelectedState;                                    // 0x02DA   (0x0001)  
	bool                                               bInPremiumUpgradeState;                                     // 0x02DB   (0x0001)  
	unsigned char                                      UnknownData01_6[0x74];                                      // 0x02DC   (0x0074)  MISSED


	/// Functions
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetTrackData
	// void SetTrackData(FEventScreenTrackData& TrackData, bool bIsOwned);                                                   // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetProgressPercent
	// void SetProgressPercent(float Percent);                                                                               // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetIsBannerItem
	// void SetIsBannerItem(bool bIsBanner);                                                                                 // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetInSelectedState
	// void SetInSelectedState(bool bSelected);                                                                              // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetInPreviewSelectedState
	// void SetInPreviewSelectedState(bool bSelected);                                                                       // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetInPreviewedState
	// void SetInPreviewedState(bool bPreviewed);                                                                            // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetInPremiumUpgradeState
	// void SetInPremiumUpgradeState(bool bHighlighted);                                                                     // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetDoubleWidth
	// void SetDoubleWidth(bool bDoubleWidth);                                                                               // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetCustomItemIcon
	// void SetCustomItemIcon(class UTexture2D* CustomItemIcon);                                                             // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetAllRewardsCollected
	// void SetAllRewardsCollected(bool bAllCollected);                                                                      // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.OnSetRewardItem
	// void OnSetRewardItem(int32_t RequiredProgress, int32_t RemainingProgress, float RewardProgressPercent, float PreviewProgressPercent, float OverallProgressPercent, bool bInPreviewMode); // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.OnRewardWidgetReset
	// void OnRewardWidgetReset();                                                                                           // [0x211c0a0] Event|Public|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType NewInputType);                                                             // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.OnEventScreenDataSet
	// void OnEventScreenDataSet(class UFortEventScreenData* InEventScreenData);                                             // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.GetEventScreenData
	// class UFortEventScreenData* GetEventScreenData();                                                                     // [0xb1d07a0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventScreenBase.FortEventScreenBase
/// Size: 0x0440 (0x000730 - 0x000B70)
class UFortEventScreenBase : public UFortItemPreviewScreen
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0730   (0x0008)  MISSED
	TArray<class UNamedSlot*>                          LayoutTemplateSlots;                                        // 0x0738   (0x0010)  
	class UFortLazyImage*                              LazyImage_KeyArt;                                           // 0x0748   (0x0008)  
	class UCommonButtonBase*                           Button_ViewQuests;                                          // 0x0750   (0x0008)  
	class UCommonButtonBase*                           Button_MoreInfo;                                            // 0x0758   (0x0008)  
	class UCommonButtonBase*                           Button_PurchaseLevels;                                      // 0x0760   (0x0008)  
	class UCommonButtonBase*                           Button_Preview;                                             // 0x0768   (0x0008)  
	class UCommonButtonBase*                           Button_ShowInItemShop;                                      // 0x0770   (0x0008)  
	class UCommonButtonBase*                           Button_Previous;                                            // 0x0778   (0x0008)  
	class UCommonButtonBase*                           Button_Next;                                                // 0x0780   (0x0008)  
	class UFortEventTrackerModule_CustomText*          CustomText_InspectItem;                                     // 0x0788   (0x0008)  
	class UPanelWidget*                                Panel_LoadError;                                            // 0x0790   (0x0008)  
	class UCommonButtonBase*                           Button_Close;                                               // 0x0798   (0x0008)  
	class UCommonButtonBase*                           Button_CloseTouch;                                          // 0x07A0   (0x0008)  
	class UCommonTextBlock*                            Text_ItemDescription;                                       // 0x07A8   (0x0008)  
	class UCommonTextBlock*                            Text_ItemName;                                              // 0x07B0   (0x0008)  
	class UCommonTextBlock*                            Text_SetDetails;                                            // 0x07B8   (0x0008)  
	class UAthenaRewardItemTypeRarityTag*              ItemRewardTag;                                              // 0x07C0   (0x0008)  
	class UFortEventScreenData*                        EventScreenData;                                            // 0x07C8   (0x0008)  
	EEventScreenRewardPreviewType                      ActiveRewardPreviewType;                                    // 0x07D0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x07D1   (0x0007)  MISSED
	class UFortChallengeBundleItemDefinition*          LoadedQuestBundle;                                          // 0x07D8   (0x0008)  
	class AFortItemPreviewWorld*                       CachedVaultWorld;                                           // 0x07E0   (0x0008)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x07E8   (0x0010)  MISSED
	float                                              TimeBetweenVariantsRestart;                                 // 0x07F8   (0x0004)  
	float                                              TimeBetweenVariants;                                        // 0x07FC   (0x0004)  
	TArray<FFortCosmeticVariantPreview>                CachedVariantPreviews;                                      // 0x0800   (0x0010)  
	unsigned char                                      UnknownData03_6[0x360];                                     // 0x0810   (0x0360)  MISSED


	/// Functions
	// Function /Script/EventScreenBase.FortEventScreenBase.UpdateVariantCounter
	// void UpdateVariantCounter(int32_t CurrentVariantIndex, int32_t TotalNumVariants);                                     // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.SetRewardTrackLegal
	// void SetRewardTrackLegal(FText& LegalText);                                                                           // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.SetItemShopOfferInfoVisibility
	// void SetItemShopOfferInfoVisibility(bool bIsVisible);                                                                 // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.SetItemShopCallout
	// void SetItemShopCallout(FText& ItemShopCalloutText);                                                                  // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.RegisterLayoutSlots
	// void RegisterLayoutSlots();                                                                                           // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.OnScreenViewChanged
	// void OnScreenViewChanged(EEventScreenView PrevScreenView, EEventScreenView NewScreenView);                            // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.OnRewardTrackReady
	// void OnRewardTrackReady();                                                                                            // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.OnRewardPreviewItemChanged
	// void OnRewardPreviewItemChanged(class UFortAccountItemDefinition* Item, bool bFreeTrack);                             // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.OnFirstViewAfterCompletion
	// void OnFirstViewAfterCompletion();                                                                                    // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.OnCalendarEventStarted
	// void OnCalendarEventStarted(FString EventName);                                                                       // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.OnCalendarEventEnded
	// void OnCalendarEventEnded(FString EventName);                                                                         // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.IsCalendarEventActive
	// bool IsCalendarEventActive(FString EventName);                                                                        // [0xb1d146c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EventScreenBase.FortEventScreenBase.HasPurchasedPremiumTrack
	// bool HasPurchasedPremiumTrack();                                                                                      // [0xb1d1448] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EventScreenBase.FortEventScreenBase.HasAllRewardsCollected
	// bool HasAllRewardsCollected();                                                                                        // [0xb1d1424] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EventScreenBase.FortEventScreenBase.HandleUpsellPromptNavigateUpEvent
	// class UWidget* HandleUpsellPromptNavigateUpEvent(EUINavigation InNavigation);                                         // [0xb1d139c] Final|Native|Private 
	// Function /Script/EventScreenBase.FortEventScreenBase.HandleToggleFullscreenMap
	// void HandleToggleFullscreenMap(bool bVisible);                                                                        // [0xb1d131c] Final|Native|Private 
	// Function /Script/EventScreenBase.FortEventScreenBase.HandleRewardListNavigateUpEvent
	// class UWidget* HandleRewardListNavigateUpEvent(EUINavigation InNavigation);                                           // [0xb1d128c] Final|Native|Private 
	// Function /Script/EventScreenBase.FortEventScreenBase.HandleRewardListNavigateRightEvent
	// class UWidget* HandleRewardListNavigateRightEvent(EUINavigation InNavigation);                                        // [0xb1d11fc] Final|Native|Private 
	// Function /Script/EventScreenBase.FortEventScreenBase.HandleItemShown
	// void HandleItemShown(class UFortAccountItemDefinition* AccountItemDef);                                               // [0xb1d0988] Final|Native|Private 
	// Function /Script/EventScreenBase.FortEventScreenBase.HandleGiftBoxClosed
	// void HandleGiftBoxClosed();                                                                                           // [0xb1d0974] Final|Native|Private 
	// Function /Script/EventScreenBase.FortEventScreenBase.HandleActiveSeasonDataChanged
	// void HandleActiveSeasonDataChanged(TArray<FString>& ActiveEventFlags);                                                // [0xb1d0844] Final|Native|Private|HasOutParms 
	// Function /Script/EventScreenBase.FortEventScreenBase.GetVaultWorldFloorMID
	// class UMaterialInstanceDynamic* GetVaultWorldFloorMID();                                                              // [0xb1d081c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EventScreenBase.FortEventScreenBase.GetVaultWorldBackgroundMID
	// class UMaterialInstanceDynamic* GetVaultWorldBackgroundMID();                                                         // [0xb1d07f4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EventScreenBase.FortEventScreenBase.GetEventTimeRemaining
	// FTimespan GetEventTimeRemaining();                                                                                    // [0xb1d07c8] Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EventScreenBase.FortEventScreenBase.GetActiveModal
	// class UFortEventModalBase* GetActiveModal();                                                                          // [0xb1d06d8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventScreenBase.EventScreenListView
/// Size: 0x01E0 (0x000298 - 0x000478)
class UEventScreenListView : public UListViewBase
{ 
public:
	unsigned char                                      UnknownData00_2[0xE8];                                      // 0x0298   (0x00E8)  MISSED
	SDK_UNDEFINED(16,13310) /* FMulticastInlineDelegate */ __um(OnProgressBarAnimationStartedEvent);               // 0x0380   (0x0010)  
	SDK_UNDEFINED(16,13311) /* FMulticastInlineDelegate */ __um(OnProgressBarAnimationCompletedEvent);             // 0x0390   (0x0010)  
	SDK_UNDEFINED(16,13312) /* FMulticastInlineDelegate */ __um(OnProgressBarAnimationInterruptedEvent);           // 0x03A0   (0x0010)  
	SDK_UNDEFINED(16,13313) /* FMulticastInlineDelegate */ __um(OnResourcePreviewOffsetAnimationEvent);            // 0x03B0   (0x0010)  
	unsigned char                                      UnknownData01_5[0x20];                                      // 0x03C0   (0x0020)  MISSED
	class UClass*                                      RewardTrackWidgetClass;                                     // 0x03E0   (0x0008)  
	class UClass*                                      SpacerWidgetClass;                                          // 0x03E8   (0x0008)  
	float                                              EntrySpacing;                                               // 0x03F0   (0x0004)  
	bool                                               bCenterSelection;                                           // 0x03F4   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x03F5   (0x0003)  MISSED
	float                                              MaxItemsInView;                                             // 0x03F8   (0x0004)  
	bool                                               bPreviewMode;                                               // 0x03FC   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x03FD   (0x0003)  MISSED
	class UCurveFloat*                                 ProgressAnimationCurve;                                     // 0x0400   (0x0008)  
	bool                                               bCanAnimateOnceComplete;                                    // 0x0408   (0x0001)  
	unsigned char                                      UnknownData04_6[0x6F];                                      // 0x0409   (0x006F)  MISSED


	/// Functions
	// Function /Script/EventScreenBase.EventScreenListView.SetNativeTickAllowed
	// void SetNativeTickAllowed(bool bAllowed);                                                                             // [0xb1d21e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/EventScreenBase.EventScreenListView.GetEventScreenData
	// class UFortEventScreenData* GetEventScreenData();                                                                     // [0xb1d0700] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventScreenBase.FortEventScreenTeaser
/// Size: 0x0040 (0x000570 - 0x0005B0)
class UFortEventScreenTeaser : public UFortActivatablePanel
{ 
public:
	SDK_UNDEFINED(16,13314) /* FString */              __um(CountdownCalendarEventFlag);                           // 0x0570   (0x0010)  
	SDK_UNDEFINED(16,13315) /* TArray<FString> */      __um(CalendarEvents);                                       // 0x0580   (0x0010)  
	FGameplayTag                                       QuestCategoryTag;                                           // 0x0590   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0594   (0x0004)  MISSED
	class UCommonButtonBase*                           Button_ViewQuests;                                          // 0x0598   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x05A0   (0x0010)  MISSED


	/// Functions
	// Function /Script/EventScreenBase.FortEventScreenTeaser.OnCalendarEventStarted
	// void OnCalendarEventStarted(FString EventName);                                                                       // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenTeaser.OnCalendarEventEnded
	// void OnCalendarEventEnded(FString EventName);                                                                         // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenTeaser.IsCalendarEventActive
	// bool IsCalendarEventActive(FString EventName);                                                                        // [0xb1d1b28] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EventScreenBase.FortEventScreenTeaser.HandleActiveSeasonDataChanged
	// void HandleActiveSeasonDataChanged(TArray<FString>& ActiveEventFlags);                                                // [0xb1d08dc] Final|Native|Private|HasOutParms 
	// Function /Script/EventScreenBase.FortEventScreenTeaser.BP_SetCountdownTimeRemaining
	// void BP_SetCountdownTimeRemaining(FTimespan& TimeRemaining);                                                          // [0x211c0a0] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventTokenCollectionWidget
/// Size: 0x0060 (0x0002C0 - 0x000320)
class UFortEventTokenCollectionWidget : public UUserWidget
{ 
public:
	class UCommonLazyImage*                            LazyImage_GhostIcon;                                        // 0x02C0   (0x0008)  
	class UCommonLazyImage*                            LazyImage_CompletedIcon;                                    // 0x02C8   (0x0008)  
	class UImage*                                      Image_Glow;                                                 // 0x02D0   (0x0008)  
	SDK_UNDEFINED(32,13316) /* TWeakObjectPtr<UTexture2D*> */ __um(FallbackBrush);                                 // 0x02D8   (0x0020)  
	SDK_UNDEFINED(32,13317) /* TWeakObjectPtr<UFortTokenType*> */ __um(TokenDefinition);                           // 0x02F8   (0x0020)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0318   (0x0008)  MISSED


	/// Functions
	// Function /Script/EventScreenBase.FortEventTokenCollectionWidget.OnRefreshIcon
	// void OnRefreshIcon(bool IsCollected, bool bIsFirstViewAfterCollection);                                               // [0x211c0a0] Event|Protected|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule
/// Size: 0x0008 (0x0002C0 - 0x0002C8)
class UFortEventTrackerModule : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x02C0   (0x0008)  MISSED


	/// Functions
	// Function /Script/EventScreenBase.FortEventTrackerModule.OnModuleInitialized
	// void OnModuleInitialized(class UFortEventScreenData* InEventScreenData);                                              // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventTrackerModule.GetEventScreenData
	// class UFortEventScreenData* GetEventScreenData();                                                                     // [0xa14cd58] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_EventDetails
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class UFortEventTrackerModule_EventDetails : public UFortEventTrackerModule
{ 
public:


	/// Functions
	// Function /Script/EventScreenBase.FortEventTrackerModule_EventDetails.UpdateEventTimeRemaining
	// void UpdateEventTimeRemaining(FText& EventTimeRemainingText, FTimespan& TimeRemaining);                               // [0x211c0a0] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventTrackerModule_EventDetails.OnPopulateEventDetailsText
	// void OnPopulateEventDetailsText(FText& OutEventName, FText& OutEventDescription);                                     // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_Header
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class UFortEventTrackerModule_Header : public UFortEventTrackerModule
{ 
public:


	/// Functions
	// Function /Script/EventScreenBase.FortEventTrackerModule_Header.OnPopulateEventResourceStarterHeader
	// void OnPopulateEventResourceStarterHeader(FText& Header);                                                             // [0x211c0a0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventTrackerModule_Header.OnPopulateEventResourceHeader
	// void OnPopulateEventResourceHeader(FText& Header, int32_t ResourceValue);                                             // [0x211c0a0] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_RewardDetails
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class UFortEventTrackerModule_RewardDetails : public UFortEventTrackerModule
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x02C8   (0x0008)  MISSED


	/// Functions
	// Function /Script/EventScreenBase.FortEventTrackerModule_RewardDetails.OnPopulateNextRewardDetails
	// void OnPopulateNextRewardDetails(TArray<FText>& RewardNames, int32_t ResourceNeeded);                                 // [0x211c0a0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventTrackerModule_RewardDetails.OnPopulateCompletedReward
	// void OnPopulateCompletedReward(TArray<FText>& RewardNames);                                                           // [0x211c0a0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventTrackerModule_RewardDetails.IsPremiumTrackOwned
	// bool IsPremiumTrackOwned();                                                                                           // [0xa14cd00] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_RewardRemaining
/// Size: 0x0020 (0x0002C8 - 0x0002E8)
class UFortEventTrackerModule_RewardRemaining : public UFortEventTrackerModule
{ 
public:
	class UCommonButtonBase*                           Button_PurchasePremium;                                     // 0x02C8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x02D0   (0x0018)  MISSED


	/// Functions
	// Function /Script/EventScreenBase.FortEventTrackerModule_RewardRemaining.OnPopulateRemaining
	// void OnPopulateRemaining(int32_t ResourceNeeded, int32_t TotalResourceRequired, bool bRequiresPremiumTrackPurchase);  // [0x211c0a0] Event|Public|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_ProgressiveRewards
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class UFortEventTrackerModule_ProgressiveRewards : public UFortEventTrackerModule
{ 
public:
	class UEventScreenListView*                        ListView_Rewards;                                           // 0x02C8   (0x0008)  


	/// Functions
	// Function /Script/EventScreenBase.FortEventTrackerModule_ProgressiveRewards.OnPopulateCompletionMessage
	// void OnPopulateCompletionMessage(bool bIsComplete, FText& CompletionText);                                            // [0x211c0a0] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_Collection
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class UFortEventTrackerModule_Collection : public UFortEventTrackerModule
{ 
public:


	/// Functions
	// Function /Script/EventScreenBase.FortEventTrackerModule_Collection.OnGatherTokenCollectionWidgets
	// void OnGatherTokenCollectionWidgets(TArray<UFortEventTokenCollectionWidget*>& OutCollectionWidgets);                  // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_Banner
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class UFortEventTrackerModule_Banner : public UFortEventTrackerModule
{ 
public:
	class UFortLazyImage*                              LazyImage_BannerArt;                                        // 0x02C8   (0x0008)  


	/// Functions
	// Function /Script/EventScreenBase.FortEventTrackerModule_Banner.OnPopulateHeaderCTAText
	// void OnPopulateHeaderCTAText(FText& HeaderCTAText);                                                                   // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventTrackerModule_Banner.OnPopulateBannerText
	// void OnPopulateBannerText(FText& BannerText);                                                                         // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventTrackerModule_Banner.OnCTACompleted
	// void OnCTACompleted(bool bIsComplete);                                                                                // [0x211c0a0] Event|Protected|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_PremiumUpsell
/// Size: 0x0070 (0x0002C8 - 0x000338)
class UFortEventTrackerModule_PremiumUpsell : public UFortEventTrackerModule
{ 
public:
	class UFortCTAButton*                              Button_Prompt;                                              // 0x02C8   (0x0008)  
	SDK_UNDEFINED(24,13318) /* FText */                __um(PromptTextUnowned);                                    // 0x02D0   (0x0018)  
	SDK_UNDEFINED(24,13319) /* FText */                __um(PromptTextOwned);                                      // 0x02E8   (0x0018)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0300   (0x0038)  MISSED


	/// Functions
	// Function /Script/EventScreenBase.FortEventTrackerModule_PremiumUpsell.OnPopulateText
	// void OnPopulateText(FText& HeaderText, FText& BodyText);                                                              // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventTrackerModule_PremiumUpsell.OnIconLoaded
	// void OnIconLoaded(class UTexture* LoadedTexture);                                                                     // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventTrackerModule_PremiumUpsell.IsPremiumTrackOwned
	// bool IsPremiumTrackOwned();                                                                                           // [0xa79c95c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_CustomText
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class UFortEventTrackerModule_CustomText : public UFortEventTrackerModule
{ 
public:


	/// Functions
	// Function /Script/EventScreenBase.FortEventTrackerModule_CustomText.OnPopulateText
	// void OnPopulateText(FText& CustomText);                                                                               // [0x211c0a0] Event|Public|HasOutParms|BlueprintEvent 
};

/// Struct /Script/EventScreenBase.EventScreenMoreInfoGroup
/// Size: 0x0040 (0x000000 - 0x000040)
struct FEventScreenMoreInfoGroup
{ 
	SDK_UNDEFINED(24,13320) /* FText */                __um(Header);                                               // 0x0000   (0x0018)  
	SDK_UNDEFINED(24,13321) /* FText */                __um(Body);                                                 // 0x0018   (0x0018)  
	SDK_UNDEFINED(16,13322) /* FString */              __um(IconURL);                                              // 0x0030   (0x0010)  
};

/// Struct /Script/EventScreenBase.EventScreenCMSResourceGroupOverride
/// Size: 0x0018 (0x000000 - 0x000018)
struct FEventScreenCMSResourceGroupOverride
{ 
	int32_t                                            ResourceValue;                                              // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,13323) /* FString */              __um(KeyArtOverrideURL);                                    // 0x0008   (0x0010)  
};

/// Struct /Script/EventScreenBase.EventScreenCMSData
/// Size: 0x02A8 (0x000000 - 0x0002A8)
struct FEventScreenCMSData
{ 
	SDK_UNDEFINED(16,13324) /* FString */              __um(EventCMSId);                                           // 0x0000   (0x0010)  
	SDK_UNDEFINED(24,13325) /* FText */                __um(EventName);                                            // 0x0010   (0x0018)  
	SDK_UNDEFINED(24,13326) /* FText */                __um(EventDescription);                                     // 0x0028   (0x0018)  
	SDK_UNDEFINED(24,13327) /* FText */                __um(ResourceHeader);                                       // 0x0040   (0x0018)  
	SDK_UNDEFINED(24,13328) /* FText */                __um(StarterHeader);                                        // 0x0058   (0x0018)  
	SDK_UNDEFINED(24,13329) /* FText */                __um(CompletionHeader);                                     // 0x0070   (0x0018)  
	SDK_UNDEFINED(24,13330) /* FText */                __um(EventCTA);                                             // 0x0088   (0x0018)  
	SDK_UNDEFINED(24,13331) /* FText */                __um(EventCTACompleted);                                    // 0x00A0   (0x0018)  
	SDK_UNDEFINED(24,13332) /* FText */                __um(HeaderCTA);                                            // 0x00B8   (0x0018)  
	SDK_UNDEFINED(24,13333) /* FText */                __um(ItemShopCallout);                                      // 0x00D0   (0x0018)  
	SDK_UNDEFINED(16,13334) /* FString */              __um(CTAIconURL);                                           // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,13335) /* FString */              __um(KeyArtURL);                                            // 0x00F8   (0x0010)  
	SDK_UNDEFINED(24,13336) /* FText */                __um(MoreInfoHeader);                                       // 0x0108   (0x0018)  
	SDK_UNDEFINED(24,13337) /* FText */                __um(MoreInfoSubHeader);                                    // 0x0120   (0x0018)  
	SDK_UNDEFINED(24,13338) /* FText */                __um(MoreInfoLegal);                                        // 0x0138   (0x0018)  
	TArray<FEventScreenMoreInfoGroup>                  MoreInfoGroups;                                             // 0x0150   (0x0010)  
	SDK_UNDEFINED(24,13339) /* FText */                __um(PurchaseLegal);                                        // 0x0160   (0x0018)  
	SDK_UNDEFINED(24,13340) /* FText */                __um(RewardTrackLegal);                                     // 0x0178   (0x0018)  
	SDK_UNDEFINED(16,13341) /* FString */              __um(ItemShopOfferId);                                      // 0x0190   (0x0010)  
	SDK_UNDEFINED(24,13342) /* FText */                __um(PremiumUpsellUnownedHeader);                           // 0x01A0   (0x0018)  
	SDK_UNDEFINED(24,13343) /* FText */                __um(PremiumUpsellUnownedBody);                             // 0x01B8   (0x0018)  
	SDK_UNDEFINED(24,13344) /* FText */                __um(PremiumUpsellOwnedHeader);                             // 0x01D0   (0x0018)  
	SDK_UNDEFINED(24,13345) /* FText */                __um(PremiumUpsellOwnedBody);                               // 0x01E8   (0x0018)  
	SDK_UNDEFINED(16,13346) /* FString */              __um(PremiumUpsellIconURL);                                 // 0x0200   (0x0010)  
	SDK_UNDEFINED(24,13347) /* FText */                __um(PurchasePremiumTrackHeader);                           // 0x0210   (0x0018)  
	SDK_UNDEFINED(16,13348) /* TArray<FText> */        __um(PurchasePremiumTrackBodyList);                         // 0x0228   (0x0010)  
	SDK_UNDEFINED(24,13349) /* FText */                __um(InspectSpecialItemUnowned);                            // 0x0238   (0x0018)  
	SDK_UNDEFINED(24,13350) /* FText */                __um(InspectSpecialItemOwned);                              // 0x0250   (0x0018)  
	SDK_UNDEFINED(24,13351) /* FText */                __um(InspectSpecialPremiumItemUnowned);                     // 0x0268   (0x0018)  
	SDK_UNDEFINED(24,13352) /* FText */                __um(InspectSpecialPremiumItemOwned);                       // 0x0280   (0x0018)  
	TArray<FEventScreenCMSResourceGroupOverride>       ResourceGroupOverrides;                                     // 0x0298   (0x0010)  
};

/// Struct /Script/EventScreenBase.EventScreenCMSGroup
/// Size: 0x0010 (0x000000 - 0x000010)
struct FEventScreenCMSGroup
{ 
	TArray<FEventScreenCMSData>                        EventScreens;                                               // 0x0000   (0x0010)  
};

