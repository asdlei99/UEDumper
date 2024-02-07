
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: AnimPresetsRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EntityCore
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: VerseGameplayTags

/// Enum /Script/VerseFortnite.ECharacterLook
/// Size: 0x03
enum class ECharacterLook : uint8_t
{
	ECharacterLook__FortniteCharacter                                                = 0,
	ECharacterLook__CharacterBlueprint                                               = 1,
	ECharacterLook__ECharacterLook_MAX                                               = 2
};

/// Enum /Script/VerseFortnite.ENPCCharacterMovement
/// Size: 0x04
enum class ENPCCharacterMovement : uint8_t
{
	ENPCCharacterMovement__Default                                                   = 0,
	ENPCCharacterMovement__RetargetFromFortniteCharacter                             = 1,
	ENPCCharacterMovement__AnimationPreset                                           = 2,
	ENPCCharacterMovement__ENPCCharacterMovement_MAX                                 = 3
};

/// Enum /Script/VerseFortnite.ETeamOption
/// Size: 0x04
enum class ETeamOption : uint8_t
{
	ETeamOption__Index                                                               = 0,
	ETeamOption__WildlifeAndCreature                                                 = 1,
	ETeamOption__Neutral                                                             = 2,
	ETeamOption__ETeamOption_MAX                                                     = 3
};

/// Class /Script/VerseFortnite.VerseActorPayloadWrapper
/// Size: 0x0008 (0x000290 - 0x000298)
class AVerseActorPayloadWrapper : public AActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0290   (0x0008)  MISSED
};

/// Class /Script/VerseFortnite.GameplayAbility_PlayAnim
/// Size: 0x0008 (0x0003B8 - 0x0003C0)
class UGameplayAbility_PlayAnim : public UGameplayAbility
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x03B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/VerseFortnite.GameplayAbility_PlayAnim.OnInterrupted
	// void OnInterrupted();                                                                                                 // [0xa7ceab4] Final|Native|Public  
	// Function /Script/VerseFortnite.GameplayAbility_PlayAnim.OnCompleted
	// void OnCompleted();                                                                                                   // [0xa7ceaa0] Final|Native|Public  
	// Function /Script/VerseFortnite.GameplayAbility_PlayAnim.OnCancelled
	// void OnCancelled();                                                                                                   // [0xa7cea8c] Final|Native|Public  
	// Function /Script/VerseFortnite.GameplayAbility_PlayAnim.OnBlendOut
	// void OnBlendOut();                                                                                                    // [0xa7cea78] Final|Native|Public  
	// Function /Script/VerseFortnite.GameplayAbility_PlayAnim.OnBlendIn
	// void OnBlendIn();                                                                                                     // [0xa7cea64] Final|Native|Public  
};

/// Class /Script/VerseFortnite.NPCCharacterModifier
/// Size: 0x0000 (0x000028 - 0x000028)
class UNPCCharacterModifier : public UObject
{ 
public:


	/// Functions
	// Function /Script/VerseFortnite.NPCCharacterModifier.GetCharacterDefinition
	// class UNPCCharacterDefinition* GetCharacterDefinition();                                                              // [0xa7ccacc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortnite.NPCCharacterModifier.BP_OnSpawned
	// void BP_OnSpawned(class AFortPawn* Pawn);                                                                             // [0xa7cb188] Native|Event|Public|BlueprintEvent 
	// Function /Script/VerseFortnite.NPCCharacterModifier.BP_OnPreSpawned
	// void BP_OnPreSpawned(class AFortPawn* Pawn);                                                                          // [0x6f1b5ec] Native|Event|Public|BlueprintEvent 
	// Function /Script/VerseFortnite.NPCCharacterModifier.BP_ModifySpawnComponentList
	// void BP_ModifySpawnComponentList(class UFortAthenaAISpawnerDataComponentList* OutList, class UObject* ComponentOuter); // [0xa7cb044] Native|Event|Public|BlueprintEvent 
	// Function /Script/VerseFortnite.NPCCharacterModifier.BP_IsNeededForPreview
	// bool BP_IsNeededForPreview();                                                                                         // [0x605e7ac] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/VerseFortnite.NPCCharacterModifier.BP_IsDataValid
	// EDataValidationResult BP_IsDataValid(TArray<FText>& OutErrorMessages);                                                // [0xa7caf94] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/VerseFortnite.NPCCharacterModifier_Verse
/// Size: 0x0000 (0x000028 - 0x000028)
class UNPCCharacterModifier_Verse : public UNPCCharacterModifier
{ 
public:
};

/// Class /Script/VerseFortnite.AIComponent
/// Size: 0x0018 (0x000058 - 0x000070)
class UAIComponent : public UEntityComponent
{ 
public:
	class AFortPawn*                                   CachedPawn;                                                 // 0x0058   (0x0008)  
	class AAIController*                               CachedAIController;                                         // 0x0060   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
};

/// Class /Script/VerseFortnite.AIActionsComponent
/// Size: 0x0020 (0x000070 - 0x000090)
class UAIActionsComponent : public UAIComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0070   (0x0020)  MISSED
};

