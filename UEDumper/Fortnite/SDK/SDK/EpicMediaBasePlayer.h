
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EpicStreamMediaSource
/// dependency: MediaAssets

/// Enum /Script/EpicMediaBasePlayer.EBaseMediaTerminalErrorReason
/// Size: 0x07
enum class EBaseMediaTerminalErrorReason : uint8_t
{
	EBaseMediaTerminalErrorReason__Unknown                                           = 0,
	EBaseMediaTerminalErrorReason__ClosedError                                       = 1,
	EBaseMediaTerminalErrorReason__OpenTimeout                                       = 2,
	EBaseMediaTerminalErrorReason__OpenFailed                                        = 3,
	EBaseMediaTerminalErrorReason__Source                                            = 4,
	EBaseMediaTerminalErrorReason__UCP                                               = 5,
	EBaseMediaTerminalErrorReason__EBaseMediaTerminalErrorReason_MAX                 = 6
};

/// Enum /Script/EpicMediaBasePlayer.EBaseMediaDelayAction
/// Size: 0x04
enum class EBaseMediaDelayAction : uint8_t
{
	EBaseMediaDelayAction__Open                                                      = 0,
	EBaseMediaDelayAction__Stop                                                      = 1,
	EBaseMediaDelayAction__Start                                                     = 2,
	EBaseMediaDelayAction__EBaseMediaDelayAction_MAX                                 = 3
};

/// Enum /Script/EpicMediaBasePlayer.EBaseMediaPlayerState
/// Size: 0x08
enum class EBaseMediaPlayerState : uint8_t
{
	EBaseMediaPlayerState__None                                                      = 0,
	EBaseMediaPlayerState__Released                                                  = 1,
	EBaseMediaPlayerState__Stopped                                                   = 2,
	EBaseMediaPlayerState__Started                                                   = 3,
	EBaseMediaPlayerState__Opened                                                    = 4,
	EBaseMediaPlayerState__Playing                                                   = 5,
	EBaseMediaPlayerState__Error                                                     = 6,
	EBaseMediaPlayerState__EBaseMediaPlayerState_MAX                                 = 7
};

/// Class /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo
/// Size: 0x0120 (0x000028 - 0x000148)
class UEpicBaseStreamingVideo : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	SDK_UNDEFINED(16,2019) /* FMulticastInlineDelegate */ __um(VideoOnTerminalError);                              // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,2020) /* FMulticastInlineDelegate */ __um(VideoOnSuccess);                                    // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,2021) /* FMulticastInlineDelegate */ __um(VideoOnClosed);                                     // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,2022) /* FMulticastInlineDelegate */ __um(VideoOnEndReached);                                 // 0x0060   (0x0010)  
	SDK_UNDEFINED(16,2023) /* FMulticastInlineDelegate */ __um(VideoOnOpenTimeout);                                // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,2024) /* FMulticastInlineDelegate */ __um(VideoOnResumed);                                    // 0x0080   (0x0010)  
	class UEpicStreamMediaSource*                      MediaSource;                                                // 0x0090   (0x0008)  
	class UMediaPlayer*                                MediaPlayer;                                                // 0x0098   (0x0008)  
	FIntPoint                                          VideoSize;                                                  // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x88];                                      // 0x00A8   (0x0088)  MISSED
	class USoundSubmixBase*                            DefaultSubmix;                                              // 0x0130   (0x0008)  
	class USoundSubmixBase*                            LicensedSubmix;                                             // 0x0138   (0x0008)  
	class UMediaSoundComponent*                        MediaSoundComponent;                                        // 0x0140   (0x0008)  


	/// Functions
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.Stop
	// void Stop(bool bRelease, bool bStopPlayer);                                                                           // [0x7b96ad0] Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.Start
	// void Start(FString InVUID, class UMediaTexture* InVideoTexture);                                                      // [0x7b963f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.SetVideoSize
	// void SetVideoSize(int32_t Width, int32_t Height);                                                                     // [0x7b96324] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.SetSyncTimes
	// void SetSyncTimes(FDateTime InNowTime, FDateTime InStartTime, bool DynamicStart, float InOffset_s, float InDelay_s);  // [0x7b95e90] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.SetSoundSubmixes
	// void SetSoundSubmixes(class UMediaSoundComponent* InSoundComponent, class USoundSubmixBase* InDefault, class USoundSubmixBase* InLicensed); // [0x7b95d78] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.SetOpenTimeout
	// void SetOpenTimeout(double InTimeoutTime);                                                                            // [0x7b95cf4] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.SetCreateAudioComponent
	// void SetCreateAudioComponent(bool bInCreateAudioComponent);                                                           // [0x7b95c74] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.RetryOnError
	// bool RetryOnError(EBaseMediaTerminalErrorReason Reason);                                                              // [0x7b95be8] Final|Native|Private 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.Release
	// void Release();                                                                                                       // [0x1e093d0] Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.Open
	// bool Open(FMediaPlayerOptions InMediaOptions);                                                                        // [0x7b95a80] Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.OnSuccessfulURL
	// void OnSuccessfulURL(FString URL);                                                                                    // [0x7b953d4] Final|Native|Private 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.OnFailedURL
	// void OnFailedURL(FString URL);                                                                                        // [0x7b94d28] Final|Native|Private 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.MethodDebounce
	// void MethodDebounce(bool bDebounce);                                                                                  // [0x7b94ca8] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.IsSyncStartTimeSet
	// bool IsSyncStartTimeSet();                                                                                            // [0x7b94c90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.Init
	// bool Init(class UMediaTexture* InVideoTexture, class UMediaPlayer* InMediaPlayer, class UEpicStreamMediaSource* InMediaSource, bool InCDNFailover); // [0x7b94b4c] Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleMediaResumed
	// void HandleMediaResumed();                                                                                            // [0x6497ffc] Native|Protected     
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleMediaOpenedFailed
	// void HandleMediaOpenedFailed(FString FailedUrl);                                                                      // [0x7b944a0] Final|Native|Protected 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleMediaOpened
	// void HandleMediaOpened(FString OpenedUrl);                                                                            // [0x7b93df4] Final|Native|Protected 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleMediaEndReached
	// void HandleMediaEndReached();                                                                                         // [0x7b93dd4] Final|Native|Protected 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleMediaClosed
	// void HandleMediaClosed();                                                                                             // [0x7b93dc0] Final|Native|Protected 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleLicensedAudioTreatmentChanged
	// void HandleLicensedAudioTreatmentChanged(UCPTypes UCPType);                                                           // [0x7b93d3c] Final|Native|Private 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.GetSoundComponent
	// class UMediaSoundComponent* GetSoundComponent();                                                                      // [0x2c3a08c] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.GetMediaSource
	// class UEpicStreamMediaSource* GetMediaSource();                                                                       // [0x289d99c] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.GetMediaPlayerOptions
	// FMediaPlayerOptions GetMediaPlayerOptions();                                                                          // [0x7b93cfc] Native|Public        
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.GetMediaPlayer
	// class UMediaPlayer* GetMediaPlayer();                                                                                 // [0x37b2d84] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.GetLicensedAudio
	// bool GetLicensedAudio();                                                                                              // [0x62122ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.ClearSyncTimes
	// void ClearSyncTimes();                                                                                                // [0x7b93cc8] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/EpicMediaBasePlayer.BaseMediaDelayConfig
/// Size: 0x0050 (0x000000 - 0x000050)
struct FBaseMediaDelayConfig
{ 
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0000   (0x0048)  MISSED
	class UMediaTexture*                               MediaTexture;                                               // 0x0048   (0x0008)  
};

