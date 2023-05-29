// AnimBlueprintGeneratedClass SASChair_GhostAnimBP.SASChair_GhostAnimBP_C
// Size: 0xcea (Inherited: 0x2f0)
struct USASChair_GhostAnimBP_C : URBGhostAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2f8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x328(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x350(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x378(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x3a0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x3c8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x3f0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x418(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0x440(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x4c0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x4f0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x570(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x5a0(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x620(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x6a0(0xa8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x748(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x778(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x7f8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x828(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x8a8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x8d8(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x958(0xa8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0xa00(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0xa80(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xab0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0xb30(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xb60(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0xbe0(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xc10(0xb0)
	bool NeedExit; // 0xcc0(0x01)
	char pad_CC1[0x3]; // 0xcc1(0x03)
	float TurnAngle; // 0xcc4(0x04)
	struct FMulticastInlineDelegate NewEventDispatcher_1; // 0xcc8(0x10)
	bool InvertedAngle; // 0xcd8(0x01)
	bool bShouldFaceTV; // 0xcd9(0x01)
	char pad_CDA[0x6]; // 0xcda(0x06)
	struct URBSASChairPanelComponent* SASChairPanelComponent; // 0xce0(0x08)
	bool bPlayerFinishedTransition; // 0xce8(0x01)
	bool bPlayerPlayedEnterAnim; // 0xce9(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	bool FinishGhost(enum class EGhostFinishReason finishReason, int32_t GhostFinishCustomReason); // Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.FinishGhost // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void AnimNotify_Finished(); // Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.AnimNotify_Finished // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BP_InitializeGhost(); // Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.BP_InitializeGhost // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void OnShouldFaceTVChanged(struct URBInteractiblePanelComponent* panel, struct ARBPawn* pawnInteracting); // Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.OnShouldFaceTVChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void AnimNotify_EnteredTVState(); // Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.AnimNotify_EnteredTVState // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BlueprintInitializeAnimation(); // Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_SASChair_GhostAnimBP(int32_t EntryPoint); // Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.ExecuteUbergraph_SASChair_GhostAnimBP // (Final|UbergraphFunction) // @ game+0x201e6d4
	void NewEventDispatcher_0__DelegateSignature(); // Function SASChair_GhostAnimBP.SASChair_GhostAnimBP_C.NewEventDispatcher_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

