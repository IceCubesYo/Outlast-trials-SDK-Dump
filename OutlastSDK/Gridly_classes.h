// Class Gridly.GridlyBPFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGridlyBPFunctionLibrary : UBlueprintFunctionLibrary {

	void UpdateLocalizationPreview(struct TArray<struct FPolyglotTextData>& PolyglotTextDatas); // Function Gridly.GridlyBPFunctionLibrary.UpdateLocalizationPreview // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x161f2c0
	struct FString GetLocalizationPreviewCulture(); // Function Gridly.GridlyBPFunctionLibrary.GetLocalizationPreviewCulture // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x161f170
	void EnableLocalizationPreview(struct FString Culture); // Function Gridly.GridlyBPFunctionLibrary.EnableLocalizationPreview // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x161f0f8
};

// Class Gridly.GridlyDataTable
// Size: 0xc0 (Inherited: 0xb0)
struct UGridlyDataTable : UDataTable {
	struct FString ViewId; // 0xb0(0x10)
};

// Class Gridly.GridlyGameSettings
// Size: 0xd8 (Inherited: 0x28)
struct UGridlyGameSettings : UObject {
	struct FString ImportApiKey; // 0x28(0x10)
	struct FString ExportApiKey; // 0x38(0x10)
	bool bUseCombinedNamespaceId; // 0x48(0x01)
	bool bAlsoExportNamespaceColumn; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
	struct FString NamespaceColumnId; // 0x50(0x10)
	struct FString SourceLanguageColumnIdPrefix; // 0x60(0x10)
	struct FString TargetLanguageColumnIdPrefix; // 0x70(0x10)
	bool bUseCustomCultureMapping; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct TMap<struct FString, struct FString> CustomCultureMapping; // 0x88(0x50)
};

// Class Gridly.GridlyTask_DownloadLocalizedTexts
// Size: 0xe8 (Inherited: 0x30)
struct UGridlyTask_DownloadLocalizedTexts : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnProgress; // 0x40(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x50(0x10)
	char pad_60[0x88]; // 0x60(0x88)

	struct UGridlyTask_DownloadLocalizedTexts* DownloadLocalizedTexts(struct UObject* WorldContextObject, struct FString ViewId); // Function Gridly.GridlyTask_DownloadLocalizedTexts.DownloadLocalizedTexts // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x161f020
};

// Class Gridly.GridlyTask_ImportDataTableFromGridly
// Size: 0xe0 (Inherited: 0x30)
struct UGridlyTask_ImportDataTableFromGridly : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnProgress; // 0x40(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x50(0x10)
	char pad_60[0x78]; // 0x60(0x78)
	struct UGridlyDataTable* GridlyDataTable; // 0xd8(0x08)

	struct UGridlyTask_ImportDataTableFromGridly* ImportDataTableFromGridly(struct UObject* WorldContextObject, struct UGridlyDataTable* GridlyDataTable); // Function Gridly.GridlyTask_ImportDataTableFromGridly.ImportDataTableFromGridly // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x161f1ac
};

