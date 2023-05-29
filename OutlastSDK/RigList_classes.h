// WidgetBlueprintGeneratedClass RigList.RigList_C
// Size: 0x2c1 (Inherited: 0x278)
struct URigList_C : URBUpgradeMenuTab {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UVerticalBox* RigList; // 0x280(0x08)
	bool bIsLoadout; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct FMulticastInlineDelegate OnRigHovered; // 0x290(0x10)
	struct FMulticastInlineDelegate OnRigUnhovered; // 0x2a0(0x10)
	struct FMulticastInlineDelegate OnRigClicked; // 0x2b0(0x10)
	bool bIgnoreNextClickEvent; // 0x2c0(0x01)

	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function RigList.RigList_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnRigReleasedEvent(struct FName ItemId, enum class EActiveSkillType ActiveSkillType); // Function RigList.RigList_C.OnRigReleasedEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnRigPressedEvent(struct FName ItemId, enum class EActiveSkillType ActiveSkillType); // Function RigList.RigList_C.OnRigPressedEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnRigClickedEvent(struct FName ItemId, enum class EActiveSkillType ActiveSkillType); // Function RigList.RigList_C.OnRigClickedEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnRigUnhoveredEvent(struct FName ItemId, enum class EActiveSkillType ActiveSkillType); // Function RigList.RigList_C.OnRigUnhoveredEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnRigHoveredEvent(struct FName ItemId, enum class EActiveSkillType ActiveSkillType); // Function RigList.RigList_C.OnRigHoveredEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Refresh(); // Function RigList.RigList_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Init(bool bIsLoadout); // Function RigList.RigList_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Setup(); // Function RigList.RigList_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function RigList.RigList_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_RigList(int32_t EntryPoint); // Function RigList.RigList_C.ExecuteUbergraph_RigList // (Final|UbergraphFunction) // @ game+0x201e6d4
	void OnRigClicked__DelegateSignature(struct FName ItemId, enum class EActiveSkillType ActiveSkillType); // Function RigList.RigList_C.OnRigClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnRigUnhovered__DelegateSignature(struct FName ItemId, enum class EActiveSkillType ActiveSkillType); // Function RigList.RigList_C.OnRigUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnRigHovered__DelegateSignature(struct FName ItemId, enum class EActiveSkillType ActiveSkillType); // Function RigList.RigList_C.OnRigHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

