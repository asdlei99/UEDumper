
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EntityCore

/// Enum /Script/EntityActor.EEntityActorReplicationOverrideType
/// Size: 0x07
enum class EEntityActorReplicationOverrideType : uint8_t
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
enum class EEntityActorReplicationRelevancyBucketType : uint8_t
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
enum class ESimObjectRepNodeMapping : uint8_t
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
enum class ECollisionShapeMode : uint8_t
{
	ECollisionShapeMode__Mesh                                                        = 0,
	ECollisionShapeMode__Box                                                         = 1,
	ECollisionShapeMode__Capsule                                                     = 2,
	ECollisionShapeMode__Sphere                                                      = 3,
	ECollisionShapeMode__ECollisionShapeMode_MAX                                     = 4
};

/// Enum /Script/EntityActor.EDefaultAnimationMode
/// Size: 0x04
enum class EDefaultAnimationMode : uint8_t
{
	EDefaultAnimationMode__UseAnimationBlueprint                                     = 0,
	EDefaultAnimationMode__UseAnimationAsset                                         = 1,
	EDefaultAnimationMode__UseCustomMode                                             = 2,
	EDefaultAnimationMode__EDefaultAnimationMode_MAX                                 = 3
};

/// Enum /Script/EntityActor.EDefaultStaticMesh
/// Size: 0x06
enum class EDefaultStaticMesh : uint8_t
{
	EDefaultStaticMesh__Cube                                                         = 0,
	EDefaultStaticMesh__Sphere                                                       = 1,
	EDefaultStaticMesh__Cylinder                                                     = 2,
	EDefaultStaticMesh__Cone                                                         = 3,
	EDefaultStaticMesh__Plane                                                        = 4,
	EDefaultStaticMesh__EDefaultStaticMesh_MAX                                       = 5
};

/// Class /Script/EntityActor.EntityAbilityInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UEntityAbilityInterface : public UInterface
{ 
public:
};

/// Class /Script/EntityActor.EntityActorCustomReplicationComponent
/// Size: 0x0008 (0x000058 - 0x000060)
class UEntityActorCustomReplicationComponent : public UEntityComponent
{ 
public:
	SDK_UNDEFINED(1,9228) /* TEnumAsByte<EEntityActorReplicationOverrideType> */ __um(ReplicationOverride);        // 0x0058   (0x0001)  
	SDK_UNDEFINED(1,9229) /* TEnumAsByte<EEntityActorReplicationRelevancyBucketType> */ __um(ReplicationRelevancyBucketType); // 0x0059   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x005A   (0x0002)  MISSED
	float                                              CustomReplicationRelevancyRange;                            // 0x005C   (0x0004)  
};

/// Class /Script/EntityActor.SimObject
/// Size: 0x0008 (0x000290 - 0x000298)
class ASimObject : public AActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0290   (0x0008)  MISSED
};

/// Class /Script/EntityActor.ActorToEntityAdapterComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UActorToEntityAdapterComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	TArray<class UEntityComponent*>                    SerializedComponents;                                       // 0x00A8   (0x0010)  
	bool                                               bForceOwnerReplication : 1;                                 // 0x00B8:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00B9   (0x0007)  MISSED
};

/// Class /Script/EntityActor.EntityActorComponent
/// Size: 0x0030 (0x000058 - 0x000088)
class UEntityActorComponent : public UEntityComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0058   (0x0008)  MISSED
	class UActorComponent*                             ActorComponent;                                             // 0x0060   (0x0008)  
	bool                                               bCreatedActorComponent;                                     // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1F];                                      // 0x0069   (0x001F)  MISSED


	/// Functions
	// Function /Script/EntityActor.EntityActorComponent.OnRep_ActorComponent
	// void OnRep_ActorComponent();                                                                                          // [0x1a4af80] Final|Native|Private 
};

/// Class /Script/EntityActor.EntityActorSubsystem
/// Size: 0x0038 (0x000030 - 0x000068)
class UEntityActorSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0030   (0x0038)  MISSED
};

