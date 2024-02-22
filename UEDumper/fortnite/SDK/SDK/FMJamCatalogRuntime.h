
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: FMCoreRuntime
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: ItemizationCoreRuntime
/// dependency: McpProfileSys
/// dependency: ModularGameplay
/// dependency: SparksCMS

/// Enum /Script/FMJamCatalogRuntime.EJamSongDownloadResult
/// Size: 0x04
enum class EJamSongDownloadResult : uint8_t
{
	EJamSongDownloadResult__Failed                                                   = 0,
	EJamSongDownloadResult__Success                                                  = 1,
	EJamSongDownloadResult__SuccessCached                                            = 2,
	EJamSongDownloadResult__EJamSongDownloadResult_MAX                               = 3
};

/// Enum /Script/FMJamCatalogRuntime.EJamSongSource
/// Size: 0x05
enum class EJamSongSource : uint8_t
{
	EJamSongSource__Baked                                                            = 0,
	EJamSongSource__Plugin                                                           = 1,
	EJamSongSource__UEFN                                                             = 2,
	EJamSongSource__Unknown                                                          = 3,
	EJamSongSource__EJamSongSource_MAX                                               = 4
};

/// Enum /Script/FMJamCatalogRuntime.EFMJamSongCatalogSortMethod
/// Size: 0x05
enum class EFMJamSongCatalogSortMethod : uint8_t
{
	EFMJamSongCatalogSortMethod__Artist                                              = 0,
	EFMJamSongCatalogSortMethod__Title                                               = 1,
	EFMJamSongCatalogSortMethod__Year                                                = 2,
	EFMJamSongCatalogSortMethod__Num                                                 = 3,
	EFMJamSongCatalogSortMethod__EFMJamSongCatalogSortMethod_MAX                     = 4
};

/// Enum /Script/FMJamCatalogRuntime.EFMJamSongCatalogSortDirection
/// Size: 0x04
enum class EFMJamSongCatalogSortDirection : uint8_t
{
	EFMJamSongCatalogSortDirection__Ascending                                        = 0,
	EFMJamSongCatalogSortDirection__Descending                                       = 1,
	EFMJamSongCatalogSortDirection__Num                                              = 2,
	EFMJamSongCatalogSortDirection__EFMJamSongCatalogSortDirection_MAX               = 3
};

/// Class /Script/FMJamCatalogRuntime.FMJamCatalogDeveloperSettings
/// Size: 0x0018 (0x000030 - 0x000048)
class UFMJamCatalogDeveloperSettings : public UDeveloperSettings
{ 
public:
	bool                                               bOverrideJamSongLoadout;                                    // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	TArray<FName>                                      JamSongLoadout;                                             // 0x0038   (0x0010)  
};

/// Class /Script/FMJamCatalogRuntime.FMJamLoop
/// Size: 0x00F8 (0x000030 - 0x000128)
class UFMJamLoop : public UPrimaryDataAsset
{ 
public:
	SDK_UNDEFINED(32,13803) /* TWeakObjectPtr<UMidiFile*> */ __um(MidiFileMajor);                                  // 0x0030   (0x0020)  
	SDK_UNDEFINED(32,13804) /* TWeakObjectPtr<UMidiFile*> */ __um(MidiFileMinor);                                  // 0x0050   (0x0020)  
	SDK_UNDEFINED(32,13805) /* TWeakObjectPtr<UFusionPatch*> */ __um(FusionPatchMajor);                            // 0x0070   (0x0020)  
	SDK_UNDEFINED(32,13806) /* TWeakObjectPtr<UFusionPatch*> */ __um(FusionPatchMinor);                            // 0x0090   (0x0020)  
	bool                                               bOverrideDefaultTransposition;                              // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00B1   (0x0007)  MISSED
	SDK_UNDEFINED(80,13807) /* TMap<EMusicKey, int32_t> */ __um(Transposes);                                       // 0x00B8   (0x0050)  
	SDK_UNDEFINED(32,13808) /* TWeakObjectPtr<UFMJamSong*> */ __um(Song);                                          // 0x0108   (0x0020)  


