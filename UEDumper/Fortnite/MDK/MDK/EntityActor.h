
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EntityCore

/// Class /Script/EntityActor.EntityAbilityInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UEntityAbilityInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/EntityActor.EntityActorCustomReplicationComponent
/// Size: 0x0008 (0x000058 - 0x000060)
class UEntityActorCustomReplicationComponent : public UEntityComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TEnumAsByte<EEntityActorReplicationOverrideType>) ReplicationOverride                                  OFFSET(get<T>, {0x58, 1, 0, 0})
	CMember(TEnumAsByte<EEntityActorReplicationRelevancyBucketType>) ReplicationRelevancyBucketType                OFFSET(get<T>, {0x59, 1, 0, 0})
	DMember(float)                                     CustomReplicationRelevancyRange                             OFFSET(get<float>, {0x5C, 4, 0, 0})
};

/// Class /Script/EntityActor.SimObject
/// Size: 0x0008 (0x000290 - 0x000298)
class ASimObject : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
};

/// Class /Script/EntityActor.ActorToEntityAdapterComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UActorToEntityAdapterComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<class UEntityComponent*>)           SerializedComponents                                        OFFSET(get<T>, {0xA8, 16, 0, 0})
	DMember(bool)                                      bForceOwnerReplication                                      OFFSET(get<bool>, {0xB8, 1, 1, 0})
};

/// Class /Script/EntityActor.EntityActorComponent
/// Size: 0x0030 (0x000058 - 0x000088)
class UEntityActorComponent : public UEntityComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(class UActorComponent*)                    ActorComponent                                              OFFSET(get<T>, {0x60, 8, 0, 0})
	DMember(bool)                                      bCreatedActorComponent                                      OFFSET(get<bool>, {0x68, 1, 0, 0})


	/// Functions
	// Function /Script/EntityActor.EntityActorComponent.OnRep_ActorComponent
	// void OnRep_ActorComponent();                                                                                             // [0x1f80fe8] Final|Native|Private 
};

/// Class /Script/EntityActor.EntityActorSubsystem
/// Size: 0x0038 (0x000030 - 0x000068)
class UEntityActorSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/EntityActor.EntityDynamicActivationComponent
/// Size: 0x0038 (0x000078 - 0x0000B0)
class UEntityDynamicActivationComponent : public UEntityEnableableComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(float)                                     TransitionTargetTime                                        OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(bool)                                      bTargetState                                                OFFSET(get<bool>, {0x84, 1, 0, 0})
	CMember(TArray<class UEntityComponent*>)           LinkedComponents                                            OFFSET(get<T>, {0x88, 16, 0, 0})


	/// Functions
	// Function /Script/EntityActor.EntityDynamicActivationComponent.OnRep_TransitionTarget
	// void OnRep_TransitionTarget();                                                                                           // [0x73a9b4c] Final|Native|Private 
	// Function /Script/EntityActor.EntityDynamicActivationComponent.OnEnabledChanged
	// void OnEnabledChanged(bool bIsEnabled);                                                                                  // [0x73a93e8] Final|Native|Public  
};

/// Class /Script/EntityActor.EntityToActorAdapterComponent
/// Size: 0x0008 (0x000058 - 0x000060)
class UEntityToActorAdapterComponent : public UEntityComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/EntityActor.EntityActorLocalInputComponent
/// Size: 0x0008 (0x000058 - 0x000060)
class UEntityActorLocalInputComponent : public UEntityComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TEnumAsByte<EAutoReceiveInput>)            AutoReceiveControllerInput                                  OFFSET(get<T>, {0x58, 1, 0, 0})
};

