// Class CommonUI.AnalogSlider
// Size: 0x518 (Inherited: 0x4f8)
struct UAnalogSlider : USlider {
	struct FMulticastInlineDelegate OnAnalogCapture; // 0x4f8(0x10)
	char pad_508[0x10]; // 0x508(0x10)
};

// Class CommonUI.CommonActionHandlerInterface
// Size: 0x28 (Inherited: 0x28)
struct UCommonActionHandlerInterface : UInterface {
};

// Class CommonUI.CommonActionWidget
// Size: 0x320 (Inherited: 0x108)
struct UCommonActionWidget : UWidget {
	struct FMulticastInlineDelegate OnInputMethodChanged; // 0x108(0x10)
	struct FSlateBrush ProgressMaterialBrush; // 0x118(0x88)
	struct FName ProgressMaterialParam; // 0x1a0(0x08)
	struct FSlateBrush IconRimBrush; // 0x1a8(0x88)
	struct TArray<struct FDataTableRowHandle> InputActions; // 0x230(0x10)
	char pad_240[0x8]; // 0x240(0x08)
	struct UMaterialInstanceDynamic* ProgressDynamicMaterial; // 0x248(0x08)
	char pad_250[0xd0]; // 0x250(0xd0)

	void SetInputActions(struct TArray<struct FDataTableRowHandle> NewInputActions); // Function CommonUI.CommonActionWidget.SetInputActions // (Final|Native|Public|BlueprintCallable) // @ game+0x16a8954
	void SetInputAction(struct FDataTableRowHandle InputActionRow); // Function CommonUI.CommonActionWidget.SetInputAction // (Final|Native|Public|BlueprintCallable) // @ game+0x16a87b4
	void SetIconRimBrush(struct FSlateBrush InIconRimBrush); // Function CommonUI.CommonActionWidget.SetIconRimBrush // (Final|Native|Public|BlueprintCallable) // @ game+0x16a86fc
	void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // DelegateFunction CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x201e6d4
	bool IsHeldAction(); // Function CommonUI.CommonActionWidget.IsHeldAction // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a8218
	struct FSlateBrush GetIcon(); // Function CommonUI.CommonActionWidget.GetIcon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a7a90
	struct FText GetDisplayText(); // Function CommonUI.CommonActionWidget.GetDisplayText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a79e8
};

// Class CommonUI.CommonUserWidget
// Size: 0x288 (Inherited: 0x260)
struct UCommonUserWidget : UUserWidget {
	bool bConsumePointerInput; // 0x260(0x01)
	char pad_261[0x27]; // 0x261(0x27)

	void SetConsumePointerInput(bool bInConsumePointerInput); // Function CommonUI.CommonUserWidget.SetConsumePointerInput // (Final|Native|Public|BlueprintCallable) // @ game+0x16b2c84
};

// Class CommonUI.CommonActivatableWidget
// Size: 0x320 (Inherited: 0x288)
struct UCommonActivatableWidget : UCommonUserWidget {
	bool bAutoActivate; // 0x288(0x01)
	bool bIsBackHandler; // 0x289(0x01)
	bool bSupportsActivationFocus; // 0x28a(0x01)
	bool bIsModal; // 0x28b(0x01)
	bool bAutoRestoreFocus; // 0x28c(0x01)
	bool bSetVisibilityOnActivated; // 0x28d(0x01)
	enum class ESlateVisibility ActivatedVisibility; // 0x28e(0x01)
	bool bSetVisibilityOnDeactivated; // 0x28f(0x01)
	enum class ESlateVisibility DeactivatedVisibility; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct FMulticastInlineDelegate BP_OnWidgetActivated; // 0x298(0x10)
	struct FMulticastInlineDelegate BP_OnWidgetDeactivated; // 0x2a8(0x10)
	bool bIsActive; // 0x2b8(0x01)
	char pad_2B9[0x67]; // 0x2b9(0x67)

	bool IsActivated(); // Function CommonUI.CommonActivatableWidget.IsActivated // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a8200
	void DeactivateWidget(); // Function CommonUI.CommonActivatableWidget.DeactivateWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x16a7510
	bool BP_OnHandleBackAction(); // Function CommonUI.CommonActivatableWidget.BP_OnHandleBackAction // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void BP_OnDeactivated(); // Function CommonUI.CommonActivatableWidget.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void BP_OnActivated(); // Function CommonUI.CommonActivatableWidget.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	struct UWidget* BP_GetDesiredFocusTarget(); // Function CommonUI.CommonActivatableWidget.BP_GetDesiredFocusTarget // (Event|Protected|BlueprintEvent|Const) // @ game+0x201e6d4
	void ActivateWidget(); // Function CommonUI.CommonActivatableWidget.ActivateWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x16a7420
};

// Class CommonUI.CommonActivatableWidgetContainerBase
// Size: 0x208 (Inherited: 0x108)
struct UCommonActivatableWidgetContainerBase : UWidget {
	enum class ECommonSwitcherTransition TransitionType; // 0x108(0x01)
	enum class ETransitionCurve TransitionCurveType; // 0x109(0x01)
	char pad_10A[0x2]; // 0x10a(0x02)
	float TransitionDuration; // 0x10c(0x04)
	struct TArray<struct UCommonActivatableWidget*> WidgetList; // 0x110(0x10)
	struct UCommonActivatableWidget* DisplayedWidget; // 0x120(0x08)
	struct FUserWidgetPool GeneratedWidgetsPool; // 0x128(0x80)
	char pad_1A8[0x60]; // 0x1a8(0x60)

	void RemoveWidget(struct UCommonActivatableWidget* WidgetToRemove); // Function CommonUI.CommonActivatableWidgetContainerBase.RemoveWidget // (Final|Native|Private|BlueprintCallable) // @ game+0x16a843c
	struct UCommonActivatableWidget* GetActiveWidget(); // Function CommonUI.CommonActivatableWidgetContainerBase.GetActiveWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a75bc
	void ClearWidgets(); // Function CommonUI.CommonActivatableWidgetContainerBase.ClearWidgets // (Final|Native|Public|BlueprintCallable) // @ game+0x16a74f8
	struct UCommonActivatableWidget* BP_AddWidget(struct UCommonActivatableWidget* ActivatableWidgetClass); // Function CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidget // (Final|Native|Private|BlueprintCallable) // @ game+0x16a7434
};

// Class CommonUI.CommonActivatableWidgetStack
// Size: 0x218 (Inherited: 0x208)
struct UCommonActivatableWidgetStack : UCommonActivatableWidgetContainerBase {
	struct UCommonActivatableWidget* RootContentWidgetClass; // 0x208(0x08)
	struct UCommonActivatableWidget* RootContentWidget; // 0x210(0x08)
};

// Class CommonUI.CommonActivatableWidgetQueue
// Size: 0x208 (Inherited: 0x208)
struct UCommonActivatableWidgetQueue : UCommonActivatableWidgetContainerBase {
};

// Class CommonUI.CommonAnimatedSwitcher
// Size: 0x190 (Inherited: 0x138)
struct UCommonAnimatedSwitcher : UWidgetSwitcher {
	char pad_138[0x18]; // 0x138(0x18)
	enum class ECommonSwitcherTransition TransitionType; // 0x150(0x01)
	enum class ETransitionCurve TransitionCurveType; // 0x151(0x01)
	char pad_152[0x2]; // 0x152(0x02)
	float TransitionDuration; // 0x154(0x04)
	char pad_158[0x38]; // 0x158(0x38)

