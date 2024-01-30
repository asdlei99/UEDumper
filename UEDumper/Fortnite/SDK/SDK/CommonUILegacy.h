
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

/// Enum /Script/CommonUILegacy.EOperation
/// Size: 0x06
enum class EOperation : uint8_t
{
	EOperation__Intro                                                                = 0,
	EOperation__Outro                                                                = 1,
	EOperation__Push                                                                 = 2,
	EOperation__Pop                                                                  = 3,
	EOperation__Invalid                                                              = 4,
	EOperation__EOperation_MAX                                                       = 5
};

/// Enum /Script/CommonUILegacy.ECommonPlatformType
/// Size: 0x11
enum class ECommonPlatformType : uint8_t
{
	ECommonPlatformType__PC                                                          = 0,
	ECommonPlatformType__Mac                                                         = 1,
	ECommonPlatformType__PS4                                                         = 2,
	ECommonPlatformType__XBox                                                        = 3,
	ECommonPlatformType__IOS                                                         = 4,
	ECommonPlatformType__Android                                                     = 5,
	ECommonPlatformType__Switch                                                      = 6,
	ECommonPlatformType__XSX                                                         = 7,
	ECommonPlatformType__PS5                                                         = 8,
	ECommonPlatformType__Count                                                       = 9,
	ECommonPlatformType__ECommonPlatformType_MAX                                     = 10
};

/// Enum /Script/CommonUILegacy.ECommonGamepadType
/// Size: 0x08
enum class ECommonGamepadType : uint8_t
{
	ECommonGamepadType__XboxOneController                                            = 0,
	ECommonGamepadType__PS4Controller                                                = 1,
	ECommonGamepadType__SwitchController                                             = 2,
	ECommonGamepadType__GenericController                                            = 3,
	ECommonGamepadType__XboxSeriesXController                                        = 4,
	ECommonGamepadType__PS5Controller                                                = 5,
	ECommonGamepadType__Count                                                        = 6,
	ECommonGamepadType__ECommonGamepadType_MAX                                       = 7
};

