
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

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
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	CMember(ESparksInstrumentType)                     InstrumentType                                              OFFSET(get<T>, {0x1C0, 1, 0, 0})
	DMember(bool)                                      ShouldUseLeftHandMesh                                       OFFSET(get<bool>, {0x1C1, 1, 0, 0})
	DMember(bool)                                      ShouldUseAuxiliaryMesh                                      OFFSET(get<bool>, {0x1C2, 1, 0, 0})
	SMember(FGameplayTagQuery)                         SkipActorsWithTag                                           OFFSET(getStruct<T>, {0x1C8, 72, 0, 0})


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.FortAnimNotifyState_SpawnSparksProp.InitNewNotify
	// void InitNewNotify(ESparksInstrumentType InType, bool InLeftHand, bool InAuxMesh, FName InSocketName, FGameplayTagQuery InSkipActorsWithTag, int32_t InPropId, class USkeletalMesh* InDefaultMesh); // [0xaf58d7c] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/SparksCosmeticsRuntime.SparksAccountItemDefinition
/// Size: 0x0010 (0x000740 - 0x000750)
class USparksAccountItemDefinition : public UAthenaCosmeticItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1872;

public:
	CMember(ESparksAccountItemSubtype)                 Subtype                                                     OFFSET(get<T>, {0x748, 1, 0, 0})
	SMember(FGameplayTag)                              Slot                                                        OFFSET(getStruct<T>, {0x74C, 4, 0, 0})


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.SparksAccountItemDefinition.GetVariantChannelTags
	// void GetVariantChannelTags(TArray<FGameplayTag>& OutChannelTags);                                                        // [0xaf58ce0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksAccountItemDefinition.GetVariantChannelOptionNames
	// void GetVariantChannelOptionNames(FGameplayTag ChannelTag, FText& OutChannelName, TArray<FString>& OutNames);            // [0xaf58aec] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksAccountItemDefinition.GetItemSubtype
	// ESparksAccountItemSubtype GetItemSubtype();                                                                              // [0xaf582bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksAccountItemDefinition.GetInstrumentType
	// ESparksInstrumentType GetInstrumentType();                                                                               // [0x8b3059c] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SparksCosmeticsRuntime.SparksAuraItemDefinition
/// Size: 0x0078 (0x000750 - 0x0007C8)
class USparksAuraItemDefinition : public USparksAccountItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1992;

public:
	CMember(TWeakObjectPtr<UNiagaraSystem*>)           StartSystem                                                 OFFSET(get<T>, {0x750, 32, 0, 0})
	SMember(FName)                                     StartSystemAttachPoint                                      OFFSET(getStruct<T>, {0x770, 4, 0, 0})
	CMember(TWeakObjectPtr<UNiagaraSystem*>)           SustainSystem                                               OFFSET(get<T>, {0x778, 32, 0, 0})
	SMember(FName)                                     SustainSystemAttachPoint                                    OFFSET(getStruct<T>, {0x798, 4, 0, 0})
	CMember(TWeakObjectPtr<UNiagaraSystem*>)           StopSystem                                                  OFFSET(get<T>, {0x7A0, 32, 0, 0})
	SMember(FName)                                     StopSystemAttachPoint                                       OFFSET(getStruct<T>, {0x7C0, 4, 0, 0})
};

/// Class /Script/SparksCosmeticsRuntime.SparksCosmeticCatalog
/// Size: 0x00F8 (0x0000A0 - 0x000198)
class USparksCosmeticCatalog : public UGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	DMember(bool)                                      bDefsAreInitialized                                         OFFSET(get<bool>, {0xA0, 1, 0, 0})
	CMember(TMap<FName, USparksAccountItemDefinition*>) ItemDefinitionMap                                          OFFSET(get<T>, {0xA8, 80, 0, 0})
	CMember(TMap<FPrimaryAssetId, USparksAccountItemDefinition*>) AssetIDMap                                       OFFSET(get<T>, {0xF8, 80, 0, 0})


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticCatalog.GetSparksCosmeticCatalog
	// class USparksCosmeticCatalog* GetSparksCosmeticCatalog(class UObject* WorldContextObject);                               // [0xaf589bc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticCatalog.GetItemDefFromAssetID
	// class USparksAccountItemDefinition* GetItemDefFromAssetID(FPrimaryAssetId& AssetId);                                     // [0xaf58220] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticCatalog.GetItemDef
	// class USparksAccountItemDefinition* GetItemDef(FName InItemName);                                                        // [0xaf58194] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticCatalog.GetActiveItemDefNamesForSubtypeAndInstrument
	// TArray<FName> GetActiveItemDefNamesForSubtypeAndInstrument(ESparksAccountItemSubtype Subtype, ESparksInstrumentType Instrument); // [0xaf56d6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticCatalog.GetActiveItemDefNamesForSubtype
	// TArray<FName> GetActiveItemDefNamesForSubtype(ESparksAccountItemSubtype Subtype);                                        // [0xaf56cd4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SparksCosmeticsRuntime.SparksCosmeticComponent