	void SetDisableTransitionAnimation(bool bDisableAnimation); // Function CommonUI.CommonAnimatedSwitcher.SetDisableTransitionAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0x16a8554
	bool HasWidgets(); // Function CommonUI.CommonAnimatedSwitcher.HasWidgets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a81e4
	void ActivatePreviousWidget(bool bCanWrap); // Function CommonUI.CommonAnimatedSwitcher.ActivatePreviousWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x16a7380
	void ActivateNextWidget(bool bCanWrap); // Function CommonUI.CommonAnimatedSwitcher.ActivateNextWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x16a72e0
};

// Class CommonUI.CommonActivatableWidgetSwitcher
// Size: 0x190 (Inherited: 0x190)
struct UCommonActivatableWidgetSwitcher : UCommonAnimatedSwitcher {
};

// Class CommonUI.CommonBorderStyle
// Size: 0xb0 (Inherited: 0x28)
struct UCommonBorderStyle : UObject {
	struct FSlateBrush Background; // 0x28(0x88)

	void GetBackgroundBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonBorderStyle.GetBackgroundBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a75e0
};

// Class CommonUI.CommonBorder
// Size: 0x290 (Inherited: 0x270)
struct UCommonBorder : UBorder {
	struct UCommonBorderStyle* Style; // 0x270(0x08)
	bool bReducePaddingBySafezone; // 0x278(0x01)
	char pad_279[0x3]; // 0x279(0x03)
	struct FMargin MinimumPadding; // 0x27c(0x10)
	char pad_28C[0x4]; // 0x28c(0x04)

	void SetStyle(struct UCommonBorderStyle* InStyle); // Function CommonUI.CommonBorder.SetStyle // (Final|Native|Public|BlueprintCallable) // @ game+0x16a91f0
};

// Class CommonUI.CommonBoundActionBar
// Size: 0x1e8 (Inherited: 0x1d8)
struct UCommonBoundActionBar : UDynamicEntryBoxBase {
	struct UCommonBoundActionButton* ActionButtonClass; // 0x1d8(0x08)
	bool bDisplayOwningPlayerActionsOnly; // 0x1e0(0x01)
	char pad_1E1[0x7]; // 0x1e1(0x07)

	void SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions); // Function CommonUI.CommonBoundActionBar.SetDisplayOwningPlayerActionsOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x16a85d4
};

// Class CommonUI.CommonButtonBase
// Size: 0xba0 (Inherited: 0x288)
struct UCommonButtonBase : UCommonUserWidget {
	int32_t MinWidth; // 0x288(0x04)
	int32_t MinHeight; // 0x28c(0x04)
	struct UCommonButtonStyle* Style; // 0x290(0x08)
	bool bHideInputAction; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct FSlateSound PressedSlateSoundOverride; // 0x2a0(0x18)
	struct FSlateSound HoveredSlateSoundOverride; // 0x2b8(0x18)
	char bApplyAlphaOnDisable : 1; // 0x2d0(0x01)
	char bSelectable : 1; // 0x2d0(0x01)
	char bShouldSelectUponReceivingFocus : 1; // 0x2d0(0x01)
	char bInteractableWhenSelected : 1; // 0x2d0(0x01)
	char bToggleable : 1; // 0x2d0(0x01)
	char bDisplayInputActionWhenNotInteractable : 1; // 0x2d0(0x01)
	char bHideInputActionWithKeyboard : 1; // 0x2d0(0x01)
	char bShouldUseFallbackDefaultInputAction : 1; // 0x2d0(0x01)
	char pad_2D1[0x1]; // 0x2d1(0x01)
	enum class EButtonClickMethod ClickMethod; // 0x2d2(0x01)
	enum class EButtonTouchMethod TouchMethod; // 0x2d3(0x01)
	enum class EButtonPressMethod PressMethod; // 0x2d4(0x01)
	char pad_2D5[0x3]; // 0x2d5(0x03)
	int32_t InputPriority; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct FDataTableRowHandle TriggeringInputAction; // 0x2e0(0x10)
	char pad_2F0[0x10]; // 0x2f0(0x10)
	struct FMulticastInlineDelegate OnSelectedChangedBase; // 0x300(0x10)
	struct FMulticastInlineDelegate OnButtonBaseClicked; // 0x310(0x10)
	struct FMulticastInlineDelegate OnButtonBaseDoubleClicked; // 0x320(0x10)
	struct FMulticastInlineDelegate OnButtonBaseHovered; // 0x330(0x10)
	struct FMulticastInlineDelegate OnButtonBaseUnhovered; // 0x340(0x10)
	char pad_350[0x4]; // 0x350(0x04)
	bool bIsPersistentBinding; // 0x354(0x01)
	enum class ECommonInputMode InputModeOverride; // 0x355(0x01)
	char pad_356[0x32]; // 0x356(0x32)
	struct UMaterialInstanceDynamic* SingleMaterialStyleMID; // 0x388(0x08)
	struct FButtonStyle NormalStyle; // 0x390(0x278)
	struct FButtonStyle SelectedStyle; // 0x608(0x278)
	struct FButtonStyle DisabledStyle; // 0x880(0x278)
	char bStopDoubleClickPropagation : 1; // 0xaf8(0x01)
	char pad_AF8_1 : 7; // 0xaf8(0x01)
	char pad_AF9[0x9f]; // 0xaf9(0x9f)
	struct UCommonActionWidget* InputActionWidget; // 0xb98(0x08)

