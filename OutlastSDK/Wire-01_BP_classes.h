// BlueprintGeneratedClass Wire-01_BP.Wire-01_BP_C
// Size: 0x42c (Inherited: 0x3f0)
struct AWire-01_BP_C : ASplineMeshBase_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f0(0x08)
	struct UPointLightComponent* PointLight; // 0x3f8(0x08)
	bool UseSparks; // 0x400(0x01)
	bool SpawnSparksAtEnd; // 0x401(0x01)
	char pad_402[0x2]; // 0x402(0x02)
	int32_t SparkAtPoint; // 0x404(0x04)
	struct FVector SparkLocation; // 0x408(0x0c)
	bool OnStartSparks; // 0x414(0x01)
	bool UseLight; // 0x415(0x01)
	char pad_416[0x2]; // 0x416(0x02)
	float Spark Light Intensity; // 0x418(0x04)
	struct FLinearColor Spark Light Color; // 0x41c(0x10)

	void UserConstructionScript(); // Function Wire-01_BP.Wire-01_BP_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ReceiveBeginPlay(); // Function Wire-01_BP.Wire-01_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_Wire-01_BP(int32_t EntryPoint); // Function Wire-01_BP.Wire-01_BP_C.ExecuteUbergraph_Wire-01_BP // (Final|UbergraphFunction) // @ game+0x201e6d4
};

