// WidgetBlueprintGeneratedClass CustomizationCategories_V2.CustomizationCategories_V2_C
// Size: 0x3a0 (Inherited: 0x268)
struct UCustomizationCategories_V2_C : URBUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* CycleRightButtonPress; // 0x270(0x08)
	struct UWidgetAnimation* CycleLeftButtonPress; // 0x278(0x08)
	struct UScrollBox* ButtonGrid; // 0x280(0x08)
	struct UCustomizationCategoryWidget_V2_C* CustomizationCategoryWidget_V2; // 0x288(0x08)
	struct UCustomizationCategoryWidget_V2_C* CustomizationCategoryWidget_V2_2; // 0x290(0x08)
	struct UCustomizationCategoryWidget_V2_C* CustomizationCategoryWidget_V2_3; // 0x298(0x08)
	struct UCustomizationCategoryWidget_V2_C* CustomizationCategoryWidget_V2_4; // 0x2a0(0x08)
	struct UCustomizationCategoryWidget_V2_C* CustomizationCategoryWidget_V2_5; // 0x2a8(0x08)
	struct UCustomizationCategoryWidget_V2_C* CustomizationCategoryWidget_V2_6; // 0x2b0(0x08)
	struct UCustomizationCategoryWidget_V2_C* CustomizationCategoryWidget_V2_7; // 0x2b8(0x08)
	struct UCustomizationCategoryWidget_V2_C* CustomizationCategoryWidget_V2_8; // 0x2c0(0x08)
	struct UCustomizationCategoryWidget_V2_C* CustomizationCategoryWidget_V2_9; // 0x2c8(0x08)
	struct UCustomizationCategoryWidget_V2_C* CustomizationCategoryWidget_V2_10; // 0x2d0(0x08)
	struct UCustomizationCategoryWidget_V2_C* CustomizationCategoryWidget_V2_11; // 0x2d8(0x08)
	struct UCustomizationCategoryWidget_V2_C* CustomizationCategoryWidget_V2_12; // 0x2e0(0x08)
	struct UCustomizationCategoryWidget_V2_C* CustomizationCategoryWidget_V2_13; // 0x2e8(0x08)
	struct UButton* CycleLeftButton; // 0x2f0(0x08)
	struct UActionIconWidget_C* CycleLeftPrompt; // 0x2f8(0x08)
	struct UButton* CycleRightButton; // 0x300(0x08)
	struct UActionIconWidget_C* CycleRightPrompt; // 0x308(0x08)
	struct UImage* Image_311; // 0x310(0x08)
	struct UImage* Image_400; // 0x318(0x08)
	struct AMenuCharacter_C* MenuCharacter; // 0x320(0x08)
	struct UCustomizationCategoryWidget_V2_C* SelectedCategoryWidget; // 0x328(0x08)
	struct TArray<enum class ECustomizationMenuCategory> CharacterTutoCategories; // 0x330(0x10)
	struct TArray<enum class ECustomizationMenuCategory> CharacterCategories; // 0x340(0x10)
	bool isTutorial; // 0x350(0x01)
	char pad_351[0x3]; // 0x351(0x03)
	int32_t firstValidCategoryIndex; // 0x354(0x04)
	enum class EMetaNPCType Shop Type; // 0x358(0x01)
	char pad_359[0x3]; // 0x359(0x03)
	int32_t itemsPerColumn; // 0x35c(0x04)
	struct FMulticastInlineDelegate EventOnCategoryClicked; // 0x360(0x10)
	bool isCustomizingFemale; // 0x370(0x01)
	char pad_371[0x7]; // 0x371(0x07)
	struct TArray<enum class ECustomizationMenuCategory> PlayerCellCategories; // 0x378(0x10)
	bool bIsPlayerCellCustomization; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct TArray<enum class ECustomizationMenuCategory> TempEnum; // 0x390(0x10)

	void OnCategoryCycled(struct UCustomizationCategoryWidget_V2_C* CategoryButton); // Function CustomizationCategories_V2.CustomizationCategories_V2_C.OnCategoryCycled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnCategoryClicked(struct UCustomizationCategoryWidget_V2_C* buttonClicked); // Function CustomizationCategories_V2.CustomizationCategories_V2_C.OnCategoryClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GetButtonFromCategory(enum class ECustomizationMenuCategory Category, struct UCustomizationCategoryWidget_V2_C*& Button); // Function CustomizationCategories_V2.CustomizationCategories_V2_C.GetButtonFromCategory // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void GetCurrentCategoryList(struct TArray<enum class ECustomizationMenuCategory>& CategoryList); // Function CustomizationCategories_V2.CustomizationCategories_V2_C.GetCurrentCategoryList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void Init(bool isTutorial, enum class EMetaNPCType ShopType, bool isCustomizingFemale); // Function CustomizationCategories_V2.CustomizationCategories_V2_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SelectCategory(struct UCustomizationCategoryWidget_V2_C* buttonClicked); // Function CustomizationCategories_V2.CustomizationCategories_V2_C.SelectCategory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void CreateCategoryButtons(bool isTutorial); // Function CustomizationCategories_V2.CustomizationCategories_V2_C.CreateCategoryButtons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function CustomizationCategories_V2.CustomizationCategories_V2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function CustomizationCategories_V2.CustomizationCategories_V2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__CustomizationCategories_V2_CycleLeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function CustomizationCategories_V2.CustomizationCategories_V2_C.BndEvt__CustomizationCategories_V2_CycleLeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__CustomizationCategories_V2_CycleRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function CustomizationCategories_V2.CustomizationCategories_V2_C.BndEvt__CustomizationCategories_V2_CycleRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void DisplayCategories(); // Function CustomizationCategories_V2.CustomizationCategories_V2_C.DisplayCategories // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_CustomizationCategories_V2(int32_t EntryPoint); // Function CustomizationCategories_V2.CustomizationCategories_V2_C.ExecuteUbergraph_CustomizationCategories_V2 // (Final|UbergraphFunction) // @ game+0x201e6d4
	void EventOnCategoryClicked__DelegateSignature(enum class ECustomizationMenuCategory custoCategory); // Function CustomizationCategories_V2.CustomizationCategories_V2_C.EventOnCategoryClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

