// BlueprintGeneratedClass MansionTheatre_SE_BP.MansionTheatre_SE_BP_C
// Size: 0x338 (Inherited: 0x2c0)
struct AMansionTheatre_SE_BP_C : ARBCustomSpecialMoveInteractableActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UBoxComponent* Collision; // 0x2c8(0x08)
	struct UBoxComponent* LookAtZone; // 0x2d0(0x08)
	struct URBSoundComponent* FuttermanEmitter; // 0x2d8(0x08)
	struct USkeletalMeshComponent* GooseBerryHead; // 0x2e0(0x08)
	struct USceneComponent* InteractionPoint; // 0x2e8(0x08)
	struct UStaticMeshComponent* Apple-01; // 0x2f0(0x08)
	struct USkeletalMeshComponent* Gooseberry; // 0x2f8(0x08)
	struct USkeletalMeshComponent* Futterman; // 0x300(0x08)
	struct USkeletalMeshComponent* GooseProxy; // 0x308(0x08)
	struct USkeletalMeshComponent* PuppetTheaterCurtain_Alt; // 0x310(0x08)
	bool IsHandout; // 0x318(0x01)
	bool IsInteracting; // 0x319(0x01)
	bool HasInteracted; // 0x31a(0x01)
	char pad_31B[0x1]; // 0x31b(0x01)
	float ScrubTime; // 0x31c(0x04)
	struct UAnimSequence* CurtainAnimSeq; // 0x320(0x08)
	struct UAnimSequence* FuttermanAnimSeq; // 0x328(0x08)
	struct UAnimSequence* GooseBerryAnimSeq; // 0x330(0x08)

	void OnRep_IsHandOut(); // Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.OnRep_IsHandOut // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	bool IsInteractionPossible(struct ARBPawn* interactorPawn); // Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.IsInteractionPossible // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	bool GetInteractionPawnLocation(struct ARBPawn* Pawn, enum class ESpecialMove specialMove, struct FVector& OutLocation, struct FVector& outDirection); // Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.GetInteractionPawnLocation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	void UserConstructionScript(); // Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnPawnPlaySpecialMoveAnimation(struct ARBPawn* Pawn, enum class ESpecialMove specialMove); // Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.OnPawnPlaySpecialMoveAnimation // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void appleme(); // Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.appleme // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnResetStage(); // Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.Event_OnResetStage // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ReceiveBeginPlay(); // Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void DelayedSetInteractible(bool bInteractible); // Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.DelayedSetInteractible // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateLookAt(); // Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.UpdateLookAt // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void HandOut(); // Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.HandOut // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__HailingZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.BndEvt__HailingZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_MansionTheatre_SE_BP(int32_t EntryPoint); // Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.ExecuteUbergraph_MansionTheatre_SE_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