/// Class /Script/VerseFortnite.AIAnimationComponent
/// Size: 0x0018 (0x000090 - 0x0000A8)
class UAIAnimationComponent : public UAIActionsComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0090   (0x0008)  MISSED
	class UClass*                                      PlayAnimGameplayAbility;                                    // 0x0098   (0x0008)  
	FName                                              DefaultSlot;                                                // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
};

/// Class /Script/VerseFortnite.PlayAnimationGlobals
/// Size: 0x0000 (0x000028 - 0x000028)
class UPlayAnimationGlobals : public UObject
{ 
public:
};

/// Class /Script/VerseFortnite.PlayAnimationPlayPayload
/// Size: 0x0028 (0x000028 - 0x000050)
class UPlayAnimationPlayPayload : public UObject
{ 
public:
	class UAnimSequence*                               Animation;                                                  // 0x0028   (0x0008)  
	float                                              PlayRate;                                                   // 0x0030   (0x0004)  
	float                                              StartPosition;                                              // 0x0034   (0x0004)  
	float                                              BlendInTime;                                                // 0x0038   (0x0004)  
	float                                              BlendOutTime;                                               // 0x003C   (0x0004)  
	FName                                              Slot;                                                       // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0044   (0x000C)  MISSED
};

/// Class /Script/VerseFortnite.VerseFortniteBRTeamCollection
/// Size: 0x0068 (0x000028 - 0x000090)
class UVerseFortniteBRTeamCollection : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0028   (0x0068)  MISSED


	/// Functions
	// Function /Script/VerseFortnite.VerseFortniteBRTeamCollection.OnActiveTeamArrayBuilt
	// void OnActiveTeamArrayBuilt();                                                                                        // [0xa7ce990] Final|Native|Private 
};

/// Class /Script/VerseFortnite.VerseFortniteMinigameTeamCollection
/// Size: 0x0020 (0x000028 - 0x000048)
class UVerseFortniteMinigameTeamCollection : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED


	/// Functions
	// Function /Script/VerseFortnite.VerseFortniteMinigameTeamCollection.OnMinigameSetup
	// void OnMinigameSetup(class AFortMinigame* InMinigame);                                                                // [0xa7ced20] Final|Native|Private 
	// Function /Script/VerseFortnite.VerseFortniteMinigameTeamCollection.OnMinigameDestroyed
	// void OnMinigameDestroyed(class AActor* DestroyedMinigame);                                                            // [0xa7ceac8] Final|Native|Private 
};

/// Class /Script/VerseFortnite.AIActionsHandlerComponent
/// Size: 0x0040 (0x0000A0 - 0x0000E0)
class UAIActionsHandlerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x00A0   (0x0040)  MISSED
};

