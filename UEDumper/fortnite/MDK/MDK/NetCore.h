
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/NetCore.NetAnalyticsAggregatorConfig
/// Size: 0x0010 (0x000028 - 0x000038)
class UNetAnalyticsAggregatorConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FNetAnalyticsDataConfig>)           NetAnalyticsData                                            OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/NetCore.StatePerObjectConfig
/// Size: 0x0040 (0x000028 - 0x000068)
class UStatePerObjectConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FString)                                   PerObjectConfigSection                                      OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x60, 1, 0, 0})
};

/// Class /Script/NetCore.EscalationManagerConfig
/// Size: 0x0020 (0x000068 - 0x000088)
class UEscalationManagerConfig : public UStatePerObjectConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<FString>)                           EscalationSeverity                                          OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Struct /Script/NetCore.FastArraySerializerItem
/// Size: 0x000C (0x000000 - 0x00000C)
class FFastArraySerializerItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   ReplicationID                                               OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   ReplicationKey                                              OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MostRecentArrayReplicationKey                               OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/NetCore.FastArraySerializer
/// Size: 0x0108 (0x000000 - 0x000108)
class FFastArraySerializer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	DMember(int32_t)                                   ArrayReplicationKey                                         OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	CMember(EFastArraySerializerDeltaFlags)            DeltaFlags                                                  OFFSET(get<T>, {0x100, 1, 0, 0})
};

/// Struct /Script/NetCore.NetAnalyticsDataConfig
/// Size: 0x0008 (0x000000 - 0x000008)
class FNetAnalyticsDataConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     DataName                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/NetCore.StateStruct
/// Size: 0x0018 (0x000000 - 0x000018)
class FStateStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   StateName                                                   OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/NetCore.EscalationState
/// Size: 0x0018 (0x000018 - 0x000030)
class FEscalationState : public FStateStruct
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bLogEscalate                                                OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      bDormant                                                    OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(int16_t)                                   CooloffTime                                                 OFFSET(get<int16_t>, {0x1A, 2, 0, 0})
	DMember(int16_t)                                   AutoEscalateTime                                            OFFSET(get<int16_t>, {0x1C, 2, 0, 0})
	DMember(int8_t)                                    HighestTimePeriod                                           OFFSET(get<int8_t>, {0x1E, 1, 0, 0})
	CMember(TArray<int8_t>)                            AllTimePeriods                                              OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/NetCore.NetFaultState
/// Size: 0x0010 (0x000030 - 0x000040)
class FNetFaultState : public FEscalationState
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bCloseConnection                                            OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(int16_t)                                   EscalateQuotaFaultsPerPeriod                                OFFSET(get<int16_t>, {0x32, 2, 0, 0})
	DMember(int8_t)                                    EscalateQuotaFaultPercentPerPeriod                          OFFSET(get<int8_t>, {0x34, 1, 0, 0})
	DMember(int16_t)                                   DescalateQuotaFaultsPerPeriod                               OFFSET(get<int16_t>, {0x36, 2, 0, 0})
	DMember(int8_t)                                    DescalateQuotaFaultPercentPerPeriod                         OFFSET(get<int8_t>, {0x38, 1, 0, 0})
	DMember(int8_t)                                    EscalateQuotaTimePeriod                                     OFFSET(get<int8_t>, {0x39, 1, 0, 0})
};

/// Enum /Script/NetCore.ENetworkFailure
/// Size: 0x12
enum ENetworkFailure : uint8_t
{
	ENetworkFailure__NetDriverAlreadyExists                                          = 0,
	ENetworkFailure__NetDriverCreateFailure                                          = 1,
	ENetworkFailure__NetDriverListenFailure                                          = 2,
	ENetworkFailure__ConnectionLost                                                  = 3,
	ENetworkFailure__ConnectionTimeout                                               = 4,
	ENetworkFailure__FailureReceived                                                 = 5,
	ENetworkFailure__OutdatedClient                                                  = 6,
	ENetworkFailure__OutdatedServer                                                  = 7,
	ENetworkFailure__PendingConnectionFailure                                        = 8,
	ENetworkFailure__NetGuidMismatch                                                 = 9,
	ENetworkFailure__NetChecksumMismatch                                             = 10,
	ENetworkFailure__ENetworkFailure_MAX                                             = 11
};

/// Enum /Script/NetCore.EReplicationSystem
/// Size: 0x04
enum EReplicationSystem : uint8_t
{
	EReplicationSystem__Default                                                      = 0,
	EReplicationSystem__Generic                                                      = 1,
	EReplicationSystem__Iris                                                         = 2,
	EReplicationSystem__EReplicationSystem_MAX                                       = 3
};

