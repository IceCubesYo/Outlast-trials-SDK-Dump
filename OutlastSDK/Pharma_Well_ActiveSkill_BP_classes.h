// BlueprintGeneratedClass Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C
// Size: 0x4f0 (Inherited: 0x458)
struct APharma_Well_ActiveSkill_BP_C : ARBPharmaSkill {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x458(0x08)
	struct UDecalComponent* Decal_Zone; // 0x460(0x08)
	struct UStaticMeshComponent* SM_Zone; // 0x468(0x08)
	struct UParticleSystemComponent* Ptc_GasOnPlayer; // 0x470(0x08)
	struct UStaticMeshComponent* ESOP; // 0x478(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x480(0x08)
	float FadeOut_Opacity_722FC76C45AA70677A0101B58156BEEE; // 0x488(0x04)
	enum class ETimelineDirection FadeOut__Direction_722FC76C45AA70677A0101B58156BEEE; // 0x48c(0x01)
	char pad_48D[0x3]; // 0x48d(0x03)
	struct UTimelineComponent* FadeOut; // 0x490(0x08)
	float MeshFadeIn_Opacity_FadeIn_3B4ED2AC48C3B19266BF08AECD253979; // 0x498(0x04)
	enum class ETimelineDirection MeshFadeIn__Direction_3B4ED2AC48C3B19266BF08AECD253979; // 0x49c(0x01)
	char pad_49D[0x3]; // 0x49d(0x03)
	struct UTimelineComponent* MeshFadeIn; // 0x4a0(0x08)
	struct UParticleSystemComponent* Ptc_Wave; // 0x4a8(0x08)
	struct TArray<struct UParticleSystemComponent*> Ptc Spawned List; // 0x4b0(0x10)
	struct TArray<struct ARBPawn*> Pawns Spawned On; // 0x4c0(0x10)
	struct UAkAudioEvent* SoundLoudStart; // 0x4d0(0x08)
	struct UAkAudioEvent* SoundLoudStop; // 0x4d8(0x08)
	struct UAkAudioEvent* SoundQuietStart; // 0x4e0(0x08)
	struct UAkAudioEvent* SoundQuietStop; // 0x4e8(0x08)

	void UserConstructionScript(); // Function Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void MeshFadeIn__FinishedFunc(); // Function Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C.MeshFadeIn__FinishedFunc // (BlueprintEvent) // @ game+0x201e6d4
	void MeshFadeIn__UpdateFunc(); // Function Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C.MeshFadeIn__UpdateFunc // (BlueprintEvent) // @ game+0x201e6d4
	void FadeOut__FinishedFunc(); // Function Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C.FadeOut__FinishedFunc // (BlueprintEvent) // @ game+0x201e6d4
	void FadeOut__UpdateFunc(); // Function Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C.FadeOut__UpdateFunc // (BlueprintEvent) // @ game+0x201e6d4
	void ReceiveTick(float DeltaSeconds); // Function Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnIsActiveChanged(bool IsActive); // Function Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C.Event_OnIsActiveChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void GroundTrace(); // Function Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C.GroundTrace // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnPlayerInitReplicated(struct ARBPlayer* Player); // Function Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C.Event_OnPlayerInitReplicated // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnActiveOnPawn(struct ARBPawn* Pawn, bool bActive); // Function Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C.Event_OnActiveOnPawn // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void AttatchToFoot(); // Function Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C.AttatchToFoot // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnActiveLoudStart(); // Function Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C.Event_OnActiveLoudStart // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnActiveLoudStop(); // Function Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C.Event_OnActiveLoudStop // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnActiveQuietStart(); // Function Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C.Event_OnActiveQuietStart // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnActiveQuietStop(); // Function Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C.Event_OnActiveQuietStop // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_Pharma_Well_ActiveSkill_BP(int32_t EntryPoint); // Function Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C.ExecuteUbergraph_Pharma_Well_ActiveSkill_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

