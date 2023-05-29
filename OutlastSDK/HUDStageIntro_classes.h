// WidgetBlueprintGeneratedClass HUDStageIntro.HUDStageIntro_C
// Size: 0x358 (Inherited: 0x2e8)
struct UHUDStageIntro_C : URBHUDElementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* Hide; // 0x2f0(0x08)
	struct UWidgetAnimation* Show; // 0x2f8(0x08)
	struct UImage* Background; // 0x300(0x08)
	struct UStageIntroVariatorEntry_C* StageIntroVariatorEntry; // 0x308(0x08)
	struct UStageIntroVariatorEntry_C* StageIntroVariatorEntry_2; // 0x310(0x08)
	struct UStageIntroVariatorEntry_C* StageIntroVariatorEntry_3; // 0x318(0x08)
	struct UTextBlock* StageName; // 0x320(0x08)
	struct UTextBlock* TrialName; // 0x328(0x08)
	struct UHorizontalBox* VariatorHBox; // 0x330(0x08)
	bool isHiding; // 0x338(0x01)
	char pad_339[0x3]; // 0x339(0x03)
	int32_t CurrentVariatorIndex; // 0x33c(0x04)
	bool bShownAllVariators; // 0x340(0x01)
	char pad_341[0x7]; // 0x341(0x07)
	struct TArray<struct UAkAudioEvent*> AvailableVariatorSounds; // 0x348(0x10)

	void GetTrialName(struct FText& StageName); // Function HUDStageIntro.HUDStageIntro_C.GetTrialName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GetStageName(struct FText& StageName); // Function HUDStageIntro.HUDStageIntro_C.GetStageName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ShowNextVariator(); // Function HUDStageIntro.HUDStageIntro_C.ShowNextVariator // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void InitVariators(); // Function HUDStageIntro.HUDStageIntro_C.InitVariators // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Finished_5005AE6A43210FC2510BF2B1AF634AB5(); // Function HUDStageIntro.HUDStageIntro_C.Finished_5005AE6A43210FC2510BF2B1AF634AB5 // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_Show(); // Function HUDStageIntro.HUDStageIntro_C.Event_Show // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function HUDStageIntro.HUDStageIntro_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_HUDStageIntro(int32_t EntryPoint); // Function HUDStageIntro.HUDStageIntro_C.ExecuteUbergraph_HUDStageIntro // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

