// WidgetBlueprintGeneratedClass StageIntroVariatorEntry.StageIntroVariatorEntry_C
// Size: 0x2e8 (Inherited: 0x260)
struct UStageIntroVariatorEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Show; // 0x268(0x08)
	struct UBorder* BackgroundBorder; // 0x270(0x08)
	struct UOverlay* BackgroundOverlay; // 0x278(0x08)
	struct UImage* Icon; // 0x280(0x08)
	struct UTextBlock* VariatorNameText; // 0x288(0x08)
	struct UVerticalBox* VerticalBox_1; // 0x290(0x08)
	struct UTexture2D* IconTexture; // 0x298(0x08)
	bool bDisplayNotAvailableIcon; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct FText VariatorName; // 0x2a8(0x18)
	struct FText VariatorDescription; // 0x2c0(0x18)
	struct FMulticastInlineDelegate OnAnimationCompleted; // 0x2d8(0x10)

	void StartAnimation(); // Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.StartAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void InitFromVariatorInfo(struct URBVariatorInfo* variatorInfo); // Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.InitFromVariatorInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void InitFromDifficulty(enum class EGameDifficulty Difficulty); // Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.InitFromDifficulty // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Refresh(); // Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnShowFinished(); // Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.OnShowFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_StageIntroVariatorEntry(int32_t EntryPoint); // Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.ExecuteUbergraph_StageIntroVariatorEntry // (Final|UbergraphFunction) // @ game+0x201e6d4
	void OnAnimationCompleted__DelegateSignature(); // Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.OnAnimationCompleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

