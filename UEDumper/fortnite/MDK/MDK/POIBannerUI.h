
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/POIBannerUI.POIBannerToastSocialAvatar
/// Size: 0x0008 (0x000328 - 0x000330)
class UPOIBannerToastSocialAvatar : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	CMember(class UFortSocialAvatarIcon*)              Icon_SocialAvatar                                           OFFSET(get<T>, {0x328, 8, 0, 0})


	/// Functions
	// Function /Script/POIBannerUI.POIBannerToastSocialAvatar.SetSocialAvatarTexture
	// void SetSocialAvatarTexture(TWeakObjectPtr<UTexture2D*> AvatarTexture);                                                  // [0xaf1a3f0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/POIBannerUI.POIBannerToastSocialAvatar.SetSocialAvatar
	// void SetSocialAvatar(class AFortPlayerState* PlayerState);                                                               // [0xaf1a368] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/POIBannerUI.POIBannerToastWidgetBase
/// Size: 0x0048 (0x000328 - 0x000370)
class UPOIBannerToastWidgetBase : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	SMember(FFortPrioritizedWidgetData)                PrioritizationData                                          OFFSET(getStruct<T>, {0x368, 2, 0, 0})


	/// Functions
	// Function /Script/POIBannerUI.POIBannerToastWidgetBase.OnStompFailed
	// void OnStompFailed();                                                                                                    // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/POIBannerUI.POIBannerToastWidgetBase.OnStompedByOtherWidget
	// void OnStompedByOtherWidget();                                                                                           // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/POIBannerUI.POIBannerToastWidgetBase.K2_OnBecomeInactive
	// void K2_OnBecomeInactive();                                                                                              // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/POIBannerUI.POIBannerToastWidgetBase.K2_OnBecomeActive
	// void K2_OnBecomeActive();                                                                                                // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/POIBannerUI.POIBannerToastWidgetBase.GetLocationTextFromTag
	// FText GetLocationTextFromTag(FGameplayTag& LocationTag);                                                                 // [0xaf1a230] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

