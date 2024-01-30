
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayBehaviorsModule
/// dependency: GameplayTags
/// dependency: GameplayTasks
/// dependency: SmartObjectsModule

/// Class /Script/GameplayBehaviorSmartObjectsModule.GameplayBehaviorSmartObjectBehaviorDefinition
/// Size: 0x0008 (0x000028 - 0x000030)
class UGameplayBehaviorSmartObjectBehaviorDefinition : public USmartObjectBehaviorDefinition
{ 
public:
	class UGameplayBehaviorConfig*                     GameplayBehaviorConfig;                                     // 0x0028   (0x0008)  
};

/// Class /Script/GameplayBehaviorSmartObjectsModule.AITask_UseGameplayBehaviorSmartObject
/// Size: 0x0070 (0x000068 - 0x0000D8)
class UAITask_UseGameplayBehaviorSmartObject : public UAITask
{ 
public:
	SDK_UNDEFINED(16,13760) /* FMulticastInlineDelegate */ __um(OnSucceeded);                                      // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,13761) /* FMulticastInlineDelegate */ __um(OnFailed);                                         // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,13762) /* FMulticastInlineDelegate */ __um(OnMoveToFailed);                                   // 0x0088   (0x0010)  
	class UAITask_MoveTo*                              MoveToTask;                                                 // 0x0098   (0x0008)  
	class UGameplayBehavior*                           GameplayBehavior;                                           // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x00A8   (0x0030)  MISSED


	/// Functions
	// Function /Script/GameplayBehaviorSmartObjectsModule.AITask_UseGameplayBehaviorSmartObject.UseSmartObjectWithGameplayBehavior
	// class UAITask_UseGameplayBehaviorSmartObject* UseSmartObjectWithGameplayBehavior(class AAIController* Controller, FSmartObjectClaimHandle ClaimHandle, bool bLockAILogic); // [0x7f97604] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayBehaviorSmartObjectsModule.AITask_UseGameplayBehaviorSmartObject.UseGameplayBehaviorSmartObject
	// class UAITask_UseGameplayBehaviorSmartObject* UseGameplayBehaviorSmartObject(class AAIController* Controller, class AActor* SmartObjectActor, class USmartObjectComponent* SmartObjectComponent, bool bLockAILogic); // [0x7f9734c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayBehaviorSmartObjectsModule.AITask_UseGameplayBehaviorSmartObject.MoveToAndUseSmartObjectWithGameplayBehavior
	// class UAITask_UseGameplayBehaviorSmartObject* MoveToAndUseSmartObjectWithGameplayBehavior(class AAIController* Controller, FSmartObjectClaimHandle ClaimHandle, bool bLockAILogic); // [0x7f970d8] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayBehaviorSmartObjectsModule.BTTask_FindAndUseGameplayBehaviorSmartObject
/// Size: 0x00A8 (0x000070 - 0x000118)
class UBTTask_FindAndUseGameplayBehaviorSmartObject : public UBTTaskNode
{ 
public:
	FGameplayTagQuery                                  ActivityRequirements;                                       // 0x0070   (0x0048)  
	FEQSParametrizedQueryExecutionRequest              EQSRequest;                                                 // 0x00B8   (0x0048)  
	float                                              Radius;                                                     // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x0104   (0x0014)  MISSED
};

/// Class /Script/GameplayBehaviorSmartObjectsModule.GameplayBehaviorSmartObjectsBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GameplayBehaviorSmartObjectsModule.GameplayBehaviorSmartObjectsBlueprintFunctionLibrary.UseGameplayBehaviorSmartObject
	// bool UseGameplayBehaviorSmartObject(class AActor* Avatar, class AActor* SmartObject);                                 // [0x7f974d8] Final|Native|Static|Public|BlueprintCallable 
};

