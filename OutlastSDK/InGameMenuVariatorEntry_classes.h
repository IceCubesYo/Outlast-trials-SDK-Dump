// WidgetBlueprintGeneratedClass InGameMenuVariatorEntry.InGameMenuVariatorEntry_C
// Size: 0x2e0 (Inherited: 0x260)
struct UInGameMenuVariatorEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* BackgroundBorder; // 0x268(0x08)
	struct UOverlay* BackgroundOverlay; // 0x270(0x08)
	struct UImage* Icon; // 0x278(0x08)
	struct UTextBlock* VariatorNameText; // 0x280(0x08)
	struct UVerticalBox* VerticalBox_1; // 0x288(0x08)
	struct UTexture2D* IconTexture; // 0x290(0x08)
	bool bDisplayNotAvailableIcon; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct FText VariatorName; // 0x2a0(0x18)
	struct FText VariatorDescription; // 0x2b8(0x18)
	struct FMulticastInlineDelegate OnAnimationCompleted; // 0x2d0(0x10)

	void InitFromVariatorInfo(struct URBVariatorInfo* variatorInfo); // Function InGameMenuVariatorEntry.InGameMenuVariatorEntry_C.InitFromVariatorInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void InitFromDifficulty(enum class EGameDifficulty Difficulty); // Function InGameMenuVariatorEntry.InGameMenuVariatorEntry_C.InitFromDifficulty // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Refresh(); // Function InGameMenuVariatorEntry.InGameMenuVariatorEntry_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function InGameMenuVariatorEntry.InGameMenuVariatorEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_InGameMenuVariatorEntry(int32_t EntryPoint); // Function InGameMenuVariatorEntry.InGameMenuVariatorEntry_C.ExecuteUbergraph_InGameMenuVariatorEntry // (Final|UbergraphFunction) // @ game+0x201e6d4
	void OnAnimationCompleted__DelegateSignature(); // Function InGameMenuVariatorEntry.InGameMenuVariatorEntry_C.OnAnimationCompleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

