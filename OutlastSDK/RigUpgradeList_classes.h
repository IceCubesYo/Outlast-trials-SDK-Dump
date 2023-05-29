// WidgetBlueprintGeneratedClass RigUpgradeList.RigUpgradeList_C
// Size: 0x2d1 (Inherited: 0x278)
struct URigUpgradeList_C : URBUpgradeMenuTab {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UUpgradeButton_C* RigAcquiredUpgradeButton; // 0x280(0x08)
	struct URigButton_C* RigButton; // 0x288(0x08)
	struct UVerticalBox* RigUpgradeList; // 0x290(0x08)
	bool bIsLoadout; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct FMulticastInlineDelegate OnUpgradeHovered; // 0x2a0(0x10)
	struct FMulticastInlineDelegate OnUpgradeUnhovered; // 0x2b0(0x10)
	struct FMulticastInlineDelegate OnUpgradeClicked; // 0x2c0(0x10)
	enum class EActiveSkillType Active Skill Type; // 0x2d0(0x01)

	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function RigUpgradeList.RigUpgradeList_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnUpgradeReleasedEvent(struct FName ItemId); // Function RigUpgradeList.RigUpgradeList_C.OnUpgradeReleasedEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnUpgradePressedEvent(struct FName ItemId); // Function RigUpgradeList.RigUpgradeList_C.OnUpgradePressedEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnUpgradeClickedEvent(struct FName ItemId); // Function RigUpgradeList.RigUpgradeList_C.OnUpgradeClickedEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnUpgradeUnhoveredEvent(struct FName ItemId); // Function RigUpgradeList.RigUpgradeList_C.OnUpgradeUnhoveredEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnUpgradeHoveredEvent(struct FName ItemId); // Function RigUpgradeList.RigUpgradeList_C.OnUpgradeHoveredEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Refresh(); // Function RigUpgradeList.RigUpgradeList_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Init(bool bIsLoadout, enum class EActiveSkillType activeSkillUpgradeId); // Function RigUpgradeList.RigUpgradeList_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Setup(); // Function RigUpgradeList.RigUpgradeList_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function RigUpgradeList.RigUpgradeList_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_RigUpgradeList(int32_t EntryPoint); // Function RigUpgradeList.RigUpgradeList_C.ExecuteUbergraph_RigUpgradeList // (Final|UbergraphFunction) // @ game+0x201e6d4
	void OnUpgradeClicked__DelegateSignature(struct FName ItemId); // Function RigUpgradeList.RigUpgradeList_C.OnUpgradeClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnUpgradeUnhovered__DelegateSignature(struct FName ItemId); // Function RigUpgradeList.RigUpgradeList_C.OnUpgradeUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnUpgradeHovered__DelegateSignature(struct FName ItemId); // Function RigUpgradeList.RigUpgradeList_C.OnUpgradeHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

