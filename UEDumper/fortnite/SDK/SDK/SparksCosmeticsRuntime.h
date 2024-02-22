
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: CosmeticsFrameworkLoadouts
/// dependency: Engine
/// dependency: FMJamCoreRuntime
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: ItemizationCoreRuntime
/// dependency: McpProfileSys
/// dependency: ModularGameplay
/// dependency: Niagara
/// dependency: SparksCoreRuntime

/// Class /Script/SparksCosmeticsRuntime.FortAnimNotifyState_SpawnSparksProp
/// Size: 0x0050 (0x0001C0 - 0x000210)
class UFortAnimNotifyState_SpawnSparksProp : public UFortAnimNotifyState_SpawnProp
{ 
public:
	ESparksInstrumentType                              InstrumentType;                                             // 0x01C0   (0x0001)  
	bool                                               ShouldUseLeftHandMesh;                                      // 0x01C1   (0x0001)  
	bool                                               ShouldUseAuxiliaryMesh;                                     // 0x01C2   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x01C3   (0x0005)  MISSED
	FGameplayTagQuery                                  SkipActorsWithTag;                                          // 0x01C8   (0x0048)  


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.FortAnimNotifyState_SpawnSparksProp.InitNewNotify
	// void InitNewNotify(ESparksInstrumentType InType, bool InLeftHand, bool InAuxMesh, FName InSocketName, FGameplayTagQuery InSkipActorsWithTag, int32_t InPropId, class USkeletalMesh* InDefaultMesh); // [0xaf58d7c] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/SparksCosmeticsRuntime.SparksAccountItemDefinition
/// Size: 0x0010 (0x000740 - 0x000750)
class USparksAccountItemDefinition : public UAthenaCosmeticItemDefinition
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0740   (0x0008)  MISSED
	ESparksAccountItemSubtype                          Subtype;                                                    // 0x0748   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0749   (0x0003)  MISSED
	FGameplayTag                                       Slot;                                                       // 0x074C   (0x0004)  


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.SparksAccountItemDefinition.GetVariantChannelTags
	// void GetVariantChannelTags(TArray<FGameplayTag>& OutChannelTags);                                                     // [0xaf58ce0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksAccountItemDefinition.GetVariantChannelOptionNames
	// void GetVariantChannelOptionNames(FGameplayTag ChannelTag, FText& OutChannelName, TArray<FString>& OutNames);         // [0xaf58aec] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksAccountItemDefinition.GetItemSubtype
	// ESparksAccountItemSubtype GetItemSubtype();                                                                           // [0xaf582bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksAccountItemDefinition.GetInstrumentType
	// ESparksInstrumentType GetInstrumentType();                                                                            // [0x8b3059c] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SparksCosmeticsRuntime.SparksAuraItemDefinition
/// Size: 0x0078 (0x000750 - 0x0007C8)
class USparksAuraItemDefinition : public USparksAccountItemDefinition
{ 
public:
	SDK_UNDEFINED(32,12310) /* TWeakObjectPtr<UNiagaraSystem*> */ __um(StartSystem);                               // 0x0750   (0x0020)  
	FName                                              StartSystemAttachPoint;                                     // 0x0770   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0774   (0x0004)  MISSED
	SDK_UNDEFINED(32,12311) /* TWeakObjectPtr<UNiagaraSystem*> */ __um(SustainSystem);                             // 0x0778   (0x0020)  
	FName                                              SustainSystemAttachPoint;                                   // 0x0798   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x079C   (0x0004)  MISSED
	SDK_UNDEFINED(32,12312) /* TWeakObjectPtr<UNiagaraSystem*> */ __um(StopSystem);                                // 0x07A0   (0x0020)  
	FName                                              StopSystemAttachPoint;                                      // 0x07C0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x07C4   (0x0004)  MISSED
};

/// Class /Script/SparksCosmeticsRuntime.SparksCosmeticCatalog
/// Size: 0x00F8 (0x0000A0 - 0x000198)
class USparksCosmeticCatalog : public UGameStateComponent
{ 
public:
	bool                                               bDefsAreInitialized;                                        // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00A1   (0x0007)  MISSED
	SDK_UNDEFINED(80,12313) /* TMap<FName, USparksAccountItemDefinition*> */ __um(ItemDefinitionMap);              // 0x00A8   (0x0050)  
	SDK_UNDEFINED(80,12314) /* TMap<FPrimaryAssetId, USparksAccountItemDefinition*> */ __um(AssetIDMap);           // 0x00F8   (0x0050)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0148   (0x0050)  MISSED


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticCatalog.GetSparksCosmeticCatalog
	// class USparksCosmeticCatalog* GetSparksCosmeticCatalog(class UObject* WorldContextObject);                            // [0xaf589bc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticCatalog.GetItemDefFromAssetID
	// class USparksAccountItemDefinition* GetItemDefFromAssetID(FPrimaryAssetId& AssetId);                                  // [0xaf58220] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticCatalog.GetItemDef
	// class USparksAccountItemDefinition* GetItemDef(FName InItemName);                                                     // [0xaf58194] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticCatalog.GetActiveItemDefNamesForSubtypeAndInstrument
	// TArray<FName> GetActiveItemDefNamesForSubtypeAndInstrument(ESparksAccountItemSubtype Subtype, ESparksInstrumentType Instrument); // [0xaf56d6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticCatalog.GetActiveItemDefNamesForSubtype
	// TArray<FName> GetActiveItemDefNamesForSubtype(ESparksAccountItemSubtype Subtype);                                     // [0xaf56cd4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/SparksCosmeticsRuntime.SparksVariantChoices
/// Size: 0x0050 (0x000000 - 0x000050)
struct FSparksVariantChoices
{ 
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/SparksCosmeticsRuntime.SparksCosmeticLoadoutData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FSparksCosmeticLoadoutData
{ 
	FSparksVariantChoices                              AuraChoices;                                                // 0x0040   (0x0050)  
	SDK_UNDEFINED(80,12315) /* TMap<ESparksInstrumentType, FSparksVariantChoices> */ __um(InstrumentVariantChoices); // 0x0090   (0x0050)  
	TArray<class USparksSongItemDefinition*>           JamSongChoices;                                             // 0x00E0   (0x0010)  
};

/// Class /Script/SparksCosmeticsRuntime.SparksCosmeticComponent
/// Size: 0x03C0 (0x0000A0 - 0x000460)
class USparksCosmeticComponent : public UPawnComponent
{ 
public:
	SDK_UNDEFINED(16,12316) /* FMulticastInlineDelegate */ __um(CosmeticItemChanged);                              // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,12317) /* FMulticastInlineDelegate */ __um(CosmeticChoiceChanged);                            // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,12318) /* FMulticastInlineDelegate */ __um(OnLoadoutFilled);                                  // 0x00C0   (0x0010)  
	bool                                               bIsLoadoutFilled;                                           // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x57];                                      // 0x00D1   (0x0057)  MISSED
	FSparksCosmeticLoadoutData                         CurrentLoadout;                                             // 0x0128   (0x00F0)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0218   (0x0008)  MISSED
	class UNiagaraComponent*                           ActiveAura;                                                 // 0x0220   (0x0008)  
	FPrimaryAssetId                                    DefaultAuraItemDefID;                                       // 0x0228   (0x0008)  
	class USparksAuraItemDefinition*                   AuraItemDef;                                                // 0x0230   (0x0008)  
	SDK_UNDEFINED(80,12319) /* TMap<ESparksInstrumentType, FPrimaryAssetId> */ __um(DefaultInstrumentDefIDs);      // 0x0238   (0x0050)  
	SDK_UNDEFINED(80,12320) /* TMap<ESparksInstrumentType, USparksInstrumentItemDefBase*> */ __um(InstrumentDefs); // 0x0288   (0x0050)  
	unsigned char                                      UnknownData02_5[0x80];                                      // 0x02D8   (0x0080)  MISSED
	SDK_UNDEFINED(80,12321) /* TMap<ESparksInstrumentType, FPrimaryAssetId> */ __um(DefaultSpotlightAnimDefIDs);   // 0x0358   (0x0050)  
	SDK_UNDEFINED(80,12322) /* TMap<ESparksInstrumentType, USparksSpotlightAnimDefinition*> */ __um(SpotlightAnimDefs); // 0x03A8   (0x0050)  
	unsigned char                                      UnknownData03_5[0x50];                                      // 0x03F8   (0x0050)  MISSED
	TArray<FName>                                      AllValidJamTracksShortNameCache;                            // 0x0448   (0x0010)  
	bool                                               HasCachedValidJamTracks;                                    // 0x0458   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0459   (0x0007)  MISSED


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.SetVariantChoice
	// void SetVariantChoice(ESparksAccountItemSubtype Subtype, ESparksInstrumentType InstrumentType, FGameplayTag VariantChannel, FString Value); // [0xaf59748] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.SetAuraState
	// void SetAuraState(bool bShouldBeActive);                                                                              // [0xaf5962c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.SetActiveSpotlightAnimDef
	// void SetActiveSpotlightAnimDef(class USparksSpotlightAnimDefinition* NewSpotlightDef);                                // [0xaf59544] Final|Native|Private 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.SetActiveItemDef
	// void SetActiveItemDef(class USparksAccountItemDefinition* NewItemDef);                                                // [0xaf5946c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.SetActiveInstrumentItemDef
	// void SetActiveInstrumentItemDef(class USparksInstrumentItemDefBase* InstrumentItemDef);                               // [0xaf59358] Final|Native|Private 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.SetActiveAuraItemDef
	// void SetActiveAuraItemDef(class USparksAuraItemDefinition* NewAuraItemDef);                                           // [0xaf592bc] Final|Native|Private 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.RefreshMCP
	// void RefreshMCP();                                                                                                    // [0x3097b14] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.OnWeaponChanged
	// void OnWeaponChanged(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                                    // [0x29459a0] Final|Native|Protected 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.OnMaterialOverridesCleared
	// void OnMaterialOverridesCleared(class AFortPlayerPawn* Pawn);                                                         // [0x29e48c4] Final|Native|Protected 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetSpotlightAnim
	// class ULevelSequence* GetSpotlightAnim(ESparksInstrumentType InstrumentType);                                         // [0xaf58a3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetOwnedJamTracksCount
	// int32_t GetOwnedJamTracksCount();                                                                                     // [0xaf5897c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetOwnedJamSongShortnameForIndex
	// FName GetOwnedJamSongShortnameForIndex(int32_t Index);                                                                // [0xaf588f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetInstrumentCosmetics
	// bool GetInstrumentCosmetics(ESparksInstrumentType InstrumentType, class USkeletalMesh*& OutMesh, class UMaterialInstance*& OutMaterial, class USkeletalMesh*& OutLHMesh, class UMaterialInstance*& OutLHMaterial); // [0xaf57f68] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetInstrumentAuxiliaryCosmetics
	// bool GetInstrumentAuxiliaryCosmetics(ESparksInstrumentType InstrumentType, class USkeletalMesh*& OutMesh, class UMaterialInstance*& OutMaterial, class UMaterialInstance*& OutMaterial2); // [0xaf57df4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetEquippedJamTracksCount
	// int32_t GetEquippedJamTracksCount();                                                                                  // [0xaf57ddc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetEquippedJamSongShortnameForIndex
	// FName GetEquippedJamSongShortnameForIndex(int32_t Index);                                                             // [0xaf57d58] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetCosmeticItems
	// void GetCosmeticItems(TArray<USparksAccountItemDefinition*>& ItemDefs);                                               // [0xaf575f4] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetCosmeticItem
	// class USparksAccountItemDefinition* GetCosmeticItem(ESparksAccountItemSubtype Subtype, ESparksInstrumentType Instrument); // [0xaf57514] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetChoice
	// bool GetChoice(FSparksVariantChoice& OutChoice, ESparksAccountItemSubtype Subtype, ESparksInstrumentType InstrumentType, FGameplayTag VariantChannel); // [0xaf57170] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetAccountItemTypeFromInstrumentType
	// ESparksAccountItemSubtype GetAccountItemTypeFromInstrumentType(ESparksInstrumentType Instrument);                     // [0xaf56c54] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.DoCacheValidJamTracks
	// void DoCacheValidJamTracks();                                                                                         // [0xaf56c40] Final|Native|Private 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.DebugForceAuraState
	// void DebugForceAuraState(bool bShouldBeActive);                                                                       // [0xaf56bc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.Debug_BP_ShowCosmeticPicker
	// void Debug_BP_ShowCosmeticPicker(bool bShow);                                                                         // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.AuraStop
	// void AuraStop();                                                                                                      // [0xaf56bac] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.AuraStart
	// void AuraStart();                                                                                                     // [0xaf56b98] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SparksCosmeticsRuntime.SparksCosmeticsCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class USparksCosmeticsCheatManager : public UChildCheatManager
{ 
public:


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticsCheatManager.GrantSparksSongsLoadedAssets
	// void GrantSparksSongsLoadedAssets();                                                                                  // [0x3097b14] Final|BlueprintAuthorityOnly|Exec|Native|Private|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticsCheatManager.GrantSparksCosmeticsLoadedAssets
	// void GrantSparksCosmeticsLoadedAssets();                                                                              // [0x3097b14] Final|BlueprintAuthorityOnly|Exec|Native|Private|Const 
};

/// Class /Script/SparksCosmeticsRuntime.SparksCosmeticsSettings
/// Size: 0x00D0 (0x000030 - 0x000100)
class USparksCosmeticsSettings : public UPrimaryDataAsset
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	class UClass*                                      SparksCosmeticPreviewActorClass;                            // 0x0038   (0x0008)  
	class UClass*                                      SparksPreviewCameraActorClass;                              // 0x0040   (0x0008)  
	class UClass*                                      SparksAuraPreviewActorClass;                                // 0x0048   (0x0008)  
	class UClass*                                      SparksAuraDisplayActorClass;                                // 0x0050   (0x0008)  
	class UClass*                                      SparksSongPreviewActorClass;                                // 0x0058   (0x0008)  
	class UClass*                                      SparksSongPrefabActorClass;                                 // 0x0060   (0x0008)  
	class UCosmeticLoadoutSchema*                      SparksLoadoutSchema;                                        // 0x0068   (0x0008)  
	FFortUICameraFrameTargetBounds                     GuitarCameraFramingBounds;                                  // 0x0070   (0x0020)  
	FFortUICameraFrameTargetBounds                     BassCameraFramingBounds;                                    // 0x0090   (0x0020)  
	FFortUICameraFrameTargetBounds                     DrumCameraFramingBounds;                                    // 0x00B0   (0x0020)  
	FFortUICameraFrameTargetBounds                     MicCameraFramingBounds;                                     // 0x00D0   (0x0020)  
	TArray<FPrimaryAssetId>                            RandomCharacters;                                           // 0x00F0   (0x0010)  
};

/// Class /Script/SparksCosmeticsRuntime.SparksCosmetics_BPFL
/// Size: 0x0000 (0x000028 - 0x000028)
class USparksCosmetics_BPFL : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/SparksCosmeticsRuntime.SparksInstrumentComponentBase
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class USparksInstrumentComponentBase : public UActorComponent
{ 
public:


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentComponentBase.GetInstrumentType
	// ESparksInstrumentType GetInstrumentType();                                                                            // [0x3d1d968] Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/SparksCosmeticsRuntime.SparksInstrumentItemDefBase
/// Size: 0x0140 (0x000750 - 0x000890)
class USparksInstrumentItemDefBase : public USparksAccountItemDefinition
{ 
public:
	SDK_UNDEFINED(32,12323) /* TWeakObjectPtr<USkeletalMesh*> */ __um(Mesh);                                       // 0x0750   (0x0020)  
	SDK_UNDEFINED(32,12324) /* TWeakObjectPtr<USkeletalMesh*> */ __um(LeftHandMesh);                               // 0x0770   (0x0020)  
	SDK_UNDEFINED(32,12325) /* TWeakObjectPtr<USkeletalMesh*> */ __um(AuxiliaryMesh);                              // 0x0790   (0x0020)  
	SDK_UNDEFINED(32,12326) /* TWeakObjectPtr<UMaterialInstance*> */ __um(Material);                               // 0x07B0   (0x0020)  
	SDK_UNDEFINED(32,12327) /* TWeakObjectPtr<UMaterialInstance*> */ __um(LeftHandMaterial);                       // 0x07D0   (0x0020)  
	SDK_UNDEFINED(32,12328) /* TWeakObjectPtr<UMaterialInstance*> */ __um(AuxiliaryMaterial);                      // 0x07F0   (0x0020)  
	SDK_UNDEFINED(32,12329) /* TWeakObjectPtr<UMaterialInstance*> */ __um(AuxiliaryMaterial2);                     // 0x0810   (0x0020)  
	SDK_UNDEFINED(32,12330) /* TWeakObjectPtr<UFXSystemAsset*> */ __um(MainFXSystem);                              // 0x0830   (0x0020)  
	SDK_UNDEFINED(32,12331) /* TWeakObjectPtr<UFXSystemAsset*> */ __um(LHFXSystem);                                // 0x0850   (0x0020)  
	SDK_UNDEFINED(32,12332) /* TWeakObjectPtr<UFXSystemAsset*> */ __um(AuxFXSystem);                               // 0x0870   (0x0020)  


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentItemDefBase.GetMesh
	// class USkeletalMesh* GetMesh(FSparksVariantChoices& Choices);                                                         // [0xaf58830] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentItemDefBase.GetMaterial
	// class UMaterialInstance* GetMaterial(FSparksVariantChoices& Choices);                                                 // [0xaf58760] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentItemDefBase.GetMainFXSystem
	// class UFXSystemAsset* GetMainFXSystem(FSparksVariantChoices& Choices);                                                // [0xaf58690] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentItemDefBase.GetLHFXSystem
	// class UFXSystemAsset* GetLHFXSystem(FSparksVariantChoices& Choices);                                                  // [0xaf58428] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentItemDefBase.GetLeftHandMesh
	// class USkeletalMesh* GetLeftHandMesh(FSparksVariantChoices& Choices);                                                 // [0xaf585c8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentItemDefBase.GetLeftHandMaterial
	// class UMaterialInstance* GetLeftHandMaterial(FSparksVariantChoices& Choices);                                         // [0xaf584f8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentItemDefBase.GetAuxiliaryMesh
	// class USkeletalMesh* GetAuxiliaryMesh(FSparksVariantChoices& Choices);                                                // [0xaf570a8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentItemDefBase.GetAuxiliaryMaterial2
	// class UMaterialInstance* GetAuxiliaryMaterial2(FSparksVariantChoices& Choices);                                       // [0xaf56f08] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentItemDefBase.GetAuxiliaryMaterial
	// class UMaterialInstance* GetAuxiliaryMaterial(FSparksVariantChoices& Choices);                                        // [0xaf56fd8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentItemDefBase.GetAuxFXSystem
	// class UFXSystemAsset* GetAuxFXSystem(FSparksVariantChoices& Choices);                                                 // [0xaf56e38] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SparksCosmeticsRuntime.SparksGuitarItemDefinition
/// Size: 0x0000 (0x000890 - 0x000890)
class USparksGuitarItemDefinition : public USparksInstrumentItemDefBase
{ 
public:
};

/// Class /Script/SparksCosmeticsRuntime.SparksBassItemDefinition
/// Size: 0x0000 (0x000890 - 0x000890)
class USparksBassItemDefinition : public USparksInstrumentItemDefBase
{ 
public:
};

/// Class /Script/SparksCosmeticsRuntime.SparksDrumItemDefinition
/// Size: 0x0000 (0x000890 - 0x000890)
class USparksDrumItemDefinition : public USparksInstrumentItemDefBase
{ 
public:
};

/// Class /Script/SparksCosmeticsRuntime.SparksMicItemDefinition
/// Size: 0x0000 (0x000890 - 0x000890)
class USparksMicItemDefinition : public USparksInstrumentItemDefBase
{ 
public:
};

/// Class /Script/SparksCosmeticsRuntime.SparksKeyboardItemDefinition
/// Size: 0x0000 (0x000890 - 0x000890)
class USparksKeyboardItemDefinition : public USparksInstrumentItemDefBase
{ 
public:
};

/// Class /Script/SparksCosmeticsRuntime.SparksInstrumentPreviewActor
/// Size: 0x0040 (0x000430 - 0x000470)
class ASparksInstrumentPreviewActor : public AFortItemPreviewActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0430   (0x0010)  MISSED
	SDK_UNDEFINED(32,12333) /* TWeakObjectPtr<USparksInstrumentItemDefBase*> */ __um(ItemDef);                     // 0x0440   (0x0020)  
	SDK_UNDEFINED(12,12334) /* FDelegateProperty */    __um(OnSettingsChangedDelegate);                            // 0x0460   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x046C   (0x0004)  MISSED


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentPreviewActor.GetCurrentChoices
	// FSparksVariantChoices GetCurrentChoices();                                                                            // [0xaf57cb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SparksCosmeticsRuntime.SparksItemPreviewOffPawnActor
/// Size: 0x0000 (0x000488 - 0x000488)
class ASparksItemPreviewOffPawnActor : public AFortItemPreviewOffPawnActor
{ 
public:


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.SparksItemPreviewOffPawnActor.GetInstrumentType
	// ESparksInstrumentType GetInstrumentType();                                                                            // [0xaf5813c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SparksCosmeticsRuntime.SparksItemPreviewOnPawnActor
/// Size: 0x0000 (0x000700 - 0x000700)
class ASparksItemPreviewOnPawnActor : public AFortItemPreviewOnPawnActor
{ 
public:
};

/// Class /Script/SparksCosmeticsRuntime.SparksJamEmoteItemDefinition
/// Size: 0x0010 (0x000968 - 0x000978)
class USparksJamEmoteItemDefinition : public UAthenaDanceItemDefinition
{ 
public:
	class USparksSongItemDefinition*                   SongItemDef;                                                // 0x0968   (0x0008)  
	EFMJamLoopType                                     LoopType;                                                   // 0x0970   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0971   (0x0007)  MISSED


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.SparksJamEmoteItemDefinition.IsJamLoopEnabled
	// bool IsJamLoopEnabled(class AFortPlayerController* PlayerController);                                                 // [0xaf591f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksJamEmoteItemDefinition.GetSongItemDef
	// class USparksSongItemDefinition* GetSongItemDef();                                                                    // [0x8dbefd4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksJamEmoteItemDefinition.GetJamSongShortName
	// FName GetJamSongShortName(class UObject* WorldContextObject);                                                         // [0xaf58364] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksJamEmoteItemDefinition.GetJamSongMetaData
	// class UCatalogData* GetJamSongMetaData(class UObject* WorldContextObject);                                            // [0xaf582d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksJamEmoteItemDefinition.GetJamLoopType
	// EFMJamLoopType GetJamLoopType();                                                                                      // [0x8d6fd38] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SparksCosmeticsRuntime.SparksPlayerStateComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class USparksPlayerStateComponent : public UPlayerStateComponent
{ 
public:
	ESparksInstrumentType                              SparksInstrumentChoice;                                     // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A1   (0x0007)  MISSED


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.SparksPlayerStateComponent.SetSparksInstrumentChoice
	// void SetSparksInstrumentChoice(ESparksInstrumentType Instrument);                                                     // [0xaf596c4] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksPlayerStateComponent.GetSparksInstrumentChoice
	// ESparksInstrumentType GetSparksInstrumentChoice();                                                                    // [0x80e8094] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SparksCosmeticsRuntime.SparksSongItemDefinition
/// Size: 0x0020 (0x000750 - 0x000770)
class USparksSongItemDefinition : public USparksAccountItemDefinition
{ 
public:
	class USparksJamEmoteItemDefinition*               JamEmote_Vox;                                               // 0x0750   (0x0008)  
	class USparksJamEmoteItemDefinition*               JamEmote_Lead;                                              // 0x0758   (0x0008)  
	class USparksJamEmoteItemDefinition*               JamEmote_Bass;                                              // 0x0760   (0x0008)  
	class USparksJamEmoteItemDefinition*               JamEmote_Drum;                                              // 0x0768   (0x0008)  
};

/// Class /Script/SparksCosmeticsRuntime.SparksSongPreviewActor
/// Size: 0x0018 (0x000290 - 0x0002A8)
class ASparksSongPreviewActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0290   (0x0010)  MISSED
	FName                                              SongShortName;                                              // 0x02A0   (0x0004)  
	float                                              BoundsScale;                                                // 0x02A4   (0x0004)  


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.SparksSongPreviewActor.StartSongPreview
	// void StartSongPreview();                                                                                              // [0x3d1d968] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCosmeticsRuntime.SparksSongPreviewActor.OnSongTextureLoaded
	// void OnSongTextureLoaded(class UTexture2D* CoverArt);                                                                 // [0x3d1d968] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/SparksCosmeticsRuntime.SparksSpotlightAnimDefinition
/// Size: 0x0028 (0x000750 - 0x000778)
class USparksSpotlightAnimDefinition : public USparksAccountItemDefinition
{ 
public:
	SDK_UNDEFINED(32,12335) /* TWeakObjectPtr<ULevelSequence*> */ __um(SpotlightSequence);                         // 0x0750   (0x0020)  
	ESparksInstrumentType                              InstrumentType;                                             // 0x0770   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0771   (0x0007)  MISSED
};

/// Class /Script/SparksCosmeticsRuntime.SparksGuitarSpotlightDefinition
/// Size: 0x0000 (0x000778 - 0x000778)
class USparksGuitarSpotlightDefinition : public USparksSpotlightAnimDefinition
{ 
public:
};

/// Class /Script/SparksCosmeticsRuntime.SparksDrumSpotlightDefinition
/// Size: 0x0000 (0x000778 - 0x000778)
class USparksDrumSpotlightDefinition : public USparksSpotlightAnimDefinition
{ 
public:
};

/// Class /Script/SparksCosmeticsRuntime.SparksBassSpotlightDefinition
/// Size: 0x0000 (0x000778 - 0x000778)
class USparksBassSpotlightDefinition : public USparksSpotlightAnimDefinition
{ 
public:
};

/// Class /Script/SparksCosmeticsRuntime.SparksMicSpotlightDefinition
/// Size: 0x0000 (0x000778 - 0x000778)
class USparksMicSpotlightDefinition : public USparksSpotlightAnimDefinition
{ 
public:
};

/// Class /Script/SparksCosmeticsRuntime.SparksKeyboardSpotlightDefinition
/// Size: 0x0000 (0x000778 - 0x000778)
class USparksKeyboardSpotlightDefinition : public USparksSpotlightAnimDefinition
{ 
public:
};

/// Struct /Script/SparksCosmeticsRuntime.SparksVariantChoice
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSparksVariantChoice
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/SparksCosmeticsRuntime.NameList
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNameList
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/SparksCosmeticsRuntime.SparksCosmeticsEvent_AuraEnable
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSparksCosmeticsEvent_AuraEnable
{ 
	SDK_UNDEFINED(8,12336) /* TWeakObjectPtr<AFortPlayerPawn*> */ __um(ForPlayer);                                 // 0x0000   (0x0008)  
	bool                                               bAuraIsEnabled;                                             // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

