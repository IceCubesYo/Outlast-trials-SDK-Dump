// WidgetBlueprintGeneratedClass TalkWheelSlice_V2.TalkWheelSlice_V2_C
// Size: 0x290 (Inherited: 0x260)
struct UTalkWheelSlice_V2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* HighlightFadeIn; // 0x268(0x08)
	struct UImage* Highlight_Background; // 0x270(0x08)
	struct UImage* SliceIcon; // 0x278(0x08)
	struct UTextBlock* SliceText; // 0x280(0x08)
	struct UVerticalBox* SliceVBox; // 0x288(0x08)

	void Downlight(); // Function TalkWheelSlice_V2.TalkWheelSlice_V2_C.Downlight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Highlight(); // Function TalkWheelSlice_V2.TalkWheelSlice_V2_C.Highlight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function TalkWheelSlice_V2.TalkWheelSlice_V2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_TalkWheelSlice_V2(int32_t EntryPoint); // Function TalkWheelSlice_V2.TalkWheelSlice_V2_C.ExecuteUbergraph_TalkWheelSlice_V2 // (Final|UbergraphFunction) // @ game+0x201e6d4
};

