// WidgetBlueprintGeneratedClass MenuTutorials.MenuTutorials_C
// Size: 0x3a0 (Inherited: 0x308)
struct UMenuTutorials_C : URBMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UWidgetAnimation* FadeOut; // 0x310(0x08)
	struct UWidgetAnimation* FadeIn; // 0x318(0x08)
	struct UImage* Background; // 0x320(0x08)
	struct UImage* Border; // 0x328(0x08)
	struct USpacer* focusAnchor; // 0x330(0x08)
	struct UMenuAnchor* popupAnchor; // 0x338(0x08)
	struct FText Tutorial Text; // 0x340(0x18)
	enum class EMenuPlacement Popup Placement; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct UMaterialInstanceDynamic* backgroundMaterial; // 0x360(0x08)
	bool IsInitialized; // 0x368(0x01)
	char pad_369[0x3]; // 0x369(0x03)
	struct FLinearColor focusTargetParams; // 0x36c(0x10)
	struct FLinearColor focusCurrentParams; // 0x37c(0x10)
	bool needsFocusEffect; // 0x38c(0x01)
	char pad_38D[0x3]; // 0x38d(0x03)
	float fadeValue; // 0x390(0x04)
	char pad_394[0x4]; // 0x394(0x04)
	struct UWidget* Popup Anchor Info; // 0x398(0x08)

	void UpdateMaterialParams(float DeltaTime); // Function MenuTutorials.MenuTutorials_C.UpdateMaterialParams // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void MenuTutorials_AutoGenFunc(); // Function MenuTutorials.MenuTutorials_C.MenuTutorials_AutoGenFunc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void isShowingTutorial(bool& isShowingTutorial); // Function MenuTutorials.MenuTutorials_C.isShowingTutorial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Refresh(struct FText TutorialText, struct UWidget* popUpAnchorInfo, enum class EMenuPlacement popupPlacement, struct UWidget* focusAnchorInfo, bool showBorder); // Function MenuTutorials.MenuTutorials_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetAnchorInfo(struct UWidget* anchorInfo, struct UCanvasPanelSlot* Slot); // Function MenuTutorials.MenuTutorials_C.SetAnchorInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct UUserWidget* OnGetUserMenuContent_1(); // Function MenuTutorials.MenuTutorials_C.OnGetUserMenuContent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Initialize(struct FText TutorialText, struct UWidget* popUpAnchorInfo, enum class EMenuPlacement popupPlacement, struct UWidget* focusAnchorInfo, bool showBorder); // Function MenuTutorials.MenuTutorials_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Finished_5E4AE732454933DB073342A872BDF217(); // Function MenuTutorials.MenuTutorials_C.Finished_5E4AE732454933DB073342A872BDF217 // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Finished_FAE44480483B6DD5E75A0BA71A890721(); // Function MenuTutorials.MenuTutorials_C.Finished_FAE44480483B6DD5E75A0BA71A890721 // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function MenuTutorials.MenuTutorials_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnPush(); // Function MenuTutorials.MenuTutorials_C.Event_OnPush // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnMenuOpenChanged_Event_1(bool bIsOpen); // Function MenuTutorials.MenuTutorials_C.OnMenuOpenChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function MenuTutorials.MenuTutorials_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void HideMenu(); // Function MenuTutorials.MenuTutorials_C.HideMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnMenuConfirm(); // Function MenuTutorials.MenuTutorials_C.OnMenuConfirm // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Destruct(); // Function MenuTutorials.MenuTutorials_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_MenuTutorials(int32_t EntryPoint); // Function MenuTutorials.MenuTutorials_C.ExecuteUbergraph_MenuTutorials // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