	void StopDoubleClickPropagation(); // Function CommonUI.CommonButtonBase.StopDoubleClickPropagation // (Final|Native|Protected|BlueprintCallable) // @ game+0x16a9570
	void SetTriggeringInputAction(struct FDataTableRowHandle& InputActionRow); // Function CommonUI.CommonButtonBase.SetTriggeringInputAction // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x16a9498
	void SetTriggeredInputAction(struct FDataTableRowHandle& InputActionRow); // Function CommonUI.CommonButtonBase.SetTriggeredInputAction // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x16a93ec
	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // Function CommonUI.CommonButtonBase.SetTouchMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x16a936c
	void SetStyle(struct UCommonButtonStyle* InStyle); // Function CommonUI.CommonButtonBase.SetStyle // (Final|Native|Public|BlueprintCallable) // @ game+0x16a927c
	void SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction); // Function CommonUI.CommonButtonBase.SetShouldUseFallbackDefaultInputAction // (Final|Native|Public|BlueprintCallable) // @ game+0x16a9158
	void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus); // Function CommonUI.CommonButtonBase.SetShouldSelectUponReceivingFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x16a90cc
	void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast); // Function CommonUI.CommonButtonBase.SetSelectedInternal // (Final|Native|Protected|BlueprintCallable) // @ game+0x16a8fc0
	void SetPressMethod(enum class EButtonPressMethod InPressMethod); // Function CommonUI.CommonButtonBase.SetPressMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x16a8e8c
	void SetPressedSoundOverride(struct USoundBase* Sound); // Function CommonUI.CommonButtonBase.SetPressedSoundOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x16a8f28
	void SetMinDimensions(int32_t InMinWidth, int32_t InMinHeight); // Function CommonUI.CommonButtonBase.SetMinDimensions // (Final|Native|Public|BlueprintCallable) // @ game+0x16a8dc0
	void SetIsToggleable(bool bInIsToggleable); // Function CommonUI.CommonButtonBase.SetIsToggleable // (Final|Native|Public|BlueprintCallable) // @ game+0x16a8d40
	void SetIsSelected(bool InSelected, bool bGiveClickFeedback); // Function CommonUI.CommonButtonBase.SetIsSelected // (Final|Native|Public|BlueprintCallable) // @ game+0x16a8c7c
	void SetIsSelectable(bool bInIsSelectable); // Function CommonUI.CommonButtonBase.SetIsSelectable // (Final|Native|Public|BlueprintCallable) // @ game+0x16a8bfc
	void SetIsInteractionEnabled(bool bInIsInteractionEnabled); // Function CommonUI.CommonButtonBase.SetIsInteractionEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x16a8b7c
	void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected); // Function CommonUI.CommonButtonBase.SetIsInteractableWhenSelected // (Final|Native|Public|BlueprintCallable) // @ game+0x16a8afc
	void SetIsFocusable(bool bInIsFocusable); // Function CommonUI.CommonButtonBase.SetIsFocusable // (Final|Native|Public|BlueprintCallable) // @ game+0x16a8a3c
	void SetInputActionProgressMaterial(struct FSlateBrush& InProgressMaterialBrush, struct FName& InProgressMaterialParam); // Function CommonUI.CommonButtonBase.SetInputActionProgressMaterial // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x16a8844
	void SetHoveredSoundOverride(struct USoundBase* Sound); // Function CommonUI.CommonButtonBase.SetHoveredSoundOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x16a8664
	void SetClickMethod(enum class EButtonClickMethod InClickMethod); // Function CommonUI.CommonButtonBase.SetClickMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x16a84b8
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // Function CommonUI.CommonButtonBase.OnTriggeredInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x201e6d4
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType); // Function CommonUI.CommonButtonBase.OnInputMethodChanged // (Native|Protected) // @ game+0x16a83b8
	void OnCurrentTextStyleChanged(); // Function CommonUI.CommonButtonBase.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void OnActionProgress(float HeldPercent); // Function CommonUI.CommonButtonBase.OnActionProgress // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void OnActionComplete(); // Function CommonUI.CommonButtonBase.OnActionComplete // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void NativeOnActionProgress(float HeldPercent); // Function CommonUI.CommonButtonBase.NativeOnActionProgress // (Native|Protected) // @ game+0x16a8330
	void NativeOnActionComplete(); // Function CommonUI.CommonButtonBase.NativeOnActionComplete // (Native|Protected) // @ game+0x16a8318
	bool IsPressed(); // Function CommonUI.CommonButtonBase.IsPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a82b8
	bool IsInteractionEnabled(); // Function CommonUI.CommonButtonBase.IsInteractionEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a8294
	void HandleTriggeringActionCommited(bool& bPassThrough); // Function CommonUI.CommonButtonBase.HandleTriggeringActionCommited // (Native|Protected|HasOutParms) // @ game+0x16a8158
	void HandleFocusReceived(); // Function CommonUI.CommonButtonBase.HandleFocusReceived // (Native|Protected) // @ game+0x16a8140
	void HandleButtonReleased(); // Function CommonUI.CommonButtonBase.HandleButtonReleased // (Final|Native|Protected) // @ game+0x16a812c
	void HandleButtonPressed(); // Function CommonUI.CommonButtonBase.HandleButtonPressed // (Final|Native|Protected) // @ game+0x16a8118
	void HandleButtonClicked(); // Function CommonUI.CommonButtonBase.HandleButtonClicked // (Final|Native|Protected) // @ game+0x16a8104
	struct UCommonButtonStyle* GetStyle(); // Function CommonUI.CommonButtonBase.GetStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a80e0
	struct UMaterialInstanceDynamic* GetSingleMaterialStyleMID(); // Function CommonUI.CommonButtonBase.GetSingleMaterialStyleMID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a80c8
	bool GetShouldSelectUponReceivingFocus(); // Function CommonUI.CommonButtonBase.GetShouldSelectUponReceivingFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a80ac
	bool GetSelected(); // Function CommonUI.CommonButtonBase.GetSelected // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a7e5c
	bool GetIsFocusable(); // Function CommonUI.CommonButtonBase.GetIsFocusable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a7b6c
	bool GetInputAction(struct FDataTableRowHandle& InputActionRow); // Function CommonUI.CommonButtonBase.GetInputAction // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a7ad4
	struct UCommonTextStyle* GetCurrentTextStyleClass(); // Function CommonUI.CommonButtonBase.GetCurrentTextStyleClass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a7868
	struct UCommonTextStyle* GetCurrentTextStyle(); // Function CommonUI.CommonButtonBase.GetCurrentTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a7844
	void GetCurrentCustomPadding(struct FMargin& OutCustomPadding); // Function CommonUI.CommonButtonBase.GetCurrentCustomPadding // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a77a8
	void GetCurrentButtonPadding(struct FMargin& OutButtonPadding); // Function CommonUI.CommonButtonBase.GetCurrentButtonPadding // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a770c
	void DisableButtonWithReason(struct FText& DisabledReason); // Function CommonUI.CommonButtonBase.DisableButtonWithReason // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x16a7524
	void ClearSelection(); // Function CommonUI.CommonButtonBase.ClearSelection // (Final|Native|Public|BlueprintCallable) // @ game+0x16a74dc
	void BP_OnUnhovered(); // Function CommonUI.CommonButtonBase.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void BP_OnSelected(); // Function CommonUI.CommonButtonBase.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void BP_OnHovered(); // Function CommonUI.CommonButtonBase.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void BP_OnEnabled(); // Function CommonUI.CommonButtonBase.BP_OnEnabled // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void BP_OnDoubleClicked(); // Function CommonUI.CommonButtonBase.BP_OnDoubleClicked // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void BP_OnDisabled(); // Function CommonUI.CommonButtonBase.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void BP_OnDeselected(); // Function CommonUI.CommonButtonBase.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void BP_OnClicked(); // Function CommonUI.CommonButtonBase.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
};

// Class CommonUI.CommonBoundActionButton
// Size: 0xbb0 (Inherited: 0xba0)
struct UCommonBoundActionButton : UCommonButtonBase {
	struct UCommonTextBlock* Text_ActionName; // 0xba0(0x08)
	char pad_BA8[0x8]; // 0xba8(0x08)

	void OnUpdateInputAction(); // Function CommonUI.CommonBoundActionButton.OnUpdateInputAction // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
};

// Class CommonUI.CommonButtonStyle
// Size: 0x570 (Inherited: 0x28)
struct UCommonButtonStyle : UObject {
	bool bSingleMaterial; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FSlateBrush SingleMaterialBrush; // 0x30(0x88)
	struct FSlateBrush NormalBase; // 0xb8(0x88)
	struct FSlateBrush NormalHovered; // 0x140(0x88)
	struct FSlateBrush NormalPressed; // 0x1c8(0x88)
	struct FSlateBrush SelectedBase; // 0x250(0x88)
	struct FSlateBrush SelectedHovered; // 0x2d8(0x88)
	struct FSlateBrush SelectedPressed; // 0x360(0x88)
	struct FSlateBrush Disabled; // 0x3e8(0x88)
	struct FMargin ButtonPadding; // 0x470(0x10)
	struct FMargin CustomPadding; // 0x480(0x10)
	int32_t MinWidth; // 0x490(0x04)
	int32_t MinHeight; // 0x494(0x04)
	struct UCommonTextStyle* NormalTextStyle; // 0x498(0x08)
	struct UCommonTextStyle* NormalHoveredTextStyle; // 0x4a0(0x08)
	struct UCommonTextStyle* SelectedTextStyle; // 0x4a8(0x08)
	struct UCommonTextStyle* SelectedHoveredTextStyle; // 0x4b0(0x08)
	struct UCommonTextStyle* DisabledTextStyle; // 0x4b8(0x08)
	struct FSlateSound PressedSlateSound; // 0x4c0(0x18)
	struct FCommonButtonStyleOptionalSlateSound SelectedPressedSlateSound; // 0x4d8(0x20)
	struct FCommonButtonStyleOptionalSlateSound DisabledPressedSlateSound; // 0x4f8(0x20)
	struct FSlateSound HoveredSlateSound; // 0x518(0x18)
	struct FCommonButtonStyleOptionalSlateSound SelectedHoveredSlateSound; // 0x530(0x20)
	struct FCommonButtonStyleOptionalSlateSound DisabledHoveredSlateSound; // 0x550(0x20)

