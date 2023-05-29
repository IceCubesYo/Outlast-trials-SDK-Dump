// WidgetBlueprintGeneratedClass OverheadInfo.OverheadInfo_C
// Size: 0x3e8 (Inherited: 0x348)
struct UOverheadInfo_C : URBHUDOverheadInfo {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UWidgetAnimation* FadeIn; // 0x350(0x08)
	struct UImage* ClassIcon; // 0x358(0x08)
	struct USizeBox* ClassIconSizeBox; // 0x360(0x08)
	struct USizeBox* HealthBox; // 0x368(0x08)
	struct UInvalidationBox* InvalidationBox_ObjectiveInWorld; // 0x370(0x08)
	struct UOverlay* Level; // 0x378(0x08)
	struct UTextBlock* LevelText; // 0x380(0x08)
	struct UImage* LocalPartyLeader; // 0x388(0x08)
	struct UImage* MateArrow; // 0x390(0x08)
	struct UMateHealthBar_C* MateHealthBar; // 0x398(0x08)
	struct UTextBlock* MateName; // 0x3a0(0x08)
	struct UPlayerStatus_C* MateStatus; // 0x3a8(0x08)
	struct UHorizontalBox* NameHBox; // 0x3b0(0x08)
	struct UImage* TradeItem; // 0x3b8(0x08)
	struct UVoiceChatOverheadWidget_C* VoiceChatOverheadWidget; // 0x3c0(0x08)
	bool bShouldShowHealth; // 0x3c8(0x01)
	bool IsLeaderOfLocalParty; // 0x3c9(0x01)
	bool IsInLobby; // 0x3ca(0x01)
	bool CanPlayKnockdownSound; // 0x3cb(0x01)
	bool CanPlayDangerSound; // 0x3cc(0x01)
	bool bIsFadingOut; // 0x3cd(0x01)
	char pad_3CE[0x2]; // 0x3ce(0x02)
	struct FText PlaceholderName; // 0x3d0(0x18)

	void UpdateActiveSkillType(); // Function OverheadInfo.OverheadInfo_C.UpdateActiveSkillType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void InithHealthBarVisibility(); // Function OverheadInfo.OverheadInfo_C.InithHealthBarVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetImposter(struct ARBImposter* newImposter); // Function OverheadInfo.OverheadInfo_C.SetImposter // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnTeammateInWorldIconsDisplayUpdated(); // Function OverheadInfo.OverheadInfo_C.OnTeammateInWorldIconsDisplayUpdated // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnPlayerPartyStateUpdated(); // Function OverheadInfo.OverheadInfo_C.OnPlayerPartyStateUpdated // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateImmersionSettings(); // Function OverheadInfo.OverheadInfo_C.UpdateImmersionSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetPlayerState(struct ARBPlayerState* NewPlayerState); // Function OverheadInfo.OverheadInfo_C.SetPlayerState // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnPlayerIndicatorTypeChanged(enum class EPlayerIndicatorType playerIndicatorType); // Function OverheadInfo.OverheadInfo_C.OnPlayerIndicatorTypeChanged // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnPlayerLevelChanged(); // Function OverheadInfo.OverheadInfo_C.OnPlayerLevelChanged // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetImposterName(struct FString CopiedName); // Function OverheadInfo.OverheadInfo_C.SetImposterName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateDisplay(); // Function OverheadInfo.OverheadInfo_C.UpdateDisplay // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateTradeItem(); // Function OverheadInfo.OverheadInfo_C.UpdateTradeItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateDistanceEffects(); // Function OverheadInfo.OverheadInfo_C.UpdateDistanceEffects // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdatePartyIcons(); // Function OverheadInfo.OverheadInfo_C.UpdatePartyIcons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function OverheadInfo.OverheadInfo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Show(); // Function OverheadInfo.OverheadInfo_C.Event_Show // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Hide(); // Function OverheadInfo.OverheadInfo_C.Event_Hide // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function OverheadInfo.OverheadInfo_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnPlayerHealthChanged(float newHealth); // Function OverheadInfo.OverheadInfo_C.OnPlayerHealthChanged // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnPlayerMaxHealthChanged(float newMaxHealth); // Function OverheadInfo.OverheadInfo_C.OnPlayerMaxHealthChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnCurrentLoadoutChanged(); // Function OverheadInfo.OverheadInfo_C.OnCurrentLoadoutChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_OverheadInfo(int32_t EntryPoint); // Function OverheadInfo.OverheadInfo_C.ExecuteUbergraph_OverheadInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

