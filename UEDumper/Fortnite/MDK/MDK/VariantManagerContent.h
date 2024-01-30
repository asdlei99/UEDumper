
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/VariantManagerContent.LevelVariantSets
/// Size: 0x0068 (0x000028 - 0x000090)
class ULevelVariantSets : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(class UBlueprintGeneratedClass*)           DirectorClass                                               OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<class UVariantSet*>)                VariantSets                                                 OFFSET(get<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/VariantManagerContent.LevelVariantSets.GetVariantSetByName
	// class UVariantSet* GetVariantSetByName(FString VariantSetName);                                                          // [0xc31f850] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.LevelVariantSets.GetVariantSet
	// class UVariantSet* GetVariantSet(int32_t VariantSetIndex);                                                               // [0xc31f7b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.LevelVariantSets.GetNumVariantSets
	// int32_t GetNumVariantSets();                                                                                             // [0x662d8a4] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/VariantManagerContent.LevelVariantSetsActor
/// Size: 0x0068 (0x000290 - 0x0002F8)
class ALevelVariantSetsActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	SMember(FSoftObjectPath)                           LevelVariantSets                                            OFFSET(getStruct<T>, {0x290, 24, 0, 0})
	CMember(TMap<UBlueprintGeneratedClass*, ULevelVariantSetsFunctionDirector*>) DirectorInstances                 OFFSET(get<T>, {0x2A8, 80, 0, 0})


	/// Functions
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
	// bool SwitchOnVariantByName(FString VariantSetName, FString VariantName);                                                 // [0xc32186c] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
	// bool SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex);                                              // [0xc321764] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
	// void SetLevelVariantSets(class ULevelVariantSets* InVariantSets);                                                        // [0xc320258] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
	// class ULevelVariantSets* GetLevelVariantSets(bool bLoad);                                                                // [0xc31eec0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/VariantManagerContent.LevelVariantSetsFunctionDirector
/// Size: 0x0018 (0x000028 - 0x000040)
class ULevelVariantSetsFunctionDirector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/VariantManagerContent.PropertyValue
/// Size: 0x0188 (0x000028 - 0x0001B0)
class UPropertyValue : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	CMember(TArray<Properties>)                        Properties                                                  OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(TArray<int32_t>)                           PropertyIndices                                             OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(TArray<FCapturedPropSegment>)              CapturedPropSegments                                        OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FString)                                   FullDisplayString                                           OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FName)                                     PropertySetterName                                          OFFSET(getStruct<T>, {0xC8, 4, 0, 0})
	CMember(TMap<FString, FString>)                    PropertySetterParameterDefaults                             OFFSET(get<T>, {0xD0, 80, 0, 0})
	DMember(bool)                                      bHasRecordedData                                            OFFSET(get<bool>, {0x120, 1, 0, 0})
	CMember(class UClass*)                             LeafPropertyClass                                           OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(TArray<char>)                              ValueBytes                                                  OFFSET(get<T>, {0x138, 16, 0, 0})
	CMember(EPropertyValueCategory)                    PropCategory                                                OFFSET(get<T>, {0x148, 1, 0, 0})


	/// Functions
	// Function /Script/VariantManagerContent.PropertyValue.HasRecordedData
	// bool HasRecordedData();                                                                                                  // [0xa687aa4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.PropertyValue.GetPropertyTooltip
	// FText GetPropertyTooltip();                                                                                              // [0xc31efec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.PropertyValue.GetFullDisplayString
	// FString GetFullDisplayString();                                                                                          // [0xc31eea4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VariantManagerContent.PropertyValueTransform
/// Size: 0x0000 (0x0001B0 - 0x0001B0)
class UPropertyValueTransform : public UPropertyValue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
};

/// Class /Script/VariantManagerContent.PropertyValueVisibility
/// Size: 0x0000 (0x0001B0 - 0x0001B0)
class UPropertyValueVisibility : public UPropertyValue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
};

