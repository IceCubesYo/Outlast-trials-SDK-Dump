// WidgetBlueprintGeneratedClass PerkList.PerkList_C
// Size: 0x2c9 (Inherited: 0x278)
struct UPerkList_C : URBUpgradeMenuTab {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UUniformGridPanel* PerkGrid; // 0x280(0x08)
	struct UTextBlock* PerkStateText; // 0x288(0x08)
	bool bIsLoadout; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct FMulticastInlineDelegate OnUpgradeHovered; // 0x298(0x10)
	struct FMulticastInlineDelegate OnUpgradeUnhovered; // 0x2a8(0x10)
	struct FMulticastInlineDelegate OnUpgradeClicked; // 0x2b8(0x10)
	bool bHasNewItemBeingDisplayed; // 0x2c8(0x01)

	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function PerkList.PerkList_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnPerkReleasedEvent(struct FMenuUpgradeItemInfo itemInfo); // Function PerkList.PerkList_C.OnPerkReleasedEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnPerkPressedEvent(struct FMenuUpgradeItemInfo itemInfo); // Function PerkList.PerkList_C.OnPerkPressedEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnPerkClickedEvent(struct UPerkUpgradeButton_C* Button); // Function PerkList.PerkList_C.OnPerkClickedEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnPerkUnhoveredEvent(struct UPerkUpgradeButton_C* Button); // Function PerkList.PerkList_C.OnPerkUnhoveredEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnPerkHoveredEvent(struct UPerkUpgradeButton_C* Button); // Function PerkList.PerkList_C.OnPerkHoveredEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateHeaderText(); // Function PerkList.PerkList_C.UpdateHeaderText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Refresh(); // Function PerkList.PerkList_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Init(bool bIsLoadout); // Function PerkList.PerkList_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Setup(); // Function PerkList.PerkList_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function PerkList.PerkList_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_PerkList(int32_t EntryPoint); // Function PerkList.PerkList_C.ExecuteUbergraph_PerkList // (Final|UbergraphFunction) // @ game+0x201e6d4
	void OnUpgradeClicked__DelegateSignature(struct FName ItemId); // Function PerkList.PerkList_C.OnUpgradeClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnUpgradeUnhovered__DelegateSignature(struct FName ItemId); // Function PerkList.PerkList_C.OnUpgradeUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnUpgradeHovered__DelegateSignature(struct FName ItemId); // Function PerkList.PerkList_C.OnUpgradeHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

