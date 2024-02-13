
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EpicCMSUIFramework
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameFeatures
/// dependency: MediaUtils
/// dependency: PictureInPictureDescriptors

/// Enum /Script/PictureInPictureCore.PictureInPictureAuthState
/// Size: 0x04
enum class PictureInPictureAuthState : uint8_t
{
	UNKNOWN                                                                          = 0,
	NOT_AUTHORIZED                                                                   = 1,
	AUTHORIZED                                                                       = 2,
	PictureInPictureAuthState_MAX                                                    = 3
};

/// Enum /Script/PictureInPictureCore.PictureInPictureAuthType
/// Size: 0x04
enum class PictureInPictureAuthType : uint8_t
{
	AUTH_NONE                                                                        = 0,
	AUTH_USER_PASS                                                                   = 1,
	AUTH_QR_CODE                                                                     = 2,
	AUTH_MAX                                                                         = 3
};

/// Class /Script/PictureInPictureCore.PictureInPictureClient
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UPictureInPictureClient : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,14903) /* FMulticastInlineDelegate */ __um(LoginSuccessEvent);                                // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,14904) /* FMulticastInlineDelegate */ __um(LogoutSuccessEvent);                               // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,14905) /* FMulticastInlineDelegate */ __um(QRCodeReceivedEvent);                              // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,14906) /* FMulticastInlineDelegate */ __um(ErrorDelegate);                                    // 0x0058   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0068   (0x0008)  MISSED
	SDK_UNDEFINED(16,14907) /* FString */              __um(UserName);                                             // 0x0070   (0x0010)  
	class UEpicCMSImage*                               UserAvatarImage;                                            // 0x0080   (0x0008)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0088   (0x0008)  MISSED
	class UTexture2DDynamic*                           CurrentQRCodeTexture;                                       // 0x0090   (0x0008)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0098   (0x0010)  MISSED


	/// Functions
	// Function /Script/PictureInPictureCore.PictureInPictureClient.Logout
	// void Logout();                                                                                                        // [0x21a24b8] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.IsLoggedIn
	// bool IsLoggedIn();                                                                                                    // [0x2ef8cdc] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.GetQRCodeTexture
	// class UTexture2DDynamic* GetQRCodeTexture();                                                                          // [0x2610358] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.GetLoginState
	// TEnumAsByte<PictureInPictureAuthState> GetLoginState();                                                               // [0x80d8748] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.GetAvatarImage
	// class UEpicCMSImage* GetAvatarImage();                                                                                // [0x833c85c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.EndLogin
	// void EndLogin(class UObject* InWorldContext);                                                                         // [0x6f4ff34] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.CheckLogin
	// void CheckLogin(class UObject* InWorldContext);                                                                       // [0x9f3066c] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.BeginLogin
	// void BeginLogin(class UObject* InWorldContext);                                                                       // [0xa80b1fc] Native|Public|BlueprintCallable 
};

/// Class /Script/PictureInPictureCore.PictureInPictureCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UPictureInPictureCheatManager : public UChildCheatManager
{ 
public:


	/// Functions
	// Function /Script/PictureInPictureCore.PictureInPictureCheatManager.SuspendPiP
	// void SuspendPiP();                                                                                                    // [0x3047908] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureCheatManager.ResumePiP
	// void ResumePiP();                                                                                                     // [0x3047908] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureCheatManager.PrintPiPRegionInfo
	// void PrintPiPRegionInfo();                                                                                            // [0x3047908] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureCheatManager.EnablePiP
	// void EnablePiP();                                                                                                     // [0x3047908] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureCheatManager.DisablePiP
	// void DisablePiP();                                                                                                    // [0x3047908] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureCheatManager.CanEnablePartnerPIP
	// void CanEnablePartnerPIP();                                                                                           // [0x3047908] Final|Exec|Native|Public|BlueprintCallable 
};

/// Class /Script/PictureInPictureCore.PictureInPictureCoreEnableDisableAction
/// Size: 0x0000 (0x000028 - 0x000028)
class UPictureInPictureCoreEnableDisableAction : public UFortUIGameFeatureAction
{ 
public:
};

/// Struct /Script/PictureInPictureCore.PiPSuspendInfo
/// Size: 0x01F8 (0x000000 - 0x0001F8)
struct FPiPSuspendInfo
{ 
	FPiPPartnerSource                                  SourceSnapshot;                                             // 0x0000   (0x01F0)  
	bool                                               bEnabledState;                                              // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x01F1   (0x0007)  MISSED
};

