
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

/// Class /Script/LinedNotebookGameplayRuntime.LinedNotebookItemLayerAnimInstance
/// Size: 0x0140 (0x0006F0 - 0x000830)
class ULinedNotebookItemLayerAnimInstance : public UFortItemLayerAnimInstance
{ 
public:
	FGameplayTag                                       IsInAirAttackTag;                                           // 0x06F0   (0x0004)  
	FGameplayTag                                       IsDoubleJumpingTag;                                         // 0x06F4   (0x0004)  
	FGameplayTag                                       IsSurfaceSwimmingTag;                                       // 0x06F8   (0x0004)  
	FGameplayTag                                       IsRidingMotorcycleTag;                                      // 0x06FC   (0x0004)  
	FGameplayTag                                       IsGrindRailTag;                                             // 0x0700   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0704   (0x0004)  MISSED
	class UAnimSequenceBase*                           DoubleJumpSequenceForward;                                  // 0x0708   (0x0008)  
	class UAnimSequenceBase*                           DoubleJumpSequenceBackward;                                 // 0x0710   (0x0008)  
	class UAnimSequenceBase*                           DoubleJumpSequenceLeft;                                     // 0x0718   (0x0008)  
	class UAnimSequenceBase*                           DoubleJumpSequenceRight;                                    // 0x0720   (0x0008)  
	class UAnimSequenceBase*                           EvergreenMotorcyclePose;                                    // 0x0728   (0x0008)  
	class UAnimSequenceBase*                           EvergreenSlidingPose;                                       // 0x0730   (0x0008)  
	class UAnimSequenceBase*                           EvergreenGrindRailPose;                                     // 0x0738   (0x0008)  
	class UAnimSequenceBase*                           TacSprintHandPose;                                          // 0x0740   (0x0008)  
	SDK_UNDEFINED(32,14628) /* TWeakObjectPtr<UAnimMontage*> */ __um(DashMontage);                                 // 0x0748   (0x0020)  
	SDK_UNDEFINED(32,14629) /* TWeakObjectPtr<UAnimMontage*> */ __um(DeltaEquipMontage);                           // 0x0768   (0x0020)  
	SDK_UNDEFINED(16,14630) /* TArray<TWeakObjectPtr<UAnimMontage*>> */ __um(SwingMontages);                       // 0x0788   (0x0010)  
	FAlphaBlendArgs                                    DeltaEquipBlendOut;                                         // 0x0798   (0x0010)  
	bool                                               bUseOceanRiverTacSprint;                                    // 0x07A8   (0x0001)  
	bool                                               bUseDeltaTacSprint;                                         // 0x07A9   (0x0001)  
	bool                                               bIsDelta;                                                   // 0x07AA   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x07AB   (0x0005)  MISSED
	class UAnimSequenceBase*                           DoubleJumpSequence;                                         // 0x07B0   (0x0008)  
	class UAnimSequenceBase*                           EvergreenPose;                                              // 0x07B8   (0x0008)  
	float                                              Yaw;                                                        // 0x07C0   (0x0004)  
	float                                              YawAdjusted;                                                // 0x07C4   (0x0004)  
	float                                              pitch;                                                      // 0x07C8   (0x0004)  
	float                                              RotationAlpha;                                              // 0x07CC   (0x0004)  
	float                                              DeltaDoorBashRightArmAlpha;                                 // 0x07D0   (0x0004)  
	bool                                               bIsDoubleJumping : 1;                                       // 0x07D4:0 (0x0001)  
	bool                                               bIsDoubleJumpStart : 1;                                     // 0x07D4:1 (0x0001)  
	bool                                               bIsDashLoop : 1;                                            // 0x07D4:2 (0x0001)  
	bool                                               bIsNoDashOrDoubleJump : 1;                                  // 0x07D4:3 (0x0001)  
	bool                                               bIsExitDoubleJump : 1;                                      // 0x07D4:4 (0x0001)  
	bool                                               bIsDeltaWaterJump : 1;                                      // 0x07D4:5 (0x0001)  
	bool                                               bIsWaterLanding : 1;                                        // 0x07D4:6 (0x0001)  
	bool                                               bIsNotDeltaSwimJump : 1;                                    // 0x07D4:7 (0x0001)  
	bool                                               bIsEvergreenUB : 1;                                         // 0x07D5:0 (0x0001)  
	bool                                               bIsOceanRiverTacSprint : 1;                                 // 0x07D5:1 (0x0001)  
	bool                                               bIsDeltaTacSprint : 1;                                      // 0x07D5:2 (0x0001)  
	bool                                               bIsParachuting : 1;                                         // 0x07D5:3 (0x0001)  
	bool                                               bIsDolphinDoubleJump : 1;                                   // 0x07D5:4 (0x0001)  
	unsigned char                                      UnknownData02_6[0x5A];                                      // 0x07D6   (0x005A)  MISSED
};

