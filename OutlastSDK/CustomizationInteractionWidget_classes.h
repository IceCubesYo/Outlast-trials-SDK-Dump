// WidgetBlueprintGeneratedClass CustomizationInteractionWidget.CustomizationInteractionWidget_C
// Size: 0x360 (Inherited: 0x260)
struct UCustomizationInteractionWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct URBMenuButton_C* action; // 0x268(0x08)
	struct UOverlay* ActionWrapper; // 0x270(0x08)
	struct UTextBlock* Restriction; // 0x278(0x08)
	struct UBorder* RestrictionBox; // 0x280(0x08)
	enum class EMetaNPCType shopNPCType; // 0x288(0x01)
	char pad_289[0x3]; // 0x289(0x03)
	int32_t unlockLevel; // 0x28c(0x04)
	enum class ECustomizationInteractionType Interaction Type; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct FRBItemProgressionData ItemProgressionData; // 0x298(0xc8)

	void Initialize(struct FUICustomizationItem Item); // Function CustomizationInteractionWidget.CustomizationInteractionWidget_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateInteractionType(enum class ECustomizationInteractionType InteractionType, struct FItemUnlockInfo unlockInfo); // Function CustomizationInteractionWidget.CustomizationInteractionWidget_C.UpdateInteractionType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void InitWithOption(struct URBPlayerCustomizationOption* Option, enum class ECustomizationInteractionType InteractionType); // Function CustomizationInteractionWidget.CustomizationInteractionWidget_C.InitWithOption // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function CustomizationInteractionWidget.CustomizationInteractionWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_CustomizationInteractionWidget(int32_t EntryPoint); // Function CustomizationInteractionWidget.CustomizationInteractionWidget_C.ExecuteUbergraph_CustomizationInteractionWidget // (Final|UbergraphFunction) // @ game+0x201e6d4
};

