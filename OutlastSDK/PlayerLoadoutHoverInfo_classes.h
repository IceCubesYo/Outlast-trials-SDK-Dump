// WidgetBlueprintGeneratedClass PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C
// Size: 0x2b8 (Inherited: 0x260)
struct UPlayerLoadoutHoverInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct URBMenuButton_C* ActionButton; // 0x268(0x08)
	struct URBMenuButton_C* ActionButton2; // 0x270(0x08)
	struct URichTextBlock* DescriptionText; // 0x278(0x08)
	struct UTextBlock* ErrorText; // 0x280(0x08)
	struct UImage* InvisibleBackground; // 0x288(0x08)
	struct UTextBlock* NameText; // 0x290(0x08)
	struct UCanvasPanel* Root; // 0x298(0x08)
	struct UTextBlock* TypeText; // 0x2a0(0x08)
	bool bIsLoadout; // 0x2a8(0x01)
	enum class ELoadoutElementType loadoutItemType; // 0x2a9(0x01)
	char pad_2AA[0x2]; // 0x2aa(0x02)
	struct FName ItemId; // 0x2ac(0x08)
	int32_t tier; // 0x2b4(0x04)

	void IsTierLocked(bool& bIsTierLocked); // Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.IsTierLocked // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetupActionButton2(struct FString ActionName, struct FText actionText, bool bHold); // Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.SetupActionButton2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetupActionButton(struct FString ActionName, struct FText actionText, bool bHold); // Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.SetupActionButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetupError(struct FText Error); // Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.SetupError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetupCoreUpgrade(struct FName ItemId, int32_t tier); // Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.SetupCoreUpgrade // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetupPerk(struct FName ItemId, int32_t SlotIndex); // Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.SetupPerk // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetupRigUpgrade(struct FName ItemId, int32_t SlotIndex); // Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.SetupRigUpgrade // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetupRig(struct FName ItemId); // Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.SetupRig // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnLoadoutItemUnhovered(); // Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.OnLoadoutItemUnhovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnLoadoutItemHovered(enum class ELoadoutElementType loadoutItemType, struct FName& ItemId, int32_t tier); // Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.OnLoadoutItemHovered // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Refresh(); // Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Destruct(); // Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_PlayerLoadoutHoverInfo(int32_t EntryPoint); // Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.ExecuteUbergraph_PlayerLoadoutHoverInfo // (Final|UbergraphFunction) // @ game+0x201e6d4
};

