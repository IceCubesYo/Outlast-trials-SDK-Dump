// BlueprintGeneratedClass SplineMeshBase_BP.SplineMeshBase_BP_C
// Size: 0x3f0 (Inherited: 0x2d0)
struct ASplineMeshBase_BP_C : ARBSplineMeshActor {
	struct UBillboardComponent* Billboard; // 0x2d0(0x08)
	struct TArray<struct FSplineMeshData> Meshes; // 0x2d8(0x10)
	struct TArray<struct FMeshIndex> OverwriteMeshes; // 0x2e8(0x10)
	bool UseDetailsMesh; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct UStaticMesh* DetailsStaticMesh; // 0x300(0x08)
	bool UseCollision; // 0x308(0x01)
	char pad_309[0x3]; // 0x309(0x03)
	float DetailsMeshesDistance; // 0x30c(0x04)
	enum class ESplineMeshAxis FowardAxis; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	struct TArray<struct UMaterialInterface*> MaterialOvewrite; // 0x318(0x10)
	bool CloseLoop; // 0x328(0x01)
	char pad_329[0x3]; // 0x329(0x03)
	struct FVector MeshesScale; // 0x32c(0x0c)
	struct FVector LastLocation; // 0x338(0x0c)
	struct FVector LastTangent; // 0x344(0x0c)
	float EndDistance; // 0x350(0x04)
	bool SkipMesh; // 0x354(0x01)
	char pad_355[0x3]; // 0x355(0x03)
	struct UStaticMesh* CurrentStaticMesh; // 0x358(0x08)
	bool FloorTangent; // 0x360(0x01)
	bool SnapOnGrid; // 0x361(0x01)
	char pad_362[0x2]; // 0x362(0x02)
	float GridSize; // 0x364(0x04)
	enum class ESplineCoordinateSpace GridSizeSpace; // 0x368(0x01)
	char pad_369[0x3]; // 0x369(0x03)
	float DetailsMeshOffset; // 0x36c(0x04)
	struct TArray<int32_t> SkipMeshAtPoint; // 0x370(0x10)
	bool SkipLastMesh; // 0x380(0x01)
	char pad_381[0x3]; // 0x381(0x03)
	struct FVector LastFirstPointPosition; // 0x384(0x0c)
	struct TArray<struct FVector> CurrentPointsPositions; // 0x390(0x10)
	struct FVector NewWorldPosition; // 0x3a0(0x0c)
	struct FVector Zero; // 0x3ac(0x0c)
	struct TArray<struct FVector2D> DetailsVoid; // 0x3b8(0x10)
	bool SkipDetailMesh; // 0x3c8(0x01)
	char pad_3C9[0x3]; // 0x3c9(0x03)
	float MaxDrawDistance; // 0x3cc(0x04)
	bool CastStaticShadow; // 0x3d0(0x01)
	struct FLightingChannels LightingChannels; // 0x3d1(0x01)
	enum class ELightmapType LightmapType; // 0x3d2(0x01)
	bool UseMaterialDynamicDataForUV; // 0x3d3(0x01)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct ASplineMeshBase_BP_C* Target; // 0x3d8(0x08)
	struct TArray<struct USplineMeshComponent*> SpawnedSplineMeshes; // 0x3e0(0x10)

	void FlattenTangent(struct USplineComponent* Spline); // Function SplineMeshBase_BP.SplineMeshBase_BP_C.FlattenTangent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetSplinePosition(); // Function SplineMeshBase_BP.SplineMeshBase_BP_C.SetSplinePosition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ClearGeneratedMeshes(); // Function SplineMeshBase_BP.SplineMeshBase_BP_C.ClearGeneratedMeshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct Spline Meshes(); // Function SplineMeshBase_BP.SplineMeshBase_BP_C.Construct Spline Meshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SnapPointOnGrid(struct USplineComponent* Spline); // Function SplineMeshBase_BP.SplineMeshBase_BP_C.SnapPointOnGrid // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void FindClosetMeshes(int32_t A, struct USplineComponent* Target, struct TArray<struct FSplineMeshData>& Meshes, int32_t& Index); // Function SplineMeshBase_BP.SplineMeshBase_BP_C.FindClosetMeshes // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void AddStaticMesh(struct FVector StartPos, struct FVector StartTangent, struct FVector EndPos, struct FVector EndTangent, struct UStaticMesh* NewMesh, int32_t Index); // Function SplineMeshBase_BP.SplineMeshBase_BP_C.AddStaticMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void AddDetailsMeshes(float Distance, struct FVector Location, struct FRotator Relative Transform Rotation); // Function SplineMeshBase_BP.SplineMeshBase_BP_C.AddDetailsMeshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UserConstructionScript(); // Function SplineMeshBase_BP.SplineMeshBase_BP_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

