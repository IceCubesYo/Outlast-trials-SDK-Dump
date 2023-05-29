// WidgetBlueprintGeneratedClass PerkSlotButton.PerkSlotButton_C
// Size: 0x380 (Inherited: 0x260)
struct UPerkSlotButton_C : UUserWidget {
	struct UTextBlock* PerkNameText; // 0x260(0x08)
	struct UPerkUpgradeButton_C* PerkUpgradeButton; // 0x268(0x08)
	int32_t SlotIndex; // 0x270(0x04)
	int32_t AvailablePerkSlots; // 0x274(0x04)
	struct FMenuUpgradeItemInfo UpgradeInfo; // 0x278(0x108)

	void SetHovered(bool bHovered); // Function PerkSlotButton.PerkSlotButton_C.SetHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Refresh(); // Function PerkSlotButton.PerkSlotButton_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Init(int32_t Slot); // Function PerkSlotButton.PerkSlotButton_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Setup(); // Function PerkSlotButton.PerkSlotButton_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