/// Enum /Script/NetCore.ENetCloseResult
/// Size: 0x113
enum ENetCloseResult : uint8_t
{
	ENetCloseResult__NetDriverAlreadyExists                                          = 0,
	ENetCloseResult__NetDriverCreateFailure                                          = 1,
	ENetCloseResult__NetDriverListenFailure                                          = 2,
	ENetCloseResult__ConnectionLost                                                  = 3,
	ENetCloseResult__ConnectionTimeout                                               = 4,
	ENetCloseResult__FailureReceived                                                 = 5,
	ENetCloseResult__OutdatedClient                                                  = 6,
	ENetCloseResult__OutdatedServer                                                  = 7,
	ENetCloseResult__PendingConnectionFailure                                        = 8,
	ENetCloseResult__NetGuidMismatch                                                 = 9,
	ENetCloseResult__NetChecksumMismatch                                             = 10,
	ENetCloseResult__SecurityMalformedPacket                                         = 11,
	ENetCloseResult__SecurityInvalidData                                             = 12,
	ENetCloseResult__SecurityClosed                                                  = 13,
	ENetCloseResult__Unknown                                                         = 14,
	ENetCloseResult__Success                                                         = 15,
	ENetCloseResult__Extended                                                        = 16,
	ENetCloseResult__HostClosedConnection                                            = 17,
	ENetCloseResult__Disconnect                                                      = 18,
	ENetCloseResult__Upgrade                                                         = 19,
	ENetCloseResult__PreLoginFailure                                                 = 20,
	ENetCloseResult__JoinFailure                                                     = 21,
	ENetCloseResult__JoinSplitFailure                                                = 22,
	ENetCloseResult__AddressResolutionFailed                                         = 23,
	ENetCloseResult__RPCDoS                                                          = 24,
	ENetCloseResult__Cleanup                                                         = 25,
	ENetCloseResult__MissingLevelPackage                                             = 26,
	ENetCloseResult__PacketHandlerIncomingError                                      = 27,
	ENetCloseResult__ZeroLastByte                                                    = 28,
	ENetCloseResult__ZeroSize                                                        = 29,
	ENetCloseResult__ReadHeaderFail                                                  = 30,
	ENetCloseResult__ReadHeaderExtraFail                                             = 31,
	ENetCloseResult__AckSequenceMismatch                                             = 32,
	ENetCloseResult__BunchBadChannelIndex                                            = 33,
	ENetCloseResult__BunchChannelNameFail                                            = 34,
	ENetCloseResult__BunchWrongChannelType                                           = 35,
	ENetCloseResult__BunchHeaderOverflow                                             = 36,
	ENetCloseResult__BunchDataOverflow                                               = 37,
	ENetCloseResult__BunchServerPackageMapExports                                    = 38,
	ENetCloseResult__BunchPrematureControlChannel                                    = 39,
	ENetCloseResult__BunchPrematureChannel                                           = 40,
	ENetCloseResult__BunchPrematureControlClose                                      = 41,
	ENetCloseResult__UnknownChannelType                                              = 42,
	ENetCloseResult__PrematureSend                                                   = 43,
	ENetCloseResult__CorruptData                                                     = 44,
	ENetCloseResult__SocketSendFailure                                               = 45,
	ENetCloseResult__BadChildConnectionIndex                                         = 46,
	ENetCloseResult__LogLimitInstant                                                 = 47,
	ENetCloseResult__LogLimitSustained                                               = 48,
	ENetCloseResult__EncryptionFailure                                               = 49,
	ENetCloseResult__EncryptionTokenMissing                                          = 50,
	ENetCloseResult__ReceivedNetGUIDBunchFail                                        = 51,
	ENetCloseResult__MaxReliableExceeded                                             = 52,
	ENetCloseResult__ReceivedNextBunchFail                                           = 53,
	ENetCloseResult__ReceivedNextBunchQueueFail                                      = 54,
	ENetCloseResult__PartialInitialReliableDestroy                                   = 55,
	ENetCloseResult__PartialMergeReliableDestroy                                     = 56,
	ENetCloseResult__PartialInitialNonByteAligned                                    = 57,
	ENetCloseResult__PartialNonByteAligned                                           = 58,
	ENetCloseResult__PartialFinalPackageMapExports                                   = 59,
	ENetCloseResult__PartialTooLarge                                                 = 60,
	ENetCloseResult__AlreadyOpen                                                     = 61,
	ENetCloseResult__ReliableBeforeOpen                                              = 62,
	ENetCloseResult__ReliableBufferOverflow                                          = 63,
	ENetCloseResult__RPCReliableBufferOverflow                                       = 64,
	ENetCloseResult__ControlChannelClose                                             = 65,
	ENetCloseResult__ControlChannelEndianCheck                                       = 66,
	ENetCloseResult__ControlChannelPlayerChannelFail                                 = 67,
	ENetCloseResult__ControlChannelMessageUnknown                                    = 68,
	ENetCloseResult__ControlChannelMessageFail                                       = 69,
	ENetCloseResult__ControlChannelMessagePayloadFail                                = 70,
	ENetCloseResult__ControlChannelBunchOverflowed                                   = 71,
	ENetCloseResult__ControlChannelQueueBunchOverflowed                              = 72,
	ENetCloseResult__ClientHasMustBeMappedGUIDs                                      = 73,
	ENetCloseResult__ClientSentDestructionInfo                                       = 74,
	ENetCloseResult__UnregisteredMustBeMappedGUID                                    = 75,
	ENetCloseResult__ObjectReplicatorReceivedBunchFail                               = 76,
	ENetCloseResult__ContentBlockFail                                                = 77,
	ENetCloseResult__ContentBlockHeaderRepLayoutFail                                 = 78,
	ENetCloseResult__ContentBlockHeaderIsActorFail                                   = 79,
	ENetCloseResult__ContentBlockHeaderObjFail                                       = 80,
	ENetCloseResult__ContentBlockHeaderPrematureEnd                                  = 81,
	ENetCloseResult__ContentBlockHeaderSubObjectActor                                = 82,
	ENetCloseResult__ContentBlockHeaderBadParent                                     = 83,
	ENetCloseResult__ContentBlockHeaderInvalidCreate                                 = 84,
	ENetCloseResult__ContentBlockHeaderStablyNamedFail                               = 85,
	ENetCloseResult__ContentBlockHeaderNoSubObjectClass                              = 86,
	ENetCloseResult__ContentBlockHeaderUObjectSubObject                              = 87,
	ENetCloseResult__ContentBlockHeaderAActorSubObject                               = 88,
	ENetCloseResult__ContentBlockHeaderFail                                          = 89,
	ENetCloseResult__ContentBlockPayloadBitsFail                                     = 90,
	ENetCloseResult__FieldHeaderRepIndex                                             = 91,
	ENetCloseResult__FieldHeaderBadRepIndex                                          = 92,
	ENetCloseResult__FieldHeaderPayloadBitsFail                                      = 93,
	ENetCloseResult__FieldPayloadFail                                                = 94,
	ENetCloseResult__ReplicationChannelCountMaxedOut                                 = 95,
	ENetCloseResult__BeaconControlFlowError                                          = 96,
	ENetCloseResult__BeaconUnableToParsePacket                                       = 97,
	ENetCloseResult__BeaconAuthenticationFailure                                     = 98,
	ENetCloseResult__BeaconLoginInvalidIdError                                       = 99,
	ENetCloseResult__BeaconLoginInvalidAuthHandlerError                              = 100,
	ENetCloseResult__BeaconAuthError                                                 = 101,
	ENetCloseResult__BeaconSpawnClientWorldPackageNameError                          = 102,
	ENetCloseResult__BeaconSpawnExistingActorError                                   = 103,
	ENetCloseResult__BeaconSpawnFailureError                                         = 104,
	ENetCloseResult__BeaconSpawnNetGUIDAckNoActor                                    = 105,
	ENetCloseResult__BeaconSpawnNetGUIDAckNoHost                                     = 106,
	ENetCloseResult__BeaconSpawnUnexpectedError                                      = 107,
	ENetCloseResult__IrisProtocolMismatch                                            = 108,
	ENetCloseResult__IrisNetRefHandleError                                           = 109,
	ENetCloseResult__FaultDisconnect                                                 = 110,
	ENetCloseResult__NotRecoverable                                                  = 111,
	ENetCloseResult__ENetCloseResult_MAX                                             = 112
};

/// Enum /Script/NetCore.EFastArraySerializerDeltaFlags
/// Size: 0x05
enum EFastArraySerializerDeltaFlags : uint8_t
{
	EFastArraySerializerDeltaFlags__None                                             = 0,
	EFastArraySerializerDeltaFlags__HasBeenSerialized                                = 1,
	EFastArraySerializerDeltaFlags__HasDeltaBeenRequested                            = 2,
	EFastArraySerializerDeltaFlags__IsUsingDeltaSerialization                        = 4,
	EFastArraySerializerDeltaFlags__EFastArraySerializerDeltaFlags_MAX               = 5
};

