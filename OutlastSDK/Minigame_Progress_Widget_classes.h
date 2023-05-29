// WidgetBlueprintGeneratedClass Minigame_Progress_Widget.Minigame_Progress_Widget_C
// Size: 0x31c (Inherited: 0x2e8)
struct UMinigame_Progress_Widget_C : URBHUDElementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UInvalidationBox* InvalidationBox_MinigameProgressWidget; // 0x2f0(0x08)
	struct UOverlay* MainOverlay; // 0x2f8(0x08)
	struct UImage* progressBackground; // 0x300(0x08)
	struct UProgressBar* ProgressionBar; // 0x308(0x08)
	struct AActor* MinigameOwner; // 0x310(0x08)
	float CurrentPercent; // 0x318(0x04)

	bool ShouldShow(); // Function Minigame_Progress_Widget.Minigame_Progress_Widget_C.ShouldShow // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	void Construct(); // Function Minigame_Progress_Widget.Minigame_Progress_Widget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Minigame_Progress_Widget.Minigame_Progress_Widget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnMinigameOwnerChanged(struct AActor* progressOwner); // Function Minigame_Progress_Widget.Minigame_Progress_Widget_C.OnMinigameOwnerChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_Hide(); // Function Minigame_Progress_Widget.Minigame_Progress_Widget_C.Event_Hide // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Show(); // Function Minigame_Progress_Widget.Minigame_Progress_Widget_C.Event_Show // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_Minigame_Progress_Widget(int32_t EntryPoint); // Function Minigame_Progress_Widget.Minigame_Progress_Widget_C.ExecuteUbergraph_Minigame_Progress_Widget // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

