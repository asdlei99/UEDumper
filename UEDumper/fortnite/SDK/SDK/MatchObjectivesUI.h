
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
	// void HandleSkydiveModeChanged(ESkydiveFeedbackPhase Phase);                                                           // [0xb5cf870] Final|Native|Protected 
};

/// Class /Script/MatchObjectivesUI.FortMobileHUDElement_ObjectiveSelectorWrapper
/// Size: 0x0020 (0x000350 - 0x000370)
class UFortMobileHUDElement_ObjectiveSelectorWrapper : public UFortMobileHUDElement
{ 
public:
	class UMatchObjectivesSelectorWidget*              WBP_MatchQuests_Selector;                                   // 0x0350   (0x0008)  
	class USpacer*                                     Spacer_ReservedSpace;                                       // 0x0358   (0x0008)  
	class UOverlay*                                    Overlay_WrapperContents;                                    // 0x0360   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0368   (0x0008)  MISSED


	/// Functions
	// Function /Script/MatchObjectivesUI.FortMobileHUDElement_ObjectiveSelectorWrapper.HandleSkydiveModeChanged
	// void HandleSkydiveModeChanged(ESkydiveFeedbackPhase Phase);                                                           // [0xb5cf8f0] Final|Native|Public  
};

/// Class /Script/MatchObjectivesUI.MatchObjectivesOptionEntryWidget
/// Size: 0x0038 (0x0002C0 - 0x0002F8)
class UMatchObjectivesOptionEntryWidget : public UUserWidget
{ 
public:
	bool                                               bIsOptionSelected;                                          // 0x02C0   (0x0001)  
	bool                                               bIsOptionFocused;                                           // 0x02C1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x16];                                      // 0x02C2   (0x0016)  MISSED
	class UCommonButtonBase*                           Button_TapSelect;                                           // 0x02D8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x02E0   (0x0018)  MISSED


	/// Functions
	// Function /Script/MatchObjectivesUI.MatchObjectivesOptionEntryWidget.OnTeammateSelectionUpdated
	// void OnTeammateSelectionUpdated(TArray<AFortPlayerState*>& PlayersThatHaveSelectedThis);                              // [0x3d1d968] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/MatchObjectivesUI.MatchObjectivesOptionEntryWidget.OnOptionSelectedStateChanged
	// void OnOptionSelectedStateChanged(bool bIsSelected);                                                                  // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/MatchObjectivesUI.MatchObjectivesOptionEntryWidget.OnOptionFocusedStateChanged
	// void OnOptionFocusedStateChanged(bool bIsFocused);                                                                    // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/MatchObjectivesUI.MatchObjectivesOptionEntryWidget.OnMatchObjectiveEntrySetup
	// void OnMatchObjectiveEntrySetup(FUrgentQuestData& UrgentQuestData, FFortItemQuantityPair& VisibleReward, int32_t ObjectiveCount); // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/MatchObjectivesUI.MatchObjectivesSocialAvatar
/// Size: 0x0008 (0x0002C0 - 0x0002C8)
class UMatchObjectivesSocialAvatar : public UUserWidget
{ 
public:
	class UFortSocialAvatarIcon*                       Icon_SocialAvatar;                                          // 0x02C0   (0x0008)  


	/// Functions
	// Function /Script/MatchObjectivesUI.MatchObjectivesSocialAvatar.SetSocialAvatarTexture
	// void SetSocialAvatarTexture(TWeakObjectPtr<UTexture2D*>& AvatarTexture);                                              // [0xb5d01e0] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/MatchObjectivesUI.MatchObjectivesSocialAvatar.SetSocialAvatar
	// void SetSocialAvatar(class AFortPlayerState* PlayerState);                                                            // [0xb5d0158] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/MatchObjectivesUI.MatchObjectivesUIDirectorBase
/// Size: 0x0010 (0x0002B0 - 0x0002C0)
class AMatchObjectivesUIDirectorBase : public ADynamicUIDirectorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x02B0   (0x0010)  MISSED


	/// Functions
	// Function /Script/MatchObjectivesUI.MatchObjectivesUIDirectorBase.OnFinishSkydiving
	// void OnFinishSkydiving();                                                                                             // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/MatchObjectivesUI.MatchObjectivesUIDirectorBase.IsAnyChallengeAvailable
	// bool IsAnyChallengeAvailable();                                                                                       // [0xb5cf970] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MatchObjectivesUI.MatchObjectivesUIDirectorBase.HandleSkydiveModeChanged
	// void HandleSkydiveModeChanged(ESkydiveFeedbackPhase Phase);                                                           // [0xb5cf7f0] Final|Native|Public  
};

/// Class /Script/MatchObjectivesUI.MatchObjectivesSelectorWidget
/// Size: 0x0048 (0x000328 - 0x000370)
class UMatchObjectivesSelectorWidget : public UFortHUDElementWidget
{ 
public:
	class UDynamicEntryBox*                            DynamicEntryBox_OptionEntries;                              // 0x0328   (0x0008)  
	class UImage*                                      Image_MenuBG;                                               // 0x0330   (0x0008)  
	EMatchQuestsSelectorState                          WidgetSelectorState;                                        // 0x0338   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0339   (0x0007)  MISSED
	class UInputComponent*                             MatchObjectivesInputComponent;                              // 0x0340   (0x0008)  
	class UCommonButtonBase*                           Button_HeaderToggle;                                        // 0x0348   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0350   (0x0020)  MISSED


	/// Functions
	// Function /Script/MatchObjectivesUI.MatchObjectivesSelectorWidget.UpdateKeybindings
	// void UpdateKeybindings();                                                                                             // [0xb5d0280] Final|Native|Protected 
	// Function /Script/MatchObjectivesUI.MatchObjectivesSelectorWidget.SetSelectorState
	// void SetSelectorState(EMatchQuestsSelectorState State);                                                               // [0xb5d00d8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MatchObjectivesUI.MatchObjectivesSelectorWidget.PopulateChallengeEntries
	// void PopulateChallengeEntries(TArray<TScriptInterface<Class>>& QuestOffering);                                        // [0xb5cfa18] Final|Native|Private|HasOutParms|Const 
	// Function /Script/MatchObjectivesUI.MatchObjectivesSelectorWidget.OnSelectorOpenStateChanged
	// void OnSelectorOpenStateChanged();                                                                                    // [0x3d1d968] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/MatchObjectivesUI.MatchObjectivesSelectorWidget.OnQuestEntrySelected
	// void OnQuestEntrySelected(class UUserWidget* SelectedEntry);                                                          // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/MatchObjectivesUI.MatchObjectivesSelectorWidget.IsOpenByDefault
	// bool IsOpenByDefault();                                                                                               // [0xb5cf9d0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MatchObjectivesUI.MatchObjectivesSelectorWidget.GetDailyChallengesFromMCP
	// void GetDailyChallengesFromMCP();                                                                                     // [0xb5cf7dc] Final|Native|Protected|BlueprintCallable 
};

