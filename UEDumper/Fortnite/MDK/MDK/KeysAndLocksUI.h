
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: GameplayTags
/// dependency: UMG

/// Class /Script/KeysAndLocksUI.KeyPlayerInfoWidget
/// Size: 0x0028 (0x000328 - 0x000350)
class UKeyPlayerInfoWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	SMember(FGameplayTag)                              KeyStatusTag                                                OFFSET(getStruct<T>, {0x330, 4, 0, 0})


	/// Functions
	// Function /Script/KeysAndLocksUI.KeyPlayerInfoWidget.OnKeyStatusActivated
	// void OnKeyStatusActivated(class AFortPlayerStateAthena* InPlayerState, bool bActivated);                                 // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/KeysAndLocksUI.KeyPlayerInfoWidget.HandleGameplayTagEvent
	// void HandleGameplayTagEvent(FGameplayTag UpdatedTag, int32_t TagCount);                                                  // [0xaa1b430] Final|Native|Protected 
};