/// Class /Script/EntityActor.EntityActorCollisionComponent
/// Size: 0x0078 (0x000078 - 0x0000F0)
class UEntityActorCollisionComponent : public UEntityEnableableComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FName)                                     ShadowVar_CollisionProfileName                              OFFSET(getStruct<T>, {0xC0, 4, 0, 0})
	CMember(TWeakObjectPtr<UPrimitiveComponent*>)      PrimitiveComponentCache                                     OFFSET(get<T>, {0xC8, 32, 0, 0})
	CMember(TEnumAsByte<ECollisionShapeMode>)          CollisionShapeMode                                          OFFSET(get<T>, {0xEA, 1, 0, 0})


	/// Functions
	// Function /Script/EntityActor.EntityActorCollisionComponent.OnRep_PrimitiveComponent
	// void OnRep_PrimitiveComponent();                                                                                         // [0x73a9aac] Final|Native|Private 
	// Function /Script/EntityActor.EntityActorCollisionComponent.OnRep_CollisionProfileName
	// void OnRep_CollisionProfileName();                                                                                       // [0x73a9aac] Final|Native|Private 
	// Function /Script/EntityActor.EntityActorCollisionComponent.OnNativeComponentHit
	// void OnNativeComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit); // [0x73a97ec] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/EntityActor.EntityActorCollisionComponent.OnNativeComponentEndOverlap
	// void OnNativeComponentEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x73a96b0] Final|Native|Private 
	// Function /Script/EntityActor.EntityActorCollisionComponent.OnNativeComponentBeginOverlap
	// void OnNativeComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x73a9468] Final|Native|Private|HasOutParms 
	// Function /Script/EntityActor.EntityActorCollisionComponent.OnEnabledChanged
	// void OnEnabledChanged(bool bIsEnabled);                                                                                  // [0x73a9368] Final|Native|Private 
};

/// Class /Script/EntityActor.EntityActorPlayerComponent
/// Size: 0x0070 (0x000060 - 0x0000D0)
class UEntityActorPlayerComponent : public UEntityDataBackedComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FUniqueNetIdRepl)                          PlayerId                                                    OFFSET(getStruct<T>, {0x60, 48, 0, 0})
	CMember(TWeakObjectPtr<APlayerController*>)        PlayerControllerCache                                       OFFSET(get<T>, {0x90, 32, 0, 0})
	CMember(TWeakObjectPtr<APlayerState*>)             PlayerStateCache                                            OFFSET(get<T>, {0xB0, 32, 0, 0})


	/// Functions
	// Function /Script/EntityActor.EntityActorPlayerComponent.OnRep_PlayerId
	// void OnRep_PlayerId();                                                                                                   // [0x1f80fe8] Native|Protected     
};

/// Class /Script/EntityActor.EntityActorSkeletalMeshRenderComponent
/// Size: 0x0020 (0x000058 - 0x000078)
class UEntityActorSkeletalMeshRenderComponent : public UEntityComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(bool)                                      bAddedMeshRenderComponent                                   OFFSET(get<bool>, {0x60, 1, 0, 0})
	CMember(class USkeletalMesh*)                      ShadowVar_SkeletalMesh                                      OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(TEnumAsByte<ECollisionEnabled>)            ShadowVar_EnableCollision                                   OFFSET(get<T>, {0x70, 1, 0, 0})
};

/// Class /Script/EntityActor.EntityActorStaticMeshRenderComponent
/// Size: 0x0018 (0x000088 - 0x0000A0)
class UEntityActorStaticMeshRenderComponent : public UEntityActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TArray<class UMaterialInterface*>)         ShadowVar_MeshMaterials                                     OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(TEnumAsByte<ECollisionEnabled>)            ShadowVar_EnableCollision                                   OFFSET(get<T>, {0x98, 1, 0, 0})
	DMember(float)                                     ShadowVar_MaxDrawDistance                                   OFFSET(get<float>, {0x9C, 4, 0, 0})


	/// Functions
	// Function /Script/EntityActor.EntityActorStaticMeshRenderComponent.OnRep_MeshMaterials
	// void OnRep_MeshMaterials();                                                                                              // [0x73a9b20] Final|Native|Private 
	// Function /Script/EntityActor.EntityActorStaticMeshRenderComponent.OnRep_MaxDrawDistance
	// void OnRep_MaxDrawDistance();                                                                                            // [0x73a9b04] Final|Native|Private 
	// Function /Script/EntityActor.EntityActorStaticMeshRenderComponent.OnRep_EnableCollision
	// void OnRep_EnableCollision();                                                                                            // [0x73a9af0] Final|Native|Private 
};

