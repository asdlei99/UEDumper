
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EntityCore
/// dependency: FortniteGame
/// dependency: VerseFortnite

/// Class /Script/VerseAIBase.AIPerceptionComponentBase
/// Size: 0x0060 (0x000070 - 0x0000D0)
class UAIPerceptionComponentBase : public UAIComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0070   (0x0060)  MISSED


	/// Functions
	// Function /Script/VerseAIBase.AIPerceptionComponentBase.NotifyTargetPerceptionUpdated
	// void NotifyTargetPerceptionUpdated(class AActor* Actor, FAIStimulus Stimulus);                                        // [0xab0f328] Final|Native|Protected 
	// Function /Script/VerseAIBase.AIPerceptionComponentBase.NotifyTargetPerceptionForgotten
	// void NotifyTargetPerceptionForgotten(class AActor* Actor);                                                            // [0xab0f148] Final|Native|Protected 
};

/// Class /Script/VerseAIBase.NPCBehaviorScriptComponent
/// Size: 0x0008 (0x000120 - 0x000128)
class UNPCBehaviorScriptComponent : public UFortUserOptionContainerComponent
{ 
public:
	class UNPCBehaviorScript*                          NPCBehaviorScript;                                          // 0x0120   (0x0008)  


	/// Functions
	// Function /Script/VerseAIBase.NPCBehaviorScriptComponent.GetBehaviorScript
	// class UNPCBehaviorScript* GetBehaviorScript();                                                                        // [0xa10f9f8] Final|Native|Public|BlueprintCallable 
};

