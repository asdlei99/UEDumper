
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: PilgrimCoreUI

/// Class /PilgrimCore/BP_PilgrimPresetSelector.BP_PilgrimPresetSelector_C
/// Size: 0x0010 (0x000048 - 0x000058)
class UBP_PilgrimPresetSelector_C : public UPilgrimPresetSelector
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x48, 8, 0, 0})
	CMember(class UPilgrimPresetSwitcher*)             As_Pilgrim_Preset_Switcher_Widget                           OFFSET(get<T>, {0x50, 8, 0, 0})


	/// Functions
	// Function /PilgrimCore/BP_PilgrimPresetSelector.BP_PilgrimPresetSelector_C.OnComplete_274EE33944C9AE07DF8BE0B56A5DE4BC
	// void OnComplete_274EE33944C9AE07DF8BE0B56A5DE4BC(class UUserWidget* UserWidget);                                         // [0x2047e54] BlueprintCallable|BlueprintEvent 
	// Function /PilgrimCore/BP_PilgrimPresetSelector.BP_PilgrimPresetSelector_C.DialogResult_4F9481524E7A6435C967A0AEA571B86B
	// void DialogResult_4F9481524E7A6435C967A0AEA571B86B(EFortDialogResult Result, FName ResultName);                          // [0x2047e54] BlueprintCallable|BlueprintEvent 
	// Function /PilgrimCore/BP_PilgrimPresetSelector.BP_PilgrimPresetSelector_C.OnPresetSelectionRequested
	// void OnPresetSelectionRequested(class APlayerController* Player);                                                        // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /PilgrimCore/BP_PilgrimPresetSelector.BP_PilgrimPresetSelector_C.ExecuteUbergraph_BP_PilgrimPresetSelector
	// void ExecuteUbergraph_BP_PilgrimPresetSelector(int32_t EntryPoint);                                                      // [0x2047e54] Final                
};