	struct UCommonTextStyle* GetSelectedTextStyle(); // Function CommonUI.CommonButtonStyle.GetSelectedTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a8088
	void GetSelectedPressedBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetSelectedPressedBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a7fe4
	struct UCommonTextStyle* GetSelectedHoveredTextStyle(); // Function CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a7fc0
	void GetSelectedHoveredBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetSelectedHoveredBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a7f1c
	void GetSelectedBaseBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetSelectedBaseBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a7e78
	struct UCommonTextStyle* GetNormalTextStyle(); // Function CommonUI.CommonButtonStyle.GetNormalTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a7e38
	void GetNormalPressedBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetNormalPressedBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a7d94
	struct UCommonTextStyle* GetNormalHoveredTextStyle(); // Function CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a7d70
	void GetNormalHoveredBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetNormalHoveredBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a7ccc
	void GetNormalBaseBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetNormalBaseBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a7c28
	void GetMaterialBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetMaterialBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a7b88
	struct UCommonTextStyle* GetDisabledTextStyle(); // Function CommonUI.CommonButtonStyle.GetDisabledTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a79c4
	void GetDisabledBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetDisabledBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a7920
	void GetCustomPadding(struct FMargin& OutCustomPadding); // Function CommonUI.CommonButtonStyle.GetCustomPadding // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a7894
	void GetButtonPadding(struct FMargin& OutButtonPadding); // Function CommonUI.CommonButtonStyle.GetButtonPadding // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a7680
};

// Class CommonUI.CommonButtonInternalBase
// Size: 0x498 (Inherited: 0x438)
struct UCommonButtonInternalBase : UButton {
	char pad_438[0x10]; // 0x438(0x10)
	struct FMulticastInlineDelegate OnDoubleClicked; // 0x448(0x10)
	char pad_458[0x10]; // 0x458(0x10)
	int32_t MinWidth; // 0x468(0x04)
	int32_t MinHeight; // 0x46c(0x04)
	bool bButtonEnabled; // 0x470(0x01)
	bool bInteractionEnabled; // 0x471(0x01)
	char pad_472[0x26]; // 0x472(0x26)
};

// Class CommonUI.CommonWidgetGroupBase
// Size: 0x28 (Inherited: 0x28)
struct UCommonWidgetGroupBase : UObject {

	void RemoveWidget(struct UWidget* InWidget); // Function CommonUI.CommonWidgetGroupBase.RemoveWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x16b2988
	void RemoveAll(); // Function CommonUI.CommonWidgetGroupBase.RemoveAll // (Final|Native|Public|BlueprintCallable) // @ game+0x1521c64
	void AddWidget(struct UWidget* InWidget); // Function CommonUI.CommonWidgetGroupBase.AddWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x16b1d34
};

// Class CommonUI.CommonButtonGroupBase
// Size: 0x110 (Inherited: 0x28)
struct UCommonButtonGroupBase : UCommonWidgetGroupBase {
	struct FMulticastInlineDelegate OnSelectedButtonBaseChanged; // 0x28(0x10)
	char pad_38[0x18]; // 0x38(0x18)
	struct FMulticastInlineDelegate OnHoveredButtonBaseChanged; // 0x50(0x10)
	char pad_60[0x18]; // 0x60(0x18)
	struct FMulticastInlineDelegate OnButtonBaseClicked; // 0x78(0x10)
	char pad_88[0x18]; // 0x88(0x18)
	struct FMulticastInlineDelegate OnButtonBaseDoubleClicked; // 0xa0(0x10)
	char pad_B0[0x18]; // 0xb0(0x18)
	struct FMulticastInlineDelegate OnSelectionCleared; // 0xc8(0x10)
	char pad_D8[0x18]; // 0xd8(0x18)
	bool bSelectionRequired; // 0xf0(0x01)
	char pad_F1[0x1f]; // 0xf1(0x1f)

	void SetSelectionRequired(bool bRequireSelection); // Function CommonUI.CommonButtonGroupBase.SetSelectionRequired // (Final|Native|Public|BlueprintCallable) // @ game+0x16ae480
	void SelectPreviousButton(bool bAllowWrap); // Function CommonUI.CommonButtonGroupBase.SelectPreviousButton // (Final|Native|Public|BlueprintCallable) // @ game+0x16ad794
	void SelectNextButton(bool bAllowWrap); // Function CommonUI.CommonButtonGroupBase.SelectNextButton // (Final|Native|Public|BlueprintCallable) // @ game+0x16ad70c
	void SelectButtonAtIndex(int32_t ButtonIndex); // Function CommonUI.CommonButtonGroupBase.SelectButtonAtIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x16ad68c
	void OnSelectionStateChangedBase(struct UCommonButtonBase* BaseButton, bool bIsSelected); // Function CommonUI.CommonButtonGroupBase.OnSelectionStateChangedBase // (Native|Protected) // @ game+0x16ad1d0
	void OnHandleButtonBaseDoubleClicked(struct UCommonButtonBase* BaseButton); // Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseDoubleClicked // (Native|Protected) // @ game+0x16ad138
	void OnHandleButtonBaseClicked(struct UCommonButtonBase* BaseButton); // Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseClicked // (Native|Protected) // @ game+0x16ad0b4
	void OnButtonBaseUnhovered(struct UCommonButtonBase* BaseButton); // Function CommonUI.CommonButtonGroupBase.OnButtonBaseUnhovered // (Native|Protected) // @ game+0x16ad030
	void OnButtonBaseHovered(struct UCommonButtonBase* BaseButton); // Function CommonUI.CommonButtonGroupBase.OnButtonBaseHovered // (Native|Protected) // @ game+0x16acfac
	bool HasAnyButtons(); // Function CommonUI.CommonButtonGroupBase.HasAnyButtons // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16acd90
	int32_t GetSelectedButtonIndex(); // Function CommonUI.CommonButtonGroupBase.GetSelectedButtonIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16ac818
	struct UCommonButtonBase* GetSelectedButtonBase(); // Function CommonUI.CommonButtonGroupBase.GetSelectedButtonBase // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16ac7f0
	int32_t GetHoveredButtonIndex(); // Function CommonUI.CommonButtonGroupBase.GetHoveredButtonIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16ac7b0
	int32_t GetButtonCount(); // Function CommonUI.CommonButtonGroupBase.GetButtonCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16ac768
	struct UCommonButtonBase* GetButtonBaseAtIndex(int32_t Index); // Function CommonUI.CommonButtonGroupBase.GetButtonBaseAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16ac6dc
	int32_t FindButtonIndex(struct UCommonButtonBase* ButtonToFind); // Function CommonUI.CommonButtonGroupBase.FindButtonIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16ac634
	void DeselectAll(); // Function CommonUI.CommonButtonGroupBase.DeselectAll // (Final|Native|Public|BlueprintCallable) // @ game+0x16ac544
};

// Class CommonUI.CommonCustomNavigation
// Size: 0x280 (Inherited: 0x270)
struct UCommonCustomNavigation : UBorder {
	struct FDelegate OnNavigationEvent; // 0x270(0x10)
};

// Class CommonUI.CommonTextBlock
// Size: 0x2d0 (Inherited: 0x2a8)
struct UCommonTextBlock : UTextBlock {
	struct UCommonTextStyle* Style; // 0x2a8(0x08)
	struct UCommonTextScrollStyle* ScrollStyle; // 0x2b0(0x08)
	bool bDisplayAllCaps; // 0x2b8(0x01)
	bool bAutoCollapseWithEmptyText; // 0x2b9(0x01)
	char pad_2BA[0x2]; // 0x2ba(0x02)
	float MobileFontSizeMultiplier; // 0x2bc(0x04)
	char pad_2C0[0x10]; // 0x2c0(0x10)

