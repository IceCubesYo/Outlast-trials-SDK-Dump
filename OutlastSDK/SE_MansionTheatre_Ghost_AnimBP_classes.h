// AnimBlueprintGeneratedClass SE_MansionTheatre_Ghost_AnimBP.SE_MansionTheatre_Ghost_AnimBP_C
// Size: 0x560 (Inherited: 0x2f0)
struct USE_MansionTheatre_Ghost_AnimBP_C : URBGhostAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2f8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x328(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x350(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x3d0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x400(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x480(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x4b0(0xb0)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function SE_MansionTheatre_Ghost_AnimBP.SE_MansionTheatre_Ghost_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void AnimNotify_Finished(); // Function SE_MansionTheatre_Ghost_AnimBP.SE_MansionTheatre_Ghost_AnimBP_C.AnimNotify_Finished // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void AnimNotify_SwapHand(); // Function SE_MansionTheatre_Ghost_AnimBP.SE_MansionTheatre_Ghost_AnimBP_C.AnimNotify_SwapHand // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_SE_MansionTheatre_Ghost_AnimBP(int32_t EntryPoint); // Function SE_MansionTheatre_Ghost_AnimBP.SE_MansionTheatre_Ghost_AnimBP_C.ExecuteUbergraph_SE_MansionTheatre_Ghost_AnimBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

