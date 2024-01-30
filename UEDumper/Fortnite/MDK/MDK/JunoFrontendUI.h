
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: JunoCoreUI
/// dependency: ModelViewViewModel

/// Class /Script/JunoFrontendUI.JunoFrontendExperienceFlow
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UJunoFrontendExperienceFlow : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(class UFortStreamMediaSource*)             VideoStream_Source                                          OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   VideoPlayerClass                                            OFFSET(get<T>, {0x50, 32, 0, 0})
	CMember(TArray<FString>)                           FlowStepArray                                               OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(bool)                                      bEnableTrailer                                              OFFSET(get<bool>, {0x80, 1, 0, 0})
	SMember(FString)                                   CinematicTrailerVUID                                        OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	SMember(FName)                                     CinematicTrailerString                                      OFFSET(getStruct<T>, {0x98, 4, 0, 0})
	CMember(TMap<FString, FString>)                    CinematicTrailerRating                                      OFFSET(get<T>, {0xA0, 80, 0, 0})
};

/// Class /Script/JunoFrontendUI.JunoMatchmakingUtilityExtension
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoMatchmakingUtilityExtension : public UMatchmakingUtilityExtensionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoFrontendUI.JunoMatchmakingWidgetExtension
/// Size: 0x0020 (0x000028 - 0x000048)
class UJunoMatchmakingWidgetExtension : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UClass*)                             GameSelectionOverride                                       OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UClass*)                             CustomHeadingWidget                                         OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(bool)                                      bDisplayGameSelectionOnContentStack                         OFFSET(get<bool>, {0x40, 1, 0, 0})
};

/// Class /Script/JunoFrontendUI.JunoWorldManagementViewModel
/// Size: 0x00D0 (0x000068 - 0x000138)
class UJunoWorldManagementViewModel : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	DMember(bool)                                      bAllowWorldCreation                                         OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(int32_t)                                   MaxWorldSlots                                               OFFSET(get<int32_t>, {0x6C, 4, 0, 0})
	DMember(bool)                                      bIsModeratorModeEnabled                                     OFFSET(get<bool>, {0x70, 1, 0, 0})
	CMember(TArray<class UJunoWorldDataViewModel*>)    OwnerWorlds                                                 OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<class UJunoWorldDataViewModel*>)    SharedWorlds                                                OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(class UJunoWorldDataViewModel*)            SelectedWorld                                               OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(class UJunoWorldDataViewModel*)            EmptyWorld                                                  OFFSET(get<T>, {0xA0, 8, 0, 0})
	DMember(float)                                     DataRefreshFrequency                                        OFFSET(get<float>, {0xC8, 4, 0, 0})
	CMember(class UDataTable*)                         SettingDataTable                                            OFFSET(get<T>, {0x120, 8, 0, 0})
	CMember(TArray<class UJunoWorldImageObject*>)      WorldImageList                                              OFFSET(get<T>, {0x128, 16, 0, 0})


	/// Functions
	// Function /Script/JunoFrontendUI.JunoWorldManagementViewModel.StartMatchmakingInModeratorMode
	// void StartMatchmakingInModeratorMode(FString InWorldId);                                                                 // [0xbd6779c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoFrontendUI.JunoWorldManagementViewModel.RemoveSelectedWorldFromList
	// void RemoveSelectedWorldFromList();                                                                                      // [0xbd67788] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoFrontendUI.JunoWorldManagementViewModel.InitWorldData
	// void InitWorldData(TWeakObjectPtr<UDataTable*>& InSettingDataTable, TWeakObjectPtr<UDataTable*>& InWorldImageDataTable); // [0xbd67670] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoFrontendUI.JunoWorldManagementViewModel.GetIsCreateFlowSelected
	// bool GetIsCreateFlowSelected();                                                                                          // [0xbd67628] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoFrontendUI.JunoWorldManagementViewModel.FetchWorldData
	// void FetchWorldData();                                                                                                   // [0xbd67614] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoFrontendUI.JunoWorldManagementViewModel.EnableDataRefresh
	// void EnableDataRefresh();                                                                                                // [0xbd67600] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoFrontendUI.JunoWorldManagementViewModel.DisableDataRefresh
	// void DisableDataRefresh();                                                                                               // [0xbd675ec] Final|Native|Public|BlueprintCallable 
};

/// Enum /Script/JunoFrontendUI.EOptionalJunoFrontendExperienceFlowSteps
/// Size: 0x02
enum EOptionalJunoFrontendExperienceFlowSteps : uint8_t
{
	EOptionalJunoFrontendExperienceFlowSteps__TryShowCinematicTrailer                = 0,
	EOptionalJunoFrontendExperienceFlowSteps__EOptionalJunoFrontendExperienceFlowSteps_MAX = 1
};

