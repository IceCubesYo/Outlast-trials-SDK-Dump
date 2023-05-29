// AnimBlueprintGeneratedClass SASChair_ChairAnimBP.SASChair_ChairAnimBP_C
// Size: 0x11c1 (Inherited: 0x2c0)
struct USASChair_ChairAnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x370(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x398(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x3c0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x3e8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x410(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x438(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x460(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x488(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4b0(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_15; // 0x4d8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14; // 0x558(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0x5d8(0xa8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_11; // 0x680(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13; // 0x6b0(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12; // 0x730(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x7b0(0xa8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_10; // 0x858(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0x888(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0x908(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0x938(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x9b8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x9e8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0xa68(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0xa98(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0xb18(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0xb48(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0xbc8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0xbf8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0xc78(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0xcf8(0xa8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0xda0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0xdd0(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0xe50(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xed0(0xa8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0xf78(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xfa8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x1028(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1058(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x10d8(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1108(0xb0)
	bool ShouldFaceTV; // 0x11b8(0x01)
	bool IsTurning; // 0x11b9(0x01)
	bool InvertedAngle; // 0x11ba(0x01)
	bool IsFacingTV; // 0x11bb(0x01)
	float TurnAngle; // 0x11bc(0x04)
	bool HasPlayerSitting; // 0x11c0(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function SASChair_ChairAnimBP.SASChair_ChairAnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetShouldFaceTV(bool Value); // Function SASChair_ChairAnimBP.SASChair_ChairAnimBP_C.SetShouldFaceTV // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void AnimNotify_OnIdle(); // Function SASChair_ChairAnimBP.SASChair_ChairAnimBP_C.AnimNotify_OnIdle // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void AnimNotify_OnFacingTV(); // Function SASChair_ChairAnimBP.SASChair_ChairAnimBP_C.AnimNotify_OnFacingTV // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void AnimNotify_ChairLeave(); // Function SASChair_ChairAnimBP.SASChair_ChairAnimBP_C.AnimNotify_ChairLeave // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SASChair_ChairAnimBP.SASChair_ChairAnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_SASChair_ChairAnimBP(int32_t EntryPoint); // Function SASChair_ChairAnimBP.SASChair_ChairAnimBP_C.ExecuteUbergraph_SASChair_ChairAnimBP // (Final|UbergraphFunction) // @ game+0x201e6d4
};