/// Class /Script/EntityActor.EntityDynamicActivationComponent
/// Size: 0x0038 (0x000078 - 0x0000B0)
class UEntityDynamicActivationComponent : public UEntityEnableableComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0078   (0x0008)  MISSED
	float                                              TransitionTargetTime;                                       // 0x0080   (0x0004)  
	bool                                               bTargetState;                                               // 0x0084   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0085   (0x0003)  MISSED
	TArray<class UEntityComponent*>                    LinkedComponents;                                           // 0x0088   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0098   (0x0018)  MISSED


	/// Functions
	// Function /Script/EntityActor.EntityDynamicActivationComponent.OnRep_TransitionTarget
	// void OnRep_TransitionTarget();                                                                                        // [0x7280b38] Final|Native|Private 
	// Function /Script/EntityActor.EntityDynamicActivationComponent.OnEnabledChanged
	// void OnEnabledChanged(bool bIsEnabled);                                                                               // [0x728011c] Final|Native|Public  
};

/// Class /Script/EntityActor.EntityToActorAdapterComponent
/// Size: 0x0008 (0x000058 - 0x000060)
class UEntityToActorAdapterComponent : public UEntityComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Class /Script/EntityActor.EntityActorLocalInputComponent
/// Size: 0x0008 (0x000058 - 0x000060)
class UEntityActorLocalInputComponent : public UEntityComponent
{ 
public:
	SDK_UNDEFINED(1,9230) /* TEnumAsByte<EAutoReceiveInput> */ __um(AutoReceiveControllerInput);                   // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0059   (0x0007)  MISSED
};

/// Class /Script/EntityActor.EntityActorCollisionComponent
/// Size: 0x0078 (0x000078 - 0x0000F0)
class UEntityActorCollisionComponent : public UEntityEnableableComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x48];                                      // 0x0078   (0x0048)  MISSED
	FName                                              ShadowVar_CollisionProfileName;                             // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00C4   (0x0004)  MISSED
	SDK_UNDEFINED(32,9231) /* TWeakObjectPtr<UPrimitiveComponent*> */ __um(PrimitiveComponentCache);               // 0x00C8   (0x0020)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x00E8   (0x0002)  MISSED
	SDK_UNDEFINED(1,9232) /* TEnumAsByte<ECollisionShapeMode> */ __um(CollisionShapeMode);                         // 0x00EA   (0x0001)  
	unsigned char                                      UnknownData03_6[0x5];                                       // 0x00EB   (0x0005)  MISSED


	/// Functions
	// Function /Script/EntityActor.EntityActorCollisionComponent.OnRep_PrimitiveComponent
	// void OnRep_PrimitiveComponent();                                                                                      // [0x7280a98] Final|Native|Private 
	// Function /Script/EntityActor.EntityActorCollisionComponent.OnRep_CollisionProfileName
	// void OnRep_CollisionProfileName();                                                                                    // [0x7280a98] Final|Native|Private 
	// Function /Script/EntityActor.EntityActorCollisionComponent.OnNativeComponentHit
	// void OnNativeComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit); // [0x7280794] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/EntityActor.EntityActorCollisionComponent.OnNativeComponentEndOverlap
	// void OnNativeComponentEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x7280560] Final|Native|Private 
	// Function /Script/EntityActor.EntityActorCollisionComponent.OnNativeComponentBeginOverlap
	// void OnNativeComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x72801e0] Final|Native|Private|HasOutParms 
	// Function /Script/EntityActor.EntityActorCollisionComponent.OnEnabledChanged
	// void OnEnabledChanged(bool bIsEnabled);                                                                               // [0x7280058] Final|Native|Private 
};

/// Class /Script/EntityActor.EntityActorPlayerComponent
/// Size: 0x0070 (0x000060 - 0x0000D0)
class UEntityActorPlayerComponent : public UEntityDataBackedComponent
{ 
public:
	FUniqueNetIdRepl                                   PlayerId;                                                   // 0x0060   (0x0030)  
	SDK_UNDEFINED(32,9233) /* TWeakObjectPtr<APlayerController*> */ __um(PlayerControllerCache);                   // 0x0090   (0x0020)  
	SDK_UNDEFINED(32,9234) /* TWeakObjectPtr<APlayerState*> */ __um(PlayerStateCache);                             // 0x00B0   (0x0020)  


