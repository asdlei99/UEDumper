
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: DynamicUI
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/MatchObjectivesUI.FortMobileButtonBehaviorComponent_MatchObjectivePicker
/// Size: 0x0010 (0x000138 - 0x000148)
class UFortMobileButtonBehaviorComponent_MatchObjectivePicker : public UFortMobileActionButtonBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	CMember(class UFortControllerComponent_SkydiveFeedback*) SkydiveFeedbackComp                                   OFFSET(get<T>, {0x138, 8, 0, 0})


	/// Functions
	// Function /Script/MatchObjectivesUI.FortMobileButtonBehaviorComponent_MatchObjectivePicker.HandleSkydiveModeChanged
	// void HandleSkydiveModeChanged(ESkydiveFeedbackPhase Phase);                                                              // [0xb47b55c] Final|Native|Protected 
};

/// Class /Script/MatchObjectivesUI.MatchObjectivesOptionEntryWidget
/// Size: 0x0018 (0x0002C0 - 0x0002D8)
class UMatchObjectivesOptionEntryWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	DMember(bool)                                      bIsOptionSelected                                           OFFSET(get<bool>, {0x2C0, 1, 0, 0})
	DMember(bool)                                      bIsOptionFocused                                            OFFSET(get<bool>, {0x2C1, 1, 0, 0})


	/// Functions
	// Function /Script/MatchObjectivesUI.MatchObjectivesOptionEntryWidget.OnTeammateSelectionUpdated
	// void OnTeammateSelectionUpdated(TArray<AFortPlayerState*>& PlayersThatHaveSelectedThis);                                 // [0x2047e54] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/MatchObjectivesUI.MatchObjectivesOptionEntryWidget.OnOptionSelectedStateChanged
	// void OnOptionSelectedStateChanged(bool bIsSelected);                                                                     // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/MatchObjectivesUI.MatchObjectivesOptionEntryWidget.OnOptionFocusedStateChanged
	// void OnOptionFocusedStateChanged(bool bIsFocused);                                                                       // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/MatchObjectivesUI.MatchObjectivesOptionEntryWidget.OnMatchObjectiveEntrySetup
	// void OnMatchObjectiveEntrySetup(FUrgentQuestData& UrgentQuestData, FFortItemQuantityPair& VisibleReward, int32_t ObjectiveCount); // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/MatchObjectivesUI.MatchObjectivesSocialAvatar
/// Size: 0x0008 (0x0002C0 - 0x0002C8)
class UMatchObjectivesSocialAvatar : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
	CMember(class UFortSocialAvatarIcon*)              Icon_SocialAvatar                                           OFFSET(get<T>, {0x2C0, 8, 0, 0})


	/// Functions
	// Function /Script/MatchObjectivesUI.MatchObjectivesSocialAvatar.SetSocialAvatarTexture
	// void SetSocialAvatarTexture(TWeakObjectPtr<UTexture2D*>& AvatarTexture);                                                 // [0xb47bf0c] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/MatchObjectivesUI.MatchObjectivesSocialAvatar.SetSocialAvatar
	// void SetSocialAvatar(class AFortPlayerState* PlayerState);                                                               // [0xb47be44] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/MatchObjectivesUI.MatchObjectivesUIDirectorBase
/// Size: 0x0010 (0x0002B0 - 0x0002C0)
class AMatchObjectivesUIDirectorBase : public ADynamicUIDirectorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:


	/// Functions
	// Function /Script/MatchObjectivesUI.MatchObjectivesUIDirectorBase.OnFinishSkydiving
	// void OnFinishSkydiving();                                                                                                // [0x2047e54] Event|Public|BlueprintEvent 
	// Function /Script/MatchObjectivesUI.MatchObjectivesUIDirectorBase.IsAnyChallengeAvailable
	// bool IsAnyChallengeAvailable();                                                                                          // [0xb47b61c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MatchObjectivesUI.MatchObjectivesUIDirectorBase.HandleSkydiveModeChanged
	// void HandleSkydiveModeChanged(ESkydiveFeedbackPhase Phase);                                                              // [0xb47b49c] Final|Native|Public  
};

/// Class /Script/MatchObjectivesUI.MatchObjectivesSelectorWidget
/// Size: 0x0020 (0x000328 - 0x000348)
class UMatchObjectivesSelectorWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	CMember(class UDynamicEntryBox*)                   DynamicEntryBox_OptionEntries                               OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(EMatchQuestsSelectorState)                 WidgetSelectorState                                         OFFSET(get<T>, {0x330, 1, 0, 0})
	CMember(class UInputComponent*)                    MatchObjectivesInputComponent                               OFFSET(get<T>, {0x338, 8, 0, 0})


	/// Functions
	// Function /Script/MatchObjectivesUI.MatchObjectivesSelectorWidget.UpdateKeybindings
	// void UpdateKeybindings();                                                                                                // [0xb47bfac] Final|Native|Protected 
	// Function /Script/MatchObjectivesUI.MatchObjectivesSelectorWidget.SetSelectorState
	// void SetSelectorState(EMatchQuestsSelectorState State);                                                                  // [0xb47bd84] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MatchObjectivesUI.MatchObjectivesSelectorWidget.PopulateChallengeEntries
	// void PopulateChallengeEntries(TArray<TScriptInterface<Class>>& QuestOffering);                                           // [0xb47b6c4] Final|Native|Private|HasOutParms|Const 
	// Function /Script/MatchObjectivesUI.MatchObjectivesSelectorWidget.OnSelectorOpenStateChanged
	// void OnSelectorOpenStateChanged();                                                                                       // [0x2047e54] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/MatchObjectivesUI.MatchObjectivesSelectorWidget.OnQuestEntrySelected
	// void OnQuestEntrySelected(class UUserWidget* SelectedEntry);                                                             // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/MatchObjectivesUI.MatchObjectivesSelectorWidget.IsOpenByDefault
	// bool IsOpenByDefault();                                                                                                  // [0xb47b67c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MatchObjectivesUI.MatchObjectivesSelectorWidget.GetDailyChallengesFromMCP
	// void GetDailyChallengesFromMCP();                                                                                        // [0xb47b488] Final|Native|Protected|BlueprintCallable 
};

/// Enum /Script/MatchObjectivesUI.EMatchQuestsSelectorState
/// Size: 0x04
enum EMatchQuestsSelectorState : uint8_t
{
	EMatchQuestsSelectorState__EMinimized                                            = 0,
	EMatchQuestsSelectorState__EOpen                                                 = 1,
	EMatchQuestsSelectorState__EMinimizing                                           = 2,
	EMatchQuestsSelectorState__EMatchQuestsSelectorState_MAX                         = 3
};

