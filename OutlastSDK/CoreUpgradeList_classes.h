// WidgetBlueprintGeneratedClass CoreUpgradeList.CoreUpgradeList_C
// Size: 0x2cc (Inherited: 0x278)
struct UCoreUpgradeList_C : URBUpgradeMenuTab {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UVerticalBox* CoreUpgradeList; // 0x280(0x08)
	struct UCoreUpgradeTierButton_C* CoreUpgradeTierButton; // 0x288(0x08)
	bool bIsLoadout; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct FMulticastInlineDelegate OnUpgradeHovered; // 0x298(0x10)
	struct FMulticastInlineDelegate OnUpgradeUnhovered; // 0x2a8(0x10)
	struct FMulticastInlineDelegate OnUpgradeClicked; // 0x2b8(0x10)
	int32_t tier; // 0x2c8(0x04)

	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function CoreUpgradeList.CoreUpgradeList_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnUpgradeReleasedEvent(struct FName ItemId); // Function CoreUpgradeList.CoreUpgradeList_C.OnUpgradeReleasedEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnUpgradePressedEvent(struct FName ItemId); // Function CoreUpgradeList.CoreUpgradeList_C.OnUpgradePressedEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnUpgradeClickedEvent(struct FName ItemId); // Function CoreUpgradeList.CoreUpgradeList_C.OnUpgradeClickedEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnUpgradeUnhoveredEvent(struct FName ItemId); // Function CoreUpgradeList.CoreUpgradeList_C.OnUpgradeUnhoveredEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnUpgradeHoveredEvent(struct FName ItemId); // Function CoreUpgradeList.CoreUpgradeList_C.OnUpgradeHoveredEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Refresh(); // Function CoreUpgradeList.CoreUpgradeList_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Init(bool bIsLoadout, int32_t tier); // Function CoreUpgradeList.CoreUpgradeList_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Setup(); // Function CoreUpgradeList.CoreUpgradeList_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function CoreUpgradeList.CoreUpgradeList_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_CoreUpgradeList(int32_t EntryPoint); // Function CoreUpgradeList.CoreUpgradeList_C.ExecuteUbergraph_CoreUpgradeList // (Final|UbergraphFunction) // @ game+0x201e6d4
	void OnUpgradeClicked__DelegateSignature(struct FName ItemId); // Function CoreUpgradeList.CoreUpgradeList_C.OnUpgradeClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnUpgradeUnhovered__DelegateSignature(struct FName ItemId); // Function CoreUpgradeList.CoreUpgradeList_C.OnUpgradeUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnUpgradeHovered__DelegateSignature(struct FName ItemId); // Function CoreUpgradeList.CoreUpgradeList_C.OnUpgradeHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

