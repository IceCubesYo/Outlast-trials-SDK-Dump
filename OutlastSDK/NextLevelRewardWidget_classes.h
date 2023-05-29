// WidgetBlueprintGeneratedClass NextLevelRewardWidget.NextLevelRewardWidget_C
// Size: 0x2f8 (Inherited: 0x260)
struct UNextLevelRewardWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* AmountText; // 0x268(0x08)
	struct UBorder* BackgroundBorder; // 0x270(0x08)
	struct UImage* CustomizationBorder; // 0x278(0x08)
	struct UImage* CustomizationRarityOverlay; // 0x280(0x08)
	struct UImage* Icon; // 0x288(0x08)
	bool bAcquired; // 0x290(0x01)
	bool bPerfectReward; // 0x291(0x01)
	char pad_292[0x2]; // 0x292(0x02)
	int32_t amount; // 0x294(0x04)
	struct UTexture2D* IconTexture; // 0x298(0x08)
	struct FRewardUIData Reward UI Data; // 0x2a0(0x18)
	struct FSlateColor IconTintColor; // 0x2b8(0x28)
	struct FText ForcedText; // 0x2e0(0x18)

	void UpdateRarity(enum class EPlayerCustomizationRarity Rarity); // Function NextLevelRewardWidget.NextLevelRewardWidget_C.UpdateRarity // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void InitFromRewardUIData(bool bAcquired, bool bPerfect, struct FRewardUIData RewardUIData); // Function NextLevelRewardWidget.NextLevelRewardWidget_C.InitFromRewardUIData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Setup(); // Function NextLevelRewardWidget.NextLevelRewardWidget_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnLoaded_54A1EA1342F0219294453894BE060EF2(struct UObject* Loaded); // Function NextLevelRewardWidget.NextLevelRewardWidget_C.OnLoaded_54A1EA1342F0219294453894BE060EF2 // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function NextLevelRewardWidget.NextLevelRewardWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function NextLevelRewardWidget.NextLevelRewardWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void LoadThumbnail(struct TSoftObjectPtr<UTexture2D> ThumbnailSoftRef); // Function NextLevelRewardWidget.NextLevelRewardWidget_C.LoadThumbnail // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_NextLevelRewardWidget(int32_t EntryPoint); // Function NextLevelRewardWidget.NextLevelRewardWidget_C.ExecuteUbergraph_NextLevelRewardWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

