
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/POIBannerUI.POIBannerToastSocialAvatar
/// Size: 0x0008 (0x000328 - 0x000330)
class UPOIBannerToastSocialAvatar : public UFortHUDElementWidget
{ 
public:
	class UFortSocialAvatarIcon*                       Icon_SocialAvatar;                                          // 0x0328   (0x0008)  


	/// Functions
	// Function /Script/POIBannerUI.POIBannerToastSocialAvatar.SetSocialAvatarTexture
	// void SetSocialAvatarTexture(TWeakObjectPtr<UTexture2D*> AvatarTexture);                                               // [0xaf1a3f0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/POIBannerUI.POIBannerToastSocialAvatar.SetSocialAvatar
	// void SetSocialAvatar(class AFortPlayerState* PlayerState);                                                            // [0xaf1a368] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/POIBannerUI.POIBannerToastWidgetBase
/// Size: 0x0048 (0x000328 - 0x000370)
class UPOIBannerToastWidgetBase : public UFortHUDElementWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x40];                                      // 0x0328   (0x0040)  MISSED
	FFortPrioritizedWidgetData                         PrioritizationData;                                         // 0x0368   (0x0002)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x036A   (0x0006)  MISSED


	/// Functions
	// Function /Script/POIBannerUI.POIBannerToastWidgetBase.OnStompFailed
	// void OnStompFailed();                                                                                                 // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/POIBannerUI.POIBannerToastWidgetBase.OnStompedByOtherWidget
	// void OnStompedByOtherWidget();                                                                                        // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/POIBannerUI.POIBannerToastWidgetBase.K2_OnBecomeInactive
	// void K2_OnBecomeInactive();                                                                                           // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/POIBannerUI.POIBannerToastWidgetBase.K2_OnBecomeActive
	// void K2_OnBecomeActive();                                                                                             // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/POIBannerUI.POIBannerToastWidgetBase.GetLocationTextFromTag
	// FText GetLocationTextFromTag(FGameplayTag& LocationTag);                                                              // [0xaf1a230] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

