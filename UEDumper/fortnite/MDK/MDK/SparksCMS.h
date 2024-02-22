
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FMCoreRuntime
/// dependency: GameplayTags
/// dependency: Hotfix
/// dependency: SparksCoreRuntime

/// Class /Script/SparksCMS.CatalogData
/// Size: 0x0188 (0x000028 - 0x0001B0)
class UCatalogData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	DMember(bool)                                      bFromHotfix                                                 OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FSparksSongCatalogEntry)                   DataEntry                                                   OFFSET(getStruct<T>, {0x38, 360, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSongConsolidated                                          OFFSET(getStruct<T>, {0x1A0, 16, 0, 0})


	/// Functions
	// Function /Script/SparksCMS.CatalogData.IsFromHotfix
	// bool IsFromHotfix();                                                                                                     // [0x38e5dc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCMS.CatalogData.IsEnabledForPilgrim
	// bool IsEnabledForPilgrim();                                                                                              // [0xaf4b074] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCMS.CatalogData.IsEnabledForJam
	// bool IsEnabledForJam();                                                                                                  // [0xaf4b050] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCMS.CatalogData.IsEnabled
	// bool IsEnabled();                                                                                                        // [0xaf4b02c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCMS.CatalogData.GetTagForAgeRating
	// FGameplayTag GetTagForAgeRating();                                                                                       // [0xaf4b004] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCMS.CatalogData.ConsolidateData
	// void ConsolidateData();                                                                                                  // [0xaf493ac] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/SparksCMS.CatalogData.ClearConsolidatedData
	// void ClearConsolidatedData();                                                                                            // [0xaf49398] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/SparksCMS.SparksSongCatalog
/// Size: 0x00D0 (0x000030 - 0x000100)
class USparksSongCatalog : public UGameInstanceSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(TMap<FString, UCatalogData*>)              Catalog                                                     OFFSET(get<T>, {0x88, 80, 0, 0})
	CMember(TArray<class UCatalogData*>)               CatalogObjectPool                                           OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(class UUpdateManager*)                     HFManager                                                   OFFSET(get<T>, {0xE8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSongCatalogRetrieved                                      OFFSET(getStruct<T>, {0xF0, 16, 0, 0})


	/// Functions
	// Function /Script/SparksCMS.SparksSongCatalog.SetCMSSuffix
	// void SetCMSSuffix(FString InCMSSuffix);                                                                                  // [0xaf4b144] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/SparksCMS.SparksSongCatalog.RequestSongCatalog
	// void RequestSongCatalog();                                                                                               // [0xaf4b130] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/SparksCMS.SparksSongCatalog.OnCalendarActiveEventsChanged
	// void OnCalendarActiveEventsChanged(TArray<FString>& ActiveEventFlags);                                                   // [0xaf4b098] Final|Native|Protected|HasOutParms 
	// Function /Script/SparksCMS.SparksSongCatalog.GetSongList
	// void GetSongList(ESongSortMethod SortMethod, ESongSortDirection SortDirection, FGameplayTagQuery& TagQuery, TArray<UCatalogData*>& OutResults); // [0xaf4a868] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SparksCMS.SparksSongCatalog.GetSongByUID
	// class UCatalogData* GetSongByUID(FString InUID);                                                                         // [0xaf4a1b8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/SparksCMS.SparksSongCatalog.GetSongByTemplateID
	// class UCatalogData* GetSongByTemplateID(FString InTemplateId);                                                           // [0xaf49a70] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/SparksCMS.SparksSongCatalog.GetSongByShortName
	// class UCatalogData* GetSongByShortName(FString InShortName);                                                             // [0xaf493c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Struct /Script/SparksCMS.SparksSongQuicksilverTrack
/// Size: 0x0030 (0x000000 - 0x000030)
class FSparksSongQuicksilverTrack : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Part                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<FString>)                           Channels                                                    OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<float>)                             Vols                                                        OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/SparksCMS.SparksSongQuicksilverInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FSparksSongQuicksilverInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   SongID                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   PreviewID                                                   OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TArray<FSparksSongQuicksilverTrack>)       Tracks                                                      OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/SparksCMS.SparksSongIntensityInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FSparksSongIntensityInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   Vocals                                                      OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Guitar                                                      OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Bass                                                        OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Drums                                                       OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   PlasticGuitar                                               OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   PlasticBass                                                 OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   PlasticDrums                                                OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   Band                                                        OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
};

