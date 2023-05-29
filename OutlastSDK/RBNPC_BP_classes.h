// BlueprintGeneratedClass RBNPC_BP.RBNPC_BP_C
// Size: 0x5608 (Inherited: 0x55b0)
struct ARBNPC_BP_C : ARBNPC {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x55b0(0x08)
	struct UNiagaraComponent* Ngr_RageHallu_EyeL; // 0x55b8(0x08)
	struct UNiagaraComponent* Ngr_RageHallu_EyeR; // 0x55c0(0x08)
	struct URBActiveSkillVisionComponent* RBActiveSkillVision; // 0x55c8(0x08)
	struct UStaticMeshComponent* AS_WaveSphere; // 0x55d0(0x08)
	struct URBAimAssistComponent* Head Aim Assist; // 0x55d8(0x08)
	struct FMulticastInlineDelegate BroadcastWeaponAnimation; // 0x55e0(0x10)
	struct UNiagaraComponent* RageEyeFX_R; // 0x55f0(0x08)
	struct UNiagaraComponent* RageEyeFX_L; // 0x55f8(0x08)
	struct UNiagaraComponent* BloodDripsParticles; // 0x5600(0x08)

	void SpawnVariatorEffects(); // Function RBNPC_BP.RBNPC_BP_C.SpawnVariatorEffects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetNormalMeshVisibility(bool bVisible); // Function RBNPC_BP.RBNPC_BP_C.SetNormalMeshVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UserConstructionScript(); // Function RBNPC_BP.RBNPC_BP_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_PlayHitReactionEffects(struct FVector& attackLoc, struct FRotator& effectRotation); // Function RBNPC_BP.RBNPC_BP_C.Event_PlayHitReactionEffects // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnStartRagePaintState(); // Function RBNPC_BP.RBNPC_BP_C.Event_OnStartRagePaintState // (BlueprintEvent) // @ game+0x201e6d4
	void Event_OnEndRagePaintState(); // Function RBNPC_BP.RBNPC_BP_C.Event_OnEndRagePaintState // (BlueprintEvent) // @ game+0x201e6d4
	void Event_OnFootstep(struct FFootstepData& FootstepData); // Function RBNPC_BP.RBNPC_BP_C.Event_OnFootstep // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnDealtWeaponDamage(struct ARBPawn* otherPawn, struct FVector& DamageLocation); // Function RBNPC_BP.RBNPC_BP_C.Event_OnDealtWeaponDamage // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnDealtUnarmedDamage(struct ARBPawn* otherPawn, struct FName damageSourceBone); // Function RBNPC_BP.RBNPC_BP_C.Event_OnDealtUnarmedDamage // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ReceiveBeginPlay(); // Function RBNPC_BP.RBNPC_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void TestFakeBlurHead(); // Function RBNPC_BP.RBNPC_BP_C.TestFakeBlurHead // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void TestFakeBlurComplete(); // Function RBNPC_BP.RBNPC_BP_C.TestFakeBlurComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_RBNPC_BP(int32_t EntryPoint); // Function RBNPC_BP.RBNPC_BP_C.ExecuteUbergraph_RBNPC_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
	void BroadcastWeaponAnimation__DelegateSignature(struct UAnimSequence* Sequence); // Function RBNPC_BP.RBNPC_BP_C.BroadcastWeaponAnimation__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