/// Class /Script/VariantManagerContent.PropertyValueColor
/// Size: 0x0000 (0x0001B0 - 0x0001B0)
class UPropertyValueColor : public UPropertyValue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
};

/// Class /Script/VariantManagerContent.PropertyValueMaterial
/// Size: 0x0000 (0x0001B0 - 0x0001B0)
class UPropertyValueMaterial : public UPropertyValue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
};

/// Class /Script/VariantManagerContent.PropertyValueOption
/// Size: 0x0000 (0x0001B0 - 0x0001B0)
class UPropertyValueOption : public UPropertyValue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
};

/// Class /Script/VariantManagerContent.PropertyValueSoftObject
/// Size: 0x0000 (0x0001B0 - 0x0001B0)
class UPropertyValueSoftObject : public UPropertyValue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
};

/// Class /Script/VariantManagerContent.SwitchActor
/// Size: 0x0028 (0x000290 - 0x0002B8)
class ASwitchActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	CMember(class USceneComponent*)                    SceneComponent                                              OFFSET(get<T>, {0x2A8, 8, 0, 0})
	DMember(int32_t)                                   LastSelectedOption                                          OFFSET(get<int32_t>, {0x2B0, 4, 0, 0})


	/// Functions
	// Function /Script/VariantManagerContent.SwitchActor.SelectOption
	// void SelectOption(int32_t OptionIndex);                                                                                  // [0xc31ffb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.SwitchActor.GetSelectedOption
	// int32_t GetSelectedOption();                                                                                             // [0x857d420] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.SwitchActor.GetOptions
	// TArray<AActor*> GetOptions();                                                                                            // [0xc31ef64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VariantManagerContent.Variant
/// Size: 0x0058 (0x000028 - 0x000080)
class UVariant : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<FVariantDependency>)                Dependencies                                                OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FText)                                     DisplayText                                                 OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	CMember(TArray<class UVariantObjectBinding*>)      ObjectBindings                                              OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(class UTexture2D*)                         Thumbnail                                                   OFFSET(get<T>, {0x78, 8, 0, 0})


	/// Functions
	// Function /Script/VariantManagerContent.Variant.SwitchOn
	// void SwitchOn();                                                                                                         // [0xc321750] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromTexture
	// void SetThumbnailFromTexture(class UTexture2D* NewThumbnail);                                                            // [0xc321638] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromFile
	// void SetThumbnailFromFile(FString FilePath);                                                                             // [0xc320880] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromEditorViewport
	// void SetThumbnailFromEditorViewport();                                                                                   // [0x32e4b44] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromCamera
	// void SetThumbnailFromCamera(class UObject* WorldContextObject, FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // [0xc3202d8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetDisplayText
	// void SetDisplayText(FText& NewDisplayText);                                                                              // [0xc320120] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetDependency
	// void SetDependency(int32_t Index, FVariantDependency& Dependency);                                                       // [0xc320038] Final|Native|Public|HasOutParms 
	// Function /Script/VariantManagerContent.Variant.IsActive
	// bool IsActive();                                                                                                         // [0xc31ff28] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetThumbnail
	// class UTexture2D* GetThumbnail();                                                                                        // [0x96e17d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetParent
	// class UVariantSet* GetParent();                                                                                          // [0xc31efa4] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetNumDependencies
	// int32_t GetNumDependencies();                                                                                            // [0x6339b64] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetNumActors
	// int32_t GetNumActors();                                                                                                  // [0xb84ae0c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetDisplayText
	// FText GetDisplayText();                                                                                                  // [0xc31ee1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.Variant.GetDependents
	// TArray<UVariant*> GetDependents(class ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies);               // [0xc31ec40] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetDependency
	// FVariantDependency GetDependency(int32_t Index);                                                                         // [0xc31eba8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetActor
	// class AActor* GetActor(int32_t ActorIndex);                                                                              // [0xc31eaf4] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.DeleteDependency
	// void DeleteDependency(int32_t Index);                                                                                    // [0xc31ea74] Final|Native|Public  
	// Function /Script/VariantManagerContent.Variant.AddDependency
	// int32_t AddDependency(FVariantDependency& Dependency);                                                                   // [0xc31e9c8] Final|Native|Public|HasOutParms 
};

