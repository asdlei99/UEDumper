
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: DynamicUI
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: PilgrimCoreRuntime
/// dependency: UMG

/// Class /Script/PilgrimQuickplayUI.FestivalPassTrackingWidget
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFestivalPassTrackingWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	DMember(int32_t)                                   CurrentProgress                                             OFFSET(get<int32_t>, {0x2E8, 4, 0, 0})
	CMember(class UFortPersistentResourceItemDefinition*) TrackedItem                                              OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Script/PilgrimQuickplayUI.FestivalPassTrackingWidget.OnProgressUpdated
	// void OnProgressUpdated();                                                                                                // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/PilgrimQuickplayUI.FestivalPassTrackingWidget.HandleMCPInventoryChanged
	// void HandleMCPInventoryChanged(TSet<FString>& ItemChangeFlags, int64_t ProfileRevision);                                 // [0xb3ad9d0] Final|Native|Protected|HasOutParms 
};

/// Class /Script/PilgrimQuickplayUI.PilgrimDynamicUIDirector
/// Size: 0x0028 (0x0002B0 - 0x0002D8)
class APilgrimDynamicUIDirector : public ADynamicUIDirectorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:


	/// Functions
	// Function /Script/PilgrimQuickplayUI.PilgrimDynamicUIDirector.HandleCursorModeChanging
	// void HandleCursorModeChanging(bool bCursorModeEnabled, FName ActionName);                                                // [0xb3ad90c] Final|Native|Protected 
};

/// Class /Script/PilgrimQuickplayUI.PilgrimHUDBase
/// Size: 0x0020 (0x000458 - 0x000478)
class UPilgrimHUDBase : public UFortNullHUD
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1144;

public:
	CMember(TWeakObjectPtr<UClass*>)                   EmotePickerClass                                            OFFSET(get<T>, {0x458, 32, 0, 0})


	/// Functions
	// Function /Script/PilgrimQuickplayUI.PilgrimHUDBase.HandlePickerOpenRequest
	// void HandlePickerOpenRequest(EFortPickerMode Mode, int32_t InitialOption, bool bIgnoreFirstAccept);                      // [0xb3adbac] Final|Native|Private 
};

/// Class /Script/PilgrimQuickplayUI.PilgrimPostGameQuestList
/// Size: 0x0060 (0x0002E8 - 0x000348)
class UPilgrimPostGameQuestList : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	CMember(class UDynamicEntryBox*)                   EntryBox_Quests                                             OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(TMap<FString, TWeakObjectPtr<UPilgrimQuestNotificationEntry*>>) QuestWidgetMap                         OFFSET(get<T>, {0x2F0, 80, 0, 0})
	DMember(bool)                                      bShowCompletedQuests                                        OFFSET(get<bool>, {0x340, 1, 0, 0})
	DMember(bool)                                      bShowUpdatedQuests                                          OFFSET(get<bool>, {0x341, 1, 0, 0})
	DMember(bool)                                      bShowUnchangedQuests                                        OFFSET(get<bool>, {0x342, 1, 0, 0})


	/// Functions
	// Function /Script/PilgrimQuickplayUI.PilgrimPostGameQuestList.SetShowQuests
	// void SetShowQuests(bool bNewShowCompleted, bool bNewShowUpdated, bool bNewShowUnchanged);                                // [0xb3adf9c] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/PilgrimQuickplayUI.PilgrimQuickplayInfoModal
/// Size: 0x0028 (0x000400 - 0x000428)
class UPilgrimQuickplayInfoModal : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1064;

public:
	CMember(class UVerticalBox*)                       Vbox_Panels                                                 OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Close                                                OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Close_Alt                                            OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_CloseTouch                                           OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(class UAthenaScrollBox*)                   ScrollBox_Panels                                            OFFSET(get<T>, {0x420, 8, 0, 0})


	/// Functions
	// Function /Script/PilgrimQuickplayUI.PilgrimQuickplayInfoModal.BP_OnScrollCompleted
	// void BP_OnScrollCompleted(bool bScrolledDown);                                                                           // [0x3d1d968] Event|Protected|BlueprintEvent 
};