	void SetWrapTextWidth(int32_t InWrapTextAt); // Function CommonUI.CommonTextBlock.SetWrapTextWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x16b2f44
	void SetTextCase(bool bUseAllCaps); // Function CommonUI.CommonTextBlock.SetTextCase // (Final|Native|Public|BlueprintCallable) // @ game+0x16b2eb4
	void SetStyle(struct UCommonTextStyle* InStyle); // Function CommonUI.CommonTextBlock.SetStyle // (Final|Native|Public|BlueprintCallable) // @ game+0x16b2e28
	void ResetScrollState(); // Function CommonUI.CommonTextBlock.ResetScrollState // (Final|Native|Public|BlueprintCallable) // @ game+0x16b2a54
};

// Class CommonUI.CommonDateTimeTextBlock
// Size: 0x310 (Inherited: 0x2d0)
struct UCommonDateTimeTextBlock : UCommonTextBlock {
	char pad_2D0[0x40]; // 0x2d0(0x40)

	void SetTimespanValue(struct FTimespan InTimespan); // Function CommonUI.CommonDateTimeTextBlock.SetTimespanValue // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x16ae754
	void SetDateTimeValue(struct FDateTime InDateTime, bool bShowAsCountdown, float InRefreshDelay); // Function CommonUI.CommonDateTimeTextBlock.SetDateTimeValue // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x16add50
	void SetCountDownCompletionText(struct FText InCompletionText); // Function CommonUI.CommonDateTimeTextBlock.SetCountDownCompletionText // (Final|Native|Public|BlueprintCallable) // @ game+0x16adbf4
	struct FDateTime GetDateTime(); // Function CommonUI.CommonDateTimeTextBlock.GetDateTime // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x16ac798
};

// Class CommonUI.CommonGameViewportClient
// Size: 0x3c0 (Inherited: 0x380)
struct UCommonGameViewportClient : UGameViewportClient {
	char pad_380[0x40]; // 0x380(0x40)
};

// Class CommonUI.CommonHierarchicalScrollBox
// Size: 0x880 (Inherited: 0x880)
struct UCommonHierarchicalScrollBox : UScrollBox {
};

// Class CommonUI.CommonLazyImage
// Size: 0x2d8 (Inherited: 0x210)
struct UCommonLazyImage : UImage {
	struct FSlateBrush LoadingBackgroundBrush; // 0x210(0x88)
	struct FName MaterialTextureParamName; // 0x298(0x08)
	struct FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x2a0(0x10)
	char pad_2B0[0x28]; // 0x2b0(0x28)

	void SetMaterialTextureParamName(struct FName TextureParamName); // Function CommonUI.CommonLazyImage.SetMaterialTextureParamName // (Final|Native|Public|BlueprintCallable) // @ game+0x16ae25c
	void SetBrushFromLazyTexture(struct TSoftObjectPtr<UTexture2D>& LazyTexture, bool bMatchSize); // Function CommonUI.CommonLazyImage.SetBrushFromLazyTexture // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x16adac0
	void SetBrushFromLazyMaterial(struct TSoftObjectPtr<UMaterialInterface>& LazyMaterial); // Function CommonUI.CommonLazyImage.SetBrushFromLazyMaterial // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x16ad9e4
	void SetBrushFromLazyDisplayAsset(struct TSoftObjectPtr<UObject>& LazyObject, bool bMatchTextureSize); // Function CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x16ad8e0
	bool IsLoading(); // Function CommonUI.CommonLazyImage.IsLoading // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16acf08
};

// Class CommonUI.CommonLazyWidget
// Size: 0x210 (Inherited: 0x108)
struct UCommonLazyWidget : UWidget {
	struct FSlateBrush LoadingBackgroundBrush; // 0x108(0x88)
	struct UUserWidget* Content; // 0x190(0x08)
	char pad_198[0x28]; // 0x198(0x28)
	struct FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x1c0(0x10)
	char pad_1D0[0x40]; // 0x1d0(0x40)

	void SetLazyContent(struct TSoftClassPtr<UObject> SoftWidget); // Function CommonUI.CommonLazyWidget.SetLazyContent // (Final|Native|Public|BlueprintCallable) // @ game+0x16adfe4
	bool IsLoading(); // Function CommonUI.CommonLazyWidget.IsLoading // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16acf38
	struct UUserWidget* GetContent(); // Function CommonUI.CommonLazyWidget.GetContent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16ac780
};

// Class CommonUI.CommonListView
// Size: 0x368 (Inherited: 0x368)
struct UCommonListView : UListView {

	void SetEntrySpacing(float InEntrySpacing); // Function CommonUI.CommonListView.SetEntrySpacing // (Final|Native|Public|BlueprintCallable) // @ game+0x16ade58
};

// Class CommonUI.LoadGuardSlot
// Size: 0x60 (Inherited: 0x38)
struct ULoadGuardSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function CommonUI.LoadGuardSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x16ae7ec
	void SetPadding(struct FMargin InPadding); // Function CommonUI.LoadGuardSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x16ae370
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function CommonUI.LoadGuardSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x16adedc
};

// Class CommonUI.CommonLoadGuard
// Size: 0x230 (Inherited: 0x120)
struct UCommonLoadGuard : UContentWidget {
	struct FSlateBrush LoadingBackgroundBrush; // 0x120(0x88)
	enum class EHorizontalAlignment ThrobberAlignment; // 0x1a8(0x01)
	char pad_1A9[0x3]; // 0x1a9(0x03)
	struct FMargin ThrobberPadding; // 0x1ac(0x10)
	char pad_1BC[0x4]; // 0x1bc(0x04)
	struct FText LoadingText; // 0x1c0(0x18)
	struct UCommonTextStyle* TextStyle; // 0x1d8(0x08)
	struct FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x1e0(0x10)
	struct FSoftObjectPath SpinnerMaterialPath; // 0x1f0(0x18)
	char pad_208[0x28]; // 0x208(0x28)

	void SetLoadingText(struct FText& InLoadingText); // Function CommonUI.CommonLoadGuard.SetLoadingText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x16ae1ac
	void SetIsLoading(bool bInIsLoading); // Function CommonUI.CommonLoadGuard.SetIsLoading // (Final|Native|Public|BlueprintCallable) // @ game+0x16adf5c
	void OnAssetLoaded__DelegateSignature(struct UObject* Object); // DelegateFunction CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature // (Public|Delegate) // @ game+0x201e6d4
	bool IsLoading(); // Function CommonUI.CommonLoadGuard.IsLoading // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16acf68
	void BP_GuardAndLoadAsset(struct TSoftObjectPtr<UObject>& InLazyAsset, struct FDelegate& OnAssetLoaded); // Function CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset // (Final|Native|Private|HasOutParms|BlueprintCallable) // @ game+0x16ac420
};

// Class CommonUI.CommonNumericTextBlock
// Size: 0x370 (Inherited: 0x2d0)
struct UCommonNumericTextBlock : UCommonTextBlock {
	struct FMulticastInlineDelegate OnInterpolationStartedEvent; // 0x2d0(0x10)
	struct FMulticastInlineDelegate OnInterpolationUpdatedEvent; // 0x2e0(0x10)
	struct FMulticastInlineDelegate OnOutroEvent; // 0x2f0(0x10)
	struct FMulticastInlineDelegate OnInterpolationEndedEvent; // 0x300(0x10)
	float CurrentNumericValue; // 0x310(0x04)
	enum class ECommonNumericType NumericType; // 0x314(0x01)
	char pad_315[0x3]; // 0x315(0x03)
	struct FCommonNumberFormattingOptions FormattingSpecification; // 0x318(0x14)
	float EaseOutInterpolationExponent; // 0x32c(0x04)
	float InterpolationUpdateInterval; // 0x330(0x04)
	float PostInterpolationShrinkDuration; // 0x334(0x04)
	bool PerformSizeInterpolation; // 0x338(0x01)
	bool IsPercentage; // 0x339(0x01)
	char pad_33A[0x36]; // 0x33a(0x36)

