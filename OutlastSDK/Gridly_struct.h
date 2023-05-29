// ScriptStruct Gridly.GridlyResult
// Size: 0x10 (Inherited: 0x00)
struct FGridlyResult {
	struct FString Message; // 0x00(0x10)
};

// ScriptStruct Gridly.GridlyTableRow
// Size: 0x30 (Inherited: 0x00)
struct FGridlyTableRow {
	struct FString ID; // 0x00(0x10)
	struct FString Path; // 0x10(0x10)
	struct TArray<struct FGridlyTableCell> Cells; // 0x20(0x10)
};

// ScriptStruct Gridly.GridlyTableCell
// Size: 0x30 (Inherited: 0x00)
struct FGridlyTableCell {
	struct FString ColumnId; // 0x00(0x10)
	struct FString DependencyStatus; // 0x10(0x10)
	struct FString Value; // 0x20(0x10)
};

