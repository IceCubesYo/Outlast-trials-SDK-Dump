// BlueprintGeneratedClass NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C
// Size: 0x2c8 (Inherited: 0x298)
struct ANPC_Weapon_Shotgun_C : ARBNPCWeapon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UPointLightComponent* MuzzleLight-01; // 0x2a0(0x08)
	struct UParticleSystemComponent* Muzzle-01_PS; // 0x2a8(0x08)
	struct USkeletalMeshComponent* Shotgun-01; // 0x2b0(0x08)
	float Timeline_0_Fire_04AA25AF4FC2E7795C7E888D31E189BE; // 0x2b8(0x04)
	enum class ETimelineDirection Timeline_0__Direction_04AA25AF4FC2E7795C7E888D31E189BE; // 0x2bc(0x01)
	char pad_2BD[0x3]; // 0x2bd(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2c0(0x08)

	void NewFunction_1(); // Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.NewFunction_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Timeline_0__FinishedFunc(); // Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x201e6d4
	void Timeline_0__UpdateFunc(); // Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x201e6d4
	void Special Move Notify(enum class ESpecialMoveNotifyType Notify, enum class ESpecialMove specialMove); // Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.Special Move Notify // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ReceiveBeginPlay(); // Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void EquippedBy(struct ARBNPC* NPC); // Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.EquippedBy // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void PlayWeaponAnimation(struct UAnimSequence* AnimSequence); // Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.PlayWeaponAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnSpecialMoveNotify(struct USkeletalMeshComponent* meshComp, struct URBAnimNotify_SpecialMove* AnimNotify); // Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.OnSpecialMoveNotify // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_NPC_Weapon_Shotgun(int32_t EntryPoint); // Function NPC_Weapon_Shotgun.NPC_Weapon_Shotgun_C.ExecuteUbergraph_NPC_Weapon_Shotgun // (Final|UbergraphFunction) // @ game+0x201e6d4
};

