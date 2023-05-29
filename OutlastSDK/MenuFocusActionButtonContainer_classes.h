// WidgetBlueprintGeneratedClass MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C
// Size: 0x288 (Inherited: 0x268)
struct UMenuFocusActionButtonContainer_C : URBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UHorizontalBox* HorizontalBox_26; // 0x270(0x08)
	struct URBMenuButton_C* RBMenuButton; // 0x278(0x08)
	struct UWidget* CurrentSource; // 0x280(0x08)

	void UpdateVisibility(); // Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Destruct(); // Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnMenuFocusActionSet(struct UWidget* Source, struct FName& action, struct FText& Text); // Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.OnMenuFocusActionSet // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnMenuFocusActionCleared(struct UWidget* Source); // Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.OnMenuFocusActionCleared // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnMenuInputSourceChanged(); // Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.OnMenuInputSourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_MenuFocusActionButtonContainer(int32_t EntryPoint); // Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.ExecuteUbergraph_MenuFocusActionButtonContainer // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

