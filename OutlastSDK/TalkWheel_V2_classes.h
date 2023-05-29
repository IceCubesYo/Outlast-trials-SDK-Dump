// WidgetBlueprintGeneratedClass TalkWheel_V2.TalkWheel_V2_C
// Size: 0x334 (Inherited: 0x300)
struct UTalkWheel_V2_C : URBTalkWheel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct UImage* Background; // 0x308(0x08)
	struct UCanvasPanel* CanvasPanel_26; // 0x310(0x08)
	struct UOverlay* SlicesOverlay; // 0x318(0x08)
	struct TArray<struct UTalkWheelSlice_V2_C*> WheelSlices; // 0x320(0x10)
	int32_t LastHighlitedSliceIndex; // 0x330(0x04)

	void RefreshSlices(); // Function TalkWheel_V2.TalkWheel_V2_C.RefreshSlices // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Highlight(int32_t SliceIndex); // Function TalkWheel_V2.TalkWheel_V2_C.Highlight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	bool ShouldShow(); // Function TalkWheel_V2.TalkWheel_V2_C.ShouldShow // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function TalkWheel_V2.TalkWheel_V2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Show(); // Function TalkWheel_V2.TalkWheel_V2_C.Event_Show // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Hide(); // Function TalkWheel_V2.TalkWheel_V2_C.Event_Hide // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_HighlightWheel(int32_t wheelIndexValue); // Function TalkWheel_V2.TalkWheel_V2_C.Event_HighlightWheel // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_RefreshSlices(); // Function TalkWheel_V2.TalkWheel_V2_C.Event_RefreshSlices // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_TalkWheel_V2(int32_t EntryPoint); // Function TalkWheel_V2.TalkWheel_V2_C.ExecuteUbergraph_TalkWheel_V2 // (Final|UbergraphFunction) // @ game+0x201e6d4
};

