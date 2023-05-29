// WidgetBlueprintGeneratedClass PlayerGameSessionTransitionWidget.PlayerGameSessionTransitionWidget_C
// Size: 0x2c0 (Inherited: 0x270)
struct UPlayerGameSessionTransitionWidget_C : URBPlayerGameSessionTransitionWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWidgetAnimation* FadeIn; // 0x278(0x08)
	struct UImage* Background_2; // 0x280(0x08)
	struct UImage* RorchachOverlay; // 0x288(0x08)
	struct UTextBlock* TextBlock_49; // 0x290(0x08)
	struct UImage* vignette; // 0x298(0x08)
	bool bShouldShow; // 0x2a0(0x01)
	bool bPlayingAnim; // 0x2a1(0x01)
	bool bShowing; // 0x2a2(0x01)
	char pad_2A3[0x5]; // 0x2a3(0x05)
	struct FText TransitionText; // 0x2a8(0x18)

	struct FText GetTransitionText(); // Function PlayerGameSessionTransitionWidget.PlayerGameSessionTransitionWidget_C.GetTransitionText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void FadeOutCompleted(); // Function PlayerGameSessionTransitionWidget.PlayerGameSessionTransitionWidget_C.FadeOutCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_Show(); // Function PlayerGameSessionTransitionWidget.PlayerGameSessionTransitionWidget_C.Event_Show // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Hide(); // Function PlayerGameSessionTransitionWidget.PlayerGameSessionTransitionWidget_C.Event_Hide // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void FadeInCompleted(); // Function PlayerGameSessionTransitionWidget.PlayerGameSessionTransitionWidget_C.FadeInCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Update(); // Function PlayerGameSessionTransitionWidget.PlayerGameSessionTransitionWidget_C.Update // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_PlayerGameSessionTransitionWidget(int32_t EntryPoint); // Function PlayerGameSessionTransitionWidget.PlayerGameSessionTransitionWidget_C.ExecuteUbergraph_PlayerGameSessionTransitionWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

