// AnimBlueprintGeneratedClass PlayerFace_AnimBlueprint.PlayerFace_AnimBlueprint_C
// Size: 0x1654 (Inherited: 0x2c0)
struct UPlayerFace_AnimBlueprint_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x2f8(0x1d8)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x4d0(0x158)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x628(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x650(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x678(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x6a0(0x28)
	struct FAnimNode_PoseBlendNode AnimGraphNode_PoseBlendNode_4; // 0x6c8(0xa0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x768(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x790(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0x7b8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x838(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x8b8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x938(0x80)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x9b8(0xb8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0xa70(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0xaf0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0xb20(0x80)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2; // 0xba0(0xc8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0xc68(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0xce8(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0xd18(0xb0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0xdc8(0x80)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0xe48(0x28)
	struct FAnimNode_PoseBlendNode AnimGraphNode_PoseBlendNode_3; // 0xe70(0xa0)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0xf10(0xc8)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3; // 0xfd8(0xc0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x1098(0x48)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x10e0(0x30)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x1110(0xc0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x11d0(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x11f8(0x80)
	struct FAnimNode_PoseBlendNode AnimGraphNode_PoseBlendNode_2; // 0x1278(0xa0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x1318(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1348(0x80)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x13c8(0xc0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1488(0x28)
	struct FAnimNode_PoseBlendNode AnimGraphNode_PoseBlendNode; // 0x14b0(0xa0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1550(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1580(0xb0)
	struct UPoseAsset* Poses; // 0x1630(0x08)
	struct UAnimSequence* LipSyncAnim; // 0x1638(0x08)
	bool HasPoses; // 0x1640(0x01)
	bool IsEmoting; // 0x1641(0x01)
	char pad_1642[0x2]; // 0x1642(0x02)
	float ExpressHowMuch; // 0x1644(0x04)
	struct UAnimSequence* WhichExpression; // 0x1648(0x08)
	enum class Face_BaseEmotion_Enum FaceBaseEmotion; // 0x1650(0x01)
	bool isDead; // 0x1651(0x01)
	bool IsSleeping; // 0x1652(0x01)
	enum class Player_Face_States FaceState; // 0x1653(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function PlayerFace_AnimBlueprint.PlayerFace_AnimBlueprint_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerFace_AnimBlueprint_AnimGraphNode_TransitionResult_50F1F86C468D09FE8EA9C184C3541823(); // Function PlayerFace_AnimBlueprint.PlayerFace_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerFace_AnimBlueprint_AnimGraphNode_TransitionResult_50F1F86C468D09FE8EA9C184C3541823 // (BlueprintEvent) // @ game+0x201e6d4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerFace_AnimBlueprint_AnimGraphNode_TransitionResult_DABDC9EF4637AF13A004E48636383B91(); // Function PlayerFace_AnimBlueprint.PlayerFace_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerFace_AnimBlueprint_AnimGraphNode_TransitionResult_DABDC9EF4637AF13A004E48636383B91 // (BlueprintEvent) // @ game+0x201e6d4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerFace_AnimBlueprint_AnimGraphNode_TransitionResult_97923E4F415468C899C8A59523741E7C(); // Function PlayerFace_AnimBlueprint.PlayerFace_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerFace_AnimBlueprint_AnimGraphNode_TransitionResult_97923E4F415468C899C8A59523741E7C // (BlueprintEvent) // @ game+0x201e6d4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerFace_AnimBlueprint_AnimGraphNode_TransitionResult_37DA42E7450E6B51C2A43EB963CB4A22(); // Function PlayerFace_AnimBlueprint.PlayerFace_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerFace_AnimBlueprint_AnimGraphNode_TransitionResult_37DA42E7450E6B51C2A43EB963CB4A22 // (BlueprintEvent) // @ game+0x201e6d4
	void BlueprintBeginPlay(); // Function PlayerFace_AnimBlueprint.PlayerFace_AnimBlueprint_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Update Face Poses(struct ARBPlayer* RBPlayer); // Function PlayerFace_AnimBlueprint.PlayerFace_AnimBlueprint_C.Update Face Poses // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void LipSyncFeed(); // Function PlayerFace_AnimBlueprint.PlayerFace_AnimBlueprint_C.LipSyncFeed // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_PlayerFace_AnimBlueprint(int32_t EntryPoint); // Function PlayerFace_AnimBlueprint.PlayerFace_AnimBlueprint_C.ExecuteUbergraph_PlayerFace_AnimBlueprint // (Final|UbergraphFunction) // @ game+0x201e6d4
};