	/// Functions
	// Function /Script/EntityActor.EntityActorPlayerComponent.OnRep_PlayerId
	// void OnRep_PlayerId();                                                                                                // [0x1a4af80] Native|Protected     
};

/// Class /Script/EntityActor.EntityActorSkeletalMeshRenderComponent
/// Size: 0x0020 (0x000058 - 0x000078)
class UEntityActorSkeletalMeshRenderComponent : public UEntityComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0058   (0x0008)  MISSED
	bool                                               bAddedMeshRenderComponent;                                  // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0061   (0x0007)  MISSED
	class USkeletalMesh*                               ShadowVar_SkeletalMesh;                                     // 0x0068   (0x0008)  
	SDK_UNDEFINED(1,9235) /* TEnumAsByte<ECollisionEnabled> */ __um(ShadowVar_EnableCollision);                    // 0x0070   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/EntityActor.EntityActorStaticMeshRenderComponent
/// Size: 0x0018 (0x000088 - 0x0000A0)
class UEntityActorStaticMeshRenderComponent : public UEntityActorComponent
{ 
public:
	TArray<class UMaterialInterface*>                  ShadowVar_MeshMaterials;                                    // 0x0088   (0x0010)  
	SDK_UNDEFINED(1,9236) /* TEnumAsByte<ECollisionEnabled> */ __um(ShadowVar_EnableCollision);                    // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0099   (0x0003)  MISSED
	float                                              ShadowVar_MaxDrawDistance;                                  // 0x009C   (0x0004)  


	/// Functions
	// Function /Script/EntityActor.EntityActorStaticMeshRenderComponent.OnRep_MeshMaterials
	// void OnRep_MeshMaterials();                                                                                           // [0x7280b0c] Final|Native|Private 
	// Function /Script/EntityActor.EntityActorStaticMeshRenderComponent.OnRep_MaxDrawDistance
	// void OnRep_MaxDrawDistance();                                                                                         // [0x7280af0] Final|Native|Private 
	// Function /Script/EntityActor.EntityActorStaticMeshRenderComponent.OnRep_EnableCollision
	// void OnRep_EnableCollision();                                                                                         // [0x7280adc] Final|Native|Private 
};

/// Class /Script/EntityActor.EntityActorTextDisplayComponent
/// Size: 0x0028 (0x000088 - 0x0000B0)
class UEntityActorTextDisplayComponent : public UEntityActorComponent
{ 
public:
	SDK_UNDEFINED(24,9237) /* FText */                 __um(DisplayText);                                          // 0x0088   (0x0018)  
	float                                              ShadowVar_WorldSize;                                        // 0x00A0   (0x0004)  
	FColor                                             ShadowVar_TextRenderColor;                                  // 0x00A4   (0x0004)  
	bool                                               bAddedTextRenderComponent;                                  // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A9   (0x0007)  MISSED