/// Class /Script/VerseFortnite.FortAthenaAISpawnerDataComponent_Verse
/// Size: 0x0030 (0x000030 - 0x000060)
class UFortAthenaAISpawnerDataComponent_Verse : public UFortAthenaAISpawnerDataComponent_ScriptBase
{ 
public:
	TArray<class UClass*>                              EntityComponents;                                           // 0x0030   (0x0010)  
	TArray<class UAIComponent*>                        AIComponents;                                               // 0x0040   (0x0010)  
	class UNPCBehaviorScript*                          NPCBehaviorScriptInstance;                                  // 0x0050   (0x0008)  
	SDK_UNDEFINED(8,9195) /* TWeakObjectPtr<UNPCBehaviorScript*> */ __um(NPCBehaviorScript);                       // 0x0058   (0x0008)  


	/// Functions
	// Function /Script/VerseFortnite.FortAthenaAISpawnerDataComponent_Verse.SetNPCBehaviorScript
	// void SetNPCBehaviorScript(class UNPCBehaviorScript* InAIBehaviorScript);                                              // [0xa7cef10] Final|Native|Public|BlueprintCallable 
	// Function /Script/VerseFortnite.FortAthenaAISpawnerDataComponent_Verse.AddUniqueEntityComponent
	// void AddUniqueEntityComponent(class UClass* EntityComponent);                                                         // [0xa7cae1c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/VerseFortnite.NPCBehaviorScript
/// Size: 0x0000 (0x000070 - 0x000070)
class UNPCBehaviorScript : public UAIComponent
{ 
public:
};

/// Class /Script/VerseFortnite.LoadNPCCharacterDefinitionAsyncBase
/// Size: 0x0040 (0x000030 - 0x000070)
class ULoadNPCCharacterDefinitionAsyncBase : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(8,9196) /* TWeakObjectPtr<UNPCCharacterDefinition*> */ __um(LoadedCharacterDefinition);          // 0x0030   (0x0008)  
	SDK_UNDEFINED(8,9197) /* TWeakObjectPtr<UObject*> */ __um(ContextObject);                                      // 0x0038   (0x0008)  
	TArray<class UNPCCharacterModifier*>               StoredAdditionalModifiers;                                  // 0x0040   (0x0010)  
	SDK_UNDEFINED(32,9198) /* TWeakObjectPtr<UNPCCharacterDefinition*> */ __um(StoredCharacterDefinition);         // 0x0050   (0x0020)  
};

/// Class /Script/VerseFortnite.LoadNPCCharacterDefinitionAsync
/// Size: 0x0010 (0x000070 - 0x000080)
class ULoadNPCCharacterDefinitionAsync : public ULoadNPCCharacterDefinitionAsyncBase
{ 
public:
	SDK_UNDEFINED(16,9199) /* FMulticastInlineDelegate */ __um(OnLoaded);                                          // 0x0070   (0x0010)  


	/// Functions
	// Function /Script/VerseFortnite.LoadNPCCharacterDefinitionAsync.LoadCharacterDefinitionAsync
	// class ULoadNPCCharacterDefinitionAsync* LoadCharacterDefinitionAsync(class UObject* ContextObj, TWeakObjectPtr<UNPCCharacterDefinition*> CharacterDefinition, TArray<UNPCCharacterModifier*>& AdditionalModifiers); // [0xa7ce098] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/VerseFortnite.LoadAndCreateComponentListAsync
/// Size: 0x0020 (0x000070 - 0x000090)
class ULoadAndCreateComponentListAsync : public ULoadNPCCharacterDefinitionAsyncBase
{ 
public:
	SDK_UNDEFINED(16,9200) /* FMulticastInlineDelegate */ __um(OnFinished);                                        // 0x0070   (0x0010)  
	SDK_UNDEFINED(8,9201) /* TWeakObjectPtr<UFortAthenaAISpawnerDataComponentList*> */ __um(ComponentsList);       // 0x0080   (0x0008)  
	bool                                               bStoredForPreview;                                          // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0089   (0x0007)  MISSED


