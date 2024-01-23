
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameFeatures

/// Class /Script/MetaHumanUEFNRuntime.GameFeatureAction_MetaHuman
/// Size: 0x00B0 (0x000028 - 0x0000D8)
class UGameFeatureAction_MetaHuman : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(TMap<EMetaHumanBodyType, TWeakObjectPtr<UClass*>>) BodyPostAnimBPs                                     OFFSET(get<T>, {0x28, 80, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   Face_AnimBP                                                 OFFSET(get<T>, {0x78, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   Face_PostAnimBP                                             OFFSET(get<T>, {0x98, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   RigidBodyAnimBP                                             OFFSET(get<T>, {0xB8, 32, 0, 0})
};

/// Class /Script/MetaHumanUEFNRuntime.MetaHumanComponent
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UMetaHumanComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(class USkeletalMeshComponent*)             Body                                                        OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class USkeletalMeshComponent*)             Face                                                        OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class USkeletalMeshComponent*)             Torso                                                       OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class USkeletalMeshComponent*)             Legs                                                        OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class USkeletalMeshComponent*)             Feet                                                        OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(EMetaHumanBodyType)                        BodyType                                                    OFFSET(get<T>, {0xC8, 1, 0, 0})
};

/// Enum /Script/MetaHumanUEFNRuntime.EMetaHumanBodyType
/// Size: 0x20
enum EMetaHumanBodyType : uint8_t
{
	EMetaHumanBodyType__f_med_nrw                                                    = 0,
	EMetaHumanBodyType__f_med_ovw                                                    = 1,
	EMetaHumanBodyType__f_med_unw                                                    = 2,
	EMetaHumanBodyType__f_srt_nrw                                                    = 3,
	EMetaHumanBodyType__f_srt_ovw                                                    = 4,
	EMetaHumanBodyType__f_srt_unw                                                    = 5,
	EMetaHumanBodyType__f_tal_nrw                                                    = 6,
	EMetaHumanBodyType__f_tal_ovw                                                    = 7,
	EMetaHumanBodyType__f_tal_unw                                                    = 8,
	EMetaHumanBodyType__m_med_nrw                                                    = 9,
	EMetaHumanBodyType__m_med_ovw                                                    = 10,
	EMetaHumanBodyType__m_med_unw                                                    = 11,
	EMetaHumanBodyType__m_srt_nrw                                                    = 12,
	EMetaHumanBodyType__m_srt_ovw                                                    = 13,
	EMetaHumanBodyType__m_srt_unw                                                    = 14,
	EMetaHumanBodyType__m_tal_nrw                                                    = 15,
	EMetaHumanBodyType__m_tal_ovw                                                    = 16,
	EMetaHumanBodyType__m_tal_unw                                                    = 17,
	EMetaHumanBodyType__Count                                                        = 18,
	EMetaHumanBodyType__EMetaHumanBodyType_MAX                                       = 19
};

