
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MediaAssets

/// Class /Script/MediaPlate.MediaPlate
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AMediaPlate : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(class UMediaPlateComponent*)               MediaPlateComponent                                         OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               StaticMeshComponent                                         OFFSET(get<T>, {0x298, 8, 0, 0})
};

/// Class /Script/MediaPlate.MediaPlateAssetUserData
/// Size: 0x0010 (0x000028 - 0x000038)
class UMediaPlateAssetUserData : public UAssetUserData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/MediaPlate.MediaPlateComponent
/// Size: 0x00D0 (0x0000A0 - 0x000170)
class UMediaPlateComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	DMember(bool)                                      bPlayOnOpen                                                 OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bAutoPlay                                                   OFFSET(get<bool>, {0xA9, 1, 0, 0})
	DMember(bool)                                      bEnableAudio                                                OFFSET(get<bool>, {0xAA, 1, 0, 0})
	DMember(float)                                     StartTime                                                   OFFSET(get<float>, {0xAC, 4, 0, 0})
	CMember(class UMediaSoundComponent*)               SoundComponent                                              OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               StaticMeshComponent                                         OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(TArray<class UStaticMeshComponent*>)       Letterboxes                                                 OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(class UMediaPlaylist*)                     MediaPlaylist                                               OFFSET(get<T>, {0xD0, 8, 0, 0})
	DMember(int32_t)                                   PlaylistIndex                                               OFFSET(get<int32_t>, {0xD8, 4, 0, 0})
	SMember(FMediaSourceCacheSettings)                 CacheSettings                                               OFFSET(getStruct<T>, {0xDC, 8, 0, 0})
	DMember(bool)                                      bIsMediaPlatePlaying                                        OFFSET(get<bool>, {0xE4, 1, 0, 0})
	DMember(bool)                                      bPlayOnlyWhenVisible                                        OFFSET(get<bool>, {0xEC, 1, 0, 0})
	DMember(bool)                                      bLoop                                                       OFFSET(get<bool>, {0xED, 1, 0, 0})
	CMember(EMediaTextureVisibleMipsTiles)             VisibleMipsTilesCalculations                                OFFSET(get<T>, {0xEE, 1, 0, 0})
	DMember(float)                                     MipMapBias                                                  OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(bool)                                      bIsAspectRatioAuto                                          OFFSET(get<bool>, {0xF4, 1, 0, 0})
	DMember(bool)                                      bEnableMipMapUpscaling                                      OFFSET(get<bool>, {0xF5, 1, 0, 0})
	DMember(int32_t)                                   MipLevelToUpscale                                           OFFSET(get<int32_t>, {0xF8, 4, 0, 0})
	DMember(float)                                     LetterboxAspectRatio                                        OFFSET(get<float>, {0xFC, 4, 0, 0})
	SMember(FVector2D)                                 MeshRange                                                   OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	CMember(TArray<class UMediaTexture*>)              MediaTextures                                               OFFSET(get<T>, {0x118, 16, 0, 0})
	SMember(FMediaTextureResourceSettings)             MediaTextureSettings                                        OFFSET(getStruct<T>, {0x128, 2, 0, 0})
	CMember(class UMediaPlayer*)                       MediaPlayer                                                 OFFSET(get<T>, {0x130, 8, 0, 0})


	/// Functions
	// Function /Script/MediaPlate.MediaPlateComponent.SetPlayOnlyWhenVisible
	// void SetPlayOnlyWhenVisible(bool bInPlayOnlyWhenVisible);                                                                // [0xc5346c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.SetMeshRange
	// void SetMeshRange(FVector2D InMeshRange);                                                                                // [0xc534590] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.SetLoop
	// void SetLoop(bool bInLoop);                                                                                              // [0xc534500] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.SetLetterboxAspectRatio
	// void SetLetterboxAspectRatio(float AspectRatio);                                                                         // [0xc534480] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.SetIsAspectRatioAuto
	// void SetIsAspectRatioAuto(bool bInIsAspectRatioAuto);                                                                    // [0xc5343f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Seek
	// bool Seek(FTimespan& Time);                                                                                              // [0xc534358] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Rewind
	// bool Rewind();                                                                                                           // [0xc534328] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Play
	// void Play();                                                                                                             // [0xc5342f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Pause
	// void Pause();                                                                                                            // [0xc5342bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Open
	// void Open();                                                                                                             // [0xc5342a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.OnMediaOpened
	// void OnMediaOpened(FString DeviceUrl);                                                                                   // [0xc533bfc] Final|Native|Private 
	// Function /Script/MediaPlate.MediaPlateComponent.OnMediaEnd
	// void OnMediaEnd();                                                                                                       // [0xc533be8] Final|Native|Private 
	// Function /Script/MediaPlate.MediaPlateComponent.IsMediaPlatePlaying
	// bool IsMediaPlatePlaying();                                                                                              // [0xab9188c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaPlate.MediaPlateComponent.GetMeshRange
	// FVector2D GetMeshRange();                                                                                                // [0xc533bcc] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaPlate.MediaPlateComponent.GetMediaTexture
	// class UMediaTexture* GetMediaTexture(int32_t Index);                                                                     // [0xc533b40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.GetMediaPlayer
	// class UMediaPlayer* GetMediaPlayer();                                                                                    // [0x60acb88] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.GetLoop
	// bool GetLoop();                                                                                                          // [0xc533b28] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MediaPlate.MediaPlateComponent.GetLetterboxAspectRatio
	// float GetLetterboxAspectRatio();                                                                                         // [0xc533b10] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.GetIsAspectRatioAuto
	// bool GetIsAspectRatioAuto();                                                                                             // [0x8bebc8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaPlate.MediaPlateComponent.Close
	// void Close();                                                                                                            // [0xc533afc] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/MediaPlate.MediaTextureResourceSettings
/// Size: 0x0002 (0x000000 - 0x000002)
class FMediaTextureResourceSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bEnableGenMips                                              OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(char)                                      CurrentNumMips                                              OFFSET(get<char>, {0x1, 1, 0, 0})
};

/// Enum /Script/MediaPlate.EMediaPlateEventState
/// Size: 0x08
enum EMediaPlateEventState : uint8_t
{
	EMediaPlateEventState__Play                                                      = 0,
	EMediaPlateEventState__Open                                                      = 1,
	EMediaPlateEventState__Close                                                     = 2,
	EMediaPlateEventState__Pause                                                     = 3,
	EMediaPlateEventState__Reverse                                                   = 4,
	EMediaPlateEventState__Forward                                                   = 5,
	EMediaPlateEventState__Rewind                                                    = 6,
	EMediaPlateEventState__MAX                                                       = 7
};