/// Class /Script/VariantManagerContent.VariantObjectBinding
/// Size: 0x0060 (0x000028 - 0x000088)
class UVariantObjectBinding : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FString)                                   CachedActorLabel                                            OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FSoftObjectPath)                           ObjectPtr                                                   OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	CMember(TLazyObjectPtr<UObject*>)                  LazyObjectPtr                                               OFFSET(get<T>, {0x50, 24, 0, 0})
	CMember(TArray<class UPropertyValue*>)             CapturedProperties                                          OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<FFunctionCaller>)                   FunctionCallers                                             OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/VariantManagerContent.VariantSet
/// Size: 0x0050 (0x000028 - 0x000078)
class UVariantSet : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FText)                                     DisplayText                                                 OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	DMember(bool)                                      bExpanded                                                   OFFSET(get<bool>, {0x58, 1, 0, 0})
	CMember(TArray<class UVariant*>)                   Variants                                                    OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(class UTexture2D*)                         Thumbnail                                                   OFFSET(get<T>, {0x70, 8, 0, 0})


	/// Functions
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromTexture
	// void SetThumbnailFromTexture(class UTexture2D* NewThumbnail);                                                            // [0xc3216c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromFile
	// void SetThumbnailFromFile(FString FilePath);                                                                             // [0xc320f5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromEditorViewport
	// void SetThumbnailFromEditorViewport();                                                                                   // [0x32e4b44] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromCamera
	// void SetThumbnailFromCamera(class UObject* WorldContextObject, FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // [0xc3205ac] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetDisplayText
	// void SetDisplayText(FText& NewDisplayText);                                                                              // [0xc3201bc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.GetVariantByName
	// class UVariant* GetVariantByName(FString VariantName);                                                                   // [0xc31f0d8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetVariant
	// class UVariant* GetVariant(int32_t VariantIndex);                                                                        // [0xc31f038] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetThumbnail
	// class UTexture2D* GetThumbnail();                                                                                        // [0x34878bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.GetParent
	// class ULevelVariantSets* GetParent();                                                                                    // [0xc31efc8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetNumVariants
	// int32_t GetNumVariants();                                                                                                // [0xc31ef50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.VariantSet.GetDisplayText
	// FText GetDisplayText();                                                                                                  // [0xc31ee60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/VariantManagerContent.FunctionCaller
/// Size: 0x0004 (0x000000 - 0x000004)
class FFunctionCaller : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     FunctionName                                                OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/VariantManagerContent.CapturedPropSegment
/// Size: 0x0028 (0x000000 - 0x000028)
class FCapturedPropSegment : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   PropertyName                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   PropertyIndex                                               OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FString)                                   ComponentName                                               OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/VariantManagerContent.VariantDependency
/// Size: 0x0048 (0x000000 - 0x000048)
class FVariantDependency : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UVariantSet*>)              VariantSet                                                  OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<UVariant*>)                 Variant                                                     OFFSET(get<T>, {0x20, 32, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x40, 1, 0, 0})
};

/// Enum /Script/VariantManagerContent.EPropertyValueCategory
/// Size: 0x10
enum EPropertyValueCategory : uint8_t
{
	EPropertyValueCategory__Undefined                                                = 0,
	EPropertyValueCategory__Generic                                                  = 1,
	EPropertyValueCategory__RelativeLocation                                         = 2,
	EPropertyValueCategory__RelativeRotation                                         = 4,
	EPropertyValueCategory__RelativeScale3D                                          = 8,
	EPropertyValueCategory__Visibility                                               = 16,
	EPropertyValueCategory__Material                                                 = 32,
	EPropertyValueCategory__Color                                                    = 64,
	EPropertyValueCategory__Option                                                   = 128,
	EPropertyValueCategory__EPropertyValueCategory_MAX                               = 129
};

