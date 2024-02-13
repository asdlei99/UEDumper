
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: SidewaysCodeRuntime
/// dependency: UMG

/// Class /Script/SidewaysCodeUI.SidewaysWidgetBase
/// Size: 0x0010 (0x000328 - 0x000338)
class USidewaysWidgetBase : public UFortHUDElementWidget
{ 
public:
	class AFortPlayspaceReplicatedState*               ReplicatedState;                                            // 0x0328   (0x0008)  
	ESidewaysState                                     CurrentSidewaysState;                                       // 0x0330   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0331   (0x0007)  MISSED


	/// Functions
	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.OnSidewaysStateChanged
	// void OnSidewaysStateChanged(class USidewaysStateComponent* SidewaysStateComponent, class ASidewaysPlayspace* NewPlayspace, ESidewaysState OldState, ESidewaysState NewState); // [0xac09ea8] Final|Native|Protected 
	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.OnParamUpdated
	// void OnParamUpdated(FGameplayTag& UpdatedParam);                                                                      // [0x130d900] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.OnExitSideways
	// void OnExitSideways();                                                                                                // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.OnEnterSideways
	// void OnEnterSideways(class ASidewaysPlayspace* Playspace);                                                            // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.IsValidPlayspace
	// bool IsValidPlayspace(class ASidewaysPlayspace* Playspace);                                                           // [0x130d900] Event|Protected|BlueprintEvent|Const 
	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.InitializeVariables
	// void InitializeVariables();                                                                                           // [0x130d900] Event|Protected|BlueprintEvent 
	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.HandleFortPawnChanged
	// void HandleFortPawnChanged(class AFortPawn* PossessedPawn);                                                           // [0xac09de8] Final|Native|Protected 
	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.ConfigureUIFromPlayspace
	// void ConfigureUIFromPlayspace(class ASidewaysPlayspace* Playspace);                                                   // [0x130d900] Event|Protected|BlueprintEvent 
};

