// WidgetBlueprintGeneratedClass ScoreDetailLineEntry.ScoreDetailLineEntry_C
// Size: 0x2c9 (Inherited: 0x268)
struct UScoreDetailLineEntry_C : URBPhotoFinishEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* ShowAnimation; // 0x270(0x08)
	struct UCanvasPanel* CanvasPanel_2; // 0x278(0x08)
	struct UTextBlock* DetailTextBlock; // 0x280(0x08)
	struct UImage* Image_2; // 0x288(0x08)
	struct UTextBlock* ValueTextBlock; // 0x290(0x08)
	struct FText DetailText; // 0x298(0x18)
	struct FText ValueText; // 0x2b0(0x18)
	bool bPositive; // 0x2c8(0x01)

	void Show(); // Function ScoreDetailLineEntry.ScoreDetailLineEntry_C.Show // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Setup(); // Function ScoreDetailLineEntry.ScoreDetailLineEntry_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Init(struct FText Name, struct FText Value, bool bPositive); // Function ScoreDetailLineEntry.ScoreDetailLineEntry_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function ScoreDetailLineEntry.ScoreDetailLineEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_ScoreDetailLineEntry(int32_t EntryPoint); // Function ScoreDetailLineEntry.ScoreDetailLineEntry_C.ExecuteUbergraph_ScoreDetailLineEntry // (Final|UbergraphFunction) // @ game+0x201e6d4
};