/// Class /Script/CommonUILegacy.CommonActivatablePanelLegacy
/// Size: 0x0138 (0x000400 - 0x000538)
class UCommonActivatablePanelLegacy : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0400   (0x0008)  MISSED
	SDK_UNDEFINED(16,1914) /* FMulticastInlineDelegate */ __um(OnWidgetActivated);                                 // 0x0408   (0x0010)  
	SDK_UNDEFINED(16,1915) /* FMulticastInlineDelegate */ __um(OnWidgetDeactivated);                               // 0x0418   (0x0010)  
	bool                                               bConsumeAllActions;                                         // 0x0428   (0x0001)  
	bool                                               bExposeActionsExternally;                                   // 0x0429   (0x0001)  
	bool                                               bShouldBypassStack;                                         // 0x042A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x10D];                                     // 0x042B   (0x010D)  MISSED


	/// Functions
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandlerWithProgressPopupMenu
	// void SetInputActionHandlerWithProgressPopupMenu(FDataTableRowHandle InputActionRow, FDelegateProperty CommitedEvent, FDelegateProperty ProgressEvent, class UCommonPopupMenuLegacy* PopupMenu); // [0x78c36b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandlerWithProgress
	// void SetInputActionHandlerWithProgress(FDataTableRowHandle InputActionRow, FDelegateProperty CommitedEvent, FDelegateProperty ProgressEvent); // [0x78c3390] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandlerWithPopupMenu
	// void SetInputActionHandlerWithPopupMenu(FDataTableRowHandle InputActionRow, FDelegateProperty CommitedEvent, class UCommonPopupMenuLegacy* PopupMenu); // [0x78c307c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandler
	// void SetInputActionHandler(FDataTableRowHandle InputActionRow, FDelegateProperty CommitedEvent);                      // [0x36e55fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerStateWithDisabledCommitEvent
	// void SetActionHandlerStateWithDisabledCommitEvent(class UDataTable* DataTable, FName RowName, EInputActionState State, FDelegateProperty DisabledCommitEvent); // [0x78c2c30] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerStateFromHandleWithDisabledCommitEvent
	// void SetActionHandlerStateFromHandleWithDisabledCommitEvent(FDataTableRowHandle InputActionRow, EInputActionState State, FDelegateProperty DisabledCommitEvent); // [0x78c2920] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerStateFromHandle
	// void SetActionHandlerStateFromHandle(FDataTableRowHandle InputActionRow, EInputActionState State);                    // [0x78c2700] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerState
	// void SetActionHandlerState(class UDataTable* DataTable, FName RowName, EInputActionState State);                      // [0x78c25c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.RemoveInputActionHandler
	// void RemoveInputActionHandler(FDataTableRowHandle InputActionRow);                                                    // [0x78c2458] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.RemoveAllInputActionHandlers
	// void RemoveAllInputActionHandlers();                                                                                  // [0x78c2444] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.PopPanel
	// void PopPanel();                                                                                                      // [0x78c227c] Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.OnTransitionedBySwitcher
	// void OnTransitionedBySwitcher();                                                                                      // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.OnRemovedFromActivationStack
	// void OnRemovedFromActivationStack();                                                                                  // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.OnInputModeChanged
	// void OnInputModeChanged(bool bUsingGamepad);                                                                          // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.OnBeginOutro
	// void OnBeginOutro();                                                                                                  // [0x1c9eee8] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.OnBeginIntro
	// void OnBeginIntro();                                                                                                  // [0x351e7b8] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.OnAddedToActivationStack
	// void OnAddedToActivationStack();                                                                                      // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.IsIntroed
	// bool IsIntroed();                                                                                                     // [0x78c1f48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.IsInActivationStack
	// bool IsInActivationStack();                                                                                           // [0x78c1f04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.HasInputActionHandler
	// bool HasInputActionHandler(FDataTableRowHandle InputActionRow);                                                       // [0x78c1db4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.GetInputActions
	// bool GetInputActions(TArray<FCommonInputActionHandlerData>& InputActionDataRows);                                     // [0x78c0cf8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.EndOutro
	// void EndOutro();                                                                                                      // [0x3ef4b4c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.EndIntro
	// void EndIntro();                                                                                                      // [0x78c057c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.BeginOutro
	// void BeginOutro();                                                                                                    // [0x78c0484] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.BeginIntro
	// void BeginIntro();                                                                                                    // [0x78c0470] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionNoHandler
	// void AddInputActionNoHandler(class UDataTable* DataTable, FName RowName);                                             // [0x78c0388] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandlerWithProgressPopup
	// void AddInputActionHandlerWithProgressPopup(class UDataTable* DataTable, FName RowName, FDelegateProperty CommitedEvent, FDelegateProperty ProgressEvent, class UCommonPopupMenuLegacy* PopupMenu); // [0x78c0198] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandlerWithProgress
	// void AddInputActionHandlerWithProgress(class UDataTable* DataTable, FName RowName, FDelegateProperty CommitedEvent, FDelegateProperty ProgressEvent); // [0x78c0034] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandlerWithPopup
	// void AddInputActionHandlerWithPopup(class UDataTable* DataTable, FName RowName, FDelegateProperty CommitedEvent, class UCommonPopupMenuLegacy* PopupMenu); // [0x78bfe80] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandler
	// void AddInputActionHandler(class UDataTable* DataTable, FName RowName, FDelegateProperty CommitedEvent);              // [0x78bfd78] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUILegacy.CommonButtonInternalLegacy
/// Size: 0x0000 (0x000640 - 0x000640)
class UCommonButtonInternalLegacy : public UCommonButtonInternalBase
{ 
public:
};