/// Class /Script/PilgrimQuickplayUI.PilgrimQuickplaySpotlightList
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UPilgrimQuickplaySpotlightList : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	CMember(TArray<FPilgrimSpotlightCompetition>)      SpotlightCompetitions                                       OFFSET(get<T>, {0x2E8, 16, 0, 0})
	DMember(int32_t)                                   MaxSpotlights                                               OFFSET(get<int32_t>, {0x2F8, 4, 0, 0})
	DMember(int32_t)                                   SelectedIndex                                               OFFSET(get<int32_t>, {0x2FC, 4, 0, 0})
	CMember(class UDynamicEntryBox*)                   EntryBox_SpotlightCompetitions                              OFFSET(get<T>, {0x300, 8, 0, 0})


	/// Functions
	// Function /Script/PilgrimQuickplayUI.PilgrimQuickplaySpotlightList.UpdateSpotlightList
	// void UpdateSpotlightList();                                                                                              // [0xb3ae0dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayUI.PilgrimQuickplaySpotlightList.SetSelectedIndex
	// void SetSelectedIndex(int32_t NewSelectedIndex);                                                                         // [0xb3adf00] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayUI.PilgrimQuickplaySpotlightList.SetMaxSpotlights
	// void SetMaxSpotlights(int32_t NewMaxSpotlights);                                                                         // [0xb3ade7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayUI.PilgrimQuickplaySpotlightList.SelectPrevIndex
	// void SelectPrevIndex();                                                                                                  // [0xb3ade3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayUI.PilgrimQuickplaySpotlightList.SelectNextIndex
	// void SelectNextIndex();                                                                                                  // [0xb3ade0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayUI.PilgrimQuickplaySpotlightList.PopulateSpotlightCompetitionList
	// void PopulateSpotlightCompetitionList();                                                                                 // [0xb3addf8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayUI.PilgrimQuickplaySpotlightList.OnSpotlightListUpdated
	// void OnSpotlightListUpdated();                                                                                           // [0x1f2db84] Native|Event|Protected|BlueprintEvent 
	// Function /Script/PilgrimQuickplayUI.PilgrimQuickplaySpotlightList.GetSelectedIndex
	// int32_t GetSelectedIndex();                                                                                              // [0xb3ad8d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimQuickplayUI.PilgrimQuickplay_UIResultBase
/// Size: 0x0008 (0x000400 - 0x000408)
class UPilgrimQuickplay_UIResultBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1032;

public:
};

/// Class /Script/PilgrimQuickplayUI.PilgrimQuestNotificationEntry
/// Size: 0x0030 (0x0002E8 - 0x000318)
class UPilgrimQuestNotificationEntry : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(class UCommonTextBlock*)                   Text_Description                                            OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_CategoryDisplay                                        OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_FlavorText                                             OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class URichTextBlock*)                     RichText_ObjectivesCompleted                                OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UImage*)                             Image_Completion                                            OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UAthenaChallengeRewards*)            UserWidget_Rewards                                          OFFSET(get<T>, {0x310, 8, 0, 0})


	/// Functions
	// Function /Script/PilgrimQuickplayUI.PilgrimQuestNotificationEntry.InitializeQuestNotification
	// void InitializeQuestNotification(TScriptInterface<Class> InQuest);                                                       // [0xb3adca4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PilgrimQuickplayUI.PilgrimQuickplaySpotlightEntry
/// Size: 0x00A8 (0x0002E8 - 0x000390)
class UPilgrimQuickplaySpotlightEntry : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	DMember(bool)                                      bEmptySpotlight                                             OFFSET(get<bool>, {0x2E8, 1, 1, 0})
	CMember(class UFortLazyImage*)                     Image_SongArt                                               OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_SongTitle                                              OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_SongArtist                                             OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Constraints                                            OFFSET(get<T>, {0x308, 8, 0, 0})
	SMember(FPilgrimSpotlightCompetition)              SpotlightData                                               OFFSET(getStruct<T>, {0x310, 112, 0, 0})
	CMember(TArray<class UPilgrimSongMetadata*>)       SpotlightSongMetadatas                                      OFFSET(get<T>, {0x380, 16, 0, 0})


	/// Functions
	// Function /Script/PilgrimQuickplayUI.PilgrimQuickplaySpotlightEntry.SpotlightEntryUpdated
	// void SpotlightEntryUpdated();                                                                                            // [0xb3ae0c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayUI.PilgrimQuickplaySpotlightEntry.SetEmptySpotlight
	// void SetEmptySpotlight();                                                                                                // [0xb3ade68] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayUI.PilgrimQuickplaySpotlightEntry.OnSpotlightInitialized
	// void OnSpotlightInitialized();                                                                                           // [0x1f2db84] Native|Event|Public|BlueprintEvent 
};

