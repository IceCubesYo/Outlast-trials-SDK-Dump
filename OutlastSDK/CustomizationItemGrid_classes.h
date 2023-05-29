// WidgetBlueprintGeneratedClass CustomizationItemGrid.CustomizationItemGrid_C
// Size: 0x2f8 (Inherited: 0x268)
struct UCustomizationItemGrid_C : URBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UScrollBox* CustomizationOptionsScrollBox; // 0x270(0x08)
	struct UUniformGridPanel* ThumbnailGrid; // 0x278(0x08)
	struct UCustomizationOptionThumbnail_C* EquippedOptionWidget; // 0x280(0x08)
	int32_t itemsPerRow; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct FMulticastInlineDelegate EventOnItemClicked; // 0x290(0x10)
	struct FMulticastInlineDelegate EventOnItemHovered; // 0x2a0(0x10)
	struct FMulticastInlineDelegate EventOnItemUnhovered; // 0x2b0(0x10)
	struct FMulticastInlineDelegate EventOnItemPressed; // 0x2c0(0x10)
	struct FMulticastInlineDelegate EventOnItemReleased; // 0x2d0(0x10)
	int32_t ItemCount; // 0x2e0(0x04)
	bool bIsCellCustomization; // 0x2e4(0x01)
	char pad_2E5[0x3]; // 0x2e5(0x03)
	struct TArray<struct UCustomizationOptionThumbnail_C*> ThumbnailWidgetsPool; // 0x2e8(0x10)

	void GetThumbnailWidget(struct UCustomizationOptionThumbnail_C*& Thumbnail); // Function CustomizationItemGrid.CustomizationItemGrid_C.GetThumbnailWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnItemBought(struct FUICustomizationItem& ItemBought); // Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemBought // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnItemEquipped(struct FUICustomizationItem& New Equipped Item); // Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemEquipped // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_InputSourceChanged(bool bIsGamepad); // Function CustomizationItemGrid.CustomizationItemGrid_C.Event_InputSourceChanged // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void TryUpdateEquippedOptionWidget(struct UCustomizationOptionThumbnail_C* New Option); // Function CustomizationItemGrid.CustomizationItemGrid_C.TryUpdateEquippedOptionWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct UWidget* GamepadNav_HandleGridNavigation(enum class EUINavigation Navigation); // Function CustomizationItemGrid.CustomizationItemGrid_C.GamepadNav_HandleGridNavigation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void AddItems(struct TArray<struct FUICustomizationItem>& Items, enum class ECustomizationMenuCategory Category); // Function CustomizationItemGrid.CustomizationItemGrid_C.AddItems // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnItemReleased(struct UCustomizationOptionThumbnail_C* Button); // Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemReleased // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnItemPressed(struct UCustomizationOptionThumbnail_C* Button); // Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemPressed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnItemUnhovered(struct UCustomizationOptionThumbnail_C* Widget); // Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemUnhovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnItemHovered(struct UCustomizationOptionThumbnail_C* Widget); // Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnItemClicked(struct UCustomizationOptionThumbnail_C* Widget); // Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void RefreshItemInfos(struct TArray<struct FUICustomizationItem>& Items); // Function CustomizationItemGrid.CustomizationItemGrid_C.RefreshItemInfos // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ManageEmptyThumbnails(); // Function CustomizationItemGrid.CustomizationItemGrid_C.ManageEmptyThumbnails // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GetLastEmptyItemIndex(int32_t& Index); // Function CustomizationItemGrid.CustomizationItemGrid_C.GetLastEmptyItemIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void SetEquippedOptionWidget(struct UCustomizationOptionThumbnail_C* Widget); // Function CustomizationItemGrid.CustomizationItemGrid_C.SetEquippedOptionWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function CustomizationItemGrid.CustomizationItemGrid_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_CustomizationItemGrid(int32_t EntryPoint); // Function CustomizationItemGrid.CustomizationItemGrid_C.ExecuteUbergraph_CustomizationItemGrid // (Final|UbergraphFunction) // @ game+0x201e6d4
	void EventOnItemReleased__DelegateSignature(struct FUICustomizationItem Item); // Function CustomizationItemGrid.CustomizationItemGrid_C.EventOnItemReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void EventOnItemPressed__DelegateSignature(struct FUICustomizationItem Item); // Function CustomizationItemGrid.CustomizationItemGrid_C.EventOnItemPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void EventOnItemUnhovered__DelegateSignature(struct FUICustomizationItem Item); // Function CustomizationItemGrid.CustomizationItemGrid_C.EventOnItemUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void EventOnItemHovered__DelegateSignature(struct FUICustomizationItem Item); // Function CustomizationItemGrid.CustomizationItemGrid_C.EventOnItemHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void EventOnItemClicked__DelegateSignature(struct FUICustomizationItem Item); // Function CustomizationItemGrid.CustomizationItemGrid_C.EventOnItemClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