	/// Functions
	// Function /Script/FMJamCatalogRuntime.FMJamLoop.HasPitch
	// bool HasPitch();                                                                                                      // [0xb084a2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamLoop.GetSong
	// class UFMJamSong* GetSong();                                                                                          // [0xb084680] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamLoop.GetSemitoneTranspose
	// int32_t GetSemitoneTranspose(EMusicKey ToKey);                                                                        // [0xb0845f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamLoop.GetMinorMidi
	// void GetMinorMidi(TWeakObjectPtr<UMidiFile*>& OutMetasoundMidi, TWeakObjectPtr<UFusionPatch*>& OutMetasoundFusion);   // [0xb08430c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamLoop.GetMidi
	// void GetMidi(EMusicKeyMode Mode, TWeakObjectPtr<UMidiFile*>& OutMetasoundMidi, TWeakObjectPtr<UFusionPatch*>& OutMetasoundFusion); // [0xb0841b4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamLoop.GetMajorMidi
	// void GetMajorMidi(TWeakObjectPtr<UMidiFile*>& OutMetasoundMidi, TWeakObjectPtr<UFusionPatch*>& OutMetasoundFusion);   // [0xb08409c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamLoop.GetLoopType
	// EFMJamLoopType GetLoopType();                                                                                         // [0xb083e4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamLoop.GetKey
	// EMusicKey GetKey();                                                                                                   // [0xb083d4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FMJamCatalogRuntime.FMJamSong
/// Size: 0x00E0 (0x000030 - 0x000110)
class UFMJamSong : public UPrimaryDataAsset
{ 
public:
	FName                                              SongShortName;                                              // 0x0030   (0x0004)  
	EJamSongSource                                     SongDataSource;                                             // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	SDK_UNDEFINED(32,13809) /* TWeakObjectPtr<UTexture2D*> */ __um(AlbumArt);                                      // 0x0038   (0x0020)  
	SDK_UNDEFINED(16,13810) /* FString */              __um(UEFNLinkCode);                                         // 0x0058   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0068   (0x0008)  MISSED
	SDK_UNDEFINED(24,13811) /* FText */                __um(Title);                                                // 0x0070   (0x0018)  
	SDK_UNDEFINED(24,13812) /* FText */                __um(Artist);                                               // 0x0088   (0x0018)  
	int32_t                                            Year;                                                       // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x00A4   (0x0004)  MISSED
	FGameplayTagContainer                              AdditionalTags;                                             // 0x00A8   (0x0020)  
	EMusicKey                                          Key;                                                        // 0x00C8   (0x0001)  
	EMusicKeyMode                                      Mode;                                                       // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x00CA   (0x0002)  MISSED
	int32_t                                            Tempo;                                                      // 0x00CC   (0x0004)  
	class UFMJamLoop*                                  Lead;                                                       // 0x00D0   (0x0008)  
	class UFMJamLoop*                                  Misc;                                                       // 0x00D8   (0x0008)  
	class UFMJamLoop*                                  Bass;                                                       // 0x00E0   (0x0008)  
	class UFMJamLoop*                                  Beat;                                                       // 0x00E8   (0x0008)  
	SDK_UNDEFINED(32,13813) /* TWeakObjectPtr<UAnimSequence*> */ __um(LipSyncAnimAsset);                           // 0x00F0   (0x0020)  


