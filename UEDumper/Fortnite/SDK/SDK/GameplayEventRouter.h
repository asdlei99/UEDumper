
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/GameplayEventRouter.EEventBubblingRule
/// Size: 0x04
enum class EEventBubblingRule : uint8_t
{
	EEventBubblingRule__None                                                         = 0,
	EEventBubblingRule__Down                                                         = 1,
	EEventBubblingRule__Up                                                           = 2,
	EEventBubblingRule__EEventBubblingRule_MAX                                       = 3
};

/// Class /Script/GameplayEventRouter.AsyncAction_StartListeningToEvent
/// Size: 0x0088 (0x000030 - 0x0000B8)
class UAsyncAction_StartListeningToEvent : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,2285) /* FMulticastInlineDelegate */ __um(OnEventReceived);                                   // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x78];                                      // 0x0040   (0x0078)  MISSED


	/// Functions
	// Function /Script/GameplayEventRouter.AsyncAction_StartListeningToEvent.StopListeningToEvent
	// void StopListeningToEvent();                                                                                          // [0x201202c] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayEventRouter.AsyncAction_StartListeningToEvent.StartListeningToEventBackwardCompatible
	// class UAsyncAction_StartListeningToEvent* StartListeningToEventBackwardCompatible(class UObject* WorldContextObject, FEventMessageTag Channel, class UGameplayEventRouterComponent* Target, class UScriptStruct* EventType, class UObject* Context, EEventBubblingRule EventBubblingRule); // [0x2e23340] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayEventRouter.AsyncAction_StartListeningToEvent.StartListeningToEvent
	// class UAsyncAction_StartListeningToEvent* StartListeningToEvent(class UObject* WorldContextObject, class UGameplayEventRouterComponent* Target, class UScriptStruct* EventType, class UObject* Context, EEventBubblingRule EventBubblingRule); // [0x2e23904] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayEventRouter.AsyncAction_StartListeningToEvent.GetPayload
	// bool GetPayload(int32_t& OutPayload);                                                                                 // [0x2b64b60] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent
/// Size: 0x00A8 (0x000030 - 0x0000D8)
class UAsyncAction_StartListeningToStatefulEvent : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,2286) /* FMulticastInlineDelegate */ __um(OnEventReceived);                                   // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,2287) /* FMulticastInlineDelegate */ __um(OnSavedEventStateExists);                           // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,2288) /* FMulticastInlineDelegate */ __um(OnEventStateCleared);                               // 0x0050   (0x0010)  
	unsigned char                                      UnknownData00_6[0x78];                                      // 0x0060   (0x0078)  MISSED


	/// Functions
	// Function /Script/GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent.StopListeningToStatefulEvent
	// void StopListeningToStatefulEvent();                                                                                  // [0x201202c] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent.StartListeningToStatefulEventBackwardsCompatible
	// class UAsyncAction_StartListeningToStatefulEvent* StartListeningToStatefulEventBackwardsCompatible(class UObject* WorldContextObject, FEventMessageTag Channel, class UGameplayEventRouterComponent* Target, class UScriptStruct* EventType, class UObject* Context, EEventBubblingRule EventBubblingRule); // [0x6beebc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent.StartListeningToStatefulEvent
	// class UAsyncAction_StartListeningToStatefulEvent* StartListeningToStatefulEvent(class UObject* WorldContextObject, class UGameplayEventRouterComponent* Target, class UScriptStruct* EventType, class UObject* Context, EEventBubblingRule EventBubblingRule); // [0x2e23554] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent.GetPayload
	// bool GetPayload(int32_t& OutPayload);                                                                                 // [0x2c71250] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayEventRouter.GameplayEventRouterComponent
/// Size: 0x0238 (0x0000A0 - 0x0002D8)
class UGameplayEventRouterComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x238];                                     // 0x00A0   (0x0238)  MISSED


	/// Functions
	// Function /Script/GameplayEventRouter.GameplayEventRouterComponent.StopListeningToEvent
	// void StopListeningToEvent(FGameplayEventListenerHandle& HandleToRemove);                                              // [0x6beeef0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayEventRouter.GameplayEventRouterComponent.K2_BroadcastStatefulEvent
	// bool K2_BroadcastStatefulEvent(int32_t& EventData, class UObject* EventContext);                                      // [0x6bee660] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayEventRouter.GameplayEventRouterComponent.K2_BroadcastEvent
	// bool K2_BroadcastEvent(int32_t& EventData, class UObject* EventContext);                                              // [0x32e921c] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayEventRouter.GameplayEventRouterComponent.HasValidEventState
	// bool HasValidEventState(class UScriptStruct* EventType, class UObject* Context);                                      // [0x6bedff0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayEventRouter.GameplayEventRouterComponent.ClearEventStateByContext
	// void ClearEventStateByContext(class UScriptStruct* EventType, class UObject* Context);                                // [0x6bedbb4] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayEventRouter.GameplayEventRouterComponent.ClearEventState
	// void ClearEventState(class UScriptStruct* EventType);                                                                 // [0x6bed78c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayEventRouter.GameplayEventRouterOwnerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayEventRouterOwnerInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/GameplayEventRouter.GameplayEventRouterOwnerInterface.GetEventRouterClass
	// class UClass* GetEventRouterClass();                                                                                  // [0x2101b04] Native|Event|Protected|BlueprintEvent|Const 
};

