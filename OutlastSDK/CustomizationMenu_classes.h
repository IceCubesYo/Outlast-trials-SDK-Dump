// WidgetBlueprintGeneratedClass CustomizationMenu.CustomizationMenu_C
// Size: 0x3d3 (Inherited: 0x310)
struct UCustomizationMenu_C : URBCharacterCustomizationMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct UTextBlock* CellTitle; // 0x318(0x08)
	struct UTextBlock* CharacterTitle; // 0x320(0x08)
	struct UTextBlock* CustoDescription; // 0x328(0x08)
	struct UVerticalBox* CustoDetails; // 0x330(0x08)
	struct UCustomizationColorPalette_C* CustomizationColorPalette; // 0x338(0x08)
	struct URichTextBlock* CustoName; // 0x340(0x08)
	struct UTextBlock* CustoRarity; // 0x348(0x08)
	struct UTextBlock* EmptyText; // 0x350(0x08)
	struct URBMenuButton_C* ExitButton; // 0x358(0x08)
	struct URBMenuButton_C* HairColorButton; // 0x360(0x08)
	struct ULocalPlayerInfo_v2_C* LocalPlayerInfo_v2; // 0x368(0x08)
	struct UHorizontalBox* pageSpecificButtonContainer; // 0x370(0x08)
	struct UButton* Rotate_Button; // 0x378(0x08)
	struct UImage* tutorialFocusAnchor; // 0x380(0x08)
	struct UImage* tutorialPopupAnchor; // 0x388(0x08)
	struct UTextBlock* TutorialText; // 0x390(0x08)
	struct AMenuCharacter_C* MenuCharacter; // 0x398(0x08)
	bool bIsCellCustomization; // 0x3a0(0x01)
	bool bPendingTutorialRequest; // 0x3a1(0x01)
	char pad_3A2[0x6]; // 0x3a2(0x06)
	struct ACellCustomizationCameraActor_C* CellCustomizationActor; // 0x3a8(0x08)
	struct USimpleActionTooltip_C* RotateToolTip; // 0x3b0(0x08)
	float RotateFactor; // 0x3b8(0x04)
	char pad_3BC[0x4]; // 0x3bc(0x04)
	struct FTimerHandle GamepadNav_RotateTimerHandle; // 0x3c0(0x08)
	struct UCustomizationOptionThumbnail_C* HairHovered; // 0x3c8(0x08)
	bool bIsTutorial; // 0x3d0(0x01)
	bool bIsRelease; // 0x3d1(0x01)
	bool bShownReleaseTutorial; // 0x3d2(0x01)

	void UpdateHairColorNavigation(); // Function CustomizationMenu.CustomizationMenu_C.UpdateHairColorNavigation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void TryStartNextMenuTutorial(); // Function CustomizationMenu.CustomizationMenu_C.TryStartNextMenuTutorial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateFTUESpecificElements(); // Function CustomizationMenu.CustomizationMenu_C.UpdateFTUESpecificElements // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateListScrollBehaviour(bool Index); // Function CustomizationMenu.CustomizationMenu_C.UpdateListScrollBehaviour // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdatePageSpecificButtons(); // Function CustomizationMenu.CustomizationMenu_C.UpdatePageSpecificButtons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GamepadNav_TryToggleHairPalette(); // Function CustomizationMenu.CustomizationMenu_C.GamepadNav_TryToggleHairPalette // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void TransmitFocusToCustoContent(); // Function CustomizationMenu.CustomizationMenu_C.TransmitFocusToCustoContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function CustomizationMenu.CustomizationMenu_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void CreateRotateTooltip(); // Function CustomizationMenu.CustomizationMenu_C.CreateRotateTooltip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreviewCosts(struct FUICustomizationItem Custo Item); // Function CustomizationMenu.CustomizationMenu_C.PreviewCosts // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateCustoDetails(struct FUICustomizationItem& Custo Item); // Function CustomizationMenu.CustomizationMenu_C.UpdateCustoDetails // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetupForCellCustomization(bool bNewIsCellCustomization); // Function CustomizationMenu.CustomizationMenu_C.SetupForCellCustomization // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetupForTutorial(); // Function CustomizationMenu.CustomizationMenu_C.SetupForTutorial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateNavigation(bool CanExitMenu); // Function CustomizationMenu.CustomizationMenu_C.UpdateNavigation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct URBMenuButton_C* Button); // Function CustomizationMenu.CustomizationMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__Rotate_Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature(); // Function CustomizationMenu.CustomizationMenu_C.BndEvt__Rotate_Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__Rotate_Button_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature(); // Function CustomizationMenu.CustomizationMenu_C.BndEvt__Rotate_Button_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Initialize(bool isTutorial, struct AMenuCharacter_C* MenuCharacter, struct ACellCustomizationCameraActor_C* CellCustomization); // Function CustomizationMenu.CustomizationMenu_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Destruct(); // Function CustomizationMenu.CustomizationMenu_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function CustomizationMenu.CustomizationMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnNavigationChangedEvent_Event_1(bool CanExitMenu); // Function CustomizationMenu.CustomizationMenu_C.OnNavigationChangedEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnItemPreviewed(struct FUICustomizationItem CustoItem); // Function CustomizationMenu.CustomizationMenu_C.OnItemPreviewed // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnStoppedPreview(); // Function CustomizationMenu.CustomizationMenu_C.OnStoppedPreview // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdatePaletteDisplay(bool ShouldShowPalette); // Function CustomizationMenu.CustomizationMenu_C.UpdatePaletteDisplay // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void HairColorClicked(struct FRBHairColorOption newHairColor); // Function CustomizationMenu.CustomizationMenu_C.HairColorClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnHairColorHovered(struct FRBHairColorOption HoveredHairColor); // Function CustomizationMenu.CustomizationMenu_C.OnHairColorHovered // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__CustomizationMenu_Rotate_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function CustomizationMenu.CustomizationMenu_C.BndEvt__CustomizationMenu_Rotate_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__CustomizationMenu_Rotate_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function CustomizationMenu.CustomizationMenu_C.BndEvt__CustomizationMenu_Rotate_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void GamepadNav_RotateCharacter(); // Function CustomizationMenu.CustomizationMenu_C.GamepadNav_RotateCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GamepadNav_StartRotation(float RotateFactor); // Function CustomizationMenu.CustomizationMenu_C.GamepadNav_StartRotation // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GamepadNav_StopRotation(); // Function CustomizationMenu.CustomizationMenu_C.GamepadNav_StopRotation // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnCategoryChangeRequested(); // Function CustomizationMenu.CustomizationMenu_C.OnCategoryChangeRequested // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GamepadNav_ToggleHairPalette(); // Function CustomizationMenu.CustomizationMenu_C.GamepadNav_ToggleHairPalette // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__CustomizationMenu_ColorPaletteButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(struct URBMenuButton_C* Button); // Function CustomizationMenu.CustomizationMenu_C.BndEvt__CustomizationMenu_ColorPaletteButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Event_InputSourceChanged(bool bIsGamepad); // Function CustomizationMenu.CustomizationMenu_C.Event_InputSourceChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__CustomizationMenu_CustomizationContent_K2Node_ComponentBoundEvent_8_OnItemEquippedEvent__DelegateSignature(struct FUICustomizationItem Item); // Function CustomizationMenu.CustomizationMenu_C.BndEvt__CustomizationMenu_CustomizationContent_K2Node_ComponentBoundEvent_8_OnItemEquippedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function CustomizationMenu.CustomizationMenu_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnMenuTutorialSeen(); // Function CustomizationMenu.CustomizationMenu_C.Event_OnMenuTutorialSeen // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_SetupPostRelease(); // Function CustomizationMenu.CustomizationMenu_C.Event_SetupPostRelease // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_MenuCancel_Pressed(); // Function CustomizationMenu.CustomizationMenu_C.Event_MenuCancel_Pressed // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void SetupPostRelease(); // Function CustomizationMenu.CustomizationMenu_C.SetupPostRelease // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__CustomizationMenu_CustomizationContent_K2Node_ComponentBoundEvent_1_OnItemsAdded__DelegateSignature(int32_t amount); // Function CustomizationMenu.CustomizationMenu_C.BndEvt__CustomizationMenu_CustomizationContent_K2Node_ComponentBoundEvent_1_OnItemsAdded__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ToggleCellCustomization(); // Function CustomizationMenu.CustomizationMenu_C.ToggleCellCustomization // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_CustomizationMenu(int32_t EntryPoint); // Function CustomizationMenu.CustomizationMenu_C.ExecuteUbergraph_CustomizationMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

