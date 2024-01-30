
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAnimCharacterMovementLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary.PredictGroundMovementStopLocation
	// FVector PredictGroundMovementStopLocation(FVector& Velocity, bool bUseSeparateBrakingFriction, float BrakingFriction, float GroundFriction, float BrakingFrictionFactor, float BrakingDecelerationWalking); // [0xb240d20] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary.PredictGroundMovementPivotLocation
	// FVector PredictGroundMovementPivotLocation(FVector& Acceleration, FVector& Velocity, float GroundFriction);              // [0xb240b24] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAnimDistanceMatchingLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.SetPlayrateToMatchSpeed
	// FSequencePlayerReference SetPlayrateToMatchSpeed(FSequencePlayerReference& SequencePlayer, float SpeedToMatch, FVector2D PlayRateClamp); // [0xb241088] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.DistanceMatchToTarget
	// FSequenceEvaluatorReference DistanceMatchToTarget(FSequenceEvaluatorReference& SequenceEvaluator, float DistanceToTarget, FName DistanceCurveName); // [0xb2408bc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.AdvanceTimeByDistanceMatching
	// FSequenceEvaluatorReference AdvanceTimeByDistanceMatching(FAnimUpdateContext& UpdateContext, FSequenceEvaluatorReference& SequenceEvaluator, float DistanceTraveled, FName DistanceCurveName, FVector2D PlayRateClamp); // [0xb2404b8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

