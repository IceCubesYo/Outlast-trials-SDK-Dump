// BlueprintGeneratedClass CineCharacterBase_BP.CineCharacterBase_BP_C
// Size: 0x26c (Inherited: 0x248)
struct ACineCharacterBase_BP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	struct UAnimSequence* Anim; // 0x260(0x08)
	float Time; // 0x268(0x04)

	void SetPreviewSequenceData(struct UAnimSequence* Anim, float Time); // Function CineCharacterBase_BP.CineCharacterBase_BP_C.SetPreviewSequenceData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreviewSequence(); // Function CineCharacterBase_BP.CineCharacterBase_BP_C.PreviewSequence // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void NewFunction_1(); // Function CineCharacterBase_BP.CineCharacterBase_BP_C.NewFunction_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Play(struct UAnimationAsset* NewAnimToPlay); // Function CineCharacterBase_BP.CineCharacterBase_BP_C.Play // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ReceiveBeginPlay(); // Function CineCharacterBase_BP.CineCharacterBase_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void OnAsyncDataLoaded_Event_1(struct URBTrialAsyncData* asyncData); // Function CineCharacterBase_BP.CineCharacterBase_BP_C.OnAsyncDataLoaded_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_CineCharacterBase_BP(int32_t EntryPoint); // Function CineCharacterBase_BP.CineCharacterBase_BP_C.ExecuteUbergraph_CineCharacterBase_BP // (Final|UbergraphFunction) // @ game+0x201e6d4
};

