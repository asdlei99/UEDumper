
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AudioGameplay
/// dependency: AudioShapes
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: McpProfileSysCore
/// dependency: MediaAssets
/// dependency: ModularGameplay

/// Class /Script/SrirachaRanch.StreamingRadioAudioShapeComponent
/// Size: 0x0058 (0x000148 - 0x0001A0)
class UStreamingRadioAudioShapeComponent : public UFortAudioShapeComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x148, 4, 0, 0})
	CMember(class UStreamingRadioPlayerComponent*)     RadioPlayer                                                 OFFSET(get<T>, {0x150, 8, 0, 0})
};

/// Class /Script/SrirachaRanch.SrirachaRanchComponentTemplateWrapper
/// Size: 0x0008 (0x000030 - 0x000038)
class USrirachaRanchComponentTemplateWrapper : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UMediaSoundComponent*)               MediaSoundPlayerTemplate                                    OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/SrirachaRanch.StreamingRadioPlayerComponent
/// Size: 0x03D0 (0x0000A8 - 0x000478)
class UStreamingRadioPlayerComponent : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1144;

public:
	CMember(TMap<FName, FSrirachaInputMappingData>)    InputMappingData                                            OFFSET(get<T>, {0xB8, 80, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSourceLoading                                             OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSourcePlayed                                              OFFSET(getStruct<T>, {0x118, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSourceStopped                                             OFFSET(getStruct<T>, {0x128, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSourceFailed                                              OFFSET(getStruct<T>, {0x138, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMetadataChanged                                           OFFSET(getStruct<T>, {0x148, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRadioExplicitStop                                         OFFSET(getStruct<T>, {0x158, 16, 0, 0})
	DMember(float)                                     PercentAutostartRadio                                       OFFSET(get<float>, {0x168, 4, 0, 0})
	CMember(TArray<FName>)                             DisabledVehicleList                                         OFFSET(get<T>, {0x170, 16, 0, 0})
	CMember(TMap<FName, float>)                        ExteriorVolumeMultiplierMap                                 OFFSET(get<T>, {0x180, 80, 0, 0})
	CMember(TMap<FName, float>)                        InteriorVolumeMultiplierMap                                 OFFSET(get<T>, {0x1D0, 80, 0, 0})
	DMember(bool)                                      bMinimalStateOnPlatform                                     OFFSET(get<bool>, {0x220, 1, 0, 0})
	CMember(TArray<FString>)                           DisabledStationList                                         OFFSET(get<T>, {0x228, 16, 0, 0})
	DMember(bool)                                      bAutostartOnEntry                                           OFFSET(get<bool>, {0x238, 1, 0, 0})
	DMember(bool)                                      bDisabledForCurrentPlayerState                              OFFSET(get<bool>, {0x239, 1, 0, 0})
	SMember(FStreamingRadioSourceData)                 ReplicatedRadioSourceData                                   OFFSET(getStruct<T>, {0x240, 104, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnReplicatedStateChangedDelegate                            OFFSET(getStruct<T>, {0x2A8, 16, 0, 0})
	CMember(class UMediaSoundComponent*)               SoundComponent                                              OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(class UStreamingRadioAudioShapeComponent*) AudioShape                                                  OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class USrirachaRanchComponentTemplateWrapper*) SoundCompTemplateSource                                 OFFSET(get<T>, {0x2C8, 8, 0, 0})
	SMember(FAthenaRadioStation)                       LastSource                                                  OFFSET(getStruct<T>, {0x2D0, 88, 0, 0})
	CMember(TArray<class URadioContentSourceItemDefinition*>) Sources                                              OFFSET(get<T>, {0x328, 16, 0, 0})
	SMember(FAthenaRadioStation)                       FallbackSource                                              OFFSET(getStruct<T>, {0x338, 88, 0, 0})
	CMember(TMap<FGameplayTag, FSrirachaPerClassSpecialSeats>) SpecialSeatList                                     OFFSET(get<T>, {0x390, 80, 0, 0})
	CMember(class UFortBaseStreamingVideo*)            BasePlayerInstance                                          OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(class USoundSubmixBase*)                   DefaultSoundSubmix                                          OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(class USoundSubmixBase*)                   LicensedSoundSubmix                                         OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(ERadioSource)                              CurrentMode                                                 OFFSET(get<T>, {0x3F8, 1, 0, 0})
	DMember(int32_t)                                   MaximumRetries                                              OFFSET(get<int32_t>, {0x3FC, 4, 0, 0})
	DMember(int32_t)                                   FadeoutWhenUnpoweredInMS                                    OFFSET(get<int32_t>, {0x400, 4, 0, 0})
	DMember(int32_t)                                   FadeoutWhenOwnerBeingDestroyedInMS                          OFFSET(get<int32_t>, {0x404, 4, 0, 0})
	DMember(int32_t)                                   MaxFadeoutTimeMS                                            OFFSET(get<int32_t>, {0x408, 4, 0, 0})
	DMember(int32_t)                                   DefaultPlayingIndex                                         OFFSET(get<int32_t>, {0x40C, 4, 0, 0})
	CMember(class USoundMix*)                          SoundMixInside                                              OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class USoundMix*)                          SoundMixOutside                                             OFFSET(get<T>, {0x418, 8, 0, 0})
	DMember(float)                                     ActivationRadius                                            OFFSET(get<float>, {0x424, 4, 0, 0})
	SMember(FName)                                     ComponentToAttachTo                                         OFFSET(getStruct<T>, {0x428, 4, 0, 0})
	SMember(FName)                                     ComponentSocketAttachTo                                     OFFSET(getStruct<T>, {0x42C, 4, 0, 0})
	CMember(class UFortStreamMediaSource*)             MediaSource                                                 OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(TArray<FAthenaRadioStation>)               RadioStationList                                            OFFSET(get<T>, {0x438, 16, 0, 0})
	CMember(class UObject*)                            DelegateContextObject                                       OFFSET(get<T>, {0x448, 8, 0, 0})
	DMember(float)                                     MediaStartTimeFromInit                                      OFFSET(get<float>, {0x450, 4, 0, 0})


	/// Functions
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.ToggleRadioActive
	// void ToggleRadioActive();                                                                                                // [0xa857b58] Final|Native|Public|BlueprintCallable 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.StopRadioWithFadeout
	// void StopRadioWithFadeout(int32_t Milliseconds);                                                                         // [0xa857ad8] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.StopRadio
	// void StopRadio();                                                                                                        // [0xa857ac4] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.StopIfNoDriver
	// void StopIfNoDriver(TScriptInterface<Class>& Vehicle);                                                                   // [0xa857a34] Final|Native|Protected|HasOutParms 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.StartRadio
	// void StartRadio(int32_t IdxToPlay, bool bFallbackOverride);                                                              // [0xa857970] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.SoundMixUpdateWeaponState
	// void SoundMixUpdateWeaponState(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                             // [0xa857800] Final|Native|Private 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.SoundMixUpdateTargetingState
	// void SoundMixUpdateTargetingState(bool bNewIsTargeting);                                                                 // [0xa857778] Final|Native|Private 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.SetInteriorVolume
	// void SetInteriorVolume(TScriptInterface<Class>& Vehicle);                                                                // [0xa8576e8] Final|Native|Protected|HasOutParms 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.SetExteriorVolume
	// void SetExteriorVolume(TScriptInterface<Class>& Vehicle);                                                                // [0xa857658] Final|Native|Protected|HasOutParms 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.SetActivationRadius
	// void SetActivationRadius(float InRadius);                                                                                // [0xa8575cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.ServerStopRadio
	// void ServerStopRadio();                                                                                                  // [0x212f900] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.ServerSetDisabledForCurrentPlayerState
	// void ServerSetDisabledForCurrentPlayerState(bool bInDisableForCurrentPlayerState);                                       // [0xa857548] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.ServerSaveFadeOutTime
	// void ServerSaveFadeOutTime(float InFadeOutSeconds);                                                                      // [0xa7fe298] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.ServerSavedSource
	// void ServerSavedSource(FAthenaRadioStation InSource);                                                                    // [0xa8573fc] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.ServerSaveAutoStart
	// void ServerSaveAutoStart(bool bInAutoStart);                                                                             // [0xa857378] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.ServerPlayIndex
	// void ServerPlayIndex(int32_t InIndex, EStreamingRadioSourceState InState);                                               // [0xa8572b0] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.PlayPrevIndex
	// void PlayPrevIndex();                                                                                                    // [0xa85729c] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.PlayNextIndex
	// void PlayNextIndex();                                                                                                    // [0xa857288] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.PlayDefaultIndex
	// void PlayDefaultIndex();                                                                                                 // [0xa857274] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnRep_RadioSourceData
	// void OnRep_RadioSourceData();                                                                                            // [0x2132f94] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnPiPPlayerBlockedChanged
	// void OnPiPPlayerBlockedChanged(bool bPiPPlayerBlocking);                                                                 // [0xa8571f4] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnPawnExitVehicle
	// void OnPawnExitVehicle(TScriptInterface<Class>& Vehicle, class AFortPawn* PlayerPawn, int32_t SeatIndex);                // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnPawnExitSeat
	// void OnPawnExitSeat(TScriptInterface<Class>& Vehicle, class AFortPawn* PlayerPawn, int32_t SeatIndex);                   // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnPawnEnterVehicle
	// void OnPawnEnterVehicle(TScriptInterface<Class>& Vehicle, class AFortPawn* PlayerPawn, int32_t SeatIndex);               // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnPawnEnterSeat
	// void OnPawnEnterSeat(TScriptInterface<Class>& Vehicle, class AFortPawn* PlayerPawn, int32_t SeatIndex);                  // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnOwningVehicleDied
	// void OnOwningVehicleDied(class AFortAthenaVehicle* DeadVehicle, FGameplayTagContainer& InTags, class AController* EventInstigator, class AActor* DamageCauser); // [0xa856fec] Final|Native|Protected|HasOutParms 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerUnpowered
	// void OnOwnerUnpowered();                                                                                                 // [0xa856fd4] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerReFueled
	// void OnOwnerReFueled();                                                                                                  // [0x3174340] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerOutOfFuel
	// void OnOwnerOutOfFuel();                                                                                                 // [0xa856fc0] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerExploded
	// void OnOwnerExploded();                                                                                                  // [0xa856fa8] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerDisabledChanged
	// void OnOwnerDisabledChanged(bool bDisabled);                                                                             // [0xa856f28] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.NativeOnVehicleOwnerChanged
	// void NativeOnVehicleOwnerChanged(TScriptInterface<Class>& Vehicle, class AActor* NewOwner, class AActor* PrevOwner);     // [0xa856cc8] Final|Native|Protected|HasOutParms 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnExitVehicle
	// void NativeOnPawnExitVehicle(TScriptInterface<Class>& Vehicle, class AFortPawn* PlayerPawn, int32_t SeatIndex);          // [0x1e1abb4] Final|Native|Protected|HasOutParms 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnExitSeat
	// void NativeOnPawnExitSeat(TScriptInterface<Class>& Vehicle, class AFortPawn* PlayerPawn, int32_t SeatIndex);             // [0x1e1a924] Final|Native|Protected|HasOutParms 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnEnterVehicle
	// void NativeOnPawnEnterVehicle(TScriptInterface<Class>& Vehicle, class AFortPawn* PlayerPawn, int32_t SeatIndex);         // [0x1e1a694] Final|Native|Protected|HasOutParms 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnEnterSeat
	// void NativeOnPawnEnterSeat(TScriptInterface<Class>& Vehicle, class AFortPawn* PlayerPawn, int32_t SeatIndex);            // [0x1e1a404] Final|Native|Protected|HasOutParms 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.MetadataChanged
	// void MetadataChanged(FFortMediaInBandMetadata MetaData);                                                                 // [0xa856b20] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.MediaTerminalError
	// void MediaTerminalError(EBaseMediaTerminalErrorReason Reason);                                                           // [0xa856aa0] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.MediaResumed
	// void MediaResumed();                                                                                                     // [0xa856a8c] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.MediaOnSuccess
	// void MediaOnSuccess();                                                                                                   // [0xa856a78] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.MediaEnded
	// void MediaEnded();                                                                                                       // [0xa856a64] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.MediaClosed
	// void MediaClosed();                                                                                                      // [0xa856a50] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.MediaClose
	// void MediaClose();                                                                                                       // [0xa856a3c] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.IsRadioOn
	// bool IsRadioOn();                                                                                                        // [0xa856a18] Final|Native|Protected|Const 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.IsPlayingLiveFeed
	// bool IsPlayingLiveFeed();                                                                                                // [0xa8569e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.IsExternalSeat
	// bool IsExternalSeat(int32_t SeatIdx);                                                                                    // [0xa856958] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.HandleLicensedAudioTreatmentChanged
	// void HandleLicensedAudioTreatmentChanged(UCPTypes UCPType);                                                              // [0xa8568a8] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.GetOptionAt
	// FAthenaRadioStation GetOptionAt(int32_t idx);                                                                            // [0xa8567f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.GetMediaMetadata
	// FFortMediaInBandMetadata GetMediaMetadata();                                                                             // [0xa8567b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.GetBaseStreamingVideo
	// class UFortBaseStreamingVideo* GetBaseStreamingVideo();                                                                  // [0xa856798] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SrirachaRanch.RadioContentSourceItemDefinition
/// Size: 0x0018 (0x0003F8 - 0x000410)
class URadioContentSourceItemDefinition : public UFortAccountItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
	SMember(FString)                                   ResourceID                                                  OFFSET(getStruct<T>, {0x3F8, 16, 0, 0})
	CMember(class UFortStreamMediaSource*)             MediaSource                                                 OFFSET(get<T>, {0x408, 8, 0, 0})
};

/// Struct /Script/SrirachaRanch.AthenaRadioStation
/// Size: 0x0058 (0x000000 - 0x000058)
class FAthenaRadioStation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FText)                                     Title                                                       OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FString)                                   StationImage                                                OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   ResourceID                                                  OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(TArray<FString>)                           GameplayTagDenylist                                         OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FString>)                           GameplayTagAllowlist                                        OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/SrirachaRanch.SrirachaPerClassSpecialSeats
/// Size: 0x0010 (0x000000 - 0x000010)
class FSrirachaPerClassSpecialSeats : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<int32_t>)                           OutsideSeatIndices                                          OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/SrirachaRanch.StreamingRadioSourceData
/// Size: 0x0068 (0x000000 - 0x000068)
class FStreamingRadioSourceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(EStreamingRadioSourceState)                State                                                       OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   PlayingIndex                                                OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     FadeoutSeconds                                              OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FAthenaRadioStation)                       SourceOverride                                              OFFSET(getStruct<T>, {0x10, 88, 0, 0})
};

/// Struct /Script/SrirachaRanch.SrirachaInputMappingData
/// Size: 0x0020 (0x000000 - 0x000020)
class FSrirachaInputMappingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     MainActionName                                              OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     GamepadActionName                                           OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Enum /Script/SrirachaRanch.EStreamingRadioSourceState
/// Size: 0x05
enum EStreamingRadioSourceState : uint8_t
{
	EStreamingRadioSourceState__None                                                 = 0,
	EStreamingRadioSourceState__LoadingPlayer                                        = 1,
	EStreamingRadioSourceState__LoadedPlayer                                         = 2,
	EStreamingRadioSourceState__Playing                                              = 3,
	EStreamingRadioSourceState__EStreamingRadioSourceState_MAX                       = 4
};

/// Enum /Script/SrirachaRanch.EOnlineRadioSourceType
/// Size: 0x02
enum EOnlineRadioSourceType : uint8_t
{
	EOnlineRadioSourceType__Epic                                                     = 0,
	EOnlineRadioSourceType__EOnlineRadioSourceType_MAX                               = 1
};

/// Enum /Script/SrirachaRanch.ERadioSource
/// Size: 0x03
enum ERadioSource : uint8_t
{
	ERadioSource__Invalid                                                            = 0,
	ERadioSource__Vehicle                                                            = 1,
	ERadioSource__ERadioSource_MAX                                                   = 2
};