	/// Functions
	// Function /Script/VerseFortnite.LoadAndCreateComponentListAsync.LoadAndCreateComponentListAsync
	// class ULoadAndCreateComponentListAsync* LoadAndCreateComponentListAsync(class UObject* ContextObj, TWeakObjectPtr<UNPCCharacterDefinition*> CharacterDefinition, TArray<UNPCCharacterModifier*>& AdditionalModifiers, bool bForPreview); // [0xa7cd698] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/VerseFortnite.NPCCharacterDefinition
/// Size: 0x0040 (0x000138 - 0x000178)
class UNPCCharacterDefinition : public UFortAIPawnCustomizationDefinition
{ 
public:
	SDK_UNDEFINED(16,9202) /* FMulticastInlineDelegate */ __um(OnCharacterModifierModified);                       // 0x0138   (0x0010)  
	SDK_UNDEFINED(16,9203) /* FMulticastInlineDelegate */ __um(OnCharacterTypeModified);                           // 0x0148   (0x0010)  
	class UNPCCharacterType*                           Type;                                                       // 0x0158   (0x0008)  
	class UNPCCharacterModifier_Behavior*              Behavior;                                                   // 0x0160   (0x0008)  
	TArray<class UNPCCharacterModifier*>               Modifiers;                                                  // 0x0168   (0x0010)  


	/// Functions
	// Function /Script/VerseFortnite.NPCCharacterDefinition.GetRequiredAssets
	// void GetRequiredAssets(TArray<FSoftObjectPath>& OutAssets);                                                           // [0xa7cd328] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortnite.NPCCharacterDefinition.GetPreviewMesh
	// void GetPreviewMesh(class UObject* Outer, TArray<UNPCCharacterModifier*>& AdditionalModifiers, TArray<FCharacterPreviewMesh>& OutCharacterPreviewMeshes, class APawn*& OutDefaultPawn); // [0xa7ccb50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortnite.NPCCharacterDefinition.GetCharacterCID
	// class UAthenaCharacterItemDefinition* GetCharacterCID(class UObject* Outer, TArray<UNPCCharacterModifier*>& AdditionalModifiers); // [0xa7cc1ac] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortnite.NPCCharacterDefinition.GetCharacterBlueprint
	// class UClass* GetCharacterBlueprint(TArray<UNPCCharacterModifier*>& AdditionalModifiers);                             // [0xa7cbafc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortnite.NPCCharacterDefinition.CreateComponentList
	// class UFortAthenaAISpawnerDataComponentList* CreateComponentList(class UObject* Outer, TArray<UNPCCharacterModifier*>& AdditionalModifiers, bool bForPreview); // [0xa7cb24c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VerseFortnite.NPCCharacterDefinitionComponent
/// Size: 0x0030 (0x000120 - 0x000150)
class UNPCCharacterDefinitionComponent : public UFortUserOptionContainerComponent
{ 
public:
	SDK_UNDEFINED(32,9204) /* TWeakObjectPtr<UNPCCharacterDefinition*> */ __um(NPCCharacterDefinition);            // 0x0120   (0x0020)  
	TArray<class UNPCCharacterModifier*>               NPCCharacterModifiers;                                      // 0x0140   (0x0010)  


