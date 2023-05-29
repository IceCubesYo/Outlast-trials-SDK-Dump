// BlueprintGeneratedClass MolotovProjectile.MolotovProjectile_C
// Size: 0x36c (Inherited: 0x310)
struct AMolotovProjectile_C : ARBMolotovProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct URBSoundComponent* RBSound; // 0x318(0x08)
	struct UParticleSystemComponent* Ptc_BurningBottle; // 0x320(0x08)
	struct UPointLightComponent* PointLight; // 0x328(0x08)
	float Timeline_1_Intensity_55462148454B775C71A42BB8BB43C0A5; // 0x330(0x04)
	enum class ETimelineDirection Timeline_1__Direction_55462148454B775C71A42BB8BB43C0A5; // 0x334(0x01)
	char pad_335[0x3]; // 0x335(0x03)
	struct UTimelineComponent* Timeline_2; // 0x338(0x08)
	float Timeline_0_Intensity_CEF89AC54A66DC96993E959757EE2EDA; // 0x340(0x04)
	enum class ETimelineDirection Timeline_0__Direction_CEF89AC54A66DC96993E959757EE2EDA; // 0x344(0x01)
	char pad_345[0x3]; // 0x345(0x03)
	struct UTimelineComponent* Timeline_1; // 0x348(0x08)
	float MinFireScale; // 0x350(0x04)
	float MaxFireScale; // 0x354(0x04)
	struct UParticleSystemComponent* Ptc_FireGround; // 0x358(0x08)
	struct FVector LightLocation; // 0x360(0x0c)

	void Timeline_0__FinishedFunc(); // Function MolotovProjectile.MolotovProjectile_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x201e6d4
	void Timeline_0__UpdateFunc(); // Function MolotovProjectile.MolotovProjectile_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x201e6d4
	void Timeline_1__FinishedFunc(); // Function MolotovProjectile.MolotovProjectile_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x201e6d4
	void Timeline_1__UpdateFunc(); // Function MolotovProjectile.MolotovProjectile_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x201e6d4
	void ReceiveBeginPlay(); // Function MolotovProjectile.MolotovProjectile_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnFireStarted(); // Function MolotovProjectile.MolotovProjectile_C.Event_OnFireStarted // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnFireFinished(); // Function MolotovProjectile.MolotovProjectile_C.Event_OnFireFinished // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_MolotovProjectile(int32_t EntryPoint); // Function MolotovProjectile.MolotovProjectile_C.ExecuteUbergraph_MolotovProjectile // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

