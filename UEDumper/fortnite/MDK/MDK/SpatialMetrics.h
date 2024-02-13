
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: SpatialMetricsCore

/// Class /Script/SpatialMetrics.SpatialMetricBase
/// Size: 0x0058 (0x000058 - 0x0000B0)
class USpatialMetricBase : public USpatialMetric
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/SpatialMetrics.ActorCountMetric
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UActorCountMetric : public USpatialMetricBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Class /Script/SpatialMetrics.ActorResourceSizeMetric
/// Size: 0x00E8 (0x000058 - 0x000140)
class UActorResourceSizeMetric : public USpatialMetric
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(float)                                     UpdateTimeThresholdInMs                                     OFFSET(get<float>, {0x138, 4, 0, 0})
	CMember(EResourceSizeMemoryCategory)               MemoryCategoryFlags                                         OFFSET(get<T>, {0x13C, 1, 0, 0})
};

/// Class /Script/SpatialMetrics.PlatformMemoryMetric
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UPlatformMemoryMetric : public USpatialMetricBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/SpatialMetrics.PlatformAvailableMemoryMetric
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UPlatformAvailableMemoryMetric : public USpatialMetricBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/SpatialMetrics.PlatformTimeMetric
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UPlatformTimeMetric : public USpatialMetricBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/SpatialMetrics.PlatformGameTimeMetric
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UPlatformGameTimeMetric : public USpatialMetricBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/SpatialMetrics.PlatformRenderTimeMetric
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UPlatformRenderTimeMetric : public USpatialMetricBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/SpatialMetrics.ProxyMetric
/// Size: 0x0050 (0x000058 - 0x0000A8)
class UProxyMetric : public USpatialMetric
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Enum /Script/SpatialMetrics.EResourceSizeMemoryCategory
/// Size: 0x06
enum EResourceSizeMemoryCategory : uint8_t
{
	EResourceSizeMemoryCategory__None                                                = 0,
	EResourceSizeMemoryCategory__System                                              = 1,
	EResourceSizeMemoryCategory__Video                                               = 2,
	EResourceSizeMemoryCategory__Other                                               = 4,
	EResourceSizeMemoryCategory__All                                                 = 7,
	EResourceSizeMemoryCategory__EResourceSizeMemoryCategory_MAX                     = 8
};

