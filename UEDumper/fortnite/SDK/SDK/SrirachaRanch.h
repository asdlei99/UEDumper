
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioGameplay
/// dependency: AudioShapes
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ItemizationCoreRuntime
/// dependency: McpProfileSys
/// dependency: MediaAssets
/// dependency: ModularGameplay

/// Enum /Script/SrirachaRanch.EStreamingRadioSourceState
/// Size: 0x05
enum class EStreamingRadioSourceState : uint8_t
{
	EStreamingRadioSourceState__None                                                 = 0,
	EStreamingRadioSourceState__LoadingPlayer                                        = 1,
	EStreamingRadioSourceState__LoadedPlayer                                         = 2,
	EStreamingRadioSourceState__Playing                                              = 3,
	EStreamingRadioSourceState__EStreamingRadioSourceState_MAX                       = 4
};

/// Enum /Script/SrirachaRanch.EOnlineRadioSourceType
/// Size: 0x02
enum class EOnlineRadioSourceType : uint8_t
{
	EOnlineRadioSourceType__Epic                                                     = 0,
	EOnlineRadioSourceType__EOnlineRadioSourceType_MAX                               = 1
};

/// Enum /Script/SrirachaRanch.ERadioSource
/// Size: 0x03
enum class ERadioSource : uint8_t
{
	ERadioSource__Invalid                                                            = 0,
	ERadioSource__Vehicle                                                            = 1,
	ERadioSource__ERadioSource_MAX                                                   = 2
};

/// Class /Script/SrirachaRanch.StreamingRadioAudioShapeComponent
/// Size: 0x0058 (0x000148 - 0x0001A0)
class UStreamingRadioAudioShapeComponent : public UFortAudioShapeComponent
{ 
public:
	float                                              Radius;                                                     // 0x0148   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x014C   (0x0004)  MISSED
	class UStreamingRadioPlayerComponent*              RadioPlayer;                                                // 0x0150   (0x0008)  
	unsigned char                                      UnknownData01_6[0x48];                                      // 0x0158   (0x0048)  MISSED
};

/// Class /Script/SrirachaRanch.SrirachaRanchComponentTemplateWrapper
/// Size: 0x0008 (0x000030 - 0x000038)
class USrirachaRanchComponentTemplateWrapper : public UDataAsset
{ 
public:
	class UMediaSoundComponent*                        MediaSoundPlayerTemplate;                                   // 0x0030   (0x0008)  
};

/// Struct /Script/SrirachaRanch.AthenaRadioStation
/// Size: 0x0058 (0x000000 - 0x000058)
struct FAthenaRadioStation
{ 
	SDK_UNDEFINED(24,15243) /* FText */                __um(Title);                                                // 0x0000   (0x0018)  
	SDK_UNDEFINED(16,15244) /* FString */              __um(StationImage);                                         // 0x0018   (0x0010)  
	SDK_UNDEFINED(16,15245) /* FString */              __um(ResourceID);                                           // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,15246) /* TArray<FString> */      __um(GameplayTagDenylist);                                  // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,15247) /* TArray<FString> */      __um(GameplayTagAllowlist);                                 // 0x0048   (0x0010)  
};

/// Struct /Script/SrirachaRanch.StreamingRadioSourceData
/// Size: 0x0068 (0x000000 - 0x000068)
struct FStreamingRadioSourceData
{ 
	EStreamingRadioSourceState                         State;                                                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            PlayingIndex;                                               // 0x0004   (0x0004)  
	float                                              FadeoutSeconds;                                             // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FAthenaRadioStation                                SourceOverride;                                             // 0x0010   (0x0058)  
};

