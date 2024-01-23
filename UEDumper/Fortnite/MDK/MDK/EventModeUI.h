
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: Paper2D
/// dependency: UMG

/// Class /Script/EventModeUI.FocusButton
/// Size: 0x0010 (0x000430 - 0x000440)
class UFocusButton : public UBacchusActionButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
	CMember(class UPaperSprite*)                       StartFocusingSprite                                         OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(class UPaperSprite*)                       StopFocusingSprite                                          OFFSET(get<T>, {0x438, 8, 0, 0})


	/// Functions
	// Function /Script/EventModeUI.FocusButton.HandleEventModeFocusingChanged
	// void HandleEventModeFocusingChanged(bool bIsEventModeFocusing);                                                          // [0xb1d88ac] Final|Native|Private 
	// Function /Script/EventModeUI.FocusButton.HandleCanUseEventModeFocusChanged
	// void HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus);                                                      // [0xb1d8830] Final|Native|Private 
};

/// Class /Script/EventModeUI.FortEventModeEmotesWidget
/// Size: 0x0098 (0x000328 - 0x0003C0)
class UFortEventModeEmotesWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
	CMember(TWeakObjectPtr<UFortMontageItemDefinitionBase*>) Emote1                                                OFFSET(get<T>, {0x328, 32, 0, 0})
	CMember(TWeakObjectPtr<UFortMontageItemDefinitionBase*>) Emote2                                                OFFSET(get<T>, {0x348, 32, 0, 0})
	CMember(TWeakObjectPtr<UFortMontageItemDefinitionBase*>) Emote3                                                OFFSET(get<T>, {0x368, 32, 0, 0})
	CMember(TArray<TWeakObjectPtr<UFortMontageItemDefinitionBase*>>) RandomEmotes                                  OFFSET(get<T>, {0x388, 16, 0, 0})
	CMember(class URichTextBlock*)                     Text_Emote1                                                 OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(class URichTextBlock*)                     Text_Emote2                                                 OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(class URichTextBlock*)                     Text_Emote3                                                 OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(class URichTextBlock*)                     Text_EmoteRandom                                            OFFSET(get<T>, {0x3B8, 8, 0, 0})


	/// Functions
	// Function /Script/EventModeUI.FortEventModeEmotesWidget.OnFocusStateChanged
	// void OnFocusStateChanged(bool bIsFocusing);                                                                              // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/EventModeUI.FortEventModeEmotesWidget.OnFocusAvailableChanged
	// void OnFocusAvailableChanged(bool bIsFocusAvailable);                                                                    // [0x2177018] Event|Public|BlueprintEvent 
};

/// Class /Script/EventModeUI.FortMobileActionButtonBehavior_Focus
/// Size: 0x0008 (0x000138 - 0x000140)
class UFortMobileActionButtonBehavior_Focus : public UFortMobileActionButtonBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(class UPaperSprite*)                       StopFocusingSprite                                          OFFSET(get<T>, {0x138, 8, 0, 0})


	/// Functions
	// Function /Script/EventModeUI.FortMobileActionButtonBehavior_Focus.HandleEventModeFocusingChanged
	// void HandleEventModeFocusingChanged(bool bIsEventModeFocusing);                                                          // [0x9ff3350] Final|Native|Private 
	// Function /Script/EventModeUI.FortMobileActionButtonBehavior_Focus.HandleCanUseEventModeFocusChanged
	// void HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus);                                                      // [0x9ff33d0] Final|Native|Private 
};