	void SetNumericType(enum class ECommonNumericType InNumericType); // Function CommonUI.CommonNumericTextBlock.SetNumericType // (Final|Native|Public|BlueprintCallable) // @ game+0x16ae2ec
	void SetCurrentValue(float NewValue); // Function CommonUI.CommonNumericTextBlock.SetCurrentValue // (Final|Native|Public|BlueprintCallable) // @ game+0x16adcb0
	void OnOutro__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock); // DelegateFunction CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x201e6d4
	void OnInterpolationUpdated__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue); // DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationUpdated__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x201e6d4
	void OnInterpolationStarted__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock); // DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationStarted__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x201e6d4
	void OnInterpolationEnded__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted); // DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x201e6d4
	bool IsInterpolatingNumericValue(); // Function CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16aceec
	void InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset); // Function CommonUI.CommonNumericTextBlock.InterpolateToValue // (Final|Native|Public|BlueprintCallable) // @ game+0x16acdac
	float GetTargetValue(); // Function CommonUI.CommonNumericTextBlock.GetTargetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16aca1c
};

// Class CommonUI.CommonPoolableWidgetInterface
// Size: 0x28 (Inherited: 0x28)
struct UCommonPoolableWidgetInterface : UInterface {

	void OnReleaseToPool(); // Function CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool // (Native|Event|Protected|BlueprintEvent) // @ game+0x16ad1bc
	void OnAcquireFromPool(); // Function CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool // (Native|Event|Protected|BlueprintEvent) // @ game+0x16acf98
};

// Class CommonUI.CommonRichTextBlock
// Size: 0x6b0 (Inherited: 0x678)
struct UCommonRichTextBlock : URichTextBlock {
	enum class ERichTextInlineIconDisplayMode InlineIconDisplayMode; // 0x678(0x01)
	bool bTintInlineIcon; // 0x679(0x01)
	char pad_67A[0x6]; // 0x67a(0x06)
	struct UCommonTextStyle* DefaultTextStyleOverrideClass; // 0x680(0x08)
	float MobileTextBlockScale; // 0x688(0x04)
	char pad_68C[0x4]; // 0x68c(0x04)
	struct UCommonTextScrollStyle* ScrollStyle; // 0x690(0x08)
	bool bDisplayAllCaps; // 0x698(0x01)
	char pad_699[0x17]; // 0x699(0x17)
};

// Class CommonUI.CommonRotator
// Size: 0xbf8 (Inherited: 0xba0)
struct UCommonRotator : UCommonButtonBase {
	char pad_BA0[0x10]; // 0xba0(0x10)
	struct FMulticastInlineDelegate OnRotated; // 0xbb0(0x10)
	char pad_BC0[0x18]; // 0xbc0(0x18)
	struct UCommonTextBlock* MyText; // 0xbd8(0x08)
	char pad_BE0[0x18]; // 0xbe0(0x18)

	void ShiftTextRight(); // Function CommonUI.CommonRotator.ShiftTextRight // (Final|Native|Public|BlueprintCallable) // @ game+0x16ae880
	void ShiftTextLeft(); // Function CommonUI.CommonRotator.ShiftTextLeft // (Final|Native|Public|BlueprintCallable) // @ game+0x16ae86c
	void SetSelectedItem(int32_t InValue); // Function CommonUI.CommonRotator.SetSelectedItem // (Native|Public|BlueprintCallable) // @ game+0x16ae3fc
	void PopulateTextLabels(struct TArray<struct FText> Labels); // Function CommonUI.CommonRotator.PopulateTextLabels // (Final|Native|Public|BlueprintCallable) // @ game+0x16ad29c
	struct FText GetSelectedText(); // Function CommonUI.CommonRotator.GetSelectedText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16ac874
	int32_t GetSelectedIndex(); // Function CommonUI.CommonRotator.GetSelectedIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16ac830
	void BP_OnOptionsPopulated(int32_t Count); // Function CommonUI.CommonRotator.BP_OnOptionsPopulated // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void BP_OnOptionSelected(int32_t Index); // Function CommonUI.CommonRotator.BP_OnOptionSelected // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
};

// Class CommonUI.CommonTabListWidgetBase
// Size: 0x358 (Inherited: 0x288)
struct UCommonTabListWidgetBase : UCommonUserWidget {
	struct FMulticastInlineDelegate OnTabSelected; // 0x288(0x10)
	struct FMulticastInlineDelegate OnTabButtonCreation; // 0x298(0x10)
	struct FMulticastInlineDelegate OnTabButtonRemoval; // 0x2a8(0x10)
	struct FDataTableRowHandle NextTabInputActionData; // 0x2b8(0x10)
	struct FDataTableRowHandle PreviousTabInputActionData; // 0x2c8(0x10)
	bool bAutoListenForInput; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	struct TWeakObjectPtr<struct UCommonAnimatedSwitcher> LinkedSwitcher; // 0x2dc(0x08)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct UCommonButtonGroupBase* TabButtonGroup; // 0x2e8(0x08)
	char pad_2F0[0x8]; // 0x2f0(0x08)
	struct TMap<struct FName, struct FCommonRegisteredTabInfo> RegisteredTabsByID; // 0x2f8(0x50)
	char pad_348[0x10]; // 0x348(0x10)

