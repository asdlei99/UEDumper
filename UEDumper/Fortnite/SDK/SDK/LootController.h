
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags

/// Class /Script/LootController.FortAthenaMutator_CR_CreativeAllowLootItem
/// Size: 0x0020 (0x000338 - 0x000358)
class AFortAthenaMutator_CR_CreativeAllowLootItem : public AFortAthenaMutator
{ 
public:
	FGameplayTagContainer                              ItemGameplayTagsNotAllowed;                                 // 0x0338   (0x0020)  


	/// Functions
	// Function /Script/LootController.FortAthenaMutator_CR_CreativeAllowLootItem.SetItemGameplayTagsNotAllowed
	// void SetItemGameplayTagsNotAllowed(FGameplayTagContainer& InItemGameplayTagsNotAllowed);                              // [0xb5d4fdc] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LootController.FortAthenaMutator_CR_LootChoice
/// Size: 0x0000 (0x000338 - 0x000338)
class AFortAthenaMutator_CR_LootChoice : public AFortAthenaMutator
{ 
public:


	/// Functions
	// Function /Script/LootController.FortAthenaMutator_CR_LootChoice.GetLootTierDataTable
	// class UDataTable* GetLootTierDataTable();                                                                             // [0x665ff84] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/LootController.FortAthenaMutator_CR_LootChoice.GetLootSelectionString
	// FString GetLootSelectionString();                                                                                     // [0x6673df0] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/LootController.FortAthenaMutator_CR_LootChoice.GetLootPackageTable
	// class UDataTable* GetLootPackageTable();                                                                              // [0x665ff84] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/LootController.FortAthenaMutator_CR_LootChoice.GetContextTagsToRemove
	// FGameplayTagContainer GetContextTagsToRemove();                                                                       // [0xb5d4868] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/LootController.FortAthenaMutator_CR_LootChoice.GetContextTagsToAdd
	// FGameplayTagContainer GetContextTagsToAdd();                                                                          // [0xb5d4868] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/LootController.LootControllerNativeComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class ULootControllerNativeComponent : public UActorComponent
{ 
public:
	TArray<class AActor*>                              OutActors;                                                  // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,14467) /* FMulticastInlineDelegate */ __um(OnAsyncGetActorsOfClassCompleted);                 // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/LootController.LootControllerNativeComponent.PrintDebugString
	// void PrintDebugString(FString DebugString, bool LogWarning);                                                          // [0xb5d4904] Final|Native|Protected|BlueprintCallable 
	// Function /Script/LootController.LootControllerNativeComponent.IsThrottleEnabled
	// bool IsThrottleEnabled();                                                                                             // [0xb5d48e8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LootController.LootControllerNativeComponent.IsRemoveLootEnabled
	// bool IsRemoveLootEnabled();                                                                                           // [0xb5d48cc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LootController.LootControllerNativeComponent.AsyncGetActorsOfClass
	// void AsyncGetActorsOfClass(class UObject* WorldContextObject, class UClass* ActorClass);                              // [0xb5d46a0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/LootController.LootControllerNativeComponent.AddToArray
	// void AddToArray(TArray<FBuildingContainersFoundEntry>& InOutBuildingContainersFoundArray, int32_t InBuildingContainerFoundIndex, FBuildingContainersArrayEntry& InBuildingContainerToAdd); // [0xb5d44a4] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Struct /Script/LootController.BuildingContainersArrayEntry
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FBuildingContainersArrayEntry
{ 
	class ABuildingContainer*                          BuildingContainer;                                          // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
	FName                                              SearchLootTierGroup;                                        // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	FGameplayTagContainer                              GameplayTags;                                               // 0x0078   (0x0020)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0098   (0x0008)  MISSED
};

/// Struct /Script/LootController.BuildingContainersFoundEntry
/// Size: 0x0018 (0x000000 - 0x000018)
struct FBuildingContainersFoundEntry
{ 
	FGameplayTag                                       GameplayTag;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FBuildingContainersArrayEntry>              BuildingContainers;                                         // 0x0008   (0x0010)  
};

