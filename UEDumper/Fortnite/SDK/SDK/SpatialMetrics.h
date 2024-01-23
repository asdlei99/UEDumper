
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: SpatialMetricsCore

/// Enum /Script/SpatialMetrics.EResourceSizeMemoryCategory
/// Size: 0x06
enum class EResourceSizeMemoryCategory : uint8_t
{
	EResourceSizeMemoryCategory__None                                                = 0,
	EResourceSizeMemoryCategory__System                                              = 1,
	EResourceSizeMemoryCategory__Video                                               = 2,
	EResourceSizeMemoryCategory__Other                                               = 4,
	EResourceSizeMemoryCategory__All                                                 = 7,
	EResourceSizeMemoryCategory__EResourceSizeMemoryCategory_MAX                     = 8
};

/// Class /Script/SpatialMetrics.ActorCountMetric
/// Size: 0x0060 (0x000040 - 0x0000A0)
class UActorCountMetric : public USpatialMetric
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0040   (0x0060)  MISSED
};

/// Class /Script/SpatialMetrics.ActorResourceSizeMetric
/// Size: 0x00E8 (0x000040 - 0x000128)
class UActorResourceSizeMetric : public USpatialMetric
{ 
public:
	unsigned char                                      UnknownData00_2[0xE0];                                      // 0x0040   (0x00E0)  MISSED
	float                                              UpdateTimeThresholdInMs;                                    // 0x0120   (0x0004)  
	EResourceSizeMemoryCategory                        MemoryCategoryFlags;                                        // 0x0124   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0125   (0x0003)  MISSED
};

/// Class /Script/SpatialMetrics.ProxyMetric
/// Size: 0x0050 (0x000040 - 0x000090)
class UProxyMetric : public USpatialMetric
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0040   (0x0050)  MISSED
};

