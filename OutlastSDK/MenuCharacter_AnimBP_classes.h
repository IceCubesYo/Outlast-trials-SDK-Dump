// AnimBlueprintGeneratedClass MenuCharacter_AnimBP.MenuCharacter_AnimBP_C
// Size: 0xa89 (Inherited: 0x2c0)
struct UMenuCharacter_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x370(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x398(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x418(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x448(0x80)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x4c8(0xb8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x580(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x600(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x680(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x700(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x780(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x800(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x830(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x8b0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x8e0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x960(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x990(0xb0)
	struct AMenuCharacter_C* MenuCharacter; // 0xa40(0x08)
	enum class ECustomizationMenuCategory CurrentMenuCategory; // 0xa48(0x01)
	char pad_A49[0x7]; // 0xa49(0x07)
	struct ACustomizationViewer_BP_C* Viewer; // 0xa50(0x08)
	bool Active; // 0xa58(0x01)
	char pad_A59[0x3]; // 0xa59(0x03)
	float BlendSpeed; // 0xa5c(0x04)
	int32_t Posture; // 0xa60(0x04)
	bool GoToMark; // 0xa64(0x01)
	char pad_A65[0x3]; // 0xa65(0x03)
	struct FMulticastInlineDelegate ToMainPosition; // 0xa68(0x10)
	struct FMulticastInlineDelegate ReachedMainPosition; // 0xa78(0x10)
	enum class ESocialMenuSceneActorSlot PlayerSlot; // 0xa88(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function MenuCharacter_AnimBP.MenuCharacter_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BlueprintBeginPlay(); // Function MenuCharacter_AnimBP.MenuCharacter_AnimBP_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function MenuCharacter_AnimBP.MenuCharacter_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void AnimNotify_ImOut(); // Function MenuCharacter_AnimBP.MenuCharacter_AnimBP_C.AnimNotify_ImOut // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void AnimNotify_GoingToNeutral(); // Function MenuCharacter_AnimBP.MenuCharacter_AnimBP_C.AnimNotify_GoingToNeutral // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_MenuCharacter_AnimBP(int32_t EntryPoint); // Function MenuCharacter_AnimBP.MenuCharacter_AnimBP_C.ExecuteUbergraph_MenuCharacter_AnimBP // (Final|UbergraphFunction) // @ game+0x201e6d4
	void ReachedMainPosition__DelegateSignature(); // Function MenuCharacter_AnimBP.MenuCharacter_AnimBP_C.ReachedMainPosition__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ToMainPosition__DelegateSignature(); // Function MenuCharacter_AnimBP.MenuCharacter_AnimBP_C.ToMainPosition__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