	/// Functions
	// Function /Script/VerseFortnite.NPCCharacterDefinitionComponent.SetNPCCharacterDefinition
	// void SetNPCCharacterDefinition(TWeakObjectPtr<UNPCCharacterDefinition*> Definition);                                  // [0xa7cf048] Final|Native|Public|BlueprintCallable 
	// Function /Script/VerseFortnite.NPCCharacterDefinitionComponent.OnNPCCharacterTypeChanged
	// void OnNPCCharacterTypeChanged();                                                                                     // [0x307d48c] Final|Native|Public|BlueprintCallable 
	// Function /Script/VerseFortnite.NPCCharacterDefinitionComponent.GetNPCCharacterModifiers
	// TArray<UNPCCharacterModifier*> GetNPCCharacterModifiers();                                                            // [0xa7ccb34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortnite.NPCCharacterDefinitionComponent.GetNPCCharacterDefinition
	// TWeakObjectPtr<UNPCCharacterDefinition*> GetNPCCharacterDefinition();                                                 // [0xa7ccaf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VerseFortnite.NPCCharacterModifier_Behavior
/// Size: 0x0000 (0x000028 - 0x000028)
class UNPCCharacterModifier_Behavior : public UNPCCharacterModifier
{ 
public:
};

/// Class /Script/VerseFortnite.NPCCharacterModifier_CosmeticSpawn
/// Size: 0x00E8 (0x000028 - 0x000110)
class UNPCCharacterModifier_CosmeticSpawn : public UNPCCharacterModifier
{ 
public:
	ECharacterLook                                     CharacterLook;                                              // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	SDK_UNDEFINED(32,9205) /* TWeakObjectPtr<UAthenaCharacterItemDefinition*> */ __um(CharacterCosmetic);          // 0x0030   (0x0020)  
	SDK_UNDEFINED(16,9206) /* FString */               __um(CharacterCosmeticAssetId);                             // 0x0050   (0x0010)  
	SDK_UNDEFINED(32,9207) /* TWeakObjectPtr<UClass*> */ __um(CharacterBlueprint);                                 // 0x0060   (0x0020)  
	ENPCCharacterMovement                              CharacterMovement;                                          // 0x0080   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0081   (0x0007)  MISSED
	SDK_UNDEFINED(32,9208) /* TWeakObjectPtr<UClass*> */ __um(AnimPreset);                                         // 0x0088   (0x0020)  
	FAnimPresetRetargetData                            Retargeter;                                                 // 0x00A8   (0x0040)  
	SDK_UNDEFINED(32,9209) /* TWeakObjectPtr<UIKRetargeter*> */ __um(IKRetargeter);                                // 0x00E8   (0x0020)  
	bool                                               bSupportAnimPreset : 1;                                     // 0x0108:0 (0x0001)  
	bool                                               bSupportCharacterMovement : 1;                              // 0x0108:1 (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0109   (0x0007)  MISSED


	/// Functions
	// Function /Script/VerseFortnite.NPCCharacterModifier_CosmeticSpawn.GetCharacterCosmetic
	// TWeakObjectPtr<UAthenaCharacterItemDefinition*> GetCharacterCosmetic();                                               // [0xa7cca88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/VerseFortnite.CharacterModifierEmote
/// Size: 0x0020 (0x000000 - 0x000020)
struct FCharacterModifierEmote
{ 
	SDK_UNDEFINED(32,9210) /* TWeakObjectPtr<UAthenaDanceItemDefinition*> */ __um(EmoteDefinition);                // 0x0000   (0x0020)  
};

/// Class /Script/VerseFortnite.NPCCharacterModifier_Emotes
/// Size: 0x0010 (0x000028 - 0x000038)
class UNPCCharacterModifier_Emotes : public UNPCCharacterModifier
{ 
public:
	TArray<FCharacterModifierEmote>                    Emotes;                                                     // 0x0028   (0x0010)  
};

/// Struct /Script/VerseFortnite.CharacterModifierInventoryItem
/// Size: 0x0028 (0x000000 - 0x000028)
struct FCharacterModifierInventoryItem
{ 
	SDK_UNDEFINED(32,9211) /* TWeakObjectPtr<UFortItemDefinition*> */ __um(ItemDefinition);                        // 0x0000   (0x0020)  
	int32_t                                            ItemQuantity;                                               // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Class /Script/VerseFortnite.NPCCharacterModifier_Inventory
/// Size: 0x0030 (0x000028 - 0x000058)
class UNPCCharacterModifier_Inventory : public UNPCCharacterModifier
{ 
public:
	TArray<FCharacterModifierInventoryItem>            Items;                                                      // 0x0028   (0x0010)  
	FGameplayTagContainer                              SupportedItemTags;                                          // 0x0038   (0x0020)  
};

/// Class /Script/VerseFortnite.NPCCharacterModifier_PatrolPath
/// Size: 0x0008 (0x000028 - 0x000030)
class UNPCCharacterModifier_PatrolPath : public UNPCCharacterModifier
{ 
public:
	EFortCreativePatrolPathGroup                       PatrolPathGroup;                                            // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED


