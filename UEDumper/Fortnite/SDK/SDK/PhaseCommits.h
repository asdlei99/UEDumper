
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

/// Enum /Script/PhaseCommits.ECoordinatorFlowState
/// Size: 0x08
enum class ECoordinatorFlowState : uint8_t
{
	ECoordinatorFlowState__NONE                                                      = 0,
	ECoordinatorFlowState__Initializing                                              = 1,
	ECoordinatorFlowState__WaitingForRequest                                         = 2,
	ECoordinatorFlowState__WaitingForConsensus_BeginChange                           = 3,
	ECoordinatorFlowState__WaitingForConsensus_Precommit                             = 4,
	ECoordinatorFlowState__Consensus_Success                                         = 5,
	ECoordinatorFlowState__Consensus_Failed                                          = 6,
	ECoordinatorFlowState__ECoordinatorFlowState_MAX                                 = 7
};

/// Enum /Script/PhaseCommits.EParticipantFlowState
/// Size: 0x06
enum class EParticipantFlowState : uint8_t
{
	EParticipantFlowState__NONE                                                      = 0,
	EParticipantFlowState__Initializing                                              = 1,
	EParticipantFlowState__WaitingFor_BroadcastBeginChange                           = 2,
	EParticipantFlowState__WaitingFor_Precommit                                      = 3,
	EParticipantFlowState__WaitingFor_Commit                                         = 4,
	EParticipantFlowState__EParticipantFlowState_MAX                                 = 5
};

/// Enum /Script/PhaseCommits.EPhaseCommit
/// Size: 0x04
enum class EPhaseCommit : uint8_t
{
	EPhaseCommit__One                                                                = 0,
	EPhaseCommit__Two                                                                = 1,
	EPhaseCommit__Three                                                              = 2,
	EPhaseCommit__EPhaseCommit_MAX                                                   = 3
};

/// Enum /Script/PhaseCommits.ECoordinatorBroadcasts
/// Size: 0x07
enum class ECoordinatorBroadcasts : uint8_t
{
	ECoordinatorBroadcasts__ReadyForRequests                                         = 0,
	ECoordinatorBroadcasts__BeginStateChange_TwoPhase                                = 1,
	ECoordinatorBroadcasts__BeginStateChange_ThreePhase                              = 2,
	ECoordinatorBroadcasts__PreCommit                                                = 3,
	ECoordinatorBroadcasts__Success                                                  = 4,
	ECoordinatorBroadcasts__Aborted                                                  = 5,
	ECoordinatorBroadcasts__ECoordinatorBroadcasts_MAX                               = 6
};

/// Enum /Script/PhaseCommits.EParticipantResponses
/// Size: 0x08
enum class EParticipantResponses : uint8_t
{
	EParticipantResponses__NONE                                                      = 0,
	EParticipantResponses__AcceptedBegin                                             = 1,
	EParticipantResponses__RejectedBegin                                             = 2,
	EParticipantResponses__AcceptedPreCommit                                         = 3,
	EParticipantResponses__RejectedPreCommit                                         = 4,
	EParticipantResponses__ReceivedSuccess                                           = 5,
	EParticipantResponses__ReceivedAbort                                             = 6,
	EParticipantResponses__EParticipantResponses_MAX                                 = 7
};

/// Class /Script/PhaseCommits.PhaseCommitFlow_Coordinator
/// Size: 0x0000 (0x000028 - 0x000028)
class UPhaseCommitFlow_Coordinator : public UInterface
{ 
public:
};

/// Class /Script/PhaseCommits.PhaseCommitFlow_Participant
/// Size: 0x0000 (0x000028 - 0x000028)
class UPhaseCommitFlow_Participant : public UInterface
{ 
public:
};