/// Size: 0x03C0 (0x0000A0 - 0x000460)
class USparksCosmeticComponent : public UPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1120;

public:
	SMember(FMulticastInlineDelegate)                  CosmeticItemChanged                                         OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  CosmeticChoiceChanged                                       OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLoadoutFilled                                             OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	DMember(bool)                                      bIsLoadoutFilled                                            OFFSET(get<bool>, {0xD0, 1, 0, 0})
	SMember(FSparksCosmeticLoadoutData)                CurrentLoadout                                              OFFSET(getStruct<T>, {0x128, 240, 0, 0})
	CMember(class UNiagaraComponent*)                  ActiveAura                                                  OFFSET(get<T>, {0x220, 8, 0, 0})
	SMember(FPrimaryAssetId)                           DefaultAuraItemDefID                                        OFFSET(getStruct<T>, {0x228, 8, 0, 0})
	CMember(class USparksAuraItemDefinition*)          AuraItemDef                                                 OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(TMap<ESparksInstrumentType, FPrimaryAssetId>) DefaultInstrumentDefIDs                                  OFFSET(get<T>, {0x238, 80, 0, 0})
	CMember(TMap<ESparksInstrumentType, USparksInstrumentItemDefBase*>) InstrumentDefs                             OFFSET(get<T>, {0x288, 80, 0, 0})
	CMember(TMap<ESparksInstrumentType, FPrimaryAssetId>) DefaultSpotlightAnimDefIDs                               OFFSET(get<T>, {0x358, 80, 0, 0})
	CMember(TMap<ESparksInstrumentType, USparksSpotlightAnimDefinition*>) SpotlightAnimDefs                        OFFSET(get<T>, {0x3A8, 80, 0, 0})
	CMember(TArray<FName>)                             AllValidJamTracksShortNameCache                             OFFSET(get<T>, {0x448, 16, 0, 0})
	DMember(bool)                                      HasCachedValidJamTracks                                     OFFSET(get<bool>, {0x458, 1, 0, 0})


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.SetVariantChoice
	// void SetVariantChoice(ESparksAccountItemSubtype Subtype, ESparksInstrumentType InstrumentType, FGameplayTag VariantChannel, FString Value); // [0xaf59748] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.SetAuraState
	// void SetAuraState(bool bShouldBeActive);                                                                                 // [0xaf5962c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.SetActiveSpotlightAnimDef
	// void SetActiveSpotlightAnimDef(class USparksSpotlightAnimDefinition* NewSpotlightDef);                                   // [0xaf59544] Final|Native|Private 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.SetActiveItemDef
	// void SetActiveItemDef(class USparksAccountItemDefinition* NewItemDef);                                                   // [0xaf5946c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.SetActiveInstrumentItemDef
	// void SetActiveInstrumentItemDef(class USparksInstrumentItemDefBase* InstrumentItemDef);                                  // [0xaf59358] Final|Native|Private 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.SetActiveAuraItemDef
	// void SetActiveAuraItemDef(class USparksAuraItemDefinition* NewAuraItemDef);                                              // [0xaf592bc] Final|Native|Private 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.RefreshMCP
	// void RefreshMCP();                                                                                                       // [0x3097b14] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.OnWeaponChanged
	// void OnWeaponChanged(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                                       // [0x29459a0] Final|Native|Protected 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.OnMaterialOverridesCleared
	// void OnMaterialOverridesCleared(class AFortPlayerPawn* Pawn);                                                            // [0x29e48c4] Final|Native|Protected 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetSpotlightAnim
	// class ULevelSequence* GetSpotlightAnim(ESparksInstrumentType InstrumentType);                                            // [0xaf58a3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetOwnedJamTracksCount
	// int32_t GetOwnedJamTracksCount();                                                                                        // [0xaf5897c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetOwnedJamSongShortnameForIndex
	// FName GetOwnedJamSongShortnameForIndex(int32_t Index);                                                                   // [0xaf588f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetInstrumentCosmetics
	// bool GetInstrumentCosmetics(ESparksInstrumentType InstrumentType, class USkeletalMesh*& OutMesh, class UMaterialInstance*& OutMaterial, class USkeletalMesh*& OutLHMesh, class UMaterialInstance*& OutLHMaterial); // [0xaf57f68] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetInstrumentAuxiliaryCosmetics
	// bool GetInstrumentAuxiliaryCosmetics(ESparksInstrumentType InstrumentType, class USkeletalMesh*& OutMesh, class UMaterialInstance*& OutMaterial, class UMaterialInstance*& OutMaterial2); // [0xaf57df4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetEquippedJamTracksCount
	// int32_t GetEquippedJamTracksCount();                                                                                     // [0xaf57ddc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetEquippedJamSongShortnameForIndex
	// FName GetEquippedJamSongShortnameForIndex(int32_t Index);                                                                // [0xaf57d58] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetCosmeticItems
	// void GetCosmeticItems(TArray<USparksAccountItemDefinition*>& ItemDefs);                                                  // [0xaf575f4] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetCosmeticItem
	// class USparksAccountItemDefinition* GetCosmeticItem(ESparksAccountItemSubtype Subtype, ESparksInstrumentType Instrument); // [0xaf57514] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetChoice
	// bool GetChoice(FSparksVariantChoice& OutChoice, ESparksAccountItemSubtype Subtype, ESparksInstrumentType InstrumentType, FGameplayTag VariantChannel); // [0xaf57170] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetAccountItemTypeFromInstrumentType
	// ESparksAccountItemSubtype GetAccountItemTypeFromInstrumentType(ESparksInstrumentType Instrument);                        // [0xaf56c54] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.DoCacheValidJamTracks
	// void DoCacheValidJamTracks();                                                                                            // [0xaf56c40] Final|Native|Private 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.DebugForceAuraState
	// void DebugForceAuraState(bool bShouldBeActive);                                                                          // [0xaf56bc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.Debug_BP_ShowCosmeticPicker
	// void Debug_BP_ShowCosmeticPicker(bool bShow);                                                                            // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.AuraStop
	// void AuraStop();                                                                                                         // [0xaf56bac] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.AuraStart
	// void AuraStart();                                                                                                        // [0xaf56b98] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SparksCosmeticsRuntime.SparksCosmeticsCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class USparksCosmeticsCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticsCheatManager.GrantSparksSongsLoadedAssets
	// void GrantSparksSongsLoadedAssets();                                                                                     // [0x3097b14] Final|BlueprintAuthorityOnly|Exec|Native|Private|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticsCheatManager.GrantSparksCosmeticsLoadedAssets
	// void GrantSparksCosmeticsLoadedAssets();                                                                                 // [0x3097b14] Final|BlueprintAuthorityOnly|Exec|Native|Private|Const 
};