/// Class /Script/PictureInPictureCore.PictureInPictureMediaController
/// Size: 0x06C0 (0x000028 - 0x0006E8)
class UPictureInPictureMediaController : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,14908) /* FString */              __um(PartnerName);                                          // 0x0028   (0x0010)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0038   (0x0010)  MISSED
	TArray<class UPictureInPictureActionData*>         ActionDataArray;                                            // 0x0048   (0x0010)  
	FPIPVideoPlayerAssetConfig                         DefaultPlayerAssetConfig;                                   // 0x0058   (0x0088)  
	FPIPVideoPlayerAssetConfig                         PlayerAssetConfig;                                          // 0x00E0   (0x0088)  
	class UPictureInPicturePlayer*                     VideoWidget;                                                // 0x0168   (0x0008)  
	FPIPVideoPlayerConfig                              VideoWidgetConfig;                                          // 0x0170   (0x0048)  
	SDK_UNDEFINED(8,14909) /* TWeakObjectPtr<UCommonLazyImage*> */ __um(ThumbnailImageNext);                       // 0x01B8   (0x0008)  
	SDK_UNDEFINED(8,14910) /* TWeakObjectPtr<UCommonLazyImage*> */ __um(ThumbnailImagePrevious);                   // 0x01C0   (0x0008)  
	bool                                               bSupportsMultipleSources;                                   // 0x01C8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x01C9   (0x0007)  MISSED
	FPiPPartnerSource                                  CurrentSource;                                              // 0x01D0   (0x01F0)  
	TArray<FPiPPartnerSource>                          Sources;                                                    // 0x03C0   (0x0010)  
	TArray<FPiPPartnerSource>                          ValidSources;                                               // 0x03D0   (0x0010)  
	FMediaPlayerOptions                                LocalOptions;                                               // 0x03E0   (0x0030)  
	SDK_UNDEFINED(16,14911) /* FMulticastInlineDelegate */ __um(BaseErrorEvent);                                   // 0x0410   (0x0010)  
	SDK_UNDEFINED(16,14912) /* FMulticastInlineDelegate */ __um(BaseEnabledEvent);                                 // 0x0420   (0x0010)  
	SDK_UNDEFINED(16,14913) /* FMulticastInlineDelegate */ __um(SourcesChangedEvent);                              // 0x0430   (0x0010)  
	SDK_UNDEFINED(16,14914) /* FMulticastInlineDelegate */ __um(SourceSelectedEvent);                              // 0x0440   (0x0010)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0450   (0x0008)  MISSED
	TArray<FPictureInPictureActionConfig>              InstanceActionData;                                         // 0x0458   (0x0010)  
	class UPictureInPictureAnalyticsManager*           AnalyticsManager;                                           // 0x0468   (0x0008)  
	FDateTime                                          ActiveStartTime;                                            // 0x0470   (0x0008)  
	FDateTime                                          PausedStartTime;                                            // 0x0478   (0x0008)  
	unsigned char                                      UnknownData04_5[0x8];                                       // 0x0480   (0x0008)  MISSED
	FPiPSuspendInfo                                    SuspendedInfo;                                              // 0x0488   (0x01F8)  
	unsigned char                                      UnknownData05_6[0x68];                                      // 0x0680   (0x0068)  MISSED


	/// Functions
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.ToggleFullScreen
	// void ToggleFullScreen();                                                                                              // [0xb5a7644] Final|Native|Public  
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.Stop
	// void Stop();                                                                                                          // [0x186c4f8] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.SetEnabled
	// void SetEnabled(bool bIsEnabled, bool bIsFromUser);                                                                   // [0xb5a57a4] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.SetCurrentSource
	// void SetCurrentSource(FPiPPartnerSource& SelectedSource);                                                             // [0xb5a56dc] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.Play
	// void Play(bool bForcePlay);                                                                                           // [0xb5a5600] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.Pause
	// void Pause();                                                                                                         // [0x192dd64] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnPrevThumbnailReceived
	// void OnPrevThumbnailReceived(class UTexture2DDynamic* InTexture);                                                     // [0xb5a5540] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnNextThumbnailReceived
	// void OnNextThumbnailReceived(class UTexture2DDynamic* InTexture);                                                     // [0xb5a5480] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnMediaStartedAnalytics
	// void OnMediaStartedAnalytics();                                                                                       // [0xb5a546c] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnMediaResumedAnalytics
	// void OnMediaResumedAnalytics();                                                                                       // [0xb5a5444] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnMediaPausedAnalytics
	// void OnMediaPausedAnalytics();                                                                                        // [0xb5a5458] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnMediaClosedAnalytics
	// void OnMediaClosedAnalytics();                                                                                        // [0xb5a5444] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.IsPlaying
	// bool IsPlaying();                                                                                                     // [0xb5a51dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.IsPaused
	// bool IsPaused();                                                                                                      // [0xb5a51b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.IsMultiSourceSupported
	// bool IsMultiSourceSupported();                                                                                        // [0x6070edc] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.IsEnabled
	// bool IsEnabled();                                                                                                     // [0xb5a51a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.HandleSourceSelectedEvent
	// void HandleSourceSelectedEvent(FString SelectedSource);                                                               // [0xb5a49d4] Native|Protected     
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetValidSources
	// TArray<FPiPPartnerSource> GetValidSources();                                                                          // [0xb5a48cc] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetSources
	// TArray<FPiPPartnerSource> GetSources();                                                                               // [0xb5a489c] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetPlayerAssetConfig
	// FPIPVideoPlayerAssetConfig GetPlayerAssetConfig();                                                                    // [0xb5a4880] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetMediaPlayerWidget
	// class UPictureInPicturePlayer* GetMediaPlayerWidget();                                                                // [0xadb0478] Final|Native|Public|Const 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetDefaultPlayerAssetConfig
	// FPIPVideoPlayerAssetConfig GetDefaultPlayerAssetConfig();                                                             // [0xb5a1ea4] Final|Native|Public|Const 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetCurrentSource
	// FPiPPartnerSource GetCurrentSource();                                                                                 // [0xb5a1e74] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetActions
	// TArray<UPictureInPictureActionData*> GetActions();                                                                    // [0xb5a1d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.Exit
	// void Exit(bool bStop);                                                                                                // [0x649df38] Native|Public|BlueprintCallable 
};

