// WidgetBlueprintGeneratedClass CategoryTitle.CategoryTitle_C
// Size: 0x318 (Inherited: 0x260)
struct UCategoryTitle_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Background; // 0x268(0x08)
	struct UImage* Line; // 0x270(0x08)
	struct UTextBlock* Title; // 0x278(0x08)
	struct FText TitleText; // 0x280(0x18)
	bool showLine; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct FSlateColor BackgroundColor; // 0x2a0(0x28)
	struct FSlateColor LineColor; // 0x2c8(0x28)
	struct FSlateColor TextColor; // 0x2f0(0x28)

	void SetText(struct FText Text, enum class ETextTransformPolicy NewParam); // Function CategoryTitle.CategoryTitle_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function CategoryTitle.CategoryTitle_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_CategoryTitle(int32_t EntryPoint); // Function CategoryTitle.CategoryTitle_C.ExecuteUbergraph_CategoryTitle // (Final|UbergraphFunction) // @ game+0x201e6d4
};