/// Class /Script/SparksCosmeticsRuntime.SparksCosmeticsSettings
/// Size: 0x00D0 (0x000030 - 0x000100)
class USparksCosmeticsSettings : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(class UClass*)                             SparksCosmeticPreviewActorClass                             OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UClass*)                             SparksPreviewCameraActorClass                               OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UClass*)                             SparksAuraPreviewActorClass                                 OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UClass*)                             SparksAuraDisplayActorClass                                 OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class UClass*)                             SparksSongPreviewActorClass                                 OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(class UClass*)                             SparksSongPrefabActorClass                                  OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(class UCosmeticLoadoutSchema*)             SparksLoadoutSchema                                         OFFSET(get<T>, {0x68, 8, 0, 0})
	SMember(FFortUICameraFrameTargetBounds)            GuitarCameraFramingBounds                                   OFFSET(getStruct<T>, {0x70, 32, 0, 0})
	SMember(FFortUICameraFrameTargetBounds)            BassCameraFramingBounds                                     OFFSET(getStruct<T>, {0x90, 32, 0, 0})
	SMember(FFortUICameraFrameTargetBounds)            DrumCameraFramingBounds                                     OFFSET(getStruct<T>, {0xB0, 32, 0, 0})
	SMember(FFortUICameraFrameTargetBounds)            MicCameraFramingBounds                                      OFFSET(getStruct<T>, {0xD0, 32, 0, 0})
	CMember(TArray<FPrimaryAssetId>)                   RandomCharacters                                            OFFSET(get<T>, {0xF0, 16, 0, 0})
};