/// Class /Script/EntityActor.EntityActorTextDisplayComponent
/// Size: 0x0028 (0x000088 - 0x0000B0)
class UEntityActorTextDisplayComponent : public UEntityActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FText)                                     DisplayText                                                 OFFSET(getStruct<T>, {0x88, 24, 0, 0})
	DMember(float)                                     ShadowVar_WorldSize                                         OFFSET(get<float>, {0xA0, 4, 0, 0})
	SMember(FColor)                                    ShadowVar_TextRenderColor                                   OFFSET(getStruct<T>, {0xA4, 4, 0, 0})
	DMember(bool)                                      bAddedTextRenderComponent                                   OFFSET(get<bool>, {0xA8, 1, 0, 0})


	/// Functions
	// Function /Script/EntityActor.EntityActorTextDisplayComponent.SetWorldSize
	// void SetWorldSize(float Value);                                                                                          // [0x73aa46c] Final|Native|Public  
	// Function /Script/EntityActor.EntityActorTextDisplayComponent.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalTextAligment> Value);                                                     // [0x73aa3e4] Final|Native|Public  
	// Function /Script/EntityActor.EntityActorTextDisplayComponent.SetTextRenderColor
	// void SetTextRenderColor(FColor Value);                                                                                   // [0x73aa2b8] Final|Native|Public|HasDefaults 
	// Function /Script/EntityActor.EntityActorTextDisplayComponent.SetText
	// void SetText(FText Text);                                                                                                // [0x73aa21c] Final|Native|Public  
	// Function /Script/EntityActor.EntityActorTextDisplayComponent.SetRelativeScale
	// void SetRelativeScale(FVector RelativeScale);                                                                            // [0x73aa0dc] Final|Native|Public|HasDefaults 
	// Function /Script/EntityActor.EntityActorTextDisplayComponent.SetRelativeRotation
	// void SetRelativeRotation(FRotator RelativeRotation);                                                                     // [0x73a9f9c] Final|Native|Public|HasDefaults 
	// Function /Script/EntityActor.EntityActorTextDisplayComponent.SetRelativeLocation
	// void SetRelativeLocation(FVector RelativeLocation);                                                                      // [0x73a9e5c] Final|Native|Public|HasDefaults 
	// Function /Script/EntityActor.EntityActorTextDisplayComponent.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizTextAligment> Value);                                                      // [0x73a9dd4] Final|Native|Public  
	// Function /Script/EntityActor.EntityActorTextDisplayComponent.OnRep_WorldSize
	// void OnRep_WorldSize();                                                                                                  // [0x73a9b60] Final|Native|Private 
	// Function /Script/EntityActor.EntityActorTextDisplayComponent.OnRep_TextRenderColor
	// void OnRep_TextRenderColor();                                                                                            // [0x73a9b34] Final|Native|Private 
	// Function /Script/EntityActor.EntityActorTextDisplayComponent.OnRep_DisplayText
	// void OnRep_DisplayText();                                                                                                // [0x73a9adc] Final|Native|Private 
	// Function /Script/EntityActor.EntityActorTextDisplayComponent.GetWorldSize
	// float GetWorldSize();                                                                                                    // [0x73a9320] Final|Native|Public|Const 
	// Function /Script/EntityActor.EntityActorTextDisplayComponent.GetVerticalAlignment
	// TEnumAsByte<EVerticalTextAligment> GetVerticalAlignment();                                                               // [0x73a92e4] Final|Native|Public  
	// Function /Script/EntityActor.EntityActorTextDisplayComponent.GetTextRenderColor
	// FColor GetTextRenderColor();                                                                                             // [0x73a92a0] Final|Native|Public|HasDefaults|Const 
	// Function /Script/EntityActor.EntityActorTextDisplayComponent.GetText
	// FText GetText();                                                                                                         // [0x73a922c] Final|Native|Public|Const 
	// Function /Script/EntityActor.EntityActorTextDisplayComponent.GetRelativeLocation
	// FVector GetRelativeLocation();                                                                                           // [0x73a91dc] Final|Native|Public|HasDefaults 
	// Function /Script/EntityActor.EntityActorTextDisplayComponent.GetHorizontalAlignment
	// TEnumAsByte<EHorizTextAligment> GetHorizontalAlignment();                                                                // [0x73a91a0] Final|Native|Public  
};

/// Class /Script/EntityActor.EntityActorPositionComponent
/// Size: 0x0020 (0x000060 - 0x000080)
class UEntityActorPositionComponent : public UEntityPositionComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FVector)                                   ShadowVar_Location                                          OFFSET(getStruct<T>, {0x60, 24, 0, 0})


	/// Functions
	// Function /Script/EntityActor.EntityActorPositionComponent.OnRootComponentChanged
	// void OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent);                              // [0x73a9b7c] Final|Native|Private 
};