	/// Functions
	// Function /Script/VerseFortnite.NPCCharacterModifier_PatrolPath.GetPatrolPathToAssign
	// class AFortAthenaPatrolPath* GetPatrolPathToAssign(class AActor* ModifierOwner);                                      // [0x2047e54] Event|Public|BlueprintEvent 
};

/// Class /Script/VerseFortnite.NPCCharacterModifier_Team
/// Size: 0x0008 (0x000028 - 0x000030)
class UNPCCharacterModifier_Team : public UNPCCharacterModifier
{ 
public:
	ETeamOption                                        TeamOption;                                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	uint32_t                                           TeamIndex;                                                  // 0x002C   (0x0004)  
};

/// Class /Script/VerseFortnite.NPCCharacterModifier_UI
/// Size: 0x0018 (0x000028 - 0x000040)
class UNPCCharacterModifier_UI : public UNPCCharacterModifier
{ 
public:
	SDK_UNDEFINED(24,9212) /* FText */                 __um(DisplayName);                                          // 0x0028   (0x0018)  
};

/// Class /Script/VerseFortnite.NPCCharacterModifier_VerseBehavior
/// Size: 0x0008 (0x000028 - 0x000030)
class UNPCCharacterModifier_VerseBehavior : public UNPCCharacterModifier_Behavior
{ 
public:
	class UNPCBehaviorScript*                          NPCBehaviorScript;                                          // 0x0028   (0x0008)  
};

/// Class /Script/VerseFortnite.NPCCharacterType
/// Size: 0x0038 (0x000028 - 0x000060)
class UNPCCharacterType : public UObject
{ 
public:
	FGameplayTag                                       CharacterDefinitionTag;                                     // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	SDK_UNDEFINED(16,9213) /* TArray<TWeakObjectPtr<UClass*>> */ __um(SupportedModifiers);                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,9214) /* TArray<TWeakObjectPtr<UClass*>> */ __um(UnsupportedAdditionalModifiers);             // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,9215) /* TArray<TWeakObjectPtr<UClass*>> */ __um(DefaultModifiers);                           // 0x0050   (0x0010)  


	/// Functions
	// Function /Script/VerseFortnite.NPCCharacterType.IsPlayerCharacterRequired
	// bool IsPlayerCharacterRequired(ECharacterLook CharacterLook);                                                         // [0xa7cd5c4] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/VerseFortnite.NPCCharacterType_Custom
/// Size: 0x0060 (0x000060 - 0x0000C0)
class UNPCCharacterType_Custom : public UNPCCharacterType
{ 
public:
	SDK_UNDEFINED(32,9216) /* TWeakObjectPtr<UFortAIPawnCustomizationDefinition*> */ __um(DefaultCosmetics);       // 0x0060   (0x0020)  
	SDK_UNDEFINED(32,9217) /* TWeakObjectPtr<UClass*> */ __um(AISpawnerData);                                      // 0x0080   (0x0020)  
	SDK_UNDEFINED(32,9218) /* TWeakObjectPtr<UClass*> */ __um(PlayerSpawnerData);                                  // 0x00A0   (0x0020)  
};

/// Struct /Script/VerseFortnite.CharacterTypePreset
/// Size: 0x0040 (0x000000 - 0x000040)
struct FCharacterTypePreset
{ 
	SDK_UNDEFINED(32,9219) /* TWeakObjectPtr<UClass*> */ __um(SpawnerData);                                        // 0x0000   (0x0020)  
	SDK_UNDEFINED(32,9220) /* TWeakObjectPtr<UClass*> */ __um(AdditionalData);                                     // 0x0020   (0x0020)  
};

/// Class /Script/VerseFortnite.NPCCharacterType_FromPreset
/// Size: 0x0060 (0x000060 - 0x0000C0)
class UNPCCharacterType_FromPreset : public UNPCCharacterType
{ 
public:
	SDK_UNDEFINED(16,9221) /* FString */               __um(SelectedAI);                                           // 0x0060   (0x0010)  
	FCharacterTypePreset                               SelectedPreset;                                             // 0x0070   (0x0040)  
	TArray<FCharacterTypePreset>                       Presets;                                                    // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/VerseFortnite.NPCCharacterType_FromPreset.GetAvailableAIs
	// TArray<FString> GetAvailableAIs();                                                                                    // [0xa7cbac0] Final|Native|Protected|Const 
	// Function /Script/VerseFortnite.NPCCharacterType_FromPreset.GetAIToSpawn
	// TWeakObjectPtr<UClass*> GetAIToSpawn();                                                                               // [0xa7cba7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VerseFortnite.VerseFortniteActorWrapper
/// Size: 0x0020 (0x000028 - 0x000048)
class UVerseFortniteActorWrapper : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED


