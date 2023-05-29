// Class ApexDestruction.DestructibleActor
// Size: 0x260 (Inherited: 0x248)
struct ADestructibleActor : AActor {
	struct UDestructibleComponent* DestructibleComponent; // 0x248(0x08)
	struct FMulticastInlineDelegate OnActorFracture; // 0x250(0x10)
};

// Class ApexDestruction.DestructibleComponent
// Size: 0x7c0 (Inherited: 0x6e0)
struct UDestructibleComponent : USkinnedMeshComponent {
	char pad_6E0[0x8]; // 0x6e0(0x08)
	char bFractureEffectOverride : 1; // 0x6e8(0x01)
	char pad_6E8_1 : 7; // 0x6e8(0x01)
	char pad_6E9[0x7]; // 0x6e9(0x07)
	struct TArray<struct FFractureEffect> FractureEffects; // 0x6f0(0x10)
	bool bEnableHardSleeping; // 0x700(0x01)
	char pad_701[0x3]; // 0x701(0x03)
	float LargeChunkThreshold; // 0x704(0x04)
	char pad_708[0x10]; // 0x708(0x10)
	struct FMulticastInlineDelegate OnComponentFracture; // 0x718(0x10)
	char pad_728[0x98]; // 0x728(0x98)

	void SetDestructibleMesh(struct UDestructibleMesh* NewMesh); // Function ApexDestruction.DestructibleComponent.SetDestructibleMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x12bf0e4
	struct UDestructibleMesh* GetDestructibleMesh(); // Function ApexDestruction.DestructibleComponent.GetDestructibleMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x12bf0c0
	void ApplyRadiusDamage(float BaseDamage, struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage); // Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x12bef30
	void ApplyDamage(float damageAmount, struct FVector& HitLocation, struct FVector& ImpulseDir, float ImpulseStrength); // Function ApexDestruction.DestructibleComponent.ApplyDamage // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x12bedd0
};

// Class ApexDestruction.DestructibleFractureSettings
// Size: 0xb8 (Inherited: 0x28)
struct UDestructibleFractureSettings : UObject {
	int32_t CellSiteCount; // 0x28(0x04)
	struct FFractureMaterial FractureMaterialDesc; // 0x2c(0x24)
	int32_t RandomSeed; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct FVector> VoronoiSites; // 0x58(0x10)
	int32_t OriginalSubmeshCount; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct UMaterialInterface*> Materials; // 0x70(0x10)
	struct TArray<struct FDestructibleChunkParameters> ChunkParameters; // 0x80(0x10)
	char pad_90[0x28]; // 0x90(0x28)
};

// Class ApexDestruction.DestructibleMesh
// Size: 0x460 (Inherited: 0x3c0)
struct UDestructibleMesh : USkeletalMesh {
	struct FDestructibleParameters DefaultDestructibleParameters; // 0x3c0(0x88)
	struct TArray<struct FFractureEffect> FractureEffects; // 0x448(0x10)
	char pad_458[0x8]; // 0x458(0x08)
};