/// Class /Script/SrirachaRanch.StreamingRadioPlayerComponent
/// Size: 0x03D0 (0x0000A8 - 0x000478)
class UStreamingRadioPlayerComponent : public UFortPawnComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x00A8   (0x0010)  MISSED
	SDK_UNDEFINED(80,15248) /* TMap<FName, FSrirachaInputMappingData> */ __um(InputMappingData);                   // 0x00B8   (0x0050)  
	SDK_UNDEFINED(16,15249) /* FMulticastInlineDelegate */ __um(OnSourceLoading);                                  // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,15250) /* FMulticastInlineDelegate */ __um(OnSourcePlayed);                                   // 0x0118   (0x0010)  
	SDK_UNDEFINED(16,15251) /* FMulticastInlineDelegate */ __um(OnSourceStopped);                                  // 0x0128   (0x0010)  
	SDK_UNDEFINED(16,15252) /* FMulticastInlineDelegate */ __um(OnSourceFailed);                                   // 0x0138   (0x0010)  
	SDK_UNDEFINED(16,15253) /* FMulticastInlineDelegate */ __um(OnMetadataChanged);                                // 0x0148   (0x0010)  
	SDK_UNDEFINED(16,15254) /* FMulticastInlineDelegate */ __um(OnRadioExplicitStop);                              // 0x0158   (0x0010)  
	float                                              PercentAutostartRadio;                                      // 0x0168   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x016C   (0x0004)  MISSED
	TArray<FName>                                      DisabledVehicleList;                                        // 0x0170   (0x0010)  
	SDK_UNDEFINED(80,15255) /* TMap<FName, float> */   __um(ExteriorVolumeMultiplierMap);                          // 0x0180   (0x0050)  
	SDK_UNDEFINED(80,15256) /* TMap<FName, float> */   __um(InteriorVolumeMultiplierMap);                          // 0x01D0   (0x0050)  
	bool                                               bMinimalStateOnPlatform;                                    // 0x0220   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0221   (0x0007)  MISSED
	SDK_UNDEFINED(16,15257) /* TArray<FString> */      __um(DisabledStationList);                                  // 0x0228   (0x0010)  
	bool                                               bAutostartOnEntry;                                          // 0x0238   (0x0001)  
	bool                                               bDisabledForCurrentPlayerState;                             // 0x0239   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x023A   (0x0006)  MISSED
	FStreamingRadioSourceData                          ReplicatedRadioSourceData;                                  // 0x0240   (0x0068)  
	SDK_UNDEFINED(16,15258) /* FMulticastInlineDelegate */ __um(OnReplicatedStateChangedDelegate);                 // 0x02A8   (0x0010)  
	class UMediaSoundComponent*                        SoundComponent;                                             // 0x02B8   (0x0008)  
	class UStreamingRadioAudioShapeComponent*          AudioShape;                                                 // 0x02C0   (0x0008)  
	class USrirachaRanchComponentTemplateWrapper*      SoundCompTemplateSource;                                    // 0x02C8   (0x0008)  
	FAthenaRadioStation                                LastSource;                                                 // 0x02D0   (0x0058)  
	TArray<class URadioContentSourceItemDefinition*>   Sources;                                                    // 0x0328   (0x0010)  
	FAthenaRadioStation                                FallbackSource;                                             // 0x0338   (0x0058)  
	SDK_UNDEFINED(80,15259) /* TMap<FGameplayTag, FSrirachaPerClassSpecialSeats> */ __um(SpecialSeatList);         // 0x0390   (0x0050)  
	class UFortBaseStreamingVideo*                     BasePlayerInstance;                                         // 0x03E0   (0x0008)  
	class USoundSubmixBase*                            DefaultSoundSubmix;                                         // 0x03E8   (0x0008)  
	class USoundSubmixBase*                            LicensedSoundSubmix;                                        // 0x03F0   (0x0008)  
	ERadioSource                                       CurrentMode;                                                // 0x03F8   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x03F9   (0x0003)  MISSED
	int32_t                                            MaximumRetries;                                             // 0x03FC   (0x0004)  
	int32_t                                            FadeoutWhenUnpoweredInMS;                                   // 0x0400   (0x0004)  
	int32_t                                            FadeoutWhenOwnerBeingDestroyedInMS;                         // 0x0404   (0x0004)  
	int32_t                                            MaxFadeoutTimeMS;                                           // 0x0408   (0x0004)  
	int32_t                                            DefaultPlayingIndex;                                        // 0x040C   (0x0004)  
	class USoundMix*                                   SoundMixInside;                                             // 0x0410   (0x0008)  
	class USoundMix*                                   SoundMixOutside;                                            // 0x0418   (0x0008)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x0420   (0x0004)  MISSED
	float                                              ActivationRadius;                                           // 0x0424   (0x0004)  
	FName                                              ComponentToAttachTo;                                        // 0x0428   (0x0004)  
	FName                                              ComponentSocketAttachTo;                                    // 0x042C   (0x0004)  
	class UFortStreamMediaSource*                      MediaSource;                                                // 0x0430   (0x0008)  
	TArray<FAthenaRadioStation>                        RadioStationList;                                           // 0x0438   (0x0010)  
	class UObject*                                     DelegateContextObject;                                      // 0x0448   (0x0008)  
	float                                              MediaStartTimeFromInit;                                     // 0x0450   (0x0004)  
	unsigned char                                      UnknownData06_6[0x24];                                      // 0x0454   (0x0024)  MISSED


	/// Functions
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.ToggleRadioActive
	// void ToggleRadioActive();                                                                                             // [0xad75818] Final|Native|Public|BlueprintCallable 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.StopRadioWithFadeout
	// void StopRadioWithFadeout(int32_t Milliseconds);                                                                      // [0xad75798] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.StopRadio
	// void StopRadio();                                                                                                     // [0xad75784] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.StopIfNoDriver
	// void StopIfNoDriver(TScriptInterface<Class>& Vehicle);                                                                // [0xad756f4] Final|Native|Protected|HasOutParms 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.StartRadio
	// void StartRadio(int32_t IdxToPlay, bool bFallbackOverride);                                                           // [0xad75630] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.SoundMixUpdateWeaponState
	// void SoundMixUpdateWeaponState(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                          // [0xad754c0] Final|Native|Private 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.SoundMixUpdateTargetingState
	// void SoundMixUpdateTargetingState(bool bNewIsTargeting);                                                              // [0xad75438] Final|Native|Private 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.SetInteriorVolume
	// void SetInteriorVolume(TScriptInterface<Class>& Vehicle);                                                             // [0xad753a8] Final|Native|Protected|HasOutParms 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.SetExteriorVolume
	// void SetExteriorVolume(TScriptInterface<Class>& Vehicle);                                                             // [0xad75318] Final|Native|Protected|HasOutParms 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.SetActivationRadius
	// void SetActivationRadius(float InRadius);                                                                             // [0xad7528c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.ServerStopRadio
	// void ServerStopRadio();                                                                                               // [0x1f2db84] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.ServerSetDisabledForCurrentPlayerState
	// void ServerSetDisabledForCurrentPlayerState(bool bInDisableForCurrentPlayerState);                                    // [0x80ff6b4] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.ServerSaveFadeOutTime
	// void ServerSaveFadeOutTime(float InFadeOutSeconds);                                                                   // [0xad11e44] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.ServerSavedSource
	// void ServerSavedSource(FAthenaRadioStation InSource);                                                                 // [0xad75130] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.ServerSaveAutoStart
	// void ServerSaveAutoStart(bool bInAutoStart);                                                                          // [0xad750ac] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.ServerPlayIndex
	// void ServerPlayIndex(int32_t InIndex, EStreamingRadioSourceState InState);                                            // [0xad74fe4] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.PlayPrevIndex
	// void PlayPrevIndex();                                                                                                 // [0xad74fd0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.PlayNextIndex
	// void PlayNextIndex();                                                                                                 // [0xad74fbc] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.PlayDefaultIndex
	// void PlayDefaultIndex();                                                                                              // [0xad74fa8] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnRep_RadioSourceData
	// void OnRep_RadioSourceData();                                                                                         // [0x2fa39ac] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnPiPPlayerBlockedChanged
	// void OnPiPPlayerBlockedChanged(bool bPiPPlayerBlocking);                                                              // [0xad74f28] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnPawnExitVehicle
	// void OnPawnExitVehicle(TScriptInterface<Class>& Vehicle, class AFortPawn* PlayerPawn, int32_t SeatIndex);             // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnPawnExitSeat
	// void OnPawnExitSeat(TScriptInterface<Class>& Vehicle, class AFortPawn* PlayerPawn, int32_t SeatIndex);                // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnPawnEnterVehicle
	// void OnPawnEnterVehicle(TScriptInterface<Class>& Vehicle, class AFortPawn* PlayerPawn, int32_t SeatIndex);            // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnPawnEnterSeat
	// void OnPawnEnterSeat(TScriptInterface<Class>& Vehicle, class AFortPawn* PlayerPawn, int32_t SeatIndex);               // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnOwningVehicleDied
	// void OnOwningVehicleDied(class AFortAthenaVehicle* DeadVehicle, FGameplayTagContainer& InTags, class AController* EventInstigator, class AActor* DamageCauser); // [0xad74d20] Final|Native|Protected|HasOutParms 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerUnpowered
	// void OnOwnerUnpowered();                                                                                              // [0xad74d08] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerReFueled
	// void OnOwnerReFueled();                                                                                               // [0x300bc40] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerOutOfFuel
	// void OnOwnerOutOfFuel();                                                                                              // [0xad74cf4] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerExploded
	// void OnOwnerExploded();                                                                                               // [0xad74cdc] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerDisabledChanged
	// void OnOwnerDisabledChanged(bool bDisabled);                                                                          // [0xad74c5c] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.NativeOnVehicleOwnerChanged
	// void NativeOnVehicleOwnerChanged(TScriptInterface<Class>& Vehicle, class AActor* NewOwner, class AActor* PrevOwner);  // [0xad749d4] Final|Native|Protected|HasOutParms 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnExitVehicle
	// void NativeOnPawnExitVehicle(TScriptInterface<Class>& Vehicle, class AFortPawn* PlayerPawn, int32_t SeatIndex);       // [0xad7474c] Final|Native|Protected|HasOutParms 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnExitSeat
	// void NativeOnPawnExitSeat(TScriptInterface<Class>& Vehicle, class AFortPawn* PlayerPawn, int32_t SeatIndex);          // [0xad744c4] Final|Native|Protected|HasOutParms 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnEnterVehicle
	// void NativeOnPawnEnterVehicle(TScriptInterface<Class>& Vehicle, class AFortPawn* PlayerPawn, int32_t SeatIndex);      // [0xad7423c] Final|Native|Protected|HasOutParms 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnEnterSeat
	// void NativeOnPawnEnterSeat(TScriptInterface<Class>& Vehicle, class AFortPawn* PlayerPawn, int32_t SeatIndex);         // [0xad73fb4] Final|Native|Protected|HasOutParms 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.MetadataChanged
	// void MetadataChanged(FFortMediaInBandMetadata MetaData);                                                              // [0xad73df8] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.MediaTerminalError
	// void MediaTerminalError(EBaseMediaTerminalErrorReason Reason);                                                        // [0xad73d78] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.MediaResumed
	// void MediaResumed();                                                                                                  // [0xad73d64] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.MediaOnSuccess
	// void MediaOnSuccess();                                                                                                // [0xad73d50] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.MediaEnded
	// void MediaEnded();                                                                                                    // [0xad73d3c] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.MediaClosed
	// void MediaClosed();                                                                                                   // [0xad73d28] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.MediaClose
	// void MediaClose();                                                                                                    // [0xad73d14] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.IsRadioOn
	// bool IsRadioOn();                                                                                                     // [0xad73cf0] Final|Native|Protected|Const 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.IsPlayingLiveFeed
	// bool IsPlayingLiveFeed();                                                                                             // [0xad73cbc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.IsExternalSeat
	// bool IsExternalSeat(int32_t SeatIdx);                                                                                 // [0xad73c30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.HandleLicensedAudioTreatmentChanged
	// void HandleLicensedAudioTreatmentChanged(UCPTypes UCPType);                                                           // [0xad73b80] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.GetOptionAt
	// FAthenaRadioStation GetOptionAt(int32_t idx);                                                                         // [0xad73acc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.GetMediaMetadata
	// FFortMediaInBandMetadata GetMediaMetadata();                                                                          // [0xad73a88] Final|Native|Public|BlueprintCallable 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.GetBaseStreamingVideo
	// class UFortBaseStreamingVideo* GetBaseStreamingVideo();                                                               // [0xad73a70] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SrirachaRanch.RadioContentSourceItemDefinition
/// Size: 0x0018 (0x0003A8 - 0x0003C0)
class URadioContentSourceItemDefinition : public UFortAccountItemDefinition
{ 
public:
	SDK_UNDEFINED(16,15260) /* FString */              __um(ResourceID);                                           // 0x03A8   (0x0010)  
	class UFortStreamMediaSource*                      MediaSource;                                                // 0x03B8   (0x0008)  
};

/// Struct /Script/SrirachaRanch.SrirachaPerClassSpecialSeats
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSrirachaPerClassSpecialSeats
{ 
	TArray<int32_t>                                    OutsideSeatIndices;                                         // 0x0000   (0x0010)  
};

/// Struct /Script/SrirachaRanch.SrirachaInputMappingData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSrirachaInputMappingData
{ 
	FName                                              MainActionName;                                             // 0x0000   (0x0004)  
	FName                                              GamepadActionName;                                          // 0x0004   (0x0004)  
	SDK_UNDEFINED(24,15261) /* FText */                __um(DisplayName);                                          // 0x0008   (0x0018)  
};

