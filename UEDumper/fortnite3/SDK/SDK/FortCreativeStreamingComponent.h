
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: MediaAssets
/// dependency: SubtitlesWidgets

/// Enum /Script/FortCreativeStreamingComponent.EFortStreamingVideoDeviceState
/// Size: 0x04
enum class EFortStreamingVideoDeviceState : uint8_t
{
	EFortStreamingVideoDeviceState__No_Stream                                        = 0,
	EFortStreamingVideoDeviceState__Controller                                       = 1,
	EFortStreamingVideoDeviceState__Listener                                         = 2,
	EFortStreamingVideoDeviceState__EFortStreamingVideoDeviceState_MAX               = 3
};

/// Enum /Script/FortCreativeStreamingComponent.EFortStreamingVideoSelectionMode
/// Size: 0x04
enum class EFortStreamingVideoSelectionMode : uint8_t
{
	EFortStreamingVideoSelectionMode__Priority                                       = 0,
	EFortStreamingVideoSelectionMode__Device_Override                                = 1,
	EFortStreamingVideoSelectionMode__Mirror                                         = 2,
	EFortStreamingVideoSelectionMode__EFortStreamingVideoSelectionMode_MAX           = 3
};

/// Struct /Script/FortCreativeStreamingComponent.VideoPlayerDeviceAudioAnalysisSettings
/// Size: 0x0040 (0x000000 - 0x000040)
struct FVideoPlayerDeviceAudioAnalysisSettings
{ 
	TArray<FSoundSubmixSpectralAnalysisBandSettings>   AudioAnalysisBandSettings;                                  // 0x0000   (0x0010)  
	TArray<FName>                                      AudioAnalysisBandNames;                                     // 0x0010   (0x0010)  
	FName                                              PercussionParameterName;                                    // 0x0020   (0x0004)  
	FName                                              AverageAmplitudeParameterName;                              // 0x0024   (0x0004)  
	float                                              UpdateRate;                                                 // 0x0028   (0x0004)  
	float                                              DecibelNoiseFloor;                                          // 0x002C   (0x0004)  
	bool                                               bDoNormalize;                                               // 0x0030   (0x0001)  
	bool                                               bDoAutoRange;                                               // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0032   (0x0002)  MISSED
	float                                              AutoRangeAttackTime;                                        // 0x0034   (0x0004)  
	float                                              AutoRangeReleaseTime;                                       // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/FortCreativeStreamingComponent.VideoPlayerDeviceComponents
/// Size: 0x0030 (0x000000 - 0x000030)
struct FVideoPlayerDeviceComponents
{ 
	class UStaticMeshComponent*                        ScreenMesh;                                                 // 0x0000   (0x0008)  
	class UMaterialInstanceDynamic*                    ScreenMaterialDynamic;                                      // 0x0008   (0x0008)  
	class UMediaSoundComponent*                        SoundComponent;                                             // 0x0010   (0x0008)  
	class UMediaTexture*                               VideoTexture;                                               // 0x0018   (0x0008)  
	class USoundSourceBus*                             SourceBus;                                                  // 0x0020   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/FortCreativeStreamingComponent.VideoPlayerDeviceCMSEventData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FVideoPlayerDeviceCMSEventData
{ 
	SDK_UNDEFINED(16,13789) /* FString */              __um(EventName);                                            // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,13790) /* FString */              __um(EventPage);                                            // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,13791) /* FString */              __um(VUID);                                                 // 0x0020   (0x0010)  
	bool                                               bEnabled;                                                   // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent
/// Size: 0x0220 (0x0000A0 - 0x0002C0)
class UFortCreativeStreamingComponent : public UActorComponent
{ 
public:
	class USoundSubmix*                                DefaultSubmix;                                              // 0x00A0   (0x0008)  
	class USoundSubmix*                                LicensedSubmix;                                             // 0x00A8   (0x0008)  
	class USoundSubmix*                                AudioAnalysisSubmix;                                        // 0x00B0   (0x0008)  
	class UMaterialParameterCollection*                JukeboxMPC;                                                 // 0x00B8   (0x0008)  
	FVideoPlayerDeviceAudioAnalysisSettings            AudioAnalysisSettings;                                      // 0x00C0   (0x0040)  
	class USoundConcurrency*                           SoundConcurrency;                                           // 0x0100   (0x0008)  
	class USoundConcurrency*                           MirrorSoundConcurrency;                                     // 0x0108   (0x0008)  
	class USoundClass*                                 AudioSoundClass;                                            // 0x0110   (0x0008)  
	class UMaterial*                                   VideoMaterial;                                              // 0x0118   (0x0008)  
	int32_t                                            MaterialSlot;                                               // 0x0120   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0124   (0x0004)  MISSED
	class UFortDownloadLocalizedOverlays*              LocalizedOverlays;                                          // 0x0128   (0x0008)  
	class UFortMediaSubtitlesPlayer*                   SubtitlesPlayer;                                            // 0x0130   (0x0008)  
	unsigned char                                      UnknownData01_5[0x30];                                      // 0x0138   (0x0030)  MISSED
	SDK_UNDEFINED(16,13792) /* FMulticastInlineDelegate */ __um(OnPlayCompleted);                                  // 0x0168   (0x0010)  
	SDK_UNDEFINED(16,13793) /* FMulticastInlineDelegate */ __um(CMSMetadataEvent);                                 // 0x0178   (0x0010)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0188   (0x0008)  MISSED
	class UFortBaseStreamingVideo*                     BaseStreamingVideoPlayer;                                   // 0x0190   (0x0008)  
	FVideoPlayerDeviceComponents                       DeviceComponents;                                           // 0x0198   (0x0030)  
	FVideoPlayerDeviceMediaMetadata                    CurrentlyPlayingData;                                       // 0x01C8   (0x0048)  
	SDK_UNDEFINED(32,13794) /* TWeakObjectPtr<AActor*> */ __um(MirroredDevice);                                    // 0x0210   (0x0020)  
	class UAudioComponent*                             MirrorAudioComponent;                                       // 0x0230   (0x0008)  
	class USoundAttenuation*                           MirrorSoundAttenuation;                                     // 0x0238   (0x0008)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x0240   (0x0001)  MISSED
	EFortStreamingVideoSelectionMode                   StreamingMode;                                              // 0x0241   (0x0001)  
	unsigned char                                      UnknownData04_5[0x26];                                      // 0x0242   (0x0026)  MISSED
	SDK_UNDEFINED(12,13795) /* FDelegateProperty */    __um(OnSubmixSpectralAnalysisDelegate);                     // 0x0268   (0x000C)  
	unsigned char                                      UnknownData05_5[0x14];                                      // 0x0274   (0x0014)  MISSED
	FVideoPlayerDeviceCMSEventData                     CMSEventData;                                               // 0x0288   (0x0038)  