/// Class /Script/PictureInPictureCore.PictureInPictureMediaPlayerCtrl
/// Size: 0x0010 (0x000108 - 0x000118)
class UPictureInPictureMediaPlayerCtrl : public UFortMediaPlayerCtrl
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0108   (0x0010)  MISSED
};

/// Class /Script/PictureInPictureCore.PictureInPicturePlayer
/// Size: 0x0208 (0x000028 - 0x000230)
class UPictureInPicturePlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x108];                                     // 0x0000   (0x0108)  MISSED
	FPIPVideoPlayerAssetConfig                         AssetConfig;                                                // 0x0108   (0x0088)  
	class UPictureInPictureMediaPlayerCtrl*            MediaController;                                            // 0x0190   (0x0008)  
	unsigned char                                      UnknownData01_5[0x50];                                      // 0x0198   (0x0050)  MISSED
	class USoundSubmixBase*                            DefaultSubmix;                                              // 0x01E8   (0x0008)  
	class USoundSubmixBase*                            LicensedSubmix;                                             // 0x01F0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x38];                                      // 0x01F8   (0x0038)  MISSED


	/// Functions
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.UpdateStreamingPlayerSize
	// void UpdateStreamingPlayerSize(FVector2D& InVector);                                                                  // [0xb5a77ac] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.StreamedVideoOnUrlSuccess
	// void StreamedVideoOnUrlSuccess(FString URL);                                                                          // [0xb5a6f40] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.StreamedVideoOnUrlFailure
	// void StreamedVideoOnUrlFailure(FString URL);                                                                          // [0xb5a6850] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.SetPlayerAssetConfig
	// bool SetPlayerAssetConfig(FPIPVideoPlayerAssetConfig& InAssetConfig);                                                 // [0xb5a58f8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.IsAssetConfigSet
	// bool IsAssetConfigSet();                                                                                              // [0xb5a5188] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.HandleUCPAudioChanged
	// void HandleUCPAudioChanged(class UFortClientSettingsRecord* Settings);                                                // [0xb5a50c8] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.FlushPlayerAssetConfig
	// void FlushPlayerAssetConfig();                                                                                        // [0xb5a1d1c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PictureInPictureCore.PictureInPicturePartnerControls
/// Size: 0x0018 (0x000028 - 0x000040)
class UPictureInPicturePartnerControls : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               bRequiresAgeOfConsent;                                      // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	class UPictureInPictureClient*                     ClientObject;                                               // 0x0030   (0x0008)  
	class UPictureInPictureMediaController*            MediaController;                                            // 0x0038   (0x0008)  
};