/// Struct /Script/GameplayEventRouter.GameplayEventGlobalRouterPendingListenerData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FGameplayEventGlobalRouterPendingListenerData
{ 
	unsigned char                                      UnknownData00_2[0xE0];                                      // 0x0000   (0x00E0)  MISSED
	class UScriptStruct*                               EventType;                                                  // 0x00E0   (0x0008)  
	class UObject*                                     EventContext;                                               // 0x00E8   (0x0008)  
};

/// Class /Script/GameplayEventRouter.GameplayEventRouterSubsystem
/// Size: 0x0168 (0x000030 - 0x000198)
class UGameplayEventRouterSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_2[0x158];                                     // 0x0030   (0x0158)  MISSED
	TArray<FGameplayEventGlobalRouterPendingListenerData> PendingGlobalRouterListenerDatas;                        // 0x0188   (0x0010)  


	/// Functions
	// Function /Script/GameplayEventRouter.GameplayEventRouterSubsystem.K2_BroadcastStatefulEventBackwardCompatible
	// bool K2_BroadcastStatefulEventBackwardCompatible(class UObject* WorldContextObject, class UGameplayEventRouterComponent* Target, FEventMessageTag Channel, int32_t& EventData, class UObject* EventContext); // [0x6bee7f8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayEventRouter.GameplayEventRouterSubsystem.K2_BroadcastEventBackwardCompatible
	// bool K2_BroadcastEventBackwardCompatible(class UObject* WorldContextObject, class UGameplayEventRouterComponent* Target, FEventMessageTag Channel, int32_t& EventData, class UObject* EventContext); // [0x6bee298] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayEventRouter.GameplayEventRouterSubsystem.GetGlobalEventRouter
	// class UGameplayEventRouterComponent* GetGlobalEventRouter(class UObject* WorldContextObject);                         // [0x2101cd8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayEventRouter.GameplayEventRouterSubsystem.GetEventRouter
	// class UGameplayEventRouterComponent* GetEventRouter(class UClass* Scope, class AActor* ContextActor);                 // [0x3140c98] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayEventRouter.GameplayEventRouterSubsystem.ClearEventStateByContextBackwardCompatible
	// void ClearEventStateByContextBackwardCompatible(class UObject* WorldContextObject, FEventMessageTag Channel, class UGameplayEventRouterComponent* Target, class UScriptStruct* EventType, class UObject* Context); // [0x6bedcf4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayEventRouter.GameplayEventRouterSubsystem.ClearEventStateBackwardCompatible
	// void ClearEventStateBackwardCompatible(class UObject* WorldContextObject, FEventMessageTag Channel, class UGameplayEventRouterComponent* Target, class UScriptStruct* EventType); // [0x6bed8c4] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/GameplayEventRouter.GameplayEventId
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGameplayEventId
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/GameplayEventRouter.GameplayEventListenerHandle
/// Size: 0x001C (0x000000 - 0x00001C)
struct FGameplayEventListenerHandle
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
	int32_t                                            Handle;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0014   (0x0008)  MISSED
};

/// Struct /Script/GameplayEventRouter.GameplayEventListenerBackwardCompatibleHandle
/// Size: 0x0048 (0x000000 - 0x000048)
struct FGameplayEventListenerBackwardCompatibleHandle
{ 
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0000   (0x0048)  MISSED
};

/// Struct /Script/GameplayEventRouter.GameplayEventListenerData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FGameplayEventListenerData
{ 
	unsigned char                                      UnknownData00_2[0xC0];                                      // 0x0000   (0x00C0)  MISSED
	class UScriptStruct*                               EventType;                                                  // 0x00C0   (0x0008)  
	class UObject*                                     EventContext;                                               // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x00D0   (0x0020)  MISSED
};

/// Struct /Script/GameplayEventRouter.GameplayEventListenerList
/// Size: 0x0038 (0x000000 - 0x000038)
struct FGameplayEventListenerList
{ 
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0000   (0x0038)  MISSED
};