	/// Functions
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.UsePriorityMode
	// void UsePriorityMode();                                                                                               // [0xb831344] Final|Native|Public|BlueprintCallable 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.UseMirrorModeByName
	// void UseMirrorModeByName(FString DeviceName);                                                                         // [0xb830c30] Final|Native|Public|BlueprintCallable 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.UseMirrorMode
	// void UseMirrorMode(class AActor* NewMirrorDevice);                                                                    // [0xb830b70] Final|Native|Public|BlueprintCallable 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.UseDeviceOverrideMode
	// void UseDeviceOverrideMode();                                                                                         // [0xb830b5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.UpdateStaticMesh
	// void UpdateStaticMesh(class UStaticMeshComponent* ScreenMesh);                                                        // [0xb830a48] Final|Native|Public|BlueprintCallable 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.TearDownComponent
	// void TearDownComponent();                                                                                             // [0xb830a34] Final|Native|Public|BlueprintCallable 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.StreamedVideoOpeningTimeout
	// void StreamedVideoOpeningTimeout();                                                                                   // [0xb830a20] Final|Native|Private 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.StreamedVideoOnMediaPlayerEndReached
	// void StreamedVideoOnMediaPlayerEndReached();                                                                          // [0xb830a0c] Final|Native|Private 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.StreamedVideoOnMediaPlayerClosed
	// void StreamedVideoOnMediaPlayerClosed();                                                                              // [0xb8309f8] Final|Native|Private 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.Stop
	// void Stop();                                                                                                          // [0xb8309e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.SetRestartStreamWhenPlaying
	// void SetRestartStreamWhenPlaying(bool bNewRestartStreamWhenPlaying);                                                  // [0xb830924] Final|Native|Public|BlueprintCallable 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.SetFullScreenComponents
	// void SetFullScreenComponents(bool bEnable);                                                                           // [0xb830860] Final|Native|Public|BlueprintCallable 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.Seek
	// void Seek(FTimespan SeekTime);                                                                                        // [0xb8307a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.Restart
	// void Restart();                                                                                                       // [0xb83078c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.PrintVideoPlayerDebugData
	// void PrintVideoPlayerDebugData();                                                                                     // [0x38a9134] Net|Native|Event|NetMulticast|Public|NetClient|BlueprintCallable 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.Play
	// void Play();                                                                                                          // [0xb830778] Final|Native|Public|BlueprintCallable 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.OnStreamingDeviceChanged
	// void OnStreamingDeviceChanged();                                                                                      // [0xb830764] Final|Native|Private 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.OnRep_StreamingSelectionMode
	// void OnRep_StreamingSelectionMode();                                                                                  // [0xb82f938] Final|Native|Private 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.OnMediaSoundComponentActivated
	// void OnMediaSoundComponentActivated(class UActorComponent* Component, bool bReset);                                   // [0xb830630] Final|Native|Private 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.OnAudioAnalysisSpectrumUpdated
	// void OnAudioAnalysisSpectrumUpdated(TArray<float>& MagnitudeArray);                                                   // [0xb830554] Final|Native|Private|HasOutParms 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.IsRestartStreamWhenPlaying
	// bool IsRestartStreamWhenPlaying();                                                                                    // [0xb83053c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.IsDevicePlaying
	// bool IsDevicePlaying();                                                                                               // [0xb830518] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.IsComponentInitialized
	// bool IsComponentInitialized();                                                                                        // [0xb830500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.Init
	// void Init(bool InUsesAudio, bool InUsesVideo, class UStaticMeshComponent* ScreenMesh);                                // [0xb830334] Final|Native|Public|BlueprintCallable 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.HandleVideoStreamingTerminalError
	// void HandleVideoStreamingTerminalError(EBaseMediaTerminalErrorReason ErrorReason);                                    // [0xb830274] Final|Native|Private 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.HandleVideoStreamingSuccess
	// void HandleVideoStreamingSuccess();                                                                                   // [0xb830260] Final|Native|Private 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.HandleCMSEvents
	// void HandleCMSEvents(FVideoPlayerDeviceCMSEventData EventData, bool bEnable);                                         // [0xb82fa98] Final|Native|Public|BlueprintCallable 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.GetStreamingVideoSelectionMode
	// EFortStreamingVideoSelectionMode GetStreamingVideoSelectionMode();                                                    // [0xb82fa80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.GetStreamingDevice
	// class AActor* GetStreamingDevice();                                                                                   // [0xb82fa5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.GetStreamingController
	// class AFortCreativeStreamingController* GetStreamingController();                                                     // [0xb82fa38] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.GetStreamingComponents
	// FVideoPlayerDeviceComponents GetStreamingComponents();                                                                // [0xb82f9b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.GetFortBaseStreamingVideo
	// class UFortBaseStreamingVideo* GetFortBaseStreamingVideo();                                                           // [0xb82f998] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.GetDeviceState
	// EFortStreamingVideoDeviceState GetDeviceState();                                                                      // [0xb82f980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.GetDeviceComponents
	// FVideoPlayerDeviceComponents GetDeviceComponents();                                                                   // [0xb82f94c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.ForceRestart
	// void ForceRestart();                                                                                                  // [0xb82f938] Final|Native|Public|BlueprintCallable 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.DisableScreenAndAudio
	// void DisableScreenAndAudio(bool bDisabled);                                                                           // [0xb82f874] Final|Native|Public|BlueprintCallable 
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.CMSEventStarted
	// void CMSEventStarted(class UMediaCMSEvent* Event);                                                                    // [0xb82f7b4] Final|Native|Public  
	// Function /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent.CMSEventEnded
	// void CMSEventEnded(class UMediaCMSEvent* Event);                                                                      // [0xb82f6f4] Final|Native|Public  
};

/// Struct /Script/FortCreativeStreamingComponent.VideoPlayerDeviceFullscreenData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FVideoPlayerDeviceFullscreenData
{ 
	bool                                               bEnable;                                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            InstanceID;                                                 // 0x0004   (0x0004)  
};

/// Struct /Script/FortCreativeStreamingComponent.VideoPlayerDevicePIPSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FVideoPlayerDevicePIPSettings
{ 
	float                                              TriggerRange;                                               // 0x0000   (0x0004)  
	bool                                               bEnabled;                                                   // 0x0004   (0x0001)  
	bool                                               bAlwaysAllow;                                               // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0006   (0x0002)  MISSED
	int32_t                                            InstanceID;                                                 // 0x0008   (0x0004)  
};

/// Struct /Script/FortCreativeStreamingComponent.VideoPlayerDevicePIPFullscreenSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FVideoPlayerDevicePIPFullscreenSettings
{ 
	class AController*                                 Instigator;                                                 // 0x0000   (0x0008)  
	bool                                               bEnableFullscreen;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            InstanceID;                                                 // 0x000C   (0x0004)  
};