	/// Functions
	// Function /Script/VerseFortnite.VerseFortniteActorWrapper.OnActorDestroyed
	// void OnActorDestroyed(class AActor* DestroyedActor);                                                                  // [0xa7ce9a4] Final|Native|Private 
};

/// Class /Script/VerseFortnite.VerseFortniteCharacter
/// Size: 0x0008 (0x000048 - 0x000050)
class UVerseFortniteCharacter : public UVerseFortniteActorWrapper
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0048   (0x0008)  MISSED


	/// Functions
	// Function /Script/VerseFortnite.VerseFortniteCharacter.HandlePossessedPawnChanged
	// void HandlePossessedPawnChanged(class APawn* OldPawn, class APawn* NewPawn);                                          // [0xa7cd3e8] Final|Native|Private 
	// Function /Script/VerseFortnite.VerseFortniteCharacter.HandlePawnEliminated
	// void HandlePawnEliminated(class AFortPlayerPawnAthena* EliminatedPawn);                                               // [0x6f1b5ec] Native|Protected     
};

/// Class /Script/VerseFortnite.TaggedObjectQueryWorldSubsystem
/// Size: 0x0050 (0x000030 - 0x000080)
class UTaggedObjectQueryWorldSubsystem : public UTaggedObjectQueryWorldSubsystemBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0030   (0x0050)  MISSED
};

/// Class /Script/VerseFortnite.VerseFortnitePlayspace
/// Size: 0x0070 (0x000048 - 0x0000B8)
class UVerseFortnitePlayspace : public UVerseFortniteActorWrapper
{ 
public:
	unsigned char                                      UnknownData00_2[0x60];                                      // 0x0048   (0x0060)  MISSED
	TArray<class UVerseFortnitePlayspaceExtensionBase*> Extensions;                                                // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/VerseFortnite.VerseFortnitePlayspace.OnMinigameSetup
	// void OnMinigameSetup(class AFortMinigame* Minigame);                                                                  // [0xa7cede0] Final|Native|Private 
	// Function /Script/VerseFortnite.VerseFortnitePlayspace.OnMinigamePlayerAdded
	// void OnMinigamePlayerAdded(FUniqueNetIdRepl UniqueNetId, bool bIsLocalPlayer);                                        // [0xa7ceb84] Final|Native|Private 
};

/// Class /Script/VerseFortnite.VerseFortnitePlayspaceExtensionBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseFortnitePlayspaceExtensionBase : public UObject
{ 
public:
};

/// Class /Script/VerseFortnite.VerseFortniteSubsystem
/// Size: 0x0050 (0x000030 - 0x000080)
class UVerseFortniteSubsystem : public UWorldSubsystem
{ 
public:
	SDK_UNDEFINED(80,9222) /* TMap<TWeakObjectPtr<AActor*>, UVerseFortniteActorWrapper*> */ __um(ActorToWrapperMap); // 0x0030   (0x0050)  
};

/// Struct /Script/VerseFortnite.CharacterPreviewMesh
/// Size: 0x0040 (0x000000 - 0x000040)
struct FCharacterPreviewMesh
{ 
	SDK_UNDEFINED(32,9223) /* TWeakObjectPtr<USkeletalMesh*> */ __um(SkeletalMesh);                                // 0x0000   (0x0020)  
	FGameplayTagContainer                              MeshDescriptor;                                             // 0x0020   (0x0020)  
};

/// Struct /Script/VerseFortnite.DefaultCharacterCustomizationData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FDefaultCharacterCustomizationData
{ 
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0000   (0x0040)  MISSED
	TArray<class UCustomCharacterPart*>                CharacterParts;                                             // 0x0040   (0x0010)  
};