/// Class /Script/SparksCosmeticsRuntime.SparksCosmetics_BPFL
/// Size: 0x0000 (0x000028 - 0x000028)
class USparksCosmetics_BPFL : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SparksCosmeticsRuntime.SparksInstrumentComponentBase
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class USparksInstrumentComponentBase : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentComponentBase.GetInstrumentType
	// ESparksInstrumentType GetInstrumentType();                                                                               // [0x3d1d968] Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/SparksCosmeticsRuntime.SparksInstrumentItemDefBase
/// Size: 0x0140 (0x000750 - 0x000890)
class USparksInstrumentItemDefBase : public USparksAccountItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2192;

public:
	CMember(TWeakObjectPtr<USkeletalMesh*>)            Mesh                                                        OFFSET(get<T>, {0x750, 32, 0, 0})
	CMember(TWeakObjectPtr<USkeletalMesh*>)            LeftHandMesh                                                OFFSET(get<T>, {0x770, 32, 0, 0})
	CMember(TWeakObjectPtr<USkeletalMesh*>)            AuxiliaryMesh                                               OFFSET(get<T>, {0x790, 32, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInstance*>)        Material                                                    OFFSET(get<T>, {0x7B0, 32, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInstance*>)        LeftHandMaterial                                            OFFSET(get<T>, {0x7D0, 32, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInstance*>)        AuxiliaryMaterial                                           OFFSET(get<T>, {0x7F0, 32, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInstance*>)        AuxiliaryMaterial2                                          OFFSET(get<T>, {0x810, 32, 0, 0})
	CMember(TWeakObjectPtr<UFXSystemAsset*>)           MainFXSystem                                                OFFSET(get<T>, {0x830, 32, 0, 0})
	CMember(TWeakObjectPtr<UFXSystemAsset*>)           LHFXSystem                                                  OFFSET(get<T>, {0x850, 32, 0, 0})
	CMember(TWeakObjectPtr<UFXSystemAsset*>)           AuxFXSystem                                                 OFFSET(get<T>, {0x870, 32, 0, 0})


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentItemDefBase.GetMesh
	// class USkeletalMesh* GetMesh(FSparksVariantChoices& Choices);                                                            // [0xaf58830] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentItemDefBase.GetMaterial
	// class UMaterialInstance* GetMaterial(FSparksVariantChoices& Choices);                                                    // [0xaf58760] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentItemDefBase.GetMainFXSystem
	// class UFXSystemAsset* GetMainFXSystem(FSparksVariantChoices& Choices);                                                   // [0xaf58690] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentItemDefBase.GetLHFXSystem
	// class UFXSystemAsset* GetLHFXSystem(FSparksVariantChoices& Choices);                                                     // [0xaf58428] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentItemDefBase.GetLeftHandMesh
	// class USkeletalMesh* GetLeftHandMesh(FSparksVariantChoices& Choices);                                                    // [0xaf585c8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentItemDefBase.GetLeftHandMaterial
	// class UMaterialInstance* GetLeftHandMaterial(FSparksVariantChoices& Choices);                                            // [0xaf584f8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentItemDefBase.GetAuxiliaryMesh
	// class USkeletalMesh* GetAuxiliaryMesh(FSparksVariantChoices& Choices);                                                   // [0xaf570a8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentItemDefBase.GetAuxiliaryMaterial2
	// class UMaterialInstance* GetAuxiliaryMaterial2(FSparksVariantChoices& Choices);                                          // [0xaf56f08] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentItemDefBase.GetAuxiliaryMaterial
	// class UMaterialInstance* GetAuxiliaryMaterial(FSparksVariantChoices& Choices);                                           // [0xaf56fd8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentItemDefBase.GetAuxFXSystem
	// class UFXSystemAsset* GetAuxFXSystem(FSparksVariantChoices& Choices);                                                    // [0xaf56e38] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SparksCosmeticsRuntime.SparksGuitarItemDefinition
/// Size: 0x0000 (0x000890 - 0x000890)
class USparksGuitarItemDefinition : public USparksInstrumentItemDefBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2192;

public:
};

/// Class /Script/SparksCosmeticsRuntime.SparksBassItemDefinition
/// Size: 0x0000 (0x000890 - 0x000890)
class USparksBassItemDefinition : public USparksInstrumentItemDefBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2192;

public:
};

/// Class /Script/SparksCosmeticsRuntime.SparksDrumItemDefinition
/// Size: 0x0000 (0x000890 - 0x000890)
class USparksDrumItemDefinition : public USparksInstrumentItemDefBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2192;

public:
};

/// Class /Script/SparksCosmeticsRuntime.SparksMicItemDefinition
/// Size: 0x0000 (0x000890 - 0x000890)
class USparksMicItemDefinition : public USparksInstrumentItemDefBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2192;

public:
};

