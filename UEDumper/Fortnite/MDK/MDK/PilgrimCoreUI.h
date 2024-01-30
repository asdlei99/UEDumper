
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: ModelViewViewModel
/// dependency: UMG

/// Class /Script/PilgrimCoreUI.PilgrimPresetSelector
/// Size: 0x0020 (0x000028 - 0x000048)
class UPilgrimPresetSelector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int32_t)                                   NumLanes                                                    OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	CMember(EHardwareDevicePrimaryType)                DeviceType                                                  OFFSET(get<T>, {0x3C, 1, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreUI.PilgrimPresetSelector.OnPresetSelectionRequested
	// void OnPresetSelectionRequested(class APlayerController* Player);                                                        // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/PilgrimCoreUI.PilgrimPresetSelector.OnPresetSelectionCancelled
	// void OnPresetSelectionCancelled();                                                                                       // [0xac61280] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreUI.PilgrimPresetSelector.OnPresetSelected
	// void OnPresetSelected(int32_t SelectedNumLanes, class UFortInputMappingContext* SelectedPreset);                         // [0xac60e48] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PilgrimCoreUI.FortSettingRegistryExtension_Pilgrim
/// Size: 0x0060 (0x000028 - 0x000088)
class UFortSettingRegistryExtension_Pilgrim : public UFortGameSettingRegistryExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(class UClass*)                             PilgrimPresetSelectorClass                                  OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UPilgrimPresetSelector*)             PilgrimPresetSelectorInstance                               OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TMap<int32_t, FString>)                    RhythmLanesToCollectionName                                 OFFSET(get<T>, {0x38, 80, 0, 0})
};

/// Class /Script/PilgrimCoreUI.PilgrimPlayerInfoWidgetBase
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class UPilgrimPlayerInfoWidgetBase : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:


	/// Functions
	// Function /Script/PilgrimCoreUI.PilgrimPlayerInfoWidgetBase.HookUpVoiceIcon
	// void HookUpVoiceIcon(class UFortVoiceChatStatusIcon* Icon, class AFortPlayerStateAthena* Player);                        // [0xac60c40] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PilgrimCoreUI.PilgrimPostGameProgressWidget
/// Size: 0x0000 (0x0002E8 - 0x0002E8)
class UPilgrimPostGameProgressWidget : public UFortSeasonDataWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:


	/// Functions
	// Function /Script/PilgrimCoreUI.PilgrimPostGameProgressWidget.GetTotalXP
	// int32_t GetTotalXP();                                                                                                    // [0xac60bf8] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreUI.PilgrimPostGameProgressWidget.GetMatchXP
	// int32_t GetMatchXP();                                                                                                    // [0xac60ad8] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimCoreUI.PilgrimPresetSwitcher
/// Size: 0x0028 (0x0002E8 - 0x000310)
class UPilgrimPresetSwitcher : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	DMember(int32_t)                                   NumLanes                                                    OFFSET(get<int32_t>, {0x2E8, 4, 0, 0})
	CMember(class UFortSettingsRotator*)               Rotator_Preset                                              OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UCommonButtonLegacy*)                Button_Decrease_Preset                                      OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UCommonButtonLegacy*)                Button_Increase_Preset                                      OFFSET(get<T>, {0x300, 8, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreUI.PilgrimPresetSwitcher.InitializeForLanes
	// void InitializeForLanes(int32_t NewNumLanes, EHardwareDevicePrimaryType DeviceType);                                     // [0xac60d84] Final|Native|Private|BlueprintCallable 
	// Function /Script/PilgrimCoreUI.PilgrimPresetSwitcher.GetSelectedItems
	// void GetSelectedItems(int32_t& OutSelectedLaneNum, class UFortInputMappingContext*& OutInputContext);                    // [0xac60b20] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PilgrimCoreUI.PilgrimSongSortVM
/// Size: 0x0048 (0x000088 - 0x0000D0)
class UPilgrimSongSortVM : public UFortSortItemVM
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/PilgrimCoreUI.PilgrimSongAlphaSortVM
/// Size: 0x0010 (0x0000D0 - 0x0000E0)
class UPilgrimSongAlphaSortVM : public UPilgrimSongSortVM
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/PilgrimCoreUI.PilgrimSongFilterItemVM
/// Size: 0x0048 (0x000088 - 0x0000D0)
class UPilgrimSongFilterItemVM : public UFortFilterItemVM
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/PilgrimCoreUI.PilgrimSongFilterOwnedVM
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UPilgrimSongFilterOwnedVM : public UPilgrimSongFilterItemVM
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/PilgrimCoreUI.PilgrimSongFilterAvailableVM
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UPilgrimSongFilterAvailableVM : public UPilgrimSongFilterItemVM
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/PilgrimCoreUI.PilgrimSongSearchTextVM
/// Size: 0x0040 (0x000080 - 0x0000C0)
class UPilgrimSongSearchTextVM : public UFortSortFilterSearchTextVM
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/PilgrimCoreUI.PilgrimSongFilterVM
/// Size: 0x0020 (0x000068 - 0x000088)
class UPilgrimSongFilterVM : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(class UFortSortFilterVM*)                  SortFilter                                                  OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(TArray<class UPilgrimSongMetadata*>)       FilteredItems                                               OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(class APlayerController*)                  OwningController                                            OFFSET(get<T>, {0x80, 8, 0, 0})


	/// Functions
	// Function /Script/PilgrimCoreUI.PilgrimSongFilterVM.Initialize
	// void Initialize(class APlayerController* InOwningController);                                                            // [0xac60d04] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PilgrimCoreUI.PilgrimCoreUIGlobals
/// Size: 0x0000 (0x000028 - 0x000028)
class UPilgrimCoreUIGlobals : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