/// Class /Script/CommonUILegacy.CommonButtonLegacy
/// Size: 0x0050 (0x001490 - 0x0014E0)
class UCommonButtonLegacy : public UCommonButtonBase
{ 
public:
	SDK_UNDEFINED(16,1916) /* FMulticastInlineDelegate */ __um(OnSelectedChanged);                                 // 0x1490   (0x0010)  
	SDK_UNDEFINED(16,1917) /* FMulticastInlineDelegate */ __um(OnButtonClicked);                                   // 0x14A0   (0x0010)  
	SDK_UNDEFINED(16,1918) /* FMulticastInlineDelegate */ __um(OnButtonDoubleClicked);                             // 0x14B0   (0x0010)  
	SDK_UNDEFINED(16,1919) /* FMulticastInlineDelegate */ __um(OnButtonHovered);                                   // 0x14C0   (0x0010)  
	SDK_UNDEFINED(16,1920) /* FMulticastInlineDelegate */ __um(OnButtonUnhovered);                                 // 0x14D0   (0x0010)  


	/// Functions
	// Function /Script/CommonUILegacy.CommonButtonLegacy.SetTriggeredInputActionLegacy
	// void SetTriggeredInputActionLegacy(FDataTableRowHandle& InputActionRow, class UCommonActivatablePanelLegacy* OldPanel); // [0x78c3b38] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonButtonLegacy.HandleOnSelectedChanged
	// void HandleOnSelectedChanged(class UCommonButtonBase* Button, bool InSelected);                                       // [0x2a810ec] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonLegacy.HandleOnButtonUnhovered
	// void HandleOnButtonUnhovered(class UCommonButtonBase* Button);                                                        // [0x2a802f4] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonLegacy.HandleOnButtonHovered
	// void HandleOnButtonHovered(class UCommonButtonBase* Button);                                                          // [0x2a80274] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonLegacy.HandleOnButtonDoubleClicked
	// void HandleOnButtonDoubleClicked(class UCommonButtonBase* Button);                                                    // [0x78c19ec] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonLegacy.HandleOnButtonClicked
	// void HandleOnButtonClicked(class UCommonButtonBase* Button);                                                          // [0x2a8190c] Final|Native|Private 
};

/// Class /Script/CommonUILegacy.CommonGlobalInputHandlerLegacy
/// Size: 0x0048 (0x000028 - 0x000070)
class UCommonGlobalInputHandlerLegacy : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0028   (0x0048)  MISSED
};

/// Struct /Script/CommonUILegacy.Operation
/// Size: 0x0028 (0x000000 - 0x000028)
struct FOperation
{ 
	EOperation                                         Operation;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UCommonActivatablePanelLegacy*               Panel;                                                      // 0x0008   (0x0008)  
	bool                                               bIntroPanel;                                                // 0x0010   (0x0001)  
	bool                                               bActivatePanel;                                             // 0x0011   (0x0001)  
	bool                                               bOutroPanelBelow;                                           // 0x0012   (0x0001)  
	unsigned char                                      UnknownData01_6[0x15];                                      // 0x0013   (0x0015)  MISSED
};

