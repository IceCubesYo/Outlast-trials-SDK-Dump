// BlueprintGeneratedClass NPC_Weapon_Molotov.NPC_Weapon_Molotov_C
// Size: 0x2c0 (Inherited: 0x298)
struct ANPC_Weapon_Molotov_C : ARBNPCWeapon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UPointLightComponent* PointLight; // 0x2a0(0x08)
	struct URBSoundComponent* RBSound; // 0x2a8(0x08)
	struct UParticleSystemComponent* Ptc_BurningBottle; // 0x2b0(0x08)
	struct UStaticMeshComponent* Bottle-01; // 0x2b8(0x08)

	void Event_ActivateEffects(); // Function NPC_Weapon_Molotov.NPC_Weapon_Molotov_C.Event_ActivateEffects // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_DeactivateEffects(); // Function NPC_Weapon_Molotov.NPC_Weapon_Molotov_C.Event_DeactivateEffects // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_NPC_Weapon_Molotov(int32_t EntryPoint); // Function NPC_Weapon_Molotov.NPC_Weapon_Molotov_C.ExecuteUbergraph_NPC_Weapon_Molotov // (Final|UbergraphFunction) // @ game+0x201e6d4
};

