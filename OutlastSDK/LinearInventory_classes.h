// WidgetBlueprintGeneratedClass LinearInventory.LinearInventory_C
// Size: 0x3d0 (Inherited: 0x300)
struct ULinearInventory_C : URBHUDLinearInventory {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct UWidgetAnimation* InactivityFadeOut_OnDemand; // 0x308(0x08)
	struct UWidgetAnimation* InitialFadeIn; // 0x310(0x08)
	struct UWidgetAnimation* InactivityFadeOut_Permanent; // 0x318(0x08)
	struct UWidgetAnimation* FadeOutItemName; // 0x320(0x08)
	struct UHorizontalBox* BasicSlots; // 0x328(0x08)
	struct UTextBlock* CurrentItemName; // 0x330(0x08)
	struct UImage* DarknessDetectionImage; // 0x338(0x08)
	struct ULinearInventoryEntry_C* FistsEntry; // 0x340(0x08)
	struct UHorizontalBox* InventorySlots; // 0x348(0x08)
	struct UHorizontalBox* ItemsSlots; // 0x350(0x08)
	struct UHorizontalBox* ObjectiveItemsBox; // 0x358(0x08)
	struct ULinearInventoryEntry_C* RigEntry; // 0x360(0x08)
	struct ULinearInventoryEntry_C* Slot1; // 0x368(0x08)
	struct ULinearInventoryEntry_C* Slot2; // 0x370(0x08)
	struct ULinearInventoryEntry_C* Slot3; // 0x378(0x08)
	struct ULinearInventoryEntry_C* Slot4; // 0x380(0x08)
	struct ULinearInventoryEntry_C* Slot5; // 0x388(0x08)
	struct USpacer* Spacer; // 0x390(0x08)
	struct UVoiceChatOverheadWidget_C* VoiceChatOverheadWidget; // 0x398(0x08)
	struct USizeBox* VoiceChatSize; // 0x3a0(0x08)
	struct ULinearInventoryEntry_C* PreviousEquippedItem; // 0x3a8(0x08)
	struct ULinearInventoryEntry_C* PreviousSwapItem; // 0x3b0(0x08)
	struct UMaterialInstanceDynamic* ASBaseMaterial; // 0x3b8(0x08)
	struct UMaterialInstanceDynamic* ASIconMaterial; // 0x3c0(0x08)
	bool ASCooldownOngoing; // 0x3c8(0x01)
	char pad_3C9[0x3]; // 0x3c9(0x03)
	float ObjectiveItemsIconSize; // 0x3cc(0x04)

	void SequenceEvent__ENTRYPOINTLinearInventory_1(); // Function LinearInventory.LinearInventory_C.SequenceEvent__ENTRYPOINTLinearInventory_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateDarknessDetection(bool InDarkness); // Function LinearInventory.LinearInventory_C.UpdateDarknessDetection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GetActiveSkillIndex(int32_t& ActiveSkillIndex, bool& ActiveSkillFound); // Function LinearInventory.LinearInventory_C.GetActiveSkillIndex // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void GetActiveSkillInfo(bool& ActiveSkillFound, struct FUILinearInventoryItem& ActiveSkillInfo); // Function LinearInventory.LinearInventory_C.GetActiveSkillInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void RefreshPrompts(); // Function LinearInventory.LinearInventory_C.RefreshPrompts // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateASCooldown(); // Function LinearInventory.LinearInventory_C.UpdateASCooldown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateRigSlot(); // Function LinearInventory.LinearInventory_C.UpdateRigSlot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateObjectiveItems(); // Function LinearInventory.LinearInventory_C.UpdateObjectiveItems // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void RefreshInventory(); // Function LinearInventory.LinearInventory_C.RefreshInventory // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateEquippedItem(); // Function LinearInventory.LinearInventory_C.UpdateEquippedItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateText(); // Function LinearInventory.LinearInventory_C.UpdateText // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function LinearInventory.LinearInventory_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Refresh(enum class EInventoryUpdateEventType EventType); // Function LinearInventory.LinearInventory_C.Event_Refresh // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_RefreshActiveSkill(); // Function LinearInventory.LinearInventory_C.Event_RefreshActiveSkill // (BlueprintEvent) // @ game+0x201e6d4
	void OnMenuExit(); // Function LinearInventory.LinearInventory_C.OnMenuExit // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_RefreshPrompts(); // Function LinearInventory.LinearInventory_C.Event_RefreshPrompts // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function LinearInventory.LinearInventory_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function LinearInventory.LinearInventory_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnWatchedPlayerChanged(struct ARBPlayer* oldPlayer, struct ARBPlayer* NewPlayer); // Function LinearInventory.LinearInventory_C.Event_OnWatchedPlayerChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnSpeakerVisibilityChanged(enum class ESlateVisibility InVisibility); // Function LinearInventory.LinearInventory_C.OnSpeakerVisibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnInventorySizeChanged(); // Function LinearInventory.LinearInventory_C.OnInventorySizeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_RefreshDarknessIndicator(bool newDarknessState); // Function LinearInventory.LinearInventory_C.Event_RefreshDarknessIndicator // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void StartFadeOutTimer(); // Function LinearInventory.LinearInventory_C.StartFadeOutTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnIsInCooldownChanged(struct ARBActiveSkill* ActiveSkill, bool bIsInCooldown); // Function LinearInventory.LinearInventory_C.Event_OnIsInCooldownChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void HandleVisibilityChange(enum class ESlateVisibility InVisibility); // Function LinearInventory.LinearInventory_C.HandleVisibilityChange // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_LinearInventory(int32_t EntryPoint); // Function LinearInventory.LinearInventory_C.ExecuteUbergraph_LinearInventory // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

