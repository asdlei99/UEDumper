
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/SpatialMetricsCore.SpatialMetricsActorIndexerSubscriber
/// Size: 0x0000 (0x000028 - 0x000028)
class USpatialMetricsActorIndexerSubscriber : public UInterface
{ 
public:
};

/// Class /Script/SpatialMetricsCore.SpatialMetricsActorTrackerSubscriber
/// Size: 0x0000 (0x000028 - 0x000028)
class USpatialMetricsActorTrackerSubscriber : public UInterface
{ 
public:
};

/// Class /Script/SpatialMetricsCore.SpatialMetricsSubsystemExtension
/// Size: 0x0058 (0x000028 - 0x000080)
class USpatialMetricsSubsystemExtension : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0028   (0x0058)  MISSED
};

/// Class /Script/SpatialMetricsCore.TestExtension
/// Size: 0x0018 (0x000080 - 0x000098)
class UTestExtension : public USpatialMetricsSubsystemExtension
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0080   (0x0018)  MISSED
};

/// Struct /Script/SpatialMetricsCore.SpatialMetricProperties
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSpatialMetricProperties
{ 
	FName                                              IdName;                                                     // 0x0000   (0x0004)  
	int32_t                                            MinValue;                                                   // 0x0004   (0x0004)  
	int32_t                                            MaxValue;                                                   // 0x0008   (0x0004)  
	int32_t                                            ThresholdValue;                                             // 0x000C   (0x0004)  
	int32_t                                            SpatialPrecision;                                           // 0x0010   (0x0004)  
	EUnit                                              Unit;                                                       // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Class /Script/SpatialMetricsCore.SpatialMetric
/// Size: 0x0018 (0x000028 - 0x000040)
class USpatialMetric : public UObject
{ 
public:
	FSpatialMetricProperties                           Properties;                                                 // 0x0028   (0x0018)  
};

/// Class /Script/SpatialMetricsCore.SpatialMetricsActorIndexer
/// Size: 0x0138 (0x000080 - 0x0001B8)
class USpatialMetricsActorIndexer : public USpatialMetricsSubsystemExtension
{ 
public:
	unsigned char                                      UnknownData00_2[0x134];                                     // 0x0080   (0x0134)  MISSED
	int32_t                                            IndexCacheSize;                                             // 0x01B4   (0x0004)  
};

/// Class /Script/SpatialMetricsCore.SpatialMetricsActorTracker
/// Size: 0x0070 (0x000080 - 0x0000F0)
class USpatialMetricsActorTracker : public USpatialMetricsSubsystemExtension
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0080   (0x0070)  MISSED
};

/// Class /Script/SpatialMetricsCore.SpatialMetricsSubsystem
/// Size: 0x0038 (0x000030 - 0x000068)
class USpatialMetricsSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0030   (0x0010)  MISSED
	TArray<class USpatialMetric*>                      Metrics;                                                    // 0x0040   (0x0010)  
	TArray<class USpatialMetricsSubsystemExtension*>   Extensions;                                                 // 0x0050   (0x0010)  
	float                                              UpdateRateInSeconds;                                        // 0x0060   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Class /Script/SpatialMetricsCore.TestMetric
/// Size: 0x0080 (0x000040 - 0x0000C0)
class UTestMetric : public USpatialMetric
{ 
public:
	unsigned char                                      UnknownData00_2[0x74];                                      // 0x0040   (0x0074)  MISSED
	int32_t                                            SamplingDistance;                                           // 0x00B4   (0x0004)  
	float                                              WorldSamplingFactor;                                        // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
};

/// Struct /Script/SpatialMetricsCore.SpatialValue
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSpatialValue
{ 
	FIntVector                                         Location;                                                   // 0x0000   (0x000C)  
	int32_t                                            Value;                                                      // 0x000C   (0x0004)  
};

/// Struct /Script/SpatialMetricsCore.SpatialMetricSample
/// Size: 0x0048 (0x000000 - 0x000048)
struct FSpatialMetricSample
{ 
	FSpatialMetricProperties                           Properties;                                                 // 0x0000   (0x0018)  
	TArray<FSpatialValue>                              Values;                                                     // 0x0018   (0x0010)  
	FIntVector                                         BoundsMin;                                                  // 0x0028   (0x000C)  
	FIntVector                                         BoundsMax;                                                  // 0x0034   (0x000C)  
	FDateTime                                          Timestamp;                                                  // 0x0040   (0x0008)  
};

/// Struct /Script/SpatialMetricsCore.SpatialMetricSampleImageProperties
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSpatialMetricSampleImageProperties
{ 
	int32_t                                            ImageSize;                                                  // 0x0000   (0x0004)  
	int32_t                                            MinWorldUnitsPerPixel;                                      // 0x0004   (0x0004)  
	float                                              WorldColorSaturation;                                       // 0x0008   (0x0004)  
	float                                              SpatialValueAlpha;                                          // 0x000C   (0x0004)  
};

