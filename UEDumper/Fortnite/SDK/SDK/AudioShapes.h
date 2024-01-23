
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioGameplay
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/AudioShapes.EAudioShapeComponentState
/// Size: 0x04
enum class EAudioShapeComponentState : uint8_t
{
	EAudioShapeComponentState__Inactive                                              = 0,
	EAudioShapeComponentState__Active                                                = 1,
	EAudioShapeComponentState__Count                                                 = 2,
	EAudioShapeComponentState__EAudioShapeComponentState_MAX                         = 3
};

/// Class /Script/AudioShapes.AudioShapeComponent
/// Size: 0x0098 (0x0000A8 - 0x000140)
class UAudioShapeComponent : public UAudioGameplayComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00A8   (0x0008)  MISSED
	float                                              MaxDistanceOffset;                                          // 0x00B0   (0x0004)  
	float                                              SmoothingDistance;                                          // 0x00B4   (0x0004)  
	float                                              FadeInTime;                                                 // 0x00B8   (0x0004)  
	float                                              FadeOutTime;                                                // 0x00BC   (0x0004)  
	SDK_UNDEFINED(16,1758) /* FMulticastInlineDelegate */ __um(OnAudibleStateChanged);                             // 0x00C0   (0x0010)  
	SDK_UNDEFINED(80,1759) /* TMap<FName, UAudioComponent*> */ __um(AudioComponents);                              // 0x00D0   (0x0050)  
	TArray<class APlayerController*>                   LocalControllers;                                           // 0x0120   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0130   (0x0010)  MISSED


	/// Functions
	// Function /Script/AudioShapes.AudioShapeComponent.UpdateAudioShape
	// void UpdateAudioShape(TArray<APlayerController*>& InLocalControllers);                                                // [0x7a6e778] Final|Native|Public|HasOutParms 
	// Function /Script/AudioShapes.AudioShapeComponent.Enable
	// void Enable();                                                                                                        // [0x15560c8] Native|Protected|BlueprintCallable 
	// Function /Script/AudioShapes.AudioShapeComponent.Disable
	// void Disable();                                                                                                       // [0x6e4de20] Native|Protected|BlueprintCallable 
};

/// Class /Script/AudioShapes.AudioShapePrimitiveComponent
/// Size: 0x00C0 (0x000140 - 0x000200)
class UAudioShapePrimitiveComponent : public UAudioShapeComponent
{ 
public:
	class USoundBase*                                  SoundOnEdge;                                                // 0x0140   (0x0008)  
	class USoundBase*                                  SoundOnInside;                                              // 0x0148   (0x0008)  
	SDK_UNDEFINED(16,1760) /* FMulticastInlineDelegate */ __um(OnInsideStateChanged);                              // 0x0150   (0x0010)  
	bool                                               bUseOwningActorTransform;                                   // 0x0160   (0x0001)  
	bool                                               bAutoRefreshShape;                                          // 0x0161   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0162   (0x0006)  MISSED
	FVector                                            ActorTransformScale;                                        // 0x0168   (0x0018)  
	unsigned char                                      UnknownData01_6[0x80];                                      // 0x0180   (0x0080)  MISSED


	/// Functions
	// Function /Script/AudioShapes.AudioShapePrimitiveComponent.GetIsPlayerInside
	// bool GetIsPlayerInside();                                                                                             // [0x7a6e220] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioShapes.AudioShapePrimitiveComponent.GetInsideAudioComponent
	// class UAudioComponent* GetInsideAudioComponent();                                                                     // [0x7a6e1cc] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AudioShapes.AudioShapePrimitiveComponent.GetEdgeAudioComponent
	// class UAudioComponent* GetEdgeAudioComponent();                                                                       // [0x7a6e178] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AudioShapes.AudioShapeBoxComponent
/// Size: 0x0060 (0x000200 - 0x000260)
class UAudioShapeBoxComponent : public UAudioShapePrimitiveComponent
{ 
public:
	FTransform                                         BoxTransform;                                               // 0x0200   (0x0060)  


	/// Functions
	// Function /Script/AudioShapes.AudioShapeBoxComponent.SetBoxTransform
	// void SetBoxTransform(FTransform& InTransform);                                                                        // [0x7a6e380] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AudioShapes.AudioShapeCylinderComponent
/// Size: 0x0000 (0x000200 - 0x000200)
class UAudioShapeCylinderComponent : public UAudioShapePrimitiveComponent
{ 
public:


	/// Functions
	// Function /Script/AudioShapes.AudioShapeCylinderComponent.SetRadius
	// void SetRadius(float InRadius);                                                                                       // [0x7a6e618] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioShapes.AudioShapeCylinderComponent.SetHalfHeight
	// void SetHalfHeight(float InHalfHeight);                                                                               // [0x7a6e58c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioShapes.AudioShapeLineComponent
/// Size: 0x0030 (0x000200 - 0x000230)
class UAudioShapeLineComponent : public UAudioShapePrimitiveComponent
{ 
public:
	FVector                                            StartPoint;                                                 // 0x01F8   (0x0018)  
	FVector                                            EndPoint;                                                   // 0x0210   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0228   (0x0008)  MISSED


	/// Functions
	// Function /Script/AudioShapes.AudioShapeLineComponent.SetStartPoint
	// void SetStartPoint(FVector& InStartPoint);                                                                            // [0x7a6e6a4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AudioShapes.AudioShapeLineComponent.SetEndPoint
	// void SetEndPoint(FVector& InEndPoint);                                                                                // [0x7a6e4b8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AudioShapes.AudioShapeLineListComponent
/// Size: 0x0010 (0x000200 - 0x000210)
class UAudioShapeLineListComponent : public UAudioShapePrimitiveComponent
{ 
public:
	TArray<FVector>                                    PointList;                                                  // 0x01F8   (0x0010)  
	bool                                               bClosedLoop;                                                // 0x0208   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0209   (0x0007)  MISSED


	/// Functions
	// Function /Script/AudioShapes.AudioShapeLineListComponent.UpdatePoint
	// bool UpdatePoint(int32_t InIndex, FVector& InPoint);                                                                  // [0x7a6e814] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AudioShapes.AudioShapeLineListComponent.RemovePoint
	// bool RemovePoint(int32_t InIndex);                                                                                    // [0x7a6e2dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioShapes.AudioShapeLineListComponent.GetPoints
	// void GetPoints(TArray<FVector>& OutPoints);                                                                           // [0x7a6e23c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioShapes.AudioShapeLineListComponent.AddPoint
	// int32_t AddPoint(FVector& InPoint);                                                                                   // [0x7a6e068] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AudioShapes.AudioShapeSphereComponent
/// Size: 0x0000 (0x000200 - 0x000200)
class UAudioShapeSphereComponent : public UAudioShapePrimitiveComponent
{ 
public:


	/// Functions
	// Function /Script/AudioShapes.AudioShapeSphereComponent.SetRadius
	// void SetRadius(float InRadius);                                                                                       // [0x38cc5cc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioShapes.AudioShapeSubsystem
/// Size: 0x0058 (0x000030 - 0x000088)
class UAudioShapeSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0030   (0x0028)  MISSED
	TArray<class UAudioShapeComponent*>                AudioShapes;                                                // 0x0058   (0x0010)  
	TArray<class APlayerController*>                   LocalControllers;                                           // 0x0068   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0078   (0x0010)  MISSED
};

