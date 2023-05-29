// WidgetBlueprintGeneratedClass CustomizationContentWidget_V2.CustomizationContentWidget_V2_C
// Size: 0x569 (Inherited: 0x448)
struct UCustomizationContentWidget_V2_C : URBCharacterCustomizationContent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x448(0x08)
	struct UWidgetAnimation* FadeOutContent; // 0x450(0x08)
	struct UImage* BackgroundImage; // 0x458(0x08)
	struct UVerticalBox* Content; // 0x460(0x08)
	struct UCustomizationCategories_V2_C* CustomizationCategories; // 0x468(0x08)
	struct UCustomizationItemGrid_C* CustomizationItemGrid; // 0x470(0x08)
	struct ULoadingVideoWidget_C* LoadingVideoWidget; // 0x478(0x08)
	struct UCategoryTitle_C* pagetitle; // 0x480(0x08)
	struct AMenuCharacter_C* MenuCharacter; // 0x488(0x08)
	float PreviousXMousePos; // 0x490(0x04)
	bool isShowingItems; // 0x494(0x01)
	char pad_495[0x3]; // 0x495(0x03)
	struct AActor* NPCActor; // 0x498(0x08)
	struct TArray<struct UUserWidget*> actionButtons; // 0x4a0(0x10)
	enum class ECustomizationMenuCategory WantedCategory; // 0x4b0(0x01)
	bool bIsCellCustomization; // 0x4b1(0x01)
	char pad_4B2[0x6]; // 0x4b2(0x06)
	struct ACellCustomizationCameraActor_C* CellCustomizationActor; // 0x4b8(0x08)
	struct FMulticastInlineDelegate OnItemPreviewed; // 0x4c0(0x10)
	struct FMulticastInlineDelegate OnItemHoveredEvent; // 0x4d0(0x10)
	struct FMulticastInlineDelegate OnStoppedPreview; // 0x4e0(0x10)
	struct FMulticastInlineDelegate UpdatePaletteDisplay; // 0x4f0(0x10)
	struct FMulticastInlineDelegate OnCategoryChangeRequested; // 0x500(0x10)
	struct FUICustomizationItem InteractedItem; // 0x510(0x30)
	struct FMulticastInlineDelegate OnItemEquippedEvent; // 0x540(0x10)
	float PreviousYMousePos; // 0x550(0x04)
	char pad_554[0x4]; // 0x554(0x04)
	struct FMulticastInlineDelegate OnItemsAdded; // 0x558(0x10)
	bool bLeftInitialCategory; // 0x568(0x01)

	void Event_ItemBought(struct FUICustomizationItem& Item); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_ItemBought // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetMenuCharacterCusto(struct FRBPlayerCustomizationInfo Custo); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.SetMenuCharacterCusto // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void NotifyMenuCharacterCategoryClicked(enum class ECustomizationMenuCategory Category); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.NotifyMenuCharacterCategoryClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void RefreshBoughtItem(); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.RefreshBoughtItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void TransmitFocusToCustoOption(); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.TransmitFocusToCustoOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void CycleCategories(bool CycleRight); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.CycleCategories // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GetCellCustomizationActor(struct ACellCustomizationCameraActor_C*& NewParam); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.GetCellCustomizationActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void PreviewCellItem(enum class ECustomizationMenuCategory Category, struct URBPlayerCellItemDefinition* ItemDefinition); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.PreviewCellItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateCategories(); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.UpdateCategories // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void CycleFocus(); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.CycleFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_ItemEquipped(struct FUICustomizationItem& Item); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_ItemEquipped // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PlayPreviewVoiceline(struct URBVoiceCustomizationOption* VoiceOption); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.PlayPreviewVoiceline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void AddCategoriesItems(); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.AddCategoriesItems // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void AddCustomizationItems(struct TArray<struct FUICustomizationItem>& Items); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.AddCustomizationItems // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ChangeCategory(enum class ECustomizationMenuCategory custoCategory); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.ChangeCategory // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ResetPreview(); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.ResetPreview // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GetPageSpecificButtons(struct TArray<struct UUserWidget*>& outButtons); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.GetPageSpecificButtons // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnCategoryClicked(enum class ECustomizationMenuCategory custoCategory); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnCategoryClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnItemUnhovered(struct FUICustomizationItem CustoItem); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnItemUnhovered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnItemHovered(struct FUICustomizationItem CustoItem); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnItemHovered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Finished_21144A754E101553B7E45DA67E7780FE(); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Finished_21144A754E101553B7E45DA67E7780FE // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void RotateViewer(); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.RotateViewer // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Initialize(enum class EMetaNPCType ShopType, bool isTutorial, struct AMenuCharacter_C* _MenuCharacter, struct AActor* viewerReturnTarget, struct ACellCustomizationCameraActor_C* CellCustomizationActor); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void RotateButtonPressed(); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.RotateButtonPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void RotateButtonReleased(); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.RotateButtonReleased // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnTabUnselected(); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_OnTabUnselected // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_LoadingStarted(); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_LoadingStarted // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnTabSelected(); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_OnTabSelected // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_AddCustomizationItems(struct TArray<struct FUICustomizationItem>& Items); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_AddCustomizationItems // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x201e6d4
	void Event OnItemClicked(struct FUICustomizationItem Item); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event OnItemClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Destruct(); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void EventOnItemPressed_Event_1(struct FUICustomizationItem Item); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.EventOnItemPressed_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void EventOnItemReleased_Event_1(struct FUICustomizationItem Item); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.EventOnItemReleased_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void StartTransition(); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.StartTransition // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_PlayerCustomizationUpdated(); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_PlayerCustomizationUpdated // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnParentFocused(); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_OnParentFocused // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnChangeFocusRequested(); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnChangeFocusRequested // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_RefreshItemInfos(struct TArray<struct FUICustomizationItem>& Items); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_RefreshItemInfos // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x201e6d4
	void Event_CycleFocus(struct URBMenuButton_C* Button); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_CycleFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void CycleCategoriesRight(); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.CycleCategoriesRight // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void CycleCategoriesLeft(); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.CycleCategoriesLeft // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnParentPopped(); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_OnParentPopped // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_CustomizationContentWidget_V2(int32_t EntryPoint); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.ExecuteUbergraph_CustomizationContentWidget_V2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
	void OnItemHoveredEvent__DelegateSignature(struct FUICustomizationItem CustoItem); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnItemHoveredEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnItemsAdded__DelegateSignature(int32_t amount); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnItemsAdded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnItemEquippedEvent__DelegateSignature(struct FUICustomizationItem Item); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnItemEquippedEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnCategoryChangeRequested__DelegateSignature(); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnCategoryChangeRequested__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdatePaletteDisplay__DelegateSignature(bool ShouldShowPalette); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.UpdatePaletteDisplay__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnStoppedPreview__DelegateSignature(); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnStoppedPreview__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnItemPreviewed__DelegateSignature(struct FUICustomizationItem Custo Item); // Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnItemPreviewed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

