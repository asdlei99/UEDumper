
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FMCoreRuntime
/// dependency: GameplayTags
/// dependency: Hotfix
/// dependency: SparksCoreRuntime

/// Enum /Script/SparksCMS.ESparksGenre
/// Size: 0x11
enum class ESparksGenre : uint8_t
{
	ESparksGenre__None                                                               = 0,
	ESparksGenre__RapHipHop                                                          = 1,
	ESparksGenre__RnB                                                                = 2,
	ESparksGenre__Pop                                                                = 3,
	ESparksGenre__Rock                                                               = 4,
	ESparksGenre__DanceElectronic                                                    = 5,
	ESparksGenre__Country                                                            = 6,
	ESparksGenre__LatinCarribean                                                     = 7,
	ESparksGenre__Other                                                              = 8,
	ESparksGenre__Count                                                              = 9,
	ESparksGenre__ESparksGenre_MAX                                                   = 10
};

/// Enum /Script/SparksCMS.ESongSortMethod
/// Size: 0x08
enum class ESongSortMethod : uint8_t
{
	ESongSortMethod__Title                                                           = 0,
	ESongSortMethod__Shortname                                                       = 1,
	ESongSortMethod__Artist                                                          = 2,
	ESongSortMethod__Album                                                           = 3,
	ESongSortMethod__Genre                                                           = 4,
	ESongSortMethod__ReleaseYear                                                     = 5,
	ESongSortMethod__None                                                            = 6,
	ESongSortMethod__ESongSortMethod_MAX                                             = 7
};

/// Enum /Script/SparksCMS.ESongSortDirection
/// Size: 0x04
enum class ESongSortDirection : uint8_t
{
	ESongSortDirection__Ascending                                                    = 0,
	ESongSortDirection__Descending                                                   = 1,
	ESongSortDirection__None                                                         = 2,
	ESongSortDirection__ESongSortDirection_MAX                                       = 3
};

/// Struct /Script/SparksCMS.SparksSongQuicksilverTrack
/// Size: 0x0030 (0x000000 - 0x000030)
struct FSparksSongQuicksilverTrack
{ 
	SDK_UNDEFINED(16,13586) /* FString */              __um(Part);                                                 // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,13587) /* TArray<FString> */      __um(Channels);                                             // 0x0010   (0x0010)  
	TArray<float>                                      Vols;                                                       // 0x0020   (0x0010)  
};