/// Class /Script/CommonUILegacy.CommonInputManagerLegacy
/// Size: 0x00E0 (0x000028 - 0x000108)
class UCommonInputManagerLegacy : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x80];                                      // 0x0028   (0x0080)  MISSED
	SDK_UNDEFINED(16,1921) /* TScriptInterface<Class> */ __um(CurrentlyHeldActionInputHandler);                    // 0x00A8   (0x0010)  
	TArray<class UCommonActivatablePanelLegacy*>       ActivatablePanelStack;                                      // 0x00B8   (0x0010)  
	class UCommonGlobalInputHandlerLegacy*             GlobalInputHandler;                                         // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x00D0   (0x0018)  MISSED
	TArray<FOperation>                                 Operations;                                                 // 0x00E8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x00F8   (0x0010)  MISSED


	/// Functions
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.SuspendStartingOperationProcessing
	// void SuspendStartingOperationProcessing();                                                                            // [0x78c3fa4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.StopListeningForExistingHeldAction
	// bool StopListeningForExistingHeldAction(FDataTableRowHandle& InputActionDataRow, FDelegateProperty& CompleteEvent, FDelegateProperty& ProgressEvent); // [0x78c3e30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.StartListeningForExistingHeldAction
	// bool StartListeningForExistingHeldAction(FDataTableRowHandle& InputActionDataRow, FDelegateProperty& CompleteEvent, FDelegateProperty& ProgressEvent); // [0x78c3cbc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.SetGlobalInputHandlerPriorityFilter
	// void SetGlobalInputHandlerPriorityFilter(int32_t InFilterPriority);                                                   // [0x78c3000] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.ResumeStartingOperationProcessing
	// void ResumeStartingOperationProcessing();                                                                             // [0x78c25ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.PushActivatablePanel
	// void PushActivatablePanel(class UCommonActivatablePanelLegacy* ActivatablePanel, bool bIntroPanel, bool bOutroPanelBelow); // [0x78c22b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.PopActivatablePanel
	// void PopActivatablePanel(class UCommonActivatablePanelLegacy* ActivatablePanel);                                      // [0x78c21fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.IsPanelOnStack
	// bool IsPanelOnStack(class UCommonActivatablePanelLegacy* InPanel);                                                    // [0x78c1f60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.IsInputSuspended
	// bool IsInputSuspended();                                                                                              // [0x78c1f1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.GetTopPanel
	// class UCommonActivatablePanelLegacy* GetTopPanel();                                                                   // [0x78c14a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.GetGlobalInputHandlerPriorityFilter
	// int32_t GetGlobalInputHandlerPriorityFilter();                                                                        // [0x78c0cd8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.GetAvailableInputActions
	// bool GetAvailableInputActions(TArray<FCommonInputActionHandlerData>& AvailableInputActions);                          // [0x78c0590] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CommonUILegacy.CommonInputReflectorLegacy
/// Size: 0x0030 (0x0002E8 - 0x000318)
class UCommonInputReflectorLegacy : public UCommonUserWidget
{ 
public:
	class UClass*                                      ButtonType;                                                 // 0x02E8   (0x0008)  
	TArray<class UCommonButtonLegacy*>                 ActiveButtons;                                              // 0x02F0   (0x0010)  
	TArray<class UCommonButtonLegacy*>                 InactiveButtons;                                            // 0x0300   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0310   (0x0008)  MISSED


	/// Functions
	// Function /Script/CommonUILegacy.CommonInputReflectorLegacy.OnButtonAdded
	// void OnButtonAdded(class UCommonButtonLegacy* AddedButton, FCommonInputActionHandlerData& Data);                      // [0x211c0a0] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/CommonUILegacy.CommonPopupButtonLegacy
/// Size: 0x0010 (0x0014E0 - 0x0014F0)
class UCommonPopupButtonLegacy : public UCommonButtonLegacy
{ 
public:
	class UMenuAnchor*                                 PopupMenuAnchor;                                            // 0x14E0   (0x0008)  
	class UCommonPopupMenuLegacy*                      PopupMenu;                                                  // 0x14E8   (0x0008)  


	/// Functions
	// Function /Script/CommonUILegacy.CommonPopupButtonLegacy.GetMenuAnchorWidget
	// class UUserWidget* GetMenuAnchorWidget();                                                                             // [0x78c13cc] Final|Native|Private 
};

/// Class /Script/CommonUILegacy.CommonPopupMenuLegacy
/// Size: 0x0018 (0x000538 - 0x000550)
class UCommonPopupMenuLegacy : public UCommonActivatablePanelLegacy
{ 
public:
	bool                                               bUseInputStack;                                             // 0x0538   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0539   (0x0003)  MISSED
	SDK_UNDEFINED(8,1922) /* TWeakObjectPtr<UMenuAnchor*> */ __um(OwningMenuAnchor);                               // 0x053C   (0x0008)  
	SDK_UNDEFINED(8,1923) /* TWeakObjectPtr<UObject*> */ __um(ContextProvidingObject);                             // 0x0544   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x054C   (0x0004)  MISSED


