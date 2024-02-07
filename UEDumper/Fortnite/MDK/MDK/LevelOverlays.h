
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Environments
/// dependency: FortniteUI

/// Class /LinedNotebookEventScreen/LevelOverlays/LinedNotebookEventVaultWorld.LinedNotebookEventVaultWorld_C
/// Size: 0x0077 (0x000349 - 0x0003C0)
class ALinedNotebookEventVaultWorld_C : public AVaultWorld_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x350, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               floor                                                       OFFSET(get<T>, {0x358, 8, 0, 0})
	DMember(float)                                     ItemDetails_X_Offset_F6B0AC7B41049DEF369CBC83DDF5BBFF       OFFSET(get<float>, {0x360, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           ItemDetails__Direction_F6B0AC7B41049DEF369CBC83DDF5BBFF     OFFSET(get<T>, {0x364, 1, 0, 0})
	CMember(class UTimelineComponent*)                 ItemDetails                                                 OFFSET(get<T>, {0x368, 8, 0, 0})
	DMember(float)                                     Floor_Visibility_FloorMask_D214B0DD4C6F2C0C9E1F7EB6B83AA749 OFFSET(get<float>, {0x370, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Floor_Visibility__Direction_D214B0DD4C6F2C0C9E1F7EB6B83AA749 OFFSET(get<T>, {0x374, 1, 0, 0})
	CMember(class UTimelineComponent*)                 Floor_Visibility                                            OFFSET(get<T>, {0x378, 8, 0, 0})
	DMember(float)                                     Background_Effects_SetStreaks_5214A37042D2E029CF5D0EBFD2517F4B OFFSET(get<float>, {0x380, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Background_Effects__Direction_5214A37042D2E029CF5D0EBFD2517F4B OFFSET(get<T>, {0x384, 1, 0, 0})
	CMember(class UTimelineComponent*)                 Background_Effects                                          OFFSET(get<T>, {0x388, 8, 0, 0})
	DMember(float)                                     TransitionForward_FX_Transition_Fade_E69C8C7747ED578039A44EAFE294E4AD OFFSET(get<float>, {0x390, 4, 0, 0})
	DMember(float)                                     TransitionForward_Pre_TransitionOffset_E69C8C7747ED578039A44EAFE294E4AD OFFSET(get<float>, {0x394, 4, 0, 0})
	DMember(float)                                     TransitionForward_Forward_E69C8C7747ED578039A44EAFE294E4AD  OFFSET(get<float>, {0x398, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TransitionForward__Direction_E69C8C7747ED578039A44EAFE294E4AD OFFSET(get<T>, {0x39C, 1, 0, 0})
	CMember(class UTimelineComponent*)                 TransitionForward                                           OFFSET(get<T>, {0x3A0, 8, 0, 0})
	DMember(float)                                     TransitionBackward_fx_Transition_fade_3D20BA10496D96DCB7CDEFB256EE9477 OFFSET(get<float>, {0x3A8, 4, 0, 0})
	DMember(float)                                     TransitionBackward_Pre_Transition_Offset_3D20BA10496D96DCB7CDEFB256EE9477 OFFSET(get<float>, {0x3AC, 4, 0, 0})
	DMember(float)                                     TransitionBackward_Backward_3D20BA10496D96DCB7CDEFB256EE9477 OFFSET(get<float>, {0x3B0, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TransitionBackward__Direction_3D20BA10496D96DCB7CDEFB256EE9477 OFFSET(get<T>, {0x3B4, 1, 0, 0})
	CMember(class UTimelineComponent*)                 TransitionBackward                                          OFFSET(get<T>, {0x3B8, 8, 0, 0})


	/// Functions
	// Function /LinedNotebookEventScreen/LevelOverlays/LinedNotebookEventVaultWorld.LinedNotebookEventVaultWorld_C.TransitionBackgroundBackward
	// void TransitionBackgroundBackward(double Backward, double PreTransitionOffset, double FXTransitionFade, class UMaterialInstanceDynamic* Mid); // [0x2047e54] Public|BlueprintCallable|BlueprintEvent 
	// Function /LinedNotebookEventScreen/LevelOverlays/LinedNotebookEventVaultWorld.LinedNotebookEventVaultWorld_C.TransitionBackgroundForward
	// void TransitionBackgroundForward(double Forward, double PreTransitionOffset, double FXTransitionFade, class UMaterialInstanceDynamic* Mid); // [0x2047e54] Public|BlueprintCallable|BlueprintEvent 
	// Function /LinedNotebookEventScreen/LevelOverlays/LinedNotebookEventVaultWorld.LinedNotebookEventVaultWorld_C.SetupBackgroundMaterial
	// void SetupBackgroundMaterial(class UTexture2D*& TextureBackground, FVaultWorldBackgroundData& BackgroundInfo, class UMaterialInstanceDynamic* Mid); // [0x2047e54] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /LinedNotebookEventScreen/LevelOverlays/LinedNotebookEventVaultWorld.LinedNotebookEventVaultWorld_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x2047e54] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /LinedNotebookEventScreen/LevelOverlays/LinedNotebookEventVaultWorld.LinedNotebookEventVaultWorld_C.TransitionForward__FinishedFunc
	// void TransitionForward__FinishedFunc();                                                                                  // [0x2047e54] BlueprintEvent       
	// Function /LinedNotebookEventScreen/LevelOverlays/LinedNotebookEventVaultWorld.LinedNotebookEventVaultWorld_C.TransitionForward__UpdateFunc
	// void TransitionForward__UpdateFunc();                                                                                    // [0x2047e54] BlueprintEvent       
	// Function /LinedNotebookEventScreen/LevelOverlays/LinedNotebookEventVaultWorld.LinedNotebookEventVaultWorld_C.TransitionBackward__FinishedFunc
	// void TransitionBackward__FinishedFunc();                                                                                 // [0x2047e54] BlueprintEvent       
	// Function /LinedNotebookEventScreen/LevelOverlays/LinedNotebookEventVaultWorld.LinedNotebookEventVaultWorld_C.TransitionBackward__UpdateFunc
	// void TransitionBackward__UpdateFunc();                                                                                   // [0x2047e54] BlueprintEvent       
	// Function /LinedNotebookEventScreen/LevelOverlays/LinedNotebookEventVaultWorld.LinedNotebookEventVaultWorld_C.Background-Effects__FinishedFunc
	// void Background-Effects__FinishedFunc();                                                                                 // [0x2047e54] BlueprintEvent       
	// Function /LinedNotebookEventScreen/LevelOverlays/LinedNotebookEventVaultWorld.LinedNotebookEventVaultWorld_C.Background-Effects__UpdateFunc
	// void Background-Effects__UpdateFunc();                                                                                   // [0x2047e54] BlueprintEvent       
	// Function /LinedNotebookEventScreen/LevelOverlays/LinedNotebookEventVaultWorld.LinedNotebookEventVaultWorld_C.Floor-Visibility__FinishedFunc
	// void Floor-Visibility__FinishedFunc();                                                                                   // [0x2047e54] BlueprintEvent       
	// Function /LinedNotebookEventScreen/LevelOverlays/LinedNotebookEventVaultWorld.LinedNotebookEventVaultWorld_C.Floor-Visibility__UpdateFunc
	// void Floor-Visibility__UpdateFunc();                                                                                     // [0x2047e54] BlueprintEvent       
	// Function /LinedNotebookEventScreen/LevelOverlays/LinedNotebookEventVaultWorld.LinedNotebookEventVaultWorld_C.ItemDetails__FinishedFunc
	// void ItemDetails__FinishedFunc();                                                                                        // [0x2047e54] BlueprintEvent       
	// Function /LinedNotebookEventScreen/LevelOverlays/LinedNotebookEventVaultWorld.LinedNotebookEventVaultWorld_C.ItemDetails__UpdateFunc
	// void ItemDetails__UpdateFunc();                                                                                          // [0x2047e54] BlueprintEvent       
	// Function /LinedNotebookEventScreen/LevelOverlays/LinedNotebookEventVaultWorld.LinedNotebookEventVaultWorld_C.OnTransitionBackground
	// void OnTransitionBackground(bool bPlayForward, EBackgroundIntensityLevel IntensityTransition);                           // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /LinedNotebookEventScreen/LevelOverlays/LinedNotebookEventVaultWorld.LinedNotebookEventVaultWorld_C.OnSetupBackground
	// void OnSetupBackground(class UTexture2D* LoadedBackgroundTexture, FVaultWorldBackgroundData& BackgroundInfo);            // [0x2047e54] HasOutParms|BlueprintEvent 
	// Function /LinedNotebookEventScreen/LevelOverlays/LinedNotebookEventVaultWorld.LinedNotebookEventVaultWorld_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /LinedNotebookEventScreen/LevelOverlays/LinedNotebookEventVaultWorld.LinedNotebookEventVaultWorld_C.OnUpdateDisplay
	// void OnUpdateDisplay(bool bShowFloor, bool bShowEffects);                                                                // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /LinedNotebookEventScreen/LevelOverlays/LinedNotebookEventVaultWorld.LinedNotebookEventVaultWorld_C.OnInitialBackgroundTransition
	// void OnInitialBackgroundTransition();                                                                                    // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /LinedNotebookEventScreen/LevelOverlays/LinedNotebookEventVaultWorld.LinedNotebookEventVaultWorld_C.OnTransitionItemDetails
	// void OnTransitionItemDetails(bool bShowItemDetails);                                                                     // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /LinedNotebookEventScreen/LevelOverlays/LinedNotebookEventVaultWorld.LinedNotebookEventVaultWorld_C.OnUpdateMaterialIndex
	// void OnUpdateMaterialIndex(int32_t MaterialIndex);                                                                       // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /LinedNotebookEventScreen/LevelOverlays/LinedNotebookEventVaultWorld.LinedNotebookEventVaultWorld_C.ExecuteUbergraph_LinedNotebookEventVaultWorld
	// void ExecuteUbergraph_LinedNotebookEventVaultWorld(int32_t EntryPoint);                                                  // [0x2047e54] Final|HasDefaults    
};

/// Class /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C
/// Size: 0x0077 (0x000349 - 0x0003C0)
class APilgrimEventScreenEventVaultWorld_C : public AVaultWorld_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x350, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               floor                                                       OFFSET(get<T>, {0x358, 8, 0, 0})
	DMember(float)                                     ItemDetails_X_Offset_68C3898D424BEACDFEB5559E091141D8       OFFSET(get<float>, {0x360, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           ItemDetails__Direction_68C3898D424BEACDFEB5559E091141D8     OFFSET(get<T>, {0x364, 1, 0, 0})
	CMember(class UTimelineComponent*)                 ItemDetails                                                 OFFSET(get<T>, {0x368, 8, 0, 0})
	DMember(float)                                     Floor_Visibility_FloorMask_B8DF0E7548B0B3258911ACA2E59C4ED5 OFFSET(get<float>, {0x370, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Floor_Visibility__Direction_B8DF0E7548B0B3258911ACA2E59C4ED5 OFFSET(get<T>, {0x374, 1, 0, 0})
	CMember(class UTimelineComponent*)                 Floor_Visibility                                            OFFSET(get<T>, {0x378, 8, 0, 0})
	DMember(float)                                     Background_Effects_SetStreaks_B72E13E64AF840AB5A739E8485EAFB0C OFFSET(get<float>, {0x380, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Background_Effects__Direction_B72E13E64AF840AB5A739E8485EAFB0C OFFSET(get<T>, {0x384, 1, 0, 0})
	CMember(class UTimelineComponent*)                 Background_Effects                                          OFFSET(get<T>, {0x388, 8, 0, 0})
	DMember(float)                                     TransitionForward_FX_Transition_Fade_630B799D41239619956D94A08501493D OFFSET(get<float>, {0x390, 4, 0, 0})
	DMember(float)                                     TransitionForward_Pre_TransitionOffset_630B799D41239619956D94A08501493D OFFSET(get<float>, {0x394, 4, 0, 0})
	DMember(float)                                     TransitionForward_Forward_630B799D41239619956D94A08501493D  OFFSET(get<float>, {0x398, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TransitionForward__Direction_630B799D41239619956D94A08501493D OFFSET(get<T>, {0x39C, 1, 0, 0})
	CMember(class UTimelineComponent*)                 TransitionForward                                           OFFSET(get<T>, {0x3A0, 8, 0, 0})
	DMember(float)                                     TransitionBackward_fx_Transition_fade_0417507846315C71198827A55A7AB86E OFFSET(get<float>, {0x3A8, 4, 0, 0})
	DMember(float)                                     TransitionBackward_Pre_Transition_Offset_0417507846315C71198827A55A7AB86E OFFSET(get<float>, {0x3AC, 4, 0, 0})
	DMember(float)                                     TransitionBackward_Backward_0417507846315C71198827A55A7AB86E OFFSET(get<float>, {0x3B0, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TransitionBackward__Direction_0417507846315C71198827A55A7AB86E OFFSET(get<T>, {0x3B4, 1, 0, 0})
	CMember(class UTimelineComponent*)                 TransitionBackward                                          OFFSET(get<T>, {0x3B8, 8, 0, 0})


	/// Functions
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.TransitionBackgroundBackward
	// void TransitionBackgroundBackward(double Backward, double PreTransitionOffset, double FXTransitionFade, class UMaterialInstanceDynamic* Mid); // [0x2047e54] Public|BlueprintCallable|BlueprintEvent 
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.TransitionBackgroundForward
	// void TransitionBackgroundForward(double Forward, double PreTransitionOffset, double FXTransitionFade, class UMaterialInstanceDynamic* Mid); // [0x2047e54] Public|BlueprintCallable|BlueprintEvent 
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.SetupBackgroundMaterial
	// void SetupBackgroundMaterial(class UTexture2D*& TextureBackground, FVaultWorldBackgroundData& BackgroundInfo, class UMaterialInstanceDynamic* Mid); // [0x2047e54] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x2047e54] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.TransitionForward__FinishedFunc
	// void TransitionForward__FinishedFunc();                                                                                  // [0x2047e54] BlueprintEvent       
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.TransitionForward__UpdateFunc
	// void TransitionForward__UpdateFunc();                                                                                    // [0x2047e54] BlueprintEvent       
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.TransitionBackward__FinishedFunc
	// void TransitionBackward__FinishedFunc();                                                                                 // [0x2047e54] BlueprintEvent       
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.TransitionBackward__UpdateFunc
	// void TransitionBackward__UpdateFunc();                                                                                   // [0x2047e54] BlueprintEvent       
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.Background-Effects__FinishedFunc
	// void Background-Effects__FinishedFunc();                                                                                 // [0x2047e54] BlueprintEvent       
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.Background-Effects__UpdateFunc
	// void Background-Effects__UpdateFunc();                                                                                   // [0x2047e54] BlueprintEvent       
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.Floor-Visibility__FinishedFunc
	// void Floor-Visibility__FinishedFunc();                                                                                   // [0x2047e54] BlueprintEvent       
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.Floor-Visibility__UpdateFunc
	// void Floor-Visibility__UpdateFunc();                                                                                     // [0x2047e54] BlueprintEvent       
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.ItemDetails__FinishedFunc
	// void ItemDetails__FinishedFunc();                                                                                        // [0x2047e54] BlueprintEvent       
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.ItemDetails__UpdateFunc
	// void ItemDetails__UpdateFunc();                                                                                          // [0x2047e54] BlueprintEvent       
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.OnTransitionBackground
	// void OnTransitionBackground(bool bPlayForward, EBackgroundIntensityLevel IntensityTransition);                           // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.OnSetupBackground
	// void OnSetupBackground(class UTexture2D* LoadedBackgroundTexture, FVaultWorldBackgroundData& BackgroundInfo);            // [0x2047e54] HasOutParms|BlueprintEvent 
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.OnUpdateDisplay
	// void OnUpdateDisplay(bool bShowFloor, bool bShowEffects);                                                                // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.OnInitialBackgroundTransition
	// void OnInitialBackgroundTransition();                                                                                    // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.OnTransitionItemDetails
	// void OnTransitionItemDetails(bool bShowItemDetails);                                                                     // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.OnUpdateMaterialIndex
	// void OnUpdateMaterialIndex(int32_t MaterialIndex);                                                                       // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.ExecuteUbergraph_PilgrimEventScreenEventVaultWorld
	// void ExecuteUbergraph_PilgrimEventScreenEventVaultWorld(int32_t EntryPoint);                                             // [0x2047e54] Final|HasDefaults    
};

