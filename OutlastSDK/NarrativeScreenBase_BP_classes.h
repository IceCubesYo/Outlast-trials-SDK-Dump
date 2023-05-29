// BlueprintGeneratedClass NarrativeScreenBase_BP.NarrativeScreenBase_BP_C
// Size: 0x390 (Inherited: 0x2d0)
struct ANarrativeScreenBase_BP_C : ARBNarrativeScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct URBSoundComponent* RBSound; // 0x2d8(0x08)
	struct USceneComponent* Scene; // 0x2e0(0x08)
	float ScreenRefreshInTL_NewTrack_0_FB45BC9343241784990512A45022426B; // 0x2e8(0x04)
	enum class ETimelineDirection ScreenRefreshInTL__Direction_FB45BC9343241784990512A45022426B; // 0x2ec(0x01)
	char pad_2ED[0x3]; // 0x2ed(0x03)
	struct UTimelineComponent* ScreenRefreshInTL; // 0x2f0(0x08)
	float Timeline_1_NewTrack_0_6B33AA2F42620535576D84A4973AB247; // 0x2f8(0x04)
	enum class ETimelineDirection Timeline_1__Direction_6B33AA2F42620535576D84A4973AB247; // 0x2fc(0x01)
	char pad_2FD[0x3]; // 0x2fd(0x03)
	struct UTimelineComponent* Timeline_2; // 0x300(0x08)
	struct TArray<struct ALight*> AssociatedLights; // 0x308(0x10)
	struct TArray<struct UStaticMeshComponent*> Screens; // 0x318(0x10)
	struct FLinearColor Emmisive; // 0x328(0x10)
	bool IsScreenOn_Local; // 0x338(0x01)
	char pad_339[0x3]; // 0x339(0x03)
	float ScreenRefreshMin; // 0x33c(0x04)
	float ScreenRefreshLuminosity; // 0x340(0x04)
	float ScreenChromaticAberation; // 0x344(0x04)
	float ScreenNoiseDeform; // 0x348(0x04)
	float ScreenDeform; // 0x34c(0x04)
	float ScreenInterlace; // 0x350(0x04)
	char pad_354[0x4]; // 0x354(0x04)
	struct UMaterialInterface* Lightfunction; // 0x358(0x08)
	struct FName group; // 0x360(0x08)
	bool IsSilent; // 0x368(0x01)
	char pad_369[0x7]; // 0x369(0x07)
	struct UAkAudioEvent* IdleSoundStart; // 0x370(0x08)
	struct UAkAudioEvent* IdleSoundStop; // 0x378(0x08)
	bool IsLoopingIdleSoundPlaying; // 0x380(0x01)
	bool IsManuallyMuted; // 0x381(0x01)
	char pad_382[0x2]; // 0x382(0x02)
	float ScreenRefreshMax; // 0x384(0x04)
	bool DisfunctionalTV; // 0x388(0x01)
	bool isDisfunctionalTV; // 0x389(0x01)
	char pad_38A[0x2]; // 0x38a(0x02)
	float ScreenRefreshPlayRate; // 0x38c(0x04)

	void UpdateScreensMDD(float On, float JumpRefresh, float Empty, float Emissive); // Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.UpdateScreensMDD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void TurnOnLight(bool Condition); // Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.TurnOnLight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SpawnLight(); // Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.SpawnLight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void LinkTextureToChannel(); // Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.LinkTextureToChannel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateTVOn(bool Force); // Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.UpdateTVOn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetScreenMaterial(struct UMaterialInterface* Material); // Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.SetScreenMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UserConstructionScript(); // Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ScreenRefreshInTL__FinishedFunc(); // Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.ScreenRefreshInTL__FinishedFunc // (BlueprintEvent) // @ game+0x201e6d4
	void ScreenRefreshInTL__UpdateFunc(); // Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.ScreenRefreshInTL__UpdateFunc // (BlueprintEvent) // @ game+0x201e6d4
	void ScreenRefreshInTL__NewTrack_1__EventFunc(); // Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.ScreenRefreshInTL__NewTrack_1__EventFunc // (BlueprintEvent) // @ game+0x201e6d4
	void Timeline_1__FinishedFunc(); // Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x201e6d4
	void Timeline_1__UpdateFunc(); // Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x201e6d4
	void UpdateTVOnVisuals_Internal(bool IsOn); // Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.UpdateTVOnVisuals_Internal // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnLinkedStatusChanged(); // Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.Event_OnLinkedStatusChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnIsOnChanged(); // Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.Event_OnIsOnChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ReceiveBeginPlay(); // Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void flashRefreshJump(); // Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.flashRefreshJump // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ManualUnmute(); // Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.ManualUnmute // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ManualMute(); // Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.ManualMute // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void startDisfunctional(); // Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.startDisfunctional // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void stopDisfunctional(); // Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.stopDisfunctional // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_NarrativeScreenBase_BP(int32_t EntryPoint); // Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.ExecuteUbergraph_NarrativeScreenBase_BP // (Final|UbergraphFunction) // @ game+0x201e6d4
};

