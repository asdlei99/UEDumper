
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/ResolveTurretRuntime.FortPlayerAnimInstance_AntiVehMountedTurret
/// Size: 0x0040 (0x001620 - 0x001660)
class UFortPlayerAnimInstance_AntiVehMountedTurret : public UFortPlayerAnimInstanceProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5728;

public:
	SMember(FVector)                                   HandAttachL                                                 OFFSET(getStruct<T>, {0x1620, 24, 0, 0})
	SMember(FVector)                                   HandAttachR                                                 OFFSET(getStruct<T>, {0x1638, 24, 0, 0})
	SMember(FName)                                     HandAttachBoneNameL                                         OFFSET(getStruct<T>, {0x1650, 4, 0, 0})
	SMember(FName)                                     HandAttachBoneNameR                                         OFFSET(getStruct<T>, {0x1654, 4, 0, 0})
};

/// Class /Script/ResolveTurretRuntime.FortVehicleAnimInstance_AntiVehMountedTurret
/// Size: 0x0000 (0x000640 - 0x000640)
class UFortVehicleAnimInstance_AntiVehMountedTurret : public UFortMountedTurretAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1600;

public:
	DMember(float)                                     YawDeltaSmoothed                                            OFFSET(get<float>, {0x638, 4, 0, 0})
};

/// Class /Script/ResolveTurretRuntime.FortVehicleAnimInstance_SevenMountedTurret
/// Size: 0x0000 (0x000640 - 0x000640)
class UFortVehicleAnimInstance_SevenMountedTurret : public UFortMountedTurretAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1600;

public:
	DMember(float)                                     YawDeltaSmoothed                                            OFFSET(get<float>, {0x638, 4, 0, 0})
};

