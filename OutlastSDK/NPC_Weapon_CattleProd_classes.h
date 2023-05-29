// BlueprintGeneratedClass NPC_Weapon_CattleProd.NPC_Weapon_CattleProd_C
// Size: 0x2d0 (Inherited: 0x2a0)
struct ANPC_Weapon_CattleProd_C : ANPC_Weapon_BaseBP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UPointLightComponent* PointLight; // 0x2a8(0x08)
	struct UNiagaraComponent* Ngr_ShockElec; // 0x2b0(0x08)
	struct UStaticMeshComponent* CattleProd; // 0x2b8(0x08)
	float Timeline_0_NewTrack_0_36B0238E4DD8BB7DD5584EB0470164E4; // 0x2c0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_36B0238E4DD8BB7DD5584EB0470164E4; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2c8(0x08)

	void Timeline_0__FinishedFunc(); // Function NPC_Weapon_CattleProd.NPC_Weapon_CattleProd_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x201e6d4
	void Timeline_0__UpdateFunc(); // Function NPC_Weapon_CattleProd.NPC_Weapon_CattleProd_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x201e6d4
	void ReceiveBeginPlay(); // Function NPC_Weapon_CattleProd.NPC_Weapon_CattleProd_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_NPC_Weapon_CattleProd(int32_t EntryPoint); // Function NPC_Weapon_CattleProd.NPC_Weapon_CattleProd_C.ExecuteUbergraph_NPC_Weapon_CattleProd // (Final|UbergraphFunction) // @ game+0x201e6d4
};

