// WidgetBlueprintGeneratedClass CreditsEntry.CreditsEntry_C
// Size: 0x2b8 (Inherited: 0x260)
struct UCreditsEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_141; // 0x268(0x08)
	struct UTextBlock* Name; // 0x270(0x08)
	struct UTextBlock* Title; // 0x278(0x08)
	struct FText TitleText; // 0x280(0x18)
	struct FString NameText; // 0x298(0x10)
	struct FString AdditionalNameText; // 0x2a8(0x10)

	void PreConstruct(bool IsDesignTime); // Function CreditsEntry.CreditsEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function CreditsEntry.CreditsEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_CreditsEntry(int32_t EntryPoint); // Function CreditsEntry.CreditsEntry_C.ExecuteUbergraph_CreditsEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