	void SetTabVisibility(struct FName TabNameID, enum class ESlateVisibility NewVisibility); // Function CommonUI.CommonTabListWidgetBase.SetTabVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x16ae690
	void SetTabInteractionEnabled(struct FName TabNameID, bool bEnable); // Function CommonUI.CommonTabListWidgetBase.SetTabInteractionEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x16ae5c8
	void SetTabEnabled(struct FName TabNameID, bool bEnable); // Function CommonUI.CommonTabListWidgetBase.SetTabEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x16ae500
	void SetListeningForInput(bool bShouldListen); // Function CommonUI.CommonTabListWidgetBase.SetListeningForInput // (Native|Public|BlueprintCallable) // @ game+0x16ae128
	void SetLinkedSwitcher(struct UCommonAnimatedSwitcher* CommonSwitcher); // Function CommonUI.CommonTabListWidgetBase.SetLinkedSwitcher // (Native|Public|BlueprintCallable) // @ game+0x16ae0a4
	bool SelectTabByID(struct FName TabNameID, bool bSuppressClickFeedback); // Function CommonUI.CommonTabListWidgetBase.SelectTabByID // (Final|Native|Public|BlueprintCallable) // @ game+0x16ad81c
	bool RemoveTab(struct FName TabNameID); // Function CommonUI.CommonTabListWidgetBase.RemoveTab // (Final|Native|Public|BlueprintCallable) // @ game+0x16ad5fc
	void RemoveAllTabs(); // Function CommonUI.CommonTabListWidgetBase.RemoveAllTabs // (Final|Native|Public|BlueprintCallable) // @ game+0x16ad5e8
	bool RegisterTab(struct FName TabNameID, struct UCommonButtonBase* ButtonWidgetType, struct UWidget* ContentWidget); // Function CommonUI.CommonTabListWidgetBase.RegisterTab // (Final|Native|Public|BlueprintCallable) // @ game+0x16ad384
	void OnTabSelected__DelegateSignature(struct FName TabId); // DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabSelected__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x201e6d4
	void OnTabButtonRemoval__DelegateSignature(struct FName TabId, struct UCommonButtonBase* TabButton); // DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonRemoval__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x201e6d4
	void OnTabButtonCreation__DelegateSignature(struct FName TabId, struct UCommonButtonBase* TabButton); // DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonCreation__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x201e6d4
	void HandleTabRemoval(struct FName TabNameID, struct UCommonButtonBase* TabButton); // Function CommonUI.CommonTabListWidgetBase.HandleTabRemoval // (Native|Event|Protected|BlueprintEvent) // @ game+0x16accc8
	void HandleTabCreation(struct FName TabNameID, struct UCommonButtonBase* TabButton); // Function CommonUI.CommonTabListWidgetBase.HandleTabCreation // (Native|Event|Protected|BlueprintEvent) // @ game+0x16acc00
	void HandleTabButtonSelected(struct UCommonButtonBase* SelectedTabButton, int32_t ButtonIndex); // Function CommonUI.CommonTabListWidgetBase.HandleTabButtonSelected // (Final|Native|Protected) // @ game+0x16acb3c
	void HandlePreviousTabInputAction(bool& bPassThrough); // Function CommonUI.CommonTabListWidgetBase.HandlePreviousTabInputAction // (Final|Native|Protected|HasOutParms) // @ game+0x16acac4
	void HandlePreLinkedSwitcherChanged_BP(); // Function CommonUI.CommonTabListWidgetBase.HandlePreLinkedSwitcherChanged_BP // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void HandlePostLinkedSwitcherChanged_BP(); // Function CommonUI.CommonTabListWidgetBase.HandlePostLinkedSwitcherChanged_BP // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void HandleNextTabInputAction(bool& bPassThrough); // Function CommonUI.CommonTabListWidgetBase.HandleNextTabInputAction // (Final|Native|Protected|HasOutParms) // @ game+0x16aca4c
	struct FName GetTabIdAtIndex(int32_t Index); // Function CommonUI.CommonTabListWidgetBase.GetTabIdAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16ac994
	int32_t GetTabCount(); // Function CommonUI.CommonTabListWidgetBase.GetTabCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16ac974
	struct UCommonButtonBase* GetTabButtonBaseByID(struct FName TabNameID); // Function CommonUI.CommonTabListWidgetBase.GetTabButtonBaseByID // (Final|Native|Protected|BlueprintCallable) // @ game+0x16ac8b8
	struct FName GetSelectedTabId(); // Function CommonUI.CommonTabListWidgetBase.GetSelectedTabId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16ac848
	struct UCommonAnimatedSwitcher* GetLinkedSwitcher(); // Function CommonUI.CommonTabListWidgetBase.GetLinkedSwitcher // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16ac7c8
	struct FName GetActiveTab(); // Function CommonUI.CommonTabListWidgetBase.GetActiveTab // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16ac6c4
	void DisableTabWithReason(struct FName TabNameID, struct FText& Reason); // Function CommonUI.CommonTabListWidgetBase.DisableTabWithReason // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x16ac558
};

// Class CommonUI.CommonTextStyle
// Size: 0x150 (Inherited: 0x28)
struct UCommonTextStyle : UObject {
	struct FSlateFontInfo Font; // 0x28(0x58)
	struct FLinearColor Color; // 0x80(0x10)
	bool bUsesDropShadow; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	struct FVector2D ShadowOffset; // 0x94(0x08)
	struct FLinearColor ShadowColor; // 0x9c(0x10)
	struct FMargin Margin; // 0xac(0x10)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FSlateBrush StrikeBrush; // 0xc0(0x88)
	float LineHeightPercentage; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)

	void GetStrikeBrush(struct FSlateBrush& OutStrikeBrush); // Function CommonUI.CommonTextStyle.GetStrikeBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x16b25ac
	void GetShadowOffset(struct FVector2D& OutShadowOffset); // Function CommonUI.CommonTextStyle.GetShadowOffset // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x16b2524
	void GetShadowColor(struct FLinearColor& OutColor); // Function CommonUI.CommonTextStyle.GetShadowColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x16b249c
	void GetMargin(struct FMargin& OutMargin); // Function CommonUI.CommonTextStyle.GetMargin // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x16b23e4
	float GetLineHeightPercentage(); // Function CommonUI.CommonTextStyle.GetLineHeightPercentage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16b23cc
	void GetFont(struct FSlateFontInfo& OutFont); // Function CommonUI.CommonTextStyle.GetFont // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x16b219c
	void GetColor(struct FLinearColor& OutColor); // Function CommonUI.CommonTextStyle.GetColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x16b2114
};

// Class CommonUI.CommonTextScrollStyle
// Size: 0x40 (Inherited: 0x28)
struct UCommonTextScrollStyle : UObject {
	float Speed; // 0x28(0x04)
	float StartDelay; // 0x2c(0x04)
	float EndDelay; // 0x30(0x04)
	float FadeInDelay; // 0x34(0x04)
	float FadeOutDelay; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class CommonUI.CommonTileView
// Size: 0x388 (Inherited: 0x388)
struct UCommonTileView : UTileView {
};

// Class CommonUI.CommonTreeView
// Size: 0x3c0 (Inherited: 0x3c0)
struct UCommonTreeView : UTreeView {
};

// Class CommonUI.CommonUIActionRouterBase
// Size: 0x100 (Inherited: 0x30)
struct UCommonUIActionRouterBase : ULocalPlayerSubsystem {
	char pad_30[0xd0]; // 0x30(0xd0)
};

// Class CommonUI.CommonUIEditorSettings
// Size: 0xa8 (Inherited: 0x28)
struct UCommonUIEditorSettings : UObject {
	struct TSoftClassPtr<UObject> TemplateTextStyle; // 0x28(0x28)
	struct TSoftClassPtr<UObject> TemplateButtonStyle; // 0x50(0x28)
	struct TSoftClassPtr<UObject> TemplateBorderStyle; // 0x78(0x28)
	char pad_A0[0x8]; // 0xa0(0x08)
};

// Class CommonUI.CommonUIInputSettings
// Size: 0x78 (Inherited: 0x28)
struct UCommonUIInputSettings : UObject {
	bool bLinkCursorToGamepadFocus; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t UIActionProcessingPriority; // 0x2c(0x04)
	struct TArray<struct FUIInputAction> InputActions; // 0x30(0x10)
	struct TArray<struct FUIInputAction> ActionOverrides; // 0x40(0x10)
	struct FCommonAnalogCursorSettings AnalogCursorSettings; // 0x50(0x24)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class CommonUI.CommonUILibrary
// Size: 0x28 (Inherited: 0x28)
struct UCommonUILibrary : UBlueprintFunctionLibrary {

	struct UWidget* FindParentWidgetOfType(struct UWidget* StartingWidget, struct UWidget* Type); // Function CommonUI.CommonUILibrary.FindParentWidgetOfType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16b1f40
};

// Class CommonUI.CommonUIRichTextData
// Size: 0x30 (Inherited: 0x28)
struct UCommonUIRichTextData : UObject {
	struct UDataTable* InlineIconSet; // 0x28(0x08)
};

// Class CommonUI.CommonUISettings
// Size: 0x150 (Inherited: 0x28)
struct UCommonUISettings : UObject {
	bool bAutoLoadData; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TSoftObjectPtr<UObject> DefaultImageResourceObject; // 0x30(0x28)
	struct TSoftObjectPtr<UMaterialInterface> DefaultThrobberMaterial; // 0x58(0x28)
	struct TSoftClassPtr<UObject> DefaultRichTextDataClass; // 0x80(0x28)
	char pad_A8[0x8]; // 0xa8(0x08)
	struct UObject* DefaultImageResourceObjectInstance; // 0xb0(0x08)
	struct UMaterialInterface* DefaultThrobberMaterialInstance; // 0xb8(0x08)
	struct FSlateBrush DefaultThrobberBrush; // 0xc0(0x88)
	struct UCommonUIRichTextData* RichTextDataInstance; // 0x148(0x08)
};

// Class CommonUI.CommonUISubsystemBase
// Size: 0x40 (Inherited: 0x30)
struct UCommonUISubsystemBase : UGameInstanceSubsystem {
	char pad_30[0x10]; // 0x30(0x10)