	/// Functions
	// Function /Script/EntityActor.EntityActorTextDisplayComponent.SetWorldSize
	// void SetWorldSize(float Value);                                                                                       // [0x728151c] Final|Native|Public  
	// Function /Script/EntityActor.EntityActorTextDisplayComponent.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalTextAligment> Value);                                                  // [0x7281450] Final|Native|Public  
	// Function /Script/EntityActor.EntityActorTextDisplayComponent.SetTextRenderColor
	// void SetTextRenderColor(FColor Value);                                                                                // [0x7281394] Final|Native|Public|HasDefaults 
	// Function /Script/EntityActor.EntityActorTextDisplayComponent.SetText
	// void SetText(FText Text);                                                                                             // [0x72812b8] Final|Native|Public  
	// Function /Script/EntityActor.EntityActorTextDisplayComponent.SetRelativeScale
	// void SetRelativeScale(FVector RelativeScale);                                                                         // [0x72811c8] Final|Native|Public|HasDefaults 
	// Function /Script/EntityActor.EntityActorTextDisplayComponent.SetRelativeRotation
	// void SetRelativeRotation(FRotator RelativeRotation);                                                                  // [0x72810c8] Final|Native|Public|HasDefaults 
	// Function /Script/EntityActor.EntityActorTextDisplayComponent.SetRelativeLocation
	// void SetRelativeLocation(FVector RelativeLocation);                                                                   // [0x7280ff4] Final|Native|Public|HasDefaults 
	// Function /Script/EntityActor.EntityActorTextDisplayComponent.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizTextAligment> Value);                                                   // [0x7280f28] Final|Native|Public  
	// Function /Script/EntityActor.EntityActorTextDisplayComponent.OnRep_WorldSize
	// void OnRep_WorldSize();                                                                                               // [0x7280b4c] Final|Native|Private 
	// Function /Script/EntityActor.EntityActorTextDisplayComponent.OnRep_TextRenderColor
	// void OnRep_TextRenderColor();                                                                                         // [0x7280b20] Final|Native|Private 
	// Function /Script/EntityActor.EntityActorTextDisplayComponent.OnRep_DisplayText
	// void OnRep_DisplayText();                                                                                             // [0x7280ac8] Final|Native|Private 
	// Function /Script/EntityActor.EntityActorTextDisplayComponent.GetWorldSize
	// float GetWorldSize();                                                                                                 // [0x7280010] Final|Native|Public|Const 
	// Function /Script/EntityActor.EntityActorTextDisplayComponent.GetVerticalAlignment
	// TEnumAsByte<EVerticalTextAligment> GetVerticalAlignment();                                                            // [0x727ffd4] Final|Native|Public  
	// Function /Script/EntityActor.EntityActorTextDisplayComponent.GetTextRenderColor
	// FColor GetTextRenderColor();                                                                                          // [0x727ff90] Final|Native|Public|HasDefaults|Const 
	// Function /Script/EntityActor.EntityActorTextDisplayComponent.GetText
	// FText GetText();                                                                                                      // [0x727ff1c] Final|Native|Public|Const 
	// Function /Script/EntityActor.EntityActorTextDisplayComponent.GetRelativeLocation
	// FVector GetRelativeLocation();                                                                                        // [0x727fecc] Final|Native|Public|HasDefaults 
	// Function /Script/EntityActor.EntityActorTextDisplayComponent.GetHorizontalAlignment
	// TEnumAsByte<EHorizTextAligment> GetHorizontalAlignment();                                                             // [0x727fe90] Final|Native|Public  
};

/// Class /Script/EntityActor.EntityActorPositionComponent
/// Size: 0x0020 (0x000060 - 0x000080)
class UEntityActorPositionComponent : public UEntityPositionComponent
{ 
public:
	FVector                                            ShadowVar_Location;                                         // 0x0060   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0078   (0x0008)  MISSED


	/// Functions
	// Function /Script/EntityActor.EntityActorPositionComponent.OnRootComponentChanged
	// void OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent);                           // [0x7280b68] Final|Native|Private 
};

/// Class /Script/EntityActor.EntityActorRotationComponent
/// Size: 0x0028 (0x000060 - 0x000088)
class UEntityActorRotationComponent : public UEntityRotationComponent
{ 
public:
	FRotator                                           ShadowVar_Rotation;                                         // 0x0060   (0x0018)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0078   (0x0010)  MISSED


	/// Functions
	// Function /Script/EntityActor.EntityActorRotationComponent.OnRootComponentChanged
	// void OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent);                           // [0x7280ca8] Final|Native|Private 
};

/// Class /Script/EntityActor.EntityActorScaleComponent
/// Size: 0x0020 (0x000060 - 0x000080)
class UEntityActorScaleComponent : public UEntityScaleComponent
{ 
public:
	FVector                                            ShadowVar_Scale;                                            // 0x0060   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0078   (0x0008)  MISSED


	/// Functions
	// Function /Script/EntityActor.EntityActorScaleComponent.OnRootComponentChanged
	// void OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent);                           // [0x7280de8] Final|Native|Private 
};

