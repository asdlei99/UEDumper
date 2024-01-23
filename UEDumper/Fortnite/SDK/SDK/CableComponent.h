
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/CableComponent.CableActor
/// Size: 0x0008 (0x000290 - 0x000298)
class ACableActor : public AActor
{ 
public:
	class UCableComponent*                             CableComponent;                                             // 0x0290   (0x0008)  
};

/// Class /Script/CableComponent.CableComponent
/// Size: 0x00B0 (0x0005B0 - 0x000660)
class UCableComponent : public UMeshComponent
{ 
public:
	bool                                               bAttachStart;                                               // 0x05A8   (0x0001)  
	bool                                               bAttachEnd;                                                 // 0x05A9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x05AA   (0x0006)  MISSED
	FComponentReference                                AttachEndTo;                                                // 0x05B0   (0x0028)  
	FName                                              AttachEndToSocketName;                                      // 0x05D8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x05DC   (0x0004)  MISSED
	FVector                                            EndLocation;                                                // 0x05E0   (0x0018)  
	float                                              CableLength;                                                // 0x05F8   (0x0004)  
	int32_t                                            NumSegments;                                                // 0x05FC   (0x0004)  
	float                                              SubstepTime;                                                // 0x0600   (0x0004)  
	int32_t                                            SolverIterations;                                           // 0x0604   (0x0004)  
	bool                                               bEnableStiffness;                                           // 0x0608   (0x0001)  
	bool                                               bUseSubstepping;                                            // 0x0609   (0x0001)  
	bool                                               bSkipCableUpdateWhenNotVisible;                             // 0x060A   (0x0001)  
	bool                                               bSkipCableUpdateWhenNotOwnerRecentlyRendered;               // 0x060B   (0x0001)  
	bool                                               bEnableCollision;                                           // 0x060C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x060D   (0x0003)  MISSED
	float                                              CollisionFriction;                                          // 0x0610   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0614   (0x0004)  MISSED
	FVector                                            CableForce;                                                 // 0x0618   (0x0018)  
	float                                              CableGravityScale;                                          // 0x0630   (0x0004)  
	float                                              CableWidth;                                                 // 0x0634   (0x0004)  
	int32_t                                            NumSides;                                                   // 0x0638   (0x0004)  
	float                                              TileMaterial;                                               // 0x063C   (0x0004)  
	unsigned char                                      UnknownData04_6[0x20];                                      // 0x0640   (0x0020)  MISSED


	/// Functions
	// Function /Script/CableComponent.CableComponent.SetAttachEndToComponent
	// void SetAttachEndToComponent(class USceneComponent* Component, FName SocketName);                                     // [0x7c1a16c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CableComponent.CableComponent.SetAttachEndTo
	// void SetAttachEndTo(class AActor* Actor, FName ComponentProperty, FName SocketName);                                  // [0x7c19fd8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CableComponent.CableComponent.GetCableParticleLocations
	// void GetCableParticleLocations(TArray<FVector>& Locations);                                                           // [0x7c19f3c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedComponent
	// class USceneComponent* GetAttachedComponent();                                                                        // [0x7c19edc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedActor
	// class AActor* GetAttachedActor();                                                                                     // [0x7c19eb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

