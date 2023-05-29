// WidgetBlueprintGeneratedClass LocalPlayerInfo_v2.LocalPlayerInfo_v2_C
// Size: 0x2a8 (Inherited: 0x260)
struct ULocalPlayerInfo_v2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct ULocalPlayerCurrencyHorizontal_C* CreditsCurrencyWidget; // 0x268(0x08)
	struct UImage* Image; // 0x270(0x08)
	struct UImage* Image_72; // 0x278(0x08)
	struct UImage* PlayerIcon; // 0x280(0x08)
	struct UImage* playerIconBackground; // 0x288(0x08)
	struct UTextBlock* PlayerLevelText; // 0x290(0x08)
	struct UTextBlock* PlayerName; // 0x298(0x08)
	struct ULocalPlayerCurrencyHorizontal_C* VouchersCurrencyWidget; // 0x2a0(0x08)

	void StopPreviewingCosts(); // Function LocalPlayerInfo_v2.LocalPlayerInfo_v2_C.StopPreviewingCosts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreviewCost(struct TMap<enum class ECurrencyType, int32_t> Costs); // Function LocalPlayerInfo_v2.LocalPlayerInfo_v2_C.PreviewCost // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetText(struct FText Text); // Function LocalPlayerInfo_v2.LocalPlayerInfo_v2_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnLoaded_C660C23545870CAB9A7274A288C8A37D(struct UObject* Loaded); // Function LocalPlayerInfo_v2.LocalPlayerInfo_v2_C.OnLoaded_C660C23545870CAB9A7274A288C8A37D // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnLoaded_0E1F4792410C545D150CC28C05B61547(struct UObject* Loaded); // Function LocalPlayerInfo_v2.LocalPlayerInfo_v2_C.OnLoaded_0E1F4792410C545D150CC28C05B61547 // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function LocalPlayerInfo_v2.LocalPlayerInfo_v2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnPlayerIconEquipped(struct URBPlayerIconCustomizationOption* Icon); // Function LocalPlayerInfo_v2.LocalPlayerInfo_v2_C.OnPlayerIconEquipped // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_LocalPlayerInfo_v2(int32_t EntryPoint); // Function LocalPlayerInfo_v2.LocalPlayerInfo_v2_C.ExecuteUbergraph_LocalPlayerInfo_v2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