	/// Functions
	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.SetOwningMenuAnchor
	// void SetOwningMenuAnchor(class UMenuAnchor* MenuAnchor);                                                              // [0x78c3ab8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.SetContextProvider
	// void SetContextProvider(class UObject* ContextProvidingObject);                                                       // [0x78c2f80] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.RequestClose
	// void RequestClose();                                                                                                  // [0x78c2598] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.OnIsOpenChanged
	// void OnIsOpenChanged(bool IsOpen);                                                                                    // [0x78c217c] Final|Native|Protected 
	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.HandlePreDifferentContextProviderSet
	// void HandlePreDifferentContextProviderSet();                                                                          // [0x78c1c0c] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.HandlePostDifferentContextProviderSet
	// void HandlePostDifferentContextProviderSet();                                                                         // [0x78c1bf4] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/CommonUILegacy.CommonTabListWidgetLegacy
/// Size: 0x0020 (0x0003D8 - 0x0003F8)
class UCommonTabListWidgetLegacy : public UCommonTabListWidgetBase
{ 
public:
	SDK_UNDEFINED(16,1924) /* FMulticastInlineDelegate */ __um(OnTabButtonCreated);                                // 0x03D8   (0x0010)  
	SDK_UNDEFINED(16,1925) /* FMulticastInlineDelegate */ __um(OnTabButtonRemoved);                                // 0x03E8   (0x0010)  


	/// Functions
	// Function /Script/CommonUILegacy.CommonTabListWidgetLegacy.OnTabButtonRemoved__DelegateSignature
	// void OnTabButtonRemoved__DelegateSignature(FName TabID, class UCommonButtonLegacy* TabButton);                        // [0x211c0a0] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUILegacy.CommonTabListWidgetLegacy.OnTabButtonCreated__DelegateSignature
	// void OnTabButtonCreated__DelegateSignature(FName TabID, class UCommonButtonLegacy* TabButton);                        // [0x211c0a0] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUILegacy.CommonTabListWidgetLegacy.HandleTabRemoved
	// void HandleTabRemoved(FName TabNameID, class UCommonButtonLegacy* TabButton);                                         // [0x78c1cec] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonTabListWidgetLegacy.HandleTabCreated
	// void HandleTabCreated(FName TabNameID, class UCommonButtonLegacy* TabButton);                                         // [0x78c1c24] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonTabListWidgetLegacy.HandleOnTabButtonRemoved
	// void HandleOnTabButtonRemoved(FName TabID, class UCommonButtonBase* TabButton);                                       // [0x78c1b30] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonTabListWidgetLegacy.HandleOnTabButtonCreated
	// void HandleOnTabButtonCreated(FName TabID, class UCommonButtonBase* TabButton);                                       // [0x2a807c8] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonTabListWidgetLegacy.GetTabButtonByID
	// class UCommonButtonLegacy* GetTabButtonByID(FName TabNameID);                                                         // [0x78c1408] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/CommonUILegacy.CommonUISubsystemLegacy
/// Size: 0x0030 (0x000040 - 0x000070)
class UCommonUISubsystemLegacy : public UCommonUISubsystemBase
{ 
public:
	SDK_UNDEFINED(16,1926) /* FMulticastInlineDelegate */ __um(OnInputSuspensionChanged);                          // 0x0040   (0x0010)  
	class UCommonInputManagerLegacy*                   CommonInputManager;                                         // 0x0050   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0058   (0x0018)  MISSED


