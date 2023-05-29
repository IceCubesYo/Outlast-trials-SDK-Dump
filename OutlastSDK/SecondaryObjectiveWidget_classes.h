// WidgetBlueprintGeneratedClass SecondaryObjectiveWidget.SecondaryObjectiveWidget_C
// Size: 0x351 (Inherited: 0x322)
struct USecondaryObjectiveWidget_C : UObjectiveWidgetBase_C {
	char pad_322[0x6]; // 0x322(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* FadeIn; // 0x330(0x08)
	struct UWidgetAnimation* completed; // 0x338(0x08)
	struct UTextBlock* CountText; // 0x340(0x08)
	struct URichTextBlock* objectiveText; // 0x348(0x08)
	bool hasRecentProgress; // 0x350(0x01)

	bool ShouldShow(); // Function SecondaryObjectiveWidget.SecondaryObjectiveWidget_C.ShouldShow // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	void SetCompleted(); // Function SecondaryObjectiveWidget.SecondaryObjectiveWidget_C.SetCompleted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GetFadeInAnimation(struct UWidgetAnimation*& FadeInAnimation); // Function SecondaryObjectiveWidget.SecondaryObjectiveWidget_C.GetFadeInAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_ProgressChanged(float progress, bool isPositiveProgress, struct FText& objectiveText); // Function SecondaryObjectiveWidget.SecondaryObjectiveWidget_C.Event_ProgressChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_SecondaryObjectiveWidget(int32_t EntryPoint); // Function SecondaryObjectiveWidget.SecondaryObjectiveWidget_C.ExecuteUbergraph_SecondaryObjectiveWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

