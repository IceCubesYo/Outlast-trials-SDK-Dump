// WidgetBlueprintGeneratedClass PlayerStatEntry.PlayerStatEntry_C
// Size: 0x2b8 (Inherited: 0x260)
struct UPlayerStatEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* DisplayNameWidget; // 0x268(0x08)
	struct UImage* Icon; // 0x270(0x08)
	struct UTextBlock* ValueTextWidget; // 0x278(0x08)
	struct FText DisplayName; // 0x280(0x18)
	struct FText ValueText; // 0x298(0x18)
	struct UTexture2D* IconTexture; // 0x2b0(0x08)

	void Setup(struct FText DisplayName, struct FText ValueText, struct UTexture2D* IconTexture); // Function PlayerStatEntry.PlayerStatEntry_C.Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Refresh(); // Function PlayerStatEntry.PlayerStatEntry_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function PlayerStatEntry.PlayerStatEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_PlayerStatEntry(int32_t EntryPoint); // Function PlayerStatEntry.PlayerStatEntry_C.ExecuteUbergraph_PlayerStatEntry // (Final|UbergraphFunction) // @ game+0x201e6d4
};