	/// Functions
	// Function /Script/CommonUILegacy.CommonUISubsystemLegacy.InputSuspensionChanged__DelegateSignature
	// void InputSuspensionChanged__DelegateSignature(bool bInputSuspended);                                                 // [0x211c0a0] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUILegacy.CommonUISubsystemLegacy.GetInputManager
	// class UCommonInputManagerLegacy* GetInputManager();                                                                   // [0x78c13b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUILegacy.CommonVisibilityWidgetLegacy
/// Size: 0x0010 (0x000320 - 0x000330)
class UCommonVisibilityWidgetLegacy : public UCommonBorder
{ 
public:
	bool                                               bShowForGamepad;                                            // 0x0320   (0x0001)  
	bool                                               bShowForMouseAndKeyboard;                                   // 0x0321   (0x0001)  
	bool                                               bShowForTouch;                                              // 0x0322   (0x0001)  
	bool                                               bShowForPC;                                                 // 0x0323   (0x0001)  
	bool                                               bShowForMac;                                                // 0x0324   (0x0001)  
	bool                                               bShowForPS4;                                                // 0x0325   (0x0001)  
	bool                                               bShowForPS5;                                                // 0x0326   (0x0001)  
	bool                                               bShowForXBox;                                               // 0x0327   (0x0001)  
	bool                                               bShowForXSX;                                                // 0x0328   (0x0001)  
	bool                                               bShowForIOS;                                                // 0x0329   (0x0001)  
	bool                                               bShowForAndroid;                                            // 0x032A   (0x0001)  
	bool                                               bShowForErebus;                                             // 0x032B   (0x0001)  
	ESlateVisibility                                   VisibleType;                                                // 0x032C   (0x0001)  
	ESlateVisibility                                   HiddenType;                                                 // 0x032D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x032E   (0x0002)  MISSED
};

/// Class /Script/CommonUILegacy.CommonWidgetStackLegacy
/// Size: 0x0010 (0x0001C8 - 0x0001D8)
class UCommonWidgetStackLegacy : public UCommonVisibilitySwitcher
{ 
public:
	SDK_UNDEFINED(16,1927) /* FMulticastInlineDelegate */ __um(OnActiveWidgetChangedLegacyEvent);                  // 0x01C8   (0x0010)  


	/// Functions
	// Function /Script/CommonUILegacy.CommonWidgetStackLegacy.PushWidget
	// void PushWidget(class UWidget* InWidget);                                                                             // [0x78c23c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonWidgetStackLegacy.PopWidget
	// class UWidget* PopWidget();                                                                                           // [0x78c2294] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonWidgetStackLegacy.OnActiveWidgetChangedLegacy__DelegateSignature
	// void OnActiveWidgetChangedLegacy__DelegateSignature(class UWidget* InActiveWidget, int32_t InActiveWidgetIndex);      // [0x211c0a0] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUILegacy.CommonWidgetStackLegacy.DeactivateWidget
	// void DeactivateWidget();                                                                                              // [0x78c0568] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonWidgetStackLegacy.ActivateWidget
	// void ActivateWidget();                                                                                                // [0x78bfd64] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/CommonUILegacy.CommonWidgetSwitcherLegacy
/// Size: 0x0028 (0x000228 - 0x000250)
class UCommonWidgetSwitcherLegacy : public UCommonAnimatedSwitcher
{ 
public:
	SDK_UNDEFINED(16,1928) /* FMulticastInlineDelegate */ __um(OnActiveWidgetDeactivated);                         // 0x0228   (0x0010)  
	SDK_UNDEFINED(16,1929) /* FMulticastInlineDelegate */ __um(OnActiveWidgetChanged);                             // 0x0238   (0x0010)  
	bool                                               bWidgetActivationEnabled;                                   // 0x0248   (0x0001)  
	bool                                               bOutroPanelBelow;                                           // 0x0249   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x024A   (0x0006)  MISSED


	/// Functions
	// Function /Script/CommonUILegacy.CommonWidgetSwitcherLegacy.SetActiveWidgetIndex_Advanced
	// void SetActiveWidgetIndex_Advanced(int32_t Index, bool AttemptActivationChange);                                      // [0x78c2dc4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonWidgetSwitcherLegacy.SetActiveWidget_Advanced
	// void SetActiveWidget_Advanced(class UWidget* Widget, bool AttemptActivationChange);                                   // [0x78c2e88] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonWidgetSwitcherLegacy.HandleActiveWidgetDeactivated
	// void HandleActiveWidgetDeactivated(class UCommonActivatablePanelLegacy* DeactivatedPanel);                            // [0x78c14c8] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonWidgetSwitcherLegacy.DeactivateWidget
	// void DeactivateWidget();                                                                                              // [0x30cb098] Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonWidgetSwitcherLegacy.ActivateWidget
	// void ActivateWidget();                                                                                                // [0x2b0bafc] Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUILegacy.CommonButtonGroupLegacy
/// Size: 0x00A0 (0x000110 - 0x0001B0)
class UCommonButtonGroupLegacy : public UCommonButtonGroupBase
{ 
public:
	SDK_UNDEFINED(16,1930) /* FMulticastInlineDelegate */ __um(OnSelectedButtonChanged);                           // 0x0110   (0x0010)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0120   (0x0018)  MISSED
	SDK_UNDEFINED(16,1931) /* FMulticastInlineDelegate */ __um(OnHoveredButtonChanged);                            // 0x0138   (0x0010)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0148   (0x0018)  MISSED
	SDK_UNDEFINED(16,1932) /* FMulticastInlineDelegate */ __um(OnButtonClicked);                                   // 0x0160   (0x0010)  
	unsigned char                                      UnknownData02_5[0x18];                                      // 0x0170   (0x0018)  MISSED
	SDK_UNDEFINED(16,1933) /* FMulticastInlineDelegate */ __um(OnButtonDoubleClicked);                             // 0x0188   (0x0010)  
	unsigned char                                      UnknownData03_6[0x18];                                      // 0x0198   (0x0018)  MISSED