/// Class /Script/SparksCosmeticsRuntime.SparksKeyboardItemDefinition
/// Size: 0x0000 (0x000890 - 0x000890)
class USparksKeyboardItemDefinition : public USparksInstrumentItemDefBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2192;

public:
};

/// Class /Script/SparksCosmeticsRuntime.SparksInstrumentPreviewActor
/// Size: 0x0040 (0x000430 - 0x000470)
class ASparksInstrumentPreviewActor : public AFortItemPreviewActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1136;

public:
	CMember(TWeakObjectPtr<USparksInstrumentItemDefBase*>) ItemDef                                                 OFFSET(get<T>, {0x440, 32, 0, 0})
	SMember(FDelegateProperty)                         OnSettingsChangedDelegate                                   OFFSET(getStruct<T>, {0x460, 12, 0, 0})


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentPreviewActor.GetCurrentChoices
	// FSparksVariantChoices GetCurrentChoices();                                                                               // [0xaf57cb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SparksCosmeticsRuntime.SparksItemPreviewOffPawnActor
/// Size: 0x0000 (0x000488 - 0x000488)
class ASparksItemPreviewOffPawnActor : public AFortItemPreviewOffPawnActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1160;

public:


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.SparksItemPreviewOffPawnActor.GetInstrumentType
	// ESparksInstrumentType GetInstrumentType();                                                                               // [0xaf5813c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SparksCosmeticsRuntime.SparksItemPreviewOnPawnActor
/// Size: 0x0000 (0x000700 - 0x000700)
class ASparksItemPreviewOnPawnActor : public AFortItemPreviewOnPawnActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1792;

public:
	CMember(class UNiagaraComponent*)                  ActiveAura                                                  OFFSET(get<T>, {0x6F8, 8, 0, 0})
};

/// Class /Script/SparksCosmeticsRuntime.SparksJamEmoteItemDefinition
/// Size: 0x0010 (0x000968 - 0x000978)
class USparksJamEmoteItemDefinition : public UAthenaDanceItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2424;

public:
	CMember(class USparksSongItemDefinition*)          SongItemDef                                                 OFFSET(get<T>, {0x968, 8, 0, 0})
	CMember(EFMJamLoopType)                            LoopType                                                    OFFSET(get<T>, {0x970, 1, 0, 0})


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.SparksJamEmoteItemDefinition.IsJamLoopEnabled
	// bool IsJamLoopEnabled(class AFortPlayerController* PlayerController);                                                    // [0xaf591f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksJamEmoteItemDefinition.GetSongItemDef
	// class USparksSongItemDefinition* GetSongItemDef();                                                                       // [0x8dbefd4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksJamEmoteItemDefinition.GetJamSongShortName
	// FName GetJamSongShortName(class UObject* WorldContextObject);                                                            // [0xaf58364] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksJamEmoteItemDefinition.GetJamSongMetaData
	// class UCatalogData* GetJamSongMetaData(class UObject* WorldContextObject);                                               // [0xaf582d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksJamEmoteItemDefinition.GetJamLoopType
	// EFMJamLoopType GetJamLoopType();                                                                                         // [0x8d6fd38] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SparksCosmeticsRuntime.SparksPlayerStateComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class USparksPlayerStateComponent : public UPlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(ESparksInstrumentType)                     SparksInstrumentChoice                                      OFFSET(get<T>, {0xA0, 1, 0, 0})


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.SparksPlayerStateComponent.SetSparksInstrumentChoice
	// void SetSparksInstrumentChoice(ESparksInstrumentType Instrument);                                                        // [0xaf596c4] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksPlayerStateComponent.GetSparksInstrumentChoice
	// ESparksInstrumentType GetSparksInstrumentChoice();                                                                       // [0x80e8094] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SparksCosmeticsRuntime.SparksSongItemDefinition
/// Size: 0x0020 (0x000750 - 0x000770)
class USparksSongItemDefinition : public USparksAccountItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1904;

