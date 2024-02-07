
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: StateTreeModule

/// Class /Script/GameplayStateTreeModule.StateTreeComponent
/// Size: 0x0050 (0x0000F8 - 0x000148)
class UStateTreeComponent : public UBrainComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F8   (0x0008)  MISSED
	SDK_UNDEFINED(16,13230) /* FMulticastInlineDelegate */ __um(OnStateTreeRunStatusChanged);                      // 0x0100   (0x0010)  
	FStateTreeReference                                StateTreeRef;                                               // 0x0110   (0x0018)  
	bool                                               bStartLogicAutomatically;                                   // 0x0128   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0129   (0x0007)  MISSED
	FStateTreeInstanceData                             InstanceData;                                               // 0x0130   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0140   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayStateTreeModule.StateTreeComponent.SetStartLogicAutomatically
	// void SetStartLogicAutomatically(bool bInStartLogicAutomatically);                                                     // [0xb3b97b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayStateTreeModule.StateTreeComponent.SendStateTreeEvent
	// void SendStateTreeEvent(FStateTreeEvent& Event);                                                                      // [0xb3b96c4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayStateTreeModule.StateTreeComponent.GetStateTreeRunStatus
	// EStateTreeRunStatus GetStateTreeRunStatus();                                                                          // [0xb3b968c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GameplayStateTreeModule.StateTreeComponentSchema
/// Size: 0x0018 (0x000028 - 0x000040)
class UStateTreeComponentSchema : public UStateTreeSchema
{ 
public:
	class UClass*                                      ContextActorClass;                                          // 0x0028   (0x0008)  
	FStateTreeExternalDataDesc                         ContextActorDataDesc;                                       // 0x0030   (0x0010)  
};