	/// Functions
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.OnSelectionStateChanged
	// void OnSelectionStateChanged(class UCommonButtonLegacy* BaseButton, bool bIsSelected);                                // [0x3a8f704] Native|Protected     
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.OnHandleButtonDoubleClicked
	// void OnHandleButtonDoubleClicked(class UCommonButtonLegacy* BaseButton);                                              // [0x78c20f8] Native|Protected     
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.OnHandleButtonClicked
	// void OnHandleButtonClicked(class UCommonButtonLegacy* BaseButton);                                                    // [0x78c2074] Native|Protected     
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.OnButtonUnhovered
	// void OnButtonUnhovered(class UCommonButtonLegacy* BaseButton);                                                        // [0x62b3db8] Native|Protected     
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.OnButtonHovered
	// void OnButtonHovered(class UCommonButtonLegacy* BaseButton);                                                          // [0x78c1ff0] Native|Protected     
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleOnSelectedButtonChanged
	// void HandleOnSelectedButtonChanged(class UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex);               // [0x2a81848] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleOnHoveredButtonChanged
	// void HandleOnHoveredButtonChanged(class UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex);                // [0x78c1a6c] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleOnButtonDoubleClicked
	// void HandleOnButtonDoubleClicked(class UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex);                 // [0x78c1928] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleOnButtonClicked
	// void HandleOnButtonClicked(class UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex);                       // [0x78c1864] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnSelectedButtonChanged
	// void HandleNativeOnSelectedButtonChanged(class UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex);         // [0x78c17a0] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnHoveredButtonChanged
	// void HandleNativeOnHoveredButtonChanged(class UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex);          // [0x78c16dc] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnButtonDoubleClicked
	// void HandleNativeOnButtonDoubleClicked(class UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex);           // [0x78c1618] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnButtonClicked
	// void HandleNativeOnButtonClicked(class UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex);                 // [0x78c1554] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.GetSelectedButton
	// class UCommonButtonLegacy* GetSelectedButton();                                                                       // [0x78c13e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.GetButtonAtIndex
	// class UCommonButtonLegacy* GetButtonAtIndex(int32_t Index);                                                           // [0x78c0c4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.CreateButtonGroup
	// class UCommonButtonGroupLegacy* CreateButtonGroup(class UObject* ContextObject, bool bInSelectionRequired);           // [0x78c0498] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/CommonUILegacy.CommonUIActionRouterLegacy
/// Size: 0x0008 (0x000170 - 0x000178)
class UCommonUIActionRouterLegacy : public UCommonUIActionRouterBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0170   (0x0008)  MISSED
};

/// Struct /Script/CommonUILegacy.CommonInputActionData
/// Size: 0x05F0 (0x000360 - 0x000950)
struct FCommonInputActionData : FCommonInputActionDataBase
{ 
	SDK_UNDEFINED(80,1934) /* TMap<ECommonGamepadType, FCommonInputTypeInfo> */ __um(GamepadInputTypeInfoOverrides); // 0x0360   (0x0050)  
	FCommonInputTypeInfo                               GamepadInputTypeInfos;                                      // 0x03B0   (0x05A0)  
};

