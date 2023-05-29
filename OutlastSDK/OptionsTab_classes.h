// WidgetBlueprintGeneratedClass OptionsTab.OptionsTab_C
// Size: 0x3d0 (Inherited: 0x2f0)
struct UOptionsTab_C : URBMenuOptionsTab {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UOptionsEntry_C* AntiAliasingEntry; // 0x2f8(0x08)
	struct UOptionsEntry_C* AutoDetectEntry; // 0x300(0x08)
	struct UOptionsEntry_C* BrightnessEntry; // 0x308(0x08)
	struct UOptionsEntry_C* EffectsEntry; // 0x310(0x08)
	struct UOptionsEntry_C* HDRCalibrationEntry; // 0x318(0x08)
	struct UOptionsEntry_C* HDREnabledEntry; // 0x320(0x08)
	struct UImage* Image; // 0x328(0x08)
	struct UImage* Image_147; // 0x330(0x08)
	struct UOptionsCategory_C* OptionsCategory; // 0x338(0x08)
	struct UOptionsCategory_C* OptionsCategory_2; // 0x340(0x08)
	struct UOptionsCategory_C* OptionsCategory_3; // 0x348(0x08)
	struct UOptionsEntry_C* QualityPresetEntry; // 0x350(0x08)
	struct UOptionsEntry_C* ReflectionsEntry; // 0x358(0x08)
	struct UOptionsEntry_C* RefreshRateEntry; // 0x360(0x08)
	struct UOptionsEntry_C* ResolutionEntry; // 0x368(0x08)
	struct UOptionsEntry_C* ResolutionScaleEntry; // 0x370(0x08)
	struct UButton* ScrollDown; // 0x378(0x08)
	struct UButton* ScrollUp; // 0x380(0x08)
	struct UOptionsEntry_C* ShadowsEntry; // 0x388(0x08)
	struct UOptionsEntry_C* TextureEntry; // 0x390(0x08)
	struct UOptionsEntry_C* ViewDistanceEntry; // 0x398(0x08)
	struct UOptionsEntry_C* VolumetricsEntry; // 0x3a0(0x08)
	struct UOptionsEntry_C* VSyncEntry; // 0x3a8(0x08)
	struct UOptionsEntry_C* WindowModeEntry; // 0x3b0(0x08)
	struct FMulticastInlineDelegate OnEntrySubButtonClicked; // 0x3b8(0x10)
	struct UMicTestOptionsWidget_C* MicTestEntry; // 0x3c8(0x08)

	void RefreshQualityEntries(); // Function OptionsTab.OptionsTab_C.RefreshQualityEntries // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnSubButtonClicked(struct URBMenuOptionsEntry* Entry); // Function OptionsTab.OptionsTab_C.OnSubButtonClicked // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	enum class ESlateVisibility Get_DLSSEntry_Visibility_1(); // Function OptionsTab.OptionsTab_C.Get_DLSSEntry_Visibility_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void CreateResolutionPopup(); // Function OptionsTab.OptionsTab_C.CreateResolutionPopup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_ResolutionChanged(); // Function OptionsTab.OptionsTab_C.Event_ResolutionChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnParentPopped(); // Function OptionsTab.OptionsTab_C.Event_OnParentPopped // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnTabUnselected(); // Function OptionsTab.OptionsTab_C.Event_OnTabUnselected // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_AddRegionEntry(struct URBMenuOptionsEntry* Entry); // Function OptionsTab.OptionsTab_C.Event_AddRegionEntry // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__OptionsTab_ScrollUp_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function OptionsTab.OptionsTab_C.BndEvt__OptionsTab_ScrollUp_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__OptionsTab_ScrollDown_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function OptionsTab.OptionsTab_C.BndEvt__OptionsTab_ScrollDown_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Event_InputSourceChanged(bool bIsGamepad); // Function OptionsTab.OptionsTab_C.Event_InputSourceChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function OptionsTab.OptionsTab_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnTabSelected(); // Function OptionsTab.OptionsTab_C.Event_OnTabSelected // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_OptionsTab(int32_t EntryPoint); // Function OptionsTab.OptionsTab_C.ExecuteUbergraph_OptionsTab // (Final|UbergraphFunction) // @ game+0x201e6d4
	void OnEntrySubButtonClicked__DelegateSignature(struct URBMenuOptionsEntry* Entry); // Function OptionsTab.OptionsTab_C.OnEntrySubButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