public:
	CMember(class USparksJamEmoteItemDefinition*)      JamEmote_Vox                                                OFFSET(get<T>, {0x750, 8, 0, 0})
	CMember(class USparksJamEmoteItemDefinition*)      JamEmote_Lead                                               OFFSET(get<T>, {0x758, 8, 0, 0})
	CMember(class USparksJamEmoteItemDefinition*)      JamEmote_Bass                                               OFFSET(get<T>, {0x760, 8, 0, 0})
	CMember(class USparksJamEmoteItemDefinition*)      JamEmote_Drum                                               OFFSET(get<T>, {0x768, 8, 0, 0})
};

/// Class /Script/SparksCosmeticsRuntime.SparksSongPreviewActor
/// Size: 0x0018 (0x000290 - 0x0002A8)
class ASparksSongPreviewActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	SMember(FName)                                     SongShortName                                               OFFSET(getStruct<T>, {0x2A0, 4, 0, 0})
	DMember(float)                                     BoundsScale                                                 OFFSET(get<float>, {0x2A4, 4, 0, 0})


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.SparksSongPreviewActor.StartSongPreview
	// void StartSongPreview();                                                                                                 // [0x3d1d968] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCosmeticsRuntime.SparksSongPreviewActor.OnSongTextureLoaded
	// void OnSongTextureLoaded(class UTexture2D* CoverArt);                                                                    // [0x3d1d968] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/SparksCosmeticsRuntime.SparksSpotlightAnimDefinition
/// Size: 0x0028 (0x000750 - 0x000778)
class USparksSpotlightAnimDefinition : public USparksAccountItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1912;

public:
	CMember(TWeakObjectPtr<ULevelSequence*>)           SpotlightSequence                                           OFFSET(get<T>, {0x750, 32, 0, 0})
	CMember(ESparksInstrumentType)                     InstrumentType                                              OFFSET(get<T>, {0x770, 1, 0, 0})
};

/// Class /Script/SparksCosmeticsRuntime.SparksGuitarSpotlightDefinition
/// Size: 0x0000 (0x000778 - 0x000778)
class USparksGuitarSpotlightDefinition : public USparksSpotlightAnimDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1912;

public:
};

/// Class /Script/SparksCosmeticsRuntime.SparksDrumSpotlightDefinition
/// Size: 0x0000 (0x000778 - 0x000778)
class USparksDrumSpotlightDefinition : public USparksSpotlightAnimDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1912;

public:
};

/// Class /Script/SparksCosmeticsRuntime.SparksBassSpotlightDefinition
/// Size: 0x0000 (0x000778 - 0x000778)
class USparksBassSpotlightDefinition : public USparksSpotlightAnimDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1912;

public:
};

/// Class /Script/SparksCosmeticsRuntime.SparksMicSpotlightDefinition
/// Size: 0x0000 (0x000778 - 0x000778)
class USparksMicSpotlightDefinition : public USparksSpotlightAnimDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1912;

public:
};

/// Class /Script/SparksCosmeticsRuntime.SparksKeyboardSpotlightDefinition
/// Size: 0x0000 (0x000778 - 0x000778)
class USparksKeyboardSpotlightDefinition : public USparksSpotlightAnimDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1912;

public:
};

/// Struct /Script/SparksCosmeticsRuntime.SparksVariantChoice
/// Size: 0x0018 (0x000000 - 0x000018)
class FSparksVariantChoice : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/SparksCosmeticsRuntime.SparksVariantChoices
/// Size: 0x0050 (0x000000 - 0x000050)
class FSparksVariantChoices : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/SparksCosmeticsRuntime.NameList
/// Size: 0x0010 (0x000000 - 0x000010)
class FNameList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/SparksCosmeticsRuntime.SparksCosmeticLoadoutData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FSparksCosmeticLoadoutData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FSparksVariantChoices)                     AuraChoices                                                 OFFSET(getStruct<T>, {0x40, 80, 0, 0})
	CMember(TMap<ESparksInstrumentType, FSparksVariantChoices>) InstrumentVariantChoices                           OFFSET(get<T>, {0x90, 80, 0, 0})
	CMember(TArray<class USparksSongItemDefinition*>)  JamSongChoices                                              OFFSET(get<T>, {0xE0, 16, 0, 0})
};

/// Struct /Script/SparksCosmeticsRuntime.SparksCosmeticsEvent_AuraEnable
/// Size: 0x000C (0x000000 - 0x00000C)
class FSparksCosmeticsEvent_AuraEnable : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(TWeakObjectPtr<AFortPlayerPawn*>)          ForPlayer                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bAuraIsEnabled                                              OFFSET(get<bool>, {0x8, 1, 0, 0})
};

