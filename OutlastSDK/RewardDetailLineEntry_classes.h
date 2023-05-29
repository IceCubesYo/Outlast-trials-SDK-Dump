// WidgetBlueprintGeneratedClass RewardDetailLineEntry.RewardDetailLineEntry_C
// Size: 0x2b1 (Inherited: 0x268)
struct URewardDetailLineEntry_C : URBPhotoFinishEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UTextBlock* CashTextBlock; // 0x270(0x08)
	struct UTextBlock* DetailTextBlock; // 0x278(0x08)
	struct UImage* Image_2; // 0x280(0x08)
	struct UTextBlock* XpTextBlock; // 0x288(0x08)
	struct FText DetailText; // 0x290(0x18)
	int32_t XpAmount; // 0x2a8(0x04)
	int32_t CashAmount; // 0x2ac(0x04)
	bool Is Max Level; // 0x2b0(0x01)

	void Setup(); // Function RewardDetailLineEntry.RewardDetailLineEntry_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Init(struct FText DetailText, int32_t Xp, int32_t cash, bool bIsMaxLevel); // Function RewardDetailLineEntry.RewardDetailLineEntry_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function RewardDetailLineEntry.RewardDetailLineEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_RewardDetailLineEntry(int32_t EntryPoint); // Function RewardDetailLineEntry.RewardDetailLineEntry_C.ExecuteUbergraph_RewardDetailLineEntry // (Final|UbergraphFunction) // @ game+0x201e6d4
};