	struct FSlateBrush GetInputActionButtonIcon(struct FDataTableRowHandle& InputActionRowHandle, enum class ECommonInputType InputType, struct FName& GamepadName); // Function CommonUI.CommonUISubsystemBase.GetInputActionButtonIcon // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x16b228c
};

// Class CommonUI.CommonVideoPlayer
// Size: 0x218 (Inherited: 0x108)
struct UCommonVideoPlayer : UWidget {
	struct UMediaSource* Video; // 0x108(0x08)
	struct UMediaPlayer* MediaPlayer; // 0x110(0x08)
	struct UMediaTexture* MediaTexture; // 0x118(0x08)
	struct UMaterial* VideoMaterial; // 0x120(0x08)
	struct UMediaSoundComponent* SoundComponent; // 0x128(0x08)
	struct FSlateBrush VideoBrush; // 0x130(0x88)
	char pad_1B8[0x60]; // 0x1b8(0x60)
};

// Class CommonUI.CommonVisibilitySwitcher
// Size: 0x158 (Inherited: 0x130)
struct UCommonVisibilitySwitcher : UOverlay {
	enum class ESlateVisibility ShownVisibility; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	int32_t ActiveWidgetIndex; // 0x134(0x04)
	bool bAutoActivateSlot; // 0x138(0x01)
	bool bActivateFirstSlotOnAdding; // 0x139(0x01)
	char pad_13A[0x1e]; // 0x13a(0x1e)

	void SetActiveWidgetIndex(int32_t Index); // Function CommonUI.CommonVisibilitySwitcher.SetActiveWidgetIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x16b2b80
	void SetActiveWidget(struct UWidget* Widget); // Function CommonUI.CommonVisibilitySwitcher.SetActiveWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x16b2a7c
	void IncrementActiveWidgetIndex(bool bAllowWrapping); // Function CommonUI.CommonVisibilitySwitcher.IncrementActiveWidgetIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x16b2880
	int32_t GetActiveWidgetIndex(); // Function CommonUI.CommonVisibilitySwitcher.GetActiveWidgetIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16b20dc
	struct UWidget* GetActiveWidget(); // Function CommonUI.CommonVisibilitySwitcher.GetActiveWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16b20b8
	void DecrementActiveWidgetIndex(bool bAllowWrapping); // Function CommonUI.CommonVisibilitySwitcher.DecrementActiveWidgetIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x16b1e98
	void DeactivateVisibleSlot(); // Function CommonUI.CommonVisibilitySwitcher.DeactivateVisibleSlot // (Final|Native|Public|BlueprintCallable) // @ game+0x16b1e84
	void ActivateVisibleSlot(); // Function CommonUI.CommonVisibilitySwitcher.ActivateVisibleSlot // (Final|Native|Public|BlueprintCallable) // @ game+0x16b1d20
};

// Class CommonUI.CommonVisibilitySwitcherSlot
// Size: 0x68 (Inherited: 0x58)
struct UCommonVisibilitySwitcherSlot : UOverlaySlot {
	char pad_58[0x10]; // 0x58(0x10)
};

// Class CommonUI.CommonVisibilityWidgetBase
// Size: 0x2e8 (Inherited: 0x290)
struct UCommonVisibilityWidgetBase : UCommonBorder {
	struct TMap<struct FName, bool> VisibilityControls; // 0x290(0x50)
	bool bShowForGamepad; // 0x2e0(0x01)
	bool bShowForMouseAndKeyboard; // 0x2e1(0x01)
	bool bShowForTouch; // 0x2e2(0x01)
	enum class ESlateVisibility VisibleType; // 0x2e3(0x01)
	enum class ESlateVisibility HiddenType; // 0x2e4(0x01)
	char pad_2E5[0x3]; // 0x2e5(0x03)

	struct TArray<struct FName> GetRegisteredPlatforms(); // Function CommonUI.CommonVisibilityWidgetBase.GetRegisteredPlatforms // (Final|Native|Static|Protected) // @ game+0x16b2470
};

// Class CommonUI.CommonVisualAttachment
// Size: 0x170 (Inherited: 0x158)
struct UCommonVisualAttachment : USizeBox {
	struct FVector2D ContentAnchor; // 0x158(0x08)
	char pad_160[0x10]; // 0x160(0x10)
};

// Class CommonUI.CommonWidgetCarousel
// Size: 0x160 (Inherited: 0x120)
struct UCommonWidgetCarousel : UPanelWidget {
	int32_t ActiveWidgetIndex; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct FMulticastInlineDelegate OnCurrentPageIndexChanged; // 0x128(0x10)
	char pad_138[0x28]; // 0x138(0x28)

	void SetActiveWidgetIndex(int32_t Index); // Function CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex // (Native|Public|BlueprintCallable) // @ game+0x16b2c00
	void SetActiveWidget(struct UWidget* Widget); // Function CommonUI.CommonWidgetCarousel.SetActiveWidget // (Native|Public|BlueprintCallable) // @ game+0x16b2afc
	void PreviousPage(); // Function CommonUI.CommonWidgetCarousel.PreviousPage // (Final|Native|Public|BlueprintCallable) // @ game+0x16b2954
	void NextPage(); // Function CommonUI.CommonWidgetCarousel.NextPage // (Final|Native|Public|BlueprintCallable) // @ game+0x16b2910
	struct UWidget* GetWidgetAtIndex(int32_t Index); // Function CommonUI.CommonWidgetCarousel.GetWidgetAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16b2650
	int32_t GetActiveWidgetIndex(); // Function CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16b20f4
	void EndAutoScrolling(); // Function CommonUI.CommonWidgetCarousel.EndAutoScrolling // (Final|Native|Public|BlueprintCallable) // @ game+0x16b1f2c
	void BeginAutoScrolling(float ScrollInterval); // Function CommonUI.CommonWidgetCarousel.BeginAutoScrolling // (Final|Native|Public|BlueprintCallable) // @ game+0x16b1e00
};

// Class CommonUI.CommonWidgetCarouselNavBar
// Size: 0x150 (Inherited: 0x108)
struct UCommonWidgetCarouselNavBar : UWidget {
	struct UCommonButtonBase* ButtonWidgetType; // 0x108(0x08)
	struct FMargin ButtonPadding; // 0x110(0x10)
	char pad_120[0x10]; // 0x120(0x10)
	struct UCommonWidgetCarousel* LinkedCarousel; // 0x130(0x08)
	struct UCommonButtonGroupBase* ButtonGroup; // 0x138(0x08)
	struct TArray<struct UCommonButtonBase*> Buttons; // 0x140(0x10)

	void SetLinkedCarousel(struct UCommonWidgetCarousel* CommonCarousel); // Function CommonUI.CommonWidgetCarouselNavBar.SetLinkedCarousel // (Final|Native|Public|BlueprintCallable) // @ game+0x16b2d04
	void HandlePageChanged(struct UCommonWidgetCarousel* CommonCarousel, int32_t PageIndex); // Function CommonUI.CommonWidgetCarouselNavBar.HandlePageChanged // (Final|Native|Protected) // @ game+0x16b27bc
	void HandleButtonClicked(struct UCommonButtonBase* AssociatedButton, int32_t ButtonIndex); // Function CommonUI.CommonWidgetCarouselNavBar.HandleButtonClicked // (Final|Native|Protected) // @ game+0x16b26f8
};

