// AnimBlueprintGeneratedClass gooseberryFace_AnimBP.gooseberryFace_AnimBP_C
// Size: 0x1a29 (Inherited: 0x2c0)
struct UgooseberryFace_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x2f8(0x1d8)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0x4d0(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0x628(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0x650(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x678(0xa8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x720(0x28)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x748(0x158)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x8a0(0xc0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x960(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0xab8(0x28)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0xae0(0x48)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0xb28(0xc0)
	struct FAnimNode_PoseBlendNode AnimGraphNode_PoseBlendNode_2; // 0xbe8(0xa0)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3; // 0xc88(0xc8)
	struct FAnimNode_PoseBlendNode AnimGraphNode_PoseBlendNode; // 0xd50(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0xdf0(0x80)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0xe70(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xe98(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0xec0(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0xf40(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0xfc0(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x1040(0x80)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x10c0(0xb8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x1178(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x11f8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x1228(0x80)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2; // 0x12a8(0xc8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1370(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x13f0(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1420(0xb0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x14d0(0x28)
	char pad_14F8[0x8]; // 0x14f8(0x08)
	struct FAnimNode_LookAt AnimGraphNode_LookAt_2; // 0x1500(0x1b0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x16b0(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x16d0(0x20)
	struct FAnimNode_LookAt AnimGraphNode_LookAt; // 0x16f0(0x1b0)
	struct FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive; // 0x18a0(0x38)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x18d8(0x28)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x1900(0xc8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x19c8(0x28)
	struct UPoseAsset* PoseAsset; // 0x19f0(0x08)
	struct FVector LookAtLocation; // 0x19f8(0x0c)
	float LookAtAlpha; // 0x1a04(0x04)
	bool FuttermanSpeaking; // 0x1a08(0x01)
	char pad_1A09[0x7]; // 0x1a09(0x07)
	struct UAnimSequence* LipSyncAnim; // 0x1a10(0x08)
	bool IsEmoting; // 0x1a18(0x01)
	char pad_1A19[0x3]; // 0x1a19(0x03)
	float ExpressHowMuch; // 0x1a1c(0x04)
	struct UAnimSequence* WhichExpression; // 0x1a20(0x08)
	enum class Face_BaseEmotion_Enum FaceBaseEmotion; // 0x1a28(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function gooseberryFace_AnimBP.gooseberryFace_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void LipSyncFeed(); // Function gooseberryFace_AnimBP.gooseberryFace_AnimBP_C.LipSyncFeed // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_gooseberryFace_AnimBP(int32_t EntryPoint); // Function gooseberryFace_AnimBP.gooseberryFace_AnimBP_C.ExecuteUbergraph_gooseberryFace_AnimBP // (Final|UbergraphFunction) // @ game+0x201e6d4
};

