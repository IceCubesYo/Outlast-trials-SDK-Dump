// WidgetBlueprintGeneratedClass Subtitles.Subtitles_C
// Size: 0x290 (Inherited: 0x268)
struct USubtitles_C : URBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* Background; // 0x270(0x08)
	struct UTextBlock* subTitleBlock; // 0x278(0x08)
	struct UInvalidationBox* subTitleInvalidationBox; // 0x280(0x08)
	struct UOverlay* subtitleOverlay; // 0x288(0x08)

	void AddStringToMessage(struct FText& Message, struct FString string); // Function Subtitles.Subtitles_C.AddStringToMessage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	bool IsCJKLanguage(); // Function Subtitles.Subtitles_C.IsCJKLanguage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void GetMaxCharactersPerLine(int32_t& MaxCharactersPerLine); // Function Subtitles.Subtitles_C.GetMaxCharactersPerLine // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void UpdateTextSize(enum class EUIFontSize Size); // Function Subtitles.Subtitles_C.UpdateTextSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetSubtitleText(struct FString subTitleText); // Function Subtitles.Subtitles_C.SetSubtitleText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function Subtitles.Subtitles_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnCurrentSubtitleUpdated(struct FString CurrentSubtitle); // Function Subtitles.Subtitles_C.OnCurrentSubtitleUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnSubtitleConfigChanged(); // Function Subtitles.Subtitles_C.OnSubtitleConfigChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_Subtitles(int32_t EntryPoint); // Function Subtitles.Subtitles_C.ExecuteUbergraph_Subtitles // (Final|UbergraphFunction) // @ game+0x201e6d4
};