	/// Functions
	// Function /Script/FMJamCatalogRuntime.FMJamSong.GetYear
	// int32_t GetYear();                                                                                                    // [0xb084a08] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamSong.GetTitle
	// FString GetTitle();                                                                                                   // [0xb0849c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamSong.GetTempo
	// int32_t GetTempo();                                                                                                   // [0xb084980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamSong.GetSongShortName
	// FName GetSongShortName();                                                                                             // [0x60f3a48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamSong.GetMode
	// EMusicKeyMode GetMode();                                                                                              // [0xb084424] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamSong.GetLoopTypeForLoop
	// EFMJamLoopType GetLoopTypeForLoop(class UFMJamLoop* Loop);                                                            // [0xb083f60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamSong.GetLoop
	// class UFMJamLoop* GetLoop(EFMJamLoopType LoopType);                                                                   // [0xb083dbc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamSong.GetLipSyncAnimAsset
	// TWeakObjectPtr<UAnimSequence*> GetLipSyncAnimAsset();                                                                 // [0xb083d94] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamSong.GetKey
	// EMusicKey GetKey();                                                                                                   // [0xb083d70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamSong.GetArtist
	// FString GetArtist();                                                                                                  // [0xb083c04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamSong.GetAdditionalTags
	// FGameplayTagContainer GetAdditionalTags();                                                                            // [0xb083bdc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FMJamCatalogRuntime.FMJamSongCatalog
/// Size: 0x00B0 (0x0000A0 - 0x000150)
class UFMJamSongCatalog : public UGameStateComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x48];                                      // 0x00A0   (0x0048)  MISSED
	SDK_UNDEFINED(80,13814) /* TMap<FName, UFMJamSong*> */ __um(SongsByShortName);                                 // 0x00E8   (0x0050)  
	class USparksSongCatalog*                          CachedCMSCatalog;                                           // 0x0138   (0x0008)  
	int32_t                                            NumCMSRetries;                                              // 0x0140   (0x0004)  
	bool                                               bHaveSongCatalog;                                           // 0x0144   (0x0001)  
	unsigned char                                      UnknownData01_6[0xB];                                       // 0x0145   (0x000B)  MISSED


	/// Functions
	// Function /Script/FMJamCatalogRuntime.FMJamSongCatalog.TryGetFMJamSongCatalog
	// class UFMJamSongCatalog* TryGetFMJamSongCatalog(class UObject* WorldContextObject);                                   // [0xb084bd8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMJamCatalogRuntime.FMJamSongCatalog.OnSongCatalogRetrieved
	// void OnSongCatalogRetrieved(bool bSuccess);                                                                           // [0x3147efc] Final|Native|Private 
	// Function /Script/FMJamCatalogRuntime.FMJamSongCatalog.HaveCMSSongCatalog
	// bool HaveCMSSongCatalog();                                                                                            // [0xb084a5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamSongCatalog.GetSortedSongList
	// TArray<UFMJamSong*> GetSortedSongList(EFMJamSongCatalogSortMethod SortMethod, EFMJamSongCatalogSortDirection SortDirection, FGameplayTagQuery& TagQuery); // [0xb0847f8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamSongCatalog.GetSongCatalogEntryByShortName
	// class UCatalogData* GetSongCatalogEntryByShortName(FName ShortName);                                                  // [0xb084730] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamSongCatalog.GetSongByShortName
	// class UFMJamSong* GetSongByShortName(FName ShortName);                                                                // [0xb0846a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamSongCatalog.GetRandomSongList
	// TArray<UFMJamSong*> GetRandomSongList(int32_t NumSongs, FGameplayTagQuery& TagQuery);                                 // [0xb08446c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamSongCatalog.GetLoopTypeText
	// FText GetLoopTypeText(EFMJamLoopType& LoopType);                                                                      // [0xb083ff0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMJamCatalogRuntime.FMJamSongCatalog.GetLoopTypeByTag
	// EFMJamLoopType GetLoopTypeByTag(FGameplayTag& LoopTag);                                                               // [0xb083e98] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMJamCatalogRuntime.FMJamSongCatalog.GetFMJamSongCatalog
	// class UFMJamSongCatalog* GetFMJamSongCatalog(class UObject* WorldContextObject);                                      // [0xb083c44] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FMJamCatalogRuntime.FortJamEmoteItemDefinition
/// Size: 0x0008 (0x000968 - 0x000970)
class UFortJamEmoteItemDefinition : public UAthenaDanceItemDefinition
{ 
public:
	uint32_t                                           SongIndex;                                                  // 0x0968   (0x0004)  
	bool                                               ReadSongDataFromAllOwnedSongs;                              // 0x096C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x096D   (0x0003)  MISSED


	/// Functions
	// Function /Script/FMJamCatalogRuntime.FortJamEmoteItemDefinition.IsJamLoopEnabled
	// bool IsJamLoopEnabled(class AFortPlayerController* PlayerController);                                                 // [0xb084a74] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FortJamEmoteItemDefinition.GetJamSongShortNameForPlayer
	// FName GetJamSongShortNameForPlayer(class AFortPlayerState* PlayerState);                                              // [0xb083cc4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

