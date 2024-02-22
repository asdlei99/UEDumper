
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Struct /Script/AttachableWheelsRuntime.AttachableWheelAttachData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FAttachableWheelAttachData
{ 
	SDK_UNDEFINED(8,11750) /* TWeakObjectPtr<UPrimitiveComponent*> */ __um(PrimitiveComponent);                    // 0x0000   (0x0008)  
	FVector                                            Pos;                                                        // 0x0008   (0x0018)  
	FVector                                            Axis1;                                                      // 0x0020   (0x0018)  
	FVector                                            Axis2;                                                      // 0x0038   (0x0018)  
	FName                                              AttachmentName;                                             // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Class /Script/AttachableWheelsRuntime.AttachableWheel
/// Size: 0x0098 (0x000290 - 0x000328)
class AAttachableWheel : public AActor
{ 
public:
	class UStaticMeshComponent*                        WheelMeshComponent;                                         // 0x0290   (0x0008)  
	FRotator                                           WheelOrientation;                                           // 0x0298   (0x0018)  
	float                                              WheelDistance;                                              // 0x02B0   (0x0004)  
	float                                              AxleDamping;                                                // 0x02B4   (0x0004)  
	class UPhysicsConstraintComponent*                 AxleConstraint;                                             // 0x02B8   (0x0008)  
	FAttachableWheelAttachData                         AttachData;                                                 // 0x02C0   (0x0058)  
	bool                                               bAutoCreateAttachableWheelsComponent;                       // 0x0318   (0x0001)  
	bool                                               bEnableWheelWheelCollision;                                 // 0x0319   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x031A   (0x0006)  MISSED
	class AActor*                                      ActorRef;                                                   // 0x0320   (0x0008)  


	/// Functions
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.SetAxleDamping
	// void SetAxleDamping(float InWheelDamping);                                                                            // [0xb7def28] Final|Native|Protected|BlueprintCallable 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.SetActorRef
	// void SetActorRef(class AActor* NewActorRef);                                                                          // [0x8473bd4] Native|Public|BlueprintCallable 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.OnRep_AttachData
	// void OnRep_AttachData(FAttachableWheelAttachData& AttachDataPrev);                                                    // [0xb7dee70] Final|Native|Protected|HasOutParms 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.OnPhysicsStateChanged
	// void OnPhysicsStateChanged(class UPrimitiveComponent* PrimitiveComponent, EComponentPhysicsStateChange StateChange);  // [0xb7dedac] Final|Native|Protected 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.OnDetached
	// void OnDetached(class UPrimitiveComponent* DetachedComponent);                                                        // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.OnAttached
	// void OnAttached(class UPrimitiveComponent* AttachedComponent);                                                        // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.GetWorldSpaceAttachData
	// bool GetWorldSpaceAttachData(FAttachableWheelAttachData& OutAttachData, class UPrimitiveComponent* PrimitiveComponent, FName BodyName); // [0xb7de9f8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.GetAttachedComponent
	// class UPrimitiveComponent* GetAttachedComponent();                                                                    // [0xb7de734] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.GetAttachData
	// FAttachableWheelAttachData GetAttachData();                                                                           // [0xb7de6dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.GetActorRef
	// class AActor* GetActorRef();                                                                                          // [0x85a8d24] Final|Native|Public|BlueprintCallable 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.DrawDebug
	// void DrawDebug();                                                                                                     // [0x3097b14] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.DetachFrom
	// bool DetachFrom(class UPrimitiveComponent* InComponent);                                                              // [0xb7de634] Final|Native|Public|BlueprintCallable 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.Detach
	// void Detach();                                                                                                        // [0xb7de5a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.AttachTo
	// bool AttachTo(class UPrimitiveComponent* InComponent, FVector& WorldLocation, FVector& AxleDirection);                // [0xb7de400] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.AttachInPlace
	// bool AttachInPlace(class UPrimitiveComponent* InComponent);                                                           // [0xb7de370] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AttachableWheelsRuntime.AttachableWheelsComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UAttachableWheelsComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(80,11751) /* TSet<AAttachableWheel*> */ __um(AttachedWheels);                                    // 0x00A0   (0x0050)  


	/// Functions
	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.OnWheelDetached
	// void OnWheelDetached(class AAttachableWheel* AttachedWheel);                                                          // [0x3d1d968] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.OnWheelAttached
	// void OnWheelAttached(class AAttachableWheel* AttachedWheel);                                                          // [0x3d1d968] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.HandleWheelDetached_Internal
	// bool HandleWheelDetached_Internal(class AAttachableWheel* AttachedWheel);                                             // [0xb7ded1c] Final|Native|Protected 
	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.HandleWheelAttached_Internal
	// bool HandleWheelAttached_Internal(class AAttachableWheel* AttachedWheel);                                             // [0xb7dec8c] Final|Native|Protected 
	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.GetAttachedWheels
	// TArray<AAttachableWheel*> GetAttachedWheels();                                                                        // [0xb7de98c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.GetAttachedWheelClosestOnAxis
	// class AAttachableWheel* GetAttachedWheelClosestOnAxis(FVector& Point, float& OutClosetDistanceToAxis, FVector& OutClosestPointOnAxis, FVector& OutClosestAxis); // [0xb7de758] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.DrawDebug
	// void DrawDebug();                                                                                                     // [0x3097b14] Final|RequiredAPI|Native|Public|BlueprintCallable|Const 
	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.DetachAllWheels
	// int32_t DetachAllWheels();                                                                                            // [0xb7de5b4] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

