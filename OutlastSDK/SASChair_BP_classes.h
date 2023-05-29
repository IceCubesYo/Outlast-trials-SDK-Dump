// BlueprintGeneratedClass SASChair_BP.SASChair_BP_C
// Size: 0x2b8 (Inherited: 0x248)
struct ASASChair_BP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* ForceSitTeleportRef; // 0x250(0x08)
	struct USceneComponent* AnimAnchor; // 0x258(0x08)
	struct UCapsuleComponent* Capsule; // 0x260(0x08)
	struct USkeletalMeshComponent* MurkoffChair; // 0x268(0x08)
	struct USceneComponent* Root; // 0x270(0x08)
	struct USASChairPanelComponent_BP_C* SASChairPanelComponent_BP; // 0x278(0x08)
	float TurnRate; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct FMulticastInlineDelegate OnPlayerTVReady; // 0x288(0x10)
	bool InvertedAngle; // 0x298(0x01)
	char pad_299[0x3]; // 0x299(0x03)
	float TurnTimeStamp; // 0x29c(0x04)
	struct FMulticastInlineDelegate OnChairStartedTurning; // 0x2a0(0x10)
	struct ASASWagon_NarrativeScreen_BP_C* LinkedNarrativeScreen; // 0x2b0(0x08)

	void IsChairRotating(bool& Value); // Function SASChair_BP.SASChair_BP_C.IsChairRotating // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void UserConstructionScript(); // Function SASChair_BP.SASChair_BP_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnResetStage(); // Function SASChair_BP.SASChair_BP_C.Event_OnResetStage // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SASChair_BP_SASChairPanelComponent_BP_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature(struct URBInteractiblePanelComponent* panel, struct ARBPawn* pawnInteracting); // Function SASChair_BP.SASChair_BP_C.BndEvt__SASChair_BP_SASChairPanelComponent_BP_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SASChair_BP_SASChairPanelComponent_BP_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature(struct URBInteractiblePanelComponent* panel, struct ARBPawn* pawnInteracting); // Function SASChair_BP.SASChair_BP_C.BndEvt__SASChair_BP_SASChairPanelComponent_BP_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SASChair_BP_SASChairPanelComponent_BP_K2Node_ComponentBoundEvent_2_OnPanelEvent__DelegateSignature(struct URBInteractiblePanelComponent* panel, struct ARBPawn* pawnInteracting); // Function SASChair_BP.SASChair_BP_C.BndEvt__SASChair_BP_SASChairPanelComponent_BP_K2Node_ComponentBoundEvent_2_OnPanelEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SASChair_BP_SASChairPanelComponent_BP_K2Node_ComponentBoundEvent_3_OnEnabledChanged__DelegateSignature(struct URBInteractionZoneComponent* Component); // Function SASChair_BP.SASChair_BP_C.BndEvt__SASChair_BP_SASChairPanelComponent_BP_K2Node_ComponentBoundEvent_3_OnEnabledChanged__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void TestTVDownAnimation(); // Function SASChair_BP.SASChair_BP_C.TestTVDownAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ReceiveBeginPlay(); // Function SASChair_BP.SASChair_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SASChair_BP_SASChairPanelComponent_BP_K2Node_ComponentBoundEvent_4_OnPanelEvent__DelegateSignature(struct URBInteractiblePanelComponent* panel, struct ARBPawn* pawnInteracting); // Function SASChair_BP.SASChair_BP_C.BndEvt__SASChair_BP_SASChairPanelComponent_BP_K2Node_ComponentBoundEvent_4_OnPanelEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_SASChair_BP(int32_t EntryPoint); // Function SASChair_BP.SASChair_BP_C.ExecuteUbergraph_SASChair_BP // (Final|UbergraphFunction) // @ game+0x201e6d4
	void OnChairStartedTurning__DelegateSignature(struct ASASChair_BP_C* Chair, bool TurnTowardTV); // Function SASChair_BP.SASChair_BP_C.OnChairStartedTurning__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnPlayerTVReady__DelegateSignature(); // Function SASChair_BP.SASChair_BP_C.OnPlayerTVReady__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