/// Struct /Script/SparksCMS.SparksSongQuicksilverInfo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FSparksSongQuicksilverInfo
{ 
	SDK_UNDEFINED(16,13588) /* FString */              __um(SongID);                                               // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,13589) /* FString */              __um(PreviewID);                                            // 0x0010   (0x0010)  
	TArray<FSparksSongQuicksilverTrack>                Tracks;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/SparksCMS.SparksSongIntensityInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSparksSongIntensityInfo
{ 
	int32_t                                            Vocals;                                                     // 0x0000   (0x0004)  
	int32_t                                            Guitar;                                                     // 0x0004   (0x0004)  
	int32_t                                            Bass;                                                       // 0x0008   (0x0004)  
	int32_t                                            Drums;                                                      // 0x000C   (0x0004)  
	int32_t                                            PlasticGuitar;                                              // 0x0010   (0x0004)  
	int32_t                                            PlasticBass;                                                // 0x0014   (0x0004)  
	int32_t                                            PlasticDrums;                                               // 0x0018   (0x0004)  
	int32_t                                            Band;                                                       // 0x001C   (0x0004)  
};

/// Struct /Script/SparksCMS.SparksSongCatalogEntry
/// Size: 0x0168 (0x000000 - 0x000168)
struct FSparksSongCatalogEntry
{ 
	SDK_UNDEFINED(16,13590) /* FString */              __um(SongUID);                                              // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,13591) /* FString */              __um(ShortName);                                            // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,13592) /* FString */              __um(Title);                                                // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,13593) /* FString */              __um(Artist);                                               // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,13594) /* FString */              __um(Album);                                                // 0x0040   (0x0010)  
	TArray<ESparksGenre>                               Genre;                                                      // 0x0050   (0x0010)  
	int32_t                                            duration;                                                   // 0x0060   (0x0004)  
	int32_t                                            ReleaseYear;                                                // 0x0064   (0x0004)  
	FDateTime                                          NewUntilTime;                                               // 0x0068   (0x0008)  
	EMusicKey                                          MusicKey;                                                   // 0x0070   (0x0001)  
	EMusicKeyMode                                      MusicMode;                                                  // 0x0071   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0072   (0x0002)  MISSED
	int32_t                                            MusicTempo;                                                 // 0x0074   (0x0004)  
	ESparksInstrumentType                              StartingInstrumentGuitar;                                   // 0x0078   (0x0001)  
	ESparksInstrumentType                              StartingInstrumentBass;                                     // 0x0079   (0x0001)  
	ESparksInstrumentType                              StartingInstrumentDrums;                                    // 0x007A   (0x0001)  
	ESparksInstrumentType                              StartingInstrumentVocals;                                   // 0x007B   (0x0001)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	SDK_UNDEFINED(16,13595) /* FString */              __um(JamLinkCode);                                          // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,13596) /* FString */              __um(McpTemplateId);                                        // 0x0090   (0x0010)  
	SDK_UNDEFINED(16,13597) /* FString */              __um(AlbumArtUrl);                                          // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,13598) /* FString */              __um(MidiUrl);                                              // 0x00B0   (0x0010)  
	TArray<char>                                       MidiData;                                                   // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,13599) /* FString */              __um(LipSyncUrl);                                           // 0x00D0   (0x0010)  
	TArray<char>                                       LipSyncData;                                                // 0x00E0   (0x0010)  
	FGameplayTagContainer                              GameplayTagContainer;                                       // 0x00F0   (0x0020)  
	FSparksSongQuicksilverInfo                         QuicksilverInfo;                                            // 0x0110   (0x0030)  
	FSparksSongIntensityInfo                           Intensities;                                                // 0x0140   (0x0020)  
	bool                                               bValid;                                                     // 0x0160   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0161   (0x0007)  MISSED
};

/// Class /Script/SparksCMS.CatalogData
/// Size: 0x0188 (0x000028 - 0x0001B0)
class UCatalogData : public UObject
{ 
public:
	bool                                               bFromHotfix;                                                // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0029   (0x000F)  MISSED
	FSparksSongCatalogEntry                            DataEntry;                                                  // 0x0038   (0x0168)  
	SDK_UNDEFINED(16,13600) /* FMulticastInlineDelegate */ __um(OnSongConsolidated);                               // 0x01A0   (0x0010)  


	/// Functions
	// Function /Script/SparksCMS.CatalogData.IsFromHotfix
	// bool IsFromHotfix();                                                                                                  // [0x3b2e1a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCMS.CatalogData.IsEnabledForPilgrim
	// bool IsEnabledForPilgrim();                                                                                           // [0xaa539e4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCMS.CatalogData.IsEnabledForJam
	// bool IsEnabledForJam();                                                                                               // [0xaa539c0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCMS.CatalogData.IsEnabled
	// bool IsEnabled();                                                                                                     // [0xaa5399c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCMS.CatalogData.ConsolidateData
	// void ConsolidateData();                                                                                               // [0xaa51d44] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/SparksCMS.CatalogData.ClearConsolidatedData
	// void ClearConsolidatedData();                                                                                         // [0xaa51d30] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/SparksCMS.SparksSongCatalog
/// Size: 0x00D0 (0x000030 - 0x000100)
class USparksSongCatalog : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_2[0x58];                                      // 0x0030   (0x0058)  MISSED
	SDK_UNDEFINED(80,13601) /* TMap<FString, UCatalogData*> */ __um(Catalog);                                      // 0x0088   (0x0050)  
	TArray<class UCatalogData*>                        CatalogObjectPool;                                          // 0x00D8   (0x0010)  
	class UUpdateManager*                              HFManager;                                                  // 0x00E8   (0x0008)  
	SDK_UNDEFINED(16,13602) /* FMulticastInlineDelegate */ __um(OnSongCatalogRetrieved);                           // 0x00F0   (0x0010)  


	/// Functions
	// Function /Script/SparksCMS.SparksSongCatalog.SetCMSSuffix
	// void SetCMSSuffix(FString InCMSSuffix);                                                                               // [0xaa53a80] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/SparksCMS.SparksSongCatalog.RequestSongCatalog
	// void RequestSongCatalog();                                                                                            // [0xaa53a6c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/SparksCMS.SparksSongCatalog.OnCalendarActiveEventsChanged
	// void OnCalendarActiveEventsChanged(TArray<FString>& ActiveEventFlags);                                                // [0x3622c20] Final|Native|Protected|HasOutParms 
	// Function /Script/SparksCMS.SparksSongCatalog.GetSongList
	// void GetSongList(ESongSortMethod SortMethod, ESongSortDirection SortDirection, FGameplayTagQuery& TagQuery, TArray<UCatalogData*>& OutResults); // [0xaa53200] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SparksCMS.SparksSongCatalog.GetSongByUID
	// class UCatalogData* GetSongByUID(FString InUID);                                                                      // [0xaa52b50] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/SparksCMS.SparksSongCatalog.GetSongByTemplateID
	// class UCatalogData* GetSongByTemplateID(FString InTemplateId);                                                        // [0xaa52408] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/SparksCMS.SparksSongCatalog.GetSongByShortName
	// class UCatalogData* GetSongByShortName(FString InShortName);                                                          // [0xaa51d58] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

