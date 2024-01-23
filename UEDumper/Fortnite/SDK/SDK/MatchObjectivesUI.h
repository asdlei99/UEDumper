
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: DynamicUI
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: UMG

/// Enum /Script/MatchObjectivesUI.EMatchQuestsSelectorState
/// Size: 0x04
enum class EMatchQuestsSelectorState : uint8_t
{
	EMatchQuestsSelectorState__EMinimized                                            = 0,
	EMatchQuestsSelectorState__EOpen                                                 = 1,
	EMatchQuestsSelectorState__EMinimizing                                           = 2,
	EMatchQuestsSelectorState__EMatchQuestsSelectorState_MAX                         = 3
};

/// Class /Script/MatchObjectivesUI.FortMobileButtonBehaviorComponent_MatchObjectivePicker
/// Size: 0x0010 (0x000138 - 0x000148)
class UFortMobileButtonBehaviorComponent_MatchObjectivePicker : public UFortMobileActionButtonBehavior
{ 
public:
	class UFortControllerComponent_SkydiveFeedback*    SkydiveFeedbackComp;                                        // 0x0138   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0140   (0x0008)  MISSED


	/// Functions
	// Function /Script/MatchObjectivesUI.FortMobileButtonBehaviorComponent_MatchObjectivePicker.HandleSkydiveModeChanged
	// void HandleSkydiveModeChanged(ESkydiveFeedbackPhase Phase);                                                           // [0xb26ee38] Final|Native|Protected 
};

/// Class /Script/MatchObjectivesUI.MatchObjectivesOptionEntryWidget
/// Size: 0x0018 (0x0002C0 - 0x0002D8)
class UMatchObjectivesOptionEntryWidget : public UUserWidget
{ 
public:
	bool                                               bIsOptionSelected;                                          // 0x02C0   (0x0001)  
	bool                                               bIsOptionFocused;                                           // 0x02C1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x02C2   (0x0016)  MISSED


	/// Functions
	// Function /Script/MatchObjectivesUI.MatchObjectivesOptionEntryWidget.OnTeammateSelectionUpdated
	// void OnTeammateSelectionUpdated(TArray<AFortPlayerState*>& PlayersThatHaveSelectedThis);                              // [0x2177018] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/MatchObjectivesUI.MatchObjectivesOptionEntryWidget.OnOptionSelectedStateChanged
	// void OnOptionSelectedStateChanged(bool bIsSelected);                                                                  // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/MatchObjectivesUI.MatchObjectivesOptionEntryWidget.OnOptionFocusedStateChanged
	// void OnOptionFocusedStateChanged(bool bIsFocused);                                                                    // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/MatchObjectivesUI.MatchObjectivesOptionEntryWidget.OnMatchObjectiveEntrySetup
	// void OnMatchObjectiveEntrySetup(FUrgentQuestData& UrgentQuestData, FFortItemQuantityPair& VisibleReward, int32_t ObjectiveCount); // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/MatchObjectivesUI.MatchObjectivesSocialAvatar
/// Size: 0x0008 (0x0002C0 - 0x0002C8)
class UMatchObjectivesSocialAvatar : public UUserWidget
{ 
public:
	class UFortSocialAvatarIcon*                       Icon_SocialAvatar;                                          // 0x02C0   (0x0008)  


	/// Functions
	// Function /Script/MatchObjectivesUI.MatchObjectivesSocialAvatar.SetSocialAvatarTexture
	// void SetSocialAvatarTexture(TWeakObjectPtr<UTexture2D*>& AvatarTexture);                                              // [0xb26f0a4] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/MatchObjectivesUI.MatchObjectivesSocialAvatar.SetSocialAvatar
	// void SetSocialAvatar(class AFortPlayerState* PlayerState);                                                            // [0xb26f01c] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/MatchObjectivesUI.MatchObjectivesUIDirectorBase
/// Size: 0x0010 (0x0002B0 - 0x0002C0)
class AMatchObjectivesUIDirectorBase : public ADynamicUIDirectorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x02B0   (0x0010)  MISSED


	/// Functions
	// Function /Script/MatchObjectivesUI.MatchObjectivesUIDirectorBase.OnFinishSkydiving
	// void OnFinishSkydiving();                                                                                             // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/MatchObjectivesUI.MatchObjectivesUIDirectorBase.HandleSkydiveModeChanged
	// void HandleSkydiveModeChanged(ESkydiveFeedbackPhase Phase);                                                           // [0xb26edb8] Final|Native|Public  
};

/// Class /Script/MatchObjectivesUI.MatchObjectivesSelectorWidget
/// Size: 0x0020 (0x000328 - 0x000348)
class UMatchObjectivesSelectorWidget : public UFortHUDElementWidget
{ 
public:
	class UDynamicEntryBox*                            DynamicEntryBox_OptionEntries;                              // 0x0328   (0x0008)  
	EMatchQuestsSelectorState                          WidgetSelectorState;                                        // 0x0330   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0331   (0x0007)  MISSED
	class UInputComponent*                             MatchObjectivesInputComponent;                              // 0x0338   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0340   (0x0008)  MISSED


	/// Functions
	// Function /Script/MatchObjectivesUI.MatchObjectivesSelectorWidget.UpdateKeybindings
	// void UpdateKeybindings();                                                                                             // [0xb26f144] Final|Native|Protected 
	// Function /Script/MatchObjectivesUI.MatchObjectivesSelectorWidget.SetSelectorState
	// void SetSelectorState(EMatchQuestsSelectorState State);                                                               // [0xb26ef9c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MatchObjectivesUI.MatchObjectivesSelectorWidget.PopulateChallengeEntries
	// void PopulateChallengeEntries(TArray<TScriptInterface<Class>>& QuestOffering);                                        // [0xb26ef00] Final|Native|Private|HasOutParms|Const 
	// Function /Script/MatchObjectivesUI.MatchObjectivesSelectorWidget.OnSelectorOpenStateChanged
	// void OnSelectorOpenStateChanged();                                                                                    // [0x2177018] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/MatchObjectivesUI.MatchObjectivesSelectorWidget.OnQuestEntrySelected
	// void OnQuestEntrySelected(class UUserWidget* SelectedEntry);                                                          // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/MatchObjectivesUI.MatchObjectivesSelectorWidget.IsOpenByDefault
	// bool IsOpenByDefault();                                                                                               // [0xb26eeb8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MatchObjectivesUI.MatchObjectivesSelectorWidget.GetDailyChallengesFromMCP
	// void GetDailyChallengesFromMCP();                                                                                     // [0xb26eda4] Final|Native|Protected|BlueprintCallable 
};