/// Class /Script/EntityActor.EntityActorRotationComponent
/// Size: 0x0028 (0x000060 - 0x000088)
class UEntityActorRotationComponent : public UEntityRotationComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FRotator)                                  ShadowVar_Rotation                                          OFFSET(getStruct<T>, {0x60, 24, 0, 0})


	/// Functions
	// Function /Script/EntityActor.EntityActorRotationComponent.OnRootComponentChanged
	// void OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent);                              // [0x73a9c44] Final|Native|Private 
};

/// Class /Script/EntityActor.EntityActorScaleComponent
/// Size: 0x0020 (0x000060 - 0x000080)
class UEntityActorScaleComponent : public UEntityScaleComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FVector)                                   ShadowVar_Scale                                             OFFSET(getStruct<T>, {0x60, 24, 0, 0})


	/// Functions
	// Function /Script/EntityActor.EntityActorScaleComponent.OnRootComponentChanged
	// void OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent);                              // [0x73a9d0c] Final|Native|Private 
};

/// Enum /Script/EntityActor.EEntityActorReplicationOverrideType
/// Size: 0x07
enum EEntityActorReplicationOverrideType : uint8_t
{
	AutoReplication                                                                  = 0,
	DoNotReplicate                                                                   = 1,
	ReplicateAlways                                                                  = 2,
	Static_Spatial                                                                   = 3,
	Dynamic_Spatial                                                                  = 4,
	Dormancy_Spatial                                                                 = 5,
	EEntityActorReplicationOverrideType_MAX                                          = 6
};

/// Enum /Script/EntityActor.EEntityActorReplicationRelevancyBucketType
/// Size: 0x08
enum EEntityActorReplicationRelevancyBucketType : uint8_t
{
	UseVisualCullDistanceForReplicationRelevancy                                     = 0,
	SmallReplicationRelevancy                                                        = 1,
	MediumReplicationRelevancy                                                       = 2,
	LargeReplicationRelevancy                                                        = 3,
	MaxTargetRangeReplicationRelevancy                                               = 4,
	ImportantReplicationRelevancy                                                    = 5,
	CustomReplicationRelevancy                                                       = 6,
	EEntityActorReplicationRelevancyBucketType_MAX                                   = 7
};

/// Enum /Script/EntityActor.ESimObjectRepNodeMapping
/// Size: 0x06
enum ESimObjectRepNodeMapping : uint8_t
{
	NotReplicated                                                                    = 0,
	RelevantAllInsidePlayspace                                                       = 1,
	Spatial_Static                                                                   = 2,
	Spatial_Dynamic                                                                  = 3,
	Spatial_Dormancy                                                                 = 4,
	ESimObjectRepNodeMapping_MAX                                                     = 5
};

/// Enum /Script/EntityActor.ECollisionShapeMode
/// Size: 0x05
enum ECollisionShapeMode : uint8_t
{
	ECollisionShapeMode__Mesh                                                        = 0,
	ECollisionShapeMode__Box                                                         = 1,
	ECollisionShapeMode__Capsule                                                     = 2,
	ECollisionShapeMode__Sphere                                                      = 3,
	ECollisionShapeMode__ECollisionShapeMode_MAX                                     = 4
};

/// Enum /Script/EntityActor.EDefaultAnimationMode
/// Size: 0x04
enum EDefaultAnimationMode : uint8_t
{
	EDefaultAnimationMode__UseAnimationBlueprint                                     = 0,
	EDefaultAnimationMode__UseAnimationAsset                                         = 1,
	EDefaultAnimationMode__UseCustomMode                                             = 2,
	EDefaultAnimationMode__EDefaultAnimationMode_MAX                                 = 3
};

/// Enum /Script/EntityActor.EDefaultStaticMesh
/// Size: 0x06
enum EDefaultStaticMesh : uint8_t
{
	EDefaultStaticMesh__Cube                                                         = 0,
	EDefaultStaticMesh__Sphere                                                       = 1,
	EDefaultStaticMesh__Cylinder                                                     = 2,
	EDefaultStaticMesh__Cone                                                         = 3,
	EDefaultStaticMesh__Plane                                                        = 4,
	EDefaultStaticMesh__EDefaultStaticMesh_MAX                                       = 5
};

