// WidgetBlueprintGeneratedClass CoreUpgradeTierList.CoreUpgradeTierList_C
// Size: 0x2c0 (Inherited: 0x260)
struct UCoreUpgradeTierList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UCoreUpgradeTierButton_C* CoreUpgradeTierButton; // 0x268(0x08)
	struct UCoreUpgradeTierButton_C* CoreUpgradeTierButton_2; // 0x270(0x08)
	struct UCoreUpgradeTierButton_C* CoreUpgradeTierButton_3; // 0x278(0x08)
	struct UVerticalBox* TiersBox; // 0x280(0x08)
	bool bIsLoadout; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct FMulticastInlineDelegate OnTierHovered; // 0x290(0x10)
	struct FMulticastInlineDelegate OnTierUnhovered; // 0x2a0(0x10)
	struct FMulticastInlineDelegate OnTierClicked; // 0x2b0(0x10)

	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function CoreUpgradeTierList.CoreUpgradeTierList_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnTierClickedEvent(int32_t tier); // Function CoreUpgradeTierList.CoreUpgradeTierList_C.OnTierClickedEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnTierUnhoveredEvent(int32_t tier); // Function CoreUpgradeTierList.CoreUpgradeTierList_C.OnTierUnhoveredEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnTierHoveredEvent(int32_t tier); // Function CoreUpgradeTierList.CoreUpgradeTierList_C.OnTierHoveredEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Refresh(); // Function CoreUpgradeTierList.CoreUpgradeTierList_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Init(bool bIsLoadout); // Function CoreUpgradeTierList.CoreUpgradeTierList_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Setup(); // Function CoreUpgradeTierList.CoreUpgradeTierList_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function CoreUpgradeTierList.CoreUpgradeTierList_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_CoreUpgradeTierList(int32_t EntryPoint); // Function CoreUpgradeTierList.CoreUpgradeTierList_C.ExecuteUbergraph_CoreUpgradeTierList // (Final|UbergraphFunction) // @ game+0x201e6d4
	void OnTierClicked__DelegateSignature(int32_t tier); // Function CoreUpgradeTierList.CoreUpgradeTierList_C.OnTierClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnTierUnhovered__DelegateSignature(int32_t tier); // Function CoreUpgradeTierList.CoreUpgradeTierList_C.OnTierUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnTierHovered__DelegateSignature(int32_t tier); // Function CoreUpgradeTierList.CoreUpgradeTierList_C.OnTierHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