/// Struct /Script/SparksCMS.SparksSongCatalogEntry
/// Size: 0x0168 (0x000000 - 0x000168)
class FSparksSongCatalogEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FString)                                   SongUID                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ShortName                                                   OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   Title                                                       OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   Artist                                                      OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   Album                                                       OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	CMember(TArray<ESparksGenre>)                      Genre                                                       OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(int32_t)                                   duration                                                    OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	DMember(int32_t)                                   ReleaseYear                                                 OFFSET(get<int32_t>, {0x64, 4, 0, 0})
	SMember(FDateTime)                                 NewUntilTime                                                OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	CMember(ESparksSongAgeRating)                      AgeRating                                                   OFFSET(get<T>, {0x70, 1, 0, 0})
	CMember(EMusicKey)                                 MusicKey                                                    OFFSET(get<T>, {0x71, 1, 0, 0})
	CMember(EMusicKeyMode)                             MusicMode                                                   OFFSET(get<T>, {0x72, 1, 0, 0})
	DMember(int32_t)                                   MusicTempo                                                  OFFSET(get<int32_t>, {0x74, 4, 0, 0})
	CMember(ESparksInstrumentType)                     StartingInstrumentGuitar                                    OFFSET(get<T>, {0x78, 1, 0, 0})
	CMember(ESparksInstrumentType)                     StartingInstrumentBass                                      OFFSET(get<T>, {0x79, 1, 0, 0})
	CMember(ESparksInstrumentType)                     StartingInstrumentDrums                                     OFFSET(get<T>, {0x7A, 1, 0, 0})
	CMember(ESparksInstrumentType)                     StartingInstrumentVocals                                    OFFSET(get<T>, {0x7B, 1, 0, 0})
	SMember(FString)                                   JamLinkCode                                                 OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	SMember(FString)                                   McpTemplateId                                               OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	SMember(FString)                                   AlbumArtUrl                                                 OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FString)                                   MidiUrl                                                     OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	CMember(TArray<char>)                              MidiData                                                    OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FString)                                   LipSyncUrl                                                  OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	CMember(TArray<char>)                              LipSyncData                                                 OFFSET(get<T>, {0xE0, 16, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTagContainer                                        OFFSET(getStruct<T>, {0xF0, 32, 0, 0})
	SMember(FSparksSongQuicksilverInfo)                QuicksilverInfo                                             OFFSET(getStruct<T>, {0x110, 48, 0, 0})
	SMember(FSparksSongIntensityInfo)                  Intensities                                                 OFFSET(getStruct<T>, {0x140, 32, 0, 0})
	DMember(bool)                                      bValid                                                      OFFSET(get<bool>, {0x160, 1, 0, 0})
};

/// Enum /Script/SparksCMS.ESparksSongAgeRating
/// Size: 0x05
enum ESparksSongAgeRating : uint8_t
{
	ESparksSongAgeRating__None                                                       = 0,
	ESparksSongAgeRating__E                                                          = 1,
	ESparksSongAgeRating__E10p                                                       = 2,
	ESparksSongAgeRating__T                                                          = 3,
	ESparksSongAgeRating__ESparksSongAgeRating_MAX                                   = 4
};

/// Enum /Script/SparksCMS.ESparksGenre
/// Size: 0x11
enum ESparksGenre : uint8_t
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
enum ESongSortMethod : uint8_t
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
enum ESongSortDirection : uint8_t
{
	ESongSortDirection__Ascending                                                    = 0,
	ESongSortDirection__Descending                                                   = 1,
	ESongSortDirection__None                                                         = 2,
	ESongSortDirection__ESongSortDirection_MAX                                       = 3
};

