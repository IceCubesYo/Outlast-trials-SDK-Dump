// AnimBlueprintGeneratedClass SE_MansionTheatre_Curtain_AnimBP.SE_MansionTheatre_Curtain_AnimBP_C
// Size: 0x782 (Inherited: 0x2c0)
struct USE_MansionTheatre_Curtain_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x2f8(0xa8)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x3a0(0xa8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x448(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x4c8(0x80)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x548(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x570(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x5f0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x620(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x6a0(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x6d0(0xb0)
	bool IsHandout; // 0x780(0x01)
	bool IsInteracting; // 0x781(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function SE_MansionTheatre_Curtain_AnimBP.SE_MansionTheatre_Curtain_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_SE_MansionTheatre_Curtain_AnimBP(int32_t EntryPoint); // Function SE_MansionTheatre_Curtain_AnimBP.SE_MansionTheatre_Curtain_AnimBP_C.ExecuteUbergraph_SE_MansionTheatre_Curtain_AnimBP // (Final|UbergraphFunction) // @ game+0x201e6d4
};

