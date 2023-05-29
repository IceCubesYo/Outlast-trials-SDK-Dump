// WidgetBlueprintGeneratedClass ProgramTrialRewardWidget.ProgramTrialRewardWidget_C
// Size: 0x320 (Inherited: 0x260)
struct UProgramTrialRewardWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* NewReward; // 0x268(0x08)
	struct UTextBlock* AmountText; // 0x270(0x08)
	struct UBorder* BackgroundBorder; // 0x278(0x08)
	struct UImage* CompletedIcon; // 0x280(0x08)
	struct UImage* CustomizationBorder; // 0x288(0x08)
	struct UImage* CustomizationRarityOverlay; // 0x290(0x08)
	struct UImage* Icon; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct UImage* Image_164; // 0x2a8(0x08)
	struct UBorder* PerfectContainer; // 0x2b0(0x08)
	bool bAcquired; // 0x2b8(0x01)
	bool bPerfectReward; // 0x2b9(0x01)
	char pad_2BA[0x2]; // 0x2ba(0x02)
	int32_t amount; // 0x2bc(0x04)
	struct UTexture2D* IconTexture; // 0x2c0(0x08)
	struct FRewardUIData Reward UI Data; // 0x2c8(0x18)
	struct FSlateColor IconTintColor; // 0x2e0(0x28)
	struct FText ForcedText; // 0x308(0x18)

	void UpdateRarity(enum class EPlayerCustomizationRarity Rarity); // Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.UpdateRarity // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void MergeWith(struct FRewardUIData RewardUIData); // Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.MergeWith // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void CanMergeWith(struct FRewardUIData RewardUIData, bool& bCanMergeWith); // Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.CanMergeWith // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void InitFromRewardUIData(bool bAcquired, bool bPerfect, struct FRewardUIData RewardUIData); // Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.InitFromRewardUIData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PlayNewRewardAnimation(); // Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.PlayNewRewardAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Init(bool bAcquired, bool bPerfect, int32_t amount, struct UTexture2D* IconTexture, struct FSlateColor IconColor, struct FText ForcedText); // Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Setup(); // Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnLoaded_A87C4866469F6493BA837AA40651E406(struct UObject* Loaded); // Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.OnLoaded_A87C4866469F6493BA837AA40651E406 // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void LoadThumbnail(struct TSoftObjectPtr<UTexture2D> ThumbnailSoftRef); // Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.LoadThumbnail // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_ProgramTrialRewardWidget(int32_t EntryPoint); // Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.ExecuteUbergraph_ProgramTrialRewardWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

