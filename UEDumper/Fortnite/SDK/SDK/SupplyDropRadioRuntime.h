
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags

/// Enum /Script/SupplyDropRadioRuntime.ESupplyDropRadioBalloonState
/// Size: 0x05
enum class ESupplyDropRadioBalloonState : uint8_t
{
	ESupplyDropRadioBalloonState__Invalid                                            = 0,
	ESupplyDropRadioBalloonState__Closed                                             = 1,
	ESupplyDropRadioBalloonState__Opened                                             = 2,
	ESupplyDropRadioBalloonState__Destroyed                                          = 3,
	ESupplyDropRadioBalloonState__ESupplyDropRadioBalloonState_MAX                   = 4
};

/// Class /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio
/// Size: 0x01E8 (0x000980 - 0x000B68)
class ABuildingGameplayActorSupplyDropRadio : public ABuildingGameplayActor
{ 
public:
	float                                              MinimumMovingSpeedThresholdSq;                              // 0x0980   (0x0004)  
	float                                              BalloonClosedGroundedFallSpeed;                             // 0x0984   (0x0004)  
	bool                                               bAutoOpen;                                                  // 0x0988   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0989   (0x0007)  MISSED
	FGameplayTagContainer                              ForceOpenActorTags;                                         // 0x0990   (0x0020)  
	FGameplayTagQuery                                  IgnoreMovingCollisionWithActorTagQuery;                     // 0x09B0   (0x0048)  
	float                                              InterpRateToBalloonOpenedFallSpeed;                         // 0x09F8   (0x0004)  
	float                                              DistanceFromOriginalSpawnLocForBalloonOpen;                 // 0x09FC   (0x0004)  
	ESupplyDropRadioBalloonState                       BalloonState;                                               // 0x0A00   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0A01   (0x0007)  MISSED
	FHitResult                                         WaterHitResult;                                             // 0x0A08   (0x00E8)  
	bool                                               bMoving;                                                    // 0x0AF0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0AF1   (0x0003)  MISSED
	float                                              FallSpeed;                                                  // 0x0AF4   (0x0004)  
	float                                              BalloonOpenedFallSpeed;                                     // 0x0AF8   (0x0004)  
	float                                              GravityMultiplier;                                          // 0x0AFC   (0x0004)  
	FVector                                            ServerLocation;                                             // 0x0B00   (0x0018)  
	float                                              ClientLocationCorrectionMaxDistSqWhenBalloonDisabled;       // 0x0B18   (0x0004)  
	float                                              ClientLocationCorrectionMaxDistSqWhenBalloonEnabled;        // 0x0B1C   (0x0004)  
	FVector                                            Velocity;                                                   // 0x0B20   (0x0018)  
	FVector                                            PreviousFrameVelocity;                                      // 0x0B38   (0x0018)  
	FVector                                            OriginalServerSpawnLocation;                                // 0x0B50   (0x0018)  


	/// Functions
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.UpdateGroundInfo
	// void UpdateGroundInfo(bool bValidBlock, FHitResult& MovementHitResult);                                               // [0x2047e54] BlueprintAuthorityOnly|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.SetGravityMultiplier
	// void SetGravityMultiplier(float InGravityMultiplier);                                                                 // [0x6189d50] Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.SetBalloonState
	// void SetBalloonState(ESupplyDropRadioBalloonState InBalloonState);                                                    // [0x809f754] Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.OpenSupplyDrop
	// void OpenSupplyDrop();                                                                                                // [0x2047e54] BlueprintAuthorityOnly|Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.OnRep_DistanceFromOriginalSpawnLocForBalloonOpen
	// void OnRep_DistanceFromOriginalSpawnLocForBalloonOpen();                                                              // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.OnRep_BalloonState
	// void OnRep_BalloonState();                                                                                            // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.IsMoving
	// bool IsMoving();                                                                                                      // [0xb477174] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.IsGrounded
	// bool IsGrounded();                                                                                                    // [0x2047e54] Event|Protected|BlueprintEvent|Const 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.HandleMoveIgnoredActorEndPlay
	// void HandleMoveIgnoredActorEndPlay(class AActor* EndPlayActor, TEnumAsByte<EEndPlayReason> Reason);                   // [0xb477034] Final|Native|Protected 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetRootCollisionComponent
	// class UBoxComponent* GetRootCollisionComponent();                                                                     // [0x2047e54] Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetHighestAttachParent
	// class AActor* GetHighestAttachParent(class AActor* InActor);                                                          // [0xb476f60] Final|Native|Protected|BlueprintCallable|Const 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetGravityZ
	// float GetGravityZ();                                                                                                  // [0xb476f38] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetBalloonState
	// ESupplyDropRadioBalloonState GetBalloonState();                                                                       // [0xb476f20] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SupplyDropRadioRuntime.FortSupplyDropRadioAttachActorComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UFortSupplyDropRadioAttachActorComponent : public UActorComponent
{ 
public:


	/// Functions
	// Function /Script/SupplyDropRadioRuntime.FortSupplyDropRadioAttachActorComponent.SetOwningActorNetCullDistance
	// void SetOwningActorNetCullDistance(float DistanceSquared);                                                            // [0xb4772cc] Final|Native|Protected|BlueprintCallable|Const 
};

/// Class /Script/SupplyDropRadioRuntime.FortSupplyDropRadioBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortSupplyDropRadioBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SupplyDropRadioRuntime.FortSupplyDropRadioBlueprintLibrary.StopCurrentConversation
	// void StopCurrentConversation(class AFortPlayerControllerGameplay* PlayerController);                                  // [0xb477390] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/SupplyDropRadioRuntime.FortSupplyDropRadioBlueprintLibrary.SetMoveShouldAbortConversation
	// void SetMoveShouldAbortConversation(class AFortPlayerControllerGameplay* PlayerController, bool bNewMoveAbortConversation); // [0xb47718c] Final|BlueprintCosmetic|Native|Static|Private|BlueprintCallable 
};

