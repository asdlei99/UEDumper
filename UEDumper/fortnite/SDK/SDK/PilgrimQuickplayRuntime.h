
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
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayStateMachine
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: PilgrimCoreRuntime
/// dependency: PlayspaceSystem
/// dependency: ReplicationGraph
/// dependency: SparksCameraDirectorRuntime
/// dependency: SparksCosmeticsRuntime
/// dependency: SparksMusicPlayspaceRuntime

/// Enum /Script/PilgrimQuickplayRuntime.EPilgrimPreloaderSongPosition
/// Size: 0x03
enum class EPilgrimPreloaderSongPosition : uint8_t
{
	EPilgrimPreloaderSongPosition__Current                                           = 0,
	EPilgrimPreloaderSongPosition__Next                                              = 1,
	EPilgrimPreloaderSongPosition__EPilgrimPreloaderSongPosition_MAX                 = 2
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimGreenRoomLayoutSwitcher
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UPilgrimGreenRoomLayoutSwitcher : public UPlayspaceComponent
{ 
public:
	int32_t                                            CurrentLayout;                                              // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00A4   (0x0004)  MISSED
	class UEnum*                                       LayoutEnumType;                                             // 0x00A8   (0x0008)  


	/// Functions
	// Function /Script/PilgrimQuickplayRuntime.PilgrimGreenRoomLayoutSwitcher.SetLayout
	// void SetLayout(int32_t NewLayout);                                                                                    // [0xb383828] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimGreenRoomLayoutSwitcher.OnRep_CurrentLayout
	// void OnRep_CurrentLayout();                                                                                           // [0xb381610] Final|Native|Private 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimGreenRoomLayoutSwitcher.OnLayoutChanged
	// void OnLayoutChanged(int32_t NewLayout);                                                                              // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimGreenRoomLayoutSwitcher.CycleLayout
	// void CycleLayout();                                                                                                   // [0xb3802c4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimLeaderboardScoreReporter
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPilgrimLeaderboardScoreReporter : public UPlayspaceComponent
{ 
public:
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimPawnComponent
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPilgrimPawnComponent : public UFortPawnComponent
{ 
public:
	bool                                               bInteractionEffectsEnabled;                                 // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A9   (0x0007)  MISSED


	/// Functions
	// Function /Script/PilgrimQuickplayRuntime.PilgrimPawnComponent.SetInteractionEffectsEnabled
	// void SetInteractionEffectsEnabled(bool bEnable);                                                                      // [0xb383798] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimPawnComponent.GetInteractionEffectsEnabled
	// bool GetInteractionEffectsEnabled();                                                                                  // [0xb2dfbe4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimPlayspaceComponent_IntroDirector
/// Size: 0x00F8 (0x0000F8 - 0x0001F0)
class UPilgrimPlayspaceComponent_IntroDirector : public UFortPlayspaceComponent
{ 
public:
	TArray<class UFortMontageItemDefinitionBase*>      GuitarSpotlights;                                           // 0x00F8   (0x0010)  
	TArray<class UFortMontageItemDefinitionBase*>      DrumSpotlights;                                             // 0x0108   (0x0010)  
	TArray<class UFortMontageItemDefinitionBase*>      BassSpotlights;                                             // 0x0118   (0x0010)  
	TArray<class UFortMontageItemDefinitionBase*>      MicSpotlights;                                              // 0x0128   (0x0010)  
	TArray<class UFortMontageItemDefinitionBase*>      KeytarSpotlights;                                           // 0x0138   (0x0010)  
	unsigned char                                      UnknownData00_6[0xA8];                                      // 0x0148   (0x00A8)  MISSED


	/// Functions
	// Function /Script/PilgrimQuickplayRuntime.PilgrimPlayspaceComponent_IntroDirector.StartPlayerIntro
	// void StartPlayerIntro(class APlayerState* PlayerState);                                                               // [0xb384230] Final|Native|Private|BlueprintCallable|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimPlayspaceComponent_IntroDirector.RequestNextMontageForInstrument
	// void RequestNextMontageForInstrument(ESparksInstrumentType InstrumentType, class AFortPlayerPawn* PlayerPawn, int32_t PlayerIndex); // [0xb381944] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimPlayspaceComponent_IntroDirector.OnSpotlightMontageLoaded
	// void OnSpotlightMontageLoaded(int32_t PlayerIndex, class UAnimMontage* LoadedMontage);                                // [0xb38187c] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimPlayspaceComponent_IntroDirector.HasSpotlightMontageLoadFinished
	// bool HasSpotlightMontageLoadFinished(int32_t PlayerIndex);                                                            // [0xb381488] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimPlayspaceComponent_IntroDirector.GetFloatingPawnFixIntervalSeconds
	// float GetFloatingPawnFixIntervalSeconds();                                                                            // [0xb380500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimPlayspaceComponent_IntroDirector.EnqueueSpotlightMontages
	// bool EnqueueSpotlightMontages(ESparksInstrumentType InstrumentType);                                                  // [0xb380368] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimPlayspaceComponent_IntroDirector.EnableFloatingPawnFix
	// bool EnableFloatingPawnFix();                                                                                         // [0xb380314] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimPlayspaceComponent_IntroDirector.ClearSpotlightMontageHandles
	// void ClearSpotlightMontageHandles();                                                                                  // [0xb3801e8] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimPlayspaceComponent_ServerExpiration
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UPilgrimPlayspaceComponent_ServerExpiration : public UPlayspaceComponent_ServerExpiration
{ 
public:
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent
/// Size: 0x0078 (0x0000B0 - 0x000128)
class UPilgrimQuickplayBandStateComponent : public UPilgrimCoreBandStateComponent
{ 
public:
	SDK_UNDEFINED(16,15204) /* FMulticastInlineDelegate */ __um(OnSongReplayingChanged);                           // 0x00B0   (0x0010)  
	class UPilgrimPremadeSetlist*                      SetlistVoteWinner;                                          // 0x00C0   (0x0008)  
	int32_t                                            CurrentSetlistIndex;                                        // 0x00C8   (0x0004)  
	bool                                               bIsReplayingPreviousSong;                                   // 0x00CC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00CD   (0x0003)  MISSED
	SDK_UNDEFINED(80,15205) /* TMap<int32_t, FPilgrimQuickplaySongResultData> */ __um(SetlistResultMap);           // 0x00D0   (0x0050)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0120   (0x0008)  MISSED


	/// Functions
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent.SongReplayingChanged__DelegateSignature
	// void SongReplayingChanged__DelegateSignature(bool bIsReplaying);                                                      // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent.ServerResetSetlistIndex
	// void ServerResetSetlistIndex();                                                                                       // [0xb3831c0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent.ServerAdvanceSetlistIndex
	// void ServerAdvanceSetlistIndex();                                                                                     // [0xb3831ac] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent.OnRep_SetlistVoteWinner
	// void OnRep_SetlistVoteWinner(class UPilgrimPremadeSetlist* PrevSetlist);                                              // [0xb38177c] Final|Native|Private 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent.OnRep_IsReplayingPreviousSong
	// void OnRep_IsReplayingPreviousSong();                                                                                 // [0xb3816c8] Final|Native|Private 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent.OnRep_CurrentSetlistIndex
	// void OnRep_CurrentSetlistIndex(int32_t PrevSetlistIndex);                                                             // [0xb381628] Final|Native|Private 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent.IsReplayingPreviousSong
	// bool IsReplayingPreviousSong();                                                                                       // [0x9a40754] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent.GetVotersForSetlist
	// TArray<APlayerState*> GetVotersForSetlist(class UPilgrimPremadeSetlist* Setlist);                                     // [0xb3813e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent.GetVoteCountForSetlist
	// int32_t GetVoteCountForSetlist(class UPilgrimPremadeSetlist* Setlist);                                                // [0xb381348] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent.GetSetlistVoteWinner
	// class UPilgrimPremadeSetlist* GetSetlistVoteWinner();                                                                 // [0x65f0b14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent.GetPlayersInBandByController
	// TArray<APlayerState*> GetPlayersInBandByController(class APlayerController* Controller);                              // [0xb380950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent.GetPlayersInBand
	// TArray<APlayerState*> GetPlayersInBand(char Team);                                                                    // [0xb3808ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent.GetCurrentSetlistLength
	// int32_t GetCurrentSetlistLength();                                                                                    // [0xb3804dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent.GetCurrentSetlistIndex
	// int32_t GetCurrentSetlistIndex();                                                                                     // [0x6171360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent.GetCurrentSetlist
	// TScriptInterface<Class> GetCurrentSetlist();                                                                          // [0xb3804a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent.GetBandState
	// class UPilgrimQuickplayBandStateComponent* GetBandState(class AActor* ContextActor);                                  // [0xb3803f4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent.AreAllPlayersReady
	// bool AreAllPlayersReady();                                                                                            // [0xb380144] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayCameraDataSource
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UPilgrimQuickplayCameraDataSource : public USparksCameraPluginDataProvider
{ 
public:
	bool                                               bCutOnMeasuresInsteadOfBeats;                               // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B1   (0x0003)  MISSED
	SDK_UNDEFINED(8,15206) /* TWeakObjectPtr<UPilgrimGame*> */ __um(PilgrimGame);                                  // 0x00B4   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
};

/// Struct /Script/PilgrimQuickplayRuntime.PilgrimQuickplaySongResultBandData
/// Size: 0x001C (0x000000 - 0x00001C)
struct FPilgrimQuickplaySongResultBandData
{ 
	char                                               Team;                                                       // 0x0000   (0x0001)  
	char                                               NumTeamMembers;                                             // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	int32_t                                            BandScore;                                                  // 0x0004   (0x0004)  
	int32_t                                            BandModifierBonus;                                          // 0x0008   (0x0004)  
	int32_t                                            BandInstrumentVarietyBonus;                                 // 0x000C   (0x0004)  
	int32_t                                            BandStars;                                                  // 0x0010   (0x0004)  
	int32_t                                            BaseBandScore;                                              // 0x0014   (0x0004)  
	int32_t                                            BandOverdriveBonus;                                         // 0x0018   (0x0004)  
};

/// Struct /Script/PilgrimQuickplayRuntime.PilgrimQuickplaySongResultPlayerData
/// Size: 0x0080 (0x000000 - 0x000080)
struct FPilgrimQuickplaySongResultPlayerData
{ 
	SDK_UNDEFINED(16,15207) /* FString */              __um(PlayerName);                                           // 0x0000   (0x0010)  
	FUniqueNetIdRepl                                   PlayerAccountId;                                            // 0x0010   (0x0030)  
	EPilgrimTrackType                                  InstrumentType;                                             // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	FGameplayTagContainer                              InstrumentTags;                                             // 0x0048   (0x0020)  
	int32_t                                            PlayerStars;                                                // 0x0068   (0x0004)  
	int32_t                                            PlayerScore;                                                // 0x006C   (0x0004)  
	EPilgrimSongDifficulty                             PlayerDifficulty;                                           // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0071   (0x0003)  MISSED
	int32_t                                            SongTrackDifficulty;                                        // 0x0074   (0x0004)  
	bool                                               Team : 1;                                                   // 0x0078:0 (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Struct /Script/PilgrimQuickplayRuntime.PilgrimQuickplaySongResultData
/// Size: 0x0070 (0x000000 - 0x000070)
struct FPilgrimQuickplaySongResultData
{ 
	SDK_UNDEFINED(24,15208) /* FText */                __um(SongName);                                             // 0x0000   (0x0018)  
	FGameplayTagContainer                              SongTags;                                                   // 0x0018   (0x0020)  
	FName                                              SongShortName;                                              // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<FPilgrimQuickplaySongResultBandData>        BandData;                                                   // 0x0040   (0x0010)  
	TArray<FPilgrimQuickplaySongResultPlayerData>      PlayerData;                                                 // 0x0050   (0x0010)  
	char                                               Team;                                                       // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	int32_t                                            LocalPlayerBandDataIndex;                                   // 0x0064   (0x0004)  
	int32_t                                            LocalPlayerDataIndex;                                       // 0x0068   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/PilgrimQuickplayRuntime.PilgrimHistogramSample
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPilgrimHistogramSample
{ 
	int32_t                                            OffsetMs;                                                   // 0x0000   (0x0004)  
	int32_t                                            NumSamples;                                                 // 0x0004   (0x0004)  
};

/// Struct /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerPerformanceData
/// Size: 0x0048 (0x000000 - 0x000048)
struct FPilgrimQuickplayPlayerPerformanceData
{ 
	float                                              Accuracy;                                                   // 0x0000   (0x0004)  
	float                                              AverageOffset;                                              // 0x0004   (0x0004)  
	float                                              StandardDeviation;                                          // 0x0008   (0x0004)  
	bool                                               FullCombo;                                                  // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	int32_t                                            NotesHit;                                                   // 0x0010   (0x0004)  
	int32_t                                            NotesPassed;                                                // 0x0014   (0x0004)  
	int32_t                                            NotesMissed;                                                // 0x0018   (0x0004)  
	int32_t                                            TotalNotes;                                                 // 0x001C   (0x0004)  
	int32_t                                            LongestStreak;                                              // 0x0020   (0x0004)  
	float                                              TimeInOverdriveMs;                                          // 0x0024   (0x0004)  
	TArray<FPilgrimHistogramSample>                    HistogramSamples;                                           // 0x0028   (0x0010)  
	TArray<int32_t>                                    AccuracyTierCounts;                                         // 0x0038   (0x0010)  
};

/// Struct /Script/PilgrimQuickplayRuntime.PilgrimQuickplaySetlistResultData
/// Size: 0x00C0 (0x000000 - 0x0000C0)
struct FPilgrimQuickplaySetlistResultData
{ 
	int32_t                                            SetlistIndex;                                               // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FPilgrimQuickplaySongResultData                    SongResultData;                                             // 0x0008   (0x0070)  
	FPilgrimQuickplayPlayerPerformanceData             PerformanceData;                                            // 0x0078   (0x0048)  
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayDeveloperSettings
/// Size: 0x00B8 (0x000030 - 0x0000E8)
class UPilgrimQuickplayDeveloperSettings : public UDeveloperSettings
{ 
public:
	bool                                               OverrideGamestateSettings;                                  // 0x0030   (0x0001)  
	bool                                               SongGameplay_SkipToGreenRoom;                               // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0032   (0x0002)  MISSED
	float                                              SongResults_TransitionTimeInSeconds;                        // 0x0034   (0x0004)  
	bool                                               SongResults_OverrideSongData;                               // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	FPilgrimQuickplaySongResultData                    SongResults_SongData;                                       // 0x0040   (0x0070)  
	bool                                               SongResults_OverrideSetlistResultData;                      // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00B1   (0x0007)  MISSED
	TArray<FPilgrimQuickplaySetlistResultData>         SongResults_SetlistResultsData;                             // 0x00B8   (0x0010)  
	bool                                               Gameplay_ShowSongStats;                                     // 0x00C8   (0x0001)  
	bool                                               SongResults_SetlistChallengeOverrideConsole;                // 0x00C9   (0x0001)  
	bool                                               SongResults_SetlistChallengeDebug;                          // 0x00CA   (0x0001)  
	bool                                               SongResults_SetlistChallengeFilenameAbsolute;               // 0x00CB   (0x0001)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	SDK_UNDEFINED(16,15209) /* FString */              __um(SongResults_SetlistChallengeJSONDumpFilename);         // 0x00D0   (0x0010)  
	bool                                               SongResults_SetlistChallengeIncludeHistogramData;           // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x00E1   (0x0007)  MISSED
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayEmoteBPFL
/// Size: 0x0000 (0x000028 - 0x000028)
class UPilgrimQuickplayEmoteBPFL : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayEmoteBPFL.GetEmoteActionBinding
	// void GetEmoteActionBinding(FString EmoteTemplateID, FEmoteActionBinding& OutCreatedEmote);                            // [0xb0a2abc] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerSpawningComponent
/// Size: 0x0020 (0x0000B0 - 0x0000D0)
class UPilgrimQuickplayPlayerSpawningComponent : public UPlayspaceComponent_PlayerSpawning
{ 
public:
	FGameplayTagContainer                              PregameSpawnTags;                                           // 0x00B0   (0x0020)  
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent
/// Size: 0x00C8 (0x0000B0 - 0x000178)
class UPilgrimQuickplayPlayerStateComponent : public UPilgrimCorePlayerStateComponent
{ 
public:
	class UPilgrimSongMetadata*                        SongVote;                                                   // 0x00B0   (0x0008)  
	class UPilgrimPremadeSetlist*                      SetlistVote;                                                // 0x00B8   (0x0008)  
	SDK_UNDEFINED(80,15210) /* TMap<int32_t, FPilgrimPersonalBestHistoryRpl> */ __um(SetlistHighscoreMap);         // 0x00C0   (0x0050)  
	SDK_UNDEFINED(80,15211) /* TMap<int32_t, UPilgrimQuickplaySetlistResultProxyInstance*> */ __um(SetlistResultMap); // 0x0110   (0x0050)  
	float                                              CloseupCameraTime;                                          // 0x0160   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0164   (0x0004)  MISSED
	SDK_UNDEFINED(16,15212) /* TArray<TScriptInterface<Class>> */ __um(GrantedQuests);                             // 0x0168   (0x0010)  


	/// Functions
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.SetSongVote
	// void SetSongVote(class UPilgrimSongMetadata* PlayerChosenSong);                                                       // [0xb3841b0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.SetSongResultData
	// void SetSongResultData(FPilgrimQuickplaySongResultData& NewSongResultData);                                           // [0xb38410c] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.SetSetlistVote
	// void SetSetlistVote(class UPilgrimPremadeSetlist* PlayerChosenSetlist);                                               // [0xb38408c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.SetReachedNewHighscore
	// void SetReachedNewHighscore(int32_t TotalScore, int32_t DeltaScore, EPilgrimPersonalBestType BestType);               // [0xb383f94] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.SetPerformanceData
	// void SetPerformanceData(FPilgrimQuickplayPlayerPerformanceData& NewPerformanceData);                                  // [0xb3838a8] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.SetHighscore
	// void SetHighscore(FPilgrimPersonalBestResultRpl& Highscore, int32_t SetlistIndex, bool bLoaded);                      // [0xb3834fc] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.SetCloseupCameraTime
	// void SetCloseupCameraTime(float TotalTime);                                                                           // [0x9160734] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.ServerSetHighscore
	// void ServerSetHighscore(FPilgrimPersonalBestResultRpl Highscore, int32_t SetlistIndex, bool bLoaded);                 // [0xb3831d4] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.Server_ResetDefaultQuests
	// void Server_ResetDefaultQuests();                                                                                     // [0x9aefd20] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.Server_GrantDefaultQuests
	// void Server_GrantDefaultQuests();                                                                                     // [0x134b420] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.SendToServerPerformanceData
	// void SendToServerPerformanceData(FPilgrimQuickplayPlayerPerformanceData NewPerformanceData);                          // [0xb382a0c] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.SendToServerAllIntrosFinished
	// void SendToServerAllIntrosFinished(class UPilgrimQuickplayState_Intro* IntroState);                                   // [0x6193dc4] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.SendToClientsSongResultData
	// void SendToClientsSongResultData(int32_t SetlistIndex, FPilgrimQuickplaySongResultData NewPerformanceData);           // [0xb38286c] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.SendToClientsResetSetlistResultData
	// void SendToClientsResetSetlistResultData();                                                                           // [0x378c058] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.SendToClientsPerformanceData
	// void SendToClientsPerformanceData(int32_t SetlistIndex, FPilgrimQuickplayPlayerPerformanceData NewPerformanceData);   // [0xb38208c] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.SendHighscoreToServer
	// void SendHighscoreToServer(FPilgrimPersonalBestResult& Highscore, int32_t SetlistIndex, bool bLoaded);                // [0xb381db8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.ResetSetlistResultData
	// void ResetSetlistResultData();                                                                                        // [0xb381da4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.OnRep_SongVote
	// void OnRep_SongVote(class UPilgrimSongMetadata* PrevSongVote);                                                        // [0xb3817fc] Final|Native|Private 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.OnRep_SetlistVote
	// void OnRep_SetlistVote(class UPilgrimPremadeSetlist* PrevSetlistVote);                                                // [0xb3816fc] Final|Native|Private 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.MulticastBroadcastNewHighscore
	// void MulticastBroadcastNewHighscore(int32_t TotalScore, int32_t DeltaScore, EPilgrimPersonalBestType BestType);       // [0xb381514] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.GetSongVote
	// class UPilgrimSongMetadata* GetSongVote(class APlayerState* PlayerState);                                             // [0xb3812b4] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.GetSongResultData
	// FPilgrimQuickplaySongResultData GetSongResultData();                                                                  // [0xb381288] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.GetSetlistResultProxies
	// void GetSetlistResultProxies(TArray<UPilgrimQuickplaySetlistResultProxyInstance*>& SetlistProxy);                     // [0xb380bc8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.GetSetlistResultDataByIndex
	// FPilgrimQuickplaySetlistResultData GetSetlistResultDataByIndex(int32_t SetlistIndex);                                 // [0xb380b14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.GetReachedNewHighscore
	// bool GetReachedNewHighscore(EPilgrimPersonalBestType BestType, int32_t SetlistIndex);                                 // [0xb380a54] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.GetPilgrimQuickplayPlayerStateComponent
	// class UPilgrimQuickplayPlayerStateComponent* GetPilgrimQuickplayPlayerStateComponent(class APlayerState* PlayerState); // [0xb380820] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.GetPerformanceData
	// FPilgrimQuickplayPlayerPerformanceData GetPerformanceData();                                                          // [0xb3807f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.GetMainStateMachine
	// class UGameplayStateMachine* GetMainStateMachine();                                                                   // [0xb3807d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.GetHighscoreResult
	// bool GetHighscoreResult(FPilgrimPersonalBestResultRpl& OutResult, int32_t SetlistIndex, bool bLoaded);                // [0xb380530] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.GetCurrentSongVote
	// class UPilgrimSongMetadata* GetCurrentSongVote();                                                                     // [0x3033778] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.GetCurrentSetlistVote
	// class UPilgrimPremadeSetlist* GetCurrentSetlistVote();                                                                // [0x7a5f454] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.GetCloseupCameraTime
	// float GetCloseupCameraTime();                                                                                         // [0x98c537c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.GetBandState
	// class UPilgrimQuickplayBandStateComponent* GetBandState();                                                            // [0xb380484] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.ClientMatchRecorded
	// void ClientMatchRecorded(int32_t SetlistIndex, bool bIsSoloMatch);                                                    // [0xb3801fc] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.BroadcastEvent_SongResultDataChanged
	// void BroadcastEvent_SongResultDataChanged(int32_t SetlistIndex);                                                      // [0xb380168] Final|Native|Private 
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayspace
/// Size: 0x0030 (0x0007D0 - 0x000800)
class APilgrimQuickplayPlayspace : public APilgrimPlayspace
{ 
public:
	class UPilgrimStandinDirector*                     StandinDirector;                                            // 0x07D0   (0x0008)  
	class UClass*                                      PilgrimQuickplayStateMachineClass;                          // 0x07D8   (0x0008)  
	class UGameplayStateMachineManager*                StateMachineManager;                                        // 0x07E0   (0x0008)  
	class UGameplayStateMachine*                       MainStateMachine;                                           // 0x07E8   (0x0008)  
	class UPilgrimQuickplayBandStateComponent*         BandState;                                                  // 0x07F0   (0x0008)  
	class UPilgrimQuickplayCameraDataSource*           CameraDataSource;                                           // 0x07F8   (0x0008)  


	/// Functions
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayspace.HandleDirectorStopEvent
	// void HandleDirectorStopEvent(FSparksCommonStopCameraDirectorEvent& Payload);                                          // [0x3d1d968] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayspace.HandleDirectorStartEvent
	// void HandleDirectorStartEvent(FSparksCommonStartCameraDirectorEvent& Payload);                                        // [0x3d1d968] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayspace.HandleDirectorResetEvent
	// void HandleDirectorResetEvent(FSparksCommonResetCameraDirectorEvent& Payload);                                        // [0x3d1d968] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayspace.GetPilgrimQuickplayStateMachine
	// class UPilgrimQuickplayStateMachine* GetPilgrimQuickplayStateMachine();                                               // [0xb38522c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayspace.GetIsSinglePlayerGame
	// bool GetIsSinglePlayerGame();                                                                                         // [0xb3851b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayspace.GetActivePilgrimStateId
	// EPilgrimQuickplayState GetActivePilgrimStateId();                                                                     // [0xb38504c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayspace.GetActivePilgrimQuickplayState
	// class UPilgrimQuickplayStateBase* GetActivePilgrimQuickplayState();                                                   // [0xb38500c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayspace.ForceActiveCameraDirector
	// void ForceActiveCameraDirector();                                                                                     // [0xb384ff8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayspaceComponent_PlayerManager
/// Size: 0x0010 (0x0000F8 - 0x000108)
class UPilgrimQuickplayPlayspaceComponent_PlayerManager : public UFortPlayspaceComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00F8   (0x0010)  MISSED


	/// Functions
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayspaceComponent_PlayerManager.BP_OnAppResumed
	// void BP_OnAppResumed(float ElapsedTimeSeconds);                                                                       // [0x3d1d968] Event|Protected|BlueprintEvent 
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplaySetlistResultProxyInstance
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class UPilgrimQuickplaySetlistResultProxyInstance : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FPilgrimQuickplaySetlistResultData                 ResultData;                                                 // 0x0028   (0x00C0)  
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateBase
/// Size: 0x0060 (0x000078 - 0x0000D8)
class UPilgrimQuickplayStateBase : public UGameplayState
{ 
public:
	class UFortAbilitySet*                             AbilitySetForState;                                         // 0x0078   (0x0008)  
	SDK_UNDEFINED(80,15213) /* TMap<TWeakObjectPtr<APlayerState*>, FFortAbilitySetHandle> */ __um(GrantedAbilitySets); // 0x0080   (0x0050)  
	class UFortInputMappingContext*                    InputMappingContext;                                        // 0x00D0   (0x0008)  


	/// Functions
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateBase.MarkStateDone
	// bool MarkStateDone();                                                                                                 // [0xb38547c] Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateBase.GetPilgrimStateMachine
	// class UPilgrimQuickplayStateMachine* GetPilgrimStateMachine();                                                        // [0xb385318] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateBase.GetPilgrimStateId
	// EPilgrimQuickplayState GetPilgrimStateId();                                                                           // [0x63da4fc] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateBase.GetPilgrimPlayspace
	// class APilgrimQuickplayPlayspace* GetPilgrimPlayspace();                                                              // [0xb385208] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateBase.GetEventRouter
	// class UGameplayEventRouterComponent* GetEventRouter();                                                                // [0xb385170] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateBPFL
/// Size: 0x0000 (0x000028 - 0x000028)
class UPilgrimQuickplayStateBPFL : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateBPFL.GetStateTag
	// FGameplayTag GetStateTag(EPilgrimQuickplayState& State);                                                              // [0xb3853d8] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateBPFL.GetPilgrimState
	// EPilgrimQuickplayState GetPilgrimState(FGameplayTag& tag);                                                            // [0xb385250] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateMachine
/// Size: 0x0010 (0x0000C8 - 0x0000D8)
class UPilgrimQuickplayStateMachine : public UGameplayStateMachine
{ 
public:
	TArray<class UFortQuestItemDefinition*>            GrantedQuests;                                              // 0x00C8   (0x0010)  


	/// Functions
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateMachine.TeleportAllPlayers
	// void TeleportAllPlayers(FGameplayTagContainer& TeleportTagRequirements);                                              // [0xb385a74] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateMachine.PrepareStageForPlayer
	// void PrepareStageForPlayer(class AFortPlayerPawn* Pawn, FVector& TeleportLocation, FRotator& TeleportRotation);       // [0x3d1d968] BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateMachine.GetPlayerPawnsInPlayspace
	// void GetPlayerPawnsInPlayspace(TArray<AFortPlayerPawn*>& PlayerPawns);                                                // [0xb38533c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateMachine.GetEventRouter
	// class UGameplayEventRouterComponent* GetEventRouter();                                                                // [0xb385194] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateMachine.GetDailyQuests
	// void GetDailyQuests(TArray<UFortQuestItemDefinition*>& OutDailyQuests);                                               // [0xb3850d4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateMachine.GetActivePilgrimStateObject
	// class UPilgrimQuickplayStateBase* GetActivePilgrimStateObject();                                                      // [0xb3850b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateMachine.GetActivePilgrimStateId
	// EPilgrimQuickplayState GetActivePilgrimStateId();                                                                     // [0xb38508c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateMachine.CleanUpStageForPlayer
	// void CleanUpStageForPlayer(class AFortPlayerPawn* Pawn);                                                              // [0x3d1d968] BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_Intro
/// Size: 0x00A0 (0x0000D8 - 0x000178)
class UPilgrimQuickplayState_Intro : public UPilgrimQuickplayStateBase
{ 
public:
	FGameplayTagContainer                              TeleportTagRequirements;                                    // 0x00D8   (0x0020)  
	float                                              CameraWaitTime;                                             // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x7C];                                      // 0x00FC   (0x007C)  MISSED


	/// Functions
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_Intro.UpdateCameraWaitTime
	// void UpdateCameraWaitTime(float NewWaitTime);                                                                         // [0xb385b2c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_Loading
/// Size: 0x0008 (0x0000D8 - 0x0000E0)
class UPilgrimQuickplayState_Loading : public UPilgrimQuickplayStateBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00D8   (0x0008)  MISSED
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_Outro
/// Size: 0x0010 (0x0000D8 - 0x0000E8)
class UPilgrimQuickplayState_Outro : public UPilgrimQuickplayStateBase
{ 
public:
	float                                              StateTTL;                                                   // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x00DC   (0x000C)  MISSED
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_Pregame
/// Size: 0x0040 (0x0000D8 - 0x000118)
class UPilgrimQuickplayState_Pregame : public UPilgrimQuickplayStateBase
{ 
public:
	FGameplayTagContainer                              TeleportTagRequirements;                                    // 0x00D8   (0x0020)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x00F8   (0x0020)  MISSED
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_PreIntro
/// Size: 0x0010 (0x0000D8 - 0x0000E8)
class UPilgrimQuickplayState_PreIntro : public UPilgrimQuickplayStateBase
{ 
public:
	float                                              StateTTLSeconds;                                            // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x00DC   (0x000C)  MISSED
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SetResults
/// Size: 0x0000 (0x0000D8 - 0x0000D8)
class UPilgrimQuickplayState_SetResults : public UPilgrimQuickplayStateBase
{ 
public:
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SongGameplay
/// Size: 0x0048 (0x0000D8 - 0x000120)
class UPilgrimQuickplayState_SongGameplay : public UPilgrimQuickplayStateBase
{ 
public:
	FGameplayTagContainer                              StageTeleportTagRequirements;                               // 0x00D8   (0x0020)  
	class UClass*                                      PilgrimMusicBattleInstanceClass;                            // 0x00F8   (0x0008)  
	bool                                               bHaveTriggeredMBIFinished;                                  // 0x0100   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1F];                                      // 0x0101   (0x001F)  MISSED


	/// Functions
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SongGameplay.OnMusicBattleStoppedEarly
	// void OnMusicBattleStoppedEarly(EMusicBattleEndReason EndReason);                                                      // [0xb385524] Final|Native|Protected 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SongGameplay.OnMusicBattleFinished
	// void OnMusicBattleFinished(EMusicBattleEndReason EndReason);                                                          // [0xb3854a4] Final|Native|Protected 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SongGameplay.GetPilgrimMusicBattleInstances
	// TArray<APilgrimMusicBattleInstance*> GetPilgrimMusicBattleInstances();                                                // [0xb3851dc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SongGameplay.BuildSongResultData
	// void BuildSongResultData();                                                                                           // [0xb384fe4] Final|Native|Protected 
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SongResults
/// Size: 0x0128 (0x0000D8 - 0x000200)
class UPilgrimQuickplayState_SongResults : public UPilgrimQuickplayStateBase
{ 
public:
	double                                             ServerEndTime;                                              // 0x00D8   (0x0008)  
	FScalableFloat                                     WaitTimeWithMoreSongs;                                      // 0x00E0   (0x0028)  
	FScalableFloat                                     WaitTimeWithNoMoreSongs;                                    // 0x0108   (0x0028)  
	FScalableFloat                                     WaitTimeAllPlayersReady;                                    // 0x0130   (0x0028)  
	FTimerHandle                                       WaitTimerHandle;                                            // 0x0158   (0x0008)  
	SDK_UNDEFINED(80,15214) /* TSet<TWeakObjectPtr<AFortPlayerStateAthena*>> */ __um(PlayerList);                  // 0x0160   (0x0050)  
	SDK_UNDEFINED(80,15215) /* TSet<TWeakObjectPtr<AFortPlayerStateAthena*>> */ __um(ReadyPlayers);                // 0x01B0   (0x0050)  


	/// Functions
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SongResults.ServerSetEndTime
	// void ServerSetEndTime(float ServerWorldEndTimeSeconds);                                                               // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SongResults.ServerRecievedPlayPreviousSongFromClient
	// void ServerRecievedPlayPreviousSongFromClient(class UPilgrimPlayerControllerComponent* ControllerComponent, EPilgrimStateMachineMessage StateMachineMessage); // [0xb385794] Final|Native|Protected 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SongResults.OnRep_ServerEndTime
	// void OnRep_ServerEndTime();                                                                                           // [0xb38565c] Final|Native|Protected 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SongResults.OnPlayerDisconnected
	// void OnPlayerDisconnected(class AFortPlayerStateAthena* PlayerState, bool bIsDisconnected);                           // [0xb3855a4] Final|Native|Protected 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SongResults.HandleTimerFinished
	// void HandleTimerFinished();                                                                                           // [0x625f704] Native|Event|Protected|BlueprintEvent 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SongResults.GoToNextState
	// void GoToNextState();                                                                                                 // [0xb385468] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SongResults.ClientUpdateStateEndTime
	// void ClientUpdateStateEndTime(float ServerWorldEndTimeSeconds);                                                       // [0x3d1d968] Event|Protected|BlueprintEvent 
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplaySuspendHandleComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UPilgrimQuickplaySuspendHandleComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x00A0   (0x0028)  MISSED


	/// Functions
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplaySuspendHandleComponent.ServerSyncHeartbeatMessageReceived
	// void ServerSyncHeartbeatMessageReceived(class UPilgrimPlayerControllerComponent* PilgrimPC);                          // [0xb3859f4] Final|Native|Protected 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplaySuspendHandleComponent.ServerOnTimedInputReceived
	// void ServerOnTimedInputReceived(class UPilgrimPlayerControllerComponent* PilgrimPC, FPilgrimTimedInput& TimedInput);  // [0xb3856b8] Final|Native|Protected|HasOutParms 
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimStandinDirector
/// Size: 0x0090 (0x0000F8 - 0x000188)
class UPilgrimStandinDirector : public UFortPlayspaceComponent
{ 
public:
	SDK_UNDEFINED(80,15216) /* TMap<ESparksInstrumentType, UFortWeaponItemDefinition*> */ __um(InstrumentToWeaponMap); // 0x00F8   (0x0050)  
	class UClass*                                      AISpawnerData;                                              // 0x0148   (0x0008)  
	TArray<FPrimaryAssetId>                            Emotes;                                                     // 0x0150   (0x0010)  
	SDK_UNDEFINED(16,15217) /* TArray<TWeakObjectPtr<AFortPlayerPawnAthena*>> */ __um(SpawnedStandinPawns);        // 0x0160   (0x0010)  
	SDK_UNDEFINED(16,15218) /* TArray<TWeakObjectPtr<AFortPlayerStateAthena*>> */ __um(SpawnedStandinStates);      // 0x0170   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0180   (0x0008)  MISSED


	/// Functions
	// Function /Script/PilgrimQuickplayRuntime.PilgrimStandinDirector.TeleportSpawnedStandins
	// void TeleportSpawnedStandins(TArray<AFortPlayerStart*>& Destinations);                                                // [0xb3a8cb4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimStandinDirector.SetupListeners
	// void SetupListeners(class UGameplayEventRouterComponent* EventRouter);                                                // [0xb3a8bb4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimStandinDirector.GetStandinStates
	// TArray<AFortPlayerStateAthena*> GetStandinStates();                                                                   // [0xb3a8b74] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimStandinDirector.GetStandinPawns
	// TArray<AFortPlayerPawnAthena*> GetStandinPawns();                                                                     // [0xb3a8b38] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimStandinPawnComponent
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UPilgrimStandinPawnComponent : public UPilgrimPawnComponent
{ 
public:
	FGameplayTag                                       SpawninEffect;                                              // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00B4   (0x0004)  MISSED


	/// Functions
	// Function /Script/PilgrimQuickplayRuntime.PilgrimStandinPawnComponent.StartInstrumentAnimation
	// void StartInstrumentAnimation(class APlayerState* PlayerState, class ASparksMusicPlayspace* Playspace);               // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimStandinPawnComponent.SetupListeners
	// void SetupListeners(class UGameplayEventRouterComponent* EventRouter);                                                // [0xb3a8c34] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/PilgrimQuickplayRuntime.BandReplicationGraphNode
/// Size: 0x0010 (0x000050 - 0x000060)
class UBandReplicationGraphNode : public UFortReplicationGraphNode_Custom
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0050   (0x0010)  MISSED
};

/// Struct /Script/PilgrimQuickplayRuntime.PilgrimEvent_Intro_PlayerChanged
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPilgrimEvent_Intro_PlayerChanged
{ 
	class APlayerState*                                PlayerState;                                                // 0x0000   (0x0008)  
};

/// Struct /Script/PilgrimQuickplayRuntime.PilgrimEvent_QuickplayScoring_SongResultPlayerData
/// Size: 0x0080 (0x000000 - 0x000080)
struct FPilgrimEvent_QuickplayScoring_SongResultPlayerData
{ 
	class AFortPlayerPawn*                             ForPlayer;                                                  // 0x0000   (0x0008)  
	int32_t                                            SetlistIndex;                                               // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FPilgrimQuickplaySongResultData                    SongResultData;                                             // 0x0010   (0x0070)  
};

/// Struct /Script/PilgrimQuickplayRuntime.PilgrimEvent_QuickplayScoring_PerformanceDataReceived
/// Size: 0x0058 (0x000000 - 0x000058)
struct FPilgrimEvent_QuickplayScoring_PerformanceDataReceived
{ 
	class AFortPlayerPawn*                             ForPlayer;                                                  // 0x0000   (0x0008)  
	int32_t                                            SetlistIndex;                                               // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FPilgrimQuickplayPlayerPerformanceData             PerformanceData;                                            // 0x0010   (0x0048)  
};

/// Struct /Script/PilgrimQuickplayRuntime.PilgrimEvent_QuickplayScoring_NewHighScoreReceived
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPilgrimEvent_QuickplayScoring_NewHighScoreReceived
{ 
	class AFortPlayerPawn*                             ForPlayer;                                                  // 0x0000   (0x0008)  
	int32_t                                            SetlistIndex;                                               // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/PilgrimQuickplayRuntime.PilgrimEvent_QuickplayScoring_MatchRecorded
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPilgrimEvent_QuickplayScoring_MatchRecorded
{ 
	class AFortPlayerPawn*                             ForPlayer;                                                  // 0x0000   (0x0008)  
	int32_t                                            SetlistIndex;                                               // 0x0008   (0x0004)  
	bool                                               bIsSoloMatch;                                               // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

