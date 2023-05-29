// WidgetBlueprintGeneratedClass MainMenuTransition.MainMenuTransition_C
// Size: 0x2cc (Inherited: 0x298)
struct UMainMenuTransition_C : URBMenuTransition {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UImage* videoTransition; // 0x2a0(0x08)
	bool isTransitionOut; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct UMaterialInstanceDynamic* Material; // 0x2b0(0x08)
	float BeginTime; // 0x2b8(0x04)
	float fadeSpeed; // 0x2bc(0x04)
	bool isTransitioning; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	float TransitionInSpeed; // 0x2c4(0x04)
	float TransitionOutSpeed; // 0x2c8(0x04)

	void UpdateFade(float Value); // Function MainMenuTransition.MainMenuTransition_C.UpdateFade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_TransitionIn(); // Function MainMenuTransition.MainMenuTransition_C.Event_TransitionIn // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_TransitionOut(); // Function MainMenuTransition.MainMenuTransition_C.Event_TransitionOut // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function MainMenuTransition.MainMenuTransition_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Play(float Fade, float fadeSpeed); // Function MainMenuTransition.MainMenuTransition_C.Play // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function MainMenuTransition.MainMenuTransition_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_MainMenuTransition(int32_t EntryPoint); // Function MainMenuTransition.MainMenuTransition_C.ExecuteUbergraph_MainMenuTransition // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