/// Class /Script/PictureInPictureCore.PictureInPictureSubsystem
/// Size: 0x00F0 (0x000030 - 0x000120)
class UPictureInPictureSubsystem : public UEngineSubsystem
{ 
public:
	TArray<class UPictureInPicturePartnerDataAsset*>   AvailableClientsList;                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,14915) /* FMulticastInlineDelegate */ __um(OnPartnerUpdateComplete);                          // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,14916) /* FMulticastInlineDelegate */ __um(OnPartnerChanged);                                 // 0x0050   (0x0010)  
	bool                                               bPartnerListUpdated;                                        // 0x0060   (0x0001)  
	bool                                               bIsSuspended;                                               // 0x0061   (0x0001)  
	bool                                               bCMSInitialized;                                            // 0x0062   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0063   (0x0005)  MISSED
	SDK_UNDEFINED(16,14917) /* FString */              __um(CurrentPlatform);                                      // 0x0068   (0x0010)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0078   (0x0010)  MISSED
	SDK_UNDEFINED(80,14918) /* TMap<FString, UPictureInPicturePartnerControls*> */ __um(SupportedPartnerControls); // 0x0088   (0x0050)  
	SDK_UNDEFINED(16,14919) /* FString */              __um(CurrentPartnerName);                                   // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,14920) /* FString */              __um(CurrentContinent);                                     // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,14921) /* FString */              __um(CurrentCountry);                                       // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,14922) /* TArray<FString> */      __um(CurrentSubdivisions);                                  // 0x0108   (0x0010)  
	class UFortMediaCMSEventsComponent*                CMSEventsComponent;                                         // 0x0118   (0x0008)  


	/// Functions
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.UpdatePartnerItemList
	// void UpdatePartnerItemList(class UObject* InWorldContext, bool bForce);                                               // [0xb5a766c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.ToggleFullScreenPiP
	// void ToggleFullScreenPiP();                                                                                           // [0xb5a7658] Final|Native|Public  
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.SuspendCurrentMediaController
	// void SuspendCurrentMediaController();                                                                                 // [0xb5a7630] Final|Native|Public  
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.StoreLastUsedSource
	// void StoreLastUsedSource(FString InPartnerSourceName);                                                                // [0xb5a615c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.StoreLastUsedPartner
	// void StoreLastUsedPartner(FString InPartnerName);                                                                     // [0xb5a5a68] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.StoreAutoEnableSetting
	// void StoreAutoEnableSetting(bool InUserEnabled);                                                                      // [0xb5a59b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.ShutdownAllPartners
	// void ShutdownAllPartners();                                                                                           // [0xb5a59a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.ResumeCurrentMediaController
	// void ResumeCurrentMediaController();                                                                                  // [0xb5a56c8] Final|Native|Public  
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.OnCurrentPartnerSourceSelected
	// void OnCurrentPartnerSourceSelected(FPiPPartnerSource& SelectedSource);                                               // [0xb5a5380] Final|Native|Private|HasOutParms 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.OnCMSEventValid
	// void OnCMSEventValid(class UMediaCMSEvent* ValidEvent);                                                               // [0xb5a52c0] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.OnCMSEventInvalid
	// void OnCMSEventInvalid(class UMediaCMSEvent* InvalidEvent);                                                           // [0xb5a5200] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.IsPartnerListUpdated
	// bool IsPartnerListUpdated();                                                                                          // [0x612f980] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.HandleMediaSourceRequest
	// void HandleMediaSourceRequest();                                                                                      // [0xb5a49c0] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.HandleFNEventsSetCurrentMediaControllerEnabled
	// void HandleFNEventsSetCurrentMediaControllerEnabled(bool InEnabled);                                                  // [0xb5a48fc] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetPartnerItemList
	// TArray<UPictureInPicturePartnerDataAsset*> GetPartnerItemList();                                                      // [0xb5a4808] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetPartnerItem
	// class UPictureInPicturePartnerDataAsset* GetPartnerItem(FString PartnerName);                                         // [0xb5a4114] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetPartnerControls
	// class UPictureInPicturePartnerControls* GetPartnerControls(FString PartnerName);                                      // [0xb5a3a20] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetPartnerController
	// class UPictureInPictureMediaController* GetPartnerController(FString PartnerName);                                    // [0xb5a332c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetPartnerClient
	// class UPictureInPictureClient* GetPartnerClient(FString PartnerName);                                                 // [0xb5a2c38] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetLastUsedSource
	// void GetLastUsedSource(FString& OutPartnerSourceName);                                                                // [0xb5a257c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetLastUsedPartner
	// void GetLastUsedPartner(FString& OutPartnerName);                                                                     // [0xb5a1ec0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerItem
	// class UPictureInPicturePartnerDataAsset* GetCurrentPartnerItem();                                                     // [0xb5a1e50] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerControls
	// class UPictureInPicturePartnerControls* GetCurrentPartnerControls();                                                  // [0xb5a1e24] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerController
	// class UPictureInPictureMediaController* GetCurrentPartnerController();                                                // [0xb5a1df8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerClient
	// class UPictureInPictureClient* GetCurrentPartnerClient();                                                             // [0xb5a1dcc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetAutoEnableSetting
	// bool GetAutoEnableSetting();                                                                                          // [0xb5a1da8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.EnableFullScreenPiPOption
	// void EnableFullScreenPiPOption(bool bEnable);                                                                         // [0xb5a1c58] Final|Native|Public  
};

