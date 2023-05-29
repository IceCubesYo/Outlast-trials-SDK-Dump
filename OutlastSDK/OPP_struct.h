// Enum OPP.EAIEvent
enum class EAIEvent : uint8 {
	Undefined = 0,
	ReactToSoundDisturbanceAware = 1,
	ReactToSoundDisturbanceUnaware = 2,
	ReactToVisualDisturbanceAware = 3,
	ReactToVisualDisturbanceUnaware = 4,
	ReactToMajorDisturbance = 5,
	ReactToSensingDisturbance = 6,
	InvestigateDisturbanceAware = 7,
	InvestigateDisturbanceUnaware = 8,
	InvestigatePoint = 9,
	ReachedInvestigationPoint = 10,
	FinishedInvestigatingPoint = 11,
	InvestigationGiveUp = 12,
	AlertedGiveUp = 13,
	SuspiciousGiveUp = 14,
	SawPlayerEnterHidingSpot = 15,
	FoundHiddenPlayer = 16,
	SearchForOtherPlayersAfterKnockDown = 17,
	PullOutFromHidespot = 18,
	ReactToPlayerBeforeChase = 19,
	ReactToMultiplePlayersBeforeChase = 20,
	StartChaseAfterReaction = 21,
	StartChaseNoReaction = 22,
	StartMoveToIncapacitatedPlayer = 23,
	ChaseReachedLeashLimit = 24,
	ChaseStartGiveUp = 25,
	ChaseGiveUp = 26,
	ChaseStartYielding = 27,
	ChaseYield = 28,
	ChaseChangedTarget = 29,
	ChaseTaunt = 30,
	LostSightOfPlayer = 31,
	StartMoveToLostSight = 32,
	ReachedLastKnownPosition = 33,
	ReachedPatrolWaypoint = 34,
	PassUnderDynamicObstacle = 35,
	EnterDarknessZone = 36,
	EnterLightZone = 37,
	AttackPlayer = 38,
	GuardingAttack = 39,
	PushPlayer = 40,
	ImposterCharge = 41,
	PusherAttack = 42,
	PairedAttackConnecting = 43,
	KnockedDownPlayer = 44,
	StartFinishingIncapacitatedPlayer = 45,
	FinishIncapacitatedPlayer = 46,
	DealtDamage = 47,
	KilledPlayer = 48,
	AttackOtherNPC = 49,
	AttackedByOtherNPC = 50,
	ThrowProjectile = 51,
	ThrownProjectileHit = 52,
	ThrownProjectileMiss = 53,
	TakeDamage = 54,
	HitByProjectile = 55,
	PairedAttackInterrupted = 56,
	HitReaction_Low = 57,
	HitReaction_Med = 58,
	HitReaction_High = 59,
	DelayedHitReaction = 60,
	ShovedByPlayerAware = 61,
	ShovedByPlayerUnaware = 62,
	ShovePunish = 63,
	KnockedOut = 64,
	GetUpFromKnockOut = 65,
	Killed = 66,
	ProvocationWarning = 67,
	ProvokedByPlayer = 68,
	ReactToImperativeDisturbance = 69,
	TurnOffImperativeDisturbance = 70,
	SignalTackle = 71,
	FailedTackle = 72,
	SuccessfulTackle = 73,
	FinishedGroundAndPound = 74,
	PlayerAvoidanceStart = 75,
	PlayerAvoidanceRepath = 76,
	AcknowledgePlayer = 77,
	AcknowledgeOtherNPC = 78,
	ZoneDefenseBecomeAlert = 79,
	ZoneDefenseBlown = 80,
	ReactToCloseGrenade = 81,
	AffectedByStunGrenade = 82,
	RecoverFromStunGrenade = 83,
	AffectedByBlindPaint = 84,
	AffectedByHealSlowdown = 85,
	SleeperDisturbed = 86,
	SleeperScream = 87,
	MAX = 88
};

// Enum OPP.EScheduledPropertyValueChangedType
enum class EScheduledPropertyValueChangedType : uint8 {
	LocallySet = 0,
	DesiredTimeReached = 1,
	FailsafeTimeReached = 2,
	OnRepExpired = 3,
	EScheduledPropertyValueChangedType_MAX = 4
};

// Enum OPP.ENPCWeapon
enum class ENPCWeapon : uint8 {
	None = 0,
	Knife = 1,
	Machete = 2,
	Axe = 3,
	Bottle = 4,
	Shotgun = 5,
	SledgeHammer = 6,
	Pipe = 7,
	WoodPlank = 8,
	MolotovCocktail = 9,
	CattleProd = 10,
	DoubleClaw = 11,
	ENPCWeapon_MAX = 12
};

// Enum OPP.EDamageSoundMaterial
enum class EDamageSoundMaterial : uint8 {
	None = 0,
	Unarmed = 1,
	Berzerker = 2,
	Blade_Large = 3,
	Blade_Small = 4,
	Blunt_DenseMetal = 5,
	Blunt_HollowMetal = 6,
	Blunt_Wood = 7,
	Blunt_Electric = 8,
	Electric = 9,
	Fire = 10,
	Brick = 11,
	PsychosisEntity = 12,
	Grinder = 13,
	EDamageSoundMaterial_MAX = 14
};

// Enum OPP.EHurtVOType
enum class EHurtVOType : uint8 {
	None = 0,
	GenericLow = 1,
	GenericMedium = 2,
	GenericHigh = 3,
	LandLow = 4,
	LandHigh = 5,
	Fire = 6,
	Electricity = 7,
	EHurtVOType_MAX = 8
};

// Enum OPP.EDamageType
enum class EDamageType : uint8 {
	NoDamage = 0,
	Generic = 1,
	GenericNonFatal = 2,
	Temporary = 3,
	UnarmedRightHandStrike = 4,
	UnarmedLeftHandStrike = 5,
	UnarmedHeadStrike = 6,
	UnarmedLeftFootStrike = 7,
	UnarmedRightFootStrike = 8,
	UnarmedOtherStrike = 9,
	WeaponStrike = 10,
	Throwable = 11,
	Animated = 12,
	AnimatedDangerous = 13,
	ForceKill = 14,
	Electric = 15,
	Fire = 16,
	MolotovFire = 17,
	Falling = 18,
	Trap = 19,
	SpectreProximity = 20,
	EndOfStage = 21,
	HackPanelFail = 22,
	CoopTrap = 23,
	PlayerDamageLeash = 24,
	Grinder = 25,
	Custom = 26,
	MAX = 27
};

// Enum OPP.EHallucinationType
enum class EHallucinationType : uint8 {
	None = 0,
	AlteredControls = 1,
	JumpScare = 2,
	RandomSound = 3,
	LSDEffect = 4,
	Dizzyness = 5,
	Psychosis = 6,
	EHallucinationType_MAX = 7
};

// Enum OPP.EArmWreslingPanelInputFailType
enum class EArmWreslingPanelInputFailType : uint8 {
	Failed = 0,
	Success = 1,
	NoInput = 2,
	EArmWreslingPanelInputFailType_MAX = 3
};

// Enum OPP.EDoorActionType
enum class EDoorActionType : uint8 {
	Open = 0,
	QuickOpen = 1,
	Close = 2,
	Lock = 3,
	Unlock = 4,
	Unhinge = 5,
	Unhinge_Done = 6,
	AttachDoorRotation = 7,
	EDoorActionType_MAX = 8
};

// Enum OPP.EObjectiveCoordinatorState
enum class EObjectiveCoordinatorState : uint8 {
	Invalid = 0,
	Disabled = 1,
	WaitingForStart = 2,
	Started = 3,
	Stopped = 4,
	Failed = 5,
	Completed = 6,
	EObjectiveCoordinatorState_MAX = 7
};

// Enum OPP.EPlayerLeaveTarget
enum class EPlayerLeaveTarget : uint8 {
	None = 0,
	MainMenu = 1,
	Lobby = 2,
	Party = 3,
	Experiment = 4,
	Desktop = 5,
	Tutorial = 6,
	PartyGameSession = 7,
	EPlayerLeaveTarget_MAX = 8
};

// Enum OPP.ECurrencyType
enum class ECurrencyType : uint8 {
	None = 0,
	MurkoffPoint = 1,
	MurkoffDollar = 2,
	ReleaseToken = 3,
	Count = 4,
	ECurrencyType_MAX = 5
};

// Enum OPP.EPlayerCustomizationSlot
enum class EPlayerCustomizationSlot : uint8 {
	NightVisionGoggles = 0,
	Hair = 1,
	Head = 2,
	Watch = 3,
	UpperBody = 4,
	Toaster = 5,
	LowerBody = 6,
	Glove = 7,
	ESOPStraps = 8,
	None = 9,
	EPlayerCustomizationSlot_MAX = 10
};

// Enum OPP.EProfilePlatform
enum class EProfilePlatform : uint8 {
	Unknown = 0,
	Test = 1,
	Steam = 2,
	EOS = 3,
	Xbox = 4,
	Psn = 5,
	EProfilePlatform_MAX = 6
};

// Enum OPP.EActiveSkillType
enum class EActiveSkillType : uint8 {
	None = 0,
	Amp = 1,
	Chem = 2,
	Pharma = 3,
	Spec = 4,
	Max = 5
};

// Enum OPP.ESkinColorType
enum class ESkinColorType : uint8 {
	Light = 0,
	Dark = 1,
	ESkinColorType_MAX = 2
};

// Enum OPP.EPlayerEvent
enum class EPlayerEvent : uint8 {
	None = 0,
	CoopMove = 1,
	HelpedUpByTeammate = 2,
	HelpedUpTeammate = 3,
	PlayerTookDamage = 4,
	PlayerKnockedDown = 5,
	PlayerDied = 6,
	PlayerLostChance = 7,
	SanityLost = 8,
	RevivedDeadPlayer = 9,
	SuccessfullyUsedDynamicObstacle = 10,
	BodyHitEnemy = 11,
	HeadShotHitEnemy = 12,
	DistractEnemyWithBrick = 13,
	DistractEnemyWithBottle = 14,
	ShovedEnemy = 15,
	SavedYourselfFromGroundAndPound = 16,
	SavedPlayerFromGroundAndPound = 17,
	SavedPlayerFromExecution = 18,
	SavedPlayerFromElectricTrap = 19,
	SavedYourselfFromElectricTrap = 20,
	SavedByPlayerFromElectricTrap = 21,
	TriggeredSoundTrap = 22,
	CaughtByDoorTrap = 23,
	DamagedByExplosiveTrap = 24,
	DamagedByElectricFloorTrap = 25,
	UsedActiveSkill = 26,
	Skill_Spec_SpottedEnemy = 27,
	Skill_Pharma_AffectedPlayer = 28,
	Skill_Amp_AffectedEnemy = 29,
	Skill_Chem_AffectedEnemy = 30,
	Unlocked_Door_Lockpick = 31,
	Unlocked_Container_Lockpick = 32,
	Unlocked_Door_MasterKey = 33,
	Unlocked_Container_MasterKey = 34,
	SurvivedPsychosis = 35,
	PickedUp_MurkoffPoint = 36,
	PickedUp_MurkoffDollar = 37,
	PickedUp_CollectibleDocument = 38,
	PickedUp_EquippableItem = 39,
	UsedItem_Health = 40,
	UsedItem_ReviveSyringe = 41,
	UsedItem_Stamina = 42,
	UsedItem_Battery = 43,
	UsedItem_SkillCharge = 44,
	UsedItem_Antidote = 45,
	UsedItem_Throwable = 46,
	DisarmedWireTriggerTrap = 47,
	BashOpenLockedDoor = 48,
	EnteredHidingSpot = 49,
	PropagandaPosterCollected = 50,
	StageTimeElapsed = 51,
	CompletedStage = 52,
	CompletedStageAlive = 53,
	CompletedStageDead = 54,
	LeftTeammateBehind = 55,
	StageEndPercentageHealthLost = 56,
	CompletedMainObjective = 57,
	CompletedSecondaryObjective = 58,
	CompletedMainObjectiveStep = 59,
	CompletedSecondaryObjectiveStep = 60,
	CompletedMainObjectiveStepPlayerSpecific = 61,
	CompletedSecondaryObjectiveStepPlayerSpecific = 62,
	CompletedExperiment = 63,
	ScriptedPoints = 64,
	Max = 65
};

// Enum OPP.EPlayerIndicatorType
enum class EPlayerIndicatorType : uint8 {
	Default = 0,
	Knockdown = 1,
	Objective_Default = 2,
	Objective_Cart = 3,
	Objective_Exit = 4,
	Objective_HotPotato = 5,
	Objective_QuestInventoryItem = 6,
	Objective_Stalker = 7,
	Objective_ZoneDefense = 8,
	Objective_LargePickup = 9,
	KnockdownBeingTargetted = 10,
	AboutToDie = 11,
	CoopTrap = 12,
	CoopMove = 13,
	HelpUp = 14,
	Revive = 15,
	Dead = 16,
	CanBeRevived = 17,
	WantsToTrade = 18,
	PlayerInvestigating = 19,
	ItemHoldingAction = 20,
	EPlayerIndicatorType_MAX = 21
};

// Enum OPP.EGameplayAttributeModifierType
enum class EGameplayAttributeModifierType : uint8 {
	Addition = 0,
	Multiplication = 1,
	AddBaseValueRatio = 2,
	EGameplayAttributeModifierType_MAX = 3
};

// Enum OPP.EGameplayAttributeType
enum class EGameplayAttributeType : uint8 {
	Invalid = 0,
	MaxHealth = 1,
	MaxNVBatteries = 2,
	MaxStamina = 3,
	HealthRegenDelay = 4,
	HealthOnHelpedUp = 5,
	HealthOnRevived = 6,
	HealthAfterRespawn = 7,
	PsychosisDecaySpeed = 8,
	PsychosisContinuousGainDelay = 9,
	PsychosisGainMultiplier = 10,
	PsychosisDurationMultiplier = 11,
	ExtraPsychosisGain = 12,
	NVBatteryConsumption = 13,
	NVBatteryRechargeRate = 14,
	StaminaMovementCostMultiplier = 15,
	StaminaExhaustionDuration = 16,
	StaminaRecoveryRateMultiplier = 17,
	StaminaShoveCostMultiplier = 18,
	StaminaCoopCostMultiplier = 19,
	StaminaBashCostMultiplier = 20,
	StaminaTraversalCostMultiplier = 21,
	HidingSpotMaxStaminaModifier = 22,
	ActiveSkillCooldown = 23,
	ActiveSkillActivationRadius = 24,
	ActiveSkillEffectRadius = 25,
	ActiveSkillEffectDuration = 26,
	ActiveSkillEffect2Duration = 27,
	ActiveSkillPharmaEffectMultiplier = 28,
	ActiveSkillSpecTagDuration = 29,
	StartItemsBrick = 30,
	StartItemsLockpick = 31,
	StartItemsHealthGain = 32,
	BatteryItemUseMultiplier = 33,
	HealthItemUseMultiplier = 34,
	TempHealthItemUseMultiplier = 35,
	TempHealthDecayRate = 36,
	TempHealthConversionRate = 37,
	StaminaItemUseMultiplier = 38,
	AntidoteItemUseMultiplier = 39,
	MoneyPickupMultiplier = 40,
	SkillChargeItemPickupMultiplier = 41,
	ChanceOfKeepingSyringeAfterUse = 42,
	ChanceOfKeepingLockpickAfterUse = 43,
	ChanceOfKeepingMasterKeyAfterUse = 44,
	MeleeDamageReceivedMultiplier = 45,
	ProjectileDamageReceivedMultiplier = 46,
	SpectreDamageReceivedMultiplier = 47,
	TrapDamageReceivedMultiplier = 48,
	FallDamageMultiplier = 49,
	ChanceOfPlayerBreakingIn1Hit = 50,
	PlayerBashDamage = 51,
	PlayerShovePushDistance = 52,
	PerkSlotCount = 53,
	InventorySlotCount = 54,
	NoiseTrapNoiseMultiplier = 55,
	ThrowableNoiseMultiplier = 56,
	ThrowableStunDurationMultiplier = 57,
	NoiseWhenCrouching = 58,
	NoiseWhenRunning = 59,
	NoiseWhenWalking = 60,
	NoiseWhenOpeningDoorsMultiplier = 61,
	PerceivedVisibilityMultiplier = 62,
	MinigameSpeedMultiplier = 63,
	MinigameZoneSizeModifier = 64,
	HoldDurationMultiplier = 65,
	GarageDoorProgressMultiplier = 66,
	RemoveTrapMultiplier = 67,
	GroundAndPoundMashMultiplier = 68,
	PushCartMultiplier = 69,
	DisarmTrapMultiplier = 70,
	HelpUpMultiplier = 71,
	HelpUpDamageSlowDownMultiplier = 72,
	ReviveVictimMultiplier = 73,
	ReviveHelperMultiplier = 74,
	ReviveDamageSlowDownMultiplier = 75,
	CrouchSpeedMultiplier = 76,
	WalkingSpeedMultiplier = 77,
	RunningSpeedMultiplier = 78,
	LargeObjectCarrySpeedMultiplier = 79,
	AimAssistRadiusMultiplier = 80,
	EGameplayAttributeType_MAX = 81
};

// Enum OPP.ECustomizationMenuCategory
enum class ECustomizationMenuCategory : uint8 {
	DNA = 0,
	Voice = 1,
	Outfits = 2,
	NightVision = 3,
	UpperBody = 4,
	LowerBody = 5,
	Watch = 6,
	Haircut = 7,
	Glove = 8,
	Rigs = 9,
	Toaster = 10,
	Trinkets = 11,
	PlayerIcon = 12,
	Cell_MediumProp1 = 13,
	Cell_MediumProp2 = 14,
	Cell_SmallProp1 = 15,
	Cell_SmallProp2 = 16,
	Cell_Poster1 = 17,
	Cell_Poster2 = 18,
	Cell_Poster3 = 19,
	Cell_Poster4 = 20,
	Cell_WallPaper = 21,
	Cell_Carpet = 22,
	Cell_Bed = 23,
	Cell_Sink = 24,
	Cell_Ceramic = 25,
	Cell_Trim = 26,
	None = 27,
	ECustomizationMenuCategory_MAX = 28
};

// Enum OPP.EGameDifficulty
enum class EGameDifficulty : uint8 {
	Undefined = 0,
	Easy = 5,
	Normal = 8,
	Hard = 11,
	Insane = 20,
	EGameDifficulty_MAX = 21
};

// Enum OPP.EPlayerStat
enum class EPlayerStat : uint8 {
	None = 0,
	ItemsPickedUp = 1,
	ItemsPickedUp_SmallMedicine = 2,
	ItemsPickedUp_LargeMedicine = 3,
	ItemsPickedUp_HealthBooster = 4,
	ItemsPickedUp_ReviveSyringe = 5,
	ItemsPickedUp_Adrenaline = 6,
	ItemsPickedUp_StaminaBooster = 7,
	ItemsPickedUp_SmallBattery = 8,
	ItemsPickedUp_LargeBattery = 9,
	ItemsPickedUp_BatteryBooster = 10,
	ItemsPickedUp_LockPick = 11,
	ItemsPickedUp_MasterKey = 12,
	ItemsPickedUp_RigRecharger = 13,
	ItemsPickedUp_Bottle = 14,
	ItemsPickedUp_Antidote = 15,
	ItemsPickedUp_Brick = 16,
	ItemsPickedUp_CollectibleDocument = 17,
	ItemsUsed = 18,
	ItemsUsed_Health = 19,
	ItemsUsed_Throwable = 20,
	ItemsUsed_SmallMedicine = 21,
	ItemsUsed_LargeMedicine = 22,
	ItemsUsed_HealthBooster = 23,
	ItemsUsed_ReviveSyringe = 24,
	ItemsUsed_Adrenaline = 25,
	ItemsUsed_StaminaBooster = 26,
	ItemsUsed_SmallBattery = 27,
	ItemsUsed_LargeBattery = 28,
	ItemsUsed_BatteryBooster = 29,
	ItemsUsed_LockPick = 30,
	ItemsUsed_MasterKey = 31,
	ItemsUsed_RigRecharger = 32,
	ItemsUsed_Bottle = 33,
	ItemsUsed_Antidote = 34,
	ItemsUsed_Brick = 35,
	ItemsDropped = 36,
	ItemsDropped_SmallMedicine = 37,
	ItemsDropped_LargeMedicine = 38,
	ItemsDropped_HealthBooster = 39,
	ItemsDropped_ReviveSyringe = 40,
	ItemsDropped_Adrenaline = 41,
	ItemsDropped_StaminaBooster = 42,
	ItemsDropped_SmallBattery = 43,
	ItemsDropped_LargeBattery = 44,
	ItemsDropped_BatteryBooster = 45,
	ItemsDropped_LockPick = 46,
	ItemsDropped_MasterKey = 47,
	ItemsDropped_RigRecharger = 48,
	ItemsDropped_Bottle = 49,
	ItemsDropped_Antidote = 50,
	ItemsDropped_Brick = 51,
	UnlockedContainers = 52,
	ItemsTraded = 53,
	ItemsTraded_SmallMedicine = 54,
	ItemsTraded_LargeMedicine = 55,
	ItemsTraded_HealthBooster = 56,
	ItemsTraded_ReviveSyringe = 57,
	ItemsTraded_Adrenaline = 58,
	ItemsTraded_StaminaBooster = 59,
	ItemsTraded_SmallBattery = 60,
	ItemsTraded_LargeBattery = 61,
	ItemsTraded_BatteryBooster = 62,
	ItemsTraded_LockPick = 63,
	ItemsTraded_MasterKey = 64,
	ItemsTraded_RigRecharger = 65,
	ItemsTraded_Bottle = 66,
	ItemsTraded_Antidote = 67,
	ItemsTraded_Brick = 68,
	TimesCurrencyPickedUp = 69,
	CurrencyPickedUp_MurkoffPoint = 70,
	CurrencyPickedUp_MurkoffDollar = 71,
	TimesUsedActiveSkill = 72,
	TotalDamageTaken = 73,
	TimesIncapacitated = 74,
	SecondsSpentIncapacitated = 75,
	TimesKilled = 76,
	ChancesLost = 77,
	SecondsSpentDead = 78,
	TimesRevived = 79,
	TimesRespawned = 80,
	TimesHelpedUpTeammate = 81,
	TimesRevivedDeadPlayer = 82,
	TimesUsedHidingSpot = 83,
	SecondsSpentInHidingSpot = 84,
	TimesUsedNightVision = 85,
	SecondsSpentInNightVision = 86,
	TimesUsedDynamicObstable = 87,
	TimesHitNpcWithDynamicObstable = 88,
	TimesTriggeredExplosiveTrap = 89,
	TimesDamagedByExplosiveTrap = 90,
	TotalDamageByExplosiveTraps = 91,
	DoorTrapsDisarmed = 92,
	DoorTrapsTriggered = 93,
	DoorTrapsAvoided = 94,
	DoorTrapsCaught = 95,
	BashOpenLockedDoor = 96,
	LockedContainersDisarmAttempts = 97,
	LockedContainersDisarmSuccess = 98,
	LockedContainersDisarmFailure = 99,
	TimesDamagedByElectricFloorTrap = 100,
	TotalDamageByElectricFloorTraps = 101,
	JumpScaresTriggered = 102,
	Shove = 103,
	BodyHitEnemy = 104,
	HeadShotHitEnemy = 105,
	DistractEnemyWithThrowable = 106,
	Spotted = 107,
	SecondsSpentCrouched = 108,
	SecondsSpentRunning = 109,
	SecondsSpentSliding = 110,
	Chases = 111,
	ChasesEscaped = 112,
	ChasesDamaged = 113,
	ChasesIncapacitated = 114,
	ChasesEscapedWithHidingSpot = 115,
	SecondsSpentChased = 116,
	TimesInPsychosis = 117,
	SecondsSpentInPsychosis = 118,
	PuzzleRoomsCompleted = 119,
	RewardRoomsUnlocked = 120,
	DistanceTraveled = 121,
	HealthRecovered = 122,
	BatteryRecovered = 123,
	StaminaRecovered = 124,
	SanityRecovered = 125,
	CoopMovesPerformed = 126,
	Badge_BigSaver = 127,
	Badge_SleighOfHand = 128,
	Badge_Mechanophiliac = 129,
	Badge_TogetherWeAreStong = 130,
	Badge_CrowdControl = 131,
	Badge_Hypochondriac = 132,
	Badge_NotYourTimeYet = 133,
	Badge_GottaGoFast = 134,
	Badge_BreatheIn = 135,
	Badge_PowerSurge = 136,
	Badge_Bulleye = 137,
	Badge_MajorLeaguePlayer = 138,
	Badge_Distraction = 139,
	Badge_Coward = 140,
	Badge_TriggerHappy = 141,
	Badge_AngerIssues = 142,
	Badge_TappingOut = 143,
	Badge_BoostMeUp = 144,
	Badge_ClearVision = 145,
	Badge_HighAsAKite = 146,
	Badge_StepOnMeDaddy = 147,
	Badge_Hemophiliac = 148,
	Badge_Hoarder = 149,
	Badge_DriftKing = 150,
	Badge_Marathonian = 151,
	Badge_Hunchback = 152,
	Badge_CantTouchThis = 153,
	Badge_AverageJoe = 154,
	CharactersReleased_Volundary = 155,
	BestTrialCompletionTimeSeconds = 156,
	BestTrialGroupTQ = 157,
	BestTrialPersonalTQ = 158,
	MaxCharacterLevelReached = 159,
	TotalTrialTimePlayedSeconds = 160,
	TrialsCompleted = 161,
	TrialsCompletedNoDamage = 162,
	TrialsFailed = 163,
	ArmWrestlingMatchesWon = 164,
	ArmWrestlingMatchesLost = 165,
	Max = 166
};

// Enum OPP.EExitStageObjectiveState
enum class EExitStageObjectiveState : uint8 {
	WaitingForButton = 0,
	WaitingForDoors = 1,
	CanAccessSAS = 2,
	EExitStageObjectiveState_MAX = 3
};

// Enum OPP.ELoadoutElementType
enum class ELoadoutElementType : uint8 {
	None = 0,
	ActiveSkill = 1,
	ActiveSkillUpgrade = 2,
	Perk = 3,
	ProfileUpgrade = 4,
	ELoadoutElementType_MAX = 5
};

// Enum OPP.EMainMenuState
enum class EMainMenuState : uint8 {
	None = 0,
	WaitingForPlayerController = 1,
	Disclaimer = 2,
	WaitingForInput = 3,
	Connecting = 4,
	ProcessingBootInvite = 5,
	Connected = 6,
	JoiningGameSession = 7,
	MainMenu = 8,
	EnteringLobby = 9,
	TransitionToTutorialMap = 10,
	EnteringTutorialMap = 11,
	EMainMenuState_MAX = 12
};

// Enum OPP.EGamePhase
enum class EGamePhase : uint8 {
	None = 0,
	WaitingForPlayers = 1,
	WaitingForPlayersSitting = 2,
	LoadingStage = 3,
	Populating = 4,
	WaitingForStageReady = 5,
	StageReady = 6,
	StageStarted = 7,
	StageEnding = 8,
	StageFailed = 9,
	StageReset = 10,
	StageSuccess = 11,
	ReturnToLobby = 12,
	PostGameExitTimeout = 13,
	EGamePhase_MAX = 14
};

// Enum OPP.ESASVariatorType
enum class ESASVariatorType : uint8 {
	None = 0,
	SplitEntrance = 1,
	SplitExit = 2,
	Max = 3
};

// Enum OPP.EObstacleVariatorType
enum class EObstacleVariatorType : uint8 {
	None = 0,
	SoundTraps = 1,
	ExplosiveTraps = 2,
	ElectricFloors = 3,
	PsychosisMine = 4,
	Max = 5
};

// Enum OPP.ESecondaryObjectiveVariatorType
enum class ESecondaryObjectiveVariatorType : uint8 {
	None = 0,
	Posters = 1,
	SmashScreens = 2,
	Max = 3
};

// Enum OPP.EGameSessionType
enum class EGameSessionType : uint8 {
	Unknown = 0,
	Placement = 1,
	Matchmaking = 2,
	EGameSessionType_MAX = 3
};

// Enum OPP.EHotPotatoState
enum class EHotPotatoState : uint8 {
	Disabled = 0,
	Idle = 1,
	Dropped = 2,
	Carried = 3,
	Completed = 4,
	Expired = 5,
	EHotPotatoState_MAX = 6
};

// Enum OPP.EWorldIconType
enum class EWorldIconType : uint8 {
	Unspecified = 0,
	PlayerIndicator = 1,
	CoopNotification = 2,
	ObjectiveDefault = 3,
	ObjectivePsychosis = 4,
	IconMerger = 5,
	PlayerPing = 6,
	NPCDebugIcon = 7,
	FriendlyDevice = 8,
	DeadBodySolo = 9,
	EWorldIconType_MAX = 10
};

// Enum OPP.EPlayerCustomizationRarity
enum class EPlayerCustomizationRarity : uint8 {
	Invalid = 0,
	Common = 1,
	Rare = 2,
	Epic = 3,
	Legendary = 4,
	EPlayerCustomizationRarity_MAX = 5
};

// Enum OPP.ERewardType
enum class ERewardType : uint8 {
	None = 0,
	PlayerXp = 1,
	Customization = 2,
	PerkSlot = 3,
	Currency = 4,
	RandomCustomization = 5,
	ERewardType_MAX = 6
};

// Enum OPP.EXPGainType
enum class EXPGainType : uint8 {
	None = 0,
	TrialInitialCompletion = 1,
	TrialPerfectScore = 2,
	TrialRepeatable = 3,
	Badges = 4,
	EXPGainType_MAX = 5
};

// Enum OPP.EGameObjectiveType
enum class EGameObjectiveType : uint8 {
	Default = 0,
	HotPotato = 1,
	Stalker = 2,
	PushCart = 3,
	SimpleInteract = 4,
	LargeInteract = 5,
	Exit = 6,
	EscapePuzzleRoom = 7,
	ShootNPC = 8,
	EGameObjectiveType_MAX = 9
};

// Enum OPP.EGameMessageCategory
enum class EGameMessageCategory : uint8 {
	Normal = 0,
	Error = 1,
	ObjectiveStarted = 2,
	ObjectiveCompleted = 3,
	EGameMessageCategory_MAX = 4
};

// Enum OPP.InventoryWheelMode
enum class InventoryWheelMode : uint8 {
	Hold = 0,
	Scroll = 1,
	None = 2,
	InventoryWheelMode_MAX = 3
};

// Enum OPP.PlayerActionStatus
enum class PlayerActionStatus : uint8 {
	None = 0,
	HelpUp = 1,
	Revive = 2,
	InTrap = 3,
	GettingPounced = 4,
	Investigating = 5,
	ItemHoldingAction = 6,
	PlayerActionStatus_MAX = 7
};

// Enum OPP.ERBSocialMenuEntryAction
enum class ERBSocialMenuEntryAction : uint8 {
	ShowPlatformProfileUi = 0,
	ChangeActiveSkill = 1,
	SendFriendInvite = 2,
	CancelFriendInvite = 3,
	AcceptFriendInvite = 4,
	RefuseFriendInvite = 5,
	RemoveFriend = 6,
	ShowAddFriendUi = 7,
	SendPlatformFriendInvite = 8,
	AcceptPlatformFriendInvite = 9,
	RefusePlatformFriendInvite = 10,
	JoinParty = 11,
	LeaveParty = 12,
	InviteToParty = 13,
	RemoveFromParty = 14,
	RefusePartyInvite = 15,
	RefusePartyInviteRequest = 16,
	PromotePartyMember = 17,
	RequestPartyInvite = 18,
	TogglePartyInviteWidget = 19,
	Block = 20,
	UnBlock = 21,
	Report = 22,
	InvitePlayer = 23,
	UpdatePartySettings = 24,
	ERBSocialMenuEntryAction_MAX = 25
};

// Enum OPP.ERBSocialMenuEntryFilter
enum class ERBSocialMenuEntryFilter : uint8 {
	None = 0,
	SamePlatform = 1,
	ERBSocialMenuEntryFilter_MAX = 2
};

// Enum OPP.EFindPartyTicketState
enum class EFindPartyTicketState : uint8 {
	Searching = 0,
	PendingAcceptance = 1,
	Completed = 2,
	EFindPartyTicketState_MAX = 3
};

// Enum OPP.EInventoryUpdateEventType
enum class EInventoryUpdateEventType : uint8 {
	EquippedItemChanged = 0,
	InventoryChanged = 1,
	ItemPickup = 2,
	ActiveSkillChargeChanged = 3,
	ForceTemporaryFadeIn = 4,
	EInventoryUpdateEventType_MAX = 5
};

// Enum OPP.ELocomotionMode
enum class ELocomotionMode : uint8 {
	Normal = 0,
	SpecialMove = 1,
	Cinematic = 2,
	KnockedDown = 3,
	KnockedDownSliding = 4,
	Dead = 5,
	Falling = 6,
	Ghost = 7,
	Operating = 8,
	SoftOperating = 9,
	DoorLiftHold = 10,
	Pushing = 11,
	Hidden = 12,
	FreeSlide = 13,
	SlideOver = 14,
	SlideUnder = 15,
	SlideDown = 16,
	GroundAndPound = 17,
	ScriptedIdle = 18,
	NPCAnimating = 19,
	Knockout = 20,
	MovingLargePickup = 21,
	WakeUp = 22,
	OperatingDoor = 23,
	CoopTrapped_Victim = 24,
	CoopTrapped_Helper = 25,
	Coop_WaitingForBash = 26,
	Coop_HelpUp = 27,
	Coop_Revive = 28,
	Coop_WaitingForTraversal = 29,
	Tutorial = 30,
	MAX = 31
};

// Enum OPP.ESpecialMove
enum class ESpecialMove : uint8 {
	None = 0,
	EnterCinematicModeSmooth = 1,
	EnterCinematicModeTeleport = 2,
	ScriptedAnimation = 3,
	CustomInteractable = 4,
	AdjustPosition = 5,
	Jumping = 6,
	Landing = 7,
	NPC_Landing = 8,
	JumpOver = 9,
	SlideOver = 10,
	JumpThroughWindow = 11,
	ClimbOnto = 12,
	ClimbDown = 13,
	Interaction = 14,
	InteractionPhysWalking = 15,
	UsingLargeObject = 16,
	StartOperating = 17,
	FinishOperating = 18,
	InterruptOperating = 19,
	StartSoftOperating = 20,
	FinishSoftOperating = 21,
	InterruptSoftOperating = 22,
	PickUp = 23,
	ContainerPickUp = 24,
	GiveItem = 25,
	ContainerOpen = 26,
	DropItem = 27,
	PlayerShove = 28,
	PushOtherPawn = 29,
	HitReaction = 30,
	StunnedByScreamer = 31,
	CoopLongJumpJumper = 32,
	CoopLongJumpTossed = 33,
	CoopLongJumpTossedToCatcher = 34,
	CoopLongJumpTosser = 35,
	CoopLongJumpCatcher = 36,
	CoopHighJumpJumper = 37,
	CoopHighJumpTossed = 38,
	CoopHighJumpTossedToCatcher = 39,
	CoopHighJumpTosser = 40,
	CoopHighJumpCatcher = 41,
	CoopClimbOverTossed = 42,
	ThrowSmallWeapon = 43,
	EnterReadyCoopBash = 44,
	BashDoor = 45,
	BashBreakableObject = 46,
	LiftGarageDoor = 47,
	LetGoOfGarageDoor = 48,
	StartPushing = 49,
	StopPushing = 50,
	StartKnockdownSliding = 51,
	StopKnockdownSliding = 52,
	EnterCoopTrapped_Victim = 53,
	ExitCoopTrapped_Victim = 54,
	FailCoopTrapped_VictimKnockdown = 55,
	FailCoopTrapped_VictimDead = 56,
	EnterCoopTrapped_Helper = 57,
	ExitCoopTrapped_Helper = 58,
	Enter_CoopWaitingForTraversal = 59,
	Exit_CoopWaitingForTraversal = 60,
	PairedPulloutFromHidingSpotLeader = 61,
	PairedPulloutFromHidingSpotFollower = 62,
	LandOntoLedge = 63,
	ConsumeItem = 64,
	PushFromLedge = 65,
	HelpUpEntryLeader = 66,
	HelpUpEntryFollower = 67,
	HelpUpLeaveLeader = 68,
	HelpUpSuccessLeader = 69,
	HelpUpSuccessFollower = 70,
	HelpUpFailFollower = 71,
	ReviveEntryLeader = 72,
	ReviveEntryFollower = 73,
	ReviveLeaveLeader = 74,
	ReviveSuccessLeader = 75,
	ReviveSuccessFollower = 76,
	Wait = 77,
	TraversalSlide = 78,
	PickupLargeObject = 79,
	PutDownLargeObject = 80,
	EnterWakeUpSequence = 81,
	ExitWakeUpSequence = 82,
	DoorInteraction = 83,
	ActivateDynamicObstacle = 84,
	StartOperatingDoor = 85,
	StopOperatingDoor = 86,
	InterruptedOperatingDoor = 87,
	NearDeathToKnockdown = 88,
	KnockDownSelfHelpSAS = 89,
	Emote = 90,
	EnterHidespot = 91,
	ExitHidespot = 92,
	KnockdownInHidespot = 93,
	Align = 94,
	SignalTackle = 95,
	TackleFail = 96,
	EnterGroundAndPoundAttacker = 97,
	EnterGroundAndPoundVictim = 98,
	GroundAndPoundFinishAttacker = 99,
	GroundAndPoundFinishVictim = 100,
	GroundAndPoundGiveUpAttacker = 101,
	GroundAndPoundGiveUpVictim = 102,
	GroundAndPoundEscapePlayer = 103,
	GroundAndPoundEscapePouncer = 104,
	GroundAndPoundInterruptPouncer = 105,
	GroundAndPoundInterruptPinnedPlayer = 106,
	PusherAttackAttacker = 107,
	PusherAttackVictim = 108,
	PusherAttackGroup = 109,
	PairedAttackAttacker = 110,
	PairedAttackVictim = 111,
	StandardFatalityAttacker = 112,
	StandardFatalityVictim = 113,
	KnockdownToDeath = 114,
	GrabAndThrowAttacker = 115,
	GrabAndThrowVictim = 116,
	NPC_AnimatedStart = 117,
	NPC_AnimatedStop = 118,
	NPC_SingleShotAnim = 119,
	NPC_FixedPoseAnim = 120,
	NPC_Startled = 121,
	NPC_QuickAttack = 122,
	NPC_Attack = 123,
	NPC_Investigate = 124,
	NPC_InvestigationBreaker = 125,
	NPC_GiveUpInvestigation = 126,
	NPC_GiveUpAlerted = 127,
	NPC_GiveUpSuspicious = 128,
	NPC_PlayerTaunt = 129,
	NPC_InvestigateHidespot = 130,
	NPC_UnhingeDoor = 131,
	NPC_DoorInvestigation = 132,
	NPC_BashDynamicObstacle = 133,
	NPC_EnterAmbientIdle = 134,
	NPC_LeaveAmbientIdle = 135,
	NPC_PeekFromHidespot = 136,
	NPC_Sabotage = 137,
	NPC_BerserkerIdleBreaker = 138,
	NPC_Spectre_Intro = 139,
	NPC_Spectre_Outro = 140,
	NPC_JumpOver = 141,
	NPC_ClimbOnto = 142,
	NPC_ClimbDownLedge = 143,
	NPC_CrouchUnder = 144,
	NPC_GhostThroughObstacle = 145,
	NPC_DoorPassthrough = 146,
	NPC_TrapReaction = 147,
	NPC_TurnOnSpot = 148,
	NPC_HitReaction = 149,
	NPC_DelayedFlinchReaction = 150,
	NPC_CheckSurroundings = 151,
	NPC_Knockout = 152,
	NPC_GetUpFromKnockout = 153,
	NPC_GoryDeath = 154,
	NPC_WaypointAnim = 155,
	NPC_ShotgunAttack = 156,
	NPC_ShotgunReload = 157,
	NPC_ShakePushable = 158,
	NPC_HaarpReaction = 159,
	NPC_BreakDistrator = 160,
	NPC_ReactToGrenade = 161,
	NPC_ReactToGrenadeStun = 162,
	NPC_GrenadeStun = 163,
	NPC_RecoverFromGrenadeStun = 164,
	NPC_ReactToBlindPaint = 165,
	NPC_ReactToHealSlowdown = 166,
	NPC_ChaseBreaker = 167,
	NPC_SleeperDisturbed = 168,
	NPC_SleeperWakeUp = 169,
	Pitcher_ThrowMolotov = 170,
	Pitcher_EquipMolotov = 171,
	Pitcher_UnequipMolotov = 172,
	MAX = 173
};

// Enum OPP.ESpecialMoveNotifyType
enum class ESpecialMoveNotifyType : uint8 {
	DoAction = 0,
	DoSecondaryAction = 1,
	SpecialMoveCompleted = 2,
	AllowMovement = 3,
	ESpecialMoveNotifyType_MAX = 4
};

// Enum OPP.EFootStepModifierType
enum class EFootStepModifierType : uint8 {
	None = 0,
	Rubbish = 1,
	Bloody = 2,
	Wet = 3,
	EFootStepModifierType_MAX = 4
};

// Enum OPP.EProceduralAnimInterpType
enum class EProceduralAnimInterpType : uint8 {
	Smooth = 0,
	Linear = 1,
	Decel = 2,
	Accel = 3,
	ExpDecel = 4,
	ExpAccel = 5,
	EaseOut = 6,
	EProceduralAnimInterpType_MAX = 7
};

// Enum OPP.EGhostFinishReason
enum class EGhostFinishReason : uint8 {
	NoneGiven = 0,
	Leaving = 1,
	Interrupted = 2,
	Custom = 3,
	MAX = 4
};

// Enum OPP.EBashDoorType
enum class EBashDoorType : uint8 {
	KickTry = 0,
	KickOpen = 1,
	ShoulderTry = 2,
	ShoulderOpen = 3,
	Unhinge = 4,
	CoopBash = 5,
	EBashDoorType_MAX = 6
};

// Enum OPP.EDoorInteractionType
enum class EDoorInteractionType : uint8 {
	None = 0,
	Open = 1,
	OpenFail = 2,
	CloseInsideLeft = 3,
	CloseInsideRight = 4,
	CloseOutsideLeft = 5,
	CloseOutsideRight = 6,
	CloseInsideLeftQuick = 7,
	CloseInsideRightQuick = 8,
	CloseOutsideLeftQuick = 9,
	CloseOutsideRightQuick = 10,
	CloseInsideLeftRunning = 11,
	CloseInsideRightRunning = 12,
	CloseOutsideLeftRunning = 13,
	CloseOutsideRightRunning = 14,
	SlowOpenStart = 15,
	EDoorInteractionType_MAX = 16
};

// Enum OPP.EBasicDirection
enum class EBasicDirection : uint8 {
	None = 0,
	Forward = 1,
	Backward = 2,
	Left = 3,
	Right = 4,
	MAX = 5
};

// Enum OPP.EPawnRepulsionType
enum class EPawnRepulsionType : uint8 {
	None = 0,
	AllDirection = 1,
	AllDirectionExceptBack = 2,
	ForwardOnly = 3,
	SideOnly = 4,
	EPawnRepulsionType_MAX = 5
};

// Enum OPP.EItemType
enum class EItemType : uint8 {
	Nothing = 0,
	Fists = 1,
	HealthGain = 2,
	HealthBoost = 3,
	TempHealthGain = 4,
	ReviveSyringe = 5,
	StaminaRegen = 6,
	MaxStaminaBoost = 7,
	SmallBattery = 8,
	Battery = 9,
	SuperBattery = 10,
	LockPick = 11,
	MasterKey = 12,
	SkillCharge = 13,
	Bottle = 14,
	PsychosisAntidote = 15,
	MurkoffPoint = 16,
	MurkoffDollar = 17,
	Brick = 18,
	CollectibleDocument = 19,
	Quest = 20,
	ActiveSkillController = 21,
	ActiveSkillThrowable = 22,
	ActiveSkillDeployable = 23,
	ObjectiveThrowable = 24,
	GoreThrowable = 25,
	Axe = 26,
	BaseballBat = 27,
	Knife = 28,
	Machete = 29,
	Pipe = 30,
	CattleProd = 31,
	DoubleClaw = 32,
	SledgeHammer = 33,
	SpikedMace = 34,
	WoodPlank = 35,
	Shotgun = 36,
	MolotovCocktail = 37,
	EItemType_MAX = 38
};

// Enum OPP.EItemCategory
enum class EItemCategory : uint8 {
	Fist = 0,
	Throwable = 1,
	Health = 2,
	Utility = 3,
	ActiveSkill = 4,
	Currency = 5,
	Collectible = 6,
	QuestItem = 7,
	None = 8,
	EItemCategory_MAX = 9
};

// Enum OPP.EDamageVolumeType
enum class EDamageVolumeType : uint8 {
	RightHand = 0,
	LeftHand = 1,
	Head = 2,
	LeftFoot = 3,
	RightFoot = 4,
	Other = 5,
	EDamageVolumeType_MAX = 6
};

// Enum OPP.EKnockbackValue
enum class EKnockbackValue : uint8 {
	None = 0,
	VeryLow = 1,
	Low = 2,
	Medium = 3,
	High = 4,
	VeryHigh = 5,
	EKnockbackValue_MAX = 6
};

// Enum OPP.EDamageValue
enum class EDamageValue : uint8 {
	None = 0,
	VeryLow = 1,
	Low = 2,
	Medium = 3,
	High = 4,
	VeryHigh = 5,
	EDamageValue_MAX = 6
};

// Enum OPP.EConfigValueType
enum class EConfigValueType : uint8 {
	None = 0,
	Int = 1,
	Float = 2,
	Bool = 3,
	IntByDifficulty = 4,
	FloatByDifficulty = 5,
	BoolByDifficulty = 6,
	EConfigValueType_MAX = 7
};

// Enum OPP.EPlayerHitReactionType
enum class EPlayerHitReactionType : uint8 {
	None = 0,
	Flinch = 1,
	Light = 2,
	Medium = 3,
	Heavy = 4,
	KnockedDown = 5,
	Dead = 6,
	EPlayerHitReactionType_MAX = 7
};

// Enum OPP.EAttackType
enum class EAttackType : uint8 {
	None = 0,
	Quick = 1,
	QuickLow = 2,
	PairedAnim = 3,
	Gun = 4,
	BlockingAttack = 5,
	Push = 6,
	Opener = 7,
	Heavy = 8,
	Punish = 9,
	Grab = 10,
	SpecificAnim = 11,
	Lunge = 12,
	ImposterCharge = 13,
	EAttackType_MAX = 14
};

// Enum OPP.EMessagePriority
enum class EMessagePriority : uint8 {
	NoPriority = 0,
	Generic_SuperLowPriority = 1,
	Gameplay_VeryLowPriority = 2,
	Gameplay_LowPriority = 3,
	Tutorial_LowPriority = 4,
	Gameplay_MediumPriority = 5,
	Tutorial_MediumPriority = 6,
	Gameplay_HighPriority = 7,
	Tutorial_HighPriority = 8,
	Generic_SuperHighPriority = 9,
	EMessagePriority_MAX = 10
};

// Enum OPP.ENightVisionAnimNotifyType
enum class ENightVisionAnimNotifyType : uint8 {
	ShowMesh = 0,
	HUD = 1,
	EnterFX = 2,
	ExitFX = 3,
	TurnOn = 4,
	TurnOff = 5,
	RestrictNVOn = 6,
	RestrictNVOff = 7,
	RemoveAllRestrictions = 8,
	ENightVisionAnimNotifyType_MAX = 9
};

// Enum OPP.EDamageResultType
enum class EDamageResultType : uint8 {
	None = 0,
	Normal = 1,
	KnockedDown = 2,
	Dead = 3,
	EDamageResultType_MAX = 4
};

// Enum OPP.ECoopMoveOfferState
enum class ECoopMoveOfferState : uint8 {
	None = 0,
	HailingGeneric = 1,
	HailingSpecific = 2,
	Nearby = 3,
	ECoopMoveOfferState_MAX = 4
};

// Enum OPP.ECoopMoveType
enum class ECoopMoveType : uint8 {
	None = 0,
	HighJumpCatch = 1,
	HighJumpToss = 2,
	LongJump = 3,
	CoopClimbOverToss = 4,
	ECoopMoveType_MAX = 5
};

// Enum OPP.EClimbOntoAnimType
enum class EClimbOntoAnimType : uint8 {
	None = 0,
	Running = 1,
	Walking = 2,
	EClimbOntoAnimType_MAX = 3
};

// Enum OPP.EJumpOverAnimType
enum class EJumpOverAnimType : uint8 {
	None = 0,
	Running = 1,
	Walking = 2,
	NoContact = 3,
	ClimbOver = 4,
	ClimberJumpOver = 5,
	EJumpOverAnimType_MAX = 6
};

// Enum OPP.HallucinationFadeOutType
enum class HallucinationFadeOutType : uint8 {
	Immediate = 0,
	Normal = 1,
	Fast = 2,
	HallucinationFadeOutType_MAX = 3
};

// Enum OPP.ETalkWheelAction
enum class ETalkWheelAction : uint8 {
	None = 0,
	Help = 1,
	Acknowledge = 2,
	Regroup = 3,
	Wait = 4,
	Danger = 5,
	Thanks = 6,
	OnMyWay = 7,
	Hello = 8,
	ActiveSkill = 9,
	Ping = 10,
	ETalkWheelAction_MAX = 11
};

// Enum OPP.EUINoiseMeterStrength
enum class EUINoiseMeterStrength : uint8 {
	None = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	EUINoiseMeterStrength_MAX = 4
};

// Enum OPP.EPawnCustomizationRequestType
enum class EPawnCustomizationRequestType : uint8 {
	None = 0,
	PlayerCusto = 1,
	NPCCusto = 2,
	EPawnCustomizationRequestType_MAX = 3
};

// Enum OPP.EPlayerComponentDetectionState
enum class EPlayerComponentDetectionState : uint8 {
	Idle = 0,
	Suspicious = 1,
	Alerted = 2,
	EPlayerComponentDetectionState_MAX = 3
};

// Enum OPP.ERegroupObjectiveState
enum class ERegroupObjectiveState : uint8 {
	Invalid = 0,
	WaitingForPlayers = 1,
	WaitingForNPCs = 2,
	WaitingForBP = 3,
	Ready = 4,
	ERegroupObjectiveState_MAX = 5
};

// Enum OPP.ESASState
enum class ESASState : uint8 {
	Invalid = 0,
	NextExitUnlocked = 1,
	InTransition = 2,
	RestartingLevel = 3,
	NextExitLocked = 4,
	Begin = 5,
	ReturnToLobby = 6,
	ESASState_MAX = 7
};

// Enum OPP.ETimingInputResultType
enum class ETimingInputResultType : uint8 {
	Failure = 0,
	PartialSuccess = 1,
	Success = 2,
	ETimingInputResultType_MAX = 3
};

// Enum OPP.EAchievementsErrorCodes
enum class EAchievementsErrorCodes : uint8 {
	Unknown = 0,
	EAchievementsErrorCodes_MAX = 1
};

// Enum OPP.EIKFootRootLocalAxis
enum class EIKFootRootLocalAxis : uint8 {
	NONE = 0,
	X = 1,
	Y = 2,
	Z = 3,
	EIKFootRootLocalAxis_MAX = 4
};

// Enum OPP.EAuthErrorCodes
enum class EAuthErrorCodes : uint8 {
	MissingBaseServiceUrl = 0,
	InvalidSessionResponseFormat = 1,
	InvalidProfileListResponseFormat = 2,
	InvalidProfileResponseFormat = 3,
	UnsupportedPlatform = 4,
	MissingCredentials = 5,
	AuthTokenRequestTimeout = 6,
	InvalidAuthCode = 7,
	MissingRole = 8,
	ProfileNotFound = 9,
	ProfileIdMismatch = 10,
	ProfileVersionCheckFailed = 11,
	AuthenticationFailed = 12,
	InvalidRefreshToken = 13,
	InvalidClientApiKey = 14,
	InvalidServerApiKey = 15,
	SessionGroupNotFound = 16,
	PolicyDocumentNotFound = 17,
	EAuthErrorCodes_MAX = 18
};

// Enum OPP.EProfilePrivilegeRevocationReason
enum class EProfilePrivilegeRevocationReason : uint8 {
	Unknown = 0,
	TermsOfServiceViolation = 1,
	EProfilePrivilegeRevocationReason_MAX = 2
};

// Enum OPP.EProfilePrivilege
enum class EProfilePrivilege : uint8 {
	Invalid = 0,
	Play = 1,
	VoiceChat = 2,
	EProfilePrivilege_MAX = 3
};

// Enum OPP.ECoreAnalyticsErrorCodes
enum class ECoreAnalyticsErrorCodes : uint8 {
	MissingBaseServiceUrl = 0,
	ECoreAnalyticsErrorCodes_MAX = 1
};

// Enum OPP.EConfigurationErrorCodes
enum class EConfigurationErrorCodes : uint8 {
	InvalidConfigurationResponseFormat = 0,
	MissingCredentials = 1,
	InvalidScope = 2,
	InvalidEnvironment = 3,
	ConfigurationNotFound = 4,
	InvalidApplication = 5,
	EConfigurationErrorCodes_MAX = 6
};

// Enum OPP.ECoreMatchmakingErrorCodes
enum class ECoreMatchmakingErrorCodes : uint8 {
	MissingBaseServiceUrl = 0,
	InvalidTicketFormat = 1,
	MatchmakingConfigurationNotFound = 2,
	TicketNotFound = 3,
	TicketCannotBeCanceled = 4,
	GameSessionNotFound = 5,
	GameSessionFull = 6,
	InvalidGameSessionStatus = 7,
	GameSessionPlacementCannotBeCanceled = 8,
	FailedCannotPlayOnlinePrivilegeCheck = 50,
	ECoreMatchmakingErrorCodes_MAX = 51
};

// Enum OPP.ECorePartyErrorCodes
enum class ECorePartyErrorCodes : uint8 {
	MissingBaseServiceUrl = 0,
	UnexpectedResponseFormat = 1,
	TooManyParties = 2,
	PartyNotFound = 3,
	UnauthorizedPartyOperation = 4,
	InvalidPartyOperation = 5,
	CannotPromoteNonMember = 6,
	CannotPromoteSelf = 7,
	InviteRequired = 8,
	InviteNotValid = 9,
	NotInParty = 10,
	PartyFull = 11,
	InvalidPartyData = 12,
	INVALID = 13,
	ECorePartyErrorCodes_MAX = 14
};

// Enum OPP.ECorePresenceErrorCodes
enum class ECorePresenceErrorCodes : uint8 {
	MissingBaseServiceUrl = 0,
	ECorePresenceErrorCodes_MAX = 1
};

// Enum OPP.ECoreStatsErrorCodes
enum class ECoreStatsErrorCodes : uint8 {
	MissingBaseServiceUrl = 0,
	StatConfigNotFound = 1,
	StatContextNotFound = 2,
	StatConfigVersionCheckFailed = 3,
	StatContextVersionCheckFailed = 4,
	StatsUpdateTooLarge = 5,
	ECoreStatsErrorCodes_MAX = 6
};

// Enum OPP.EEntityErrorCodes
enum class EEntityErrorCodes : uint8 {
	MissingBaseServiceUrl = 0,
	InvalidEntityResponseFormat = 1,
	InvalidEntityListResponseFormat = 2,
	EntityCategoryNotFound = 3,
	EntityNotFound = 4,
	EntityNotVisible = 5,
	InvalidApplication = 6,
	InvalidEntityData = 7,
	InvalidEntityId = 8,
	UnauthorizedAdminOperation = 9,
	UnauthorizedApplication = 10,
	UnauthorizedEntityUpdate = 11,
	EntityCategoryVersionCheckFailed = 12,
	EntityVersionCheckFailed = 13,
	EEntityErrorCodes_MAX = 14
};

// Enum OPP.EGameServerErrorCodes
enum class EGameServerErrorCodes : uint8 {
	Disabled = 0,
	EGameServerErrorCodes_MAX = 1
};

// Enum OPP.EInventoryErrorCodes
enum class EInventoryErrorCodes : uint8 {
	MissingBaseServiceUrl = 0,
	InventoryConditionFailed = 1,
	OfferNotFound = 2,
	ItemNotFound = 3,
	DefaultInventoryNotFound = 4,
	ItemVersionCheckFailed = 5,
	OfferVersionCheckFailed = 6,
	DefaultInventoryVersionCheckFailed = 7,
	ProductNotFound = 8,
	ProductSkuNotFound = 9,
	ProductLocalizationDataNotFound = 10,
	ProfilePlatformNotSupported = 11,
	OrderNotFound = 12,
	InvalidOrderStatus = 13,
	EInventoryErrorCodes_MAX = 14
};

// Enum OPP.EMatchmakingErrorCodes
enum class EMatchmakingErrorCodes : uint8 {
	FailedToPingDataCenters = 0,
	NoMatchmakingConfigurationAvailable = 1,
	NoGameSessionQueueAvailable = 2,
	FindMatchCanceled = 3,
	FindMatchFailed = 4,
	FindMatchTimedOut = 5,
	WaitForTicketTimedOut = 6,
	GameSessionPlacementFailed = 7,
	UnexpectedPlayerSessionState = 8,
	WaitForPlacementTimedOut = 9,
	NoAvailableRegion = 10,
	NoValidRegion = 11,
	NoSharedValidRegion = 12,
	MatchRefused = 13,
	EMatchmakingErrorCodes_MAX = 14
};

// Enum OPP.ENewsItemCTAMenuType
enum class ENewsItemCTAMenuType : uint8 {
	None = 0,
	CurrencyPacks = 1,
	ENewsItemCTAMenuType_MAX = 2
};

// Enum OPP.ENewsItemCTAType
enum class ENewsItemCTAType : uint8 {
	None = 0,
	External = 1,
	Menu = 2,
	Product = 3,
	ENewsItemCTAType_MAX = 4
};

// Enum OPP.ENewsItemLocation
enum class ENewsItemLocation : uint8 {
	Unknown = 0,
	MainMenu1 = 1,
	MainMenu2 = 2,
	MainMenu3 = 3,
	MainMenu4 = 4,
	ENewsItemLocation_MAX = 5
};

// Enum OPP.EOnlineCoreErrorCode
enum class EOnlineCoreErrorCode : uint8 {
	Canceled = 0,
	Unexpected = 1,
	OnlineSubsystemError = 2,
	DependenciesNotSatisfied = 3,
	NotConnected = 4,
	HttpRequestFailed = 5,
	HttpRequestUnexpectedStatusCode = 6,
	HttpRequestInvalidResponseBody = 7,
	HttpRequestUnexpectedError = 8,
	HttpRequestUnmappedErrorCode = 9,
	HttpRequestForbidden = 10,
	Shutdown = 11,
	FeatureDisabled = 12,
	Throttled = 13,
	InvalidAuthenticationToken = 14,
	AuthenticationTokenExpired = 15,
	UnauthorizedSource = 16,
	UnauthorizedApplication = 17,
	UnauthorizedProfile = 18,
	NotAuthorized = 19,
	MissingPrivilege = 20,
	ParameterMissing = 21,
	InvalidParameterValue = 22,
	InvalidParameterType = 23,
	UnexpectedParameterValidationError = 24,
	EOnlineCoreErrorCode_MAX = 25
};

// Enum OPP.EOnlineCoreErrorFacility
enum class EOnlineCoreErrorFacility : uint8 {
	Core = 0,
	Platform = 1,
	Configuration = 2,
	Auth = 3,
	Entity = 4,
	Messaging = 5,
	Matchmaking = 6,
	GameServer = 7,
	Analytics = 8,
	Inventory = 9,
	RTA = 10,
	Relationship = 11,
	Party = 12,
	Presence = 13,
	CommunitySift = 14,
	Stats = 15,
	EOnlineCoreErrorFacility_MAX = 16
};

// Enum OPP.EOnlineErrorFacility
enum class EOnlineErrorFacility : uint8 {
	Configuration = 100,
	Matchmaking = 101,
	PlayerProfile = 102,
	PlayerProgression = 103,
	Stats = 104,
	Store = 105,
	Party = 106,
	PlayerStats = 107,
	Achievements = 108,
	EOnlineErrorFacility_MAX = 109
};

// Enum OPP.EPartyErrorCodes
enum class EPartyErrorCodes : uint8 {
	FailedToJoinParty_TimedOutWaitingForInvite = 0,
	FailedToJoinParty_CrossplayRequired = 1,
	FailedToJoinParty_CrossplayNotAllowed = 2,
	FailedToJoinParty_PartyNotFound = 3,
	FailedToJoinParty_InviteRequired = 4,
	FailedToJoinParty_InviteNotValid = 5,
	FailedToJoinParty_PartyFull = 6,
	FailedToJoinParty_FirstPartySessionNotFound = 7,
	FailedToJoinParty_Unknown = 8,
	FailedToCreateFirstPartySession = 9,
	FailedToUpdateFirstPartySession = 10,
	FailedToDestroyFirstPartySession = 11,
	FailedToJoinFirstPartySession = 12,
	FailedToSendFirstPartySessionInvite = 13,
	EPartyErrorCodes_MAX = 14
};

// Enum OPP.EPartyGameSessionState
enum class EPartyGameSessionState : uint8 {
	FindingLobby = 0,
	InLobby = 1,
	InMatch = 2,
	Unknown = 3,
	EPartyGameSessionState_MAX = 4
};

// Enum OPP.EPartyPrivacy
enum class EPartyPrivacy : uint8 {
	Public = 0,
	Friends = 1,
	Private = 2,
	Unknown = 3,
	EPartyPrivacy_MAX = 4
};

// Enum OPP.EPlatformErrorCodes
enum class EPlatformErrorCodes : uint8 {
	NoUniqueNetId = 0,
	Unknown = 1,
	EPlatformErrorCodes_MAX = 2
};

// Enum OPP.EPlayerProgressionErrorCodes
enum class EPlayerProgressionErrorCodes : uint8 {
	NoOfferFoundForPurchase = 0,
	NoOfferFoundForLevelUp = 1,
	EPlayerProgressionErrorCodes_MAX = 2
};

// Enum OPP.EPlayerReportReason
enum class EPlayerReportReason : uint8 {
	AbusiveTextChat = 0,
	AbusiveVoiceChat = 1,
	Griefing = 2,
	NonParticipation = 3,
	Cheating = 4,
	Spam = 5,
	MAX = 6
};

// Enum OPP.EPresenceState
enum class EPresenceState : uint8 {
	InMainMenu = 0,
	InTutorial = 1,
	InLobby = 2,
	PreparingTrial = 3,
	InTrial = 4,
	ReturningToLobby = 5,
	FindingParty = 6,
	Unknown = 7,
	EPresenceState_MAX = 8
};

// Enum OPP.EIntelType
enum class EIntelType : uint8 {
	None = 0,
	Objective = 1,
	Ressource = 2,
	EIntelType_MAX = 3
};

// Enum OPP.EAmbientAwarenessPhase
enum class EAmbientAwarenessPhase : uint8 {
	InStation = 0,
	WaitingForStartle = 1,
	WaitingForIdle = 2,
	WaitingForStation = 3,
	EAmbientAwarenessPhase_MAX = 4
};

// Enum OPP.EAIBoolCommandResult
enum class EAIBoolCommandResult : uint8 {
	Passed = 0,
	Failed = 1,
	EAIBoolCommandResult_MAX = 2
};

// Enum OPP.EAICommandResult
enum class EAICommandResult : uint8 {
	Started = 0,
	Success = 1,
	Failed = 2,
	Interrupted = 3,
	EAICommandResult_MAX = 4
};

// Enum OPP.EPressureConsumptionType
enum class EPressureConsumptionType : uint8 {
	SpawnedBot = 0,
	ObjectiveCompleted = 1,
	EPressureConsumptionType_MAX = 2
};

// Enum OPP.EPressureEventType
enum class EPressureEventType : uint8 {
	Adversity = 0,
	PressureBeat = 1,
	ObjectiveCompleted = 2,
	EPressureEventType_MAX = 3
};

// Enum OPP.EBotCollisionType
enum class EBotCollisionType : uint8 {
	None = 0,
	HeadToHead = 1,
	SideCollision = 2,
	TakeOver = 3,
	Merge = 4,
	EBotCollisionType_MAX = 5
};

// Enum OPP.EAssistType
enum class EAssistType : uint8 {
	LocationAndVelocityPrediction = 0,
	OnlyLocation = 1,
	OnlyVelocityPrediction = 2,
	AverageLocationAndVelocityPrediction = 3,
	LocationToVelocityPredictionRange = 4,
	EAssistType_MAX = 5
};

// Enum OPP.EPlayerVisibilityState
enum class EPlayerVisibilityState : uint8 {
	None = 0,
	Partial = 1,
	Full = 2,
	EPlayerVisibilityState_MAX = 3
};

// Enum OPP.EPlayerAwarenessState
enum class EPlayerAwarenessState : uint8 {
	Unaware = 0,
	ForcedUnaware = 1,
	Aware = 2,
	ForcedAware = 3,
	EPlayerAwarenessState_MAX = 4
};

// Enum OPP.EPlayerVisibilityType
enum class EPlayerVisibilityType : uint8 {
	NotVisible = 0,
	CloseFull = 1,
	ClosePartial = 2,
	FullVisionCone = 3,
	PartialVisionCone = 4,
	EPlayerVisibilityType_MAX = 5
};

// Enum OPP.ERBAISpawnerVersion
enum class ERBAISpawnerVersion : uint8 {
	Initial = 0,
	WithSpawnType = 1,
	SoftMonsterCloset = 2,
	SoftLeashPtr = 3,
	Current = 3,
	ERBAISpawnerVersion_MAX = 4
};

// Enum OPP.EAISpawnControlType
enum class EAISpawnControlType : uint8 {
	AIDirector = 0,
	Always = 1,
	RandomManager = 2,
	Manual = 3,
	EAISpawnControlType_MAX = 4
};

// Enum OPP.EAISpawnerState
enum class EAISpawnerState : uint8 {
	Inactive = 0,
	Spawned = 1,
	Limbo = 2,
	EAISpawnerState_MAX = 3
};

// Enum OPP.EBackgroundCharacterLocomotionState
enum class EBackgroundCharacterLocomotionState : uint8 {
	Idle = 0,
	Starting = 1,
	Moving = 2,
	Stopping = 3,
	EBackgroundCharacterLocomotionState_MAX = 4
};

// Enum OPP.EAnimLogCategory
enum class EAnimLogCategory : uint8 {
	AnimatedStart = 0,
	AnimatedStop = 1,
	Startled = 2,
	StartledReaction = 3,
	Attack = 4,
	ActiveSkills = 5,
	Investigate = 6,
	SpecialMove = 7,
	Other = 8,
	MAX = 9
};

// Enum OPP.EInterruptibilityState
enum class EInterruptibilityState : uint8 {
	EnableInterruption = 0,
	DisableInterruption = 1,
	Custom = 2,
	EInterruptibilityState_MAX = 3
};

// Enum OPP.EPlayerCameraTargetBehavior
enum class EPlayerCameraTargetBehavior : uint8 {
	Animation = 0,
	Manual = 1,
	Gameplay = 2,
	LookAt = 3,
	None = 4,
	EPlayerCameraTargetBehavior_MAX = 5
};

// Enum OPP.EPlayerDamageSetting
enum class EPlayerDamageSetting : uint8 {
	None = 0,
	PulledOutOfHidingSpot = 1,
	ThrownPlayer = 2,
	InitialCoopTrap = 3,
	EPlayerDamageSetting_MAX = 4
};

// Enum OPP.ESpecialMoveNotifyTriggerType
enum class ESpecialMoveNotifyTriggerType : uint8 {
	All = 0,
	PlayerOnly = 1,
	NPCOnly = 2,
	ESpecialMoveNotifyTriggerType_MAX = 3
};

// Enum OPP.ENPCHidespotPeekDistance
enum class ENPCHidespotPeekDistance : uint8 {
	Close = 0,
	Medium = 1,
	Far = 2,
	ENPCHidespotPeekDistance_MAX = 3
};

// Enum OPP.EItemConsumeAnimType
enum class EItemConsumeAnimType : uint8 {
	Standing = 0,
	Crouched = 1,
	Hidespot = 2,
	EItemConsumeAnimType_MAX = 3
};

// Enum OPP.EArmWreslingTableState
enum class EArmWreslingTableState : uint8 {
	WaitingForPlayers = 0,
	MatchIntro = 1,
	MatchInProgress = 2,
	MatchOutro = 3,
	EArmWreslingTableState_MAX = 4
};

// Enum OPP.EMusicEventType
enum class EMusicEventType : uint8 {
	MusicCommand = 0,
	PostPlayEvent = 1,
	PostStopEvent = 2,
	SingleShotTrackEnded = 3,
	EMusicEventType_MAX = 4
};

// Enum OPP.EAudioEventSource
enum class EAudioEventSource : uint8 {
	None = 0,
	Generic = 1,
	OldBlueprintNotify = 2,
	AnimNotify = 3,
	VONotify = 4,
	EAudioEventSource_MAX = 5
};

// Enum OPP.EEmitterUpdateDetail
enum class EEmitterUpdateDetail : uint8 {
	Irrelevant = 0,
	VeryLow = 1,
	Low = 2,
	Normal = 3,
	High = 4,
	EEmitterUpdateDetail_MAX = 5
};

// Enum OPP.EGameModeTestAction
enum class EGameModeTestAction : uint8 {
	None = 0,
	SitInChair = 1,
	StageReady = 2,
	TeleportToSASExit = 3,
	CheatCompleteStage = 4,
	TeleportToStageExit = 5,
	CompleteStage = 6,
	ReturnToLobby = 7,
	EGameModeTestAction_MAX = 8
};

// Enum OPP.EUIAvailableTaskState
enum class EUIAvailableTaskState : uint8 {
	Started = 0,
	Completed = 1,
	EUIAvailableTaskState_MAX = 2
};

// Enum OPP.EBackgroundDoorState
enum class EBackgroundDoorState : uint8 {
	Closed = 0,
	Open = 1,
	EBackgroundDoorState_MAX = 2
};

// Enum OPP.EMinorObjectiveEffetOnMajor
enum class EMinorObjectiveEffetOnMajor : uint8 {
	None = 0,
	CloseMajorPrimaryActorRoom = 1,
	DelayMajorReadyFeedbackOnMinorCompleted = 2,
	DelayMajorEndingOnMinorCompleted = 3,
	EMinorObjectiveEffetOnMajor_MAX = 4
};

// Enum OPP.EObjectiveCoordinatorPopulatePriority
enum class EObjectiveCoordinatorPopulatePriority : uint8 {
	Rails = 0,
	PreDoorRandomization = 1,
	Highest = 2,
	VeryHigh = 3,
	High = 4,
	Normal = 5,
	Low = 6,
	VeryLow = 7,
	Lowest = 8,
	EObjectiveCoordinatorPopulatePriority_MAX = 9
};

// Enum OPP.EBlockableState
enum class EBlockableState : uint8 {
	Unknown = 0,
	Opened = 1,
	PermanentlyBlocked = 2,
	TemporaryBlocked = 3,
	EBlockableState_MAX = 4
};

// Enum OPP.EBlockableLinkType
enum class EBlockableLinkType : uint8 {
	MaximumBlockedCount = 0,
	MinimunUnblockedCount = 1,
	AlsoBlock = 2,
	EBlockableLinkType_MAX = 3
};

// Enum OPP.EPlayerCollisionType
enum class EPlayerCollisionType : uint8 {
	Normal = 0,
	FallingOnly = 1,
	EPlayerCollisionType_MAX = 2
};

// Enum OPP.EBoolCommandResult
enum class EBoolCommandResult : uint8 {
	Passed = 0,
	Failed = 1,
	EBoolCommandResult_MAX = 2
};

// Enum OPP.ERandomSwitch10
enum class ERandomSwitch10 : uint8 {
	Option1 = 0,
	Option2 = 1,
	Option3 = 2,
	Option4 = 3,
	Option5 = 4,
	Option6 = 5,
	Option7 = 6,
	Option8 = 7,
	Option9 = 8,
	Option10 = 9,
	ERandomSwitch10_MAX = 10
};

// Enum OPP.ERandomSwitch5
enum class ERandomSwitch5 : uint8 {
	Option1 = 0,
	Option2 = 1,
	Option3 = 2,
	Option4 = 3,
	Option5 = 4,
	ERandomSwitch5_MAX = 5
};

// Enum OPP.ERandomSwitch4
enum class ERandomSwitch4 : uint8 {
	Option1 = 0,
	Option2 = 1,
	Option3 = 2,
	Option4 = 3,
	ERandomSwitch4_MAX = 4
};

// Enum OPP.ERandomSwitch3
enum class ERandomSwitch3 : uint8 {
	Option1 = 0,
	Option2 = 1,
	Option3 = 2,
	ERandomSwitch3_MAX = 3
};

// Enum OPP.ERandomSwitch2
enum class ERandomSwitch2 : uint8 {
	Option1 = 0,
	Option2 = 1,
	ERandomSwitch2_MAX = 2
};

// Enum OPP.EAISpawnSource
enum class EAISpawnSource : uint8 {
	InitialDirectorSpawn = 0,
	SpawnWave = 1,
	SummonedByAIDirector = 2,
	AlwaysSpawn = 3,
	RandomManager = 4,
	External = 5,
	FromLimbo = 6,
	EAISpawnSource_MAX = 7
};

// Enum OPP.EAIDebugErrorFlags
enum class EAIDebugErrorFlags : uint8 {
	TargetPlayerUnreacheable = 1,
	DestUnreacheable = 2,
	DestNotOnNavmesh = 4,
	NotOnNavmesh = 8,
	EAIDebugErrorFlags_MAX = 9
};

// Enum OPP.EAIDebugConfigFlags
enum class EAIDebugConfigFlags : int32 {
	IgnoringPlayers = 1,
	Neutral = 2,
	AlwaysChase = 16,
	CanChase = 32,
	CanSeePlayers = 64,
	CanHearPlayers = 128,
	CanInvestigate = 256,
	CanBeDisturbed = 512,
	CanAttack = 1024,
	EAIDebugConfigFlags_MAX = 1025
};

// Enum OPP.ERotationMode
enum class ERotationMode : uint8 {
	FaceVelocity = 0,
	FaceTarget = 1,
	Explicit = 2,
	ERotationMode_MAX = 3
};

// Enum OPP.EMoveFailedReason
enum class EMoveFailedReason : uint8 {
	Unknown = 0,
	AINotOnNavMesh = 1,
	TargetNotOnNavMesh = 2,
	NoPathToTarget = 3,
	Aborted = 4,
	EMoveFailedReason_MAX = 5
};

// Enum OPP.EMoveType
enum class EMoveType : uint8 {
	None = 0,
	Point = 1,
	Actor = 2,
	EMoveType_MAX = 3
};

// Enum OPP.EMoveResult
enum class EMoveResult : uint8 {
	None = 0,
	Success = 1,
	Failed = 2,
	Interrupted = 3,
	EMoveResult_MAX = 4
};

// Enum OPP.EMoveStatus
enum class EMoveStatus : uint8 {
	Idle = 0,
	Waiting = 1,
	Paused = 2,
	Moving = 3,
	EMoveStatus_MAX = 4
};

// Enum OPP.EAIScriptedState
enum class EAIScriptedState : uint8 {
	None = 0,
	MovingToAnchor = 1,
	LoopingIdle = 2,
	SingleShotAnim = 3,
	ScriptedAnimStation = 4,
	ScriptedAttack = 5,
	ScriptedStartled = 6,
	EAIScriptedState_MAX = 7
};

// Enum OPP.ENPCMonsterClosetInteractionState
enum class ENPCMonsterClosetInteractionState : uint8 {
	None = 0,
	SpawnWarning = 1,
	DoorOpeningRequested = 2,
	NPCInMovement = 3,
	ENPCMonsterClosetInteractionState_MAX = 4
};

// Enum OPP.ESneakState
enum class ESneakState : uint8 {
	GotoLocation = 0,
	LookAround = 1,
	ESneakState_MAX = 2
};

// Enum OPP.EPlayerAvoidanceState
enum class EPlayerAvoidanceState : uint8 {
	Avoidance = 0,
	LastSegment = 1,
	CheckSurroundings = 2,
	EPlayerAvoidanceState_MAX = 3
};

// Enum OPP.EPlayerAvoidanceType
enum class EPlayerAvoidanceType : uint8 {
	RoomPathing = 0,
	NavDestination = 1,
	EPlayerAvoidanceType_MAX = 2
};

// Enum OPP.EImperativeActionType
enum class EImperativeActionType : uint8 {
	None = 0,
	Radio = 1,
	Generator = 2,
	EImperativeActionType_MAX = 3
};

// Enum OPP.EWaypointValidityStatus
enum class EWaypointValidityStatus : uint8 {
	Valid = 0,
	Disabled = 1,
	CurrentPoint = 2,
	Unavailable = 3,
	FilteredOut = 4,
	Unreacheable = 5,
	EWaypointValidityStatus_MAX = 6
};

// Enum OPP.EPatrolType
enum class EPatrolType : uint8 {
	None = 0,
	Route = 1,
	Point = 2,
	SingleWaypoint = 3,
	AmbientActivity = 4,
	EPatrolType_MAX = 5
};

// Enum OPP.EBreakableObstacleAnimStyle
enum class EBreakableObstacleAnimStyle : uint8 {
	WoodPlanks = 0,
	Window = 1,
	EBreakableObstacleAnimStyle_MAX = 2
};

// Enum OPP.EBreakableLedgeMarkerBehavior
enum class EBreakableLedgeMarkerBehavior : uint8 {
	None = 0,
	EnableOnBreak = 1,
	DisableOnBreak = 2,
	EBreakableLedgeMarkerBehavior_MAX = 3
};

// Enum OPP.EWindowJumpOverType
enum class EWindowJumpOverType : uint8 {
	None = 0,
	WalkToLand = 1,
	RunToLand = 2,
	RunToFall = 3,
	EWindowJumpOverType_MAX = 4
};

// Enum OPP.ECustomizationInteractionType
enum class ECustomizationInteractionType : uint8 {
	ShopNone = 0,
	ShopBuy = 1,
	ShopNoneCantAfford = 2,
	LockerEquip = 3,
	LockerNoneForSale = 4,
	LockerNoneCantAfford = 5,
	NoneLocked = 6,
	LockerEquipAcquiredOptions = 7,
	ShopBuyMissingOptions = 8,
	LockerNone = 9,
	ViewDLCContentPack = 10,
	ECustomizationInteractionType_MAX = 11
};

// Enum OPP.EDebugWorldOctreeObjectType
enum class EDebugWorldOctreeObjectType : uint8 {
	LedgeMarker = 0,
	InteractionZoneComponent = 1,
	Triggerable = 2,
	EDebugWorldOctreeObjectType_MAX = 3
};

// Enum OPP.EDisplayDebugModifier
enum class EDisplayDebugModifier : uint8 {
	None = 0,
	AnimInstance = 1,
	AIConfig = 2,
	AIPointSelection = 3,
	VO = 4,
	EDisplayDebugModifier_MAX = 5
};

// Enum OPP.EFullScreenDebugInfoType
enum class EFullScreenDebugInfoType : uint8 {
	None = 0,
	Player = 1,
	AI = 2,
	PlayerAndAI = 3,
	Physics = 4,
	TQ = 5,
	ActorInView = 6,
	VO = 7,
	SoundEnvironment = 8,
	AudioEvents = 9,
	Music = 10,
	RTPC = 11,
	Streaming = 12,
	Online = 13,
	Overseer = 14,
	WhoWasWhere = 15,
	Objectives = 16,
	GameplayAttributes = 17,
	PlayerCustomization = 18,
	ItemSpawning = 19,
	Variators = 20,
	AnimUsage = 21,
	NPCRandomization = 22,
	MovementNetwork = 23,
	BackgroundCharacters = 24,
	Rooms = 25,
	DoorRandomization = 26,
	BlockableRandomization = 27,
	HidespotRandomization = 28,
	SpecialRooms = 29,
	DarknessDetection = 30,
	VoiceChat = 31,
	PlayerStats = 32,
	GameplayRandomization = 33,
	SwitchMatchRandomization = 34,
	QuickGraphs = 35,
	ChunkInstall = 36,
	ModifiedOptions = 37,
	UI = 38,
	EFullScreenDebugInfoType_MAX = 39
};

// Enum OPP.ECollisionDebugViewType
enum class ECollisionDebugViewType : uint8 {
	None = 0,
	SimpleLineDraw = 1,
	SimpleMeshDraw = 2,
	ComplexMeshDraw = 3,
	ECollisionDebugViewType_MAX = 4
};

// Enum OPP.ECollectibleType
enum class ECollectibleType : uint8 {
	Document = 0,
	Photo = 1,
	ECollectibleType_MAX = 2
};

// Enum OPP.EContainerPopulatedState
enum class EContainerPopulatedState : uint8 {
	Unpopulated = 0,
	Used = 1,
	Empty = 2,
	EContainerPopulatedState_MAX = 3
};

// Enum OPP.EContainerSpawningType
enum class EContainerSpawningType : uint8 {
	StageOnly = 0,
	RewardOnly = 1,
	StageAndReward = 2,
	PuzzleRoom = 3,
	EContainerSpawningType_MAX = 4
};

// Enum OPP.EContainerSpawnLocationPriority
enum class EContainerSpawnLocationPriority : uint8 {
	Low = 0,
	Normal = 1,
	High = 2,
	EContainerSpawnLocationPriority_MAX = 3
};

// Enum OPP.EPlayerBreathType
enum class EPlayerBreathType : uint8 {
	Run = 0,
	Exhausted = 1,
	Pain = 2,
	Crawl = 3,
	EPlayerBreathType_MAX = 4
};

// Enum OPP.ESpectatorMode
enum class ESpectatorMode : uint8 {
	RequestedByPlayer = 0,
	PlayingUnavailable = 1,
	PlayerDead = 2,
	Cheat = 3,
	Replay = 4,
	ESpectatorMode_MAX = 5
};

// Enum OPP.EDeadRepulsionType
enum class EDeadRepulsionType : uint8 {
	Box = 0,
	Spline = 1,
	EDeadRepulsionType_MAX = 2
};

// Enum OPP.EDestructibleActionType
enum class EDestructibleActionType : uint8 {
	AddDisplacement = 0,
	BreakInSphere = 1,
	EDestructibleActionType_MAX = 2
};

// Enum OPP.EDisplayMessageViewMode
enum class EDisplayMessageViewMode : uint8 {
	WithOrWithoutNV = 0,
	OnlyNV = 1,
	OnlyWithoutNV = 2,
	EDisplayMessageViewMode_MAX = 3
};

// Enum OPP.EDisplayMessagePriority
enum class EDisplayMessagePriority : uint8 {
	None = 0,
	Low = 1,
	BelowNormal = 2,
	Normal = 3,
	AboveNormal = 4,
	High = 5,
	EDisplayMessagePriority_MAX = 6
};

// Enum OPP.EDoorCollisionType
enum class EDoorCollisionType : uint8 {
	Full = 0,
	Window = 1,
	SeeThrough = 2,
	EDoorCollisionType_MAX = 3
};

// Enum OPP.EAudioDoorType
enum class EAudioDoorType : uint8 {
	SW_Door_Wood = 0,
	SW_Door_Wood_Window = 1,
	SW_Door_MetalSolid = 2,
	SW_Door_MetalGate = 3,
	SW_Door_MAX = 4
};

// Enum OPP.EDoorRandomization
enum class EDoorRandomization : uint8 {
	Blockable = 0,
	ReplaceableFront = 1,
	ReplaceableBack = 2,
	TrappableFront = 3,
	TrappableBack = 4,
	Lockable = 5,
	OpenCloseFront = 6,
	OpenCloseBack = 7,
	RewardRoomDoor = 8,
	EDoorRandomization_MAX = 9
};

// Enum OPP.EDoorLockerRandomAction
enum class EDoorLockerRandomAction : uint8 {
	UnlockDoor = 0,
	LockDoor = 1,
	UnblockDoor = 2,
	BlockDoor = 3,
	RemoveLock = 4,
	EDoorLockerRandomAction_MAX = 5
};

// Enum OPP.EMapCheckType
enum class EMapCheckType : uint8 {
	EditorRoaming = 0,
	EditorSelected = 1,
	EditorErrored = 2,
	EditorErroredSelected = 3,
	BuildMapCheck = 4,
	EMapCheckType_MAX = 5
};

// Enum OPP.EElectricFloorTrapState
enum class EElectricFloorTrapState : uint8 {
	Hidden = 0,
	ActiveInitialization = 1,
	ActiveOff = 2,
	ActiveWarning = 3,
	ActiveOn = 4,
	ActiveTriggered = 5,
	Inactive = 6,
	Broken = 7,
	EElectricFloorTrapState_MAX = 8
};

// Enum OPP.EElectrocutionSwitchState
enum class EElectrocutionSwitchState : uint8 {
	Idle = 0,
	Intro = 1,
	Starting = 2,
	Active = 3,
	ActiveOverloading = 4,
	Overloaded = 5,
	EElectrocutionSwitchState_MAX = 6
};

// Enum OPP.EGridType
enum class EGridType : uint8 {
	Relative = 0,
	World = 1,
	EGridType_MAX = 2
};

// Enum OPP.EGlobalAIEvaluationType
enum class EGlobalAIEvaluationType : uint8 {
	SingleBot = 0,
	AnyBot = 1,
	EGlobalAIEvaluationType_MAX = 2
};

// Enum OPP.EMainMenuButton
enum class EMainMenuButton : uint8 {
	EnterLobby = 0,
	ReplayTutorial = 1,
	Options = 2,
	Credits = 3,
	Quit = 4,
	EMainMenuButton_MAX = 5
};

// Enum OPP.EGameplayTriggerType
enum class EGameplayTriggerType : uint8 {
	Pushable = 0,
	NPC = 1,
	EGameplayTriggerType_MAX = 2
};

// Enum OPP.ETriggerType
enum class ETriggerType : uint8 {
	Trigger = 0,
	Untrigger = 1,
	ETriggerType_MAX = 2
};

// Enum OPP.EGamepadType
enum class EGamepadType : uint8 {
	XboxOne = 0,
	Xbox360 = 1,
	DualSense = 2,
	Dualshock4 = 3,
	Dualshock3 = 4,
	None = 5,
	EGamepadType_MAX = 6
};

// Enum OPP.EOptionsErrorCode
enum class EOptionsErrorCode : uint8 {
	Default = 0,
	NvidiaCard = 1,
	RaytracingReboot = 2,
	MainMenuOnly = 3,
	None = 4,
	EOptionsErrorCode_MAX = 5
};

// Enum OPP.EOptionsMenuOption
enum class EOptionsMenuOption : uint8 {
	None = 0,
	WindowMode = 1,
	Resolution = 2,
	ResolutionScale = 3,
	VSync = 4,
	RefreshRate = 5,
	CalibrationScreen = 6,
	Brightness = 7,
	HDREnabled = 8,
	HDRPeakBrightness = 9,
	HDRPaperwhite = 10,
	HDRUserInterfaceBrightness = 11,
	QualityPreset = 12,
	ViewDistance = 13,
	Shadows = 14,
	AntiAliasing = 15,
	Texture = 16,
	Effects = 17,
	Reflections = 18,
	Volumetrics = 19,
	AutoDetectQuality = 20,
	Direct3DVersion = 21,
	MotionBlur = 22,
	DLSS = 23,
	FSR2 = 24,
	EnableRT = 25,
	RTShadows = 26,
	RTReflections = 27,
	MasterVolume = 28,
	MusicVolume = 29,
	EffectsVolume = 30,
	EnableVoiceChat = 31,
	VoiceChatPartyOnly = 32,
	VoiceChatInputDevice = 33,
	VoiceChatVolume = 34,
	MicrophoneVolume = 35,
	PushToTalk = 36,
	VoiceActivityDetectorAuto = 37,
	VoiceActivityDetectorHangover = 38,
	VoiceActivityDetectorSensitivity = 39,
	VoiceActivityDetectorNoiseFloor = 40,
	MicTest = 41,
	LookSensitivityMouse = 42,
	LookSensitivityControllerYaw = 43,
	LookSensitivityControllerPitch = 44,
	ToggleRun = 45,
	AutoHideItemInHand = 46,
	InputBindings = 47,
	InvertXAxis = 48,
	InvertYAxis = 49,
	ResetMenuTutorials = 50,
	ResetNonMenuTutorials = 51,
	Crossplay = 52,
	Region = 53,
	InterfacePreset = 54,
	HealthDisplay = 55,
	SanityDisplay = 56,
	NoiseDisplay = 57,
	DarknessDisplay = 58,
	InventoryDisplay = 59,
	ObjectiveDisplay = 60,
	CrosshairDisplay = 61,
	TeammateStatusHUDDisplay = 62,
	TeammateStatusInWorldDisplay = 63,
	TeammateStatusOutsideViewDisplay = 64,
	FriendsOnlineStatusNotifications = 65,
	AllowFriendRequestNotifications = 66,
	AllowPartyInviteNotifications = 67,
	AudioLanguage = 68,
	TextLanguage = 69,
	SubtitlesEnabled = 70,
	SubtitlesLanguage = 71,
	SubtitlesFontSize = 72,
	SubtitlesBackground = 73,
	Max = 74
};

// Enum OPP.EPlayerBarState
enum class EPlayerBarState : uint8 {
	Default = 0,
	Base = 1,
	Upper = 2,
	Boost = 3,
	Temp = 4,
	Damage = 5,
	EPlayerBarState_MAX = 6
};

// Enum OPP.ECustomGhostFinishState
enum class ECustomGhostFinishState : uint8 {
	Success = 0,
	Failed = 1,
	ECustomGhostFinishState_MAX = 2
};

// Enum OPP.EHackQuadrantState
enum class EHackQuadrantState : uint8 {
	Failure = 0,
	Neutral = 1,
	Success = 2,
	EHackQuadrantState_MAX = 3
};

// Enum OPP.EHidespotVerticalDirection
enum class EHidespotVerticalDirection : uint8 {
	Forward = 0,
	ForwardRight = 1,
	Right = 2,
	BackwardRight = 3,
	Backward = 4,
	BackwardLeft = 5,
	Left = 6,
	ForwardLeft = 7,
	EHidespotVerticalDirection_MAX = 8
};

// Enum OPP.EAdjustmentType
enum class EAdjustmentType : uint8 {
	None = 0,
	LocationAndRotation = 1,
	LocationOnly = 2,
	RotationOnly = 3,
	LookAtWithDistance = 4,
	LookAtOnPlace = 5,
	EAdjustmentType_MAX = 6
};

// Enum OPP.EInteractionPriority
enum class EInteractionPriority : uint8 {
	None = 0,
	Low = 1,
	BelowNormal = 2,
	Normal = 3,
	AboveNormal = 4,
	High = 5,
	EInteractionPriority_MAX = 6
};

// Enum OPP.EInvestigationRotationAlignBehavior
enum class EInvestigationRotationAlignBehavior : uint8 {
	None = 0,
	LookAtThisPoint = 1,
	LookAtTarget = 2,
	LookInDirection = 3,
	LookInAxisEitherDirection = 4,
	LookInPlayerDirection = 5,
	EInvestigationRotationAlignBehavior_MAX = 6
};

// Enum OPP.EItemProgressionCategory
enum class EItemProgressionCategory : uint8 {
	None = 0,
	ActiveSkill = 1,
	ActiveSkillUpgrade = 2,
	Perk = 3,
	CharacterUpgrade = 4,
	CustomizationOption = 5,
	CellItem = 6,
	Count = 7,
	EItemProgressionCategory_MAX = 8
};

// Enum OPP.EItemSpawningManagerState
enum class EItemSpawningManagerState : uint8 {
	Unpopulated = 0,
	RemoveContainersOutsideTrial = 1,
	GatherItemRemovingActors = 2,
	RemoveContainersCloseToObjectives = 3,
	RemoveContainersCloseToRandomHelpers = 4,
	RemoveContainersBlockedByHidespot = 5,
	SortActors = 6,
	SetupRewardRooms = 7,
	PopulatingRewardRoomsFirstCurrency = 8,
	PopulatingRewardRooms = 9,
	SetupStageContainers = 10,
	SetupContainerLocks = 11,
	PopulatingMandatoryLockedPrimaryItems = 12,
	PopulatingLockedPrimaryItems = 13,
	PopulatingLockedSecondaryItems = 14,
	PopulatingStageContainers = 15,
	SetupContainerTraps = 16,
	PopulatingContainerTraps = 17,
	Populated = 18,
	EItemSpawningManagerState_MAX = 19
};

// Enum OPP.EItemLockType
enum class EItemLockType : uint8 {
	AllowedSecondaryItem = 0,
	CannotBeLocked = 1,
	PrimaryAndSecondaryItem = 2,
	PrimaryItemOnly = 3,
	MandatoryPrimaryItem = 4,
	EItemLockType_MAX = 5
};

// Enum OPP.EJumpScareFlags
enum class EJumpScareFlags : uint8 {
	InvalidIfRunning = 0,
	InvalidIfWalking = 1,
	InvalidIfCrouched = 2,
	InvalidIfChased = 3,
	InvalidIfKnockedDown = 4,
	InvalidIfInDifferentRoom = 5,
	TriggerOnLineOfSight = 6,
	UseRoomVolume = 7,
	EJumpScareFlags_MAX = 8
};

// Enum OPP.ELeashType
enum class ELeashType : uint8 {
	CantLeave = 0,
	CantEnter = 1,
	ELeashType_MAX = 2
};

// Enum OPP.ELedgeCoopMoveType
enum class ELedgeCoopMoveType : uint8 {
	None = 0,
	CoopWall = 1,
	CoopThrowCatch = 2,
	CoopClimbOver = 3,
	ELedgeCoopMoveType_MAX = 4
};

// Enum OPP.EHybridLightChannel
enum class EHybridLightChannel : uint8 {
	None = 0,
	Red = 1,
	Blue = 2,
	Green = 3,
	EHybridLightChannel_MAX = 4
};

// Enum OPP.EMuffleLevel
enum class EMuffleLevel : uint8 {
	Off = 0,
	Low = 1,
	High = 2,
	EMuffleLevel_MAX = 3
};

// Enum OPP.ERBMicrophoneTestState
enum class ERBMicrophoneTestState : uint8 {
	Disabled = 0,
	Connecting = 1,
	Connected = 2,
	ERBMicrophoneTestState_MAX = 3
};

// Enum OPP.EMinigameState
enum class EMinigameState : uint8 {
	Deactivated = 0,
	ActivatedNotStarted = 1,
	ActivatedNotCompleted = 2,
	ActivatedPrizeAvailable = 3,
	Completed = 4,
	EMinigameState_MAX = 5
};

// Enum OPP.EMonsterClosetState
enum class EMonsterClosetState : uint8 {
	Closed = 0,
	Open = 1,
	Moving = 2,
	EMonsterClosetState_MAX = 3
};

// Enum OPP.ERBSpecialMoveDesyncType
enum class ERBSpecialMoveDesyncType : int32 {
	None = 0,
	Timestamp = 1,
	SpecialMoveIndex = 2,
	SpecialMoveType = 4,
	LocomotionMoveType = 8,
	Interactible = 16,
	Stamina = 32,
	Direction = 64,
	Location = 128,
	Prediction = 256,
	ERBSpecialMoveDesyncType_MAX = 257
};

// Enum OPP.ENetworkSyncType
enum class ENetworkSyncType : uint8 {
	ForwardOnce = 0,
	BackwardOnce = 1,
	PingPong = 2,
	PingPongSine = 3,
	ForwardLoop = 4,
	BackwardLoop = 5,
	Noise = 6,
	ENetworkSyncType_MAX = 7
};

// Enum OPP.ENPCInterruptActionType
enum class ENPCInterruptActionType : uint8 {
	None = 0,
	ThrowableBody = 1,
	ThrowableHead = 2,
	Shove = 3,
	HealSlowdown = 4,
	BlindMine = 5,
	AmpHit = 6,
	Amp = 7,
	ENPCInterruptActionType_MAX = 8
};

// Enum OPP.ENPCAnimSetStyle
enum class ENPCAnimSetStyle : uint8 {
	HH = 0,
	H1 = 1,
	H2 = 2,
	ENPCAnimSetStyle_MAX = 3
};

// Enum OPP.ENPCCustomizationSlot
enum class ENPCCustomizationSlot : uint8 {
	Hair = 0,
	Head = 1,
	Watch = 2,
	UpperBody = 3,
	LowerBody = 4,
	None = 5,
	ENPCCustomizationSlot_MAX = 6
};

// Enum OPP.ESeparatorTubeState
enum class ESeparatorTubeState : uint8 {
	AllClosed = 0,
	OpenOutside = 1,
	OpenInside = 2,
	ESeparatorTubeState_MAX = 3
};

// Enum OPP.ENVState
enum class ENVState : uint8 {
	Off = 0,
	OnPowered = 1,
	OnUnPowered = 2,
	ENVState_MAX = 3
};

// Enum OPP.ENVSoundType
enum class ENVSoundType : uint8 {
	TurnOn = 0,
	TurnOnLowBattery = 1,
	OutOfBattery = 2,
	Repowered = 3,
	TurnOff = 4,
	ENVSoundType_MAX = 5
};

// Enum OPP.EObjectiveGroupCompletionLogic
enum class EObjectiveGroupCompletionLogic : uint8 {
	AllObjectivesCompleted = 0,
	AnyObjectiveCompleted = 1,
	EObjectiveGroupCompletionLogic_MAX = 2
};

// Enum OPP.EOptionsMenuValueType
enum class EOptionsMenuValueType : uint8 {
	None = 0,
	Bool = 1,
	Int = 2,
	Float = 3,
	IntPoint = 4,
	String = 5,
	EOptionsMenuValueType_MAX = 6
};

// Enum OPP.EOptionsTabType
enum class EOptionsTabType : uint8 {
	None = 0,
	General = 1,
	Controls = 2,
	Graphics = 3,
	Audio = 4,
	Network = 5,
	EOptionsTabType_MAX = 6
};

// Enum OPP.EPawnSearchFlags
enum class EPawnSearchFlags : uint8 {
	None = 0,
	IgnoreBots = 1,
	IgnorePlayers = 2,
	FavorBots = 4,
	FavorPlayers = 8,
	PrioritizeBots = 16,
	PrioritizePlayers = 32,
	IgnoreSpectre = 64,
	EPawnSearchFlags_MAX = 65
};

// Enum OPP.ELandOntoLedgeType
enum class ELandOntoLedgeType : uint8 {
	Land25 = 0,
	RunJump25 = 1,
	Land50 = 2,
	Land100 = 3,
	ELandOntoLedgeType_MAX = 4
};

// Enum OPP.ECantShoveReason
enum class ECantShoveReason : uint8 {
	Cooldown = 0,
	ECantShoveReason_MAX = 1
};

// Enum OPP.EShowItemCategory
enum class EShowItemCategory : uint8 {
	Fist = 0,
	SmallWeapon = 1,
	HealthItem = 2,
	Utility = 3,
	All = 4,
	EShowItemCategory_MAX = 5
};

// Enum OPP.ECameraShakeType
enum class ECameraShakeType : uint8 {
	Gameplay = 0,
	Scripted = 1,
	Psychosis = 2,
	Pushable = 3,
	Sliding = 4,
	GruntFootstep = 5,
	StumblingDownStairs = 6,
	ECameraShakeType_MAX = 7
};

// Enum OPP.EPlayerCustomizationSexQueryType
enum class EPlayerCustomizationSexQueryType : uint8 {
	All = 0,
	Male = 1,
	Female = 2,
	EPlayerCustomizationSexQueryType_MAX = 3
};

// Enum OPP.ECustomizationItemAvailability
enum class ECustomizationItemAvailability : uint8 {
	None = 0,
	ForSale = 1,
	Locked = 2,
	LockedRequiresDLC = 4,
	Acquired = 8,
	CantAfford = 16,
	SomeOptionsAcquired = 32,
	ECustomizationItemAvailability_MAX = 33
};

// Enum OPP.EPlayerGameSessionTransitionType
enum class EPlayerGameSessionTransitionType : uint8 {
	None = 0,
	JoiningParty = 1,
	JoiningPartyGameSession = 2,
	FindingNewLobbyForParty = 3,
	WaitingForNewLobby = 4,
	ReturningToLobby = 5,
	EPlayerGameSessionTransitionType_MAX = 6
};

// Enum OPP.EMenuUpgradeItemState
enum class EMenuUpgradeItemState : uint8 {
	Locked = 0,
	Available = 1,
	AvailableNoRessources = 2,
	Acquired = 3,
	LockedGeneric = 4,
	LockedNeedPlayerLevelUp = 5,
	LockedNeedItem = 6,
	LockedNeedUnlock = 7,
	EMenuUpgradeItemState_MAX = 8
};

// Enum OPP.ERespawnerState
enum class ERespawnerState : uint8 {
	Available = 0,
	WaitingForPlayerToSpawn = 1,
	OpeningDoors = 2,
	WaitingForPlayerToExit = 3,
	ClosingDoors = 4,
	ERespawnerState_MAX = 5
};

// Enum OPP.EPlayerStatContextType
enum class EPlayerStatContextType : uint8 {
	Global = 0,
	Character = 1,
	Trial = 2,
	EPlayerStatContextType_MAX = 3
};

// Enum OPP.EPlayerTrialRating
enum class EPlayerTrialRating : uint8 {
	F = 0,
	D = 1,
	DPlus = 2,
	CMinus = 3,
	C = 4,
	CPlus = 5,
	BMinus = 6,
	B = 7,
	BPlus = 8,
	AMinus = 9,
	A = 10,
	APlus = 11,
	Invalid = 12,
	EPlayerTrialRating_MAX = 13
};

// Enum OPP.EPlayerBadgeThresholdOperator
enum class EPlayerBadgeThresholdOperator : uint8 {
	Greater = 0,
	GreaterEqual = 1,
	Lower = 2,
	LowerEqual = 3,
	Equal = 4,
	EPlayerBadgeThresholdOperator_MAX = 5
};

// Enum OPP.EPlayerStatAggregationType
enum class EPlayerStatAggregationType : uint8 {
	Increment = 0,
	Minimum = 1,
	Maximum = 2,
	EPlayerStatAggregationType_MAX = 3
};

// Enum OPP.EPlayerTriggerType
enum class EPlayerTriggerType : uint8 {
	SelectCondition = 0,
	AllPlayer = 1,
	HalfOfAllPlayer = 2,
	SpecificNumberOfPlayer = 3,
	EPlayerTriggerType_MAX = 4
};

// Enum OPP.EPressureValveType
enum class EPressureValveType : uint8 {
	Unspecified = 0,
	ActiveConnected = 1,
	ActiveDisconnected = 2,
	InactiveConnected = 3,
	InactiveDisconnected = 4,
	EPressureValveType_MAX = 5
};

// Enum OPP.EPsychosisMineState
enum class EPsychosisMineState : uint8 {
	None = 0,
	Deployed = 1,
	Activated = 2,
	Broken = 3,
	Expired = 4,
	Finished = 5,
	EPsychosisMineState_MAX = 6
};

// Enum OPP.EPushableDirection
enum class EPushableDirection : uint8 {
	Forward = 0,
	Backward = 1,
	Right = 2,
	Left = 3,
	EPushableDirection_MAX = 4
};

// Enum OPP.ERandomAmbientSoundType
enum class ERandomAmbientSoundType : uint8 {
	Small = 0,
	Medium = 1,
	Large = 2,
	ERandomAmbientSoundType_MAX = 3
};

// Enum OPP.ERandomGroupIgnoreRule
enum class ERandomGroupIgnoreRule : uint8 {
	RandomGroup = 0,
	AnyRandomActor = 1,
	AllRandomActor = 2,
	ERandomGroupIgnoreRule_MAX = 3
};

// Enum OPP.ERandomState
enum class ERandomState : uint8 {
	None = 0,
	StateA = 1,
	StateB = 2,
	ERandomState_MAX = 3
};

// Enum OPP.ELedgeMarkerSetup
enum class ELedgeMarkerSetup : uint8 {
	EnabledWhenHidden = 0,
	EnabledWhenVisible = 1,
	ELedgeMarkerSetup_MAX = 2
};

// Enum OPP.ESoundConnectorSetup
enum class ESoundConnectorSetup : uint8 {
	ActiveOpen = 0,
	ActiveClosed = 1,
	Inactive = 2,
	ESoundConnectorSetup_MAX = 3
};

// Enum OPP.ERandomManagerUpdatingPriority
enum class ERandomManagerUpdatingPriority : uint8 {
	High = 0,
	Normal = 1,
	Low = 2,
	ERandomManagerUpdatingPriority_MAX = 3
};

// Enum OPP.ERandomManagerPopulatingOrder
enum class ERandomManagerPopulatingOrder : uint8 {
	Gates = 0,
	Traps = 1,
	ERandomManagerPopulatingOrder_MAX = 2
};

// Enum OPP.ERandomManagerExecutionOrder
enum class ERandomManagerExecutionOrder : uint8 {
	First = 0,
	Rails = 1,
	Gates = 2,
	Earlier = 3,
	SomewhatEarlier = 4,
	Normal = 5,
	SomewhatLater = 6,
	Later = 7,
	Last = 8,
	UsePopulatingOrderInstead = 9,
	ERandomManagerExecutionOrder_MAX = 10
};

// Enum OPP.ERepulsionReactionFilter
enum class ERepulsionReactionFilter : uint8 {
	All = 0,
	OnlyPlayers = 1,
	OnlyNPCs = 2,
	ERepulsionReactionFilter_MAX = 3
};

// Enum OPP.ERepulsionReactionType
enum class ERepulsionReactionType : uint8 {
	None = 0,
	Light = 1,
	Heavy = 2,
	ERepulsionReactionType_MAX = 3
};

// Enum OPP.ERepulsionRuleType
enum class ERepulsionRuleType : uint8 {
	All = 0,
	SpecificActors = 1,
	Others = 2,
	AllPlayers = 3,
	AllNPCs = 4,
	Except = 5,
	None = 6,
	ERepulsionRuleType_MAX = 7
};

// Enum OPP.ERepulsionShape
enum class ERepulsionShape : uint8 {
	Box = 0,
	Cylinder = 1,
	ERepulsionShape_MAX = 2
};

// Enum OPP.ERepulsionDirectionFlags
enum class ERepulsionDirectionFlags : uint8 {
	Forward = 0,
	Backward = 1,
	Right = 2,
	Left = 3,
	ERepulsionDirectionFlags_MAX = 4
};

// Enum OPP.ERoomSize
enum class ERoomSize : uint8 {
	VerySmall = 0,
	Small = 1,
	Medium = 2,
	Large = 3,
	ERoomSize_MAX = 4
};

// Enum OPP.ERoomType
enum class ERoomType : uint8 {
	Normal = 0,
	CoopOnly = 1,
	ERoomType_MAX = 2
};

// Enum OPP.ERoomConnectionType
enum class ERoomConnectionType : uint8 {
	Normal = 0,
	Coop = 1,
	CrouchUnder = 2,
	ERoomConnectionType_MAX = 3
};

// Enum OPP.ERoomConnectionState
enum class ERoomConnectionState : uint8 {
	Open = 0,
	Closed = 1,
	ClosedTemporarily = 2,
	ClosedForQuery = 3,
	ERoomConnectionState_MAX = 4
};

// Enum OPP.ESASTransitionDirection
enum class ESASTransitionDirection : uint8 {
	Invalid = 0,
	MapEntrance = 1,
	MapExit = 2,
	Random = 3,
	Deprecated = 4,
	ESASTransitionDirection_MAX = 5
};

// Enum OPP.AutoDoorState
enum class AutoDoorState : uint8 {
	Closed = 0,
	Open = 1,
	WaitingForPlayerEnter = 2,
	WaitingForPlayerExit = 3,
	AutoDoorState_MAX = 4
};

// Enum OPP.EScriptedAnimSlotType
enum class EScriptedAnimSlotType : uint8 {
	Disabled = 0,
	NPC = 1,
	AnimatedMesh = 2,
	EScriptedAnimSlotType_MAX = 3
};

// Enum OPP.ESimpleObjectiveType
enum class ESimpleObjectiveType : uint8 {
	Custom = 0,
	GotoTriggerVolume = 1,
	Interact = 2,
	Operate = 3,
	Trigger = 4,
	MoveObjectTo = 5,
	UseOnObject = 6,
	ESimpleObjectiveType_MAX = 7
};

// Enum OPP.EDoorLockType
enum class EDoorLockType : uint8 {
	SlidingLock = 0,
	DoubleDoorPlanks = 1,
	MetalBar = 2,
	EDoorLockType_MAX = 3
};

// Enum OPP.ESocialMenuSceneActorType
enum class ESocialMenuSceneActorType : uint8 {
	Invalid = 0,
	SocialMenu = 1,
	PhotoFinish = 2,
	ESocialMenuSceneActorType_MAX = 3
};

// Enum OPP.ESocialMenuSceneActorSlot
enum class ESocialMenuSceneActorSlot : uint8 {
	Single = 0,
	Party1 = 1,
	Party2 = 2,
	Party3 = 3,
	Party4 = 4,
	ESocialMenuSceneActorSlot_MAX = 5
};

// Enum OPP.ERBSocialMenuEntryFlag
enum class ERBSocialMenuEntryFlag : uint8 {
	IsSelf = 0,
	InCurrentGame = 1,
	PartyOwner = 2,
	PartyMember = 3,
	PendingPartyInvite = 4,
	Friend = 5,
	PlatformFriend = 6,
	PendingFriendRequest = 7,
	PendingSentFriendRequest = 8,
	PlatformPendingFriendRequest = 9,
	PlatformPendingSentFriendRequest = 10,
	ERBSocialMenuEntryFlag_MAX = 11
};

// Enum OPP.ERBSocialMenuEntryListType
enum class ERBSocialMenuEntryListType : uint8 {
	Unknown = 0,
	Party = 1,
	Friends = 2,
	RecentExperiments = 3,
	Lobby = 4,
	Blocked = 5,
	PartyInvite = 6,
	ERBSocialMenuEntryListType_MAX = 7
};

// Enum OPP.ESoundTrapActivator
enum class ESoundTrapActivator : uint8 {
	NPC = 0,
	Player = 1,
	Projectile = 2,
	ESoundTrapActivator_MAX = 3
};

// Enum OPP.ESoundVolumeType
enum class ESoundVolumeType : uint8 {
	ST_Volume_Interior = 0,
	ST_Volume_Exterior = 1,
	ST_Volume_MAX = 2
};

// Enum OPP.EAreaExitPointType
enum class EAreaExitPointType : uint8 {
	None = 0,
	Point = 1,
	Line = 2,
	Door = 3,
	EAreaExitPointType_MAX = 4
};

// Enum OPP.EStalkingObjectiveType
enum class EStalkingObjectiveType : uint8 {
	StealthStalk = 0,
	PackHunt = 1,
	EStalkingObjectiveType_MAX = 2
};

// Enum OPP.EStreamingCommandType
enum class EStreamingCommandType : uint8 {
	PrepareMapChange = 0,
	CancelPendingMapChange = 1,
	UnloadLevels = 2,
	CommitMapChange = 3,
	EStreamingCommandType_MAX = 4
};

// Enum OPP.EFlipSwitchState
enum class EFlipSwitchState : uint8 {
	None = 0,
	Removed = 1,
	On = 2,
	Off = 3,
	Hidden = 4,
	EFlipSwitchState_MAX = 5
};

// Enum OPP.ESwitchPanelPartType
enum class ESwitchPanelPartType : uint8 {
	Toggle = 0,
	LookAt = 1,
	InputRotation = 2,
	ESwitchPanelPartType_MAX = 3
};

// Enum OPP.ETaskState
enum class ETaskState : uint8 {
	Pending = 0,
	InProgress = 1,
	Completed = 2,
	ETaskState_MAX = 3
};

// Enum OPP.ETaskProgressionDisplayType
enum class ETaskProgressionDisplayType : uint8 {
	None = 0,
	Counter = 1,
	ETaskProgressionDisplayType_MAX = 2
};

// Enum OPP.ETaskType
enum class ETaskType : uint8 {
	Daily = 0,
	Weekly = 1,
	MAX = 2
};

// Enum OPP.ERBTextChatType
enum class ERBTextChatType : uint8 {
	Notification = 0,
	PartyNotification = 1,
	FriendNotification = 2,
	TalkWheel = 3,
	MAX = 4
};

// Enum OPP.ETrapScenarioState
enum class ETrapScenarioState : uint8 {
	Removed = 0,
	Added = 1,
	ETrapScenarioState_MAX = 2
};

// Enum OPP.ELinkedMarkersActivationLogic
enum class ELinkedMarkersActivationLogic : uint8 {
	ActivateOnTriggered = 0,
	DeactivateOnTriggered = 1,
	ActivateOnUntriggered = 2,
	DeactivateOnUntriggered = 3,
	ELinkedMarkersActivationLogic_MAX = 4
};

// Enum OPP.EOverrideOperatorAction
enum class EOverrideOperatorAction : uint8 {
	DoNothing = 0,
	OverrideOnActivation = 1,
	OverrideOnDeactivation = 2,
	EOverrideOperatorAction_MAX = 3
};

// Enum OPP.NPCBlendOutCondition
enum class NPCBlendOutCondition : uint8 {
	Running = 0,
	Always = 1,
	NPCBlendOutCondition_MAX = 2
};

// Enum OPP.ESubtitlePriority
enum class ESubtitlePriority : uint8 {
	Low = 0,
	BelowNormal = 1,
	Normal = 2,
	AboveNormal = 3,
	High = 4,
	ESubtitlePriority_MAX = 5
};

// Enum OPP.ELandingType
enum class ELandingType : uint8 {
	Hard = 0,
	Medium = 1,
	Normal = 2,
	Knockdown = 3,
	Dead = 4,
	ELandingType_MAX = 5
};

// Enum OPP.EHitReactionState
enum class EHitReactionState : uint8 {
	DisableHitReaction = 0,
	EnableHitReaction = 1,
	CustomHitReaction = 2,
	EHitReactionState_MAX = 3
};

// Enum OPP.EThrowableWeaponGameplayFlag
enum class EThrowableWeaponGameplayFlag : uint8 {
	None = 0,
	CanCauseKnockdownReaction = 1,
	CanInteruptActions = 2,
	CanInterruptGroundAndPound = 4,
	CanBreakWindows = 8,
	CanBreakTraps = 16,
	All = 31,
	EThrowableWeaponGameplayFlag_MAX = 32
};

// Enum OPP.EStaminaCostType
enum class EStaminaCostType : uint8 {
	None = 0,
	Minimum = 1,
	Small = 2,
	Medium = 3,
	High = 4,
	VeryHigh = 5,
	Maximum = 6,
	EStaminaCostType_MAX = 7
};

// Enum OPP.EPickupType
enum class EPickupType : uint8 {
	Normal = 0,
	Consume = 1,
	TradeNormal = 2,
	TradeConsume = 3,
	EPickupType_MAX = 4
};

// Enum OPP.EJumpType
enum class EJumpType : uint8 {
	Standing = 0,
	Walking = 1,
	Backward = 2,
	Running = 3,
	EJumpType_MAX = 4
};

// Enum OPP.EGraphicsRHI
enum class EGraphicsRHI : uint8 {
	DefaultGraphicsRHI_Default = 0,
	DefaultGraphicsRHI_DX11 = 1,
	DefaultGraphicsRHI_DX12 = 2,
	DefaultGraphicsRHI_Vulkan = 3,
	DefaultGraphicsRHI_MAX = 4
};

// Enum OPP.ENarrativeScreenDataTableLogic
enum class ENarrativeScreenDataTableLogic : uint8 {
	PlaySingleRow = 0,
	PlaySingleRandomRow = 1,
	PlayAllRowsInOrder = 2,
	PlayAllRowsInOrderAndLoop = 3,
	PlayAllRowsRandom = 4,
	ENarrativeScreenDataTableLogic_MAX = 5
};

// Enum OPP.EClientTravelSource
enum class EClientTravelSource : uint8 {
	Unknown = 0,
	MainMenu = 1,
	Tutorial = 2,
	Lobby = 3,
	Experiment = 4,
	ExperimentFail = 5,
	Release = 6,
	ReleaseFail = 7,
	EClientTravelSource_MAX = 8
};

// Enum OPP.EUIFontSize
enum class EUIFontSize : uint8 {
	Small = 0,
	Medium = 1,
	Large = 2,
	EUIFontSize_MAX = 3
};

// Enum OPP.ELoadoutCantEquipReason
enum class ELoadoutCantEquipReason : uint8 {
	None = 0,
	NoFreeSlot = 1,
	ELoadoutCantEquipReason_MAX = 2
};

// Enum OPP.EHoldDurationType
enum class EHoldDurationType : uint8 {
	None = 0,
	Short = 1,
	Long = 2,
	Progress = 3,
	EHoldDurationType_MAX = 4
};

// Enum OPP.EGhostAnimEvent
enum class EGhostAnimEvent : uint8 {
	Attach = 0,
	Detach = 1,
	Action = 2,
	EGhostAnimEvent_MAX = 3
};

// Enum OPP.ECategoryButtonState
enum class ECategoryButtonState : uint8 {
	Locked = 0,
	Available = 1,
	Acquired = 2,
	Empty = 3,
	Invalid = 4,
	ECategoryButtonState_MAX = 5
};

// Enum OPP.EPawnAnimQuality
enum class EPawnAnimQuality : uint8 {
	VeryHigh = 0,
	High = 1,
	Med = 2,
	Low = 3,
	VeryLow = 4,
	EPawnAnimQuality_MAX = 5
};

// Enum OPP.EDoorInvestigationType
enum class EDoorInvestigationType : uint8 {
	None = 0,
	OpenInvestigateSide = 1,
	OpenInvestigateWide = 2,
	ClosedInvestigatePeek = 3,
	ClosedInvestigateSide = 4,
	ClosedInvestigateWide = 5,
	LockedInvestigate = 6,
	EDoorInvestigationType_MAX = 7
};

// Enum OPP.EVOBehavior
enum class EVOBehavior : uint8 {
	Queue = 0,
	InterruptIfBusy = 1,
	SkipIfBusy = 2,
	EVOBehavior_MAX = 3
};

// Enum OPP.EVOPriority
enum class EVOPriority : uint8 {
	VeryLow = 0,
	Low = 1,
	Normal = 2,
	High = 3,
	VeryHigh = 4,
	EVOPriority_MAX = 5
};

// Enum OPP.EFullTurnDirection
enum class EFullTurnDirection : uint8 {
	Forward = 0,
	Right_46 = 1,
	Right_91 = 2,
	Right_136 = 3,
	Right_181 = 4,
	Left_46 = 5,
	Left_91 = 6,
	Left_136 = 7,
	Left_181 = 8,
	MAX = 9
};

// Enum OPP.ELocomotionTurnDirection
enum class ELocomotionTurnDirection : uint8 {
	Forward = 0,
	Right_91 = 1,
	Right_181 = 2,
	Left_91 = 3,
	Left_181 = 4,
	MAX = 5
};

// Enum OPP.ELocomotionMovementSpeed
enum class ELocomotionMovementSpeed : uint8 {
	Stopped = 0,
	Walk = 1,
	Stride = 2,
	Jog = 3,
	Run = 4,
	Combat = 5,
	MAX = 6
};

// Enum OPP.ETriggerableActionBehavior
enum class ETriggerableActionBehavior : uint8 {
	ActivateAndDeactivate = 0,
	OnlyActivate = 1,
	OnlyDeactivate = 2,
	ETriggerableActionBehavior_MAX = 3
};

// Enum OPP.EMatchCancelationReason
enum class EMatchCancelationReason : uint8 {
	Manual = 0,
	PartyChanged = 1,
	WaitForMatchFailed = 2,
	WaitForPartyFailed = 3,
	Error = 4,
	EMatchCancelationReason_MAX = 5
};

// Enum OPP.EPlayerSpawnType
enum class EPlayerSpawnType : uint8 {
	NewPlayer = 0,
	StageReset = 1,
	EndOfStage = 2,
	StageRespawn = 3,
	Rejoined = 4,
	Cheat = 5,
	EPlayerSpawnType_MAX = 6
};

// Enum OPP.EHudMode
enum class EHudMode : uint8 {
	NoHUD = 0,
	DebugDisplay = 1,
	InGameExperiment = 2,
	Spectator = 3,
	Menu = 4,
	Loading = 5,
	Cinematic = 6,
	InGameLobby = 7,
	SAS = 8,
	StageIntro = 9,
	Invalid = 10,
	EHudMode_MAX = 11
};

// Enum OPP.EPlayerTargetPriority
enum class EPlayerTargetPriority : uint8 {
	Normal = 0,
	High = 1,
	EPlayerTargetPriority_MAX = 2
};

// Enum OPP.EUniqueVariatorType
enum class EUniqueVariatorType : uint8 {
	Invalid = 0,
	NPCBashDamageMultiplier = 1,
	OnlyBigGrunts = 2,
	ForcedStartingHealth = 3,
	NoRigs = 4,
	ForcedExtraLivesCount = 5,
	EnemiesPsychosisAura = 6,
	EnemiesStaminaDrainAura = 7,
	NoRunning = 8,
	PlayerDamageLeash = 9,
	Hardcore = 10,
	PeriodicGas = 11,
	NPCPopulation_Low = 12,
	NPCPopulation_High = 13,
	NPCPopulation_VeryHigh = 14,
	ObjectiveDiscoveryDistanceMultiplier = 15,
	TrapReactionDelayMultiplier = 16,
	NumberOfLockedContainersMultiplier = 17,
	ExtraPsychosisOnDamage = 18,
	NoDeaths = 19,
	EUniqueVariatorType_MAX = 20
};

// Enum OPP.ETriggerComponentNetType
enum class ETriggerComponentNetType : uint8 {
	ServerOnly = 0,
	ClientOnly = 1,
	ServerAndClients = 2,
	ETriggerComponentNetType_MAX = 3
};

// Enum OPP.EActiveSkillState
enum class EActiveSkillState : uint8 {
	None = 0,
	Placed = 1,
	Deployed = 2,
	Activated = 3,
	Expired = 4,
	Finished = 5,
	EActiveSkillState_MAX = 6
};

// Enum OPP.EQuestGiverMenuCategory
enum class EQuestGiverMenuCategory : uint8 {
	Tasks = 0,
	Upgrade = 1,
	Shop = 2,
	MAX = 3
};

// Enum OPP.EMetaNPCType
enum class EMetaNPCType : uint8 {
	Engineer = 0,
	Pharmacist = 1,
	ShadowyDame = 2,
	Director = 3,
	Count = 4,
	None = 5,
	EMetaNPCType_MAX = 6
};

// Enum OPP.EProfileUpgradeCategory
enum class EProfileUpgradeCategory : uint8 {
	Core = 0,
	PerkSlot = 1,
	Count = 2,
	None = 3,
	EProfileUpgradeCategory_MAX = 4
};

// Enum OPP.ERadialWheelType
enum class ERadialWheelType : uint8 {
	None = 0,
	Talk = 1,
	Inventory = 2,
	ERadialWheelType_MAX = 3
};

// Enum OPP.EMainObjectiveType
enum class EMainObjectiveType : uint8 {
	Main = 0,
	Prologue = 1,
	Epilogue = 2,
	EMainObjectiveType_MAX = 3
};

// Enum OPP.EGameEventImportanceLevel
enum class EGameEventImportanceLevel : uint8 {
	Low = 0,
	Normal = 1,
	High = 2,
	EGameEventImportanceLevel_MAX = 3
};

// Enum OPP.EGameEvent
enum class EGameEvent : uint8 {
	None = 0,
	StageStarted = 1,
	EndOfStageReached = 2,
	EndOfStageStats = 3,
	CompletedObjectiveCoordinator = 4,
	CompletedSingleObjective = 5,
	PlayerIncapacitated = 6,
	PlayerRevived = 7,
	PlayerKilled = 8,
	PlayerLeftGame = 9,
	PlayerRespawned = 10,
	PlayerDruggedByPusher = 11,
	PlayerEnteredSAS = 12,
	PlayerExitedSAS = 13,
	GaveItem = 14,
	UsedItem = 15,
	PickupItem = 16,
	BotKnockedOut = 17,
	BotKnockedOutByDynamicObstacle = 18,
	BotKilled = 19,
	CoopDoorBash = 20,
	CoopLedgeCatch = 21,
	CoopLegUp = 22,
	CoopLedgePull = 23,
	PouncersSpawned = 24,
	SpecialBotSpawned = 25,
	SpawnWave = 26,
	AIDirector = 27,
	EGameEvent_MAX = 28
};

// Enum OPP.EDoorPassType
enum class EDoorPassType : uint8 {
	None = 0,
	Walkthrough = 1,
	OpenToClosed = 2,
	OpenToLocked = 3,
	ClosedToOpen = 4,
	ClosedToClosed = 5,
	ClosedToLocked = 6,
	LockedToOpen = 7,
	LockedToClosed = 8,
	EDoorPassType_MAX = 9
};

// Enum OPP.EPlayerPingType
enum class EPlayerPingType : uint8 {
	None = 0,
	NPC = 1,
	EPlayerPingType_MAX = 2
};

// Enum OPP.EAIMusicState
enum class EAIMusicState : uint8 {
	Unset = 0,
	None = 1,
	Unaware = 2,
	Suspicious = 3,
	Alerted = 4,
	Chase = 5,
	ChaseProximity = 6,
	EAIMusicState_MAX = 7
};

// Enum OPP.ETutorialType
enum class ETutorialType : uint8 {
	Custom = 0,
	Interaction = 1,
	EquippedItem = 2,
	Objective = 3,
	Inventory = 4,
	ETutorialType_MAX = 5
};

// Enum OPP.ELargeObjectType
enum class ELargeObjectType : uint8 {
	None = 0,
	Default = 1,
	LargeBox30 = 2,
	LargeBox60 = 3,
	Diaporama = 4,
	Bucket = 5,
	TeddyBear = 6,
	ChildMannequin = 7,
	HotPotato = 8,
	CocainePackage = 9,
	AcidBottle = 10,
	Bomb = 11,
	GasCanister = 12,
	FileBox = 13,
	ELargeObjectType_MAX = 14
};

// Enum OPP.EHidespotCategory
enum class EHidespotCategory : uint8 {
	StandingLeft = 0,
	StandingRight = 1,
	LyingDownLeft = 2,
	LyingDownRight = 3,
	Crouched = 4,
	InsideHorizontal = 5,
	InsideVertical = 6,
	CarTrunk = 7,
	EHidespotCategory_MAX = 8
};

// Enum OPP.EPlayerMessageType
enum class EPlayerMessageType : uint8 {
	None = 0,
	Tutorial = 1,
	Custom = 2,
	ObjectInteraction = 3,
	ObjectCannotStopInteraction = 4,
	HelpPlayerUp = 5,
	HelpingPlayerUp = 6,
	BeingHelpedUp = 7,
	RevivePlayer = 8,
	RevivingPlayer = 9,
	PyschosisPlayer = 10,
	BeingRevived = 11,
	OfferHighJump = 12,
	OfferingHighJump = 13,
	AcceptHighJump = 14,
	OfferLongJump = 15,
	OfferingLongJump = 16,
	AcceptLongJump = 17,
	WakeUp = 18,
	SavePlayerFromGroundAndPound = 19,
	SavePlayerFromFatality = 20,
	Shove = 21,
	GroundAndPoundNoItemCounter = 22,
	GroundAndPoundThrowableCounter = 23,
	DoorBashInteract = 24,
	DoorBashBlocked = 25,
	DropLargeObject = 26,
	AimingThrowable = 27,
	CoopTrapHelper = 28,
	CoopTrapVictimFreeYourself = 29,
	CoopTrapHelperFreeFriend = 30,
	OfferingTrade = 31,
	AcceptTrade = 32,
	MessageZone = 33,
	InvestigationDone = 34,
	ItemHoldAction = 35,
	CantOperateDoorWithLargeObject = 36,
	CantOperateGarageDoorWithLargeObject = 37,
	EnterSpectator = 38,
	Respawn = 39,
	EPlayerMessageType_MAX = 40
};

// Enum OPP.ERandomStateSetup
enum class ERandomStateSetup : uint8 {
	Random = 0,
	StateA = 1,
	StateB = 2,
	NotApplicable = 3,
	ERandomStateSetup_MAX = 4
};

// Enum OPP.ERBFoleyType
enum class ERBFoleyType : uint8 {
	PantShort = 0,
	PantLong = 1,
	ClothShort = 2,
	ClothLong = 3,
	ERBFoleyType_MAX = 4
};

// Enum OPP.ESwitchPanelPartVariant
enum class ESwitchPanelPartVariant : uint8 {
	NoRotation = 0,
	Rotated90 = 1,
	Rotated180 = 2,
	Rotated270 = 3,
	ESwitchPanelPartVariant_MAX = 4
};

// Enum OPP.EDestructibleMaterialType
enum class EDestructibleMaterialType : uint8 {
	Wood = 0,
	WoodenDoor = 1,
	Concrete = 2,
	Mannequin = 3,
	EDestructibleMaterialType_MAX = 4
};

// Enum OPP.EFallingReason
enum class EFallingReason : uint8 {
	Normal = 0,
	Death = 1,
	Spawning = 2,
	WalkJumping = 3,
	RunJumping = 4,
	JumpOver = 5,
	EFallingReason_MAX = 6
};

// Enum OPP.ENPCHitReactionType
enum class ENPCHitReactionType : uint8 {
	None = 0,
	Flinch = 1,
	Twitch = 2,
	Stagger = 3,
	Stumble = 4,
	Knockdown = 5,
	ENPCHitReactionType_MAX = 6
};

// Enum OPP.EGrabType
enum class EGrabType : uint8 {
	None = 0,
	Stand = 1,
	Crouch = 2,
	Above = 3,
	HidingStandLeft = 4,
	HidingStandRight = 5,
	HidingProneLeft = 6,
	HidingProneRight = 7,
	HidingCrouch = 8,
	HidingContainer = 9,
	HidingBarrel = 10,
	EGrabType_MAX = 11
};

// Enum OPP.ETraversalNotifyType
enum class ETraversalNotifyType : uint8 {
	IntroDone = 0,
	OutroDone = 1,
	ConditionalFall = 2,
	ConditionalLand = 3,
	Repulsion = 4,
	ETraversalNotifyType_MAX = 5
};

// Enum OPP.EWeaponType
enum class EWeaponType : uint8 {
	None = 0,
	Fist = 1,
	Slash = 2,
	Chop = 3,
	LightBlunt = 4,
	HeavyBlunt = 5,
	EWeaponType_MAX = 6
};

// Enum OPP.EItemAnimType
enum class EItemAnimType : uint8 {
	EmptyHanded = 0,
	OneHanded = 1,
	TwoHanded = 2,
	Syringe = 3,
	PainKiller = 4,
	Bandage = 5,
	Potion = 6,
	RadioTransmitter = 7,
	Gun = 8,
	AsthmaPump = 9,
	EItemAnimType_MAX = 10
};

// Enum OPP.ERollingGateVariatorType
enum class ERollingGateVariatorType : uint8 {
	None = 0,
	TimedOpenedClosed = 1,
	ClosesAfterNumberOfPassages = 2,
	ToasterDetector = 3,
	Unlockable = 4,
	StageRandomMax = 5,
	RailObjectiveUnlockable = 6,
	ERollingGateVariatorType_MAX = 7
};

// Enum OPP.ERoomAssociationType
enum class ERoomAssociationType : uint8 {
	Default = 0,
	Container = 1,
	Hidespot = 2,
	JumpScare = 3,
	MonsterCloset = 4,
	Investigation = 5,
	TrapGroup = 6,
	Trap = 7,
	PuzzleRoomNumberDecal = 8,
	PuzzleRoomLights = 9,
	PuzzleRoomLargePickupBox = 10,
	Max = 11
};

// Enum OPP.EStageVariatorType
enum class EStageVariatorType : uint8 {
	SecondaryObjective = 0,
	Obstacle = 1,
	RollingGate = 2,
	SAS = 3,
	EStageVariatorType_MAX = 4
};

// Enum OPP.ETriggeringStimulusType
enum class ETriggeringStimulusType : uint8 {
	MinorAudio = 0,
	NormalAudio = 1,
	ObviousAudio = 2,
	HighPriorityAudio = 3,
	Invalid = 4,
	ETriggeringStimulusType_MAX = 5
};

// Enum OPP.ERetirementReason
enum class ERetirementReason : uint8 {
	None = 0,
	RequestedByAIDirector = 1,
	ExplicitCommand = 2,
	SpecialistActivityCompleted = 3,
	HitByProjectile = 4,
	HitByActiveSkill = 5,
	ERetirementReason_MAX = 6
};

// Enum OPP.ENPCFlavor
enum class ENPCFlavor : uint8 {
	Light = 0,
	Normal = 1,
	Heavy = 2,
	ENPCFlavor_MAX = 3
};

// Enum OPP.EDesiredRelativePressure
enum class EDesiredRelativePressure : uint8 {
	NoChange = 0,
	LowerPressure = 1,
	HigherPressure = 2,
	EDesiredRelativePressure_MAX = 3
};

// Enum OPP.EPlayerRushingStatus
enum class EPlayerRushingStatus : uint8 {
	None = 0,
	Prudent = 1,
	Variable = 2,
	Rushing = 3,
	EPlayerRushingStatus_MAX = 4
};

// Enum OPP.EPlayerProximityStatus
enum class EPlayerProximityStatus : uint8 {
	None = 0,
	Isolated = 1,
	Variable = 2,
	Accompanied = 3,
	EPlayerProximityStatus_MAX = 4
};

// Enum OPP.ESpecialBotInitialBehavior
enum class ESpecialBotInitialBehavior : uint8 {
	Default = 0,
	RandomPatrol = 1,
	FullyRandomInvestigation = 2,
	MethodicalInvestigation = 3,
	ForceChaseTargetPlayerUntilContact = 4,
	InvestigateAtTargetPlayerLocation = 5,
	ESpecialBotInitialBehavior_MAX = 6
};

// Enum OPP.EConditionalRetirementEvent
enum class EConditionalRetirementEvent : uint8 {
	KilledAPlayer = 0,
	KnockedDownAPlayer = 1,
	GiveUpChase = 2,
	UnsuccesfulAwareInvestigation = 3,
	FinishedPatrolWaypoint = 4,
	PusherGasAttack = 5,
	IdleFallback = 6,
	EConditionalRetirementEvent_MAX = 7
};

// Enum OPP.ENPCInvestigationAnimCategory
enum class ENPCInvestigationAnimCategory : uint8 {
	None = 0,
	Narrow = 1,
	Wide = 2,
	Broad = 3,
	Ground = 4,
	ENPCInvestigationAnimCategory_MAX = 5
};

// Enum OPP.ENPCInvestigationAnimIntensity
enum class ENPCInvestigationAnimIntensity : uint8 {
	None = 0,
	Unaware = 1,
	Suspicious = 2,
	Investigate = 3,
	ENPCInvestigationAnimIntensity_MAX = 4
};

// Enum OPP.EStartleSpeed
enum class EStartleSpeed : uint8 {
	Fast = 0,
	Slow = 1,
	MAX = 2
};

// Enum OPP.EStartleType
enum class EStartleType : uint8 {
	Alerted = 0,
	Relaxed = 1,
	MAX = 2
};

// Enum OPP.EMonsterClosetSelectionMode
enum class EMonsterClosetSelectionMode : uint8 {
	Random = 0,
	Quiet = 1,
	CloseToTarget = 2,
	Explicit = 3,
	EMonsterClosetSelectionMode_MAX = 4
};

// Enum OPP.EBotDoorPassBehavior
enum class EBotDoorPassBehavior : uint8 {
	NeverClose = 0,
	NeverUnlockNeverClose = 1,
	RandomCloseNeverLock = 2,
	AlwaysCloseUnlocked = 3,
	AlwaysCloseLocked = 4,
	AlwaysCloseRandomLock = 5,
	Random = 6,
	EBotDoorPassBehavior_MAX = 7
};

// Enum OPP.EGuardAttackType
enum class EGuardAttackType : uint8 {
	Attack = 0,
	Push = 1,
	GroundAndPound = 2,
	Kill = 3,
	EGuardAttackType_MAX = 4
};

// Enum OPP.EChaseMoveDestination
enum class EChaseMoveDestination : uint8 {
	Invalid = 0,
	Player = 1,
	AnticipatedPos = 2,
	LastKnownPos = 3,
	HidingSpot = 4,
	SnipingSpot = 5,
	Pushable = 6,
	ForcedLocation = 7,
	PathBlocking = 8,
	EChaseMoveDestination_MAX = 9
};

// Enum OPP.EChaseSpecialState
enum class EChaseSpecialState : uint8 {
	None = 0,
	PathBlocking = 1,
	Yielding = 2,
	GivingUp = 3,
	EChaseSpecialState_MAX = 4
};

// Enum OPP.ENPCType
enum class ENPCType : uint8 {
	Grunt = 0,
	Ambient = 1,
	BigGrunt = 2,
	PitcherSniper = 3,
	SleeperScreamer = 4,
	Pouncer = 5,
	Pusher = 6,
	GroundPitcher = 7,
	Berserker = 8,
	Imposter = 9,
	NightHunter = 10,
	Spectre = 11,
	ThrowableTarget = 12,
	StalkerTarget = 13,
	Gooseberry = 14,
	Coyle = 15,
	Scientist = 16,
	Guard = 17,
	MAX = 18
};

// Enum OPP.ENPCAnimStyle
enum class ENPCAnimStyle : uint8 {
	Relaxed = 0,
	Suspicious = 1,
	Alerted = 2,
	Chase = 3,
	Combat = 4,
	ENPCAnimStyle_MAX = 5
};

// Enum OPP.EAlertedInvestigationPhase
enum class EAlertedInvestigationPhase : uint8 {
	InvestigatingStimulusSource = 0,
	InvestigatingAround = 1,
	Idle = 2,
	WaitingForValidInvestigationState = 3,
	Startle = 4,
	Invalid = 5,
	EAlertedInvestigationPhase_MAX = 6
};

// Enum OPP.EStimulusType
enum class EStimulusType : uint8 {
	None = 0,
	PartialPlayerVisibility = 1,
	FullPlayerVisibility = 2,
	LostChasedPlayer = 3,
	MinorAudio = 4,
	NormalAudio = 5,
	ObviousAudio = 6,
	HighPriorityEvent = 7,
	SurfaceMovement = 8,
	EStimulusType_MAX = 9
};

// Enum OPP.EAILogVerbosity
enum class EAILogVerbosity : uint8 {
	Verbose = 0,
	Log = 1,
	Event = 2,
	Error = 3,
	EAILogVerbosity_MAX = 4
};

// Enum OPP.EVOEventResultType
enum class EVOEventResultType : uint8 {
	Undefined = 0,
	Played = 1,
	NoMapping = 2,
	TooSoonAfterAnyVO = 3,
	TooSoonAfterSimilarVO = 4,
	TooSoonAfterSameVOOnPawn = 5,
	TooSoonAfterSameVOGlobal = 6,
	SkippedSelfInterrupt = 7,
	SkippedLowerPrio = 8,
	ConditionsFailed = 9,
	Queued = 10,
	NoLine = 11,
	EVOEventResultType_MAX = 12
};

// Enum OPP.EVOContext
enum class EVOContext : uint8 {
	Undefined = 0,
	ReactToSoundDisturbanceAware = 1,
	ReactToSoundDisturbanceUnaware = 2,
	ReactToVisualDisturbanceAware = 3,
	ReactToVisualDisturbanceUnaware = 4,
	ReactToMajorDisturbance = 5,
	ReactToSensingDisturbance = 6,
	InvestigateDisturbanceAware = 7,
	InvestigateDisturbanceUnaware = 8,
	InvestigatePoint = 9,
	ReachedInvestigationPoint = 10,
	FinishedInvestigatingPoint = 11,
	InvestigationGiveUp = 12,
	SuspiciousGiveUp = 13,
	AlertedGiveUp = 14,
	SawPlayerEnterHidingSpot = 15,
	FoundHiddenPlayer = 16,
	SearchForOtherPlayersAfterKnockDown = 17,
	PullOutFromHidespot = 18,
	ReactToPlayerBeforeChase = 19,
	ReactToMultiplePlayersBeforeChase = 20,
	StartChaseAfterReaction = 21,
	StartChaseNoReaction = 22,
	StartMoveToIncapacitatedPlayer = 23,
	ChaseReachedLeashLimit = 24,
	ChaseStartGiveUp = 25,
	ChaseGiveUp = 26,
	ChaseStartYielding = 27,
	ChaseYield = 28,
	ChaseChangedTarget = 29,
	ChaseTaunt = 30,
	LostSightOfPlayer = 31,
	StartMoveToLostSight = 32,
	ReachedLastKnownPosition = 33,
	ReachedPatrolWaypoint = 34,
	PassUnderDynamicObstacle = 35,
	EnterDarknessZone = 36,
	EnterLightZone = 37,
	AttackPlayer = 38,
	GuardingAttack = 39,
	PushPlayer = 40,
	ImposterCharge = 41,
	PusherAttack = 42,
	PairedAttackConnecting = 43,
	KnockedDownPlayer = 44,
	StartFinishingIncapacitatedPlayer = 45,
	FinishIncapacitatedPlayer = 46,
	DealtDamage = 47,
	KilledPlayer = 48,
	AttackOtherNPC = 49,
	AttackedByOtherNPC = 50,
	ThrowProjectile = 51,
	ThrownProjectileHit = 52,
	ThrownProjectileMiss = 53,
	TakeDamage = 54,
	HitByProjectile = 55,
	PairedAttackInterrupted = 56,
	HitReaction_Low = 57,
	HitReaction_Med = 58,
	HitReaction_High = 59,
	DelayedHitReaction = 60,
	ShovedByPlayerAware = 61,
	ShovedByPlayerUnaware = 62,
	ShovePunish = 63,
	KnockedOut = 64,
	GetUpFromKnockOut = 65,
	Killed = 66,
	ProvocationWarning = 67,
	ProvokedByPlayer = 68,
	ReactToImperativeDisturbance = 69,
	TurnOffImperativeDisturbance = 70,
	SignalTackle = 71,
	FailedTackle = 72,
	SuccessfulTackle = 73,
	FinishedGroundAndPound = 74,
	PlayerAvoidanceStart = 75,
	PlayerAvoidanceRepath = 76,
	AcknowledgePlayer = 77,
	AcknowledgeOtherNPC = 78,
	ZoneDefenseBecomeAlert = 79,
	ZoneDefenseBlown = 80,
	ReactToCloseGrenade = 81,
	AffectedByStunGrenade = 82,
	RecoverFromStunGrenade = 83,
	AffectedByBlindPaint = 84,
	AffectedByHealSlowdown = 85,
	SleeperDisturbed = 86,
	SleeperScream = 87,
	Scripted = 88,
	AnimNotify = 89,
	PawnState = 90,
	Announcer = 91,
	ExitedMonsterCloset = 92,
	ReactToSoundDisturbance = 93,
	ReactToVisualDisturbance = 94,
	InvestigateDisturbance = 95,
	FirstAttack = 96,
	AttackAny = 97,
	PassiveRandom = 98,
	InvestigateRandomAware = 99,
	InvestigateRandomUnaware = 100,
	InvestigateRandom = 101,
	ChaseRandom = 102,
	MAX = 103
};

// Enum OPP.EInvestigationPointSelectionMode
enum class EInvestigationPointSelectionMode : uint8 {
	SelectionCriteria = 0,
	FullyRandom = 1,
	StrictOrder = 2,
	EInvestigationPointSelectionMode_MAX = 3
};

// Enum OPP.EInvestigationPointIrrelevanceReason
enum class EInvestigationPointIrrelevanceReason : uint8 {
	NoWeight = 0,
	TooClose = 1,
	FilteredOut = 2,
	FindingPlayerNotAllowed = 3,
	NotFindingPlayerThisTime = 4,
	ObstacleInPath = 5,
	TooCloseToOtherBot = 6,
	TooCloseToChasedPlayer = 7,
	ProhibitedByKismet = 8,
	DynamicStateIrrelevant = 9,
	EInvestigationPointIrrelevanceReason_MAX = 10
};

// Enum OPP.EInvestigationPointType
enum class EInvestigationPointType : uint8 {
	None = 0,
	SimpleLocation = 1,
	InvestigationPoint = 2,
	Door = 3,
	HideSpot = 4,
	SimpleInteract = 5,
	LedgeDrop = 6,
	EInvestigationPointType_MAX = 7
};

// Enum OPP.EPatrolWaypointSelectionMode
enum class EPatrolWaypointSelectionMode : uint8 {
	Random = 0,
	PingPong = 1,
	IncrementingLoop = 2,
	IncrementingOnce = 3,
	DecrementingLoop = 4,
	DecrementingOnce = 5,
	EPatrolWaypointSelectionMode_MAX = 6
};

// Enum OPP.EAICommandType
enum class EAICommandType : uint8 {
	None = 0,
	GotoLocation = 1,
	GotoWaypoint = 2,
	Patrol = 3,
	Investigate = 4,
	PlayLoopingIdle = 5,
	PlaySingleShotAnim = 6,
	ScriptedAnimStation = 7,
	GotoAmbientMarker = 8,
	EAICommandType_MAX = 9
};

// Enum OPP.EAISpectreVisualType
enum class EAISpectreVisualType : uint8 {
	None = 0,
	CloseRange = 1,
	MediumRange = 2,
	FarRange = 3,
	EAISpectreVisualType_MAX = 4
};

// Enum OPP.EAIActivity
enum class EAIActivity : uint8 {
	None = 0,
	Idle = 1,
	Ambient = 2,
	Patrol = 3,
	Patrol_Hidespots = 4,
	Retirement = 5,
	Sneak = 6,
	SeekingHidingSpot = 7,
	Investigate = 8,
	Chase = 9,
	PlayerAvoidance = 10,
	BlindPaint = 11,
	ImperativeAction = 12,
	Ambush = 13,
	MonsterCloset = 14,
	GroundAndPound = 15,
	Knockout = 16,
	Scripted = 17,
	BehaviorTree = 18,
	Dead = 19,
	Cinematic = 20,
	MAX = 21
};

// Enum OPP.EAIAwarenessStateType
enum class EAIAwarenessStateType : uint8 {
	None = 0,
	Scripted = 1,
	Ambient = 2,
	Unaware = 3,
	Suspicious = 4,
	Chase = 5,
	Alerted = 6,
	Sneak = 7,
	EAIAwarenessStateType_MAX = 8
};

// Enum OPP.EQuestItemType
enum class EQuestItemType : uint8 {
	TypeA = 0,
	TypeB = 1,
	TypeC = 2,
	TypeD = 3,
	EQuestItemType_MAX = 4
};

// Enum OPP.EPipeJunctionType
enum class EPipeJunctionType : uint8 {
	Cross = 0,
	DoubleCurveLeft = 1,
	DoubleCurveRight = 2,
	OverUnderVertical = 3,
	OverUnderHorizontal = 4,
	Straight = 5,
	StraightBroken = 6,
	EPipeJunctionType_MAX = 7
};

// Enum OPP.ERBVoiceChatMode
enum class ERBVoiceChatMode : uint8 {
	Party = 0,
	Game = 1,
	ERBVoiceChatMode_MAX = 2
};

// Enum OPP.ERBVoiceChatEngineState
enum class ERBVoiceChatEngineState : uint8 {
	Disconnected = 0,
	Disconnecting = 1,
	Connecting = 2,
	Connected = 3,
	ERBVoiceChatEngineState_MAX = 4
};

// Enum OPP.EContinuousSoundNPCState
enum class EContinuousSoundNPCState : uint8 {
	None = 0,
	Hiding = 1,
	Unaware = 2,
	Suspicious = 3,
	Alerted = 4,
	Chase = 5,
	AffectedByBrainAmp = 6,
	Normal = 7,
	AffectedBySpineAmp = 8,
	AffectedByRagePaint = 9,
	AffectedByBlindPaint = 10,
	EContinuousSoundNPCState_MAX = 11
};

// Enum OPP.RBWaypointVersion
enum class RBWaypointVersion : uint8 {
	Initial = 0,
	MinMaxWaitTime = 1,
	Current = 1,
	RBWaypointVersion_MAX = 2
};

// Enum OPP.EWorldPopulatingStepClient
enum class EWorldPopulatingStepClient : uint8 {
	None = 0,
	WorldPopulate_Start = 1,
	PopulateInterfaceObjectWorldFullyLoaded = 2,
	BuildRegisterNavmeshActorList = 3,
	RegisterNavmeshActors = 4,
	InitializeRoomData = 5,
	BuildRoomCaches = 6,
	LinkRoomConnectors = 7,
	AssociateRooms = 8,
	BuildRoomGroupsCaches = 9,
	ApplyRandomizedSharedStates = 10,
	PopulateInterfaceObjectPostPopulate = 11,
	RemovingNavigationBuildingLock = 12,
	BuildingRoomPaths = 13,
	PopulateLedgeMarkers = 14,
	WorldPopulate_Done = 15,
	EWorldPopulatingStepClient_MAX = 16
};

// Enum OPP.EWorldPopulatingStep
enum class EWorldPopulatingStep : uint8 {
	None = 0,
	WorldPopulate_Start = 1,
	PopulateInterfaceObjectWorldFullyLoaded = 2,
	BuildRegisterNavmeshActorList = 3,
	RegisterNavmeshActors = 4,
	PopulateGameMode = 5,
	InitializeRoomData = 6,
	BuildRoomCaches = 7,
	LinkRoomConnectors = 8,
	AssociateRooms = 9,
	BuildRoomGroupsCaches = 10,
	PrepareMissionRoomGroups = 11,
	PopulateMissionRoomGroups = 12,
	PopulateObjectiveManager = 13,
	SortRandomizedArrays = 14,
	PrepareRandomManager = 15,
	PrepareObjectiveCoordinators = 16,
	Editor_ValidateBlockable = 17,
	RandomizeObjectiveRails = 18,
	RandomizeObjectiveClosedRooms = 19,
	PopulatePuzzleRooms = 20,
	PopulateRewardRooms = 21,
	RandomizeManagers_Gates = 22,
	RandomizeBlockableStage = 23,
	RandomizeBlockableRoomGroups = 24,
	RandomizeDoorsStage = 25,
	RandomizeDoorsRoomGroups = 26,
	RandomizeRollingGateVariator = 27,
	PopulateRollingGateVariator = 28,
	PopulateObjectiveCoordinators = 29,
	SetupObjectiveCoordinators = 30,
	RandomizeHidespotsStage = 31,
	RandomizeHidespotsRoomGroups = 32,
	ComputeObjectiveProximity = 33,
	RandomizeManagers_Traps = 34,
	ComputeObstacleCount = 35,
	TrapGroups = 36,
	ObstacleVariatorTraps = 37,
	PopulateRandomManagers = 38,
	ApplyRandomizedSharedStates = 39,
	PopulateActors = 40,
	PopulateItemManagers = 41,
	PopulateInterfaceObjectPostPopulate = 42,
	RemovingNavigationBuildingLock = 43,
	BuildingRoomPaths = 44,
	WaitingForNavMeshBuild = 45,
	PopulateLedgeMarkers = 46,
	PopulateWaypointGroups = 47,
	PopulateAISpawnersInit = 48,
	PopulatingAIDirector = 49,
	PopulateAISpawnersSpawn = 50,
	WorldPopulate_Done = 51,
	EWorldPopulatingStep_MAX = 52
};

// Enum OPP.EWWWPlaybackSpeed
enum class EWWWPlaybackSpeed : uint8 {
	Speed1x = 0,
	Speed2x = 1,
	Speed4x = 2,
	Speed8x = 3,
	Speed16x = 4,
	Speed32x = 5,
	EWWWPlaybackSpeed_MAX = 6
};

// Enum OPP.EWWWTrackDrawLength
enum class EWWWTrackDrawLength : uint8 {
	Unlimited = 0,
	Last5s = 1,
	Last10s = 2,
	Last30s = 3,
	LastMin = 4,
	Last5Min = 5,
	EWWWTrackDrawLength_MAX = 6
};

// Enum OPP.EWWWTrackDrawSelection
enum class EWWWTrackDrawSelection : uint8 {
	All = 0,
	Focused = 1,
	None = 2,
	EWWWTrackDrawSelection_MAX = 3
};

// Enum OPP.ERelationshipErrorCodes
enum class ERelationshipErrorCodes : uint8 {
	MissingBaseServiceUrl = 0,
	MaximumFriendsReached = 1,
	MaximumSentFriendRequestsReached = 2,
	MaximumPendingFriendRequestsReached = 3,
	FriendRequestNotFound = 4,
	InvalidRelationship = 5,
	ERelationshipErrorCodes_MAX = 6
};

// Enum OPP.ERTAErrorCodes
enum class ERTAErrorCodes : uint8 {
	MissingBaseServiceUrl = 0,
	ConnectionFailed = 1,
	ConnectionClosed = 2,
	InvalidIncomingMessageFormat = 3,
	ERTAErrorCodes_MAX = 4
};

// Enum OPP.EStatsErrorCodes
enum class EStatsErrorCodes : uint8 {
	Dummy = 0,
	EStatsErrorCodes_MAX = 1
};

// Enum OPP.EStoreErrorCodes
enum class EStoreErrorCodes : uint8 {
	OrderFailed_Generic = 0,
	OrderFailed_NotApprovedByUser = 1,
	OrderFailed_UserNotLoggedIn = 2,
	OrderFailed_AccountUnavailable = 3,
	OrderFailed_TransactionDenied = 4,
	OrderFailed_TransactionDeniedRestrictedCountry = 5,
	OrderFailed_InsufficientFunds = 6,
	OrderFailed_FinalizationTimeLimitExceeded = 7,
	OrderFailed_AccountDisabled = 8,
	OrderFailed_AccountNotAllowedPurchase = 9,
	OrderFailed_TransactionDeniedFraudDetection = 10,
	OrderFailed_NoCachedPaymentMethod = 11,
	OrderFailed_MAX = 12
};

// ScriptStruct OPP.DamageInfo
// Size: 0x48 (Inherited: 0x00)
struct FDamageInfo {
	enum class EDamageType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FDamageParameters Params; // 0x04(0x10)
	enum class ENPCWeapon NPCWeaponType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float InitialHealth; // 0x18(0x04)
	float DmgAmount; // 0x1c(0x04)
	struct FVector DmgLocation; // 0x20(0x0c)
	struct FVector DmgDirection; // 0x2c(0x0c)
	struct AActor* SrcActor; // 0x38(0x08)
	bool bForceKill; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float PawnTime; // 0x44(0x04)
};

// ScriptStruct OPP.DamageParameters
// Size: 0x10 (Inherited: 0x00)
struct FDamageParameters {
	bool bCanReact; // 0x00(0x01)
	bool bCanKnockdown; // 0x01(0x01)
	bool bCanKill; // 0x02(0x01)
	bool bBloodParticles; // 0x03(0x01)
	bool bScreenBloodColumns; // 0x04(0x01)
	enum class EHurtVOType LowDamageVO; // 0x05(0x01)
	enum class EHurtVOType MediumDamageVO; // 0x06(0x01)
	enum class EHurtVOType HighDamageVO; // 0x07(0x01)
	float HurtVOStopDelay; // 0x08(0x04)
	enum class EDamageSoundMaterial DamageSoundMaterial; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct OPP.HallucinationData
// Size: 0x50 (Inherited: 0x00)
struct FHallucinationData {
	enum class EHallucinationType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct ARBPlayer* TargetPlayer; // 0x08(0x08)
	struct URBHallucinationConfig* Config; // 0x10(0x08)
	float duration; // 0x18(0x04)
	float TargetIntensity; // 0x1c(0x04)
	bool bRestartingActiveHallu; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct ARBNPC* SpectreNPC; // 0x28(0x08)
	bool bInvertedAngle; // 0x30(0x01)
	char pad_31[0x1f]; // 0x31(0x1f)
};

// ScriptStruct OPP.ArmWreslingPlayerRoundData
// Size: 0x38 (Inherited: 0x00)
struct FArmWreslingPlayerRoundData {
	float multiplier; // 0x00(0x04)
	int32_t NumConsecutiveHits; // 0x04(0x04)
	struct TArray<int32_t> HitList; // 0x08(0x10)
	int32_t NumRevolution; // 0x18(0x04)
	enum class EArmWreslingPanelInputFailType failType; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct URBArmWreslingPanelComponent* panel; // 0x20(0x08)
	struct ARBPlayer* Player; // 0x28(0x08)
	char pad_30[0x8]; // 0x30(0x08)
};

// ScriptStruct OPP.RBPlayerCustomizationInfo
// Size: 0x38 (Inherited: 0x00)
struct FRBPlayerCustomizationInfo {
	struct URBCustomizationOutfit* LegendaryOutfit; // 0x00(0x08)
	struct TArray<struct URBPlayerCustomizationOption*> Options; // 0x08(0x10)
	struct URBVoiceCustomizationOption* VoiceOption; // 0x18(0x08)
	struct URBPlayerIconCustomizationOption* PlayerIconOption; // 0x20(0x08)
	bool bIsFemale; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FName HairColor; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct OPP.RBPlayerLoadout
// Size: 0x18 (Inherited: 0x00)
struct FRBPlayerLoadout {
	struct TArray<struct FName> Perks; // 0x00(0x10)
	enum class EActiveSkillType ActiveSkillType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct OPP.ProfileId
// Size: 0x10 (Inherited: 0x00)
struct FProfileId {
	int32_t A; // 0x00(0x04)
	int32_t B; // 0x04(0x04)
	int32_t C; // 0x08(0x04)
	int32_t D; // 0x0c(0x04)
};

// ScriptStruct OPP.PlayerRejoinInfo
// Size: 0x20 (Inherited: 0x00)
struct FPlayerRejoinInfo {
	float HealthF; // 0x00(0x04)
	float NVBatteryLevel; // 0x04(0x04)
	int32_t PsychosisBracket; // 0x08(0x04)
	float RigCooldownTimeRemaining; // 0x0c(0x04)
	struct TArray<struct FRBGameplayAttributeModifierInfo> PlayerSpecificUpgrades; // 0x10(0x10)
};

// ScriptStruct OPP.RBGameplayAttributeModifierInfo
// Size: 0x14 (Inherited: 0x00)
struct FRBGameplayAttributeModifierInfo {
	struct FRBGameplayAttributeModifier Modifier; // 0x00(0x0c)
	struct FName ID; // 0x0c(0x08)
};

// ScriptStruct OPP.RBGameplayAttributeModifier
// Size: 0x0c (Inherited: 0x00)
struct FRBGameplayAttributeModifier {
	enum class EGameplayAttributeType AttributeType; // 0x00(0x01)
	enum class EGameplayAttributeModifierType ModifierType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float Value; // 0x04(0x04)
	bool bDisplay; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct OPP.CurrencyEntry
// Size: 0x08 (Inherited: 0x00)
struct FCurrencyEntry {
	enum class ECurrencyType currencyType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Count; // 0x04(0x04)
};

// ScriptStruct OPP.TrialProgression
// Size: 0x10 (Inherited: 0x00)
struct FTrialProgression {
	struct TArray<struct FTrialProgressionEntry> Entries; // 0x00(0x10)
};

// ScriptStruct OPP.TrialProgressionEntry
// Size: 0x0c (Inherited: 0x00)
struct FTrialProgressionEntry {
	struct FName ID; // 0x00(0x08)
	bool bCompleted; // 0x08(0x01)
	bool bPerfect; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct OPP.RBGameplayAttribute
// Size: 0x30 (Inherited: 0x00)
struct FRBGameplayAttribute {
	enum class EGameplayAttributeType AttributeType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float DefaultValue; // 0x04(0x04)
	struct UObject* Owner; // 0x08(0x08)
	float Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FMulticastInlineDelegate OnAttributeValueChanged; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct OPP.RBPlayerId
// Size: 0x10 (Inherited: 0x00)
struct FRBPlayerId {
	struct FString IdStr; // 0x00(0x10)
};

// ScriptStruct OPP.RBPlayerCellCustomizationEntry
// Size: 0x0c (Inherited: 0x00)
struct FRBPlayerCellCustomizationEntry {
	enum class ECustomizationMenuCategory Slot; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName OnlineUnlockId; // 0x04(0x08)
};

// ScriptStruct OPP.MatchState
// Size: 0x20 (Inherited: 0x00)
struct FMatchState {
	struct ARBLobbyPlayerState* Owner; // 0x00(0x08)
	float MatchCancelationGracePeriodServerTime; // 0x08(0x04)
	float MatchStartServerTime; // 0x0c(0x04)
	bool bReadyToTravelToMatch; // 0x10(0x01)
	bool bAllReadyToTravelToMatch; // 0x11(0x01)
	bool bLeavingForMatch; // 0x12(0x01)
	bool bCanBeCanceled; // 0x13(0x01)
	int32_t MemberCount; // 0x14(0x04)
	bool bIsRelease; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct OPP.FindPartyState
// Size: 0x18 (Inherited: 0x00)
struct FFindPartyState {
	bool bActive; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct ARBLobbyPlayerState* Owner; // 0x08(0x08)
	bool bCanBeCanceled; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t MemberCount; // 0x14(0x04)
};

// ScriptStruct OPP.MatchSettings
// Size: 0x20 (Inherited: 0x00)
struct FMatchSettings {
	struct FName TrialId; // 0x00(0x08)
	struct FName StageName; // 0x08(0x08)
	struct FName MissionName; // 0x10(0x08)
	enum class EGameDifficulty GameDifficulty; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t Seed; // 0x1c(0x04)
};

// ScriptStruct OPP.RBUIReleasedCharacterDetails
// Size: 0x10 (Inherited: 0x00)
struct FRBUIReleasedCharacterDetails {
	int32_t InmateId; // 0x00(0x04)
	int32_t Level; // 0x04(0x04)
	int64_t Timestamp; // 0x08(0x08)
};

// ScriptStruct OPP.RBStatContext
// Size: 0x20 (Inherited: 0x00)
struct FRBStatContext {
	struct FString Context; // 0x00(0x10)
	struct TArray<struct FRBStatEntry> Entries; // 0x10(0x10)
};

// ScriptStruct OPP.RBStatEntry
// Size: 0x08 (Inherited: 0x00)
struct FRBStatEntry {
	enum class EPlayerStat PlayerStat; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Value; // 0x04(0x04)
};

// ScriptStruct OPP.RBGameStageInfo
// Size: 0x60 (Inherited: 0x00)
struct FRBGameStageInfo {
	struct FName TrialId; // 0x00(0x08)
	struct FRBStageID StageID; // 0x08(0x28)
	struct FRBMissionID MissionID; // 0x30(0x28)
	enum class ESecondaryObjectiveVariatorType SecondaryObjectiveVariatorType; // 0x58(0x01)
	enum class EObstacleVariatorType ObstacleVariatorType; // 0x59(0x01)
	enum class ESASVariatorType SASVariatorType; // 0x5a(0x01)
	char pad_5B[0x5]; // 0x5b(0x05)
};

// ScriptStruct OPP.RBMissionID
// Size: 0x28 (Inherited: 0x00)
struct FRBMissionID {
	struct TSoftObjectPtr<URBMissionInfo> MissionInfo; // 0x00(0x28)
};

// ScriptStruct OPP.RBStageID
// Size: 0x28 (Inherited: 0x00)
struct FRBStageID {
	struct TSoftObjectPtr<URBStageInfo> StageInfo; // 0x00(0x28)
};

// ScriptStruct OPP.RBMurkoffAnnouncentAudioData
// Size: 0x10 (Inherited: 0x00)
struct FRBMurkoffAnnouncentAudioData {
	struct UAkAudioEvent* AudioEvent; // 0x00(0x08)
	float FixedAudioLength; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct OPP.PlayerReleaseState
// Size: 0x18 (Inherited: 0x00)
struct FPlayerReleaseState {
	struct ARBLobbyPlayerState* PlayerState; // 0x00(0x08)
	bool bPlayerReleasePending; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float PlayerReleaseExpirationServerTime; // 0x0c(0x04)
	bool bPlayerReleasing; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct OPP.RBMurkoffAnnouncentData
// Size: 0x20 (Inherited: 0x00)
struct FRBMurkoffAnnouncentData {
	struct FString AnnouncementName; // 0x00(0x10)
	struct TArray<struct FRBMurkoffAnnouncentLineData> AnnouncementList; // 0x10(0x10)
};

// ScriptStruct OPP.RBMurkoffAnnouncentLineData
// Size: 0x20 (Inherited: 0x00)
struct FRBMurkoffAnnouncentLineData {
	struct FString AnnouncementLinesName; // 0x00(0x10)
	struct TArray<struct FRBMurkoffAnnouncentAudioData> LineChoices; // 0x10(0x10)
};

// ScriptStruct OPP.EndStageInfo
// Size: 0x50 (Inherited: 0x00)
struct FEndStageInfo {
	bool bSucceeded; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FEndStagePlayerInfo> PlayerInfos; // 0x08(0x10)
	float TimeToComplete; // 0x18(0x04)
	int32_t DeathCount; // 0x1c(0x04)
	struct FRBStageID Stage; // 0x20(0x28)
	enum class EGameDifficulty Difficulty; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float Score; // 0x4c(0x04)
};

// ScriptStruct OPP.EndStagePlayerInfo
// Size: 0xe0 (Inherited: 0x00)
struct FEndStagePlayerInfo {
	struct FUniqueNetIdRepl PlayerId; // 0x00(0x28)
	struct FString PlayerName; // 0x28(0x10)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x38(0x28)
	enum class EProfilePlatform Platform; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32_t PlayerSlotIndex; // 0x64(0x04)
	struct TArray<struct FEndStageBadgeInfo> Badges; // 0x68(0x10)
	struct FRBUIProgressionInfo PlayerProgressionInfo; // 0x78(0x38)
	float Score; // 0xb0(0x04)
	bool bDead; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	struct TArray<struct FRecordedScoringEvent> RecordedScoringEvents; // 0xb8(0x10)
	bool bHasLeveledUp; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	struct FName CompletedProgramId; // 0xcc(0x08)
	struct FName UnlockedProgramId; // 0xd4(0x08)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// ScriptStruct OPP.RecordedScoringEvent
// Size: 0x14 (Inherited: 0x00)
struct FRecordedScoringEvent {
	struct FName ruleId; // 0x00(0x08)
	int32_t Score; // 0x08(0x04)
	int32_t NumCountedScoreEvents; // 0x0c(0x04)
	float LastEventTime; // 0x10(0x04)
};

// ScriptStruct OPP.RBUIProgressionInfo
// Size: 0x38 (Inherited: 0x00)
struct FRBUIProgressionInfo {
	struct TArray<struct FRBUIXPGainInfo> XPGainInfos; // 0x00(0x10)
	struct FRBUITaskProgressionInfo TaskProgressionInfo; // 0x10(0x20)
	struct FName OnlineID; // 0x30(0x08)
};

// ScriptStruct OPP.RBUITaskProgressionInfo
// Size: 0x20 (Inherited: 0x00)
struct FRBUITaskProgressionInfo {
	struct TArray<struct FRewardUIData> UIRewards; // 0x00(0x10)
	struct TArray<struct FName> CompletedTasksIds; // 0x10(0x10)
};

// ScriptStruct OPP.RewardUIData
// Size: 0x18 (Inherited: 0x00)
struct FRewardUIData {
	enum class ERewardType RewardType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t amount; // 0x04(0x04)
	struct URBCustomizationOption* CustomizationOption; // 0x08(0x08)
	enum class ECurrencyType currencyType; // 0x10(0x01)
	enum class EPlayerCustomizationRarity Rarity; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct OPP.RBUIXPGainInfo
// Size: 0x48 (Inherited: 0x00)
struct FRBUIXPGainInfo {
	enum class EXPGainType XPGainType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t NewLevel; // 0x04(0x04)
	int32_t StartLevel; // 0x08(0x04)
	int32_t StartXp; // 0x0c(0x04)
	float StartRatio; // 0x10(0x04)
	float NewRatio; // 0x14(0x04)
	int32_t Xp; // 0x18(0x04)
	struct FName ID; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FRewardUIData> AssociatedRewards; // 0x28(0x10)
	struct TArray<struct FRBRewardUIDataList> LevelUpRewards; // 0x38(0x10)
};

// ScriptStruct OPP.RBRewardUIDataList
// Size: 0x10 (Inherited: 0x00)
struct FRBRewardUIDataList {
	struct TArray<struct FRewardUIData> Rewards; // 0x00(0x10)
};

// ScriptStruct OPP.EndStageBadgeInfo
// Size: 0x08 (Inherited: 0x00)
struct FEndStageBadgeInfo {
	struct FName ID; // 0x00(0x08)
};

// ScriptStruct OPP.GameMessageAudioParams
// Size: 0x10 (Inherited: 0x00)
struct FGameMessageAudioParams {
	struct UAkAudioEvent* Sound; // 0x00(0x08)
	struct UAkAudioEvent* Voice; // 0x08(0x08)
};

// ScriptStruct OPP.HUDTutorialTextData
// Size: 0x38 (Inherited: 0x00)
struct FHUDTutorialTextData {
	struct FText Title; // 0x00(0x18)
	struct FText Text; // 0x18(0x18)
	struct FName TutorialId; // 0x30(0x08)
};

// ScriptStruct OPP.PlayerPingIconMapping
// Size: 0x18 (Inherited: 0x00)
struct FPlayerPingIconMapping {
	struct ARBPlayer* Player; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct OPP.WorldIconData
// Size: 0xf0 (Inherited: 0x00)
struct FWorldIconData {
	char pad_0[0x50]; // 0x00(0x50)
	struct TWeakObjectPtr<struct AActor> Actor; // 0x50(0x08)
	struct FVector Location; // 0x58(0x0c)
	bool bLocationRelativeToActor; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct FLinearColor Color; // 0x68(0x10)
	struct UTexture* Icon; // 0x78(0x08)
	struct FVector2D CloseSize; // 0x80(0x08)
	struct FVector2D FarSize; // 0x88(0x08)
	struct FName ActionName; // 0x90(0x08)
	bool bShowDistance; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	float ArrowOffset; // 0x9c(0x04)
	bool bShowInSpectatorMode; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct URBHUDWorldIconWidget* WorldIconWidget; // 0xa8(0x08)
	struct FVector4 DistanceLimit; // 0xb0(0x10)
	float MaxRoompathSearchDistance; // 0xc0(0x04)
	char pad_C4[0x2c]; // 0xc4(0x2c)
};

// ScriptStruct OPP.ActiveEffectTrackingData
// Size: 0x10 (Inherited: 0x00)
struct FActiveEffectTrackingData {
	struct FName EffectId; // 0x00(0x08)
	float UntilServerTime; // 0x08(0x04)
	float DisplayValue; // 0x0c(0x04)
};

// ScriptStruct OPP.RBAnimRef
// Size: 0x30 (Inherited: 0x00)
struct FRBAnimRef {
	struct UAnimationAsset* ThirdPersonAnim; // 0x00(0x08)
	char bOverride_ThirdPersonAnim : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UAnimationAsset* FirstPersonAnim; // 0x10(0x08)
	char bOverride_FirstPersonAnim : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UAnimationAsset* AlertedStanceAnim; // 0x20(0x08)
	char bOverride_AlertedStanceAnim : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct OPP.FootstepData
// Size: 0x28 (Inherited: 0x00)
struct FFootstepData {
	enum class EFootStepModifierType FootstepModifier; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FootstepModifierAlpha; // 0x04(0x04)
	struct UPhysicalMaterial* FootstepBaseMaterial; // 0x08(0x08)
	bool bIsLeftFoot; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float StepTime; // 0x14(0x04)
	struct FVector FootLocation; // 0x18(0x0c)
	bool bIsRunning; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct OPP.PawnBreadcrumb
// Size: 0x24 (Inherited: 0x00)
struct FPawnBreadcrumb {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	float PawnTime; // 0x18(0x04)
	bool bIsAnimatedStartAnim; // 0x1c(0x01)
	bool bIsAnimatedStopAnim; // 0x1d(0x01)
	bool bIsAnimMoving; // 0x1e(0x01)
	bool bIsAnimAgressiveStance; // 0x1f(0x01)
	bool bNoTickPose; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct OPP.ProceduralTranslationAnimData
// Size: 0x3c (Inherited: 0x00)
struct FProceduralTranslationAnimData {
	struct FVector PositionDelta; // 0x00(0x0c)
	enum class EProceduralAnimInterpType InterpType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float ScheduledPawnTime; // 0x10(0x04)
	float ScheduledServerTime; // 0x14(0x04)
	float ConstantSpeedContrib; // 0x18(0x04)
	float DelayTimeLeft; // 0x1c(0x04)
	float TotalTime; // 0x20(0x04)
	float ElapsedTime; // 0x24(0x04)
	bool bWaitForNotify; // 0x28(0x01)
	bool bRecomputeDataAfterNotify; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	struct FVector RecomputeDesiredPosition; // 0x2c(0x0c)
	char pad_38[0x4]; // 0x38(0x04)
};

// ScriptStruct OPP.ScheduledSpecialMoveData
// Size: 0x68 (Inherited: 0x00)
struct FScheduledSpecialMoveData {
	float PawnTime; // 0x00(0x04)
	float serverTime; // 0x04(0x04)
	bool bInteruptable; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FSpecialMoveMulticastData SpecialMoveData; // 0x10(0x48)
	enum class ESpecialMove CancelledSpecialMove; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	int32_t CancelledSpecialMoveIndex; // 0x5c(0x04)
	bool bScheduleOnPawnTime; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float ScheduledTime; // 0x64(0x04)
};

// ScriptStruct OPP.SpecialMoveMulticastData
// Size: 0x48 (Inherited: 0x00)
struct FSpecialMoveMulticastData {
	int32_t SpecialMoveIndex; // 0x00(0x04)
	char bPredicted : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float StartedMovementTimestamp; // 0x08(0x04)
	enum class ESpecialMove specialMove; // 0x0c(0x01)
	char SpecialMoveSubType; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct FVector targetPosition; // 0x10(0x0c)
	struct FVector targetDirection; // 0x1c(0x0c)
	struct FVector OriginalPosition; // 0x28(0x0c)
	float OriginalDirectionYaw; // 0x34(0x04)
	struct UObject* Interactable; // 0x38(0x08)
	char pad_40[0x8]; // 0x40(0x08)
};

// ScriptStruct OPP.RBBreadcrumbs
// Size: 0x20 (Inherited: 0x00)
struct FRBBreadcrumbs {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct OPP.PawnRepulsionData
// Size: 0x14 (Inherited: 0x00)
struct FPawnRepulsionData {
	struct FVector Location; // 0x00(0x0c)
	float Rotation; // 0x0c(0x04)
	enum class EPawnRepulsionType Type; // 0x10(0x01)
	bool bHitReactionOnPlayer; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
};

// ScriptStruct OPP.ItemDefinition
// Size: 0x48 (Inherited: 0x00)
struct FItemDefinition {
	struct AActor* ItemClass; // 0x00(0x08)
	enum class EItemCategory ItemCategory; // 0x08(0x01)
	enum class EItemType ItemType; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct UTexture2D* Icon; // 0x10(0x08)
	struct FText DisplayName; // 0x18(0x18)
	bool bOverrideCategoryColor; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FLinearColor InventoryItemColor; // 0x34(0x10)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct OPP.NetworkFloat
// Size: 0x10 (Inherited: 0x00)
struct FNetworkFloat {
	float ReplicatedValue; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
};

// ScriptStruct OPP.InteractionComponentReparentingData
// Size: 0x50 (Inherited: 0x00)
struct FInteractionComponentReparentingData {
	struct USceneComponent* TargetComponent; // 0x00(0x08)
	struct USceneComponent* ParentComponent; // 0x08(0x08)
	struct FTransform OriginalOffset; // 0x10(0x30)
	bool ReturnTransformToOriginalLocation; // 0x40(0x01)
	char pad_41[0xf]; // 0x41(0x0f)
};

// ScriptStruct OPP.ScheduledProperty
// Size: 0x68 (Inherited: 0x00)
struct FScheduledProperty {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName PropertyName; // 0x08(0x08)
	struct UObject* Owner; // 0x10(0x08)
	struct AActor* ActorOwner; // 0x18(0x08)
	struct AActor* NetRoleOverrideActor; // 0x20(0x08)
	float SetValue_ServerTimestamp; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FMulticastInlineDelegate OnValueChanged; // 0x30(0x10)
	float DesiredTargetTime; // 0x40(0x04)
	bool bScheduled; // 0x44(0x01)
	char pad_45[0x13]; // 0x45(0x13)
	struct FDelegate ApplyDesiredStateCallback; // 0x58(0x10)
};

// ScriptStruct OPP.ScheduledUObject
// Size: 0x88 (Inherited: 0x68)
struct FScheduledUObject : FScheduledProperty {
	struct UObject* InitialValue; // 0x68(0x08)
	struct UObject* LastValue; // 0x70(0x08)
	struct UObject* CurrentValue; // 0x78(0x08)
	struct UObject* DesiredValue; // 0x80(0x08)
};

// ScriptStruct OPP.StandardFatalityData
// Size: 0x40 (Inherited: 0x00)
struct FStandardFatalityData {
	struct ARBNPC* Attacker; // 0x00(0x08)
	struct ARBPlayer* Victim; // 0x08(0x08)
	enum class EBasicDirection Direction; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UAnimSequence* AttackerAnim; // 0x18(0x08)
	struct FVector AttackerEnterLocation; // 0x20(0x0c)
	struct FVector AttackerEnterDirection; // 0x2c(0x0c)
	struct UAnimSequence* VictimAnim; // 0x38(0x08)
};

// ScriptStruct OPP.DamageVolume
// Size: 0x60 (Inherited: 0x00)
struct FDamageVolume {
	struct UShapeComponent* Comp; // 0x00(0x08)
	struct USceneComponent* AttachComp; // 0x08(0x08)
	char pad_10[0x50]; // 0x10(0x50)
};

// ScriptStruct OPP.SpawnedAnimPropData
// Size: 0x10 (Inherited: 0x00)
struct FSpawnedAnimPropData {
	struct URBAnimNotifyState_AttachNewObject* AnimNotifyOwner; // 0x00(0x08)
	struct UObject* SpawnedProp; // 0x08(0x08)
};

// ScriptStruct OPP.StrikeDamageSettings
// Size: 0x04 (Inherited: 0x00)
struct FStrikeDamageSettings {
	enum class EDamageValue DamageValue; // 0x00(0x01)
	enum class EKnockbackValue KnockbackValue; // 0x01(0x01)
	enum class EDamageVolumeType StrikeDamageType; // 0x02(0x01)
	bool bIsWeaponHit; // 0x03(0x01)
};

// ScriptStruct OPP.ScheduledNextSpecialMoveLocomotionModeData
// Size: 0x08 (Inherited: 0x00)
struct FScheduledNextSpecialMoveLocomotionModeData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct OPP.ScheduledCompleteSpecialMoveData
// Size: 0x10 (Inherited: 0x00)
struct FScheduledCompleteSpecialMoveData {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct OPP.ScheduledLocomotionData
// Size: 0x0c (Inherited: 0x00)
struct FScheduledLocomotionData {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct OPP.ConfigurableValue
// Size: 0x38 (Inherited: 0x00)
struct FConfigurableValue {
	enum class EConfigValueType ValueType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString ValueName; // 0x08(0x10)
	struct FString DefaultName; // 0x18(0x10)
	bool bCustomName; // 0x28(0x01)
	char pad_29[0xf]; // 0x29(0x0f)
};

// ScriptStruct OPP.ConfigurableFloat
// Size: 0xc8 (Inherited: 0x38)
struct FConfigurableFloat : FConfigurableValue {
	struct FInternalFloatByDifficulty DefaultValues; // 0x38(0x20)
	bool bLocalOverrideFor1P; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	struct FInternalFloatByDifficulty Values1P; // 0x5c(0x20)
	bool bLocalOverrideFor2P; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	struct FInternalFloatByDifficulty Values2P; // 0x80(0x20)
	bool bLocalOverrideFor3P; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	struct FInternalFloatByDifficulty Values3P; // 0xa4(0x20)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// ScriptStruct OPP.InternalFloatByDifficulty
// Size: 0x20 (Inherited: 0x00)
struct FInternalFloatByDifficulty {
	bool bOverrideEasyLocalValue; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float EasyLocalValue; // 0x04(0x04)
	bool bOverrideNormalLocalValue; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float NormalLocalValue; // 0x0c(0x04)
	bool bOverrideHardLocalValue; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float HardLocalValue; // 0x14(0x04)
	bool bOverrideInsaneLocalValue; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float InsaneLocalValue; // 0x1c(0x04)
};

// ScriptStruct OPP.RBSoundReferencesData
// Size: 0x630 (Inherited: 0x00)
struct FRBSoundReferencesData {
	struct FFoleysSoundRefs Foleys; // 0x00(0xb0)
	struct FLocalSoundRefs Local; // 0xb0(0x90)
	struct FPlayerStateSoundRefs PlayerState; // 0x140(0x190)
	struct FSystemsSoundRefs Systems; // 0x2d0(0x50)
	struct FPlayerTalkSoundRefs Talk; // 0x320(0x260)
	struct FNPCSoundRefs NPC; // 0x580(0x90)
	struct FMusicSoundRefs Music; // 0x610(0x20)
};

// ScriptStruct OPP.MusicSoundRefs
// Size: 0x20 (Inherited: 0x00)
struct FMusicSoundRefs {
	struct UAkAudioEvent* TrapRoomStart; // 0x00(0x08)
	char bOverride_TrapRoomStart : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UAkAudioEvent* TrapRoomStop; // 0x10(0x08)
	char bOverride_TrapRoomStop : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct OPP.NPCSoundRefs
// Size: 0x90 (Inherited: 0x00)
struct FNPCSoundRefs {
	struct UAkAudioEvent* PusherReadyToSpawnFoley; // 0x00(0x08)
	char bOverride_PusherReadyToSpawnFoley : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UAkAudioEvent* PusherReadyToSpawnVO; // 0x10(0x08)
	char bOverride_PusherReadyToSpawnVO : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UAkAudioEvent* PouncerGnPStart; // 0x20(0x08)
	char bOverride_PouncerGnPStart : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UAkAudioEvent* PouncerGnPStop; // 0x30(0x08)
	char bOverride_PouncerGnPStop : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UAkAudioEvent* SleeperScreamStart; // 0x40(0x08)
	char bOverride_SleeperScreamStart : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct UAkAudioEvent* SleeperScreamStop; // 0x50(0x08)
	char bOverride_SleeperScreamStop : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct UAkAudioEvent* SleeperDisturbedStart; // 0x60(0x08)
	char bOverride_SleeperDisturbedStart : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct UAkAudioEvent* SleeperDisturbedStop; // 0x70(0x08)
	char bOverride_SleeperDisturbedStop : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct UAkAudioEvent* VOInterruptOno; // 0x80(0x08)
	char bOverride_VOInterruptOno : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// ScriptStruct OPP.PlayerTalkSoundRefs
// Size: 0x260 (Inherited: 0x00)
struct FPlayerTalkSoundRefs {
	struct UAkAudioEvent* Help; // 0x00(0x08)
	char bOverride_Help : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UAkAudioEvent* Acknowledge; // 0x10(0x08)
	char bOverride_Acknowledge : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UAkAudioEvent* Regroup; // 0x20(0x08)
	char bOverride_Regroup : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UAkAudioEvent* CoopMoveStatus; // 0x30(0x08)
	char bOverride_CoopMoveStatus : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UAkAudioEvent* ItemNearby; // 0x40(0x08)
	char bOverride_ItemNearby : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct UAkAudioEvent* Currency; // 0x50(0x08)
	char bOverride_Currency : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct UAkAudioEvent* Wait; // 0x60(0x08)
	char bOverride_Wait : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct UAkAudioEvent* Crawling; // 0x70(0x08)
	char bOverride_Crawling : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct UAkAudioEvent* Danger; // 0x80(0x08)
	char bOverride_Danger : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct UAkAudioEvent* ActiveSkillCooldown; // 0x90(0x08)
	char bOverride_ActiveSkillCooldown : 1; // 0x98(0x01)
	char pad_98_1 : 7; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct UAkAudioEvent* ActiveSkillEmpty; // 0xa0(0x08)
	char bOverride_ActiveSkillEmpty : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct UAkAudioEvent* ActiveSkillReady; // 0xb0(0x08)
	char bOverride_ActiveSkillReady : 1; // 0xb8(0x01)
	char pad_B8_1 : 7; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct UAkAudioEvent* ActiveSkillNoneEquipped; // 0xc0(0x08)
	char bOverride_ActiveSkillNoneEquipped : 1; // 0xc8(0x01)
	char pad_C8_1 : 7; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct UAkAudioEvent* ThankYou; // 0xd0(0x08)
	char bOverride_ThankYou : 1; // 0xd8(0x01)
	char pad_D8_1 : 7; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct UAkAudioEvent* OnMyWay; // 0xe0(0x08)
	char bOverride_OnMyWay : 1; // 0xe8(0x01)
	char pad_E8_1 : 7; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct UAkAudioEvent* Hello; // 0xf0(0x08)
	char bOverride_Hello : 1; // 0xf8(0x01)
	char pad_F8_1 : 7; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct UAkAudioEvent* Trade; // 0x100(0x08)
	char bOverride_Trade : 1; // 0x108(0x01)
	char pad_108_1 : 7; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct UAkAudioEvent* door; // 0x110(0x08)
	char bOverride_Door : 1; // 0x118(0x01)
	char pad_118_1 : 7; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct UAkAudioEvent* LockedDoor; // 0x120(0x08)
	char bOverride_LockedDoor : 1; // 0x128(0x01)
	char pad_128_1 : 7; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct UAkAudioEvent* TrappedDoor; // 0x130(0x08)
	char bOverride_TrappedDoor : 1; // 0x138(0x01)
	char pad_138_1 : 7; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
	struct UAkAudioEvent* hidespot; // 0x140(0x08)
	char bOverride_Hidespot : 1; // 0x148(0x01)
	char pad_148_1 : 7; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct UAkAudioEvent* LockedContainer; // 0x150(0x08)
	char bOverride_LockedContainer : 1; // 0x158(0x01)
	char pad_158_1 : 7; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
	struct UAkAudioEvent* Container; // 0x160(0x08)
	char bOverride_Container : 1; // 0x168(0x01)
	char pad_168_1 : 7; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct UAkAudioEvent* ElectricFloorTrap; // 0x170(0x08)
	char bOverride_ElectricFloorTrap : 1; // 0x178(0x01)
	char pad_178_1 : 7; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
	struct UAkAudioEvent* Enemy; // 0x180(0x08)
	char bOverride_Enemy : 1; // 0x188(0x01)
	char pad_188_1 : 7; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
	struct UAkAudioEvent* Enemy_Gooseberry; // 0x190(0x08)
	char bOverride_Enemy_Gooseberry : 1; // 0x198(0x01)
	char pad_198_1 : 7; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	struct UAkAudioEvent* Enemy_Coyle; // 0x1a0(0x08)
	char bOverride_Enemy_Coyle : 1; // 0x1a8(0x01)
	char pad_1A8_1 : 7; // 0x1a8(0x01)
	char pad_1A9[0x7]; // 0x1a9(0x07)
	struct UAkAudioEvent* ExplosiveTrap; // 0x1b0(0x08)
	char bOverride_ExplosiveTrap : 1; // 0x1b8(0x01)
	char pad_1B8_1 : 7; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
	struct UAkAudioEvent* HangingSoundTrap; // 0x1c0(0x08)
	char bOverride_HangingSoundTrap : 1; // 0x1c8(0x01)
	char pad_1C8_1 : 7; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)
	struct UAkAudioEvent* GlassFloorTrap; // 0x1d0(0x08)
	char bOverride_GlassFloorTrap : 1; // 0x1d8(0x01)
	char pad_1D8_1 : 7; // 0x1d8(0x01)
	char pad_1D9[0x7]; // 0x1d9(0x07)
	struct UAkAudioEvent* PsychosisMine; // 0x1e0(0x08)
	char bOverride_PsychosisMine : 1; // 0x1e8(0x01)
	char pad_1E8_1 : 7; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
	struct UAkAudioEvent* ChemMine; // 0x1f0(0x08)
	char bOverride_ChemMine : 1; // 0x1f8(0x01)
	char pad_1F8_1 : 7; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)
	struct UAkAudioEvent* CoopMove; // 0x200(0x08)
	char bOverride_CoopMove : 1; // 0x208(0x01)
	char pad_208_1 : 7; // 0x208(0x01)
	char pad_209[0x7]; // 0x209(0x07)
	struct UAkAudioEvent* breakableObstacle; // 0x210(0x08)
	char bOverride_BreakableObstacle : 1; // 0x218(0x01)
	char pad_218_1 : 7; // 0x218(0x01)
	char pad_219[0x7]; // 0x219(0x07)
	struct UAkAudioEvent* BreakableWindow; // 0x220(0x08)
	char bOverride_BreakableWindow : 1; // 0x228(0x01)
	char pad_228_1 : 7; // 0x228(0x01)
	char pad_229[0x7]; // 0x229(0x07)
	struct UAkAudioEvent* PointOfInterest; // 0x230(0x08)
	char bOverride_PointOfInterest : 1; // 0x238(0x01)
	char pad_238_1 : 7; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct UAkAudioEvent* PuzzleRoomStressBreathStart; // 0x240(0x08)
	char bOverride_PuzzleRoomStressBreathStart : 1; // 0x248(0x01)
	char pad_248_1 : 7; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	struct UAkAudioEvent* PuzzleRoomStressBreathStop; // 0x250(0x08)
	char bOverride_PuzzleRoomStressBreathStop : 1; // 0x258(0x01)
	char pad_258_1 : 7; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
};

// ScriptStruct OPP.SystemsSoundRefs
// Size: 0x50 (Inherited: 0x00)
struct FSystemsSoundRefs {
	struct UAkAudioEvent* ResetStates; // 0x00(0x08)
	char bOverride_ResetStates : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UAkAudioEvent* PauseOn; // 0x10(0x08)
	char bOverride_PauseOn : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UAkAudioEvent* PauseOff; // 0x20(0x08)
	char bOverride_PauseOff : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UAkAudioEvent* TestIntercomOn; // 0x30(0x08)
	char bOverride_TestIntercomOn : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UAkAudioEvent* TestIntercomOff; // 0x40(0x08)
	char bOverride_TestIntercomOff : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct OPP.PlayerStateSoundRefs
// Size: 0x190 (Inherited: 0x00)
struct FPlayerStateSoundRefs {
	struct UAkAudioEvent* PlayerHealthLowStart; // 0x00(0x08)
	char bOverride_PlayerHealthLowStart : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UAkAudioEvent* PlayerHealthLowStop; // 0x10(0x08)
	char bOverride_PlayerHealthLowStop : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UAkAudioEvent* PlayerLSDEffectStart; // 0x20(0x08)
	char bOverride_PlayerLSDEffectStart : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UAkAudioEvent* PlayerLSDEffectStop; // 0x30(0x08)
	char bOverride_PlayerLSDEffectStop : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UAkAudioEvent* PlayerReducedHearingStart; // 0x40(0x08)
	char bOverride_PlayerReducedHearingStart : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct UAkAudioEvent* PlayerReducedHearingStop; // 0x50(0x08)
	char bOverride_PlayerReducedHearingStop : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct UAkAudioEvent* PsychosisBoost; // 0x60(0x08)
	char bOverride_PsychosisBoost : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct UAkAudioEvent* StaminaBoostStart; // 0x70(0x08)
	char bOverride_StaminaBoostStart : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct UAkAudioEvent* StaminaBoostStop; // 0x80(0x08)
	char bOverride_StaminaBoostStop : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct UAkAudioEvent* StunnedByScreamerStart; // 0x90(0x08)
	char bOverride_StunnedByScreamerStart : 1; // 0x98(0x01)
	char pad_98_1 : 7; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct UAkAudioEvent* StunnedByScreamerStopFade; // 0xa0(0x08)
	char bOverride_StunnedByScreamerStopFade : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct UAkAudioEvent* StunnedByScreamerStopKill; // 0xb0(0x08)
	char bOverride_StunnedByScreamerStopKill : 1; // 0xb8(0x01)
	char pad_B8_1 : 7; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct UAkAudioEvent* PlayerBreathStart; // 0xc0(0x08)
	char bOverride_PlayerBreathStart : 1; // 0xc8(0x01)
	char pad_C8_1 : 7; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct UAkAudioEvent* PlayerBreathStopNormal; // 0xd0(0x08)
	char bOverride_PlayerBreathStopNormal : 1; // 0xd8(0x01)
	char pad_D8_1 : 7; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct UAkAudioEvent* PlayerBreathStopFast; // 0xe0(0x08)
	char bOverride_PlayerBreathStopFast : 1; // 0xe8(0x01)
	char pad_E8_1 : 7; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct UAkAudioEvent* StartPlayerHurtVO; // 0xf0(0x08)
	char bOverride_StartPlayerHurtVO : 1; // 0xf8(0x01)
	char pad_F8_1 : 7; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct UAkAudioEvent* StopPlayerHurtVO; // 0x100(0x08)
	char bOverride_StopPlayerHurtVO : 1; // 0x108(0x01)
	char pad_108_1 : 7; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct UAkAudioEvent* PlayerCough; // 0x110(0x08)
	char bOverride_PlayerCough : 1; // 0x118(0x01)
	char pad_118_1 : 7; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct UAkAudioEvent* UnderPsychosisAuraEffect; // 0x120(0x08)
	char bOverride_UnderPsychosisAuraEffect : 1; // 0x128(0x01)
	char pad_128_1 : 7; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct UAkAudioEvent* UnderPsychosisAuraEffectStart; // 0x130(0x08)
	char bOverride_UnderPsychosisAuraEffectStart : 1; // 0x138(0x01)
	char pad_138_1 : 7; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
	struct UAkAudioEvent* UnderPsychosisAuraEffectStop; // 0x140(0x08)
	char bOverride_UnderPsychosisAuraEffectStop : 1; // 0x148(0x01)
	char pad_148_1 : 7; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct UAkAudioEvent* UnderStaminaDrainAuraEffect; // 0x150(0x08)
	char bOverride_UnderStaminaDrainAuraEffect : 1; // 0x158(0x01)
	char pad_158_1 : 7; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
	struct UAkAudioEvent* UnderStaminaDrainAuraEffectStart; // 0x160(0x08)
	char bOverride_UnderStaminaDrainAuraEffectStart : 1; // 0x168(0x01)
	char pad_168_1 : 7; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct UAkAudioEvent* UnderStaminaDrainAuraEffectStop; // 0x170(0x08)
	char bOverride_UnderStaminaDrainAuraEffectStop : 1; // 0x178(0x01)
	char pad_178_1 : 7; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
	struct UAkAudioEvent* DefaultDeathVO; // 0x180(0x08)
	char bOverride_DefaultDeathVO : 1; // 0x188(0x01)
	char pad_188_1 : 7; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
};

// ScriptStruct OPP.LocalSoundRefs
// Size: 0x90 (Inherited: 0x00)
struct FLocalSoundRefs {
	struct UAkAudioEvent* RadioStart; // 0x00(0x08)
	char bOverride_RadioStart : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UAkAudioEvent* RadioStop; // 0x10(0x08)
	char bOverride_RadioStop : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UAkAudioEvent* ObjectiveMessageNotifySound; // 0x20(0x08)
	char bOverride_ObjectiveMessageNotifySound : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UAkAudioEvent* StartEntityFollowVoiceEvent; // 0x30(0x08)
	char bOverride_StartEntityFollowVoiceEvent : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UAkAudioEvent* StopEntityFollowVoiceEvent; // 0x40(0x08)
	char bOverride_StopEntityFollowVoiceEvent : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct UAkAudioEvent* StartEntityFollowSFXEvent; // 0x50(0x08)
	char bOverride_StartEntityFollowSFXEvent : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct UAkAudioEvent* StopEntityFollowSFXEvent; // 0x60(0x08)
	char bOverride_StopEntityFollowSFXEvent : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct UAkAudioEvent* JumpScare; // 0x70(0x08)
	char bOverride_JumpScare : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct UAkAudioEvent* DisturbanceWarning; // 0x80(0x08)
	char bOverride_DisturbanceWarning : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// ScriptStruct OPP.FoleysSoundRefs
// Size: 0xb0 (Inherited: 0x00)
struct FFoleysSoundRefs {
	struct UAkAudioEvent* FootStepWalk3P; // 0x00(0x08)
	char bOverride_FootStepWalk3P : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UAkAudioEvent* FootStepRun3P; // 0x10(0x08)
	char bOverride_FootStepRun3P : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UAkAudioEvent* FootStepWalk1P; // 0x20(0x08)
	char bOverride_FootStepWalk1P : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UAkAudioEvent* FootStepRun1P; // 0x30(0x08)
	char bOverride_FootStepRun1P : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UAkAudioEvent* FullBody_Start; // 0x40(0x08)
	char bOverride_FullBody_Start : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct UAkAudioEvent* FullBody_Stop; // 0x50(0x08)
	char bOverride_FullBody_Stop : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct UAkAudioEvent* LegsShort; // 0x60(0x08)
	char bOverride_LegsShort : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct UAkAudioEvent* LegsLong; // 0x70(0x08)
	char bOverride_LegsLong : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct UAkAudioEvent* TorsoShort; // 0x80(0x08)
	char bOverride_TorsoShort : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct UAkAudioEvent* TorsoLong; // 0x90(0x08)
	char bOverride_TorsoLong : 1; // 0x98(0x01)
	char pad_98_1 : 7; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct UAkAudioEvent* Damage; // 0xa0(0x08)
	char bOverride_Damage : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// ScriptStruct OPP.RBAnimReferencesData
// Size: 0x33c8 (Inherited: 0x00)
struct FRBAnimReferencesData {
	struct FLocomotionAnimRefs Locomotion; // 0x00(0x888)
	struct FCombatAnimRefs Combat; // 0x888(0x1c0)
	struct FInteractionsAnimRefs Interactions; // 0xa48(0x1a8)
	struct FDoorInteractionsAnimRefs DoorInteractions; // 0xbf0(0x2e0)
	struct FNPCAttackAnimRefs NPCAttacks; // 0xed0(0xa0)
	struct FNPCActionsAnimRefs NPCActions; // 0xf70(0x2e0)
	struct FPouncerGnPAnimRefs PouncerGnP; // 0x1250(0x2a0)
	struct FCoopTrapAnimRefs CoopTrap; // 0x14f0(0x1f8)
	struct FCoopMoveAnimRefs CoopMove; // 0x16e8(0x12a8)
	struct FPlayerHitReactionsAnimRefs PlayerHitReaction; // 0x2990(0x8e8)
	struct FNightVisionAnimRefs NightVision; // 0x3278(0x150)
};

// ScriptStruct OPP.NightVisionAnimRefs
// Size: 0x150 (Inherited: 0x00)
struct FNightVisionAnimRefs {
	struct FRBAnimRef GoggleTurnOn; // 0x00(0x30)
	char bOverride_GoggleTurnOn : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FRBAnimRef GoggleTurnOff; // 0x38(0x30)
	char bOverride_GoggleTurnOff : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FRBAnimRef ArmTurnOn; // 0x70(0x30)
	char bOverride_ArmTurnOn : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FRBAnimRef ArmTurnOff; // 0xa8(0x30)
	char bOverride_ArmTurnOff : 1; // 0xd8(0x01)
	char pad_D8_1 : 7; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct FRBAnimRef ArmTurnOnCrouched; // 0xe0(0x30)
	char bOverride_ArmTurnOnCrouched : 1; // 0x110(0x01)
	char pad_110_1 : 7; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FRBAnimRef ArmTurnOffCrouched; // 0x118(0x30)
	char bOverride_ArmTurnOffCrouched : 1; // 0x148(0x01)
	char pad_148_1 : 7; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
};

// ScriptStruct OPP.PlayerHitReactionsAnimRefs
// Size: 0x8e8 (Inherited: 0x00)
struct FPlayerHitReactionsAnimRefs {
	struct FPlayerHitReactionSetAnimRefs Light; // 0x00(0x1c0)
	char bOverride_Light : 1; // 0x1c0(0x01)
	char pad_1C0_1 : 7; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)
	struct FPlayerHitReactionSetAnimRefs Medium; // 0x1c8(0x1c0)
	char bOverride_Medium : 1; // 0x388(0x01)
	char pad_388_1 : 7; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct FPlayerHitReactionSetAnimRefs Heavy; // 0x390(0x1c0)
	char bOverride_Heavy : 1; // 0x550(0x01)
	char pad_550_1 : 7; // 0x550(0x01)
	char pad_551[0x7]; // 0x551(0x07)
	struct FPlayerHitReactionSetAnimRefs KnockedDown; // 0x558(0x1c0)
	char bOverride_KnockedDown : 1; // 0x718(0x01)
	char pad_718_1 : 7; // 0x718(0x01)
	char pad_719[0x7]; // 0x719(0x07)
	struct FPlayerHitReactionSetAnimRefs Dead; // 0x720(0x1c0)
	char bOverride_Dead : 1; // 0x8e0(0x01)
	char pad_8E0_1 : 7; // 0x8e0(0x01)
	char pad_8E1[0x7]; // 0x8e1(0x07)
};

// ScriptStruct OPP.PlayerHitReactionSetAnimRefs
// Size: 0x1c0 (Inherited: 0x00)
struct FPlayerHitReactionSetAnimRefs {
	struct FRBAnimRef Start_Forward; // 0x00(0x30)
	char bOverride_Start_Forward : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FRBAnimRef Start_Right; // 0x38(0x30)
	char bOverride_Start_Right : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FRBAnimRef Start_Back; // 0x70(0x30)
	char bOverride_Start_Back : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FRBAnimRef Start_Left; // 0xa8(0x30)
	char bOverride_Start_Left : 1; // 0xd8(0x01)
	char pad_D8_1 : 7; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct FRBAnimRef End_Forward; // 0xe0(0x30)
	char bOverride_End_Forward : 1; // 0x110(0x01)
	char pad_110_1 : 7; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FRBAnimRef End_Right; // 0x118(0x30)
	char bOverride_End_Right : 1; // 0x148(0x01)
	char pad_148_1 : 7; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct FRBAnimRef End_Back; // 0x150(0x30)
	char bOverride_End_Back : 1; // 0x180(0x01)
	char pad_180_1 : 7; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
	struct FRBAnimRef End_Left; // 0x188(0x30)
	char bOverride_End_Left : 1; // 0x1b8(0x01)
	char pad_1B8_1 : 7; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
};

// ScriptStruct OPP.CoopMoveAnimRefs
// Size: 0x12a8 (Inherited: 0x00)
struct FCoopMoveAnimRefs {
	struct FRBAnimRef HighJump_Catch_StepIn_Leader; // 0x00(0x30)
	char bOverride_HighJump_Catch_StepIn_Leader : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FRBAnimRef HighJump_Catch_StepOut_Leader; // 0x38(0x30)
	char bOverride_HighJump_Catch_StepOut_Leader : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FRBAnimRef HighJump_Catch_FromJump_Leader; // 0x70(0x30)
	char bOverride_HighJump_Catch_FromJump_Leader : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FRBAnimRef HighJump_Catch_FromToss_Leader; // 0xa8(0x30)
	char bOverride_HighJump_Catch_FromToss_Leader : 1; // 0xd8(0x01)
	char pad_D8_1 : 7; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct FRBAnimRef HighJump_Toss_StepIn_Front_Leader; // 0xe0(0x30)
	char bOverride_HighJump_Toss_StepIn_Front_Leader : 1; // 0x110(0x01)
	char pad_110_1 : 7; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FRBAnimRef HighJump_Toss_StepIn_Back_Leader; // 0x118(0x30)
	char bOverride_HighJump_Toss_StepIn_Back_Leader : 1; // 0x148(0x01)
	char pad_148_1 : 7; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct FRBAnimRef HighJump_Toss_Leader; // 0x150(0x30)
	char bOverride_HighJump_Toss_Leader : 1; // 0x180(0x01)
	char pad_180_1 : 7; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
	struct FRBAnimRef HighJump_Catch_Follower; // 0x188(0x30)
	char bOverride_HighJump_Catch_Follower : 1; // 0x1b8(0x01)
	char pad_1B8_1 : 7; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
	struct FRBAnimRef HighJump_Toss_Follower; // 0x1c0(0x30)
	char bOverride_HighJump_Toss_Follower : 1; // 0x1f0(0x01)
	char pad_1F0_1 : 7; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
	struct FRBAnimRef HighJump_TossCatch_Follower; // 0x1f8(0x30)
	char bOverride_HighJump_TossCatch_Follower : 1; // 0x228(0x01)
	char pad_228_1 : 7; // 0x228(0x01)
	char pad_229[0x7]; // 0x229(0x07)
	struct FRBAnimRef CoopClimbOver_Toss_Follower; // 0x230(0x30)
	char bOverride_CoopClimbOver_Toss_Follower : 1; // 0x260(0x01)
	char pad_260_1 : 7; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)
	struct FRBAnimRef LongJump_Toss_Follower_Wall; // 0x268(0x30)
	char bOverride_LongJump_Toss_Follower_Wall : 1; // 0x298(0x01)
	char pad_298_1 : 7; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct FRBAnimRef LongJump_Toss_Follower_NoWall; // 0x2a0(0x30)
	char bOverride_LongJump_Toss_Follower_NoWall : 1; // 0x2d0(0x01)
	char pad_2D0_1 : 7; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct FRBAnimRef LongJump_Toss_Follower_Catch; // 0x2d8(0x30)
	char bOverride_LongJump_Toss_Follower_Catch : 1; // 0x308(0x01)
	char pad_308_1 : 7; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	struct FRBAnimRef LongJump_Toss_StepIn_Left_Leader; // 0x310(0x30)
	char bOverride_LongJump_Toss_StepIn_Left_Leader : 1; // 0x340(0x01)
	char pad_340_1 : 7; // 0x340(0x01)
	char pad_341[0x7]; // 0x341(0x07)
	struct FRBAnimRef LongJump_Toss_StepIn_Right_Leader; // 0x348(0x30)
	char bOverride_LongJump_Toss_StepIn_Right_Leader : 1; // 0x378(0x01)
	char pad_378_1 : 7; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct FRBAnimRef LongJump_Toss_Left_Leader; // 0x380(0x30)
	char bOverride_LongJump_Toss_Left_Leader : 1; // 0x3b0(0x01)
	char pad_3B0_1 : 7; // 0x3b0(0x01)
	char pad_3B1[0x7]; // 0x3b1(0x07)
	struct FRBAnimRef LongJump_Toss_Right_Leader; // 0x3b8(0x30)
	char bOverride_LongJump_Toss_Right_Leader : 1; // 0x3e8(0x01)
	char pad_3E8_1 : 7; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct FRBAnimRef LongJump_Jump_Follower; // 0x3f0(0x30)
	char bOverride_LongJump_Jump_Follower : 1; // 0x420(0x01)
	char pad_420_1 : 7; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct FRBAnimRef LongJump_Catch_StepIn_Leader; // 0x428(0x30)
	char bOverride_LongJump_Catch_StepIn_Leader : 1; // 0x458(0x01)
	char pad_458_1 : 7; // 0x458(0x01)
	char pad_459[0x7]; // 0x459(0x07)
	struct FRBAnimRef LongJump_Catch_Leader_FromJump; // 0x460(0x30)
	char bOverride_LongJump_Catch_Leader_FromJump : 1; // 0x490(0x01)
	char pad_490_1 : 7; // 0x490(0x01)
	char pad_491[0x7]; // 0x491(0x07)
	struct FRBAnimRef LongJump_Catch_Leader_FromToss; // 0x498(0x30)
	char bOverride_LongJump_Catch_Leader_FromToss : 1; // 0x4c8(0x01)
	char pad_4C8_1 : 7; // 0x4c8(0x01)
	char pad_4C9[0x7]; // 0x4c9(0x07)
	struct UAnimSequence* Bash_Enter_Left; // 0x4d0(0x08)
	char bOverride_Bash_Enter_Left : 1; // 0x4d8(0x01)
	char pad_4D8_1 : 7; // 0x4d8(0x01)
	char pad_4D9[0x7]; // 0x4d9(0x07)
	struct UAnimSequence* Bash_Action_Left; // 0x4e0(0x08)
	char bOverride_Bash_Action_Left : 1; // 0x4e8(0x01)
	char pad_4E8_1 : 7; // 0x4e8(0x01)
	char pad_4E9[0x7]; // 0x4e9(0x07)
	struct UAnimSequence* Bash_Enter_Right; // 0x4f0(0x08)
	char bOverride_Bash_Enter_Right : 1; // 0x4f8(0x01)
	char pad_4F8_1 : 7; // 0x4f8(0x01)
	char pad_4F9[0x7]; // 0x4f9(0x07)
	struct UAnimSequence* Bash_Action_Right; // 0x500(0x08)
	char bOverride_Bash_Action_Right : 1; // 0x508(0x01)
	char pad_508_1 : 7; // 0x508(0x01)
	char pad_509[0x7]; // 0x509(0x07)
	struct FPlayerHelpUpAnimRefs PlayerHelpUp; // 0x510(0x720)
	struct FPlayerReviveAnimRefs PlayerRevive; // 0xc30(0x640)
	struct FRBAnimRef Trade_Give_Item; // 0x1270(0x30)
	char bOverride_Trade_Give_Item : 1; // 0x12a0(0x01)
	char pad_12A0_1 : 7; // 0x12a0(0x01)
	char pad_12A1[0x7]; // 0x12a1(0x07)
};

// ScriptStruct OPP.PlayerReviveAnimRefs
// Size: 0x640 (Inherited: 0x00)
struct FPlayerReviveAnimRefs {
	struct FPlayerReviveAnimSet Forward; // 0x00(0x188)
	char bOverride_Forward : 1; // 0x188(0x01)
	char pad_188_1 : 7; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
	struct FPlayerReviveAnimSet Backward; // 0x190(0x188)
	char bOverride_Backward : 1; // 0x318(0x01)
	char pad_318_1 : 7; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct FPlayerReviveAnimSet Right; // 0x320(0x188)
	char bOverride_Right : 1; // 0x4a8(0x01)
	char pad_4A8_1 : 7; // 0x4a8(0x01)
	char pad_4A9[0x7]; // 0x4a9(0x07)
	struct FPlayerReviveAnimSet Left; // 0x4b0(0x188)
	char bOverride_Left : 1; // 0x638(0x01)
	char pad_638_1 : 7; // 0x638(0x01)
	char pad_639[0x7]; // 0x639(0x07)
};

// ScriptStruct OPP.PlayerReviveAnimSet
// Size: 0x188 (Inherited: 0x00)
struct FPlayerReviveAnimSet {
	struct FRBAnimRef Entry_Follower; // 0x00(0x30)
	char bOverride_Entry_Follower : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FRBAnimRef Entry_Leader; // 0x38(0x30)
	char bOverride_Entry_Leader : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FRBAnimRef Try_Follower; // 0x70(0x30)
	char bOverride_Try_Follower : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FRBAnimRef Try_Leader; // 0xa8(0x30)
	char bOverride_Try_Leader : 1; // 0xd8(0x01)
	char pad_D8_1 : 7; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct FRBAnimRef Leave_Leader; // 0xe0(0x30)
	char bOverride_Leave_Leader : 1; // 0x110(0x01)
	char pad_110_1 : 7; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FRBAnimRef Success_Follower; // 0x118(0x30)
	char bOverride_Success_Follower : 1; // 0x148(0x01)
	char pad_148_1 : 7; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct FRBAnimRef Success_Leader; // 0x150(0x30)
	char bOverride_Success_Leader : 1; // 0x180(0x01)
	char pad_180_1 : 7; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
};

// ScriptStruct OPP.PlayerHelpUpAnimRefs
// Size: 0x720 (Inherited: 0x00)
struct FPlayerHelpUpAnimRefs {
	struct FPlayerHelpUpAnimSet Forward; // 0x00(0x1c0)
	char bOverride_Forward : 1; // 0x1c0(0x01)
	char pad_1C0_1 : 7; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)
	struct FPlayerHelpUpAnimSet Backward; // 0x1c8(0x1c0)
	char bOverride_Backward : 1; // 0x388(0x01)
	char pad_388_1 : 7; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct FPlayerHelpUpAnimSet Right; // 0x390(0x1c0)
	char bOverride_Right : 1; // 0x550(0x01)
	char pad_550_1 : 7; // 0x550(0x01)
	char pad_551[0x7]; // 0x551(0x07)
	struct FPlayerHelpUpAnimSet Left; // 0x558(0x1c0)
	char bOverride_Left : 1; // 0x718(0x01)
	char pad_718_1 : 7; // 0x718(0x01)
	char pad_719[0x7]; // 0x719(0x07)
};

// ScriptStruct OPP.PlayerHelpUpAnimSet
// Size: 0x1c0 (Inherited: 0x00)
struct FPlayerHelpUpAnimSet {
	struct FRBAnimRef Entry_Follower; // 0x00(0x30)
	char bOverride_Entry_Follower : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FRBAnimRef Entry_Leader; // 0x38(0x30)
	char bOverride_Entry_Leader : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FRBAnimRef Try_Follower; // 0x70(0x30)
	char bOverride_Try_Follower : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FRBAnimRef Try_Leader; // 0xa8(0x30)
	char bOverride_Try_Leader : 1; // 0xd8(0x01)
	char pad_D8_1 : 7; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct FRBAnimRef Leave_Leader; // 0xe0(0x30)
	char bOverride_Leave_Leader : 1; // 0x110(0x01)
	char pad_110_1 : 7; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FRBAnimRef Success_Follower; // 0x118(0x30)
	char bOverride_Success_Follower : 1; // 0x148(0x01)
	char pad_148_1 : 7; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct FRBAnimRef Success_Leader; // 0x150(0x30)
	char bOverride_Success_Leader : 1; // 0x180(0x01)
	char pad_180_1 : 7; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
	struct FRBAnimRef Fail_Follower; // 0x188(0x30)
	char bOverride_Fail_Follower : 1; // 0x1b8(0x01)
	char pad_1B8_1 : 7; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
};

// ScriptStruct OPP.CoopTrapAnimRefs
// Size: 0x1f8 (Inherited: 0x00)
struct FCoopTrapAnimRefs {
	struct FRBAnimRef VictimEnter; // 0x00(0x30)
	char bOverride_VictimEnter : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FRBAnimRef VictimLoop; // 0x38(0x30)
	char bOverride_VictimLoop : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FRBAnimRef VictimExit; // 0x70(0x30)
	char bOverride_VictimExit : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FRBAnimRef VictimFailKnockdown; // 0xa8(0x30)
	char bOverride_VictimFailKnockdown : 1; // 0xd8(0x01)
	char pad_D8_1 : 7; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct FRBAnimRef VictimFailDeath; // 0xe0(0x30)
	char bOverride_VictimFailDeath : 1; // 0x110(0x01)
	char pad_110_1 : 7; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FRBAnimRef HelperEnterLeft; // 0x118(0x30)
	char bOverride_HelperEnterLeft : 1; // 0x148(0x01)
	char pad_148_1 : 7; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct FRBAnimRef HelperEnterRight; // 0x150(0x30)
	char bOverride_HelperEnterRight : 1; // 0x180(0x01)
	char pad_180_1 : 7; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
	struct FRBAnimRef HelperLoop; // 0x188(0x30)
	char bOverride_HelperLoop : 1; // 0x1b8(0x01)
	char pad_1B8_1 : 7; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
	struct FRBAnimRef HelperExit; // 0x1c0(0x30)
	char bOverride_HelperExit : 1; // 0x1f0(0x01)
	char pad_1F0_1 : 7; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
};

// ScriptStruct OPP.PouncerGnPAnimRefs
// Size: 0x2a0 (Inherited: 0x00)
struct FPouncerGnPAnimRefs {
	struct UAnimSequence* EnterPouncerGnPAttacker_FreeStanding; // 0x00(0x08)
	char bOverride_EnterPouncerGnPAttacker_FreeStanding : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UBlendSpaceBase* EnterPouncerGnPVictimBS_FreeStanding; // 0x10(0x08)
	char bOverride_EnterPouncerGnPVictimBS_FreeStanding : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UAnimSequence* EnterPouncerGnPAttacker_StandingLeft; // 0x20(0x08)
	char bOverride_EnterPouncerGnPAttacker_StandingLeft : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UBlendSpaceBase* EnterPouncerGnPVictimBS_StandingLeft; // 0x30(0x08)
	char bOverride_EnterPouncerGnPVictimBS_StandingLeft : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UAnimSequence* EnterPouncerGnPAttacker_StandingRight; // 0x40(0x08)
	char bOverride_EnterPouncerGnPAttacker_StandingRight : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct UBlendSpaceBase* EnterPouncerGnPVictimBS_StandingRight; // 0x50(0x08)
	char bOverride_EnterPouncerGnPVictimBS_StandingRight : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct UAnimSequence* EnterPouncerGnPAttacker_ProneLeft; // 0x60(0x08)
	char bOverride_EnterPouncerGnPAttacker_ProneLeft : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct UBlendSpaceBase* EnterPouncerGnPVictimBS_ProneLeft; // 0x70(0x08)
	char bOverride_EnterPouncerGnPVictimBS_ProneLeft : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct UAnimSequence* EnterPouncerGnPAttacker_ProneRight; // 0x80(0x08)
	char bOverride_EnterPouncerGnPAttacker_ProneRight : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct UBlendSpaceBase* EnterPouncerGnPVictimBS_ProneRight; // 0x90(0x08)
	char bOverride_EnterPouncerGnPVictimBS_ProneRight : 1; // 0x98(0x01)
	char pad_98_1 : 7; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct UAnimSequence* EnterPouncerGnPAttacker_Crouched; // 0xa0(0x08)
	char bOverride_EnterPouncerGnPAttacker_Crouched : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct UBlendSpaceBase* EnterPouncerGnPVictimBS_Crouched; // 0xb0(0x08)
	char bOverride_EnterPouncerGnPVictimBS_Crouched : 1; // 0xb8(0x01)
	char pad_B8_1 : 7; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct UAnimSequence* EnterPouncerGnPAttacker_InsideHorizontal; // 0xc0(0x08)
	char bOverride_EnterPouncerGnPAttacker_InsideHorizontal : 1; // 0xc8(0x01)
	char pad_C8_1 : 7; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct UBlendSpaceBase* EnterPouncerGnPVictimBS_InsideHorizontal; // 0xd0(0x08)
	char bOverride_EnterPouncerGnPVictimBS_InsideHorizontal : 1; // 0xd8(0x01)
	char pad_D8_1 : 7; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct UAnimSequence* EnterPouncerGnPAttacker_InsideVertical; // 0xe0(0x08)
	char bOverride_EnterPouncerGnPAttacker_InsideVertical : 1; // 0xe8(0x01)
	char pad_E8_1 : 7; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct UBlendSpaceBase* EnterPouncerGnPVictimBS_InsideVertical; // 0xf0(0x08)
	char bOverride_EnterPouncerGnPVictimBS_InsideVertical : 1; // 0xf8(0x01)
	char pad_F8_1 : 7; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct UAnimSequence* EnterPouncerGnPAttacker_CarTrunk; // 0x100(0x08)
	char bOverride_EnterPouncerGnPAttacker_CarTrunk : 1; // 0x108(0x01)
	char pad_108_1 : 7; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct UBlendSpaceBase* EnterPouncerGnPVictimBS_CarTrunk; // 0x110(0x08)
	char bOverride_EnterPouncerGnPVictimBS_CarTrunk : 1; // 0x118(0x01)
	char pad_118_1 : 7; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct UAnimSequence* SignalTackle; // 0x120(0x08)
	char bOverride_SignalTackle : 1; // 0x128(0x01)
	char pad_128_1 : 7; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct UAnimSequence* TackleFail; // 0x130(0x08)
	char bOverride_TackleFail : 1; // 0x138(0x01)
	char pad_138_1 : 7; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
	struct UAnimSequence* PouncerGnPFinishAttacker; // 0x140(0x08)
	char bOverride_PouncerGnPFinishAttacker : 1; // 0x148(0x01)
	char pad_148_1 : 7; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct UAnimSequence* PouncerGnPFinishVictimKnockdown; // 0x150(0x08)
	char bOverride_PouncerGnPFinishVictimKnockdown : 1; // 0x158(0x01)
	char pad_158_1 : 7; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
	struct UAnimSequence* PouncerGnPFinishVictimDead; // 0x160(0x08)
	char bOverride_PouncerGnPFinishVictimDead : 1; // 0x168(0x01)
	char pad_168_1 : 7; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct UAnimSequence* PouncerGnPGiveUpAttacker; // 0x170(0x08)
	char bOverride_PouncerGnPGiveUpAttacker : 1; // 0x178(0x01)
	char pad_178_1 : 7; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
	struct UAnimSequence* PouncerGnPGiveUpVictim; // 0x180(0x08)
	char bOverride_PouncerGnPGiveUpVictim : 1; // 0x188(0x01)
	char pad_188_1 : 7; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
	struct UAnimSequence* PouncerGnPInterruptInterrupter; // 0x190(0x08)
	char bOverride_PouncerGnPInterruptInterrupter : 1; // 0x198(0x01)
	char pad_198_1 : 7; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	struct UAnimSequence* PouncerGnPInterruptFwdPouncer; // 0x1a0(0x08)
	char bOverride_PouncerGnPInterruptFwdPouncer : 1; // 0x1a8(0x01)
	char pad_1A8_1 : 7; // 0x1a8(0x01)
	char pad_1A9[0x7]; // 0x1a9(0x07)
	struct UAnimSequence* PouncerGnPInterruptFwdPinnedPlayer; // 0x1b0(0x08)
	char bOverride_PouncerGnPInterruptFwdPinnedPlayer : 1; // 0x1b8(0x01)
	char pad_1B8_1 : 7; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
	struct UAnimSequence* PouncerGnPInterruptLeftPouncer; // 0x1c0(0x08)
	char bOverride_PouncerGnPInterruptLeftPouncer : 1; // 0x1c8(0x01)
	char pad_1C8_1 : 7; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)
	struct UAnimSequence* PouncerGnPInterruptLeftPinnedPlayer; // 0x1d0(0x08)
	char bOverride_PouncerGnPInterruptLeftPinnedPlayer : 1; // 0x1d8(0x01)
	char pad_1D8_1 : 7; // 0x1d8(0x01)
	char pad_1D9[0x7]; // 0x1d9(0x07)
	struct UAnimSequence* PouncerGnPInterruptRightPouncer; // 0x1e0(0x08)
	char bOverride_PouncerGnPInterruptRightPouncer : 1; // 0x1e8(0x01)
	char pad_1E8_1 : 7; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
	struct UAnimSequence* PouncerGnPInterruptRightPinnedPlayer; // 0x1f0(0x08)
	char bOverride_PouncerGnPInterruptRightPinnedPlayer : 1; // 0x1f8(0x01)
	char pad_1F8_1 : 7; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)
	struct UAnimSequence* PouncerGnPInterruptBackPouncer; // 0x200(0x08)
	char bOverride_PouncerGnPInterruptBackPouncer : 1; // 0x208(0x01)
	char pad_208_1 : 7; // 0x208(0x01)
	char pad_209[0x7]; // 0x209(0x07)
	struct UAnimSequence* PouncerGnPInterruptBackPinnedPlayer; // 0x210(0x08)
	char bOverride_PouncerGnPInterruptBackPinnedPlayer : 1; // 0x218(0x01)
	char pad_218_1 : 7; // 0x218(0x01)
	char pad_219[0x7]; // 0x219(0x07)
	struct UAnimSequence* PouncerGnPEscapeFistLeftPlayer; // 0x220(0x08)
	char bOverride_PouncerGnPEscapeFistLeftPlayer : 1; // 0x228(0x01)
	char pad_228_1 : 7; // 0x228(0x01)
	char pad_229[0x7]; // 0x229(0x07)
	struct UAnimSequence* PouncerGnPEscapeBottleLeftPlayer; // 0x230(0x08)
	char bOverride_PouncerGnPEscapeBottleLeftPlayer : 1; // 0x238(0x01)
	char pad_238_1 : 7; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct UAnimSequence* PouncerGnPEscapeBrickLeftPlayer; // 0x240(0x08)
	char bOverride_PouncerGnPEscapeBrickLeftPlayer : 1; // 0x248(0x01)
	char pad_248_1 : 7; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	struct UAnimSequence* PouncerGnPEscapeLeftPouncer; // 0x250(0x08)
	char bOverride_PouncerGnPEscapeLeftPouncer : 1; // 0x258(0x01)
	char pad_258_1 : 7; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct UAnimSequence* PouncerGnPEscapeFistRightPlayer; // 0x260(0x08)
	char bOverride_PouncerGnPEscapeFistRightPlayer : 1; // 0x268(0x01)
	char pad_268_1 : 7; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct UAnimSequence* PouncerGnPEscapeBottleRightPlayer; // 0x270(0x08)
	char bOverride_PouncerGnPEscapeBottleRightPlayer : 1; // 0x278(0x01)
	char pad_278_1 : 7; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct UAnimSequence* PouncerGnPEscapeBrickRightPlayer; // 0x280(0x08)
	char bOverride_PouncerGnPEscapeBrickRightPlayer : 1; // 0x288(0x01)
	char pad_288_1 : 7; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct UAnimSequence* PouncerGnPEscapeRightPouncer; // 0x290(0x08)
	char bOverride_PouncerGnPEscapeRightPouncer : 1; // 0x298(0x01)
	char pad_298_1 : 7; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
};

// ScriptStruct OPP.NPCActionsAnimRefs
// Size: 0x2e0 (Inherited: 0x00)
struct FNPCActionsAnimRefs {
	struct FNPCSabotageAnimRefs NPC_SabotageAnimRefs; // 0x00(0x20)
	struct UAnimSequence* NPC_Investigate_Long; // 0x20(0x08)
	char bOverride_NPC_Investigate_Long : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UAnimSequence* NPC_Investigate_Short; // 0x30(0x08)
	char bOverride_NPC_Investigate_Short : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UAnimSequence* NPC_Investigate_LedgeDrop; // 0x40(0x08)
	char bOverride_NPC_Investigate_LedgeDrop : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct UAnimSequence*> NPC_InvestigationBreakers; // 0x50(0x10)
	char bOverride_NPC_InvestigationBreakers : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct TArray<struct UAnimSequence*> NPC_GiveUpInvestigationAnims; // 0x68(0x10)
	char bOverride_NPC_GiveUpInvestigationAnims : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct TArray<struct UAnimSequence*> NPC_GiveUpAlertedAnims; // 0x80(0x10)
	char bOverride_NPC_GiveUpAlertedAnims : 1; // 0x90(0x01)
	char pad_90_1 : 7; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct TArray<struct UAnimSequence*> NPC_GiveUpSuspiciousAnims; // 0x98(0x10)
	char bOverride_NPC_GiveUpSuspiciousAnims : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct TArray<struct UAnimSequence*> NPC_PlayerTauntAnims; // 0xb0(0x10)
	char bOverride_NPC_PlayerTauntAnims : 1; // 0xc0(0x01)
	char pad_C0_1 : 7; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	struct TArray<struct UAnimSequence*> NPC_BerserkIdleBreakers; // 0xc8(0x10)
	char bOverride_NPC_BerserkIdleBreakers : 1; // 0xd8(0x01)
	char pad_D8_1 : 7; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct UBlendSpaceBase* NPC_ReactToPlayer; // 0xe0(0x08)
	char bOverride_NPC_ReactToPlayer : 1; // 0xe8(0x01)
	char pad_E8_1 : 7; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct UAnimSequence* NPC_ReactToGrenade; // 0xf0(0x08)
	char bOverride_NPC_ReactToGrenade : 1; // 0xf8(0x01)
	char pad_F8_1 : 7; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct UAnimSequence* NPC_TrapReaction; // 0x100(0x08)
	char bOverride_NPC_TrapReaction : 1; // 0x108(0x01)
	char pad_108_1 : 7; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct TArray<struct UAnimSequence*> NPC_CheckSurroundings; // 0x110(0x10)
	char bOverride_NPC_CheckSurroundings : 1; // 0x120(0x01)
	char pad_120_1 : 7; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct UBlendSpaceBase* TurnOnSpotBS; // 0x128(0x08)
	char bOverride_TurnOnSpotBS : 1; // 0x130(0x01)
	char pad_130_1 : 7; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct UBlendSpaceBase* KnockOutBS; // 0x138(0x08)
	char bOverride_KnockOutBS : 1; // 0x140(0x01)
	char pad_140_1 : 7; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	struct UAnimSequence* NPC_GetUpFromKnockout_Short; // 0x148(0x08)
	char bOverride_NPC_GetUpFromKnockout_Short : 1; // 0x150(0x01)
	char pad_150_1 : 7; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	struct UAnimSequence* NPC_GetUpFromKnockout_Long; // 0x158(0x08)
	char bOverride_NPC_GetUpFromKnockout_Long : 1; // 0x160(0x01)
	char pad_160_1 : 7; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	struct UAnimSequence* NPC_ShotgunAttack; // 0x168(0x08)
	char bOverride_NPC_ShotgunAttack : 1; // 0x170(0x01)
	char pad_170_1 : 7; // 0x170(0x01)
	char pad_171[0x7]; // 0x171(0x07)
	struct UAnimSequence* NPC_ShotgunReload; // 0x178(0x08)
	char bOverride_NPC_ShotgunReload : 1; // 0x180(0x01)
	char pad_180_1 : 7; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
	struct TArray<struct UAnimSequence*> NPC_HaarpReactions; // 0x188(0x10)
	char bOverride_NPC_HaarpReactions : 1; // 0x198(0x01)
	char pad_198_1 : 7; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	struct TArray<struct UAnimSequence*> NPC_ReactToGrenadeStun; // 0x1a0(0x10)
	char bOverride_NPC_ReactToGrenadeStun : 1; // 0x1b0(0x01)
	char pad_1B0_1 : 7; // 0x1b0(0x01)
	char pad_1B1[0x7]; // 0x1b1(0x07)
	struct TArray<struct UAnimSequence*> NPC_GrenadeStun; // 0x1b8(0x10)
	char bOverride_NPC_GrenadeStun : 1; // 0x1c8(0x01)
	char pad_1C8_1 : 7; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)
	struct TArray<struct UAnimSequence*> NPC_RecoverFromGrenadeStun; // 0x1d0(0x10)
	char bOverride_NPC_RecoverFromGrenadeStun : 1; // 0x1e0(0x01)
	char pad_1E0_1 : 7; // 0x1e0(0x01)
	char pad_1E1[0x7]; // 0x1e1(0x07)
	struct UAnimSequence* NPC_ReactToBlindPaint_Left; // 0x1e8(0x08)
	char bOverride_NPC_ReactToBlindPaint_Left : 1; // 0x1f0(0x01)
	char pad_1F0_1 : 7; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
	struct UAnimSequence* NPC_ReactToBlindPaint_Right; // 0x1f8(0x08)
	char bOverride_NPC_ReactToBlindPaint_Right : 1; // 0x200(0x01)
	char pad_200_1 : 7; // 0x200(0x01)
	char pad_201[0x7]; // 0x201(0x07)
	struct UAnimSequence* NPC_ReactToBlindPaint_Forward; // 0x208(0x08)
	char bOverride_NPC_ReactToBlindPaint_Forward : 1; // 0x210(0x01)
	char pad_210_1 : 7; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)
	struct UAnimSequence* NPC_ReactToHealSlowdown; // 0x218(0x08)
	char bOverride_NPC_ReactToHealSlowdown : 1; // 0x220(0x01)
	char pad_220_1 : 7; // 0x220(0x01)
	char pad_221[0x7]; // 0x221(0x07)
	struct TArray<struct UAnimSequence*> NPC_RecoverFromBlindPaint; // 0x228(0x10)
	char bOverride_NPC_RecoverFromBlindPaint : 1; // 0x238(0x01)
	char pad_238_1 : 7; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct TArray<struct UAnimSequence*> NPC_ChaseBreakers; // 0x240(0x10)
	char bOverride_NPC_ChaseBreakers : 1; // 0x250(0x01)
	char pad_250_1 : 7; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
	struct TArray<struct UAnimSequence*> NPC_FlinchReactions; // 0x258(0x10)
	char bOverride_NPC_FlinchReactions : 1; // 0x268(0x01)
	char pad_268_1 : 7; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct UAnimSequence* NPC_GoryDeath; // 0x270(0x08)
	char bOverride_NPC_GoryDeath : 1; // 0x278(0x01)
	char pad_278_1 : 7; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct UAnimSequence* Pitcher_ThrowMolotov; // 0x280(0x08)
	char bOverride_Pitcher_ThrowMolotov : 1; // 0x288(0x01)
	char pad_288_1 : 7; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct UAnimSequence* Pitcher_EquipMolotov; // 0x290(0x08)
	char bOverride_Pitcher_EquipMolotov : 1; // 0x298(0x01)
	char pad_298_1 : 7; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct UAnimSequence* Pitcher_UnequipMolotov; // 0x2a0(0x08)
	char bOverride_Pitcher_UnequipMolotov : 1; // 0x2a8(0x01)
	char pad_2A8_1 : 7; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct UAnimSequence* NPC_SlamDoorLeft; // 0x2b0(0x08)
	char bOverride_NPC_SlamDoorLeft : 1; // 0x2b8(0x01)
	char pad_2B8_1 : 7; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct UAnimSequence* NPC_SlamDoorRight; // 0x2c0(0x08)
	char bOverride_NPC_SlamDoorRight : 1; // 0x2c8(0x01)
	char pad_2C8_1 : 7; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct UAnimSequence* SleeperScreamer_TransitScream; // 0x2d0(0x08)
	char bOverride_SleeperScreamer_TransitScream : 1; // 0x2d8(0x01)
	char pad_2D8_1 : 7; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
};

// ScriptStruct OPP.NPCSabotageAnimRefs
// Size: 0x20 (Inherited: 0x00)
struct FNPCSabotageAnimRefs {
	struct UAnimSequence* NPC_BreakGenerator; // 0x00(0x08)
	char bOverride_NPC_BreakGenerator : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UAnimSequence* NPC_BreakDistractor; // 0x10(0x08)
	char bOverride_NPC_BreakDistractor : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct OPP.NPCAttackAnimRefs
// Size: 0xa0 (Inherited: 0x00)
struct FNPCAttackAnimRefs {
	struct TArray<struct UAnimSequence*> NPC_AttackQuick; // 0x00(0x10)
	char bOverride_NPC_AttackQuick : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct UAnimSequence*> NPC_AttackLow; // 0x18(0x10)
	char bOverride_NPC_AttackLow : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UAnimSequence* NPC_PushOtherPawn; // 0x30(0x08)
	char bOverride_NPC_PushOtherPawn : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UAnimSequence* NPC_SpineAmpAttack; // 0x40(0x08)
	char bOverride_NPC_SpineAmpAttack : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct UAnimSequence* NPC_BerserkAttack; // 0x50(0x08)
	char bOverride_NPC_BerserkAttack : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct UAnimSequence* GooseberrySwipe; // 0x60(0x08)
	char bOverride_GooseberrySwipe : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct UAnimSequence* GooseberryLunge; // 0x70(0x08)
	char bOverride_GooseberryLunge : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct UAnimSequence* NPC_Lunge; // 0x80(0x08)
	char bOverride_NPC_Lunge : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct UAnimSequence* Imposter_Charge; // 0x90(0x08)
	char bOverride_Imposter_Charge : 1; // 0x98(0x01)
	char pad_98_1 : 7; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// ScriptStruct OPP.DoorInteractionsAnimRefs
// Size: 0x2e0 (Inherited: 0x00)
struct FDoorInteractionsAnimRefs {
	struct UAnimSequenceBase* OpenLeft; // 0x00(0x08)
	char bOverride_OpenLeft : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UAnimSequenceBase* OpenLeftFailed; // 0x10(0x08)
	char bOverride_OpenLeftFailed : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UAnimSequenceBase* OpenRight; // 0x20(0x08)
	char bOverride_OpenRight : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UAnimSequenceBase* OpenRightFailed; // 0x30(0x08)
	char bOverride_OpenRightFailed : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UAnimSequenceBase* CloseInsideLeft; // 0x40(0x08)
	char bOverride_CloseInsideLeft : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct UAnimSequenceBase* CloseInsideLeftChase; // 0x50(0x08)
	char bOverride_CloseInsideLeftChase : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct UAnimSequenceBase* CloseInsideLeftRunning; // 0x60(0x08)
	char bOverride_CloseInsideLeftRunning : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct UAnimSequenceBase* CloseInsideRight; // 0x70(0x08)
	char bOverride_CloseInsideRight : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct UAnimSequenceBase* CloseInsideRightChase; // 0x80(0x08)
	char bOverride_CloseInsideRightChase : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct UAnimSequenceBase* CloseInsideRightRunning; // 0x90(0x08)
	char bOverride_CloseInsideRightRunning : 1; // 0x98(0x01)
	char pad_98_1 : 7; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct UAnimSequenceBase* CloseOutsideLeft; // 0xa0(0x08)
	char bOverride_CloseOutsideLeft : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct UAnimSequenceBase* CloseOutsideLeftChase; // 0xb0(0x08)
	char bOverride_CloseOutsideLeftChase : 1; // 0xb8(0x01)
	char pad_B8_1 : 7; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct UAnimSequenceBase* CloseOutsideLeftRunning; // 0xc0(0x08)
	char bOverride_CloseOutsideLeftRunning : 1; // 0xc8(0x01)
	char pad_C8_1 : 7; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct UAnimSequenceBase* CloseOutsideRight; // 0xd0(0x08)
	char bOverride_CloseOutsideRight : 1; // 0xd8(0x01)
	char pad_D8_1 : 7; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct UAnimSequenceBase* CloseOutsideRightChase; // 0xe0(0x08)
	char bOverride_CloseOutsideRightChase : 1; // 0xe8(0x01)
	char pad_E8_1 : 7; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct UAnimSequenceBase* CloseOutsideRightRunning; // 0xf0(0x08)
	char bOverride_CloseOutsideRightRunning : 1; // 0xf8(0x01)
	char pad_F8_1 : 7; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct UAnimSequenceBase* CrouchedOpenLeft; // 0x100(0x08)
	char bOverride_CrouchedOpenLeft : 1; // 0x108(0x01)
	char pad_108_1 : 7; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct UAnimSequenceBase* CrouchedOpenLeftFailed; // 0x110(0x08)
	char bOverride_CrouchedOpenLeftFailed : 1; // 0x118(0x01)
	char pad_118_1 : 7; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct UAnimSequenceBase* CrouchedOpenRight; // 0x120(0x08)
	char bOverride_CrouchedOpenRight : 1; // 0x128(0x01)
	char pad_128_1 : 7; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct UAnimSequenceBase* CrouchedOpenRightFailed; // 0x130(0x08)
	char bOverride_CrouchedOpenRightFailed : 1; // 0x138(0x01)
	char pad_138_1 : 7; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
	struct UAnimSequenceBase* CrouchedCloseInsideLeft; // 0x140(0x08)
	char bOverride_CrouchedCloseInsideLeft : 1; // 0x148(0x01)
	char pad_148_1 : 7; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct UAnimSequenceBase* CrouchedCloseInsideLeftChase; // 0x150(0x08)
	char bOverride_CrouchedCloseInsideLeftChase : 1; // 0x158(0x01)
	char pad_158_1 : 7; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
	struct UAnimSequenceBase* CrouchedCloseInsideRight; // 0x160(0x08)
	char bOverride_CrouchedCloseInsideRight : 1; // 0x168(0x01)
	char pad_168_1 : 7; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct UAnimSequenceBase* CrouchedCloseInsideRightChase; // 0x170(0x08)
	char bOverride_CrouchedCloseInsideRightChase : 1; // 0x178(0x01)
	char pad_178_1 : 7; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
	struct UAnimSequenceBase* CrouchedCloseOutsideLeft; // 0x180(0x08)
	char bOverride_CrouchedCloseOutsideLeft : 1; // 0x188(0x01)
	char pad_188_1 : 7; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
	struct UAnimSequenceBase* CrouchedCloseOutsideLeftChase; // 0x190(0x08)
	char bOverride_CrouchedCloseOutsideLeftChase : 1; // 0x198(0x01)
	char pad_198_1 : 7; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	struct UAnimSequenceBase* CrouchedCloseOutsideRight; // 0x1a0(0x08)
	char bOverride_CrouchedCloseOutsideRight : 1; // 0x1a8(0x01)
	char pad_1A8_1 : 7; // 0x1a8(0x01)
	char pad_1A9[0x7]; // 0x1a9(0x07)
	struct UAnimSequenceBase* CrouchedCloseOutsideRightChase; // 0x1b0(0x08)
	char bOverride_CrouchedCloseOutsideRightChase : 1; // 0x1b8(0x01)
	char pad_1B8_1 : 7; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
	struct UAnimSequenceBase* SlowOpenInLeft; // 0x1c0(0x08)
	char bOverride_SlowOpenInLeft : 1; // 0x1c8(0x01)
	char pad_1C8_1 : 7; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)
	struct UAnimSequenceBase* SlowOpenInRight; // 0x1d0(0x08)
	char bOverride_SlowOpenInRight : 1; // 0x1d8(0x01)
	char pad_1D8_1 : 7; // 0x1d8(0x01)
	char pad_1D9[0x7]; // 0x1d9(0x07)
	struct UAnimSequenceBase* SlowOpenLeft; // 0x1e0(0x08)
	char bOverride_SlowOpenLeft : 1; // 0x1e8(0x01)
	char pad_1E8_1 : 7; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
	struct UAnimSequenceBase* SlowOpenRight; // 0x1f0(0x08)
	char bOverride_SlowOpenRight : 1; // 0x1f8(0x01)
	char pad_1F8_1 : 7; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)
	struct UAnimSequenceBase* SlowOpenOutForwardLeft; // 0x200(0x08)
	char bOverride_SlowOpenOutForwardLeft : 1; // 0x208(0x01)
	char pad_208_1 : 7; // 0x208(0x01)
	char pad_209[0x7]; // 0x209(0x07)
	struct UAnimSequenceBase* SlowOpenOutForwardRight; // 0x210(0x08)
	char bOverride_SlowOpenOutForwardRight : 1; // 0x218(0x01)
	char pad_218_1 : 7; // 0x218(0x01)
	char pad_219[0x7]; // 0x219(0x07)
	struct UAnimSequenceBase* SlowOpenOutBackwardLeft; // 0x220(0x08)
	char bOverride_SlowOpenOutBackwardLeft : 1; // 0x228(0x01)
	char pad_228_1 : 7; // 0x228(0x01)
	char pad_229[0x7]; // 0x229(0x07)
	struct UAnimSequenceBase* SlowOpenOutBackwardRight; // 0x230(0x08)
	char bOverride_SlowOpenOutBackwardRight : 1; // 0x238(0x01)
	char pad_238_1 : 7; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct UAnimSequenceBase* SlowOpenOutByInterruption; // 0x240(0x08)
	char bOverride_SlowOpenOutByInterruption : 1; // 0x248(0x01)
	char pad_248_1 : 7; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	struct UAnimSequenceBase* Bash_Kick_Open_Left; // 0x250(0x08)
	char bOverride_Bash_Kick_Open_Left : 1; // 0x258(0x01)
	char pad_258_1 : 7; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct UAnimSequenceBase* Bash_Kick_Try_Left; // 0x260(0x08)
	char bOverride_Bash_Kick_Try_Left : 1; // 0x268(0x01)
	char pad_268_1 : 7; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct UAnimSequenceBase* Bash_Kick_Open_Right; // 0x270(0x08)
	char bOverride_Bash_Kick_Open_Right : 1; // 0x278(0x01)
	char pad_278_1 : 7; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct UAnimSequenceBase* Bash_Kick_Try_Right; // 0x280(0x08)
	char bOverride_Bash_Kick_Try_Right : 1; // 0x288(0x01)
	char pad_288_1 : 7; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct UAnimSequenceBase* Bash_Shoulder_Open_Left; // 0x290(0x08)
	char bOverride_Bash_Shoulder_Open_Left : 1; // 0x298(0x01)
	char pad_298_1 : 7; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct UAnimSequenceBase* Bash_Shoulder_Try_Left; // 0x2a0(0x08)
	char bOverride_Bash_Shoulder_Try_Left : 1; // 0x2a8(0x01)
	char pad_2A8_1 : 7; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct UAnimSequenceBase* Bash_Shoulder_Open_Right; // 0x2b0(0x08)
	char bOverride_Bash_Shoulder_Open_Right : 1; // 0x2b8(0x01)
	char pad_2B8_1 : 7; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct UAnimSequenceBase* Bash_Shoulder_Try_Right; // 0x2c0(0x08)
	char bOverride_Bash_Shoulder_Try_Right : 1; // 0x2c8(0x01)
	char pad_2C8_1 : 7; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct UAnimSequenceBase* Bash_UnhingeDoor; // 0x2d0(0x08)
	char bOverride_Bash_UnhingeDoor : 1; // 0x2d8(0x01)
	char pad_2D8_1 : 7; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
};

// ScriptStruct OPP.InteractionsAnimRefs
// Size: 0x1a8 (Inherited: 0x00)
struct FInteractionsAnimRefs {
	struct UBlendSpaceBase* GenericPickUpBlendSpace; // 0x00(0x08)
	char bOverride_GenericPickUpBlendSpace : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UBlendSpaceBase* GenericCrouchedPickUpBlendSpace; // 0x10(0x08)
	char bOverride_GenericCrouchedPickUpBlendSpace : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UBlendSpaceBase* GenericPickUpFromTopBlendSpace; // 0x20(0x08)
	char bOverride_GenericPickUpFromTopBlendSpace : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UBlendSpaceBase* GenericCrouchedPickUpFromTopBlendSpace; // 0x30(0x08)
	char bOverride_GenericCrouchedPickUpFromTopBlendSpace : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UAnimSequence* GenericDropItem; // 0x40(0x08)
	char bOverride_GenericDropItem : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct UAnimSequence* GenericCrouchedDropItem; // 0x50(0x08)
	char bOverride_GenericCrouchedDropItem : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct UAnimSequence* ThrowSmallWeapon; // 0x60(0x08)
	char bOverride_ThrowSmallWeapon : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FRBAnimRef ActivateDynamicObstacleLeft; // 0x70(0x30)
	char bOverride_ActivateDynamicObstacleLeft : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FRBAnimRef ActivateDynamicObstacleRight; // 0xa8(0x30)
	char bOverride_ActivateDynamicObstacleRight : 1; // 0xd8(0x01)
	char pad_D8_1 : 7; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct UAnimSequence* BashDynamicObstacle; // 0xe0(0x08)
	char bOverride_BashDynamicObstacle : 1; // 0xe8(0x01)
	char pad_E8_1 : 7; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct UAnimSequence* BashWindow; // 0xf0(0x08)
	char bOverride_BashWindow : 1; // 0xf8(0x01)
	char pad_F8_1 : 7; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct FRBAnimRef WalkJumpTroughWindowToLand; // 0x100(0x30)
	char bOverride_WalkJumpTroughWindowToLand : 1; // 0x130(0x01)
	char pad_130_1 : 7; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct FRBAnimRef RunJumpTroughWindowToLand; // 0x138(0x30)
	char bOverride_RunJumpTroughWindowToLand : 1; // 0x168(0x01)
	char pad_168_1 : 7; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct FRBAnimRef JumpTroughWindowToFall; // 0x170(0x30)
	char bOverride_JumpTroughWindowToFall : 1; // 0x1a0(0x01)
	char pad_1A0_1 : 7; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
};

// ScriptStruct OPP.CombatAnimRefs
// Size: 0x1c0 (Inherited: 0x00)
struct FCombatAnimRefs {
	struct UAnimSequence* HitReactionTwitch; // 0x00(0x08)
	char bOverride_HitReactionTwitch : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UBlendSpaceBase* StaggerBlendSpace; // 0x10(0x08)
	char bOverride_StaggerBlendSpace : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UBlendSpaceBase* StumbleBlendSpace; // 0x20(0x08)
	char bOverride_StumbleBlendSpace : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UAnimSequence* HitReactionBigStumbleForward; // 0x30(0x08)
	char bOverride_HitReactionBigStumbleForward : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UAnimSequence* HitReactionBigStumbleLeft; // 0x40(0x08)
	char bOverride_HitReactionBigStumbleLeft : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct UAnimSequence* HitReactionBigStumbleRight; // 0x50(0x08)
	char bOverride_HitReactionBigStumbleRight : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct UAnimSequence* HitReactionBigStumbleBack; // 0x60(0x08)
	char bOverride_HitReactionBigStumbleBack : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct UAnimSequence* HitReactionKnockdown; // 0x70(0x08)
	char bOverride_HitReactionKnockdown : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct UAnimSequence* ReactionNearDeathToKnockdown; // 0x80(0x08)
	char bOverride_ReactionNearDeathToKnockdown : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct UAnimSequence* SelfHelpUpInSas; // 0x90(0x08)
	char bOverride_SelfHelpUpInSas : 1; // 0x98(0x01)
	char pad_98_1 : 7; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct UAnimSequence* PlayerInterruptingFatalityOnThisNPC; // 0xa0(0x08)
	char bOverride_PlayerInterruptingFatalityOnThisNPC : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct UAnimSequence* PlayerShovingThisNPC; // 0xb0(0x08)
	char bOverride_PlayerShovingThisNPC : 1; // 0xb8(0x01)
	char pad_B8_1 : 7; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct UAnimSequence* PlayerInterruptingGroundAndPoundOnThisNPC; // 0xc0(0x08)
	char bOverride_PlayerInterruptingGroundAndPoundOnThisNPC : 1; // 0xc8(0x01)
	char pad_C8_1 : 7; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct UAnimSequence* PusherAttackAttacker; // 0xd0(0x08)
	char bOverride_PusherAttackAttacker : 1; // 0xd8(0x01)
	char pad_D8_1 : 7; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct UAnimSequence* PusherAttackVictim; // 0xe0(0x08)
	char bOverride_PusherAttackVictim : 1; // 0xe8(0x01)
	char pad_E8_1 : 7; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct UAnimSequence* PusherAttackGroup; // 0xf0(0x08)
	char bOverride_PusherAttackGroup : 1; // 0xf8(0x01)
	char pad_F8_1 : 7; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct UAnimSequence* PairedAttackAttacker; // 0x100(0x08)
	char bOverride_PairedAttackAttacker : 1; // 0x108(0x01)
	char pad_108_1 : 7; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct UAnimSequence* PairedAttackVictim; // 0x110(0x08)
	char bOverride_PairedAttackVictim : 1; // 0x118(0x01)
	char pad_118_1 : 7; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct TArray<struct FFatalityAnimSet> StandardFatalities; // 0x120(0x10)
	char bOverride_StandardFatalities : 1; // 0x130(0x01)
	char pad_130_1 : 7; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct TArray<struct FFatalityAnimSet> LastManStandingFatalities; // 0x138(0x10)
	char bOverride_LastManStandingFatalities : 1; // 0x148(0x01)
	char pad_148_1 : 7; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct UAnimMontage* PrescottFatalityFrontAttacker; // 0x150(0x08)
	char bOverride_PrescottFatalityFrontAttacker : 1; // 0x158(0x01)
	char pad_158_1 : 7; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
	struct UAnimMontage* PrescottFatalityFrontVictim; // 0x160(0x08)
	char bOverride_PrescottFatalityFrontVictim : 1; // 0x168(0x01)
	char pad_168_1 : 7; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct UAnimMontage* PrescottFatalityLeftAttacker; // 0x170(0x08)
	char bOverride_PrescottFatalityLeftAttacker : 1; // 0x178(0x01)
	char pad_178_1 : 7; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
	struct UAnimMontage* PrescottFatalityLeftVictim; // 0x180(0x08)
	char bOverride_PrescottFatalityLeftVictim : 1; // 0x188(0x01)
	char pad_188_1 : 7; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
	struct UAnimMontage* PrescottFatalityRightAttacker; // 0x190(0x08)
	char bOverride_PrescottFatalityRightAttacker : 1; // 0x198(0x01)
	char pad_198_1 : 7; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	struct UAnimMontage* PrescottFatalityRightVictim; // 0x1a0(0x08)
	char bOverride_PrescottFatalityRightVictim : 1; // 0x1a8(0x01)
	char pad_1A8_1 : 7; // 0x1a8(0x01)
	char pad_1A9[0x7]; // 0x1a9(0x07)
	struct UAnimSequence* KnockdownToDeath; // 0x1b0(0x08)
	char bOverride_KnockdownToDeath : 1; // 0x1b8(0x01)
	char pad_1B8_1 : 7; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
};

// ScriptStruct OPP.FatalityAnimSet
// Size: 0x40 (Inherited: 0x00)
struct FFatalityAnimSet {
	struct UAnimSequence* FrontAttacker; // 0x00(0x08)
	struct UAnimSequence* FrontVictim; // 0x08(0x08)
	struct UAnimSequence* LeftAttacker; // 0x10(0x08)
	struct UAnimSequence* LeftVictim; // 0x18(0x08)
	struct UAnimSequence* RightAttacker; // 0x20(0x08)
	struct UAnimSequence* RightVictim; // 0x28(0x08)
	struct UAnimSequence* BackAttacker; // 0x30(0x08)
	struct UAnimSequence* BackVictim; // 0x38(0x08)
};

// ScriptStruct OPP.LocomotionAnimRefs
// Size: 0x888 (Inherited: 0x00)
struct FLocomotionAnimRefs {
	struct UAnimSequence* DeadPose; // 0x00(0x08)
	char bOverride_DeadPose : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FClimbOntoAnimRefs ClimbOntoWalk; // 0x10(0xe0)
	struct FClimbOntoAnimRefs ClimbOntoRun; // 0xf0(0xe0)
	struct FClimbOntoBGAnimRefs ClimbOntoBigGrunt; // 0x1d0(0x20)
	struct FClimbDownAnimRefs ClimbDownStanding; // 0x1f0(0xa8)
	struct FClimbDownAnimRefs ClimbDownCrouching; // 0x298(0xa8)
	struct FJumpOverAnimRefs JumpOver; // 0x340(0x478)
	struct FJumpOverBGAnimRefs JumpOverBigGrunt; // 0x7b8(0x10)
	struct UBlendSpaceBase* DodgeBS; // 0x7c8(0x08)
	char bOverride_DodgeBS : 1; // 0x7d0(0x01)
	char pad_7D0_1 : 7; // 0x7d0(0x01)
	char pad_7D1[0x7]; // 0x7d1(0x07)
	struct UBlendSpaceBase* PushFromLedgeAnimatedBlendSpace; // 0x7d8(0x08)
	char bOverride_PushFromLedgeAnimatedBlendSpace : 1; // 0x7e0(0x01)
	char pad_7E0_1 : 7; // 0x7e0(0x01)
	char pad_7E1[0x7]; // 0x7e1(0x07)
	struct UAnimSequence* PushFromLedgeToFallAnimated; // 0x7e8(0x08)
	char bOverride_PushFromLedgeToFallAnimated : 1; // 0x7f0(0x01)
	char pad_7F0_1 : 7; // 0x7f0(0x01)
	char pad_7F1[0x7]; // 0x7f1(0x07)
	struct FLandOntoLedgeAnimRefs LandOntoLedgeWall; // 0x7f8(0x30)
	char bOverride_LandOntoLedgeWall : 1; // 0x828(0x01)
	char pad_828_1 : 7; // 0x828(0x01)
	char pad_829[0x7]; // 0x829(0x07)
	struct FLandOntoLedgeAnimRefs LandOntoLedgeNoWall; // 0x830(0x30)
	char bOverride_LandOntoLedgeNoWall : 1; // 0x860(0x01)
	char pad_860_1 : 7; // 0x860(0x01)
	char pad_861[0x7]; // 0x861(0x07)
	struct UAnimSequence* NormalLand; // 0x868(0x08)
	char bOverride_NormalLand : 1; // 0x870(0x01)
	char pad_870_1 : 7; // 0x870(0x01)
	char pad_871[0x7]; // 0x871(0x07)
	struct UAnimSequence* MediumLand; // 0x878(0x08)
	char bOverride_MediumLand : 1; // 0x880(0x01)
	char pad_880_1 : 7; // 0x880(0x01)
	char pad_881[0x7]; // 0x881(0x07)
};

// ScriptStruct OPP.LandOntoLedgeAnimRefs
// Size: 0x30 (Inherited: 0x00)
struct FLandOntoLedgeAnimRefs {
	struct UAnimSequence* LandOntoLedge25; // 0x00(0x08)
	char bOverride_LandOntoLedge25 : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UAnimSequence* LandOntoLedge50; // 0x10(0x08)
	char bOverride_LandOntoLedge50 : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UAnimSequence* LandOntoLedge100; // 0x20(0x08)
	char bOverride_LandOntoLedge100 : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct OPP.JumpOverBGAnimRefs
// Size: 0x10 (Inherited: 0x00)
struct FJumpOverBGAnimRefs {
	struct UBlendSpaceBase* JumpOver_25to100Deep; // 0x00(0x08)
	char bOverride_JumpOver_25to100Deep : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct OPP.JumpOverAnimRefs
// Size: 0x478 (Inherited: 0x00)
struct FJumpOverAnimRefs {
	struct FRBAnimRef JumpOver_Running_25to100; // 0x00(0x30)
	char bOverride_JumpOver_Running_25to100 : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FRBAnimRef JumpOver_Running_LowHeight_25to100; // 0x38(0x30)
	char bOverride_JumpOver_Running_LowHeight_25to100 : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FRBAnimRef JumpOver_Running_LowHeight_100to150; // 0x70(0x30)
	char bOverride_JumpOver_Running_LowHeight_100to150 : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FRBAnimRef JumpOver_Running_100to150; // 0xa8(0x30)
	char bOverride_JumpOver_Running_100to150 : 1; // 0xd8(0x01)
	char pad_D8_1 : 7; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct FRBAnimRef JumpOver_Walking_25to100; // 0xe0(0x30)
	char bOverride_JumpOver_Walking_25to100 : 1; // 0x110(0x01)
	char pad_110_1 : 7; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FRBAnimRef JumpOver_Walking_LowHeight_25to100; // 0x118(0x30)
	char bOverride_JumpOver_Walking_LowHeight_25to100 : 1; // 0x148(0x01)
	char pad_148_1 : 7; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct FRBAnimRef JumpOver_NoContact_100to150; // 0x150(0x30)
	char bOverride_JumpOver_NoContact_100to150 : 1; // 0x180(0x01)
	char pad_180_1 : 7; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
	struct FClimbOverAnimRefs JumpOver_ClimbOver_Flat; // 0x188(0xe0)
	char bOverride_JumpOver_ClimbOver_Flat : 1; // 0x268(0x01)
	char pad_268_1 : 7; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct FClimbOverAnimRefs JumpOver_ClimbOver_Angled45Right; // 0x270(0xe0)
	char bOverride_JumpOver_ClimbOver_Angled45Right : 1; // 0x350(0x01)
	char pad_350_1 : 7; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	struct FClimbOverAnimRefs JumpOver_ClimbOver_Angled45Left; // 0x358(0xe0)
	char bOverride_JumpOver_ClimbOver_Angled45Left : 1; // 0x438(0x01)
	char pad_438_1 : 7; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct FRBAnimRef JumpOver_SlideOver; // 0x440(0x30)
	char bOverride_JumpOver_SlideOver : 1; // 0x470(0x01)
	char pad_470_1 : 7; // 0x470(0x01)
	char pad_471[0x7]; // 0x471(0x07)
};

// ScriptStruct OPP.ClimbOverAnimRefs
// Size: 0xe0 (Inherited: 0x00)
struct FClimbOverAnimRefs {
	struct FRBAnimRef ClimbOver_150to200; // 0x00(0x30)
	char bOverride_ClimbOver_150to200 : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FRBAnimRef ClimbOver_200to300; // 0x38(0x30)
	char bOverride_ClimbOver_200to300 : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FRBAnimRef ClimbOver_Down_100to150; // 0x70(0x30)
	char bOverride_ClimbOver_Down_100to150 : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FRBAnimRef ClimbOver_Down_ToFall; // 0xa8(0x30)
	char bOverride_ClimbOver_Down_ToFall : 1; // 0xd8(0x01)
	char pad_D8_1 : 7; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
};

// ScriptStruct OPP.ClimbDownAnimRefs
// Size: 0xa8 (Inherited: 0x00)
struct FClimbDownAnimRefs {
	struct FRBAnimRef ClimbDown_50to100; // 0x00(0x30)
	char bOverride_ClimbDown_50to100 : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FRBAnimRef ClimbDown_100to150; // 0x38(0x30)
	char bOverride_ClimbDown_100to150 : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FRBAnimRef ClimbDown_ToFalling; // 0x70(0x30)
	char bOverride_ClimbDown_ToFalling : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// ScriptStruct OPP.ClimbOntoBGAnimRefs
// Size: 0x20 (Inherited: 0x00)
struct FClimbOntoBGAnimRefs {
	struct UBlendSpaceBase* ClimbOnto_50to100; // 0x00(0x08)
	char bOverride_ClimbOnto_50to100 : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UBlendSpaceBase* ClimbOnto_100to150; // 0x10(0x08)
	char bOverride_ClimbOnto_100to150 : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct OPP.ClimbOntoAnimRefs
// Size: 0xe0 (Inherited: 0x00)
struct FClimbOntoAnimRefs {
	struct FRBAnimRef ClimbOnto_50to75; // 0x00(0x30)
	char bOverride_ClimbOnto_50to75 : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FRBAnimRef ClimbOnto_75to150; // 0x38(0x30)
	char bOverride_ClimbOnto_75to150 : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FRBAnimRef ClimbOnto_150to200; // 0x70(0x30)
	char bOverride_ClimbOnto_150to200 : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FRBAnimRef ClimbOnto_200to300; // 0xa8(0x30)
	char bOverride_ClimbOnto_200to300 : 1; // 0xd8(0x01)
	char pad_D8_1 : 7; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
};

// ScriptStruct OPP.CameraShakeData
// Size: 0xa0 (Inherited: 0x00)
struct FCameraShakeData {
	float Intensity; // 0x00(0x04)
	float duration; // 0x04(0x04)
	float FadeInTime; // 0x08(0x04)
	float FadeOutTime; // 0x0c(0x04)
	float MaxShakeDistance; // 0x10(0x04)
	float DistanceExponent; // 0x14(0x04)
	bool bPositionless; // 0x18(0x01)
	bool bOverrideForceFeedbackIntensity; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	float OveriddenForceFeedbackIntensity; // 0x1c(0x04)
	bool bDynamicForceFeedbackIntensity; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float DynamicForceFeedbackMultiplier; // 0x24(0x04)
	struct FCameraWaveData YawWaveA; // 0x28(0x0c)
	struct FCameraWaveData YawWaveB; // 0x34(0x0c)
	struct FCameraWaveData PitchWaveA; // 0x40(0x0c)
	struct FCameraWaveData PitchWaveB; // 0x4c(0x0c)
	struct FCameraWaveData RollWaveA; // 0x58(0x0c)
	struct FCameraWaveData RollWaveB; // 0x64(0x0c)
	char pad_70[0x28]; // 0x70(0x28)
	struct UObject* Owner; // 0x98(0x08)
};

// ScriptStruct OPP.CameraWaveData
// Size: 0x0c (Inherited: 0x00)
struct FCameraWaveData {
	float Amplitude; // 0x00(0x04)
	float Frequency; // 0x04(0x04)
	float StartPhase; // 0x08(0x04)
};

// ScriptStruct OPP.AttackStrike
// Size: 0x14 (Inherited: 0x00)
struct FAttackStrike {
	float Damage; // 0x00(0x04)
	enum class EAttackType AttackType; // 0x04(0x01)
	enum class EDamageType DamageType; // 0x05(0x01)
	enum class EKnockbackValue KnockbackType; // 0x06(0x01)
	enum class EItemCategory ItemCategory; // 0x07(0x01)
	struct FVector AttackLocation; // 0x08(0x0c)
};

// ScriptStruct OPP.PlayerHitReactionParams
// Size: 0x48 (Inherited: 0x00)
struct FPlayerHitReactionParams {
	float PawnTime; // 0x00(0x04)
	float serverTime; // 0x04(0x04)
	enum class EPlayerHitReactionType ReactionType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float WorldYaw; // 0x0c(0x04)
	float RelativeYaw; // 0x10(0x04)
	bool bPlayEffects; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FVector TargetPos; // 0x18(0x0c)
	struct FVector TargetDir; // 0x24(0x0c)
	float Damage; // 0x30(0x04)
	struct FVector DamageLocation; // 0x34(0x0c)
	struct UObject* HitReactionTriggerer; // 0x40(0x08)
};

// ScriptStruct OPP.PlayerShoveData
// Size: 0x10 (Inherited: 0x00)
struct FPlayerShoveData {
	struct ARBNPC* TargetNPC; // 0x00(0x08)
	struct UAnimSequence* ShoveAnimation; // 0x08(0x08)
};

// ScriptStruct OPP.PairedTwoPhaseAnimData
// Size: 0x30 (Inherited: 0x00)
struct FPairedTwoPhaseAnimData {
	struct FPairedAnim EnterAnims; // 0x00(0x18)
	struct FPairedAnim ExitAnims; // 0x18(0x18)
};

// ScriptStruct OPP.PairedAnim
// Size: 0x18 (Inherited: 0x00)
struct FPairedAnim {
	struct UAnimationAsset* NPCAnim; // 0x00(0x08)
	struct UAnimationAsset* PlayerAnim; // 0x08(0x08)
	struct UAnimationAsset* PlayerAnim3P; // 0x10(0x08)
};

// ScriptStruct OPP.CoopMoveData
// Size: 0x98 (Inherited: 0x00)
struct FCoopMoveData {
	enum class ESpecialMove MoveType; // 0x00(0x01)
	bool bSkipGenericCoopMoveNotify; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct ARBPlayer* Leader; // 0x08(0x08)
	struct ARBPlayer* follower; // 0x10(0x08)
	struct FVector InitiatorLocation; // 0x18(0x0c)
	struct FVector InitiatorDirection; // 0x24(0x0c)
	struct FVector ReceiverLocation; // 0x30(0x0c)
	struct FVector ReceiverDirection; // 0x3c(0x0c)
	enum class EBasicDirection BasicDirection; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct ARBLedgeMarker* LedgeMarker; // 0x50(0x08)
	struct FVector PivotPointOnLedge; // 0x58(0x0c)
	struct FVector TraversalDir; // 0x64(0x0c)
	float LedgeHeight; // 0x70(0x04)
	float DropHeight; // 0x74(0x04)
	bool bWasCrouchBeforeMove; // 0x78(0x01)
	bool bMustCrouchAfterMove; // 0x79(0x01)
	char pad_7A[0x2]; // 0x7a(0x02)
	struct FVector targetLocation; // 0x7c(0x0c)
	enum class ECoopMoveType OfferMoveType; // 0x88(0x01)
	enum class ECoopMoveOfferState OfferState; // 0x89(0x01)
	char pad_8A[0x6]; // 0x8a(0x06)
	struct AActor* CoopMoveActor; // 0x90(0x08)
};

// ScriptStruct OPP.TraversalMoveData
// Size: 0x68 (Inherited: 0x00)
struct FTraversalMoveData {
	enum class ESpecialMove TraversalMove; // 0x00(0x01)
	char TraversalMoveSubType; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct AActor* TraversalActor; // 0x08(0x08)
	struct AActor* EndTraversalActor; // 0x10(0x08)
	struct FVector targetPosition; // 0x18(0x0c)
	struct FVector targetDirection; // 0x24(0x0c)
	struct FVector ExpectedEndPosition; // 0x30(0x0c)
	enum class EJumpOverAnimType JumpOverAnimType; // 0x3c(0x01)
	enum class EClimbOntoAnimType ClimbOntoAnimType; // 0x3d(0x01)
	enum class ELocomotionMode nextLocomotionMode; // 0x3e(0x01)
	char pad_3F[0x1]; // 0x3f(0x01)
	float ObstacleHeight; // 0x40(0x04)
	float ObstacleWidth; // 0x44(0x04)
	float ObstacleDropHeight; // 0x48(0x04)
	float ObstacleAngle; // 0x4c(0x04)
	bool bRunning; // 0x50(0x01)
	bool bWasCrouchBeforeMove; // 0x51(0x01)
	bool bMustCrouchAfterMove; // 0x52(0x01)
	char pad_53[0x1]; // 0x53(0x01)
	float Velocity; // 0x54(0x04)
	enum class EPawnRepulsionType PawnRepulsion; // 0x58(0x01)
	char pad_59[0xf]; // 0x59(0x0f)
};

// ScriptStruct OPP.ScheduledSpecialAnimData
// Size: 0x30 (Inherited: 0x00)
struct FScheduledSpecialAnimData {
	float PawnTime; // 0x00(0x04)
	float serverTime; // 0x04(0x04)
	bool bInterruptInteraction; // 0x08(0x01)
	bool bCollisionEnabled; // 0x09(0x01)
	bool bAnchor; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	struct FVector AnchorLocation; // 0x0c(0x0c)
	struct FVector AnchorForward; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct UAnimSequence* Animation; // 0x28(0x08)
};

// ScriptStruct OPP.ScheduledBool
// Size: 0x70 (Inherited: 0x68)
struct FScheduledBool : FScheduledProperty {
	bool InitialValue; // 0x68(0x01)
	bool LastValue; // 0x69(0x01)
	bool CurrentValue; // 0x6a(0x01)
	bool DesiredValue; // 0x6b(0x01)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct OPP.PlayerMemory
// Size: 0x64 (Inherited: 0x00)
struct FPlayerMemory {
	char pad_0[0x64]; // 0x00(0x64)
};

// ScriptStruct OPP.StaminaRestoreData
// Size: 0x0c (Inherited: 0x00)
struct FStaminaRestoreData {
	float PawnTime; // 0x00(0x04)
	float amount; // 0x04(0x04)
	float NoStaminaRegenTime; // 0x08(0x04)
};

// ScriptStruct OPP.DizzinessData
// Size: 0x154 (Inherited: 0x00)
struct FDizzinessData {
	char pad_0[0x154]; // 0x00(0x154)
};

// ScriptStruct OPP.DamageResult
// Size: 0x18 (Inherited: 0x00)
struct FDamageResult {
	char pad_0[0x10]; // 0x00(0x10)
	struct AActor* DamageInstigator; // 0x10(0x08)
};

// ScriptStruct OPP.OwnedItemSettings
// Size: 0x58 (Inherited: 0x00)
struct FOwnedItemSettings {
	struct FItemDefinition ItemDefinition; // 0x00(0x48)
	struct ARBPickup* SpawnedItem; // 0x48(0x08)
	int32_t EquippableInventorySlot; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct OPP.NetworkVector2D
// Size: 0x1c (Inherited: 0x00)
struct FNetworkVector2D {
	struct FVector2D ReplicatedValue; // 0x00(0x08)
	char pad_8[0x14]; // 0x08(0x14)
};

// ScriptStruct OPP.PlayerSpeedModifierData
// Size: 0x1c (Inherited: 0x00)
struct FPlayerSpeedModifierData {
	struct FName ID; // 0x00(0x08)
	float StartPawnTime; // 0x08(0x04)
	float duration; // 0x0c(0x04)
	float fadeOutDuration; // 0x10(0x04)
	float Modifier; // 0x14(0x04)
	float MaxSpeed; // 0x18(0x04)
};

// ScriptStruct OPP.AnimNode_OrientationWarping
// Size: 0x60 (Inherited: 0x10)
struct FAnimNode_OrientationWarping : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x10(0x10)
	float LocomotionAngle; // 0x20(0x04)
	struct FAxisSettings Settings; // 0x24(0x08)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FBoneRef> SpineBones; // 0x30(0x10)
	struct FBoneReference IKFootRootBone; // 0x40(0x10)
	struct FBoneReference PelvisBone; // 0x50(0x10)
};

// ScriptStruct OPP.BoneRef
// Size: 0x10 (Inherited: 0x00)
struct FBoneRef {
	struct FBoneReference Bone; // 0x00(0x10)
};

// ScriptStruct OPP.AxisSettings
// Size: 0x08 (Inherited: 0x00)
struct FAxisSettings {
	enum class EAxis YawRotationAxis; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float BodyOrientationAlpha; // 0x04(0x04)
};

// ScriptStruct OPP.AnimNode_RBAlignFootIKToFeet
// Size: 0x118 (Inherited: 0xc8)
struct FAnimNode_RBAlignFootIKToFeet : FAnimNode_SkeletalControlBase {
	struct FBoneReference IK_RootBone; // 0xc8(0x10)
	struct FBoneReference LeftFootBone; // 0xd8(0x10)
	struct FBoneReference LeftIKBone; // 0xe8(0x10)
	struct FBoneReference RightFootBone; // 0xf8(0x10)
	struct FBoneReference RightIKBone; // 0x108(0x10)
};

// ScriptStruct OPP.AnimNode_RBAlignFootIKToStairs
// Size: 0x158 (Inherited: 0xc8)
struct FAnimNode_RBAlignFootIKToStairs : FAnimNode_SkeletalControlBase {
	struct FBoneReference LeftFootBone; // 0xc8(0x10)
	struct FBoneReference LeftToeBone; // 0xd8(0x10)
	struct FBoneReference LeftIKBone; // 0xe8(0x10)
	struct FBoneReference RightFootBone; // 0xf8(0x10)
	struct FBoneReference RightToeBone; // 0x108(0x10)
	struct FBoneReference RightIKBone; // 0x118(0x10)
	struct FBoneReference HipsBone; // 0x128(0x10)
	float AnkleOffset; // 0x138(0x04)
	bool AffectHips; // 0x13c(0x01)
	char pad_13D[0x1b]; // 0x13d(0x1b)
};

// ScriptStruct OPP.AnimNode_RBFirstPersonRelative
// Size: 0x140 (Inherited: 0xc8)
struct FAnimNode_RBFirstPersonRelative : FAnimNode_SkeletalControlBase {
	struct FBoneReference CameraBone; // 0xc8(0x10)
	struct TArray<struct FBoneReference> LeftArmBonesToModify; // 0xd8(0x10)
	struct TArray<struct FBoneReference> RightArmBonesToModify; // 0xe8(0x10)
	float LeftArmAlpha; // 0xf8(0x04)
	float RightArmAlpha; // 0xfc(0x04)
	struct FTransform CameraTransformOffset; // 0x100(0x30)
	char pad_130[0x10]; // 0x130(0x10)
};

// ScriptStruct OPP.AnimNode_RBRelativeToCamera
// Size: 0x170 (Inherited: 0xc8)
struct FAnimNode_RBRelativeToCamera : FAnimNode_SkeletalControlBase {
	struct FComponentSpacePoseLink ArmPose; // 0xc8(0x10)
	char pad_D8[0x8]; // 0xd8(0x08)
	struct FTransform CameraTransform; // 0xe0(0x30)
	struct FBoneReference CameraBone; // 0x110(0x10)
	struct FBoneReference Bone; // 0x120(0x10)
	char pad_130[0x40]; // 0x130(0x40)
};

// ScriptStruct OPP.AnimNode_RBRotateRelative
// Size: 0xf8 (Inherited: 0xc8)
struct FAnimNode_RBRotateRelative : FAnimNode_SkeletalControlBase {
	struct FBoneReference RotateBone; // 0xc8(0x10)
	struct FBoneReference RelativeBone; // 0xd8(0x10)
	struct FRotator Rotation; // 0xe8(0x0c)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// ScriptStruct OPP.AnimNode_RBScaleStride
// Size: 0xf0 (Inherited: 0xc8)
struct FAnimNode_RBScaleStride : FAnimNode_SkeletalControlBase {
	struct FBoneReference LeftFoot; // 0xc8(0x10)
	struct FBoneReference RightFoot; // 0xd8(0x10)
	float MinimumZ; // 0xe8(0x04)
	float StrideScale; // 0xec(0x04)
};

// ScriptStruct OPP.AnimNode_SpeedWarping
// Size: 0x160 (Inherited: 0xc8)
struct FAnimNode_SpeedWarping : FAnimNode_SkeletalControlBase {
	struct FBoneReference IKFootRootBone; // 0xc8(0x10)
	struct TArray<struct FIKBones> FeetDefinitions; // 0xd8(0x10)
	struct FBoneReference PelvisBone; // 0xe8(0x10)
	enum class EIKFootRootLocalAxis SpeedWarpingAxisMode; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	float SpeedScaling; // 0xfc(0x04)
	float PelvisAdjustmentAlpha; // 0x100(0x04)
	float MaxIter; // 0x104(0x04)
	struct FPelvisAdjustmentInterp PelvisAdjustmentInterp; // 0x108(0x08)
	bool ClampIKUsingFKLeg; // 0x110(0x01)
	char pad_111[0x4f]; // 0x111(0x4f)
};

// ScriptStruct OPP.PelvisAdjustmentInterp
// Size: 0x08 (Inherited: 0x00)
struct FPelvisAdjustmentInterp {
	float Stiffness; // 0x00(0x04)
	float Dampen; // 0x04(0x04)
};

// ScriptStruct OPP.IKBones
// Size: 0x24 (Inherited: 0x00)
struct FIKBones {
	struct FBoneReference IKFootBone; // 0x00(0x10)
	struct FBoneReference FKFootBone; // 0x10(0x10)
	int32_t NumBonesInLimb; // 0x20(0x04)
};

// ScriptStruct OPP.IKFootLocation
// Size: 0x30 (Inherited: 0x00)
struct FIKFootLocation {
	struct FVector LimbRootLocation; // 0x00(0x0c)
	struct FVector OriginLocation; // 0x0c(0x0c)
	struct FVector ActualLocation; // 0x18(0x0c)
	struct FVector NewLocation; // 0x24(0x0c)
};

// ScriptStruct OPP.NewsItem
// Size: 0x70 (Inherited: 0x00)
struct FNewsItem {
	enum class ENewsItemLocation Location; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Title; // 0x08(0x10)
	struct FString Description; // 0x18(0x10)
	struct FString ImageUrl; // 0x28(0x10)
	struct UTexture2DDynamic* ImageTexture; // 0x38(0x08)
	enum class ENewsItemCTAType CTAType; // 0x40(0x01)
	enum class ENewsItemCTAMenuType CTAMenuType; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct FString CTADetails; // 0x48(0x10)
	struct FString ExternalUrl; // 0x58(0x10)
	int32_t Priority; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct OPP.PlayerAchievementsRuntimeData
// Size: 0x2e8 (Inherited: 0x00)
struct FPlayerAchievementsRuntimeData {
	struct ARBController* RBController; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
	struct TArray<struct URBAchievementUnlockCondition*> TrackedUnlockedConditions; // 0x18(0x10)
	char pad_28[0x2c0]; // 0x28(0x2c0)
};

// ScriptStruct OPP.RBActiveSkillSettingsRow
// Size: 0x38 (Inherited: 0x08)
struct FRBActiveSkillSettingsRow : FTableRowBase {
	enum class EActiveSkillType ActiveSkillType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t InitialNumberOfCharges; // 0x0c(0x04)
	float CooldownBetweenCharges; // 0x10(0x04)
	float TriggerRadius; // 0x14(0x04)
	float TriggerDelay; // 0x18(0x04)
	float ChargeDuration; // 0x1c(0x04)
	float Effect; // 0x20(0x04)
	float EffectRadius; // 0x24(0x04)
	float EffectDuration; // 0x28(0x04)
	float PrimeAssetEffectDurationMultiplier; // 0x2c(0x04)
	float EffectDuration2; // 0x30(0x04)
	float DistractionRange; // 0x34(0x04)
};

// ScriptStruct OPP.RBActiveSkillSettings
// Size: 0x2c (Inherited: 0x00)
struct FRBActiveSkillSettings {
	enum class EActiveSkillType ActiveSkillType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float CooldownBetweenCharges; // 0x04(0x04)
	float TriggerRadius; // 0x08(0x04)
	float TriggerDelay; // 0x0c(0x04)
	float ChargeDuration; // 0x10(0x04)
	float Effect; // 0x14(0x04)
	float EffectRadius; // 0x18(0x04)
	float EffectDuration; // 0x1c(0x04)
	float PrimeAssetEffectDurationMultiplier; // 0x20(0x04)
	float EffectDuration2; // 0x24(0x04)
	float DistractionRange; // 0x28(0x04)
};

// ScriptStruct OPP.PathBlockingCoordinationInfo
// Size: 0x20 (Inherited: 0x00)
struct FPathBlockingCoordinationInfo {
	char pad_0[0x10]; // 0x00(0x10)
	struct TArray<struct URBAreaExitPoint*> ReservedExitPoints; // 0x10(0x10)
};

// ScriptStruct OPP.InvestigationInterestPointData
// Size: 0x28 (Inherited: 0x00)
struct FInvestigationInterestPointData {
	struct URBNPCInterestPointComponent* InterestPoint; // 0x00(0x08)
	struct FVector ExplicitInterestLocation; // 0x08(0x0c)
	float Score; // 0x14(0x04)
	bool bClearLineCheck; // 0x18(0x01)
	char pad_19[0xb]; // 0x19(0x0b)
	float LookDuration; // 0x24(0x04)
};

// ScriptStruct OPP.RBAICommandRef
// Size: 0x0c (Inherited: 0x00)
struct FRBAICommandRef {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct OPP.RBAIConditionSet
// Size: 0x10 (Inherited: 0x00)
struct FRBAIConditionSet {
	struct TArray<struct URBAICondition*> Conditions; // 0x00(0x10)
};

// ScriptStruct OPP.NPCReplicatedConfig
// Size: 0x20 (Inherited: 0x00)
struct FNPCReplicatedConfig {
	enum class ENPCFlavor NPCFlavor; // 0x00(0x01)
	enum class ENPCWeapon Weapon; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float StepHeaviness; // 0x04(0x04)
	float BodyEffectIntensity; // 0x08(0x04)
	bool bBreathing; // 0x0c(0x01)
	bool bPlayContinuousSound; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	float MinTimeAfterDamageForContinuous; // 0x10(0x04)
	float DynamicLookScanRange; // 0x14(0x04)
	float DynamicLookScanFrequency; // 0x18(0x04)
	uint16_t NPCLifetimeRandomSelector; // 0x1c(0x02)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct OPP.AIConfigData
// Size: 0x11bc (Inherited: 0x00)
struct FAIConfigData {
	struct FAIGlobalConfig Global; // 0x00(0x40)
	struct FAISpeedConfig Speed; // 0x40(0x130)
	struct FAIAdvancedSpeedConfig AdvancedSpeed; // 0x170(0xa0)
	struct FAIHealthConfig Health; // 0x210(0x24)
	struct FAIVisionConfig Vision; // 0x234(0x158)
	struct FAIHearingConfig Hearing; // 0x38c(0x1c)
	struct FAIAwarenessConfig Awareness; // 0x3a8(0x1b0)
	struct FAITargettingConfig Targetting; // 0x558(0x74)
	struct FDisturbanceConfig Disturbance; // 0x5cc(0x1c)
	struct FAIAttackConfig Attack; // 0x5e8(0x138)
	struct FAIChaseConfig Chase; // 0x720(0xc8)
	struct FAICombatConfig Combat; // 0x7e8(0x06)
	char pad_7EE[0x2]; // 0x7ee(0x02)
	struct FAIInvestigationConfig Investigation; // 0x7f0(0x2f4)
	struct FAIPatrolConfig Patrol; // 0xae4(0xb8)
	struct FAIDynamicLookConfig DynamicLook; // 0xb9c(0x16c)
	struct FAIAmbientConfig Ambient; // 0xd08(0x6c)
	struct FAIPlayerAvoidanceConfig PlayerAvoidance; // 0xd74(0x50)
	struct FAIRetirementConfig Retirement; // 0xdc4(0x20)
	struct FAIVOConfig VO; // 0xde4(0x70)
	struct FAIAudioConfig Audio; // 0xe54(0x7c)
	struct FAIRepulsionParameters Repulsion; // 0xed0(0x54)
	struct FAILeashParameters Leash; // 0xf24(0x30)
	struct FAISabotageConfig Sabotage; // 0xf54(0x24)
	struct FAIPitcherConfig Pitcher; // 0xf78(0x50)
	struct FAIPusherConfig Pusher; // 0xfc8(0x28)
	struct FAISleeperScreamerConfig SleeperScreamer; // 0xff0(0x6c)
	struct FAIPouncerConfig Pouncer; // 0x105c(0x2c)
	struct FAINightHunterConfig NightHunter; // 0x1088(0x28)
	struct FAIBerserkerConfig Berserker; // 0x10b0(0x40)
	struct FAIGroundAndPoundConfig GroundAndPound; // 0x10f0(0x60)
	struct FAIActiveSkillsConfig ActiveSkills; // 0x1150(0x10)
	struct FAIAnimConfig Animation; // 0x1160(0x30)
	struct FAISpecialConfigData Special; // 0x1190(0x14)
	struct FAISystemsConfig Systems; // 0x11a4(0x14)
	struct FAIUIConfig UI; // 0x11b8(0x02)
	char pad_11BA[0x2]; // 0x11ba(0x02)
};

// ScriptStruct OPP.AIUIConfig
// Size: 0x02 (Inherited: 0x00)
struct FAIUIConfig {
	bool bAllowPlayerPing; // 0x00(0x01)
	char bOverride_bAllowPlayerPing : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
};

// ScriptStruct OPP.AISystemsConfig
// Size: 0x14 (Inherited: 0x00)
struct FAISystemsConfig {
	bool bDisableServerAnimationsAtRange; // 0x00(0x01)
	char bOverride_bDisableServerAnimationsAtRange : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float DisableServerAnimationsRange; // 0x04(0x04)
	char bOverride_DisableServerAnimationsRange : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	bool bDisableAnimOptims; // 0x09(0x01)
	char bOverride_bDisableAnimOptims : 1; // 0x0a(0x01)
	char pad_A_1 : 7; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	float PathPushDistanceAwayFromSides; // 0x0c(0x04)
	char bOverride_PathPushDistanceAwayFromSides : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct OPP.AISpecialConfigData
// Size: 0x14 (Inherited: 0x00)
struct FAISpecialConfigData {
	float UnspawnIsolationDistance; // 0x00(0x04)
	char bOverride_UnspawnIsolationDistance : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float UnspawnIsolationTime; // 0x08(0x04)
	char bOverride_UnspawnIsolationTime : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	bool bDisableAutomaticBehaviors; // 0x0d(0x01)
	char bOverride_bDisableAutomaticBehaviors : 1; // 0x0e(0x01)
	char pad_E_1 : 7; // 0x0e(0x01)
	bool bAlwaysBashDoors; // 0x0f(0x01)
	char bOverride_bAlwaysBashDoors : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct OPP.AIAnimConfig
// Size: 0x30 (Inherited: 0x00)
struct FAIAnimConfig {
	bool bForceAnimStyle; // 0x00(0x01)
	char bOverride_bForceAnimStyle : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	enum class ENPCAnimStyle ForcedAnimStyle; // 0x02(0x01)
	char bOverride_ForcedAnimStyle : 1; // 0x03(0x01)
	char pad_3_1 : 7; // 0x03(0x01)
	float StepHeaviness; // 0x04(0x04)
	char bOverride_StepHeaviness : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float BodyEffectIntensity; // 0x0c(0x04)
	char bOverride_BodyEffectIntensity : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	bool bBreathing; // 0x11(0x01)
	char bOverride_bBreathing : 1; // 0x12(0x01)
	char pad_12_1 : 7; // 0x12(0x01)
	bool bEnableChaseBreakers; // 0x13(0x01)
	char bOverride_bEnableChaseBreakers : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float ChaseBreakerAverageDelay; // 0x18(0x04)
	char bOverride_ChaseBreakerAverageDelay : 1; // 0x1c(0x01)
	char pad_1C_1 : 7; // 0x1c(0x01)
	bool bEnableCycleBreakers; // 0x1d(0x01)
	char bOverride_bEnableCycleBreakers : 1; // 0x1e(0x01)
	char pad_1E_1 : 7; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
	float CycleBreakerMinInterval; // 0x20(0x04)
	char bOverride_CycleBreakerMinInterval : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float CycleBreakerMaxInterval; // 0x28(0x04)
	char bOverride_CycleBreakerMaxInterval : 1; // 0x2c(0x01)
	char pad_2C_1 : 7; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct OPP.AIActiveSkillsConfig
// Size: 0x10 (Inherited: 0x00)
struct FAIActiveSkillsConfig {
	float BerserkChaseSpeed; // 0x00(0x04)
	char bOverride_BerserkChaseSpeed : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float BerserkRandomMovementSpeed; // 0x08(0x04)
	char bOverride_BerserkRandomMovementSpeed : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct OPP.AIGroundAndPoundConfig
// Size: 0x60 (Inherited: 0x00)
struct FAIGroundAndPoundConfig {
	bool bCanGroundAndPound; // 0x00(0x01)
	char bOverride_bCanGroundAndPound : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	bool bAmbushChasedPlayers; // 0x02(0x01)
	char bOverride_bAmbushChasedPlayers : 1; // 0x03(0x01)
	char pad_3_1 : 7; // 0x03(0x01)
	bool bAmbushJumpingPlayers; // 0x04(0x01)
	char bOverride_bAmbushJumpingPlayers : 1; // 0x05(0x01)
	char pad_5_1 : 7; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	float DamagePerPunch; // 0x08(0x04)
	char bOverride_DamagePerPunch : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float TargetTotalDamage; // 0x10(0x04)
	char bOverride_TargetTotalDamage : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float MinimumDamage; // 0x18(0x04)
	char bOverride_MinimumDamage : 1; // 0x1c(0x01)
	char pad_1C_1 : 7; // 0x1c(0x01)
	bool bNonFatalDamage; // 0x1d(0x01)
	char bOverride_bNonFatalDamage : 1; // 0x1e(0x01)
	char pad_1E_1 : 7; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
	float MinReenterInterval; // 0x20(0x04)
	char bOverride_MinReenterInterval : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float MinRetryInterval; // 0x28(0x04)
	char bOverride_MinRetryInterval : 1; // 0x2c(0x01)
	char pad_2C_1 : 7; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float EnterProbability; // 0x30(0x04)
	char bOverride_EnterProbability : 1; // 0x34(0x01)
	char pad_34_1 : 7; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float MaxDistForTryTackle; // 0x38(0x04)
	char bOverride_MaxDistForTryTackle : 1; // 0x3c(0x01)
	char pad_3C_1 : 7; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float MaxAngleForTryTackle; // 0x40(0x04)
	char bOverride_MaxAngleForTryTackle : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float MaxDistForTackleSuccess; // 0x48(0x04)
	char bOverride_MaxDistForTackleSuccess : 1; // 0x4c(0x01)
	char pad_4C_1 : 7; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float MaxAngleForTackleSuccess; // 0x50(0x04)
	char bOverride_MaxAngleForTackleSuccess : 1; // 0x54(0x01)
	char pad_54_1 : 7; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float MinimumProximityToPushableForAmbush; // 0x58(0x04)
	char bOverride_MinimumProximityToPushableForAmbush : 1; // 0x5c(0x01)
	char pad_5C_1 : 7; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
};

// ScriptStruct OPP.AIBerserkerConfig
// Size: 0x40 (Inherited: 0x00)
struct FAIBerserkerConfig {
	float MinIdleAttackTime; // 0x00(0x04)
	char bOverride_MinIdleAttackTime : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float MaxIdleAttackTime; // 0x08(0x04)
	char bOverride_MaxIdleAttackTime : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float ChanceOfIdleBreakerInsteadOfAttack; // 0x10(0x04)
	char bOverride_ChanceOfIdleBreakerInsteadOfAttack : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float TimeBeforeReturningToLeash; // 0x18(0x04)
	char bOverride_TimeBeforeReturningToLeash : 1; // 0x1c(0x01)
	char pad_1C_1 : 7; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float ShortIdleAttackDistance; // 0x20(0x04)
	char bOverride_ShortIdleAttackDistance : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float LongIdleAttackDistance; // 0x28(0x04)
	char bOverride_LongIdleAttackDistance : 1; // 0x2c(0x01)
	char pad_2C_1 : 7; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float InvulnerabilityAfterDamageDuration; // 0x30(0x04)
	char bOverride_InvulnerabilityAfterDamageDuration : 1; // 0x34(0x01)
	char pad_34_1 : 7; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float ForceIgnoreDamagedPlayerDuration; // 0x38(0x04)
	char bOverride_ForceIgnoreDamagedPlayerDuration : 1; // 0x3c(0x01)
	char pad_3C_1 : 7; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct OPP.AINightHunterConfig
// Size: 0x28 (Inherited: 0x00)
struct FAINightHunterConfig {
	float MaximumPlayerSensingDistanceAware; // 0x00(0x04)
	char bOverride_MaximumPlayerSensingDistanceAware : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float MaximumPlayerSensingDistanceUnaware; // 0x08(0x04)
	char bOverride_MaximumPlayerSensingDistanceUnaware : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float MinimumPlayerSpeedForUnawareDisturbance; // 0x10(0x04)
	char bOverride_MinimumPlayerSpeedForUnawareDisturbance : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float UnawareDetectionDuration; // 0x18(0x04)
	char bOverride_UnawareDetectionDuration : 1; // 0x1c(0x01)
	char pad_1C_1 : 7; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float DetectionMeterCooldownDuration; // 0x20(0x04)
	char bOverride_DetectionMeterCooldownDuration : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct OPP.AIPouncerConfig
// Size: 0x2c (Inherited: 0x00)
struct FAIPouncerConfig {
	bool bCanPeek; // 0x00(0x01)
	char bOverride_bCanPeek : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float TryPeekingMinInterval; // 0x04(0x04)
	char bOverride_TryPeekingMinInterval : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float TryPeekingMaxInterval; // 0x0c(0x04)
	char bOverride_TryPeekingMaxInterval : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	bool bUsesShyness; // 0x11(0x01)
	char bOverride_bUsesShyness : 1; // 0x12(0x01)
	char pad_12_1 : 7; // 0x12(0x01)
	char pad_13[0x1]; // 0x13(0x01)
	float ShynessIncreaseRate; // 0x14(0x04)
	char bOverride_ShynessIncreaseRate : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float ShynessCooldownRate; // 0x1c(0x04)
	char bOverride_ShynessCooldownRate : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t MaxPouncesBeforeRetirement; // 0x24(0x04)
	char bOverride_MaxPouncesBeforeRetirement : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
};

// ScriptStruct OPP.AISleeperScreamerConfig
// Size: 0x6c (Inherited: 0x00)
struct FAISleeperScreamerConfig {
	float SleeperScreamAlarmRange; // 0x00(0x04)
	char bOverride_SleeperScreamAlarmRange : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float SleeperStunZoneDuration; // 0x08(0x04)
	char bOverride_SleeperStunZoneDuration : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float SleeperDelayBeforeStunZone; // 0x10(0x04)
	char bOverride_SleeperDelayBeforeStunZone : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float SleeperDelayBetweenStartles; // 0x18(0x04)
	char bOverride_SleeperDelayBetweenStartles : 1; // 0x1c(0x01)
	char pad_1C_1 : 7; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float SleeperScreamStunFullRange; // 0x20(0x04)
	char bOverride_SleeperScreamStunFullRange : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float SleeperScreamStunMaxRange; // 0x28(0x04)
	char bOverride_SleeperScreamStunMaxRange : 1; // 0x2c(0x01)
	char pad_2C_1 : 7; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float SleeperScreamStunFullRangeDifferentRooms; // 0x30(0x04)
	char bOverride_SleeperScreamStunFullRangeDifferentRooms : 1; // 0x34(0x01)
	char pad_34_1 : 7; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float SleeperScreamStunMaxRangeDifferentRooms; // 0x38(0x04)
	char bOverride_SleeperScreamStunMaxRangeDifferentRooms : 1; // 0x3c(0x01)
	char pad_3C_1 : 7; // 0x3c(0x01)
	bool bAllowAudioPathingForDisturbance; // 0x3d(0x01)
	char bOverride_bAllowAudioPathingForDisturbance : 1; // 0x3e(0x01)
	char pad_3E_1 : 7; // 0x3e(0x01)
	bool bAllowAudioPathingForScreamerStun; // 0x3f(0x01)
	char bOverride_bAllowAudioPathingForScreamerStun : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float WokenUpRunDuration; // 0x44(0x04)
	char bOverride_WokenUpRunDuration : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float WokenUpRunSmoothingDuration; // 0x4c(0x04)
	char bOverride_WokenUpRunSmoothingDuration : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float MinTimeBetweenScreams; // 0x54(0x04)
	char bOverride_MinTimeBetweenScreams : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	bool bCanScreamInTransit; // 0x59(0x01)
	char bOverride_bCanScreamInTransit : 1; // 0x5a(0x01)
	char pad_5A_1 : 7; // 0x5a(0x01)
	char pad_5B[0x1]; // 0x5b(0x01)
	float PlayerProximityRatioForTransitScream; // 0x5c(0x04)
	char bOverride_PlayerProximityRatioForTransitScream : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32_t MaxWakeUpCountBeforeRetirement; // 0x64(0x04)
	char bOverride_MaxWakeUpCountBeforeRetirement : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
};

// ScriptStruct OPP.AIPusherConfig
// Size: 0x28 (Inherited: 0x00)
struct FAIPusherConfig {
	float MinIntervalGasAttacksOnSamePlayer; // 0x00(0x04)
	char bOverride_MinIntervalGasAttacksOnSamePlayer : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float MinDelayAfterPlayerPsychosis; // 0x08(0x04)
	char bOverride_MinDelayAfterPlayerPsychosis : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float GasAttackRange; // 0x10(0x04)
	char bOverride_GasAttackRange : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	bool bCanDoGroupGasAttack; // 0x15(0x01)
	char bOverride_bCanDoGroupGasAttack : 1; // 0x16(0x01)
	char pad_16_1 : 7; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
	float GroupGasAttackAngle; // 0x18(0x04)
	char bOverride_GroupGasAttackAngle : 1; // 0x1c(0x01)
	char pad_1C_1 : 7; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float GroupGasAttackRange; // 0x20(0x04)
	char bOverride_GroupGasAttackRange : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct OPP.AIPitcherConfig
// Size: 0x50 (Inherited: 0x00)
struct FAIPitcherConfig {
	float MinDistanceToTarget; // 0x00(0x04)
	char bOverride_MinDistanceToTarget : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float MaxDistanceToTargetForThrow; // 0x08(0x04)
	char bOverride_MaxDistanceToTargetForThrow : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float MaxActualThrowDistance; // 0x10(0x04)
	char bOverride_MaxActualThrowDistance : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float MinRepeatDelay; // 0x18(0x04)
	char bOverride_MinRepeatDelay : 1; // 0x1c(0x01)
	char pad_1C_1 : 7; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float MaxInaccuracyHorz; // 0x20(0x04)
	char bOverride_MaxInaccuracyHorz : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float MaxInaccuracyVert; // 0x28(0x04)
	char bOverride_MaxInaccuracyVert : 1; // 0x2c(0x01)
	char pad_2C_1 : 7; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float SpeedAtMinDistance; // 0x30(0x04)
	char bOverride_SpeedAtMinDistance : 1; // 0x34(0x01)
	char pad_34_1 : 7; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float SpeedAtMaxDistance; // 0x38(0x04)
	char bOverride_SpeedAtMaxDistance : 1; // 0x3c(0x01)
	char pad_3C_1 : 7; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float MinRotationSpeed; // 0x40(0x04)
	char bOverride_MinRotationSpeed : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float MaxRotationSpeed; // 0x48(0x04)
	char bOverride_MaxRotationSpeed : 1; // 0x4c(0x01)
	char pad_4C_1 : 7; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// ScriptStruct OPP.AISabotageConfig
// Size: 0x24 (Inherited: 0x00)
struct FAISabotageConfig {
	bool bCanSabotage; // 0x00(0x01)
	char bOverride_bCanSabotage : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t MaxNumberOfTotalSabotage; // 0x04(0x04)
	char bOverride_MaxNumberOfTotalSabotage : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t MaxNumberOfSabotageAtSameTime; // 0x0c(0x04)
	char bOverride_MaxNumberOfSabotageAtSameTime : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float DelayBeforeSabotage; // 0x14(0x04)
	char bOverride_DelayBeforeSabotage : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float DelayBetweenSabotage; // 0x1c(0x04)
	char bOverride_DelayBetweenSabotage : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct OPP.AILeashParameters
// Size: 0x30 (Inherited: 0x00)
struct FAILeashParameters {
	float SlowdownDuration; // 0x00(0x04)
	char bOverride_SlowdownDuration : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	bool bSlowDownInChaseOutsideLeash; // 0x05(0x01)
	char bOverride_bSlowDownInChaseOutsideLeash : 1; // 0x06(0x01)
	char pad_6_1 : 7; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
	float TimeOutsideLeashBeforeConsideration; // 0x08(0x04)
	char bOverride_TimeOutsideLeashBeforeConsideration : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	bool bIgnoreIfChasingCloseToTarget; // 0x0d(0x01)
	char bOverride_bIgnoreIfChasingCloseToTarget : 1; // 0x0e(0x01)
	char pad_E_1 : 7; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
	float TargetDistanceThreshold; // 0x10(0x04)
	char bOverride_TargetDistanceThreshold : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	bool bDiscardSoundStimulusOutsideLeash; // 0x15(0x01)
	char bOverride_bDiscardSoundStimulusOutsideLeash : 1; // 0x16(0x01)
	char pad_16_1 : 7; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
	float FullVisionRangeMultiplierForTargetOutsideLeash; // 0x18(0x04)
	char bOverride_FullVisionRangeMultiplierForTargetOutsideLeash : 1; // 0x1c(0x01)
	char pad_1C_1 : 7; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float PartialVisionRangeMultiplierForTargetOutsideLeash; // 0x20(0x04)
	char bOverride_PartialVisionRangeMultiplierForTargetOutsideLeash : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float HearingRangeMultiplierForTargetOutsideLeash; // 0x28(0x04)
	char bOverride_HearingRangeMultiplierForTargetOutsideLeash : 1; // 0x2c(0x01)
	char pad_2C_1 : 7; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct OPP.AIRepulsionParameters
// Size: 0x54 (Inherited: 0x00)
struct FAIRepulsionParameters {
	bool bDisableRepulsion; // 0x00(0x01)
	char bOverride_bDisableRepulsion : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	bool bDisableSynchronizedAvoidance; // 0x02(0x01)
	char bOverride_bDisableSynchronizedAvoidance : 1; // 0x03(0x01)
	char pad_3_1 : 7; // 0x03(0x01)
	float MagneticRepulsionDistance; // 0x04(0x04)
	char bOverride_MagneticRepulsionDistance : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float LinearRepulsionDistance; // 0x0c(0x04)
	char bOverride_LinearRepulsionDistance : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float RepulsionForce; // 0x14(0x04)
	char bOverride_RepulsionForce : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float MinRelativeVelocity; // 0x1c(0x04)
	char bOverride_MinRelativeVelocity : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float MaxRelativeVelocity; // 0x24(0x04)
	char bOverride_MaxRelativeVelocity : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float RelativeVelocityRepulsionScale; // 0x2c(0x04)
	char bOverride_RelativeVelocityRepulsionScale : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float MaxRelVelForMovingRepulsion; // 0x34(0x04)
	char bOverride_MaxRelVelForMovingRepulsion : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float MinVelForMovingRepulsion; // 0x3c(0x04)
	char bOverride_MinVelForMovingRepulsion : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float MovingRepulsionMaxSlowdown; // 0x44(0x04)
	char bOverride_MovingRepulsionMaxSlowdown : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float MaxMovingRepulsionDist; // 0x4c(0x04)
	char bOverride_MaxMovingRepulsionDist : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
};

// ScriptStruct OPP.AIAudioConfig
// Size: 0x7c (Inherited: 0x00)
struct FAIAudioConfig {
	bool bRelevantForThreatLevel; // 0x00(0x01)
	char bOverride_bRelevantForThreatLevel : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float MaxThreatInAmbient; // 0x04(0x04)
	char bOverride_MaxThreatInAmbient : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float CloseThreatDistAmbient; // 0x0c(0x04)
	char bOverride_CloseThreatDistAmbient : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float FarThreatDistAmbient; // 0x14(0x04)
	char bOverride_FarThreatDistAmbient : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float MaxThreatInUnaware; // 0x1c(0x04)
	char bOverride_MaxThreatInUnaware : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float CloseThreatDistUnaware; // 0x24(0x04)
	char bOverride_CloseThreatDistUnaware : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float FarThreatDistUnaware; // 0x2c(0x04)
	char bOverride_FarThreatDistUnaware : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float MaxThreatInSuspicious; // 0x34(0x04)
	char bOverride_MaxThreatInSuspicious : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float CloseThreatDistSuspicious; // 0x3c(0x04)
	char bOverride_CloseThreatDistSuspicious : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float FarThreatDistSuspicious; // 0x44(0x04)
	char bOverride_FarThreatDistSuspicious : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float MaxThreatInInvestigate; // 0x4c(0x04)
	char bOverride_MaxThreatInInvestigate : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float CloseThreatDistInvestigate; // 0x54(0x04)
	char bOverride_CloseThreatDistInvestigate : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float FarThreatDistInvestigate; // 0x5c(0x04)
	char bOverride_FarThreatDistInvestigate : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float MaxThreatInChase; // 0x64(0x04)
	char bOverride_MaxThreatInChase : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float CloseThreatDistChase; // 0x6c(0x04)
	char bOverride_CloseThreatDistChase : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float FarThreatDistChase; // 0x74(0x04)
	char bOverride_FarThreatDistChase : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
};

// ScriptStruct OPP.AIVOConfig
// Size: 0x70 (Inherited: 0x00)
struct FAIVOConfig {
	bool bPlayContinuousSound; // 0x00(0x01)
	char bOverride_bPlayContinuousSound : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float MinActivityTimeForRandomVO; // 0x04(0x04)
	char bOverride_MinActivityTimeForRandomVO : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float UnawareMinTimeForRandomVO; // 0x0c(0x04)
	char bOverride_UnawareMinTimeForRandomVO : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float UnawareMaxTimeForRandomVO; // 0x14(0x04)
	char bOverride_UnawareMaxTimeForRandomVO : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float InvestigateMinTimeForRandomVO; // 0x1c(0x04)
	char bOverride_InvestigateMinTimeForRandomVO : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float InvestigateMaxTimeForRandomVO; // 0x24(0x04)
	char bOverride_InvestigateMaxTimeForRandomVO : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float ChaseMinTimeForRandomVO; // 0x2c(0x04)
	char bOverride_ChaseMinTimeForRandomVO : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float ChaseMaxTimeForRandomVO; // 0x34(0x04)
	char bOverride_ChaseMaxTimeForRandomVO : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	bool bInterruptVOOnDisturbance; // 0x39(0x01)
	char bOverride_bInterruptVOOnDisturbance : 1; // 0x3a(0x01)
	char pad_3A_1 : 7; // 0x3a(0x01)
	char pad_3B[0x1]; // 0x3b(0x01)
	float MinChaseDurationForLKPVO; // 0x3c(0x04)
	char bOverride_MinChaseDurationForLKPVO : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float MinDelayAfterLostSightForReachedLKPVO; // 0x44(0x04)
	char bOverride_MinDelayAfterLostSightForReachedLKPVO : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float LKPEventDelay; // 0x4c(0x04)
	char bOverride_LKPEventDelay : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float MinChaseTimeForLostSightVO; // 0x54(0x04)
	char bOverride_MinChaseTimeForLostSightVO : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float MinInvestigationTimeForInvestigatePointVO; // 0x5c(0x04)
	char bOverride_MinInvestigationTimeForInvestigatePointVO : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float MinTimeAfterDamageForContinuous; // 0x64(0x04)
	char bOverride_MinTimeAfterDamageForContinuous : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	bool bAmbientPlayRandomVOInPassiveState; // 0x69(0x01)
	char bOverride_bAmbientPlayRandomVOInPassiveState : 1; // 0x6a(0x01)
	char pad_6A_1 : 7; // 0x6a(0x01)
	bool bAmbientPlayRandomVOInActiveState; // 0x6b(0x01)
	char bOverride_bAmbientPlayRandomVOInActiveState : 1; // 0x6c(0x01)
	char pad_6C_1 : 7; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// ScriptStruct OPP.AIRetirementConfig
// Size: 0x20 (Inherited: 0x00)
struct FAIRetirementConfig {
	bool bEnterLimboAfterSpecialistActivity; // 0x00(0x01)
	char bOverride_bEnterLimboAfterSpecialistActivity : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	bool bRetireAfterHitByActiveSkill; // 0x02(0x01)
	char bOverride_bRetireAfterHitByActiveSkill : 1; // 0x03(0x01)
	char pad_3_1 : 7; // 0x03(0x01)
	bool bEnterLimboAfterHitByActiveSkill; // 0x04(0x01)
	char bOverride_bEnterLimboAfterHitByActiveSkill : 1; // 0x05(0x01)
	char pad_5_1 : 7; // 0x05(0x01)
	bool bRetireAfterHitByProjectile; // 0x06(0x01)
	char bOverride_bRetireAfterHitByProjectile : 1; // 0x07(0x01)
	char pad_7_1 : 7; // 0x07(0x01)
	bool bEnterLimboAfterHitByProjectile; // 0x08(0x01)
	char bOverride_bEnterLimboAfterHitByProjectile : 1; // 0x09(0x01)
	char pad_9_1 : 7; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float MinTimeInLimbo; // 0x0c(0x04)
	char bOverride_MinTimeInLimbo : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float MaxTimeInLimbo; // 0x14(0x04)
	char bOverride_MaxTimeInLimbo : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	bool bRespawnFromLimboCloseToAPlayer; // 0x19(0x01)
	char bOverride_bRespawnFromLimboCloseToAPlayer : 1; // 0x1a(0x01)
	char pad_1A_1 : 7; // 0x1a(0x01)
	bool bRespawnFromLimboAtQuietCloset; // 0x1b(0x01)
	char bOverride_bRespawnFromLimboAtQuietCloset : 1; // 0x1c(0x01)
	char pad_1C_1 : 7; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct OPP.AIPlayerAvoidanceConfig
// Size: 0x50 (Inherited: 0x00)
struct FAIPlayerAvoidanceConfig {
	float MinPlayerAvoidanceDuration; // 0x00(0x04)
	char bOverride_MinPlayerAvoidanceDuration : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float MinAvoidanceDurationAfterPlayerSight; // 0x08(0x04)
	char bOverride_MinAvoidanceDurationAfterPlayerSight : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float ClosePointDist; // 0x10(0x04)
	char bOverride_ClosePointDist : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float IdealPointDist; // 0x18(0x04)
	char bOverride_IdealPointDist : 1; // 0x1c(0x01)
	char pad_1C_1 : 7; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float DistScoreContrib; // 0x20(0x04)
	char bOverride_DistScoreContrib : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float RandomScoreContrib; // 0x28(0x04)
	char bOverride_RandomScoreContrib : 1; // 0x2c(0x01)
	char pad_2C_1 : 7; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float AwayFromPlayerMaxContrib; // 0x30(0x04)
	char bOverride_AwayFromPlayerMaxContrib : 1; // 0x34(0x01)
	char pad_34_1 : 7; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float MaxAlarmDurationAfterSpottingPlayer; // 0x38(0x04)
	char bOverride_MaxAlarmDurationAfterSpottingPlayer : 1; // 0x3c(0x01)
	char pad_3C_1 : 7; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float MaxAlarmRange; // 0x40(0x04)
	char bOverride_MaxAlarmRange : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float CheckSurroundingsAtWaypointProbability; // 0x48(0x04)
	char bOverride_CheckSurroundingsAtWaypointProbability : 1; // 0x4c(0x01)
	char pad_4C_1 : 7; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// ScriptStruct OPP.AIAmbientConfig
// Size: 0x6c (Inherited: 0x00)
struct FAIAmbientConfig {
	bool bEnableAmbientPatrol; // 0x00(0x01)
	char bOverride_bEnableAmbientPatrol : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float DefaultMinStayDuration; // 0x04(0x04)
	char bOverride_DefaultMinStayDuration : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float DefaultMaxStayDuration; // 0x0c(0x04)
	char bOverride_DefaultMaxStayDuration : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float MinPlayerDistForRelocation; // 0x14(0x04)
	char bOverride_MinPlayerDistForRelocation : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	bool bResetNeutralWhenStartingAmbient; // 0x19(0x01)
	char bOverride_bResetNeutralWhenStartingAmbient : 1; // 0x1a(0x01)
	char pad_1A_1 : 7; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
	float MinIdealDistToNextPoint; // 0x1c(0x04)
	char bOverride_MinIdealDistToNextPoint : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float MaxIdealDistToNextPoint; // 0x24(0x04)
	char bOverride_MaxIdealDistToNextPoint : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float NotRecentlyUsedDelay; // 0x2c(0x04)
	char bOverride_NotRecentlyUsedDelay : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float IdealDistScorePoints; // 0x34(0x04)
	char bOverride_IdealDistScorePoints : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float HorizontalityScorePoints; // 0x3c(0x04)
	char bOverride_HorizontalityScorePoints : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float UnusedScorePoints; // 0x44(0x04)
	char bOverride_UnusedScorePoints : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float NotRecentlyUsedScorePoints; // 0x4c(0x04)
	char bOverride_NotRecentlyUsedScorePoints : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float RandomScorePoints; // 0x54(0x04)
	char bOverride_RandomScorePoints : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float ReactToPlayerDistance; // 0x5c(0x04)
	char bOverride_ReactToPlayerDistance : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float PassiveUnawareVOMinDistance; // 0x64(0x04)
	char bOverride_PassiveUnawareVOMinDistance : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
};

// ScriptStruct OPP.AIDynamicLookConfig
// Size: 0x16c (Inherited: 0x00)
struct FAIDynamicLookConfig {
	bool bEnableDynamicLook; // 0x00(0x01)
	char bOverride_bEnableDynamicLook : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float GlobalProbability; // 0x04(0x04)
	char bOverride_GlobalProbability : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t MaxConsecutivePoints; // 0x0c(0x04)
	char bOverride_MaxConsecutivePoints : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float MinDelayBetweenActivations; // 0x14(0x04)
	char bOverride_MinDelayBetweenActivations : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float MinDelayAfterInvestigationStart; // 0x1c(0x04)
	char bOverride_MinDelayAfterInvestigationStart : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float PointAvailabilityDurationBeforeActivation; // 0x24(0x04)
	char bOverride_PointAvailabilityDurationBeforeActivation : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float MaxDistToDestinationForActivation; // 0x2c(0x04)
	char bOverride_MaxDistToDestinationForActivation : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float UpdatePointsInterval; // 0x34(0x04)
	char bOverride_UpdatePointsInterval : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float FastLookAtLargeAngleProbability; // 0x3c(0x04)
	char bOverride_FastLookAtLargeAngleProbability : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float FastLookMaxDuration; // 0x44(0x04)
	char bOverride_FastLookMaxDuration : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float SpeedChangeSmoothingDuration; // 0x4c(0x04)
	char bOverride_SpeedChangeSmoothingDuration : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float AddedScanAngleRange; // 0x54(0x04)
	char bOverride_AddedScanAngleRange : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float AddedScanFrequency; // 0x5c(0x04)
	char bOverride_AddedScanFrequency : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float InterestPointMinRelativeYaw; // 0x64(0x04)
	char bOverride_InterestPointMinRelativeYaw : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float DistanceClose; // 0x6c(0x04)
	char bOverride_DistanceClose : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float DistanceIdeal; // 0x74(0x04)
	char bOverride_DistanceIdeal : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	float DistanceTooFar; // 0x7c(0x04)
	char bOverride_DistanceTooFar : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float DistanceScoreContribClose; // 0x84(0x04)
	char bOverride_DistanceScoreContribClose : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float DistanceScoreContribIdeal; // 0x8c(0x04)
	char bOverride_DistanceScoreContribIdeal : 1; // 0x90(0x01)
	char pad_90_1 : 7; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	float LargeAngleThreshold; // 0x94(0x04)
	char bOverride_LargeAngleThreshold : 1; // 0x98(0x01)
	char pad_98_1 : 7; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	float LargeAngleScoreContrib; // 0x9c(0x04)
	char bOverride_LargeAngleScoreContrib : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	float RandomScoreContrib; // 0xa4(0x04)
	char bOverride_RandomScoreContrib : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	float MinDelayForPointReuse; // 0xac(0x04)
	char bOverride_MinDelayForPointReuse : 1; // 0xb0(0x01)
	char pad_B0_1 : 7; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	float MinPointDurationClose; // 0xb4(0x04)
	char bOverride_MinPointDurationClose : 1; // 0xb8(0x01)
	char pad_B8_1 : 7; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	float MaxPointDurationClose; // 0xbc(0x04)
	char bOverride_MaxPointDurationClose : 1; // 0xc0(0x01)
	char pad_C0_1 : 7; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	float MinPointDurationFar; // 0xc4(0x04)
	char bOverride_MinPointDurationFar : 1; // 0xc8(0x01)
	char pad_C8_1 : 7; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float MaxPointDurationFar; // 0xcc(0x04)
	char bOverride_MaxPointDurationFar : 1; // 0xd0(0x01)
	char pad_D0_1 : 7; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	float CloseDistanceForLookDuration; // 0xd4(0x04)
	char bOverride_CloseDistanceForLookDuration : 1; // 0xd8(0x01)
	char pad_D8_1 : 7; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	float FarDistanceForLookDuration; // 0xdc(0x04)
	char bOverride_FarDistanceForLookDuration : 1; // 0xe0(0x01)
	char pad_E0_1 : 7; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	float AngleForMinLookDuration; // 0xe4(0x04)
	char bOverride_AngleForMinLookDuration : 1; // 0xe8(0x01)
	char pad_E8_1 : 7; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	float MinDurationForLargeAngle; // 0xec(0x04)
	char bOverride_MinDurationForLargeAngle : 1; // 0xf0(0x01)
	char pad_F0_1 : 7; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	float SlowInvestigationDurationBias; // 0xf4(0x04)
	char bOverride_SlowInvestigationDurationBias : 1; // 0xf8(0x01)
	char pad_F8_1 : 7; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	float FastInvestigationDurationBias; // 0xfc(0x04)
	char bOverride_FastInvestigationDurationBias : 1; // 0x100(0x01)
	char pad_100_1 : 7; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	int32_t ExplicitInvestigationMaxNumPoints; // 0x104(0x04)
	char bOverride_ExplicitInvestigationMaxNumPoints : 1; // 0x108(0x01)
	char pad_108_1 : 7; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	float ExplicitCloseLookClearanceDark; // 0x10c(0x04)
	char bOverride_ExplicitCloseLookClearanceDark : 1; // 0x110(0x01)
	char pad_110_1 : 7; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	float ExplicitCloseLookClearanceNormal; // 0x114(0x04)
	char bOverride_ExplicitCloseLookClearanceNormal : 1; // 0x118(0x01)
	char pad_118_1 : 7; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	float ExplicitFarLookClearanceDark; // 0x11c(0x04)
	char bOverride_ExplicitFarLookClearanceDark : 1; // 0x120(0x01)
	char pad_120_1 : 7; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	float ExplicitFarLookClearanceNormal; // 0x124(0x04)
	char bOverride_ExplicitFarLookClearanceNormal : 1; // 0x128(0x01)
	char pad_128_1 : 7; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	float ExplicitMinLookDurationClose; // 0x12c(0x04)
	char bOverride_ExplicitMinLookDurationClose : 1; // 0x130(0x01)
	char pad_130_1 : 7; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	float ExplicitMinLookDurationFar; // 0x134(0x04)
	char bOverride_ExplicitMinLookDurationFar : 1; // 0x138(0x01)
	char pad_138_1 : 7; // 0x138(0x01)
	char pad_139[0x3]; // 0x139(0x03)
	float ExplicitMaxLookDurationClose; // 0x13c(0x04)
	char bOverride_ExplicitMaxLookDurationClose : 1; // 0x140(0x01)
	char pad_140_1 : 7; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	float ExplicitMaxLookDurationFar; // 0x144(0x04)
	char bOverride_ExplicitMaxLookDurationFar : 1; // 0x148(0x01)
	char pad_148_1 : 7; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	float FallbackLookMinAngle; // 0x14c(0x04)
	char bOverride_FallbackLookMinAngle : 1; // 0x150(0x01)
	char pad_150_1 : 7; // 0x150(0x01)
	char pad_151[0x3]; // 0x151(0x03)
	float FallbackLookMaxAngle; // 0x154(0x04)
	char bOverride_FallbackLookMaxAngle : 1; // 0x158(0x01)
	char pad_158_1 : 7; // 0x158(0x01)
	char pad_159[0x3]; // 0x159(0x03)
	float FallbackLookMinDuration; // 0x15c(0x04)
	char bOverride_FallbackLookMinDuration : 1; // 0x160(0x01)
	char pad_160_1 : 7; // 0x160(0x01)
	char pad_161[0x3]; // 0x161(0x03)
	float FallbackLookMaxDuration; // 0x164(0x04)
	char bOverride_FallbackLookMaxDuration : 1; // 0x168(0x01)
	char pad_168_1 : 7; // 0x168(0x01)
	char pad_169[0x3]; // 0x169(0x03)
};

// ScriptStruct OPP.AIPatrolConfig
// Size: 0xb8 (Inherited: 0x00)
struct FAIPatrolConfig {
	float RandomContrib; // 0x00(0x04)
	char bOverride_RandomContrib : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float IdealDistanceFromBot; // 0x08(0x04)
	char bOverride_IdealDistanceFromBot : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float IdealDistanceFromBotContrib; // 0x10(0x04)
	char bOverride_IdealDistanceFromBotContrib : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float CloseToOtherBotDistance; // 0x18(0x04)
	char bOverride_CloseToOtherBotDistance : 1; // 0x1c(0x01)
	char pad_1C_1 : 7; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float CloseToOtherBotContrib; // 0x20(0x04)
	char bOverride_CloseToOtherBotContrib : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float NearPlayerDistance; // 0x28(0x04)
	char bOverride_NearPlayerDistance : 1; // 0x2c(0x01)
	char pad_2C_1 : 7; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float NearPlayerContrib; // 0x30(0x04)
	char bOverride_NearPlayerContrib : 1; // 0x34(0x01)
	char pad_34_1 : 7; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float NearChasedPlayerDistance; // 0x38(0x04)
	char bOverride_NearChasedPlayerDistance : 1; // 0x3c(0x01)
	char pad_3C_1 : 7; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float NearChasedPlayerContrib; // 0x40(0x04)
	char bOverride_NearChasedPlayerContrib : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float UnvisitedContrib; // 0x48(0x04)
	char bOverride_UnvisitedContrib : 1; // 0x4c(0x01)
	char pad_4C_1 : 7; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float RecentlyVisitedDelay; // 0x50(0x04)
	char bOverride_RecentlyVisitedDelay : 1; // 0x54(0x01)
	char pad_54_1 : 7; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float RecentlyVisitedContrib; // 0x58(0x04)
	char bOverride_RecentlyVisitedContrib : 1; // 0x5c(0x01)
	char pad_5C_1 : 7; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	float RecentlyVisitedByAnyDelay; // 0x60(0x04)
	char bOverride_RecentlyVisitedByAnyDelay : 1; // 0x64(0x01)
	char pad_64_1 : 7; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	float RecentlyVisitedByAnyContrib; // 0x68(0x04)
	char bOverride_RecentlyVisitedByAnyContrib : 1; // 0x6c(0x01)
	char pad_6C_1 : 7; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	float DifferentHeightThreshold; // 0x70(0x04)
	char bOverride_DifferentHeightThreshold : 1; // 0x74(0x01)
	char pad_74_1 : 7; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	float DifferentHeightToBotContrib; // 0x78(0x04)
	char bOverride_DifferentHeightToBotContrib : 1; // 0x7c(0x01)
	char pad_7C_1 : 7; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	float HomeSeekingNormalDist; // 0x80(0x04)
	char bOverride_HomeSeekingNormalDist : 1; // 0x84(0x01)
	char pad_84_1 : 7; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	float HomeSeekingContrib; // 0x88(0x04)
	char bOverride_HomeSeekingContrib : 1; // 0x8c(0x01)
	char pad_8C_1 : 7; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	float SpreadingOdds; // 0x90(0x04)
	char bOverride_SpreadingOdds : 1; // 0x94(0x01)
	char pad_94_1 : 7; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	float SpreadingContrib; // 0x98(0x04)
	char bOverride_SpreadingContrib : 1; // 0x9c(0x01)
	char pad_9C_1 : 7; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	float DirectionToAvoidContrib; // 0xa0(0x04)
	char bOverride_DirectionToAvoidContrib : 1; // 0xa4(0x01)
	char pad_A4_1 : 7; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	float DefaultWaypointMinWaitTime; // 0xa8(0x04)
	char bOverride_DefaultWaypointMinWaitTime : 1; // 0xac(0x01)
	char pad_AC_1 : 7; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float DefaultWaypointMaxWaitTime; // 0xb0(0x04)
	char bOverride_DefaultWaypointMaxWaitTime : 1; // 0xb4(0x01)
	char pad_B4_1 : 7; // 0xb4(0x01)
	bool bRepathIfGoingThroughActiveChase; // 0xb5(0x01)
	char bOverride_bRepathIfGoingThroughActiveChase : 1; // 0xb6(0x01)
	char pad_B6_1 : 7; // 0xb6(0x01)
	char pad_B7[0x1]; // 0xb7(0x01)
};

// ScriptStruct OPP.AIInvestigationConfig
// Size: 0x2f4 (Inherited: 0x00)
struct FAIInvestigationConfig {
	bool bCanInvestigate; // 0x00(0x01)
	char bOverride_bCanInvestigate : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	bool bInvestigateOnIdleFallback; // 0x02(0x01)
	char bOverride_bInvestigateOnIdleFallback : 1; // 0x03(0x01)
	char pad_3_1 : 7; // 0x03(0x01)
	bool bUseInvPointAnimsForSimpleInv; // 0x04(0x01)
	char bOverride_bUseInvPointAnimsForSimpleInv : 1; // 0x05(0x01)
	char pad_5_1 : 7; // 0x05(0x01)
	bool bCanInvestigatePlayersInHidespots; // 0x06(0x01)
	char bOverride_bCanInvestigatePlayersInHidespots : 1; // 0x07(0x01)
	char pad_7_1 : 7; // 0x07(0x01)
	int32_t NumPointsToCheckAlertedAfterLKP; // 0x08(0x04)
	char bOverride_NumPointsToCheckAlertedAfterLKP : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	bool bFindInvestigationPointForSourceInvestigation; // 0x0d(0x01)
	char bOverride_bFindInvestigationPointForSourceInvestigation : 1; // 0x0e(0x01)
	char pad_E_1 : 7; // 0x0e(0x01)
	bool bPlayGiveUpAnim; // 0x0f(0x01)
	char bOverride_bPlayGiveUpAnim : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t MinPointsToGenerate; // 0x14(0x04)
	char bOverride_MinPointsToGenerate : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float GeneratedPointsMinRadius; // 0x1c(0x04)
	char bOverride_GeneratedPointsMinRadius : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float GeneratedPointsMaxRadius; // 0x24(0x04)
	char bOverride_GeneratedPointsMaxRadius : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	bool bCountAsOtherBotForInvestigationBias; // 0x29(0x01)
	char bOverride_bCountAsOtherBotForInvestigationBias : 1; // 0x2a(0x01)
	char pad_2A_1 : 7; // 0x2a(0x01)
	bool bCanBreakHidespot; // 0x2b(0x01)
	char bOverride_bCanBreakHidespot : 1; // 0x2c(0x01)
	char pad_2C_1 : 7; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float BreakHidespotProbability; // 0x30(0x04)
	char bOverride_BreakHidespotProbability : 1; // 0x34(0x01)
	char pad_34_1 : 7; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float MinDistFromChasedPlayer; // 0x38(0x04)
	char bOverride_MinDistFromChasedPlayer : 1; // 0x3c(0x01)
	char pad_3C_1 : 7; // 0x3c(0x01)
	bool bStopIfPlayerOutOfRange; // 0x3d(0x01)
	char bOverride_bStopIfPlayerOutOfRange : 1; // 0x3e(0x01)
	char pad_3E_1 : 7; // 0x3e(0x01)
	bool bForceDynamicLook; // 0x3f(0x01)
	char bOverride_bForceDynamicLook : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	bool bFavorBakedAnim; // 0x41(0x01)
	char bOverride_bFavorBakedAnim : 1; // 0x42(0x01)
	char pad_42_1 : 7; // 0x42(0x01)
	char pad_43[0x1]; // 0x43(0x01)
	int32_t MaxPointsForFinishIncapacitated; // 0x44(0x04)
	char bOverride_MaxPointsForFinishIncapacitated : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float SouceInvestigationPointSearchDistance; // 0x4c(0x04)
	char bOverride_SouceInvestigationPointSearchDistance : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	struct FAIInvestigationBiasConfig AlertedInvestigationBiasConfig; // 0x54(0x150)
	struct FAIInvestigationBiasConfig PatrolInvestigationBiasConfig; // 0x1a4(0x150)
};

// ScriptStruct OPP.AIInvestigationBiasConfig
// Size: 0x150 (Inherited: 0x00)
struct FAIInvestigationBiasConfig {
	float MaxPointSearchDistance; // 0x00(0x04)
	char bOverride_MaxPointSearchDistance : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float MaxPathDistance; // 0x08(0x04)
	char bOverride_MaxPathDistance : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	bool bUseClosestPlayerIfNoRelativePlayer; // 0x0d(0x01)
	char bOverride_bUseClosestPlayerIfNoRelativePlayer : 1; // 0x0e(0x01)
	char pad_E_1 : 7; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
	float PointWeightContrib; // 0x10(0x04)
	char bOverride_PointWeightContrib : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float PointWeight; // 0x18(0x04)
	char bOverride_PointWeight : 1; // 0x1c(0x01)
	char pad_1C_1 : 7; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float AutoGeneratedWeight; // 0x20(0x04)
	char bOverride_AutoGeneratedWeight : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float HidingSpotWeight; // 0x28(0x04)
	char bOverride_HidingSpotWeight : 1; // 0x2c(0x01)
	char pad_2C_1 : 7; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float SimpleInteractWeight; // 0x30(0x04)
	char bOverride_SimpleInteractWeight : 1; // 0x34(0x01)
	char pad_34_1 : 7; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float LedgeDropWeight; // 0x38(0x04)
	char bOverride_LedgeDropWeight : 1; // 0x3c(0x01)
	char pad_3C_1 : 7; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float DoorOpenedByPlayerWeight; // 0x40(0x04)
	char bOverride_DoorOpenedByPlayerWeight : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float DoorDefaultWeight; // 0x48(0x04)
	char bOverride_DoorDefaultWeight : 1; // 0x4c(0x01)
	char pad_4C_1 : 7; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float DoorListeningProbability; // 0x50(0x04)
	char bOverride_DoorListeningProbability : 1; // 0x54(0x01)
	char pad_54_1 : 7; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float DoorPeekProbability; // 0x58(0x04)
	char bOverride_DoorPeekProbability : 1; // 0x5c(0x01)
	char pad_5C_1 : 7; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	float GenericInvestigationClearanceDistance; // 0x60(0x04)
	char bOverride_GenericInvestigationClearanceDistance : 1; // 0x64(0x01)
	char pad_64_1 : 7; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	float FindHiddenPlayerProbability; // 0x68(0x04)
	char bOverride_FindHiddenPlayerProbability : 1; // 0x6c(0x01)
	char pad_6C_1 : 7; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	float BiasVisitedContrib; // 0x70(0x04)
	char bOverride_BiasVisitedContrib : 1; // 0x74(0x01)
	char pad_74_1 : 7; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	float BiasTowardsPlayerContrib; // 0x78(0x04)
	char bOverride_BiasTowardsPlayerContrib : 1; // 0x7c(0x01)
	char pad_7C_1 : 7; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	float BiasTowardsLastPlayerDirectionContrib; // 0x80(0x04)
	char bOverride_BiasTowardsLastPlayerDirectionContrib : 1; // 0x84(0x01)
	char pad_84_1 : 7; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	float BiasGeneralInvestigationDirectionContrib; // 0x88(0x04)
	char bOverride_BiasGeneralInvestigationDirectionContrib : 1; // 0x8c(0x01)
	char pad_8C_1 : 7; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	float BiasNearPlayerDistance; // 0x90(0x04)
	char bOverride_BiasNearPlayerDistance : 1; // 0x94(0x01)
	char pad_94_1 : 7; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	float BiasNearPlayerContrib; // 0x98(0x04)
	char bOverride_BiasNearPlayerContrib : 1; // 0x9c(0x01)
	char pad_9C_1 : 7; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	float BiasNearPlayerContrib1stPoint; // 0xa0(0x04)
	char bOverride_BiasNearPlayerContrib1stPoint : 1; // 0xa4(0x01)
	char pad_A4_1 : 7; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	float BiasIdealDistanceFromBot; // 0xa8(0x04)
	char bOverride_BiasIdealDistanceFromBot : 1; // 0xac(0x01)
	char pad_AC_1 : 7; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float BiasIdealDistanceFromBotContrib; // 0xb0(0x04)
	char bOverride_BiasIdealDistanceFromBotContrib : 1; // 0xb4(0x01)
	char pad_B4_1 : 7; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	float BiasDifferentHeightThreshold; // 0xb8(0x04)
	char bOverride_BiasDifferentHeightThreshold : 1; // 0xbc(0x01)
	char pad_BC_1 : 7; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	float BiasDifferentHeightToBotContrib; // 0xc0(0x04)
	char bOverride_BiasDifferentHeightToBotContrib : 1; // 0xc4(0x01)
	char pad_C4_1 : 7; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	float BiasDifferentHeightToPlayerContrib; // 0xc8(0x04)
	char bOverride_BiasDifferentHeightToPlayerContrib : 1; // 0xcc(0x01)
	char pad_CC_1 : 7; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	float BiasInSearchDistanceContrib; // 0xd0(0x04)
	char bOverride_BiasInSearchDistanceContrib : 1; // 0xd4(0x01)
	char pad_D4_1 : 7; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	float BiasCloseToOtherBotDistance; // 0xd8(0x04)
	char bOverride_BiasCloseToOtherBotDistance : 1; // 0xdc(0x01)
	char pad_DC_1 : 7; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	float BiasCloseToOtherBotContrib; // 0xe0(0x04)
	char bOverride_BiasCloseToOtherBotContrib : 1; // 0xe4(0x01)
	char pad_E4_1 : 7; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	float BiasAwayFromIncapacitatedDistance; // 0xe8(0x04)
	char bOverride_BiasAwayFromIncapacitatedDistance : 1; // 0xec(0x01)
	char pad_EC_1 : 7; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	float BiasAwayFromIncapacitatedContrib; // 0xf0(0x04)
	char bOverride_BiasAwayFromIncapacitatedContrib : 1; // 0xf4(0x01)
	char pad_F4_1 : 7; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	float BiasInvestigatedRecentlyDelay; // 0xf8(0x04)
	char bOverride_BiasInvestigatedRecentlyDelay : 1; // 0xfc(0x01)
	char pad_FC_1 : 7; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	float BiasInvestigatedRecentlyContrib; // 0x100(0x04)
	char bOverride_BiasInvestigatedRecentlyContrib : 1; // 0x104(0x01)
	char pad_104_1 : 7; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	float BiasCloseToLastPointsDistance; // 0x108(0x04)
	char bOverride_BiasCloseToLastPointsDistance : 1; // 0x10c(0x01)
	char pad_10C_1 : 7; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	float BiasCloseToLastPointsContrib; // 0x110(0x04)
	char bOverride_BiasCloseToLastPointsContrib : 1; // 0x114(0x01)
	char pad_114_1 : 7; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	float BiasRecentlyVisitedOtherRoomContrib; // 0x118(0x04)
	char bOverride_BiasRecentlyVisitedOtherRoomContrib : 1; // 0x11c(0x01)
	char pad_11C_1 : 7; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	float BiasCurrentRoomHidingSpotContrib; // 0x120(0x04)
	char bOverride_BiasCurrentRoomHidingSpotContrib : 1; // 0x124(0x01)
	char pad_124_1 : 7; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	float BiasOtherRoomHidingSpotContrib; // 0x128(0x04)
	char bOverride_BiasOtherRoomHidingSpotContrib : 1; // 0x12c(0x01)
	char pad_12C_1 : 7; // 0x12c(0x01)
	char pad_12D[0x3]; // 0x12d(0x03)
	float BiasUnvisitedOtherRoomInvPointContrib; // 0x130(0x04)
	char bOverride_BiasUnvisitedOtherRoomInvPointContrib : 1; // 0x134(0x01)
	char pad_134_1 : 7; // 0x134(0x01)
	char pad_135[0x3]; // 0x135(0x03)
	float BiasAdjacentToNPCVisitedRoom; // 0x138(0x04)
	char bOverride_BiasAdjacentToNPCVisitedRoom : 1; // 0x13c(0x01)
	char pad_13C_1 : 7; // 0x13c(0x01)
	char pad_13D[0x3]; // 0x13d(0x03)
	float BiasRandomContrib; // 0x140(0x04)
	char bOverride_BiasRandomContrib : 1; // 0x144(0x01)
	char pad_144_1 : 7; // 0x144(0x01)
	char pad_145[0x3]; // 0x145(0x03)
	float BiasOutsidePathingDistContrib; // 0x148(0x04)
	char bOverride_BiasOutsidePathingDistContrib : 1; // 0x14c(0x01)
	char pad_14C_1 : 7; // 0x14c(0x01)
	char pad_14D[0x3]; // 0x14d(0x03)
};

// ScriptStruct OPP.AICombatConfig
// Size: 0x06 (Inherited: 0x00)
struct FAICombatConfig {
	bool bCanBeAffectedByActiveSkillsAMP; // 0x00(0x01)
	char bOverride_bCanBeAffectedByActiveSkillsAMP : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	enum class ENPCHitReactionType ActiveSkillsReplacementReactionAMP; // 0x02(0x01)
	char bOverride_ActiveSkillsReplacementReactionAMP : 1; // 0x03(0x01)
	char pad_3_1 : 7; // 0x03(0x01)
	bool bCanBeAffectedByActiveSkillsPaint; // 0x04(0x01)
	char bOverride_bCanBeAffectedByActiveSkillsPaint : 1; // 0x05(0x01)
	char pad_5_1 : 7; // 0x05(0x01)
};

// ScriptStruct OPP.AIChaseConfig
// Size: 0xc8 (Inherited: 0x00)
struct FAIChaseConfig {
	bool bReactBeforeChase; // 0x00(0x01)
	char bOverride_bReactBeforeChase : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float ForcedAwaressOnStimuliDistance; // 0x04(0x04)
	char bOverride_ForcedAwaressOnStimuliDistance : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	bool bAnticipatePlayerPosition; // 0x09(0x01)
	char bOverride_bAnticipatePlayerPosition : 1; // 0x0a(0x01)
	char pad_A_1 : 7; // 0x0a(0x01)
	bool bCanGiveUpChase; // 0x0b(0x01)
	char bOverride_bCanGiveUpChase : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float MinimumChaseDurationBeforeGiveUp; // 0x10(0x04)
	char bOverride_MinimumChaseDurationBeforeGiveUp : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float GiveUpDistance; // 0x18(0x04)
	char bOverride_GiveUpDistance : 1; // 0x1c(0x01)
	char pad_1C_1 : 7; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float GiveUpSlowDownDuration; // 0x20(0x04)
	char bOverride_GiveUpSlowDownDuration : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float GiveUpWaitDuration; // 0x28(0x04)
	char bOverride_GiveUpWaitDuration : 1; // 0x2c(0x01)
	char pad_2C_1 : 7; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float DestinationDistanceBuffer; // 0x30(0x04)
	char bOverride_DestinationDistanceBuffer : 1; // 0x34(0x01)
	char pad_34_1 : 7; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float DestinationDistanceBufferKnockedDown; // 0x38(0x04)
	char bOverride_DestinationDistanceBufferKnockedDown : 1; // 0x3c(0x01)
	char pad_3C_1 : 7; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float DestinationDistanceBufferFatality; // 0x40(0x04)
	char bOverride_DestinationDistanceBufferFatality : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	bool bCanYieldChase; // 0x45(0x01)
	char bOverride_bCanYieldChase : 1; // 0x46(0x01)
	char pad_46_1 : 7; // 0x46(0x01)
	char pad_47[0x1]; // 0x47(0x01)
	float YieldCloseDistanceThreshold; // 0x48(0x04)
	char bOverride_YieldCloseDistanceThreshold : 1; // 0x4c(0x01)
	char pad_4C_1 : 7; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float NoYieldDistAhead; // 0x50(0x04)
	char bOverride_NoYieldDistAhead : 1; // 0x54(0x01)
	char pad_54_1 : 7; // 0x54(0x01)
	bool bYieldToHigherGrade; // 0x55(0x01)
	char bOverride_bYieldToHigherGrade : 1; // 0x56(0x01)
	char pad_56_1 : 7; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
	float YieldDistClose; // 0x58(0x04)
	char bOverride_YieldDistClose : 1; // 0x5c(0x01)
	char pad_5C_1 : 7; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	float YieldDistFar; // 0x60(0x04)
	char bOverride_YieldDistFar : 1; // 0x64(0x01)
	char pad_64_1 : 7; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	float YieldSlowDownDuration; // 0x68(0x04)
	char bOverride_YieldSlowDownDuration : 1; // 0x6c(0x01)
	char pad_6C_1 : 7; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	float YieldFastSlowDownDuration; // 0x70(0x04)
	char bOverride_YieldFastSlowDownDuration : 1; // 0x74(0x01)
	char pad_74_1 : 7; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	float YieldWaitDuration; // 0x78(0x04)
	char bOverride_YieldWaitDuration : 1; // 0x7c(0x01)
	char pad_7C_1 : 7; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	float MaxNoSightYieldDuration; // 0x80(0x04)
	char bOverride_MaxNoSightYieldDuration : 1; // 0x84(0x01)
	char pad_84_1 : 7; // 0x84(0x01)
	bool bCanPathBlock; // 0x85(0x01)
	char bOverride_bCanPathBlock : 1; // 0x86(0x01)
	char pad_86_1 : 7; // 0x86(0x01)
	char pad_87[0x1]; // 0x87(0x01)
	float PathBlockForwardTargetOffset; // 0x88(0x04)
	char bOverride_PathBlockForwardTargetOffset : 1; // 0x8c(0x01)
	char pad_8C_1 : 7; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	float PathBlockMinIdleWaitTime; // 0x90(0x04)
	char bOverride_PathBlockMinIdleWaitTime : 1; // 0x94(0x01)
	char pad_94_1 : 7; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	float PathBlockMaxIdleWaitTime; // 0x98(0x04)
	char bOverride_PathBlockMaxIdleWaitTime : 1; // 0x9c(0x01)
	char pad_9C_1 : 7; // 0x9c(0x01)
	bool PathBlockRequiresAnyActiveChase; // 0x9d(0x01)
	char bOverride_PathBlockRequiresAnyActiveChase : 1; // 0x9e(0x01)
	char pad_9E_1 : 7; // 0x9e(0x01)
	char pad_9F[0x1]; // 0x9f(0x01)
	float ForcedChaseNoContactTimeout; // 0xa0(0x04)
	char bOverride_ForcedChaseNoContactTimeout : 1; // 0xa4(0x01)
	char pad_A4_1 : 7; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	float AbandonAfterUnreacheableDuration; // 0xa8(0x04)
	char bOverride_AbandonAfterUnreacheableDuration : 1; // 0xac(0x01)
	char pad_AC_1 : 7; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float MaximumTargetDistToStartChase; // 0xb0(0x04)
	char bOverride_MaximumTargetDistToStartChase : 1; // 0xb4(0x01)
	char pad_B4_1 : 7; // 0xb4(0x01)
	bool bCanPerformTaunt; // 0xb5(0x01)
	char bOverride_bCanPerformTaunt : 1; // 0xb6(0x01)
	char pad_B6_1 : 7; // 0xb6(0x01)
	char pad_B7[0x1]; // 0xb7(0x01)
	float TimeBeforeFirstTaunt; // 0xb8(0x04)
	char bOverride_TimeBeforeFirstTaunt : 1; // 0xbc(0x01)
	char pad_BC_1 : 7; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	float TimeBetweenTaunts; // 0xc0(0x04)
	char bOverride_TimeBetweenTaunts : 1; // 0xc4(0x01)
	char pad_C4_1 : 7; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
};

// ScriptStruct OPP.AIAttackConfig
// Size: 0x138 (Inherited: 0x00)
struct FAIAttackConfig {
	bool bCanAttack; // 0x00(0x01)
	char bOverride_bCanAttack : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	bool bCanCancelActiveAttack; // 0x02(0x01)
	char bOverride_bCanCancelActiveAttack : 1; // 0x03(0x01)
	char pad_3_1 : 7; // 0x03(0x01)
	bool bUseAttackStance; // 0x04(0x01)
	char bOverride_bUseAttackStance : 1; // 0x05(0x01)
	char pad_5_1 : 7; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	float AttackRange; // 0x08(0x04)
	char bOverride_AttackRange : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float MaxAttackAngle; // 0x10(0x04)
	char bOverride_MaxAttackAngle : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float MaxFatalityRange; // 0x18(0x04)
	char bOverride_MaxFatalityRange : 1; // 0x1c(0x01)
	char pad_1C_1 : 7; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float MinAttackRangeShotgun; // 0x20(0x04)
	char bOverride_MinAttackRangeShotgun : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float MaxAttackRangeShotgun; // 0x28(0x04)
	char bOverride_MaxAttackRangeShotgun : 1; // 0x2c(0x01)
	char pad_2C_1 : 7; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float MaxAdjustForwardDistance; // 0x30(0x04)
	char bOverride_MaxAdjustForwardDistance : 1; // 0x34(0x01)
	char pad_34_1 : 7; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float MaxCorrectionLinearVelocity; // 0x38(0x04)
	char bOverride_MaxCorrectionLinearVelocity : 1; // 0x3c(0x01)
	char pad_3C_1 : 7; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float MaxCorrectionAngularVelocity; // 0x40(0x04)
	char bOverride_MaxCorrectionAngularVelocity : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	bool bNoFail; // 0x45(0x01)
	char bOverride_bNoFail : 1; // 0x46(0x01)
	char pad_46_1 : 7; // 0x46(0x01)
	bool bOnlyUsePushAttack; // 0x47(0x01)
	char bOverride_bOnlyUsePushAttack : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	bool bEnableBlockingAttacks; // 0x49(0x01)
	char bOverride_bEnableBlockingAttacks : 1; // 0x4a(0x01)
	char pad_4A_1 : 7; // 0x4a(0x01)
	char pad_4B[0x1]; // 0x4b(0x01)
	float BlockingAttackMaxRange; // 0x4c(0x04)
	char bOverride_BlockingAttackMaxRange : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float BlockingAttackMinPlayerSpeed; // 0x54(0x04)
	char bOverride_BlockingAttackMinPlayerSpeed : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float BlockingAttackTrackingTargetOffset; // 0x5c(0x04)
	char bOverride_BlockingAttackTrackingTargetOffset : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float MinDelayForSuccessiveBlockingAttack; // 0x64(0x04)
	char bOverride_MinDelayForSuccessiveBlockingAttack : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float AttackStandardDamage; // 0x6c(0x04)
	char bOverride_AttackStandardDamage : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float AttackProjectileDamage; // 0x74(0x04)
	char bOverride_AttackProjectileDamage : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	float AttackGrabAndThrowDamage; // 0x7c(0x04)
	char bOverride_AttackGrabAndThrowDamage : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float DamageMultiplierVeryLow; // 0x84(0x04)
	char bOverride_DamageMultiplierVeryLow : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float DamageMultiplierLow; // 0x8c(0x04)
	char bOverride_DamageMultiplierLow : 1; // 0x90(0x01)
	char pad_90_1 : 7; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	float DamageMultiplierMedium; // 0x94(0x04)
	char bOverride_DamageMultiplierMedium : 1; // 0x98(0x01)
	char pad_98_1 : 7; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	float DamageMultiplierHigh; // 0x9c(0x04)
	char bOverride_DamageMultiplierHigh : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	float DamageMultiplierVeryHigh; // 0xa4(0x04)
	char bOverride_DamageMultiplierVeryHigh : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	float SuccessiveAttackerDamageMultiplier; // 0xac(0x04)
	char bOverride_SuccessiveAttackerDamageMultiplier : 1; // 0xb0(0x01)
	char pad_B0_1 : 7; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	float SuccessiveAttackerReducedDamageDuration; // 0xb4(0x04)
	char bOverride_SuccessiveAttackerReducedDamageDuration : 1; // 0xb8(0x01)
	char pad_B8_1 : 7; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	float AttackNormalKnockbackPower; // 0xbc(0x04)
	char bOverride_AttackNormalKnockbackPower : 1; // 0xc0(0x01)
	char pad_C0_1 : 7; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	float MinDelayForAttack; // 0xc4(0x04)
	char bOverride_MinDelayForAttack : 1; // 0xc8(0x01)
	char pad_C8_1 : 7; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float MaxDelayForAttack; // 0xcc(0x04)
	char bOverride_MaxDelayForAttack : 1; // 0xd0(0x01)
	char pad_D0_1 : 7; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	float MinDelayForAttackFailed; // 0xd4(0x04)
	char bOverride_MinDelayForAttackFailed : 1; // 0xd8(0x01)
	char pad_D8_1 : 7; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	float MaxDelayForAttackFailed; // 0xdc(0x04)
	char bOverride_MaxDelayForAttackFailed : 1; // 0xe0(0x01)
	char pad_E0_1 : 7; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	float DelayForAttackAfterTargetBackUp; // 0xe4(0x04)
	char bOverride_DelayForAttackAfterTargetBackUp : 1; // 0xe8(0x01)
	char pad_E8_1 : 7; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	float OutOfRangeAttackProbability; // 0xec(0x04)
	char bOverride_OutOfRangeAttackProbability : 1; // 0xf0(0x01)
	char pad_F0_1 : 7; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	float AttackRangeExtension; // 0xf4(0x04)
	char bOverride_AttackRangeExtension : 1; // 0xf8(0x01)
	char pad_F8_1 : 7; // 0xf8(0x01)
	bool bForceGrab; // 0xf9(0x01)
	char bOverride_bForceGrab : 1; // 0xfa(0x01)
	char pad_FA_1 : 7; // 0xfa(0x01)
	bool bForcePairedAttack; // 0xfb(0x01)
	char bOverride_bForcePairedAttack : 1; // 0xfc(0x01)
	char pad_FC_1 : 7; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	float GrabAttackProbabilityOnCrouchedTarget; // 0x100(0x04)
	char bOverride_GrabAttackProbabilityOnCrouchedTarget : 1; // 0x104(0x01)
	char pad_104_1 : 7; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	float FreeStandingGrabRange; // 0x108(0x04)
	char bOverride_FreeStandingGrabRange : 1; // 0x10c(0x01)
	char pad_10C_1 : 7; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	float GrabAboveMinHeight; // 0x110(0x04)
	char bOverride_GrabAboveMinHeight : 1; // 0x114(0x01)
	char pad_114_1 : 7; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	float GrabAboveMaxHeight; // 0x118(0x04)
	char bOverride_GrabAboveMaxHeight : 1; // 0x11c(0x01)
	char pad_11C_1 : 7; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	float LungeMinDist; // 0x120(0x04)
	char bOverride_LungeMinDist : 1; // 0x124(0x01)
	char pad_124_1 : 7; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	float LungeMaxDist; // 0x128(0x04)
	char bOverride_LungeMaxDist : 1; // 0x12c(0x01)
	char pad_12C_1 : 7; // 0x12c(0x01)
	char pad_12D[0x3]; // 0x12d(0x03)
	float LungeCooldownTime; // 0x130(0x04)
	char bOverride_LungeCooldownTime : 1; // 0x134(0x01)
	char pad_134_1 : 7; // 0x134(0x01)
	char pad_135[0x3]; // 0x135(0x03)
};

// ScriptStruct OPP.DisturbanceConfig
// Size: 0x1c (Inherited: 0x00)
struct FDisturbanceConfig {
	bool bCanBeDisturbed; // 0x00(0x01)
	char bOverride_bCanBeDisturbed : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	bool bCanPlayStartle; // 0x02(0x01)
	char bOverride_bCanPlayStartle : 1; // 0x03(0x01)
	char pad_3_1 : 7; // 0x03(0x01)
	float MinDistanceForReaction; // 0x04(0x04)
	char bOverride_MinDistanceForReaction : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	bool bReactToImperativeDisturbances; // 0x09(0x01)
	char bOverride_bReactToImperativeDisturbances : 1; // 0x0a(0x01)
	char pad_A_1 : 7; // 0x0a(0x01)
	struct FStartleAnimConfig AmbientStartleConfig; // 0x0b(0x04)
	struct FStartleAnimConfig SuspiciousStartleConfig; // 0x0f(0x04)
	struct FStartleAnimConfig AlertedStartleConfig; // 0x13(0x04)
	struct FStartleAnimConfig AlertedFromUnawareStartleConfig; // 0x17(0x04)
	char pad_1B[0x1]; // 0x1b(0x01)
};

// ScriptStruct OPP.StartleAnimConfig
// Size: 0x04 (Inherited: 0x00)
struct FStartleAnimConfig {
	enum class EStartleType StartleType; // 0x00(0x01)
	char bOverride_StartleType : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	enum class EStartleSpeed StartleSpeed; // 0x02(0x01)
	char bOverride_StartleSpeed : 1; // 0x03(0x01)
	char pad_3_1 : 7; // 0x03(0x01)
};

// ScriptStruct OPP.AITargettingConfig
// Size: 0x74 (Inherited: 0x00)
struct FAITargettingConfig {
	bool bAlwaysTargetLastAttacker; // 0x00(0x01)
	char bOverride_bAlwaysTargetLastAttacker : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	bool bSwitchTargetAfterAttack; // 0x02(0x01)
	char bOverride_bSwitchTargetAfterAttack : 1; // 0x03(0x01)
	char pad_3_1 : 7; // 0x03(0x01)
	float TimeForSwitchTargetAfterAttack; // 0x04(0x04)
	char bOverride_TimeForSwitchTargetAfterAttack : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float TimeForSwitchTargetAfterBeingAttacked; // 0x0c(0x04)
	char bOverride_TimeForSwitchTargetAfterBeingAttacked : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float TimeForLastSwitchTargetBias; // 0x14(0x04)
	char bOverride_TimeForLastSwitchTargetBias : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float LastSwitchTargetBias; // 0x1c(0x04)
	char bOverride_LastSwitchTargetBias : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float BackDistanceMultiplier; // 0x24(0x04)
	char bOverride_BackDistanceMultiplier : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float HeightDistanceMultiplier; // 0x2c(0x04)
	char bOverride_HeightDistanceMultiplier : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float PlayerIncapacitatedBias; // 0x34(0x04)
	char bOverride_PlayerIncapacitatedBias : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float PlayerOutsideLeashBias; // 0x3c(0x04)
	char bOverride_PlayerOutsideLeashBias : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float PlayerNotVisibleBias; // 0x44(0x04)
	char bOverride_PlayerNotVisibleBias : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float PlayerIsHighPriorityBias; // 0x4c(0x04)
	char bOverride_PlayerIsHighPriorityBias : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float CurrentTargetBias; // 0x54(0x04)
	char bOverride_CurrentTargetBias : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float SwitchAfterAttackBias; // 0x5c(0x04)
	char bOverride_SwitchAfterAttackBias : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float AlreadyTargettedPenalty; // 0x64(0x04)
	char bOverride_AlreadyTargettedPenalty : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float GracePeriodAfterKnockdown; // 0x6c(0x04)
	char bOverride_GracePeriodAfterKnockdown : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	bool bCanForceExecutePlayers; // 0x71(0x01)
	char bOverride_bCanForceExecutePlayers : 1; // 0x72(0x01)
	char pad_72_1 : 7; // 0x72(0x01)
	char pad_73[0x1]; // 0x73(0x01)
};

// ScriptStruct OPP.AIAwarenessConfig
// Size: 0x1b0 (Inherited: 0x00)
struct FAIAwarenessConfig {
	bool bAllowAwarenessLoop; // 0x00(0x01)
	char bOverride_bAllowAwarenessLoop : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	bool bConvertHighPriorityToObvious; // 0x02(0x01)
	char bOverride_bConvertHighPriorityToObvious : 1; // 0x03(0x01)
	char pad_3_1 : 7; // 0x03(0x01)
	bool bCanEnterSuspicious; // 0x04(0x01)
	char bOverride_bCanEnterSuspicious : 1; // 0x05(0x01)
	char pad_5_1 : 7; // 0x05(0x01)
	bool bAlwaysAlerted; // 0x06(0x01)
	char bOverride_bAlwaysAlerted : 1; // 0x07(0x01)
	char pad_7_1 : 7; // 0x07(0x01)
	float MinimumStimulusStrenght; // 0x08(0x04)
	char bOverride_MinimumStimulusStrenght : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float MinDelayBetweenInvestigationTargetSwitch; // 0x10(0x04)
	char bOverride_MinDelayBetweenInvestigationTargetSwitch : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float MinDistanceForInvestigationTargetSwitch; // 0x18(0x04)
	char bOverride_MinDistanceForInvestigationTargetSwitch : 1; // 0x1c(0x01)
	char pad_1C_1 : 7; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float MinAngleForInvestigationTargetSwitch; // 0x20(0x04)
	char bOverride_MinAngleForInvestigationTargetSwitch : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FAIStimulusValueConfig UnawareStimulusMeterValues; // 0x28(0x40)
	char bOverride_UnawareStimulusMeterValues : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float TimeBeforeUnawareMeterDecay; // 0x6c(0x04)
	char bOverride_TimeBeforeUnawareMeterDecay : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float UnawareMeterDecaySpeed; // 0x74(0x04)
	char bOverride_UnawareMeterDecaySpeed : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	float TimeBeforeExitingChaseAfterLostSight; // 0x7c(0x04)
	char bOverride_TimeBeforeExitingChaseAfterLostSight : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float TimeBeforeExitingChaseAfterInvalidExecute; // 0x84(0x04)
	char bOverride_TimeBeforeExitingChaseAfterInvalidExecute : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	struct FAIStimulusOptionConfig DirectToAlertedFromUnawareStimulus; // 0x89(0x10)
	char bOverride_DirectToAlertedFromUnawareStimulus : 1; // 0x99(0x01)
	char pad_99_1 : 7; // 0x99(0x01)
	char pad_9A[0x2]; // 0x9a(0x02)
	struct FAIStimulusValueConfig SuspiciousStimulusMeterValues; // 0x9c(0x40)
	char bOverride_SuspiciousStimulusMeterValues : 1; // 0xdc(0x01)
	char pad_DC_1 : 7; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	float MaxSuspiciousInvestigationTime; // 0xe0(0x04)
	char bOverride_MaxSuspiciousInvestigationTime : 1; // 0xe4(0x01)
	char pad_E4_1 : 7; // 0xe4(0x01)
	struct FAIStimulusOptionConfig StimulusForProgressiveAlertedMeter; // 0xe5(0x10)
	char bOverride_StimulusForProgressiveAlertedMeter : 1; // 0xf5(0x01)
	char pad_F5_1 : 7; // 0xf5(0x01)
	char pad_F6[0x2]; // 0xf6(0x02)
	struct FAIStimulusValueConfig ProgressiveAlertedMeterValues; // 0xf8(0x40)
	char bOverride_ProgressiveAlertedMeterValues : 1; // 0x138(0x01)
	char pad_138_1 : 7; // 0x138(0x01)
	char pad_139[0x3]; // 0x139(0x03)
	float MaxAlertedSourceInvestigationTime; // 0x13c(0x04)
	char bOverride_MaxAlertedSourceInvestigationTime : 1; // 0x140(0x01)
	char pad_140_1 : 7; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	struct FAIStimulusValueConfig StimuliPriorities; // 0x144(0x40)
	char bOverride_StimuliPriorities : 1; // 0x184(0x01)
	char pad_184_1 : 7; // 0x184(0x01)
	char pad_185[0x3]; // 0x185(0x03)
	float MaxQueuedStimulusTime; // 0x188(0x04)
	char bOverride_MaxQueuedStimulusTime : 1; // 0x18c(0x01)
	char pad_18C_1 : 7; // 0x18c(0x01)
	bool bBreakChaseForHighPriorityEvent; // 0x18d(0x01)
	char bOverride_bBreakChaseForHighPriorityEvent : 1; // 0x18e(0x01)
	char pad_18E_1 : 7; // 0x18e(0x01)
	char pad_18F[0x1]; // 0x18f(0x01)
	float DistanceToBreakChaseForHighPriorityEvent; // 0x190(0x04)
	char bOverride_DistanceToBreakChaseForHighPriorityEvent : 1; // 0x194(0x01)
	char pad_194_1 : 7; // 0x194(0x01)
	char pad_195[0x3]; // 0x195(0x03)
	float DistanceFromHighPriorityToResumeChase; // 0x198(0x04)
	char bOverride_DistanceFromHighPriorityToResumeChase : 1; // 0x19c(0x01)
	char pad_19C_1 : 7; // 0x19c(0x01)
	bool bCanGuessPlayerEnteredIsolatedSpot; // 0x19d(0x01)
	char bOverride_bCanGuessPlayerEnteredIsolatedSpot : 1; // 0x19e(0x01)
	char pad_19E_1 : 7; // 0x19e(0x01)
	char pad_19F[0x1]; // 0x19f(0x01)
	float MaxLastSeenDistFromHidingSpotForGuess; // 0x1a0(0x04)
	char bOverride_MaxLastSeenDistFromHidingSpotForGuess : 1; // 0x1a4(0x01)
	char pad_1A4_1 : 7; // 0x1a4(0x01)
	char pad_1A5[0x3]; // 0x1a5(0x03)
	float MaxHidingSpotDistFromOtherSpotForGuess; // 0x1a8(0x04)
	char bOverride_MaxHidingSpotDistFromOtherSpotForGuess : 1; // 0x1ac(0x01)
	char pad_1AC_1 : 7; // 0x1ac(0x01)
	char pad_1AD[0x3]; // 0x1ad(0x03)
};

// ScriptStruct OPP.AIStimulusValueConfig
// Size: 0x40 (Inherited: 0x00)
struct FAIStimulusValueConfig {
	float PartialPlayerVisibilityValue; // 0x00(0x04)
	char bOverride_PartialPlayerVisibilityValue : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float FullPlayerVisibilityValue; // 0x08(0x04)
	char bOverride_FullPlayerVisibilityValue : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float LostChasedPlayerValue; // 0x10(0x04)
	char bOverride_LostChasedPlayerValue : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float MinorAudioValue; // 0x18(0x04)
	char bOverride_MinorAudioValue : 1; // 0x1c(0x01)
	char pad_1C_1 : 7; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float NormalAudioValue; // 0x20(0x04)
	char bOverride_NormalAudioValue : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float ObviousAudioValue; // 0x28(0x04)
	char bOverride_ObviousAudioValue : 1; // 0x2c(0x01)
	char pad_2C_1 : 7; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float SurfaceMovementValue; // 0x30(0x04)
	char bOverride_SurfaceMovementValue : 1; // 0x34(0x01)
	char pad_34_1 : 7; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float HighPriorityEventValue; // 0x38(0x04)
	char bOverride_HighPriorityEventValue : 1; // 0x3c(0x01)
	char pad_3C_1 : 7; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct OPP.AIStimulusOptionConfig
// Size: 0x10 (Inherited: 0x00)
struct FAIStimulusOptionConfig {
	bool bPartialPlayerVisibility; // 0x00(0x01)
	char bOverride_bPartialPlayerVisibility : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	bool bFullPlayerVisibility; // 0x02(0x01)
	char bOverride_bFullPlayerVisibility : 1; // 0x03(0x01)
	char pad_3_1 : 7; // 0x03(0x01)
	bool bLostChasedPlayer; // 0x04(0x01)
	char bOverride_bLostChasedPlayer : 1; // 0x05(0x01)
	char pad_5_1 : 7; // 0x05(0x01)
	bool bMinorAudio; // 0x06(0x01)
	char bOverride_bMinorAudio : 1; // 0x07(0x01)
	char pad_7_1 : 7; // 0x07(0x01)
	bool bNormalAudio; // 0x08(0x01)
	char bOverride_bNormalAudio : 1; // 0x09(0x01)
	char pad_9_1 : 7; // 0x09(0x01)
	bool bObviousAudio; // 0x0a(0x01)
	char bOverride_bObviousAudio : 1; // 0x0b(0x01)
	char pad_B_1 : 7; // 0x0b(0x01)
	bool bSurfaceMovement; // 0x0c(0x01)
	char bOverride_bSurfaceMovement : 1; // 0x0d(0x01)
	char pad_D_1 : 7; // 0x0d(0x01)
	bool bHighPriorityEvent; // 0x0e(0x01)
	char bOverride_bHighPriorityEvent : 1; // 0x0f(0x01)
	char pad_F_1 : 7; // 0x0f(0x01)
};

// ScriptStruct OPP.AIHearingConfig
// Size: 0x1c (Inherited: 0x00)
struct FAIHearingConfig {
	bool bCanHearPlayers; // 0x00(0x01)
	char bOverride_bCanHearPlayers : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float FullHearingDistance; // 0x04(0x04)
	char bOverride_FullHearingDistance : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float MaxHearingDistance; // 0x0c(0x04)
	char bOverride_MaxHearingDistance : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float AudioPerceptionScaling; // 0x14(0x04)
	char bOverride_AudioPerceptionScaling : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct OPP.AIVisionConfig
// Size: 0x158 (Inherited: 0x00)
struct FAIVisionConfig {
	bool bCanSeePlayers; // 0x00(0x01)
	char bOverride_bCanSeePlayers : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	bool bAlwaysSeePlayers; // 0x02(0x01)
	char bOverride_bAlwaysSeePlayers : 1; // 0x03(0x01)
	char pad_3_1 : 7; // 0x03(0x01)
	bool bIgnoreDarkness; // 0x04(0x01)
	char bOverride_bIgnoreDarkness : 1; // 0x05(0x01)
	char pad_5_1 : 7; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct FAIVisionCone FullVisibilityCone; // 0x08(0x30)
	char bOverride_FullVisibilityCone : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FAIVisionCone PartialVisibilityCone; // 0x3c(0x30)
	char bOverride_PartialVisibilityCone : 1; // 0x6c(0x01)
	char pad_6C_1 : 7; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	struct FAIVisionCone DarknessFullVisibilityCone; // 0x70(0x30)
	char bOverride_DarknessFullVisibilityCone : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	struct FAIVisionCone DarknessPartialVisibilityCone; // 0xa4(0x30)
	char bOverride_DarknessPartialVisibilityCone : 1; // 0xd4(0x01)
	char pad_D4_1 : 7; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	float CloseDistance_FullVisibility; // 0xd8(0x04)
	char bOverride_CloseDistance_FullVisibility : 1; // 0xdc(0x01)
	char pad_DC_1 : 7; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	float CloseDistance_PartialVisibility; // 0xe0(0x04)
	char bOverride_CloseDistance_PartialVisibility : 1; // 0xe4(0x01)
	char pad_E4_1 : 7; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	float SeeOnlyEyesVisionMultiplier; // 0xe8(0x04)
	char bOverride_SeeOnlyEyesVisionMultiplier : 1; // 0xec(0x01)
	char pad_EC_1 : 7; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	float SeeOnlyTorsoVisionMultiplier; // 0xf0(0x04)
	char bOverride_SeeOnlyTorsoVisionMultiplier : 1; // 0xf4(0x01)
	char pad_F4_1 : 7; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	float DarknessVisionMultiplier; // 0xf8(0x04)
	char bOverride_DarknessVisionMultiplier : 1; // 0xfc(0x01)
	char pad_FC_1 : 7; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	float CloseRangeVisionMultiplier; // 0x100(0x04)
	char bOverride_CloseRangeVisionMultiplier : 1; // 0x104(0x01)
	char pad_104_1 : 7; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	float StandingStillVisionMultiplier; // 0x108(0x04)
	char bOverride_StandingStillVisionMultiplier : 1; // 0x10c(0x01)
	char pad_10C_1 : 7; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	float WalkingVisionMultiplier; // 0x110(0x04)
	char bOverride_WalkingVisionMultiplier : 1; // 0x114(0x01)
	char pad_114_1 : 7; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	float RunningVisionMultiplier; // 0x118(0x04)
	char bOverride_RunningVisionMultiplier : 1; // 0x11c(0x01)
	char pad_11C_1 : 7; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	float CrouchingVisionMultiplier; // 0x120(0x04)
	char bOverride_CrouchingVisionMultiplier : 1; // 0x124(0x01)
	char pad_124_1 : 7; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	float HidespotPeekingVisionMultiplier; // 0x128(0x04)
	char bOverride_HidespotPeekingVisionMultiplier : 1; // 0x12c(0x01)
	char pad_12C_1 : 7; // 0x12c(0x01)
	char pad_12D[0x3]; // 0x12d(0x03)
	float HidespotHiddenVisionMultiplier; // 0x130(0x04)
	char bOverride_HidespotHiddenVisionMultiplier : 1; // 0x134(0x01)
	char pad_134_1 : 7; // 0x134(0x01)
	char pad_135[0x3]; // 0x135(0x03)
	float MinimumVisionMultiplierToBeSeen; // 0x138(0x04)
	char bOverride_MinimumVisionMultiplierToBeSeen : 1; // 0x13c(0x01)
	char pad_13C_1 : 7; // 0x13c(0x01)
	char pad_13D[0x3]; // 0x13d(0x03)
	float FullVisToPartialVisVisionMultiplierThreshold; // 0x140(0x04)
	char bOverride_FullVisToPartialVisVisionMultiplierThreshold : 1; // 0x144(0x01)
	char pad_144_1 : 7; // 0x144(0x01)
	char pad_145[0x3]; // 0x145(0x03)
	float BotVisionCheckSlicing; // 0x148(0x04)
	char bOverride_BotVisionCheckSlicing : 1; // 0x14c(0x01)
	char pad_14C_1 : 7; // 0x14c(0x01)
	char pad_14D[0x3]; // 0x14d(0x03)
	int32_t TotalNumberOfClearChecks; // 0x150(0x04)
	char bOverride_TotalNumberOfClearChecks : 1; // 0x154(0x01)
	char pad_154_1 : 7; // 0x154(0x01)
	char pad_155[0x3]; // 0x155(0x03)
};

// ScriptStruct OPP.AIVisionCone
// Size: 0x30 (Inherited: 0x00)
struct FAIVisionCone {
	float MaxForwardDistance; // 0x00(0x04)
	char bOverride_MaxForwardDistance : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float MaxPeripheralDistance; // 0x08(0x04)
	char bOverride_MaxPeripheralDistance : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float InnerHorzAngle; // 0x10(0x04)
	char bOverride_InnerHorzAngle : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float OuterHorzAngle; // 0x18(0x04)
	char bOverride_OuterHorzAngle : 1; // 0x1c(0x01)
	char pad_1C_1 : 7; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float InnerVertAngle; // 0x20(0x04)
	char bOverride_InnerVertAngle : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float OuterVertAngle; // 0x28(0x04)
	char bOverride_OuterVertAngle : 1; // 0x2c(0x01)
	char pad_2C_1 : 7; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct OPP.AIHealthConfig
// Size: 0x24 (Inherited: 0x00)
struct FAIHealthConfig {
	bool bRegenHealth; // 0x00(0x01)
	char bOverride_bRegenHealth : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float RegenDelay; // 0x04(0x04)
	char bOverride_RegenDelay : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float RegenRate; // 0x0c(0x04)
	char bOverride_RegenRate : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	bool bCanBeKnockedOut; // 0x11(0x01)
	char bOverride_bCanBeKnockedOut : 1; // 0x12(0x01)
	char pad_12_1 : 7; // 0x12(0x01)
	char pad_13[0x1]; // 0x13(0x01)
	float MinKnockoutDuration; // 0x14(0x04)
	char bOverride_MinKnockoutDuration : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float MaxKnockoutDuration; // 0x1c(0x04)
	char bOverride_MaxKnockoutDuration : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct OPP.AIAdvancedSpeedConfig
// Size: 0xa0 (Inherited: 0x00)
struct FAIAdvancedSpeedConfig {
	float AccelCoeffNormal; // 0x00(0x04)
	char bOverride_AccelCoeffNormal : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float AccelCoeffAfterTurn; // 0x08(0x04)
	char bOverride_AccelCoeffAfterTurn : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float DecelCoeffNormal; // 0x10(0x04)
	char bOverride_DecelCoeffNormal : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float DecelCoeffSharpTurn; // 0x18(0x04)
	char bOverride_DecelCoeffSharpTurn : 1; // 0x1c(0x01)
	char pad_1C_1 : 7; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float DecelCoeffApproachDest; // 0x20(0x04)
	char bOverride_DecelCoeffApproachDest : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float DestApprochTargetDecel; // 0x28(0x04)
	char bOverride_DestApprochTargetDecel : 1; // 0x2c(0x01)
	char pad_2C_1 : 7; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float SmallRotationSpeed; // 0x30(0x04)
	char bOverride_SmallRotationSpeed : 1; // 0x34(0x01)
	char pad_34_1 : 7; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float HighRotationSpeed; // 0x38(0x04)
	char bOverride_HighRotationSpeed : 1; // 0x3c(0x01)
	char pad_3C_1 : 7; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float SpeedForRotationSlowDown; // 0x40(0x04)
	char bOverride_SpeedForRotationSlowDown : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float SpeedForMaxRotationSlowDown; // 0x48(0x04)
	char bOverride_SpeedForMaxRotationSlowDown : 1; // 0x4c(0x01)
	char pad_4C_1 : 7; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float SlowedDownSpeedForRotation; // 0x50(0x04)
	char bOverride_SlowedDownSpeedForRotation : 1; // 0x54(0x01)
	char pad_54_1 : 7; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float TurnApproachDistForStartSlowDown; // 0x58(0x04)
	char bOverride_TurnApproachDistForStartSlowDown : 1; // 0x5c(0x01)
	char pad_5C_1 : 7; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	float TurnApproachDistForMaxSlowDown; // 0x60(0x04)
	char bOverride_TurnApproachDistForMaxSlowDown : 1; // 0x64(0x01)
	char pad_64_1 : 7; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	float MinAnticipatedAngleForSlowDown; // 0x68(0x04)
	char bOverride_MinAnticipatedAngleForSlowDown : 1; // 0x6c(0x01)
	char pad_6C_1 : 7; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	float MaxAnticipatedAngleForSlowDown; // 0x70(0x04)
	char bOverride_MaxAnticipatedAngleForSlowDown : 1; // 0x74(0x01)
	char pad_74_1 : 7; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	float MaxPlayerAwaySpeedForSlowdown; // 0x78(0x04)
	char bOverride_MaxPlayerAwaySpeedForSlowdown : 1; // 0x7c(0x01)
	char pad_7C_1 : 7; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	float MinDistToObstacle; // 0x80(0x04)
	char bOverride_MinDistToObstacle : 1; // 0x84(0x01)
	char pad_84_1 : 7; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	float MaxDistToObstacle; // 0x88(0x04)
	char bOverride_MaxDistToObstacle : 1; // 0x8c(0x01)
	char pad_8C_1 : 7; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	float SlowDownAfterTurnDuration; // 0x90(0x04)
	char bOverride_SlowDownAfterTurnDuration : 1; // 0x94(0x01)
	char pad_94_1 : 7; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	float MaxReasonableGroundSpeed; // 0x98(0x04)
	char bOverride_MaxReasonableGroundSpeed : 1; // 0x9c(0x01)
	char pad_9C_1 : 7; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
};

// ScriptStruct OPP.AISpeedConfig
// Size: 0x130 (Inherited: 0x00)
struct FAISpeedConfig {
	float BaseSpeed; // 0x00(0x04)
	char bOverride_BaseSpeed : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float ChaseSpeed; // 0x08(0x04)
	char bOverride_ChaseSpeed : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float InvestigationSpeedAware; // 0x10(0x04)
	char bOverride_InvestigationSpeedAware : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float InvestigationSpeedUnaware; // 0x18(0x04)
	char bOverride_InvestigationSpeedUnaware : 1; // 0x1c(0x01)
	char pad_1C_1 : 7; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float RetirementSpeed; // 0x20(0x04)
	char bOverride_RetirementSpeed : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float PlayerAvoidanceSpeed; // 0x28(0x04)
	char bOverride_PlayerAvoidanceSpeed : 1; // 0x2c(0x01)
	char pad_2C_1 : 7; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float BehaviorAccelRate; // 0x30(0x04)
	char bOverride_BehaviorAccelRate : 1; // 0x34(0x01)
	char pad_34_1 : 7; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float BehaviorDecelRate; // 0x38(0x04)
	char bOverride_BehaviorDecelRate : 1; // 0x3c(0x01)
	char pad_3C_1 : 7; // 0x3c(0x01)
	bool bInstantAccel; // 0x3d(0x01)
	char bOverride_bInstantAccel : 1; // 0x3e(0x01)
	char pad_3E_1 : 7; // 0x3e(0x01)
	bool bInstantDecel; // 0x3f(0x01)
	char bOverride_bInstantDecel : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float DarknessFactor; // 0x44(0x04)
	char bOverride_DarknessFactor : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	bool bEnableSprint; // 0x49(0x01)
	char bOverride_bEnableSprint : 1; // 0x4a(0x01)
	char pad_4A_1 : 7; // 0x4a(0x01)
	char pad_4B[0x1]; // 0x4b(0x01)
	float MaxSprintSpeedGain; // 0x4c(0x04)
	char bOverride_MaxSprintSpeedGain : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float SprintAcceleration; // 0x54(0x04)
	char bOverride_SprintAcceleration : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float SprintDeceleration; // 0x5c(0x04)
	char bOverride_SprintDeceleration : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float MinSpeedForSprint; // 0x64(0x04)
	char bOverride_MinSpeedForSprint : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float MinStraightDistForSprintAccel; // 0x6c(0x04)
	char bOverride_MinStraightDistForSprintAccel : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float MinStraightDistForSprintKeep; // 0x74(0x04)
	char bOverride_MinStraightDistForSprintKeep : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	bool bEnableNPCStamina; // 0x79(0x01)
	char bOverride_bEnableNPCStamina : 1; // 0x7a(0x01)
	char pad_7A_1 : 7; // 0x7a(0x01)
	char pad_7B[0x1]; // 0x7b(0x01)
	float MaxStaminaSpeedLoss; // 0x7c(0x04)
	char bOverride_MaxStaminaSpeedLoss : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float StaminaLevelForStartSlowdown; // 0x84(0x04)
	char bOverride_StaminaLevelForStartSlowdown : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float MinSpeedForStaminaConsumption; // 0x8c(0x04)
	char bOverride_MinSpeedForStaminaConsumption : 1; // 0x90(0x01)
	char pad_90_1 : 7; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	float MaxSpeedForStaminaConsumption; // 0x94(0x04)
	char bOverride_MaxSpeedForStaminaConsumption : 1; // 0x98(0x01)
	char pad_98_1 : 7; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	float MaxStaminaComsumptionRate; // 0x9c(0x04)
	char bOverride_MaxStaminaComsumptionRate : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	float StaminaRecoveryRate; // 0xa4(0x04)
	char bOverride_StaminaRecoveryRate : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	float FaceOffAdjustSpeedBoost; // 0xac(0x04)
	char bOverride_FaceOffAdjustSpeedBoost : 1; // 0xb0(0x01)
	char pad_B0_1 : 7; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	float AttackMercyFactor; // 0xb4(0x04)
	char bOverride_AttackMercyFactor : 1; // 0xb8(0x01)
	char pad_B8_1 : 7; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	float AttackMercyDuration; // 0xbc(0x04)
	char bOverride_AttackMercyDuration : 1; // 0xc0(0x01)
	char pad_C0_1 : 7; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	float GroupChasingRestartSpeedDuration; // 0xc4(0x04)
	char bOverride_GroupChasingRestartSpeedDuration : 1; // 0xc8(0x01)
	char pad_C8_1 : 7; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float ChaseNoVisibilityFactor; // 0xcc(0x04)
	char bOverride_ChaseNoVisibilityFactor : 1; // 0xd0(0x01)
	char pad_D0_1 : 7; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	float SightlessChaseSlowdownDuration; // 0xd4(0x04)
	char bOverride_SightlessChaseSlowdownDuration : 1; // 0xd8(0x01)
	char pad_D8_1 : 7; // 0xd8(0x01)
	bool bNoVisibleRubberBandingSlowDown; // 0xd9(0x01)
	char bOverride_bNoVisibleRubberBandingSlowDown : 1; // 0xda(0x01)
	char pad_DA_1 : 7; // 0xda(0x01)
	bool bRubberBandingRequiresPlayerRun; // 0xdb(0x01)
	char bOverride_bRubberBandingRequiresPlayerRun : 1; // 0xdc(0x01)
	char pad_DC_1 : 7; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	float RubberBandingDelay; // 0xe0(0x04)
	char bOverride_RubberBandingDelay : 1; // 0xe4(0x01)
	char pad_E4_1 : 7; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	float RubberBandingMinDist; // 0xe8(0x04)
	char bOverride_RubberBandingMinDist : 1; // 0xec(0x01)
	char pad_EC_1 : 7; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	float RubberBandingMaxDist; // 0xf0(0x04)
	char bOverride_RubberBandingMaxDist : 1; // 0xf4(0x01)
	char pad_F4_1 : 7; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	float RubberBandingFactorMinDist; // 0xf8(0x04)
	char bOverride_RubberBandingFactorMinDist : 1; // 0xfc(0x01)
	char pad_FC_1 : 7; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	float RubberBandingFactorMaxDist; // 0x100(0x04)
	char bOverride_RubberBandingFactorMaxDist : 1; // 0x104(0x01)
	char pad_104_1 : 7; // 0x104(0x01)
	bool bNoAdjustmentForSlopes; // 0x105(0x01)
	char bOverride_bNoAdjustmentForSlopes : 1; // 0x106(0x01)
	char pad_106_1 : 7; // 0x106(0x01)
	char pad_107[0x1]; // 0x107(0x01)
	float MaxSpeedPenaltyForUpSlope; // 0x108(0x04)
	char bOverride_MaxSpeedPenaltyForUpSlope : 1; // 0x10c(0x01)
	char pad_10C_1 : 7; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	float MaxSpeedGainForDownSlope; // 0x110(0x04)
	char bOverride_MaxSpeedGainForDownSlope : 1; // 0x114(0x01)
	char pad_114_1 : 7; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	float SpeedCapForLowHealth; // 0x118(0x04)
	char bOverride_SpeedCapForLowHealth : 1; // 0x11c(0x01)
	char pad_11C_1 : 7; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	float LowHealthForSpeedCap; // 0x120(0x04)
	char bOverride_LowHealthForSpeedCap : 1; // 0x124(0x01)
	char pad_124_1 : 7; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	float HealthForSpeedCapStart; // 0x128(0x04)
	char bOverride_HealthForSpeedCapStart : 1; // 0x12c(0x01)
	char pad_12C_1 : 7; // 0x12c(0x01)
	char pad_12D[0x3]; // 0x12d(0x03)
};

// ScriptStruct OPP.AIGlobalConfig
// Size: 0x40 (Inherited: 0x00)
struct FAIGlobalConfig {
	enum class ENPCFlavor NPCFlavor; // 0x00(0x01)
	char bOverride_NPCFlavor : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	bool bIgnorePlayers; // 0x02(0x01)
	char bOverride_bIgnorePlayers : 1; // 0x03(0x01)
	char pad_3_1 : 7; // 0x03(0x01)
	bool bStartNeutral; // 0x04(0x01)
	char bOverride_bStartNeutral : 1; // 0x05(0x01)
	char pad_5_1 : 7; // 0x05(0x01)
	bool bChasePlayers; // 0x06(0x01)
	char bOverride_bChasePlayers : 1; // 0x07(0x01)
	char pad_7_1 : 7; // 0x07(0x01)
	bool bAlwaysChase; // 0x08(0x01)
	char bOverride_bAlwaysChase : 1; // 0x09(0x01)
	char pad_9_1 : 7; // 0x09(0x01)
	bool bAlwaysIntense; // 0x0a(0x01)
	char bOverride_bAlwaysIntense : 1; // 0x0b(0x01)
	char pad_B_1 : 7; // 0x0b(0x01)
	bool bCanPlayLookAts; // 0x0c(0x01)
	char bOverride_bCanPlayLookAts : 1; // 0x0d(0x01)
	char pad_D_1 : 7; // 0x0d(0x01)
	bool bCanTakeDamage; // 0x0e(0x01)
	char bOverride_bCanTakeDamage : 1; // 0x0f(0x01)
	char pad_F_1 : 7; // 0x0f(0x01)
	int32_t BaseHealth; // 0x10(0x04)
	char bOverride_BaseHealth : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	enum class ENPCWeapon Weapon; // 0x15(0x01)
	char bOverride_Weapon : 1; // 0x16(0x01)
	char pad_16_1 : 7; // 0x16(0x01)
	bool bRelevantForMusic; // 0x17(0x01)
	char bOverride_bRelevantForMusic : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float MaxClimbHeight; // 0x1c(0x04)
	char bOverride_MaxClimbHeight : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float MaxDropHeight; // 0x24(0x04)
	char bOverride_MaxDropHeight : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	enum class EBotDoorPassBehavior DoorPassBehavior; // 0x29(0x01)
	char bOverride_DoorPassBehavior : 1; // 0x2a(0x01)
	char pad_2A_1 : 7; // 0x2a(0x01)
	char pad_2B[0x1]; // 0x2b(0x01)
	float DoorCloseProbability; // 0x2c(0x04)
	char bOverride_DoorCloseProbability : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float DoorLockProbability; // 0x34(0x04)
	char bOverride_DoorLockProbability : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	enum class ENPCHitReactionType InterruptionReactionType; // 0x39(0x01)
	char bOverride_InterruptionReactionType : 1; // 0x3a(0x01)
	char pad_3A_1 : 7; // 0x3a(0x01)
	enum class ENPCHitReactionType UpgradedInterruptionReactionType; // 0x3b(0x01)
	char bOverride_UpgradedInterruptionReactionType : 1; // 0x3c(0x01)
	char pad_3C_1 : 7; // 0x3c(0x01)
	enum class ENPCHitReactionType FallingReactionType; // 0x3d(0x01)
	char bOverride_FallingReactionType : 1; // 0x3e(0x01)
	char pad_3E_1 : 7; // 0x3e(0x01)
	char pad_3F[0x1]; // 0x3f(0x01)
};

// ScriptStruct OPP.AIDirectorDebugInfo
// Size: 0xc0 (Inherited: 0x00)
struct FAIDirectorDebugInfo {
	bool bSystemicSpawningEnabled; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct URBAIDirectorConfig* AIDirectorConfig; // 0x08(0x08)
	struct TArray<struct FAIDirectorPerPlayerDebugInfo> PlayerInfos; // 0x10(0x10)
	struct FRandomNPCSpawningDebugInfo RandomSpawning; // 0x20(0x10)
	struct TArray<struct FActiveBotDebugInfo> ActiveSummonedBots; // 0x30(0x10)
	struct TArray<struct FString> RetiringNPCs; // 0x40(0x10)
	struct TArray<struct FString> RetirementPendingNPCs; // 0x50(0x10)
	struct TArray<struct FString> NPCsInLimbo; // 0x60(0x10)
	struct FAdversityData Adversity; // 0x70(0x08)
	struct FDynamicPressureData DynamicPressure; // 0x78(0x18)
	struct TArray<struct FSummonedBotDebugInfo> SummonedBotsLog; // 0x90(0x10)
	struct TArray<struct FPressureEventDebugData> PressureEventLog; // 0xa0(0x10)
	struct TArray<struct FFailedBotSummonDebugInfo> LastFailedSummons; // 0xb0(0x10)
};

// ScriptStruct OPP.FailedBotSummonDebugInfo
// Size: 0x28 (Inherited: 0x00)
struct FFailedBotSummonDebugInfo {
	float StageTime; // 0x00(0x04)
	enum class ENPCType NPCType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FString RuleName; // 0x08(0x10)
	struct FString UnavailabilityReason; // 0x18(0x10)
};

// ScriptStruct OPP.PressureEventDebugData
// Size: 0x10 (Inherited: 0x00)
struct FPressureEventDebugData {
	bool bConsumptionEvent; // 0x00(0x01)
	enum class EPressureEventType EventType; // 0x01(0x01)
	enum class EPressureConsumptionType ConsumptionType; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	int32_t DeltaPoints; // 0x04(0x04)
	int32_t ResultingAccumulator; // 0x08(0x04)
	float EventStageTime; // 0x0c(0x04)
};

// ScriptStruct OPP.SummonedBotDebugInfo
// Size: 0x48 (Inherited: 0x00)
struct FSummonedBotDebugInfo {
	enum class ENPCType NPCType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString BotName; // 0x08(0x10)
	float SpawnedStageTime; // 0x18(0x04)
	float RetiredStageTime; // 0x1c(0x04)
	float MinTimeBeforeRetirement; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString InitialTargetPlayer; // 0x28(0x10)
	struct FString RuleName; // 0x38(0x10)
};

// ScriptStruct OPP.DynamicPressureData
// Size: 0x18 (Inherited: 0x00)
struct FDynamicPressureData {
	int32_t PressureAccumulator; // 0x00(0x04)
	struct FPressureBeatData PressureBeat; // 0x04(0x04)
	struct FAdversityPressureData AdversityPressure; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct OPP.AdversityPressureData
// Size: 0x0c (Inherited: 0x00)
struct FAdversityPressureData {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct OPP.PressureBeatData
// Size: 0x04 (Inherited: 0x00)
struct FPressureBeatData {
	float NextBeatScheduledStageTime; // 0x00(0x04)
};

// ScriptStruct OPP.AdversityData
// Size: 0x08 (Inherited: 0x00)
struct FAdversityData {
	float CurrentAdversity; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
};

// ScriptStruct OPP.ActiveBotDebugInfo
// Size: 0x28 (Inherited: 0x00)
struct FActiveBotDebugInfo {
	enum class ENPCType NPCType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString BotName; // 0x08(0x10)
	float SpawnedStageTime; // 0x18(0x04)
	enum class EAIActivity Activity; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float MinTimeLeftBeforeRetirement; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct OPP.RandomNPCSpawningDebugInfo
// Size: 0x10 (Inherited: 0x00)
struct FRandomNPCSpawningDebugInfo {
	struct TArray<struct FAISpawnWaveDebugInfo> SpawnWaves; // 0x00(0x10)
};

// ScriptStruct OPP.AISpawnWaveDebugInfo
// Size: 0x60 (Inherited: 0x00)
struct FAISpawnWaveDebugInfo {
	bool bTriggered; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float StageTime; // 0x04(0x04)
	struct FString RndConfigAssetName; // 0x08(0x10)
	struct FString ConditionsStr; // 0x18(0x10)
	float WaveTargetDifficulty; // 0x28(0x04)
	float FinalDifficultyScore; // 0x2c(0x04)
	float DifficultyTolerance; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FAIRandomSpawningDebugSelectedItem> SelectedSpawners; // 0x38(0x10)
	struct TArray<struct FAIRandomSpawningDebugArchetypeInfo> Archetypes; // 0x48(0x10)
	int32_t NumSpawnersWithoutArchetype; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct OPP.AIRandomSpawningDebugArchetypeInfo
// Size: 0x28 (Inherited: 0x00)
struct FAIRandomSpawningDebugArchetypeInfo {
	struct ARBNPC* PawnClass; // 0x00(0x08)
	struct URBAIConfig* configAsset; // 0x08(0x08)
	float TotalDifficultyContrib; // 0x10(0x04)
	int32_t SpawnedCount; // 0x14(0x04)
	int32_t ClassMinCount; // 0x18(0x04)
	int32_t ClassMaxCount; // 0x1c(0x04)
	int32_t ArchMaxCount; // 0x20(0x04)
	int32_t IgnoredCount; // 0x24(0x04)
};

// ScriptStruct OPP.AIRandomSpawningDebugSelectedItem
// Size: 0x20 (Inherited: 0x00)
struct FAIRandomSpawningDebugSelectedItem {
	struct ARBAISpawner* spawner; // 0x00(0x08)
	struct URBHidespotComponent* hidespot; // 0x08(0x08)
	struct URBAIConfig* configAsset; // 0x10(0x08)
	float DifficultyContrib; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct OPP.AIDirectorPerPlayerDebugInfo
// Size: 0x28 (Inherited: 0x00)
struct FAIDirectorPerPlayerDebugInfo {
	struct ARBPlayer* Player; // 0x00(0x08)
	enum class EPlayerProximityStatus PlayerProximityStatus; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float PlayerProximityStatusDuration; // 0x0c(0x04)
	float SmoothedPlayerProximityValue; // 0x10(0x04)
	float InstantPlayerProximityValue; // 0x14(0x04)
	enum class EPlayerRushingStatus PlayerRushingStatus; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float PlayerRushingStatusDuration; // 0x1c(0x04)
	float CurrentPlayerRushingMeter; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct OPP.StandardBotRespawnData
// Size: 0x20 (Inherited: 0x00)
struct FStandardBotRespawnData {
	struct ARBAISpawner* spawner; // 0x00(0x08)
	enum class ENPCType NPCType; // 0x08(0x01)
	char pad_9[0x17]; // 0x09(0x17)
};

// ScriptStruct OPP.HotPotatoEnemiesData
// Size: 0x18 (Inherited: 0x00)
struct FHotPotatoEnemiesData {
	struct ARBHotPotatoObjectiveCoordinator* ActiveHotPotatoCoordinator; // 0x00(0x08)
	struct TArray<struct FHotPotatoEnemyData> Enemies; // 0x08(0x10)
};

// ScriptStruct OPP.HotPotatoEnemyData
// Size: 0x10 (Inherited: 0x00)
struct FHotPotatoEnemyData {
	struct ARBNPC* NPC; // 0x00(0x08)
	struct ARBHotPotato* TargetPotato; // 0x08(0x08)
};

// ScriptStruct OPP.RandomSpecialistSpawningData
// Size: 0x28 (Inherited: 0x00)
struct FRandomSpecialistSpawningData {
	char pad_0[0x8]; // 0x00(0x08)
	bool bSpawningAvailable; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString UnavailabilityReason; // 0x10(0x10)
	char pad_20[0x4]; // 0x20(0x04)
	int32_t NumSpawned; // 0x24(0x04)
};

// ScriptStruct OPP.SpawnRuleData
// Size: 0x10 (Inherited: 0x00)
struct FSpawnRuleData {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct OPP.PlayerRushingData
// Size: 0x18 (Inherited: 0x00)
struct FPlayerRushingData {
	struct TArray<struct FPerPlayerRushingData> PlayerStatus; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct OPP.PerPlayerRushingData
// Size: 0x18 (Inherited: 0x00)
struct FPerPlayerRushingData {
	struct ARBPlayer* Player; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct OPP.PlayerProximityData
// Size: 0x28 (Inherited: 0x00)
struct FPlayerProximityData {
	struct TArray<struct FPlayerPairProximityData> ProximityPairs; // 0x00(0x10)
	struct TArray<struct FPerPlayerProximityData> PlayerStatus; // 0x10(0x10)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct OPP.PerPlayerProximityData
// Size: 0x18 (Inherited: 0x00)
struct FPerPlayerProximityData {
	struct ARBPlayer* Player; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct OPP.PlayerPairProximityData
// Size: 0x18 (Inherited: 0x00)
struct FPlayerPairProximityData {
	struct ARBPlayer* FirstPlayer; // 0x00(0x08)
	struct ARBPlayer* SecondPlayer; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct OPP.InvestigatedDoorData
// Size: 0x18 (Inherited: 0x00)
struct FInvestigatedDoorData {
	struct ARBDoor* door; // 0x00(0x08)
	struct ARBBot* bot; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct OPP.NavmeshDestination
// Size: 0x1c (Inherited: 0x00)
struct FNavmeshDestination {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct OPP.PsychosisMineData
// Size: 0x50 (Inherited: 0x00)
struct FPsychosisMineData {
	struct ARBBot* bot; // 0x00(0x08)
	char pad_8[0x30]; // 0x08(0x30)
	struct ARBPsychosisMine* MineActor; // 0x38(0x08)
	struct TArray<struct ARBPlayer*> AffectedPlayers; // 0x40(0x10)
};

// ScriptStruct OPP.BaseZoneModifierData
// Size: 0x20 (Inherited: 0x00)
struct FBaseZoneModifierData {
	struct ARBPlayer* triggeringPlayer; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct OPP.ActiveChemMineData
// Size: 0x68 (Inherited: 0x20)
struct FActiveChemMineData : FBaseZoneModifierData {
	struct FRBActiveSkillSettings Params; // 0x20(0x2c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct ARBDeployableSkillItem* ChargeActor; // 0x50(0x08)
	struct TArray<struct ARBNPC*> AffectedNPCs; // 0x58(0x10)
};

// ScriptStruct OPP.BotCollisionInfo
// Size: 0x30 (Inherited: 0x00)
struct FBotCollisionInfo {
	char pad_0[0x8]; // 0x00(0x08)
	struct ARBBot* Collider; // 0x08(0x08)
	struct ARBBot* Collidee; // 0x10(0x08)
	struct ARBBot* ExtraParticipant; // 0x18(0x08)
	char pad_20[0x10]; // 0x20(0x10)
};

// ScriptStruct OPP.AIPerPlayerDebugData
// Size: 0x78 (Inherited: 0x00)
struct FAIPerPlayerDebugData {
	struct ARBPlayer* Player; // 0x00(0x08)
	enum class EPlayerVisibilityType VisibilityType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float VisibilityModifier; // 0x0c(0x04)
	enum class EPlayerVisibilityState CurrentVisibilityState; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FAIPerPlayerTraceInfo LastEyeTraceInfo; // 0x14(0x20)
	struct FAIPerPlayerTraceInfo LastCapsuleTraceInfo; // 0x34(0x20)
	float LastPlayerVisionUpdatedTime; // 0x54(0x04)
	float AudioOcclusion; // 0x58(0x04)
	float PathedDistance; // 0x5c(0x04)
	struct FVector LastKnownLocation; // 0x60(0x0c)
	enum class EPlayerAwarenessState AwarenessState; // 0x6c(0x01)
	bool bAwareOfSpecialLocation; // 0x6d(0x01)
	bool bPlayerOutsideLeash; // 0x6e(0x01)
	char pad_6F[0x1]; // 0x6f(0x01)
	float ForceIgnorePlayerUntilTime; // 0x70(0x04)
	float ForceAwarenessUntilTime; // 0x74(0x04)
};

// ScriptStruct OPP.AIPerPlayerTraceInfo
// Size: 0x20 (Inherited: 0x00)
struct FAIPerPlayerTraceInfo {
	bool bIsClear; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector StartPos; // 0x04(0x0c)
	struct FVector EndPos; // 0x10(0x0c)
	int32_t ClearCheckCount; // 0x1c(0x04)
};

// ScriptStruct OPP.AIPerPlayerData
// Size: 0x180 (Inherited: 0x00)
struct FAIPerPlayerData {
	struct ARBPlayer* Player; // 0x00(0x08)
	struct FAIPlayerPerceptionData Perception; // 0x08(0x68)
	struct FAIPerPlayerReacheabilityInfo Reacheability; // 0x70(0x28)
	struct FAIPerPlayerMemory Memory; // 0x98(0x98)
	struct FAudioPathInfo AudioPath; // 0x130(0x0c)
	struct FVector NavValidPosition; // 0x13c(0x0c)
	char pad_148[0x8]; // 0x148(0x08)
	struct FVector LastPerceivedLocation; // 0x150(0x0c)
	char pad_15C[0x24]; // 0x15c(0x24)
};

// ScriptStruct OPP.AudioPathInfo
// Size: 0x0c (Inherited: 0x00)
struct FAudioPathInfo {
	float PathedCost; // 0x00(0x04)
	float PathedDistance; // 0x04(0x04)
	float AudioOcclusion; // 0x08(0x04)
};

// ScriptStruct OPP.AIPerPlayerMemory
// Size: 0x98 (Inherited: 0x00)
struct FAIPerPlayerMemory {
	float LastFullVisibilityTime; // 0x00(0x04)
	float LastSeenTime; // 0x04(0x04)
	struct FVector LastSeenLocation; // 0x08(0x0c)
	char pad_14[0x28]; // 0x14(0x28)
	struct FVector LastAwareLocation; // 0x3c(0x0c)
	float LastAwareTime; // 0x48(0x04)
	float LastHeardTime; // 0x4c(0x04)
	struct FVector LastHeardLocation; // 0x50(0x0c)
	char pad_5C[0x3c]; // 0x5c(0x3c)
};

// ScriptStruct OPP.AIPerPlayerReacheabilityInfo
// Size: 0x28 (Inherited: 0x00)
struct FAIPerPlayerReacheabilityInfo {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct OPP.AIPlayerPerceptionData
// Size: 0x68 (Inherited: 0x00)
struct FAIPlayerPerceptionData {
	struct ARBPlayer* Player; // 0x00(0x08)
	enum class EPlayerVisibilityType VisibilityType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float VisibilityModifier; // 0x0c(0x04)
	enum class EPlayerVisibilityState CurrentVisibilityState; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float LastVisibilityStateChangedTime; // 0x14(0x04)
	enum class EPlayerAwarenessState AwarenessState; // 0x18(0x01)
	bool bAwareOfSpecialLocation; // 0x19(0x01)
	bool bSpecialLocationGuessable; // 0x1a(0x01)
	bool bIsNearby; // 0x1b(0x01)
	bool bHasNearbyClearance; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FAIPerPlayerTraceInfo LastEyeTraceInfo; // 0x20(0x20)
	struct FAIPerPlayerTraceInfo LastCapsuleTraceInfo; // 0x40(0x20)
	char pad_60[0x8]; // 0x60(0x08)
};

// ScriptStruct OPP.RBAIRandomSpawning
// Size: 0x58 (Inherited: 0x00)
struct FRBAIRandomSpawning {
	struct URBAIDirector* AIDirector; // 0x00(0x08)
	struct URBAIManager* AIMgr; // 0x08(0x08)
	struct URBNPCArchetypeConfig* ArchetypesCfg; // 0x10(0x08)
	char pad_18[0x10]; // 0x18(0x10)
	struct TArray<struct ARBAIVolume*> PouncerSpawnExclusionVolumes; // 0x28(0x10)
	struct TArray<struct ARBAISpawner*> AvailableSpawners; // 0x38(0x10)
	struct TArray<struct ARBAISpawner*> ActivatedSpawners; // 0x48(0x10)
};

// ScriptStruct OPP.AISpawnerData
// Size: 0x418 (Inherited: 0x00)
struct FAISpawnerData {
	struct ARBAISpawner* spawner; // 0x00(0x08)
	char pad_8[0x410]; // 0x08(0x410)
};

// ScriptStruct OPP.AISpawnerUICustomizationProxy
// Size: 0x08 (Inherited: 0x00)
struct FAISpawnerUICustomizationProxy {
	struct ARBAISpawner* OwnerSpawner; // 0x00(0x08)
};

// ScriptStruct OPP.NPCAmbientConfig
// Size: 0xe0 (Inherited: 0x00)
struct FNPCAmbientConfig {
	struct FGameplayTagContainer EnableOnlyForNPCTags; // 0x00(0x20)
	struct FGameplayTagContainer DisableForNPCTags; // 0x20(0x20)
	struct UAnimSequence* EntryAnim; // 0x40(0x08)
	struct UAnimationAsset* IdleAnim; // 0x48(0x08)
	struct UBlendSpaceBase* ActiveStateBS; // 0x50(0x08)
	struct UBlendSpaceBase* PassiveToActiveBS; // 0x58(0x08)
	struct UBlendSpaceBase* ActiveToPassiveBS; // 0x60(0x08)
	struct TArray<struct UAnimSequence*> IdleBreakers; // 0x68(0x10)
	struct UAnimSequence* DisturbanceAnim; // 0x78(0x08)
	struct TArray<struct UAnimSequence*> DisturbanceVariations; // 0x80(0x10)
	struct UAnimSequence* ExitAnimNormal; // 0x90(0x08)
	struct UAnimSequence* ExitAnimDisturbed; // 0x98(0x08)
	bool bNormalExitOnCycleEnd; // 0xa0(0x01)
	bool bOmnidirectional; // 0xa1(0x01)
	bool bOverrideIdleDuration; // 0xa2(0x01)
	char pad_A3[0x1]; // 0xa3(0x01)
	float OverriddenMinDuration; // 0xa4(0x04)
	float OverriddenMaxDuration; // 0xa8(0x04)
	bool bLookAtPlayer; // 0xac(0x01)
	bool bAllowHitReaction; // 0xad(0x01)
	bool bRecenterCollisionOnHips; // 0xae(0x01)
	bool bBlockNavmesh; // 0xaf(0x01)
	float LookAtAngleRangeLeft; // 0xb0(0x04)
	float LookAtAngleRangeRight; // 0xb4(0x04)
	float LookAtDistanceRange; // 0xb8(0x04)
	float LookAtApproachCoeff; // 0xbc(0x04)
	struct UAkAudioEvent* StartSoundEvent; // 0xc0(0x08)
	struct UAkAudioEvent* StopSoundEvent; // 0xc8(0x08)
	bool bDrawAnchorReference; // 0xd0(0x01)
	bool bDrawVisionRange; // 0xd1(0x01)
	char pad_D2[0x2]; // 0xd2(0x02)
	float PreviewAnimTime; // 0xd4(0x04)
	float PreviewSadFaceHeightOffset; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// ScriptStruct OPP.PawnAnimData
// Size: 0x118 (Inherited: 0x00)
struct FPawnAnimData {
	struct FGlobalAnimData Global; // 0x00(0x40)
	struct FBlendSpaceAnimData BlendSpace; // 0x40(0x20)
	struct FMovementAnimData Movement; // 0x60(0x18)
	struct FTraversalAnimData Traversal; // 0x78(0x20)
	struct FInteractionAnimData Interaction; // 0x98(0x08)
	struct FCoopMoveAnimData CoopMove; // 0xa0(0x04)
	struct FAttackAnimData Attack; // 0xa4(0x14)
	struct FSpecialAttackAnimData SpecialAttacks; // 0xb8(0x03)
	char pad_BB[0x1]; // 0xbb(0x01)
	struct FInventoryAnimData inventory; // 0xbc(0x0c)
	struct FAIAmbientAnimData Ambient; // 0xc8(0x20)
	struct FLookAtAnimData LookAt; // 0xe8(0x10)
	struct FNPCAnimData NPC; // 0xf8(0x10)
	struct FSpecialAnimData Special; // 0x108(0x10)
};

// ScriptStruct OPP.SpecialAnimData
// Size: 0x10 (Inherited: 0x00)
struct FSpecialAnimData {
	bool bIsInPsychosis; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float DistanceToSpectre; // 0x04(0x04)
	struct ARBNPC* SpectreNPC; // 0x08(0x08)
};

// ScriptStruct OPP.NPCAnimData
// Size: 0x10 (Inherited: 0x00)
struct FNPCAnimData {
	enum class ENPCAnimStyle AnimStyle; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float StepHeaviness; // 0x04(0x04)
	float BodyEffectIntensity; // 0x08(0x04)
	float BreathingIntensity; // 0x0c(0x04)
};

// ScriptStruct OPP.LookAtAnimData
// Size: 0x10 (Inherited: 0x00)
struct FLookAtAnimData {
	bool bEnableLookAt; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float LookAtAlpha; // 0x04(0x04)
	float LookAtRelativeYaw; // 0x08(0x04)
	float LookAtPitch; // 0x0c(0x04)
};

// ScriptStruct OPP.AIAmbientAnimData
// Size: 0x20 (Inherited: 0x00)
struct FAIAmbientAnimData {
	bool bActiveAmbientAnim; // 0x00(0x01)
	bool bPlayingAmbientBlendspace; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct UBlendSpaceBase* AmbientIdleBlendSpace; // 0x08(0x08)
	float AmbientIdleRelativeYaw; // 0x10(0x04)
	float AmbientIdleRelativePitch; // 0x14(0x04)
	struct UAnimSequence* AmbientIdleSequence; // 0x18(0x08)
};

// ScriptStruct OPP.InventoryAnimData
// Size: 0x0c (Inherited: 0x00)
struct FInventoryAnimData {
	enum class EItemAnimType ItemAnimType; // 0x00(0x01)
	enum class EItemType ItemType; // 0x01(0x01)
	bool bUsingItem; // 0x02(0x01)
	bool bPreparingItem; // 0x03(0x01)
	float WatchUpRatio; // 0x04(0x04)
	float GivingItemHandUpRatio; // 0x08(0x04)
};

// ScriptStruct OPP.SpecialAttackAnimData
// Size: 0x03 (Inherited: 0x00)
struct FSpecialAttackAnimData {
	bool bInGrabFromBehindState; // 0x00(0x01)
	bool bInGroundAndPoundState; // 0x01(0x01)
	bool bIsAttacker; // 0x02(0x01)
};

// ScriptStruct OPP.AttackAnimData
// Size: 0x14 (Inherited: 0x00)
struct FAttackAnimData {
	bool bIsInAttackStance; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float AttackStanceRatio; // 0x04(0x04)
	bool bChargingAttack; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float ChargingAttackRatio; // 0x0c(0x04)
	bool bChargingLeft; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct OPP.CoopMoveAnimData
// Size: 0x04 (Inherited: 0x00)
struct FCoopMoveAnimData {
	bool bIsDoingCoopMove; // 0x00(0x01)
	bool bIsLeader; // 0x01(0x01)
	enum class ECoopMoveType CoopMoveType; // 0x02(0x01)
	bool bMustCrouchAfterMove; // 0x03(0x01)
};

// ScriptStruct OPP.InteractionAnimData
// Size: 0x08 (Inherited: 0x00)
struct FInteractionAnimData {
	enum class EHidespotCategory HidespotType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float DoorOpenRatio; // 0x04(0x04)
};

// ScriptStruct OPP.TraversalAnimData
// Size: 0x20 (Inherited: 0x00)
struct FTraversalAnimData {
	bool bShouldTraversalMoveFinish; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ClimbHeight; // 0x04(0x04)
	float ClimbWidth; // 0x08(0x04)
	bool bRunning; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct AActor* TraversalActor; // 0x10(0x08)
	bool bMustCrouchAfterMove; // 0x18(0x01)
	bool bIsCarryingLargeObject; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct OPP.MovementAnimData
// Size: 0x18 (Inherited: 0x00)
struct FMovementAnimData {
	float FwdAnimSpeed; // 0x00(0x04)
	float SideAnimSpeed; // 0x04(0x04)
	float MovementSpeed; // 0x08(0x04)
	float InstantRotationSpeed; // 0x0c(0x04)
	float SmoothedRotationSpeed; // 0x10(0x04)
	enum class ELargeObjectType LargeObjectType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct OPP.BlendSpaceAnimData
// Size: 0x20 (Inherited: 0x00)
struct FBlendSpaceAnimData {
	bool bPlayingBlendSpace; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ControlValueX; // 0x04(0x04)
	float ControlValueY; // 0x08(0x04)
	float PlayRate; // 0x0c(0x04)
	float BlendTimeIn; // 0x10(0x04)
	float BlendTimeOut; // 0x14(0x04)
	struct UBlendSpaceBase* BlendSpaceSlot; // 0x18(0x08)
};

// ScriptStruct OPP.GlobalAnimData
// Size: 0x40 (Inherited: 0x00)
struct FGlobalAnimData {
	enum class ELocomotionMode AnimLocomotionMode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Health; // 0x04(0x04)
	float HealthFactor; // 0x08(0x04)
	bool bIsFirstPerson; // 0x0c(0x01)
	bool bIsAIControlled; // 0x0d(0x01)
	bool bIsLookingBack; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
	float LeftArmFirstPersonRelativeAnimAlpha; // 0x10(0x04)
	float RightArmFirstPersonRelativeAnimAlpha; // 0x14(0x04)
	float NeckOffsetRatio; // 0x18(0x04)
	float DarknessAlpha; // 0x1c(0x04)
	float SmoothedEyePitch; // 0x20(0x04)
	float SmoothedEyeYaw; // 0x24(0x04)
	struct FVector2D PeekAmount; // 0x28(0x08)
	struct FRotator EyeRotation; // 0x30(0x0c)
	bool bUseCustomActionBP; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct OPP.BasicDirectionAnimations
// Size: 0x20 (Inherited: 0x00)
struct FBasicDirectionAnimations {
	struct UAnimSequence* Front; // 0x00(0x08)
	struct UAnimSequence* Back; // 0x08(0x08)
	struct UAnimSequence* Left; // 0x10(0x08)
	struct UAnimSequence* Right; // 0x18(0x08)
};

// ScriptStruct OPP.OperatableAnimationData
// Size: 0x18 (Inherited: 0x00)
struct FOperatableAnimationData {
	struct UAnimSequence* Start; // 0x00(0x08)
	struct UAnimSequence* Loop; // 0x08(0x08)
	struct UAnimSequence* End; // 0x10(0x08)
};

// ScriptStruct OPP.NPCDerivedAnimDataContext
// Size: 0xb0 (Inherited: 0x00)
struct FNPCDerivedAnimDataContext {
	char pad_0[0xa8]; // 0x00(0xa8)
	struct ARBNPC* NPC; // 0xa8(0x08)
};

// ScriptStruct OPP.NPCDoorInvestigationAnimDataSet
// Size: 0x2a0 (Inherited: 0x00)
struct FNPCDoorInvestigationAnimDataSet {
	struct FNPCDoorInvestigationAnimDataHalfSet Left; // 0x00(0x150)
	struct FNPCDoorInvestigationAnimDataHalfSet Right; // 0x150(0x150)
};

// ScriptStruct OPP.NPCDoorInvestigationAnimDataHalfSet
// Size: 0x150 (Inherited: 0x00)
struct FNPCDoorInvestigationAnimDataHalfSet {
	struct FNPCDoorInteractionAnimData OpenToInvestigate_Side; // 0x00(0x40)
	struct FNPCDoorInteractionAnimData OpenToInvestigate_Wide; // 0x40(0x40)
	struct FNPCDoorInteractionAnimData ClosedToInvestigate_Side; // 0x80(0x40)
	struct FNPCDoorInteractionAnimData ClosedToInvestigate_Wide; // 0xc0(0x40)
	struct FNPCDoorInteractionAnimData ClosedToInvestigate_Peek; // 0x100(0x40)
	struct TArray<struct FNPCDoorInteractionAnimData> LockedToInvestigate_List; // 0x140(0x10)
};

// ScriptStruct OPP.NPCDoorInteractionAnimData
// Size: 0x40 (Inherited: 0x00)
struct FNPCDoorInteractionAnimData {
	struct UAnimSequence* Sequence; // 0x00(0x08)
	struct FVector AnchorTranslation; // 0x08(0x0c)
	struct FVector AnchorOffsetAtAdjustmentLimit; // 0x14(0x0c)
	float LocalYawAtAdjustmentLimit; // 0x20(0x04)
	float MaxAdjustmentDistance; // 0x24(0x04)
	float MaxAdjustmentDuration; // 0x28(0x04)
	float EntryPhase; // 0x2c(0x04)
	float EntrySpeed; // 0x30(0x04)
	float AutoBlendOutDuration; // 0x34(0x04)
	float CustomBlendOutDuration; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct OPP.NPCDoorPassthroughAnimDataSet
// Size: 0x440 (Inherited: 0x00)
struct FNPCDoorPassthroughAnimDataSet {
	struct FNPCDoorPassthroughAnimDataHalfSet Left; // 0x00(0x220)
	struct FNPCDoorPassthroughAnimDataHalfSet Right; // 0x220(0x220)
};

// ScriptStruct OPP.NPCDoorPassthroughAnimDataHalfSet
// Size: 0x220 (Inherited: 0x00)
struct FNPCDoorPassthroughAnimDataHalfSet {
	struct FNPCDoorInteractionAnimData OpenedToClosed; // 0x00(0x40)
	struct FNPCDoorInteractionAnimData OpenedToLocked; // 0x40(0x40)
	struct FNPCDoorInteractionAnimData OpenedToClosedBack; // 0x80(0x40)
	struct FNPCDoorInteractionAnimData OpenedToLockedBack; // 0xc0(0x40)
	struct TArray<struct FNPCDoorInteractionAnimData> ClosedToOpened_List; // 0x100(0x10)
	struct FNPCDoorInteractionAnimData ClosedToClosed; // 0x110(0x40)
	struct FNPCDoorInteractionAnimData ClosedToLocked; // 0x150(0x40)
	struct FNPCDoorInteractionAnimData LockedToOpened; // 0x190(0x40)
	struct FNPCDoorInteractionAnimData LockedToClosed; // 0x1d0(0x40)
	struct TArray<struct FNPCDoorInteractionAnimData> Walkthroughs; // 0x210(0x10)
};

// ScriptStruct OPP.NPCHitReactionAnimData
// Size: 0x10 (Inherited: 0x00)
struct FNPCHitReactionAnimData {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	enum class ENPCHitReactionType ReactionType; // 0x08(0x01)
	bool bMoving; // 0x09(0x01)
	enum class EBasicDirection Direction; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
};

// ScriptStruct OPP.NPCInvestigationSelectionParams
// Size: 0x20 (Inherited: 0x00)
struct FNPCInvestigationSelectionParams {
	struct ARBInvestigationPoint* InvPoint; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct OPP.NPCWaypointAnimData
// Size: 0x08 (Inherited: 0x00)
struct FNPCWaypointAnimData {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
};

// ScriptStruct OPP.NPCInvestigationAnimData
// Size: 0x38 (Inherited: 0x00)
struct FNPCInvestigationAnimData {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	float ProbabilityModifier; // 0x08(0x04)
	enum class ENPCInvestigationAnimIntensity Intensity; // 0x0c(0x01)
	enum class ENPCInvestigationAnimCategory Category; // 0x0d(0x01)
	bool bEnteringInMotion; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
	float EntrySpeed; // 0x10(0x04)
	float EntryPhase; // 0x14(0x04)
	float DistTravelled; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FNPCInvestigationSightRequirement> SightRequirements; // 0x20(0x10)
	char pad_30[0x8]; // 0x30(0x08)
};

// ScriptStruct OPP.NPCInvestigationSightRequirement
// Size: 0x0c (Inherited: 0x00)
struct FNPCInvestigationSightRequirement {
	float DistanceOffset; // 0x00(0x04)
	float RelativeLookAngle; // 0x04(0x04)
	float LookDuration; // 0x08(0x04)
};

// ScriptStruct OPP.TurningOnSpotData
// Size: 0x60 (Inherited: 0x00)
struct FTurningOnSpotData {
	struct TMap<enum class EFullTurnDirection, struct UAnimSequence*> TurnOnSpotSequences; // 0x00(0x50)
	struct UAimOffsetBlendSpace1D* LookAimSpace; // 0x50(0x08)
	float TurnOnSpotSafeAngle; // 0x58(0x04)
	float TurnOnSpotForceTurnAngle; // 0x5c(0x04)
};

// ScriptStruct OPP.SkelMeshActorOptimData
// Size: 0x10 (Inherited: 0x00)
struct FSkelMeshActorOptimData {
	struct ASkeletalMeshActor* SkelMeshActor; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct OPP.WorldDisturbanceData
// Size: 0x10 (Inherited: 0x00)
struct FWorldDisturbanceData {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct OPP.PawnAnimOptimData
// Size: 0x20 (Inherited: 0x00)
struct FPawnAnimOptimData {
	struct ARBPawn* RBPawn; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct OPP.AnimCategoryStats
// Size: 0x10 (Inherited: 0x00)
struct FAnimCategoryStats {
	struct TArray<struct FAnimPlayStat> stats; // 0x00(0x10)
};

// ScriptStruct OPP.AnimPlayStat
// Size: 0xb8 (Inherited: 0x00)
struct FAnimPlayStat {
	struct UAnimSequence* AnimSeq; // 0x00(0x08)
	enum class ESpecialMove specialMove; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t PlayCount; // 0x0c(0x04)
	float LastPlayTime; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TSet<enum class ENPCType> NPCTypes; // 0x18(0x50)
	struct TSet<uint16_t> NPCIds; // 0x68(0x50)
};

// ScriptStruct OPP.AnimLogItem
// Size: 0x20 (Inherited: 0x00)
struct FAnimLogItem {
	struct FString PawnName; // 0x00(0x10)
	enum class EAnimLogCategory Category; // 0x10(0x01)
	enum class ESpecialMove specialMove; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct UAnimSequence* AnimSeq; // 0x18(0x08)
};

// ScriptStruct OPP.CrouchUnderAnimRefs
// Size: 0x20 (Inherited: 0x00)
struct FCrouchUnderAnimRefs {
	struct UAnimSequence* CrouchUnderStandPatrol; // 0x00(0x08)
	struct UAnimSequence* CrouchUnderStandChase; // 0x08(0x08)
	struct UAnimSequence* CrouchUnderMovePatrol; // 0x10(0x08)
	struct UAnimSequence* CrouchUnderMoveChase; // 0x18(0x08)
};

// ScriptStruct OPP.HidespotsAnimRefs
// Size: 0x260 (Inherited: 0x00)
struct FHidespotsAnimRefs {
	struct FSingleHidespotInteractionsAnimRefs StandingLeft; // 0x00(0x40)
	struct FSingleHidespotInteractionsAnimRefs StandingRight; // 0x40(0x40)
	struct FSingleHidespotInteractionsAnimRefs ProneLeft; // 0x80(0x40)
	struct FSingleHidespotInteractionsAnimRefs ProneRight; // 0xc0(0x40)
	struct FSingleHidespotInteractionsAnimRefs Crouched; // 0x100(0x40)
	struct FSingleHidespotInteractionsAnimRefs InsideHorizontal; // 0x140(0x40)
	struct FSingleHidespotInteractionsAnimRefs InsideVertical; // 0x180(0x40)
	struct FSingleHidespotInteractionsAnimRefs CarTrunk; // 0x1c0(0x40)
	struct FGrabExitData GrabExitData; // 0x200(0x60)
};

// ScriptStruct OPP.GrabExitData
// Size: 0x60 (Inherited: 0x00)
struct FGrabExitData {
	struct FPairedAnim ExitForward; // 0x00(0x18)
	struct FPairedAnim ExitLeft; // 0x18(0x18)
	struct FPairedAnim ExitRight; // 0x30(0x18)
	struct FPairedAnim ExitBack; // 0x48(0x18)
};

// ScriptStruct OPP.SingleHidespotInteractionsAnimRefs
// Size: 0x40 (Inherited: 0x00)
struct FSingleHidespotInteractionsAnimRefs {
	struct UAnimSequenceBase* Enter; // 0x00(0x08)
	struct UAnimSequenceBase* Peek; // 0x08(0x08)
	struct TArray<struct FNPCHidespotPeekAnimData> NPCPeeks; // 0x10(0x10)
	struct UAnimSequenceBase* ExitPeek; // 0x20(0x08)
	struct TArray<struct UAnimSequenceBase*> Investigate; // 0x28(0x10)
	struct UAnimSequenceBase* KnockdownExit; // 0x38(0x08)
};

// ScriptStruct OPP.NPCHidespotPeekAnimData
// Size: 0x10 (Inherited: 0x00)
struct FNPCHidespotPeekAnimData {
	struct UAnimSequence* PeekAnimation; // 0x00(0x08)
	enum class ENPCHidespotPeekDistance Distance; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct OPP.ItemSequences
// Size: 0xa8 (Inherited: 0x00)
struct FItemSequences {
	struct UAnimSequence* HandPose; // 0x00(0x08)
	struct UAnimSequence* EnterTradePose; // 0x08(0x08)
	struct UAnimSequence* ExitTradePose; // 0x10(0x08)
	struct UAnimSequence* TradePose; // 0x18(0x08)
	struct UAnimSequence* InteractReadyStart; // 0x20(0x08)
	struct UAnimSequence* InteractReadyPose; // 0x28(0x08)
	struct UAnimSequence* InteractReadyStop; // 0x30(0x08)
	struct UAnimSequence* Equip; // 0x38(0x08)
	struct UAnimSequence* UnEquip; // 0x40(0x08)
	struct UAnimSequence* pickup; // 0x48(0x08)
	struct UAnimSequence* PutDownStanding; // 0x50(0x08)
	struct UAnimSequence* PutDownCrouching; // 0x58(0x08)
	struct UAnimSequence* ConsumeStanding; // 0x60(0x08)
	struct UAnimSequence* ConsumeCrouching; // 0x68(0x08)
	struct UAnimSequence* ConsumeHidespot; // 0x70(0x08)
	struct UAnimSequence* ThrowSequence; // 0x78(0x08)
	struct UAnimSequence* RaiseToThrowStart; // 0x80(0x08)
	struct UAnimSequence* RaiseToThrowIdle; // 0x88(0x08)
	struct UAnimSequence* RaiseToThrowStop; // 0x90(0x08)
	struct TArray<struct UAnimSequence*> Breakers; // 0x98(0x10)
};

// ScriptStruct OPP.GrabAttackData
// Size: 0x150 (Inherited: 0x00)
struct FGrabAttackData {
	struct FPairedAnim EnterStand; // 0x00(0x18)
	struct FPairedAnim EnterCrouch; // 0x18(0x18)
	struct FPairedAnim EnterAbove; // 0x30(0x18)
	struct FPairedAnim EnterHidingStandLeft; // 0x48(0x18)
	struct FPairedAnim EnterHidingStandRight; // 0x60(0x18)
	struct FPairedAnim EnterHidingProneLeft; // 0x78(0x18)
	struct FPairedAnim EnterHidingProneRight; // 0x90(0x18)
	struct FPairedAnim EnterHidingCrouch; // 0xa8(0x18)
	struct FPairedAnim EnterHidingContainer; // 0xc0(0x18)
	struct FPairedAnim EnterHidingBarrel; // 0xd8(0x18)
	struct FGrabExitData Exits; // 0xf0(0x60)
};

// ScriptStruct OPP.NPCAttackSelectionParams
// Size: 0x1c (Inherited: 0x00)
struct FNPCAttackSelectionParams {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct OPP.LocomotionAlternateModeAnimations
// Size: 0x58 (Inherited: 0x00)
struct FLocomotionAlternateModeAnimations {
	struct UAnimSequence* Start; // 0x00(0x08)
	struct UBlendSpaceBase* StartBlendSpace; // 0x08(0x08)
	struct UAnimSequence* Loop; // 0x10(0x08)
	struct UBlendSpaceBase* LoopBlendSpace; // 0x18(0x08)
	struct UAnimSequence* Idle; // 0x20(0x08)
	struct UBlendSpaceBase* IdleBlendSpace; // 0x28(0x08)
	struct FLocomotionStopOptions Stop; // 0x30(0x28)
};

// ScriptStruct OPP.LocomotionStopOptions
// Size: 0x28 (Inherited: 0x00)
struct FLocomotionStopOptions {
	struct UAnimSequence* Sequence; // 0x00(0x08)
	struct UBlendSpaceBase* BlendSpace; // 0x08(0x08)
	struct UCurveFloat* Curve; // 0x10(0x08)
	float MaxDistance; // 0x18(0x04)
	float MinDistance; // 0x1c(0x04)
	float AutoBlendOutDuration; // 0x20(0x04)
	float CustomBlendOutDuration; // 0x24(0x04)
};

// ScriptStruct OPP.LocomotionStartleAmplitudeOptions
// Size: 0x50 (Inherited: 0x00)
struct FLocomotionStartleAmplitudeOptions {
	struct TMap<enum class EStartleType, struct FLocomotionStartleSpeedOptions> Options; // 0x00(0x50)
};

// ScriptStruct OPP.LocomotionStartleSpeedOptions
// Size: 0x50 (Inherited: 0x00)
struct FLocomotionStartleSpeedOptions {
	struct TMap<enum class EStartleSpeed, struct FLocomotionTurnDirectionOptions> Options; // 0x00(0x50)
};

// ScriptStruct OPP.LocomotionTurnDirectionOptions
// Size: 0xa0 (Inherited: 0x00)
struct FLocomotionTurnDirectionOptions {
	struct TMap<enum class ELocomotionTurnDirection, struct UAnimSequence*> Sequences; // 0x00(0x50)
	struct TMap<enum class ELocomotionTurnDirection, struct UBlendSpaceBase*> BlendSpaces; // 0x50(0x50)
};

// ScriptStruct OPP.LocomotionStopDirectionOptions
// Size: 0x50 (Inherited: 0x00)
struct FLocomotionStopDirectionOptions {
	struct TMap<enum class ELocomotionTurnDirection, struct FLocomotionStopOptions> Sequences; // 0x00(0x50)
};

// ScriptStruct OPP.RBAnimLengthStruct
// Size: 0x04 (Inherited: 0x00)
struct FRBAnimLengthStruct {
	float AnimationLength; // 0x00(0x04)
};

// ScriptStruct OPP.AudioPathSearchContext
// Size: 0x30 (Inherited: 0x00)
struct FAudioPathSearchContext {
	char pad_0[0x20]; // 0x00(0x20)
	struct TArray<struct URBSoundConnectorComponent*> DestinationConnectors; // 0x20(0x10)
};

// ScriptStruct OPP.AudioPathSearchNode
// Size: 0x20 (Inherited: 0x00)
struct FAudioPathSearchNode {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct OPP.AudioPathNode
// Size: 0x30 (Inherited: 0x00)
struct FAudioPathNode {
	struct URBSoundConnectorComponent* Connector; // 0x00(0x08)
	char pad_8[0x28]; // 0x08(0x28)
};

// ScriptStruct OPP.AudioPathConnection
// Size: 0x10 (Inherited: 0x00)
struct FAudioPathConnection {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct OPP.MusicEventInfo
// Size: 0x20 (Inherited: 0x00)
struct FMusicEventInfo {
	enum class EMusicEventType EventType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString EventDesc; // 0x08(0x10)
	float EventRealTime; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct OPP.DualSidedEmitterTransaction
// Size: 0x10 (Inherited: 0x00)
struct FDualSidedEmitterTransaction {
	struct URBSoundComponent* SoundEmitter; // 0x00(0x08)
	struct URBSoundConnectorComponent* SoundConnector; // 0x08(0x08)
};

// ScriptStruct OPP.SoundEmitterTransaction
// Size: 0x20 (Inherited: 0x00)
struct FSoundEmitterTransaction {
	struct URBSoundComponent* SoundEmitter; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct OPP.RTPCActorDebugInfo
// Size: 0x50 (Inherited: 0x00)
struct FRTPCActorDebugInfo {
	struct TMap<struct TSoftObjectPtr<UAkComponent>, struct FRTPCComponentDebugInfo> RTPCComponentInfo; // 0x00(0x50)
};

// ScriptStruct OPP.RTPCComponentDebugInfo
// Size: 0xf0 (Inherited: 0x00)
struct FRTPCComponentDebugInfo {
	struct TMap<struct FString, float> RTPCValue; // 0x00(0x50)
	struct TMap<struct FString, struct FString> SwitchValue; // 0x50(0x50)
	struct TMap<struct FString, struct FString> StateValue; // 0xa0(0x50)
};

// ScriptStruct OPP.MultiPositionGroup
// Size: 0x18 (Inherited: 0x00)
struct FMultiPositionGroup {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct URBSoundComponent*> members; // 0x08(0x10)
};

// ScriptStruct OPP.SoundPathingContextInfo
// Size: 0x28 (Inherited: 0x00)
struct FSoundPathingContextInfo {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct OPP.StageAudioEvents
// Size: 0x20 (Inherited: 0x00)
struct FStageAudioEvents {
	struct TArray<struct UAkAudioEvent*> StartEvents; // 0x00(0x10)
	struct TArray<struct UAkAudioEvent*> StopEvents; // 0x10(0x10)
};

// ScriptStruct OPP.NarrativeSoundEventsInfo
// Size: 0x20 (Inherited: 0x00)
struct FNarrativeSoundEventsInfo {
	struct TArray<struct UAkAudioEvent*> StartEvents; // 0x00(0x10)
	struct TArray<struct UAkAudioEvent*> StopEvents; // 0x10(0x10)
};

// ScriptStruct OPP.SoundTriggerEvent
// Size: 0x10 (Inherited: 0x00)
struct FSoundTriggerEvent {
	struct UAkAudioEvent* EnterEvent; // 0x00(0x08)
	struct UAkAudioEvent* ExitEvent; // 0x08(0x08)
};

// ScriptStruct OPP.UINPCTask
// Size: 0x18 (Inherited: 0x00)
struct FUINPCTask {
	struct FAvailableTask AvailableTask; // 0x00(0x10)
	enum class EUIAvailableTaskState State; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct OPP.AvailableTask
// Size: 0x10 (Inherited: 0x00)
struct FAvailableTask {
	int64_t TaskUniqueId; // 0x00(0x08)
	struct URBTaskData* TaskData; // 0x08(0x08)
};

// ScriptStruct OPP.BCAnimatedStopData
// Size: 0x50 (Inherited: 0x00)
struct FBCAnimatedStopData {
	struct UAnimSequence* RefStopAnim; // 0x00(0x08)
	char pad_8[0x48]; // 0x08(0x48)
};

// ScriptStruct OPP.BCAnimatedStartData
// Size: 0x30 (Inherited: 0x00)
struct FBCAnimatedStartData {
	struct UAnimSequence* RefStartAnim; // 0x00(0x08)
	char pad_8[0x28]; // 0x08(0x28)
};

// ScriptStruct OPP.RandomStationData
// Size: 0x10 (Inherited: 0x00)
struct FRandomStationData {
	struct ARBRandomPathMarker* PathMarker; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct OPP.RandomMovementParams
// Size: 0x18 (Inherited: 0x00)
struct FRandomMovementParams {
	float MinStayDuration; // 0x00(0x04)
	float MaxStayDuration; // 0x04(0x04)
	float StartLocomotionRandomMax; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct ARBRandomPathMarker* RandomPath; // 0x10(0x08)
};

// ScriptStruct OPP.BackgroundCharacterLocomotionSet
// Size: 0xa8 (Inherited: 0x00)
struct FBackgroundCharacterLocomotionSet {
	struct UAnimationAsset* ForwardLoop; // 0x00(0x08)
	struct UAnimationAsset* StartForward; // 0x08(0x08)
	struct UAnimationAsset* StartLeft90; // 0x10(0x08)
	struct UAnimationAsset* StartRight90; // 0x18(0x08)
	struct UAnimationAsset* StartLeft180; // 0x20(0x08)
	struct UAnimationAsset* StartRight180; // 0x28(0x08)
	struct FBackgroundCharacterStopData StopForward; // 0x30(0x18)
	struct FBackgroundCharacterStopData StopLeft90; // 0x48(0x18)
	struct FBackgroundCharacterStopData StopRight90; // 0x60(0x18)
	struct FBackgroundCharacterStopData StopLeft180; // 0x78(0x18)
	struct FBackgroundCharacterStopData StopRight180; // 0x90(0x18)
};

// ScriptStruct OPP.BackgroundCharacterStopData
// Size: 0x18 (Inherited: 0x00)
struct FBackgroundCharacterStopData {
	struct UAnimationAsset* StopAnim; // 0x00(0x08)
	float MaxDistance; // 0x08(0x04)
	float MinDistance; // 0x0c(0x04)
	float AutoBlendOutDuration; // 0x10(0x04)
	float CustomBlendOutDuration; // 0x14(0x04)
};

// ScriptStruct OPP.RBBackgroundCharacterStationParams
// Size: 0x60 (Inherited: 0x00)
struct FRBBackgroundCharacterStationParams {
	struct TArray<struct FRandomLoopingAnimParams> LoopingIdles; // 0x00(0x10)
	struct FLookingIdlesAnimParams LookingIdles; // 0x10(0x30)
	struct TArray<struct FRandomOneOffAnimParams> OneOffBreakers; // 0x40(0x10)
	struct TArray<struct FBCReactionAnimParams> ReactionAnims; // 0x50(0x10)
};

// ScriptStruct OPP.BCReactionAnimParams
// Size: 0x20 (Inherited: 0x00)
struct FBCReactionAnimParams {
	bool bEnableOnPlayerAttacked; // 0x00(0x01)
	bool bEnableOnWorldDisturbance; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float MaxDisturbanceDistance; // 0x04(0x04)
	float DisturbanceHeightThreshold; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UAnimationAsset* AnimAsset; // 0x10(0x08)
	float RelativeOdds; // 0x18(0x04)
	float MinReplayInterval; // 0x1c(0x04)
};

// ScriptStruct OPP.RandomOneOffAnimParams
// Size: 0x18 (Inherited: 0x00)
struct FRandomOneOffAnimParams {
	struct UAnimationAsset* AnimAsset; // 0x00(0x08)
	float RelativeOdds; // 0x08(0x04)
	float MinReplayInterval; // 0x0c(0x04)
	float MaxPlayerDistance; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct OPP.LookingIdlesAnimParams
// Size: 0x30 (Inherited: 0x00)
struct FLookingIdlesAnimParams {
	struct UAnimSequence* RelaxIdle; // 0x00(0x08)
	struct UBlendSpace* RelaxLook; // 0x08(0x08)
	struct UAnimSequence* AlertIdle; // 0x10(0x08)
	struct UBlendSpace* AlertLook; // 0x18(0x08)
	struct UAnimationAsset* AlertToRelax; // 0x20(0x08)
	struct UAnimationAsset* RelaxToAlert; // 0x28(0x08)
};

// ScriptStruct OPP.RandomLoopingAnimParams
// Size: 0x20 (Inherited: 0x00)
struct FRandomLoopingAnimParams {
	struct UAnimationAsset* LoopingIdle; // 0x00(0x08)
	bool bTransitionOnCycleBoundary; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float RelativeOdds; // 0x0c(0x04)
	float MinPlayDuration; // 0x10(0x04)
	float MaxPlayDuration; // 0x14(0x04)
	float MaxPlayerDistance; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct OPP.IntermediateObjectiveData
// Size: 0x20 (Inherited: 0x00)
struct FIntermediateObjectiveData {
	struct FText objectiveText; // 0x00(0x18)
	bool bIsDone; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct OPP.BlockableLink
// Size: 0x48 (Inherited: 0x00)
struct FBlockableLink {
	int32_t BlockableLinkId; // 0x00(0x04)
	enum class EBlockableLinkType LinkType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct TArray<struct TSoftObjectPtr<AActor>> SoftLinkedBlockables; // 0x08(0x10)
	int32_t Count; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TSoftObjectPtr<AActor> LinkingActor; // 0x20(0x28)
};

// ScriptStruct OPP.BotDebugInfo
// Size: 0x308 (Inherited: 0x00)
struct FBotDebugInfo {
	struct ARBNPC* NPC; // 0x00(0x08)
	struct FVector CharLocation; // 0x08(0x0c)
	float CheckStuckTimer; // 0x14(0x04)
	struct URBAIConfig* configAsset; // 0x18(0x08)
	struct TArray<struct URBPartialAIConfig*> PartialConfigs; // 0x20(0x10)
	enum class EAIDebugConfigFlags ConfigFlags; // 0x30(0x02)
	enum class EAIDebugErrorFlags ErrorFlags; // 0x32(0x02)
	enum class EAISpawnSource SpawnSource; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float SpawnedStageTime; // 0x38(0x04)
	enum class EAIActivity Activity; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FString AIActivityDebugString; // 0x40(0x10)
	enum class EMoveStatus MoveStatus; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	struct FVector MoveDest; // 0x54(0x0c)
	float MoveDestBuffer; // 0x60(0x04)
	enum class ERotationMode RotationMode; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct FAIAmbientData Ambient; // 0x68(0x28)
	struct FAIScriptedData Scripted; // 0x90(0x20)
	struct FAIScriptedConfig ScriptedConfig; // 0xb0(0x80)
	struct FAIAmbushData Ambush; // 0x130(0x48)
	struct FInvestigationDebugData Investigation; // 0x178(0x38)
	struct FPatrolDebugData Patrol; // 0x1b0(0x20)
	struct TArray<struct FAIPerPlayerDebugData> PlayerData; // 0x1d0(0x10)
	struct FAIVisionDebugData VisionData; // 0x1e0(0xc8)
	enum class EAIAwarenessStateType AwarenessStateType; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct FString AwarenessStateDebugString; // 0x2b0(0x10)
	bool bHasLeash; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	float ConsideredOutsideLeashStartTime; // 0x2c4(0x04)
	bool bConsideredOutsideLeash; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	float GenericNoiseMeter; // 0x2cc(0x04)
	float GenericVisualMeter; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct TArray<struct FAIEventLogItem> RecentEvents; // 0x2d8(0x10)
	struct AActor* LookAtTarget; // 0x2e8(0x08)
	bool bLookAtEnabled; // 0x2f0(0x01)
	bool bLookAtValidState; // 0x2f1(0x01)
	char pad_2F2[0x2]; // 0x2f2(0x02)
	struct FVector LookAtTargetPosition; // 0x2f4(0x0c)
	float LastUpdatedTime; // 0x300(0x04)
	char pad_304[0x4]; // 0x304(0x04)
};

// ScriptStruct OPP.AIEventLogItem
// Size: 0x20 (Inherited: 0x00)
struct FAIEventLogItem {
	enum class EAILogVerbosity Verbosity; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString LogLine; // 0x08(0x10)
	float Time; // 0x18(0x04)
	int32_t RepeatCount; // 0x1c(0x04)
};

// ScriptStruct OPP.AIVisionDebugData
// Size: 0xc8 (Inherited: 0x00)
struct FAIVisionDebugData {
	struct FAIVisionCone PartialVisibilityCone; // 0x00(0x30)
	struct FAIVisionCone FullVisibilityCone; // 0x30(0x30)
	struct FAIVisionCone DarknessPartialVisibilityCone; // 0x60(0x30)
	struct FAIVisionCone DarknessFullVisibilityCone; // 0x90(0x30)
	float CloseDistance_FullVisibility; // 0xc0(0x04)
	float CloseDistance_PartialVisibility; // 0xc4(0x04)
};

// ScriptStruct OPP.PatrolDebugData
// Size: 0x20 (Inherited: 0x00)
struct FPatrolDebugData {
	bool bAtWaypoint; // 0x00(0x01)
	enum class EPatrolType Type; // 0x01(0x01)
	enum class EPatrolWaypointSelectionMode Mode; // 0x02(0x01)
	bool bForced; // 0x03(0x01)
	uint16_t NumWaypoints; // 0x04(0x02)
	char pad_6[0x2]; // 0x06(0x02)
	struct ARBWaypoint* DestinationWaypoint; // 0x08(0x08)
	struct FVector DestinationPoint; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct OPP.InvestigationDebugData
// Size: 0x38 (Inherited: 0x00)
struct FInvestigationDebugData {
	char NbPointsToCheck; // 0x00(0x01)
	char NbPointsChecked; // 0x01(0x01)
	uint16_t NumInvestigationPoints; // 0x02(0x02)
	char pad_4[0x4]; // 0x04(0x04)
	struct ARBPlayer* TargetPlayer; // 0x08(0x08)
	bool bDynamicLookActive; // 0x10(0x01)
	bool bDynamicLookExplicit; // 0x11(0x01)
	bool bInvestigatingDisturbance; // 0x12(0x01)
	bool bAtInvestigationPoint; // 0x13(0x01)
	bool bInvestigatingSource; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct URBNPCInterestPointComponent* CurrentInterestPointComp; // 0x18(0x08)
	struct FVector ExplicitInterestLocation; // 0x20(0x0c)
	float InterestLookDuration; // 0x2c(0x04)
	char NumInterestPoints; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct OPP.AIAmbushData
// Size: 0x48 (Inherited: 0x00)
struct FAIAmbushData {
	struct URBHidespotComponent* hidespot; // 0x00(0x08)
	struct UAnimSequence* AmbushIdle; // 0x08(0x08)
	struct TArray<struct FAIAmbushVisibilityData> PlayerVisibilityCheckList; // 0x10(0x10)
	char pad_20[0x28]; // 0x20(0x28)
};

// ScriptStruct OPP.AIAmbushVisibilityData
// Size: 0x10 (Inherited: 0x00)
struct FAIAmbushVisibilityData {
	struct ARBPlayer* Player; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct OPP.AIScriptedConfig
// Size: 0x80 (Inherited: 0x00)
struct FAIScriptedConfig {
	char pad_0[0x18]; // 0x00(0x18)
	struct FRBAIConditionSet ExitConditions; // 0x18(0x10)
	struct UAnimSequence* IdleAnim; // 0x28(0x08)
	struct UAnimSequence* ExitAnim; // 0x30(0x08)
	char pad_38[0x10]; // 0x38(0x10)
	struct UAnimSequence* SingleShotAnim; // 0x48(0x08)
	struct ARBScriptedAnimStation* ScriptedAnimStation; // 0x50(0x08)
	char pad_58[0x10]; // 0x58(0x10)
	struct AActor* TargetActor; // 0x68(0x08)
	char pad_70[0x10]; // 0x70(0x10)
};

// ScriptStruct OPP.AIScriptedData
// Size: 0x20 (Inherited: 0x00)
struct FAIScriptedData {
	enum class EAIScriptedState ScriptedState; // 0x00(0x01)
	char pad_1[0x1f]; // 0x01(0x1f)
};

// ScriptStruct OPP.AIAmbientData
// Size: 0x28 (Inherited: 0x00)
struct FAIAmbientData {
	struct URBAmbientStationComponent* CurrentAmbientStation; // 0x00(0x08)
	float AmbientStartedTime; // 0x08(0x04)
	float MaxStayDuration; // 0x0c(0x04)
	char pad_10[0x18]; // 0x10(0x18)
};

// ScriptStruct OPP.BotDirectorData
// Size: 0x18 (Inherited: 0x00)
struct FBotDirectorData {
	char pad_0[0x10]; // 0x00(0x10)
	struct ARBPlayer* InitialTargetPlayer; // 0x10(0x08)
};

// ScriptStruct OPP.LeashData
// Size: 0x28 (Inherited: 0x00)
struct FLeashData {
	struct TArray<struct AVolume*> LeashVolumes; // 0x00(0x10)
	bool bIsBotOutsideLeash; // 0x10(0x01)
	bool bIsConsideredOutsideLeash; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	float OutsideLeashStartTime; // 0x14(0x04)
	float ConsideredOutsideLeashStartTime; // 0x18(0x04)
	struct FVector LastInsideLeashPosition; // 0x1c(0x0c)
};

// ScriptStruct OPP.AICycleBreakerData
// Size: 0x04 (Inherited: 0x00)
struct FAICycleBreakerData {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct OPP.AIBlindPaintData
// Size: 0x1c (Inherited: 0x00)
struct FAIBlindPaintData {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct OPP.AIStunGrenadeData
// Size: 0x01 (Inherited: 0x00)
struct FAIStunGrenadeData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct OPP.AIMolotovData
// Size: 0x10 (Inherited: 0x00)
struct FAIMolotovData {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct OPP.AIIdleFocusData
// Size: 0x0c (Inherited: 0x00)
struct FAIIdleFocusData {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct OPP.ConditionalAIConfigData
// Size: 0x11d8 (Inherited: 0x00)
struct FConditionalAIConfigData {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct URBAICondition*> Conditions; // 0x08(0x10)
	struct FAIConfigData ConfigOverrides; // 0x18(0x11bc)
	char pad_11D4[0x4]; // 0x11d4(0x04)
};

// ScriptStruct OPP.MovementData
// Size: 0x48 (Inherited: 0x00)
struct FMovementData {
	char pad_0[0x4]; // 0x00(0x04)
	struct FAIRequestID requestID; // 0x04(0x04)
	struct AActor* DestinationActor; // 0x08(0x08)
	char pad_10[0x38]; // 0x10(0x38)
};

// ScriptStruct OPP.BotMemory
// Size: 0x298 (Inherited: 0x00)
struct FBotMemory {
	struct AActor* SpawnPointActor; // 0x00(0x08)
	char pad_8[0x150]; // 0x08(0x150)
	struct ARBPlayer* LastReceivedDamageFrom; // 0x158(0x08)
	struct ARBPlayer* LastDealtDamageTo; // 0x160(0x08)
	struct AActor* LastProjectileHitBy; // 0x168(0x08)
	struct ARBDoor* LastUsedDoor; // 0x170(0x08)
	struct AActor* LastImperativeDistractor; // 0x178(0x08)
	struct TArray<struct FMoveFailedInfo> FailedMovesToActor; // 0x180(0x10)
	char pad_190[0x108]; // 0x190(0x108)
};

// ScriptStruct OPP.MoveFailedInfo
// Size: 0x10 (Inherited: 0x00)
struct FMoveFailedInfo {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct AActor* DestActor; // 0x08(0x08)
};

// ScriptStruct OPP.AIReceivedDamageData
// Size: 0x18 (Inherited: 0x00)
struct FAIReceivedDamageData {
	char pad_0[0x8]; // 0x00(0x08)
	struct ARBPawn* Attacker; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct OPP.AISeekingHidingSpotData
// Size: 0x28 (Inherited: 0x00)
struct FAISeekingHidingSpotData {
	struct URBHidespotComponent* TargetSpot; // 0x00(0x08)
	struct TArray<struct URBHidespotComponent*> FailedDestinations; // 0x08(0x10)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct OPP.AIMonsterClosetData
// Size: 0x10 (Inherited: 0x00)
struct FAIMonsterClosetData {
	struct ARBMonsterCloset* ClosetActor; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct OPP.BotRetirementConfig
// Size: 0x18 (Inherited: 0x00)
struct FBotRetirementConfig {
	char pad_0[0x10]; // 0x00(0x10)
	struct ARBMonsterCloset* SpecificCloset; // 0x10(0x08)
};

// ScriptStruct OPP.AIRetirementData
// Size: 0x38 (Inherited: 0x00)
struct FAIRetirementData {
	char pad_0[0x8]; // 0x00(0x08)
	struct ARBMonsterCloset* MonsterClosetDestination; // 0x08(0x08)
	char pad_10[0x28]; // 0x10(0x28)
};

// ScriptStruct OPP.AISneakData
// Size: 0x40 (Inherited: 0x00)
struct FAISneakData {
	char pad_0[0x28]; // 0x00(0x28)
	struct ARBPlayer* TargetPlayer; // 0x28(0x08)
	char pad_30[0x10]; // 0x30(0x10)
};

// ScriptStruct OPP.AIPlayerAvoidanceData
// Size: 0x58 (Inherited: 0x00)
struct FAIPlayerAvoidanceData {
	struct ARBPlayer* PlayerBeingAvoided; // 0x00(0x08)
	char pad_8[0x50]; // 0x08(0x50)
};

// ScriptStruct OPP.AIGroundAndPoundData
// Size: 0x18 (Inherited: 0x00)
struct FAIGroundAndPoundData {
	struct ARBPlayer* TargetPlayer; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct OPP.AIImperativeActionData
// Size: 0x30 (Inherited: 0x00)
struct FAIImperativeActionData {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* Actor; // 0x08(0x08)
	char pad_10[0x20]; // 0x10(0x20)
};

// ScriptStruct OPP.AIAttackData
// Size: 0x70 (Inherited: 0x00)
struct FAIAttackData {
	struct FAIAttackTarget Target; // 0x00(0x28)
	char pad_28[0x48]; // 0x28(0x48)
};

// ScriptStruct OPP.AIAttackTarget
// Size: 0x28 (Inherited: 0x00)
struct FAIAttackTarget {
	struct AActor* TargetActor; // 0x00(0x08)
	struct ARBPawn* TargetPawn; // 0x08(0x08)
	struct ARBPlayer* TargetPlayer; // 0x10(0x08)
	struct FVector targetPosition; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct OPP.InvestigationConfig
// Size: 0x60 (Inherited: 0x00)
struct FInvestigationConfig {
	char pad_0[0x10]; // 0x00(0x10)
	struct TArray<struct AActor*> SpecifiedInvestigationPoints; // 0x10(0x10)
	char pad_20[0x10]; // 0x20(0x10)
	struct ARBPlayer* InitialPlayerTargetLocation; // 0x30(0x08)
	char pad_38[0x28]; // 0x38(0x28)
};

// ScriptStruct OPP.PatrolData
// Size: 0x50 (Inherited: 0x00)
struct FPatrolData {
	char pad_0[0x40]; // 0x00(0x40)
	struct TArray<struct FWaypointSelectionDebugData> WaypointSelectionData; // 0x40(0x10)
};

// ScriptStruct OPP.WaypointSelectionDebugData
// Size: 0x40 (Inherited: 0x00)
struct FWaypointSelectionDebugData {
	struct ARBWaypoint* Waypoint; // 0x00(0x08)
	char pad_8[0x38]; // 0x08(0x38)
};

// ScriptStruct OPP.PatrolConfig
// Size: 0x60 (Inherited: 0x00)
struct FPatrolConfig {
	char pad_0[0x18]; // 0x00(0x18)
	struct TArray<struct ARBWaypoint*> WaypointList; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
	struct ARBWaypoint* DestinationWaypoint; // 0x30(0x08)
	char pad_38[0x18]; // 0x38(0x18)
	struct URBAmbientStationComponent* DestinationAmbientStation; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct OPP.BotActivityParams
// Size: 0x0b (Inherited: 0x00)
struct FBotActivityParams {
	bool bAlwaysIgnorePlayers; // 0x00(0x01)
	bool bAllowMoving; // 0x01(0x01)
	bool bAllowRepulsion; // 0x02(0x01)
	bool bAllowLookAt; // 0x03(0x01)
	bool bCanBeDisturbed; // 0x04(0x01)
	bool bAllowCycleBreakers; // 0x05(0x01)
	bool bAllowIdleTargetLookAt; // 0x06(0x01)
	bool bCanReactToImperativeAction; // 0x07(0x01)
	bool bAlwaysAllowRetirement; // 0x08(0x01)
	bool bAllowForcedRetirement; // 0x09(0x01)
	bool bBreathing; // 0x0a(0x01)
};

// ScriptStruct OPP.RBBreadcrumb
// Size: 0x18 (Inherited: 0x00)
struct FRBBreadcrumb {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct OPP.CameraDestructionSoundState
// Size: 0x28 (Inherited: 0x00)
struct FCameraDestructionSoundState {
	struct UAkAudioEvent* StartEvent; // 0x00(0x08)
	struct UAkAudioEvent* StopEvent; // 0x08(0x08)
	struct UAkAudioEvent* SuccessEvent; // 0x10(0x08)
	struct UAkAudioEvent* StartInteractionEvent; // 0x18(0x08)
	struct UAkAudioEvent* StopInteractionEvent; // 0x20(0x08)
};

// ScriptStruct OPP.UICustomizationItem
// Size: 0x30 (Inherited: 0x00)
struct FUICustomizationItem {
	struct URBPlayerCustomizationOption* CustomizationOption; // 0x00(0x08)
	struct URBCustomizationOutfit* Outfit; // 0x08(0x08)
	struct URBVoiceCustomizationOption* VoiceOption; // 0x10(0x08)
	struct URBPlayerIconCustomizationOption* PlayerIconOption; // 0x18(0x08)
	struct URBPlayerCellItemDefinition* CellOption; // 0x20(0x08)
	bool bIsEquipped; // 0x28(0x01)
	enum class ECustomizationInteractionType InteractionType; // 0x29(0x01)
	bool bIsFemale; // 0x2a(0x01)
	bool bIsNew; // 0x2b(0x01)
	bool bIsDLC; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct OPP.DelayedBugIt
// Size: 0x18 (Inherited: 0x00)
struct FDelayedBugIt {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct OPP.RBBugItDataRequest_Client
// Size: 0x18 (Inherited: 0x00)
struct FRBBugItDataRequest_Client {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct OPP.RBBugItDataRequest_Server
// Size: 0x20 (Inherited: 0x00)
struct FRBBugItDataRequest_Server {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct ARBNPC*> NPCsToProcess; // 0x08(0x10)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct OPP.RBBugReportInfo
// Size: 0x68 (Inherited: 0x00)
struct FRBBugReportInfo {
	struct FString Timestamp; // 0x00(0x10)
	struct FString ShortDesc; // 0x10(0x10)
	int32_t BuildId; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString StageName; // 0x28(0x10)
	struct FString LocationStr; // 0x38(0x10)
	struct FString ServerLogs; // 0x48(0x10)
	struct TArray<struct FString> Platforms; // 0x58(0x10)
};

// ScriptStruct OPP.QuickGraph
// Size: 0x28 (Inherited: 0x00)
struct FQuickGraph {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct FQuickGraphEntry> Entries; // 0x08(0x10)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct OPP.QuickGraphEntry
// Size: 0x0c (Inherited: 0x00)
struct FQuickGraphEntry {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct OPP.ActorInViewDebugData
// Size: 0x10 (Inherited: 0x00)
struct FActorInViewDebugData {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* DebugActor; // 0x08(0x08)
};

// ScriptStruct OPP.HiddenActorInfo
// Size: 0x28 (Inherited: 0x00)
struct FHiddenActorInfo {
	struct AActor* Actor; // 0x00(0x08)
	struct TArray<struct AActor*> HiddenAttachedActors; // 0x08(0x10)
	struct TArray<struct UPrimitiveComponent*> HideShadowComponents; // 0x18(0x10)
};

// ScriptStruct OPP.ClueData
// Size: 0x08 (Inherited: 0x00)
struct FClueData {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct OPP.RBCollectibleDocumentGroupRow
// Size: 0x80 (Inherited: 0x08)
struct FRBCollectibleDocumentGroupRow : FTableRowBase {
	struct FName ID; // 0x08(0x08)
	struct FText Name; // 0x10(0x18)
	struct FText Location; // 0x28(0x18)
	struct FText Description; // 0x40(0x18)
	struct TSoftObjectPtr<UTexture2D> Thumbnail; // 0x58(0x28)
};

// ScriptStruct OPP.RBCollectibleDocumentDefinitionRow
// Size: 0xe8 (Inherited: 0x08)
struct FRBCollectibleDocumentDefinitionRow : FTableRowBase {
	struct FName ID; // 0x08(0x08)
	struct FText Name; // 0x10(0x18)
	struct FText Category; // 0x28(0x18)
	struct FText Date; // 0x40(0x18)
	enum class ECollectibleType Type; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FText Content; // 0x60(0x18)
	struct TSoftObjectPtr<UTexture2D> Photo; // 0x78(0x28)
	struct FName DisplayGroupId; // 0xa0(0x08)
	struct TArray<struct FName> TrialGroupIds; // 0xa8(0x10)
	bool bAlwaysAvailable; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct TSoftObjectPtr<UTexture2D> Thumbnail; // 0xc0(0x28)
};

// ScriptStruct OPP.RBComponentSelector
// Size: 0x40 (Inherited: 0x00)
struct FRBComponentSelector {
	struct UActorComponent* SpecificComponentClass; // 0x00(0x08)
	struct TSoftObjectPtr<AActor> TargetActor; // 0x08(0x28)
	struct FName ComponentName; // 0x30(0x08)
	struct UActorComponent* ActorComponent; // 0x38(0x08)
};

// ScriptStruct OPP.ContainerSpawnedItemInfo
// Size: 0x10 (Inherited: 0x00)
struct FContainerSpawnedItemInfo {
	struct ARBPickup* Item; // 0x00(0x08)
	int32_t SelectedSpawnLocationIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct OPP.ContainerForcedContentSettings
// Size: 0x10 (Inherited: 0x00)
struct FContainerForcedContentSettings {
	struct TArray<struct FContainerForcedContentItemSettings> ForcedItemPossibilities; // 0x00(0x10)
};

// ScriptStruct OPP.ContainerForcedContentItemSettings
// Size: 0xd0 (Inherited: 0x00)
struct FContainerForcedContentItemSettings {
	struct ARBPickup* ItemClass; // 0x00(0x08)
	struct FConfigurableFloat SpawnChancePercent; // 0x08(0xc8)
};

// ScriptStruct OPP.CustomContainerPickupAnimationSettings
// Size: 0x38 (Inherited: 0x00)
struct FCustomContainerPickupAnimationSettings {
	struct UAnimSequenceBase* Pickup1PAnimSequence; // 0x00(0x08)
	struct UAnimSequenceBase* CrouchedPickup1PAnimSequence; // 0x08(0x08)
	struct UAnimSequenceBase* Pickup3PAnimSequence; // 0x10(0x08)
	struct UAnimSequenceBase* CrouchedPickup3PAnimSequence; // 0x18(0x08)
	struct URBGhostAnimInstance* GhostAnimInstance; // 0x20(0x08)
	bool bForceCrouch; // 0x28(0x01)
	bool bNeedBothHandsForAnim; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	struct FName CustomAttachItemBone; // 0x2c(0x08)
	bool bUseAnimAnchorForPosition; // 0x34(0x01)
	bool bUseParentActorForAnchorReference; // 0x35(0x01)
	bool bAnimationFacingActorRef; // 0x36(0x01)
	bool bAnimationXForward; // 0x37(0x01)
};

// ScriptStruct OPP.PlayerBreathData
// Size: 0x20 (Inherited: 0x00)
struct FPlayerBreathData {
	char pad_0[0x18]; // 0x00(0x18)
	struct UAkAudioEvent* PlayerBreathStopFastEvent; // 0x18(0x08)
};

// ScriptStruct OPP.PawnInsideCameraInfo
// Size: 0x10 (Inherited: 0x00)
struct FPawnInsideCameraInfo {
	struct ARBPawn* Pawn; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct OPP.ThreatLevelInfo
// Size: 0x18 (Inherited: 0x00)
struct FThreatLevelInfo {
	struct ARBNPC* ThreateningNPC; // 0x00(0x08)
	float ThreatLevelRTPC; // 0x08(0x04)
	char pad_C[0xc]; // 0x0c(0x0c)
};

// ScriptStruct OPP.SpectatorData
// Size: 0x18 (Inherited: 0x00)
struct FSpectatorData {
	struct ARBPlayer* TargetPlayer; // 0x00(0x08)
	struct ARBPlayer* TargetPlayer_Local; // 0x08(0x08)
	float TargetPlayerTimestamp_Local; // 0x10(0x04)
	enum class ESpectatorMode SpectatorMode; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct OPP.CurrencyPackMenuItem
// Size: 0x60 (Inherited: 0x00)
struct FCurrencyPackMenuItem {
	struct FString Name; // 0x00(0x10)
	int32_t Quantity; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Currency; // 0x18(0x10)
	int32_t Price; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString DisplayPrice; // 0x30(0x10)
	struct FString Title; // 0x40(0x10)
	struct FString Description; // 0x50(0x10)
};

// ScriptStruct OPP.PlayerDamagedData
// Size: 0x18 (Inherited: 0x00)
struct FPlayerDamagedData {
	struct ARBPawn* Player; // 0x00(0x08)
	float InitialHealth; // 0x08(0x04)
	float InitialTimestamp; // 0x0c(0x04)
	float LastDamageTimestamp; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct OPP.NPCHitReactionParams
// Size: 0x38 (Inherited: 0x00)
struct FNPCHitReactionParams {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	enum class ENPCHitReactionType ReactionType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float ImpactYawWS; // 0x0c(0x04)
	bool bPlayEffects; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FVector ImpactLocation; // 0x14(0x0c)
	struct FVector TargetPos; // 0x20(0x0c)
	struct FVector TargetDir; // 0x2c(0x0c)
};

// ScriptStruct OPP.ContinuousAttackDrug
// Size: 0x20 (Inherited: 0x00)
struct FContinuousAttackDrug {
	char pad_0[0x10]; // 0x00(0x10)
	struct TArray<struct ARBPawn*> Targets; // 0x10(0x10)
};

// ScriptStruct OPP.ContinuousAttackDamage
// Size: 0x28 (Inherited: 0x00)
struct FContinuousAttackDamage {
	char pad_0[0x20]; // 0x00(0x20)
	struct ARBPawn* Target; // 0x20(0x08)
};

// ScriptStruct OPP.CustomDamageInfoData
// Size: 0xd8 (Inherited: 0x00)
struct FCustomDamageInfoData {
	enum class EDamageType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FConfigurableFloat DmgAmount; // 0x08(0xc8)
	bool bCanKnockdown; // 0xd0(0x01)
	bool bCanKill; // 0xd1(0x01)
	char pad_D2[0x6]; // 0xd2(0x06)
};

// ScriptStruct OPP.DeadBodyJumpScareSetting
// Size: 0x40 (Inherited: 0x00)
struct FDeadBodyJumpScareSetting {
	struct FCustomContainerPickupAnimationSettings PlayerAnimationSettings; // 0x00(0x38)
	struct UAnimSequenceBase* DeadBodyAnimSequence; // 0x38(0x08)
};

// ScriptStruct OPP.RBDestructibleAction
// Size: 0x28 (Inherited: 0x00)
struct FRBDestructibleAction {
	enum class EDestructibleActionType actionType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector Origin; // 0x04(0x0c)
	struct FVector Direction; // 0x10(0x0c)
	float Radius; // 0x1c(0x04)
	float strength; // 0x20(0x04)
	int32_t Falloff; // 0x24(0x04)
};

// ScriptStruct OPP.RBDestructibleBodyInstState
// Size: 0x70 (Inherited: 0x00)
struct FRBDestructibleBodyInstState {
	char pad_0[0x70]; // 0x00(0x70)
};

// ScriptStruct OPP.ConfigurableBool
// Size: 0x60 (Inherited: 0x38)
struct FConfigurableBool : FConfigurableValue {
	struct FInternalBoolByDifficulty DefaultValues; // 0x38(0x08)
	bool bLocalOverrideFor1P; // 0x40(0x01)
	struct FInternalBoolByDifficulty Values1P; // 0x41(0x08)
	bool bLocalOverrideFor2P; // 0x49(0x01)
	struct FInternalBoolByDifficulty Values2P; // 0x4a(0x08)
	bool bLocalOverrideFor3P; // 0x52(0x01)
	struct FInternalBoolByDifficulty Values3P; // 0x53(0x08)
	char pad_5B[0x5]; // 0x5b(0x05)
};

// ScriptStruct OPP.InternalBoolByDifficulty
// Size: 0x08 (Inherited: 0x00)
struct FInternalBoolByDifficulty {
	bool bOverrideEasyLocalValue; // 0x00(0x01)
	bool EasyLocalValue; // 0x01(0x01)
	bool bOverrideNormalLocalValue; // 0x02(0x01)
	bool NormalLocalValue; // 0x03(0x01)
	bool bOverrideHardLocalValue; // 0x04(0x01)
	bool HardLocalValue; // 0x05(0x01)
	bool bOverrideInsaneLocalValue; // 0x06(0x01)
	bool InsaneLocalValue; // 0x07(0x01)
};

// ScriptStruct OPP.ConfigurableInt
// Size: 0xc8 (Inherited: 0x38)
struct FConfigurableInt : FConfigurableValue {
	struct FInternalIntByDifficulty DefaultValues; // 0x38(0x20)
	bool bLocalOverrideFor1P; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	struct FInternalIntByDifficulty Values1P; // 0x5c(0x20)
	bool bLocalOverrideFor2P; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	struct FInternalIntByDifficulty Values2P; // 0x80(0x20)
	bool bLocalOverrideFor3P; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	struct FInternalIntByDifficulty Values3P; // 0xa4(0x20)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// ScriptStruct OPP.InternalIntByDifficulty
// Size: 0x20 (Inherited: 0x00)
struct FInternalIntByDifficulty {
	bool bOverrideEasyLocalValue; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t EasyLocalValue; // 0x04(0x04)
	bool bOverrideNormalLocalValue; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t NormalLocalValue; // 0x0c(0x04)
	bool bOverrideHardLocalValue; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t HardLocalValue; // 0x14(0x04)
	bool bOverrideInsaneLocalValue; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t InsaneLocalValue; // 0x1c(0x04)
};

// ScriptStruct OPP.DizzinessConfig
// Size: 0xd4 (Inherited: 0x00)
struct FDizzinessConfig {
	float Intensity; // 0x00(0x04)
	float duration; // 0x04(0x04)
	float BlendInTime; // 0x08(0x04)
	float blendOutTime; // 0x0c(0x04)
	bool bBlur; // 0x10(0x01)
	bool bInertialCameraDrift; // 0x11(0x01)
	bool bIdleCameraDrift; // 0x12(0x01)
	bool bAffectMovementHeading; // 0x13(0x01)
	bool bDisableJump; // 0x14(0x01)
	bool bCapPlayerSpeed; // 0x15(0x01)
	bool bThrobbing; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
	float BlurAmount; // 0x18(0x04)
	float MaxPlayerSpeed; // 0x1c(0x04)
	float MaxCameraRotationSpeed; // 0x20(0x04)
	struct FDizzinessIdleDriftConfig IdleDrift; // 0x24(0x44)
	struct FDizzinessInertialDriftConfig InertialDrift; // 0x68(0x40)
	struct FDizzinessMovementConfig Movement; // 0xa8(0x18)
	struct FDizzinessThrobbingConfig Throbbing; // 0xc0(0x14)
};

// ScriptStruct OPP.DizzinessThrobbingConfig
// Size: 0x14 (Inherited: 0x00)
struct FDizzinessThrobbingConfig {
	float Freq; // 0x00(0x04)
	float SineExp; // 0x04(0x04)
	float EnvelopeExp; // 0x08(0x04)
	float Phase; // 0x0c(0x04)
	float ConstantRatio; // 0x10(0x04)
};

// ScriptStruct OPP.DizzinessMovementConfig
// Size: 0x18 (Inherited: 0x00)
struct FDizzinessMovementConfig {
	float MinDelayForAngleChange; // 0x00(0x04)
	float MaxDelayForAngleChange; // 0x04(0x04)
	float MaxAngleOffset; // 0x08(0x04)
	float MinApproachCoeff; // 0x0c(0x04)
	float MaxApproachCoeff; // 0x10(0x04)
	float RandomMotion; // 0x14(0x04)
};

// ScriptStruct OPP.DizzinessInertialDriftConfig
// Size: 0x40 (Inherited: 0x00)
struct FDizzinessInertialDriftConfig {
	float YawDriftInertialFactor; // 0x00(0x04)
	float YawDriftInertialFactorLimit; // 0x04(0x04)
	float YawNonLinearSpringAngleStart; // 0x08(0x04)
	float YawMaxInertialDrift; // 0x0c(0x04)
	float YawInertialDamping; // 0x10(0x04)
	float YawInertialFriction; // 0x14(0x04)
	bool bYawDampingOnVelocity; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float PitchDriftInertialFactor; // 0x1c(0x04)
	float PitchDriftInertialFactorLimit; // 0x20(0x04)
	float PitchNonLinearSpringAngleStart; // 0x24(0x04)
	float PitchMaxInertialDrift; // 0x28(0x04)
	float PitchInertialDamping; // 0x2c(0x04)
	float PitchInertialFriction; // 0x30(0x04)
	bool bPitchDampingOnVelocity; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float IdleDriftWeightApproachDown; // 0x38(0x04)
	float IdleDriftWeightApproachUp; // 0x3c(0x04)
};

// ScriptStruct OPP.DizzinessIdleDriftConfig
// Size: 0x44 (Inherited: 0x00)
struct FDizzinessIdleDriftConfig {
	float YawDriftAmpl; // 0x00(0x04)
	float PitchDriftAmpl; // 0x04(0x04)
	float RollDriftAmpl; // 0x08(0x04)
	float DriftPeriod; // 0x0c(0x04)
	float MinSpeedMultiplierDuration; // 0x10(0x04)
	float MaxSpeedMultiplierDuration; // 0x14(0x04)
	float MinSpeedMultiplier; // 0x18(0x04)
	float MaxSpeedMultiplier; // 0x1c(0x04)
	float SpeedMultiplierApproach; // 0x20(0x04)
	float MinAmpMultiplier; // 0x24(0x04)
	float MaxAmpMultiplier; // 0x28(0x04)
	float MaxAutoRoll; // 0x2c(0x04)
	float MaxTotalRoll; // 0x30(0x04)
	float AutoRollForFullWeight; // 0x34(0x04)
	float AutoRollApproach; // 0x38(0x04)
	float PlayerRotSpdThresh; // 0x3c(0x04)
	float PlayerRotSpdForMaxAutoRoll; // 0x40(0x04)
};

// ScriptStruct OPP.DoorInvestigationData
// Size: 0x04 (Inherited: 0x00)
struct FDoorInvestigationData {
	bool bFrontValid; // 0x00(0x01)
	bool bFrontValid_Wide; // 0x01(0x01)
	bool bBackValid; // 0x02(0x01)
	bool bBackValid_Wide; // 0x03(0x01)
};

// ScriptStruct OPP.DoorInteractionAudioEvent
// Size: 0x10 (Inherited: 0x00)
struct FDoorInteractionAudioEvent {
	char pad_0[0x8]; // 0x00(0x08)
	struct UAkAudioEvent* Event; // 0x08(0x08)
};

// ScriptStruct OPP.RBResultScreenMurkoffCommentRow
// Size: 0x38 (Inherited: 0x08)
struct FRBResultScreenMurkoffCommentRow : FTableRowBase {
	enum class EPlayerTrialRating MinimumRating; // 0x08(0x01)
	enum class EPlayerTrialRating MaximumRating; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32_t MinimumDeathCount; // 0x0c(0x04)
	int32_t MaximumDeathCount; // 0x10(0x04)
	int32_t MinimumPlayerCount; // 0x14(0x04)
	int32_t MaximumPlayerCount; // 0x18(0x04)
	float Weight; // 0x1c(0x04)
	struct FText Text; // 0x20(0x18)
};

// ScriptStruct OPP.TextureCachedData
// Size: 0x10 (Inherited: 0x00)
struct FTextureCachedData {
	struct TArray<struct FColor> ColorData; // 0x00(0x10)
};

// ScriptStruct OPP.PostProcessParamData
// Size: 0x10 (Inherited: 0x00)
struct FPostProcessParamData {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct OPP.FXPostProcessData
// Size: 0x10 (Inherited: 0x00)
struct FFXPostProcessData {
	char pad_0[0x8]; // 0x00(0x08)
	struct UMaterialInstanceDynamic* Material; // 0x08(0x08)
};

// ScriptStruct OPP.FXPostProcessSettings
// Size: 0x28 (Inherited: 0x00)
struct FFXPostProcessSettings {
	char pad_0[0x10]; // 0x00(0x10)
	struct UObject* Owner; // 0x10(0x08)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct OPP.AdditiveFOVData
// Size: 0x18 (Inherited: 0x00)
struct FAdditiveFOVData {
	char pad_0[0x10]; // 0x00(0x10)
	struct UCurveFloat* FOVCurve; // 0x10(0x08)
};

// ScriptStruct OPP.RBGameConditionSet
// Size: 0x10 (Inherited: 0x00)
struct FRBGameConditionSet {
	struct TArray<struct URBGameCondition*> Conditions; // 0x00(0x10)
};

// ScriptStruct OPP.CachedRuntimeCustomizationResources
// Size: 0x20 (Inherited: 0x00)
struct FCachedRuntimeCustomizationResources {
	struct FProfileId ProfileId; // 0x00(0x10)
	struct TArray<struct UObject*> Resources; // 0x10(0x10)
};

// ScriptStruct OPP.CoopMoveEntry
// Size: 0x78 (Inherited: 0x00)
struct FCoopMoveEntry {
	struct FUniqueNetIdRepl PlayerANetId; // 0x00(0x28)
	struct FUniqueNetIdRepl PlayerBNetId; // 0x28(0x28)
	struct TSoftObjectPtr<AActor> CoopMoveActor; // 0x50(0x28)
};

// ScriptStruct OPP.RuntimeStageInfo
// Size: 0x88 (Inherited: 0x00)
struct FRuntimeStageInfo {
	struct FRBGameStageInfo gameStageInfo; // 0x00(0x60)
	float StartedTime; // 0x60(0x04)
	float EndTime; // 0x64(0x04)
	int32_t Attempts; // 0x68(0x04)
	bool bSucceeded; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	int32_t OutsidePersistentLevelIndex; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TArray<struct FUniqueNetIdRepl> Survivors; // 0x78(0x10)
};

// ScriptStruct OPP.PendingMatchDetails
// Size: 0xa8 (Inherited: 0x00)
struct FPendingMatchDetails {
	char pad_0[0x10]; // 0x00(0x10)
	struct ARBLobbyPlayerState* Owner; // 0x10(0x08)
	struct TArray<struct ARBLobbyPlayerState*> members; // 0x18(0x10)
	char pad_28[0x80]; // 0x28(0x80)
};

// ScriptStruct OPP.PendingFindPartyRequestDetails
// Size: 0x58 (Inherited: 0x00)
struct FPendingFindPartyRequestDetails {
	char pad_0[0x8]; // 0x00(0x08)
	struct ARBLobbyPlayerState* Owner; // 0x08(0x08)
	struct TArray<struct ARBLobbyPlayerState*> members; // 0x10(0x10)
	char pad_20[0x38]; // 0x20(0x38)
};

// ScriptStruct OPP.RBConfigurableGameplayAttributeModifier
// Size: 0xd0 (Inherited: 0x00)
struct FRBConfigurableGameplayAttributeModifier {
	enum class EGameplayAttributeType AttributeType; // 0x00(0x01)
	enum class EGameplayAttributeModifierType ModifierType; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FConfigurableFloat Value; // 0x08(0xc8)
};

// ScriptStruct OPP.RBAttributeOwnerRuntimeInfo
// Size: 0x38 (Inherited: 0x00)
struct FRBAttributeOwnerRuntimeInfo {
	struct UObject* Owner; // 0x00(0x08)
	char pad_8[0x20]; // 0x08(0x20)
	struct URBGameplayAttributeManager* ManagerOwner; // 0x28(0x08)
	char pad_30[0x8]; // 0x30(0x08)
};

// ScriptStruct OPP.RBGameplayModifierRuntimeInfo
// Size: 0x14 (Inherited: 0x00)
struct FRBGameplayModifierRuntimeInfo {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct OPP.RBSelectableExperimentInfo
// Size: 0x30 (Inherited: 0x00)
struct FRBSelectableExperimentInfo {
	struct FName ExperimentName; // 0x00(0x08)
	struct FText ExperimentDisplayName; // 0x08(0x18)
	struct TArray<struct FRBSelectableStageInfo> AvailableStageInfos; // 0x20(0x10)
};

// ScriptStruct OPP.RBSelectableStageInfo
// Size: 0x40 (Inherited: 0x00)
struct FRBSelectableStageInfo {
	struct FName StageName; // 0x00(0x08)
	struct FText StageDisplayName; // 0x08(0x18)
	struct TArray<struct FName> MissionOptions; // 0x20(0x10)
	struct TArray<struct FText> MissionOptionDisplayNames; // 0x30(0x10)
};

// ScriptStruct OPP.RBObstacleVariatorInfo
// Size: 0x18 (Inherited: 0x00)
struct FRBObstacleVariatorInfo {
	struct TArray<struct FName> LevelNames; // 0x00(0x10)
	enum class EObstacleVariatorType Type; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct OPP.RBSecondaryObjectiveInfo
// Size: 0x18 (Inherited: 0x00)
struct FRBSecondaryObjectiveInfo {
	struct TArray<struct FName> LevelNames; // 0x00(0x10)
	enum class ESecondaryObjectiveVariatorType Type; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct OPP.RBObjectiveGroupInfo
// Size: 0x28 (Inherited: 0x00)
struct FRBObjectiveGroupInfo {
	struct FName GroupID; // 0x00(0x08)
	struct TArray<struct FName> GroupSpecificLevels; // 0x08(0x10)
	struct TArray<struct FRBMainObjectiveInfo> MainObjectiveInfos; // 0x18(0x10)
};

// ScriptStruct OPP.RBMainObjectiveInfo
// Size: 0x58 (Inherited: 0x00)
struct FRBMainObjectiveInfo {
	struct FName ObjectiveID; // 0x00(0x08)
	struct FText LoreObjectiveName; // 0x08(0x18)
	struct FText LoreObjectiveDescription; // 0x20(0x18)
	struct TArray<struct FName> ObjectiveSpecificLevels; // 0x38(0x10)
	enum class EMainObjectiveType Type; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FName LevelName; // 0x4c(0x08)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct OPP.RecentlySeenPlayer
// Size: 0x18 (Inherited: 0x00)
struct FRecentlySeenPlayer {
	struct FProfileId ProfileId; // 0x00(0x10)
	int64_t Timestamp; // 0x10(0x08)
};

// ScriptStruct OPP.VoiceChatVolumeMapping
// Size: 0x14 (Inherited: 0x00)
struct FVoiceChatVolumeMapping {
	struct FProfileId ProfileId; // 0x00(0x10)
	float Volume; // 0x10(0x04)
};

// ScriptStruct OPP.PlayerGarageDoorInfo
// Size: 0x10 (Inherited: 0x00)
struct FPlayerGarageDoorInfo {
	struct ARBPlayer* Player; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct OPP.NPCConfigRedirector
// Size: 0x28 (Inherited: 0x00)
struct FNPCConfigRedirector {
	struct URBAIConfig* ConfigToRedirect; // 0x00(0x08)
	struct URBAIConfig* EasyConfig; // 0x08(0x08)
	struct URBAIConfig* NormalConfig; // 0x10(0x08)
	struct URBAIConfig* HardConfig; // 0x18(0x08)
	struct URBAIConfig* InsaneConfig; // 0x20(0x08)
};

// ScriptStruct OPP.RandomSpawnParams
// Size: 0x678 (Inherited: 0x00)
struct FRandomSpawnParams {
	enum class ENPCType NPCType; // 0x00(0x01)
	bool bEnable; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FConfigurableFloat AverageSpawnWaitInMinutes; // 0x08(0xc8)
	struct FSpawnEventConditions SpawnConditions; // 0xd0(0x4d8)
	enum class ESpecialBotInitialBehavior InitialBotBehavior; // 0x5a8(0x01)
	char pad_5A9[0x7]; // 0x5a9(0x07)
	struct FConfigurableFloat MinBotLifetime; // 0x5b0(0xc8)
};

// ScriptStruct OPP.SpawnEventConditions
// Size: 0x4d8 (Inherited: 0x00)
struct FSpawnEventConditions {
	struct FConfigurableFloat MinStageTimeInMinutes; // 0x00(0xc8)
	struct FConfigurableInt MinNumHealthyPlayers; // 0xc8(0xc8)
	struct FConfigurableFloat MinDelayBetweenSpawns; // 0x190(0xc8)
	struct FConfigurableFloat MinDelaySinceLastActive; // 0x258(0xc8)
	struct FConfigurableInt MaxActiveBotsOfSameType; // 0x320(0xc8)
	struct FRBGameConditionSet GlobalSpawnConditions; // 0x3e8(0x10)
	bool bMustTargetSpecificPlayer; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)
	struct FRBPlayerConditionSet TargetConditions; // 0x400(0x10)
	struct FConfigurableFloat MaxSpawnDistanceToTarget; // 0x410(0xc8)
};

// ScriptStruct OPP.RBPlayerConditionSet
// Size: 0x10 (Inherited: 0x00)
struct FRBPlayerConditionSet {
	struct TArray<struct URBPlayerCondition*> Conditions; // 0x00(0x10)
};

// ScriptStruct OPP.DesignatedRetirementParams
// Size: 0x68 (Inherited: 0x00)
struct FDesignatedRetirementParams {
	struct FGameplayTagContainer AllowRetirementOnlyFor; // 0x00(0x20)
	struct FGameplayTagContainer DenyRetirementFor; // 0x20(0x20)
	struct FRBAIConditionSet DesignatedRetirementConditions; // 0x40(0x10)
	float ScoreContribForCloseToPlayer; // 0x50(0x04)
	float CloseToPlayerDist; // 0x54(0x04)
	float ScoreContribForChase; // 0x58(0x04)
	float ScoreContribForLKPInvestigate; // 0x5c(0x04)
	float ScoreContribForNormalInvestigate; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct OPP.EventConditionalRetirementParams
// Size: 0x58 (Inherited: 0x00)
struct FEventConditionalRetirementParams {
	enum class EConditionalRetirementEvent Event; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MinimumBotTravel; // 0x04(0x04)
	struct FGameplayTagContainer AllowRetirementOnlyFor; // 0x08(0x20)
	struct FGameplayTagContainer DenyRetirementFor; // 0x28(0x20)
	struct FRBAIConditionSet RetirementConditions; // 0x48(0x10)
};

// ScriptStruct OPP.GlobalConditionalRetirementParams
// Size: 0x50 (Inherited: 0x00)
struct FGlobalConditionalRetirementParams {
	struct FGameplayTagContainer AllowRetirementOnlyFor; // 0x00(0x20)
	struct FGameplayTagContainer DenyRetirementFor; // 0x20(0x20)
	struct FRBAIConditionSet RetirementConditions; // 0x40(0x10)
};

// ScriptStruct OPP.DynamicPressureConfig
// Size: 0x1490 (Inherited: 0x00)
struct FDynamicPressureConfig {
	struct FPressureFromAdversityParams AdversityContribToPressure; // 0x00(0x1b8)
	struct FPressureBeatParams PressureBeats; // 0x1b8(0x3f0)
	struct TArray<struct FSpawnRuleParams> SpawnEventRules; // 0x5a8(0x10)
	struct FPressureEventParams MainObjectiveCompletedPressureEvent; // 0x5b8(0x6a0)
	struct FPressureEventParams LastObjectiveCompletedPressureEvent; // 0xc58(0x6a0)
	struct FConfigurableFloat MinSpawnInterval; // 0x12f8(0xc8)
	struct FConfigurableFloat MinimumStandardBotTimeInLimbo; // 0x13c0(0xc8)
	float ReliefConversionRatePressurePointsPerDifficultyPoints; // 0x1488(0x04)
	char pad_148C[0x4]; // 0x148c(0x04)
};

// ScriptStruct OPP.PressureEventParams
// Size: 0x6a0 (Inherited: 0x00)
struct FPressureEventParams {
	struct FString EventName; // 0x00(0x10)
	bool bEnablePressureEvent; // 0x10(0x01)
	bool bResetPressureBeatTimer; // 0x11(0x01)
	bool bClearPressurePoints; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	struct FConfigurableInt PressureVariation; // 0x18(0xc8)
	bool bApplyPressurePointsOnlyIfExplicitSpawnUnavailable; // 0xe0(0x01)
	bool bEnableExplicitSpawn; // 0xe1(0x01)
	char pad_E2[0x6]; // 0xe2(0x06)
	struct TArray<enum class ENPCType> NPCTypes; // 0xe8(0x10)
	struct FSpawnEventConditions SpawnConditions; // 0xf8(0x4d8)
	enum class ESpecialBotInitialBehavior InitialBotBehavior; // 0x5d0(0x01)
	char pad_5D1[0x7]; // 0x5d1(0x07)
	struct FConfigurableFloat MinBotLifetime; // 0x5d8(0xc8)
};

// ScriptStruct OPP.SpawnRuleParams
// Size: 0x7c0 (Inherited: 0x00)
struct FSpawnRuleParams {
	struct FString RuleName; // 0x00(0x10)
	struct TArray<enum class ENPCType> NPCTypes; // 0x10(0x10)
	struct FConfigurableBool bEnabled; // 0x20(0x60)
	int32_t RulePriorityLevel; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FConfigurableFloat RelativeOdds; // 0x88(0xc8)
	struct FSpawnEventConditions SpawnConditions; // 0x150(0x4d8)
	struct FConfigurableInt PressurePointsSpawnConsumption; // 0x628(0xc8)
	enum class ESpecialBotInitialBehavior InitialBotBehavior; // 0x6f0(0x01)
	char pad_6F1[0x7]; // 0x6f1(0x07)
	struct FConfigurableFloat MinBotLifetime; // 0x6f8(0xc8)
};

// ScriptStruct OPP.PressureBeatParams
// Size: 0x3f0 (Inherited: 0x00)
struct FPressureBeatParams {
	bool bEnablePressureBeats; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FConfigurableFloat MinStageTimeBeforeFirstBeatInMinutes; // 0x08(0xc8)
	struct FConfigurableFloat MaxStageTimeBeforeFirstBeatInMinutes; // 0xd0(0xc8)
	struct FConfigurableFloat MinBeatIntervalInMinutes; // 0x198(0xc8)
	struct FConfigurableFloat MaxBeatIntervalInMinutes; // 0x260(0xc8)
	struct FConfigurableInt PressureVariation; // 0x328(0xc8)
};

// ScriptStruct OPP.PressureFromAdversityParams
// Size: 0x1b8 (Inherited: 0x00)
struct FPressureFromAdversityParams {
	bool bEnableAddingPressureFromLowAdversity; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FConfigurableInt PressurePointsToAddForSustainedLowAdversity; // 0x08(0xc8)
	float MinTotalTimeAccumulationInLowAdversity; // 0xd0(0x04)
	float MinConsecutiveTimeAccumulationInLowAdversity; // 0xd4(0x04)
	float AdversityMeterLowAdversityThreshold; // 0xd8(0x04)
	bool bEnableRemovingPressureFromAdversity; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	struct FConfigurableInt PressurePointsToRemoveForSustainedHighAdversity; // 0xe0(0xc8)
	float MinTotalTimeAccumulationInHighAdversity; // 0x1a8(0x04)
	float MinConsecutiveTimeAccumulationInHighAdversity; // 0x1ac(0x04)
	float AdversityMeterHighAdversityThreshold; // 0x1b0(0x04)
	char pad_1B4[0x4]; // 0x1b4(0x04)
};

// ScriptStruct OPP.NPCSpawnWaveParams
// Size: 0x218 (Inherited: 0x00)
struct FNPCSpawnWaveParams {
	struct FConfigurableBool bEnabled; // 0x00(0x60)
	struct UAkAudioEvent* AudioAnnouncement; // 0x60(0x08)
	struct URBNPCRandomizationConfig* RandomizationConfig; // 0x68(0x08)
	struct FConfigurableFloat MinStageTimeInMinutes; // 0x70(0xc8)
	float MaxRandomDelay; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct FRBGameConditionSet WaveTriggerConditions; // 0x140(0x10)
	struct FConfigurableFloat ChangeDurationInSeconds; // 0x150(0xc8)
};

// ScriptStruct OPP.SpecialistsConfigData
// Size: 0x12f8 (Inherited: 0x00)
struct FSpecialistsConfigData {
	struct FSpecialistsGlobalConfig Global; // 0x00(0x20)
	struct FProximityAnalysisConfig Proximity; // 0x20(0x340)
	struct FRushingAnalysisConfig Rushing; // 0x360(0x340)
	struct FAdversityAnalysisConfig Adversity; // 0x6a0(0x4e8)
	struct FPouncerConfig Pouncer; // 0xb88(0xd0)
	struct FImposterCustomizationConfig ImposterCustomization; // 0xc58(0x340)
	struct FGooseberryConfig Gooseberry; // 0xf98(0x1b0)
	struct FCoyleConfig Coyle; // 0x1148(0x1b0)
};

// ScriptStruct OPP.CoyleConfig
// Size: 0x1b0 (Inherited: 0x00)
struct FCoyleConfig {
	struct FPrimeAssetCommonConfig PrimeAssetCommonConfig; // 0x00(0x08)
	char bOverride_PrimeAssetCommonConfig : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FConfigurableFloat FakedCoyleTravelSpeed; // 0x10(0xc8)
	char bOverride_FakedCoyleTravelSpeed : 1; // 0xd8(0x01)
	char pad_D8_1 : 7; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct FConfigurableFloat MaxDistToAPlayerForCoyleRespawn; // 0xe0(0xc8)
	char bOverride_MaxDistToAPlayerForCoyleRespawn : 1; // 0x1a8(0x01)
	char pad_1A8_1 : 7; // 0x1a8(0x01)
	char pad_1A9[0x7]; // 0x1a9(0x07)
};

// ScriptStruct OPP.PrimeAssetCommonConfig
// Size: 0x08 (Inherited: 0x00)
struct FPrimeAssetCommonConfig {
	struct UAkAudioEvent* PrimeAssetIntroVO; // 0x00(0x08)
};

// ScriptStruct OPP.GooseberryConfig
// Size: 0x1b0 (Inherited: 0x00)
struct FGooseberryConfig {
	struct FPrimeAssetCommonConfig PrimeAssetCommonConfig; // 0x00(0x08)
	char bOverride_PrimeAssetCommonConfig : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FConfigurableFloat FakedGooseberryTravelSpeed; // 0x10(0xc8)
	char bOverride_FakedGooseberryTravelSpeed : 1; // 0xd8(0x01)
	char pad_D8_1 : 7; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct FConfigurableFloat MaxDistToAPlayerForGooseberryRespawn; // 0xe0(0xc8)
	char bOverride_MaxDistToAPlayerForGooseberryRespawn : 1; // 0x1a8(0x01)
	char pad_1A8_1 : 7; // 0x1a8(0x01)
	char pad_1A9[0x7]; // 0x1a9(0x07)
};

// ScriptStruct OPP.ImposterCustomizationConfig
// Size: 0x340 (Inherited: 0x00)
struct FImposterCustomizationConfig {
	struct FConfigurableBool bCopyCustomizationSlot_NV; // 0x00(0x60)
	char bOverride_bCopyCustomizationSlot_NV : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FConfigurableBool bCopyCustomizationSlot_Hair; // 0x68(0x60)
	char bOverride_bCopyCustomizationSlot_Hair : 1; // 0xc8(0x01)
	char pad_C8_1 : 7; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FConfigurableBool bCopyCustomizationSlot_Head; // 0xd0(0x60)
	char bOverride_bCopyCustomizationSlot_Head : 1; // 0x130(0x01)
	char pad_130_1 : 7; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct FConfigurableBool bCopyCustomizationSlot_Watch; // 0x138(0x60)
	char bOverride_bCopyCustomizationSlot_Watch : 1; // 0x198(0x01)
	char pad_198_1 : 7; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	struct FConfigurableBool bCopyCustomizationSlot_UpperBody; // 0x1a0(0x60)
	char bOverride_bCopyCustomizationSlot_UpperBody : 1; // 0x200(0x01)
	char pad_200_1 : 7; // 0x200(0x01)
	char pad_201[0x7]; // 0x201(0x07)
	struct FConfigurableBool bCopyCustomizationSlot_Toaster; // 0x208(0x60)
	char bOverride_bCopyCustomizationSlot_Toaster : 1; // 0x268(0x01)
	char pad_268_1 : 7; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct FConfigurableBool bCopyCustomizationSlot_LowerBody; // 0x270(0x60)
	char bOverride_bCopyCustomizationSlot_LowerBody : 1; // 0x2d0(0x01)
	char pad_2D0_1 : 7; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct FConfigurableBool bCopyCustomizationSlot_Glove; // 0x2d8(0x60)
	char bOverride_bCopyCustomizationSlot_Glove : 1; // 0x338(0x01)
	char pad_338_1 : 7; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
};

// ScriptStruct OPP.PouncerConfig
// Size: 0xd0 (Inherited: 0x00)
struct FPouncerConfig {
	struct FConfigurableFloat MinPouncersSeparation; // 0x00(0xc8)
	char bOverride_MinPouncersSeparation : 1; // 0xc8(0x01)
	char pad_C8_1 : 7; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// ScriptStruct OPP.AdversityAnalysisConfig
// Size: 0x4e8 (Inherited: 0x00)
struct FAdversityAnalysisConfig {
	struct FConfigurableFloat PointsIncreaseMultiplier; // 0x00(0xc8)
	char bOverride_PointsIncreaseMultiplier : 1; // 0xc8(0x01)
	char pad_C8_1 : 7; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float InitialAdversityLevel; // 0xcc(0x04)
	char bOverride_InitialAdversityLevel : 1; // 0xd0(0x01)
	char pad_D0_1 : 7; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct FConfigurableFloat PlayerChasedRampUpRate; // 0xd8(0xc8)
	char bOverride_PlayerChasedRampUpRate : 1; // 0x1a0(0x01)
	char pad_1A0_1 : 7; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
	struct FConfigurableFloat CooldownRate; // 0x1a8(0xc8)
	char bOverride_CooldownRate : 1; // 0x270(0x01)
	char pad_270_1 : 7; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
	struct FConfigurableFloat PlayerDamagedPoints; // 0x278(0xc8)
	char bOverride_PlayerDamagedPoints : 1; // 0x340(0x01)
	char pad_340_1 : 7; // 0x340(0x01)
	char pad_341[0x7]; // 0x341(0x07)
	struct FConfigurableFloat PlayerKnockedDownPoints; // 0x348(0xc8)
	char bOverride_PlayerKnockedDownPoints : 1; // 0x410(0x01)
	char pad_410_1 : 7; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct FConfigurableFloat PlayerKilledPoints; // 0x418(0xc8)
	char bOverride_PlayerKilledPoints : 1; // 0x4e0(0x01)
	char pad_4E0_1 : 7; // 0x4e0(0x01)
	char pad_4E1[0x7]; // 0x4e1(0x07)
};

// ScriptStruct OPP.RushingAnalysisConfig
// Size: 0x340 (Inherited: 0x00)
struct FRushingAnalysisConfig {
	struct FConfigurableFloat RunningRampUpRate; // 0x00(0xc8)
	char bOverride_RunningRampUpRate : 1; // 0xc8(0x01)
	char pad_C8_1 : 7; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FConfigurableFloat WalkingCooldownRate; // 0xd0(0xc8)
	char bOverride_WalkingCooldownRate : 1; // 0x198(0x01)
	char pad_198_1 : 7; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	struct FConfigurableFloat IdleCooldownRate; // 0x1a0(0xc8)
	char bOverride_IdleCooldownRate : 1; // 0x268(0x01)
	char pad_268_1 : 7; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct FConfigurableFloat HidingCooldownRate; // 0x270(0xc8)
	char bOverride_HidingCooldownRate : 1; // 0x338(0x01)
	char pad_338_1 : 7; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
};

// ScriptStruct OPP.ProximityAnalysisConfig
// Size: 0x340 (Inherited: 0x00)
struct FProximityAnalysisConfig {
	struct FConfigurableFloat ProximityRampUpSpeed; // 0x00(0xc8)
	char bOverride_ProximityRampUpSpeed : 1; // 0xc8(0x01)
	char pad_C8_1 : 7; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FConfigurableFloat ProximityCooldownSpeed; // 0xd0(0xc8)
	char bOverride_ProximityCooldownSpeed : 1; // 0x198(0x01)
	char pad_198_1 : 7; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	struct FConfigurableFloat FullProximityDistance; // 0x1a0(0xc8)
	char bOverride_FullProximityDistance : 1; // 0x268(0x01)
	char pad_268_1 : 7; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct FConfigurableFloat MaxProximityDistance; // 0x270(0xc8)
	char bOverride_MaxProximityDistance : 1; // 0x338(0x01)
	char pad_338_1 : 7; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
};

// ScriptStruct OPP.SpecialistsGlobalConfig
// Size: 0x20 (Inherited: 0x00)
struct FSpecialistsGlobalConfig {
	float MonsterClosetExitDelay; // 0x00(0x04)
	char bOverride_MonsterClosetExitDelay : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float ObjectiveTargetMinDesiredSpawnDistanceFromPlayers; // 0x08(0x04)
	char bOverride_ObjectiveTargetMinDesiredSpawnDistanceFromPlayers : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float ObjectiveTargetMinDesiredSpawnDistanceFromOtherTargets; // 0x10(0x04)
	char bOverride_ObjectiveTargetMinDesiredSpawnDistanceFromOtherTargets : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float MinDistScreamerToRail; // 0x18(0x04)
	char bOverride_MinDistScreamerToRail : 1; // 0x1c(0x01)
	char pad_1C_1 : 7; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct OPP.GameSyncValues
// Size: 0x10 (Inherited: 0x00)
struct FGameSyncValues {
	struct TArray<struct FName> GameSyncValues; // 0x00(0x10)
};

// ScriptStruct OPP.LoadoutBrushes
// Size: 0x220 (Inherited: 0x00)
struct FLoadoutBrushes {
	struct FSlateBrush BaseBrush; // 0x00(0x88)
	struct FSlateBrush SelectedBrush; // 0x88(0x88)
	struct FSlateBrush AvailableBrush; // 0x110(0x88)
	struct FSlateBrush LockedBrush; // 0x198(0x88)
};

// ScriptStruct OPP.TalkWheelSpliceData
// Size: 0x28 (Inherited: 0x00)
struct FTalkWheelSpliceData {
	enum class ETalkWheelAction SpliceAction; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText SpliceText; // 0x08(0x18)
	struct UTexture2D* SpliceIcon; // 0x20(0x08)
};

// ScriptStruct OPP.RBUIEffectDisplayData
// Size: 0x30 (Inherited: 0x00)
struct FRBUIEffectDisplayData {
	struct FText Description; // 0x00(0x18)
	struct UTexture2D* Icon; // 0x18(0x08)
	struct FLinearColor Color; // 0x20(0x10)
};

// ScriptStruct OPP.RBGameplayAttributeModifierEffectTextDetails
// Size: 0x20 (Inherited: 0x00)
struct FRBGameplayAttributeModifierEffectTextDetails {
	enum class EGameplayAttributeType AttributeType; // 0x00(0x01)
	enum class EGameplayAttributeModifierType ModifierType; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FText Description; // 0x08(0x18)
};

// ScriptStruct OPP.MetaNPCSettings
// Size: 0x90 (Inherited: 0x00)
struct FMetaNPCSettings {
	struct FText JobTitle; // 0x00(0x18)
	struct FText Name; // 0x18(0x18)
	struct FText Description; // 0x30(0x18)
	struct FUIColors Colors; // 0x48(0x40)
	struct UTexture2D* Icon; // 0x88(0x08)
};

// ScriptStruct OPP.UIColors
// Size: 0x40 (Inherited: 0x00)
struct FUIColors {
	struct FLinearColor PrimaryColor; // 0x00(0x10)
	struct FLinearColor SecondaryColor; // 0x10(0x10)
	struct FLinearColor TertiaryColor; // 0x20(0x10)
	struct FLinearColor RibbonColor; // 0x30(0x10)
};

// ScriptStruct OPP.OptionData
// Size: 0xe0 (Inherited: 0x00)
struct FOptionData {
	struct FText Title; // 0x00(0x18)
	struct FSlateBrush DescriptionImage; // 0x18(0x88)
	struct FText DescriptionText; // 0xa0(0x18)
	struct FText ErrorText; // 0xb8(0x18)
	enum class EOptionsMenuOption EntryType; // 0xd0(0x01)
	bool bIsGamepadOption; // 0xd1(0x01)
	char pad_D2[0x2]; // 0xd2(0x02)
	struct FName TrackingId; // 0xd4(0x08)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// ScriptStruct OPP.ObjectiveProgressionAudioEvents
// Size: 0x10 (Inherited: 0x00)
struct FObjectiveProgressionAudioEvents {
	struct UAkAudioEvent* StartEvent; // 0x00(0x08)
	struct UAkAudioEvent* StopEvent; // 0x08(0x08)
};

// ScriptStruct OPP.PsychosisSpookData
// Size: 0x18 (Inherited: 0x00)
struct FPsychosisSpookData {
	struct ARBPlayer* TargetPlayer; // 0x00(0x08)
	struct ARBNPC* SpectreNPC; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct OPP.PsychosisDiffucultyData
// Size: 0x18 (Inherited: 0x00)
struct FPsychosisDiffucultyData {
	enum class EGameDifficulty GameDifficulty; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FPsychosisLevelData> SanityBracketList; // 0x08(0x10)
};

// ScriptStruct OPP.PsychosisLevelData
// Size: 0x10 (Inherited: 0x00)
struct FPsychosisLevelData {
	struct TArray<struct FHallucinationEffectData> HallucinationEffectList; // 0x00(0x10)
};

// ScriptStruct OPP.HallucinationEffectData
// Size: 0xe0 (Inherited: 0x00)
struct FHallucinationEffectData {
	enum class EHallucinationType HallucinationType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FConfigurableFloat ActivationDelay; // 0x08(0xc8)
	bool bPlayOnlyOnce; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct URBHallucinationConfig* HallucinationConfig; // 0xd8(0x08)
};

// ScriptStruct OPP.PsychosisFXData
// Size: 0x14 (Inherited: 0x00)
struct FPsychosisFXData {
	float Veins; // 0x00(0x04)
	float Colors; // 0x04(0x04)
	float Deform; // 0x08(0x04)
	float Shake; // 0x0c(0x04)
	float DarkTexture; // 0x10(0x04)
};

// ScriptStruct OPP.HidespotCameraParams
// Size: 0x10 (Inherited: 0x00)
struct FHidespotCameraParams {
	struct FVector2D CameraYawLimit; // 0x00(0x08)
	struct FVector2D CameraPitchLimit; // 0x08(0x08)
};

// ScriptStruct OPP.HitNPCTargetInfo
// Size: 0x08 (Inherited: 0x00)
struct FHitNPCTargetInfo {
	struct ARBNPC* NPC; // 0x00(0x08)
};

// ScriptStruct OPP.HitNPCTargetTypeSettings
// Size: 0x270 (Inherited: 0x00)
struct FHitNPCTargetTypeSettings {
	struct ARBNPC* PawnClass; // 0x00(0x08)
	struct URBAIConfig* configAsset; // 0x08(0x08)
	struct FConfigurableFloat BodyHitMeterIncrease; // 0x10(0xc8)
	struct FConfigurableFloat HeadshotMeterIncrease; // 0xd8(0xc8)
	float DifficultyCost; // 0x1a0(0x04)
	char pad_1A4[0x4]; // 0x1a4(0x04)
	struct FConfigurableInt MinNumberToSpawn; // 0x1a8(0xc8)
};

// ScriptStruct OPP.HotPotatoEnemyConfig
// Size: 0x268 (Inherited: 0x00)
struct FHotPotatoEnemyConfig {
	struct ARBNPC* EnemyClass; // 0x00(0x08)
	struct URBAIConfig* EnemyConfig; // 0x08(0x08)
	struct FConfigurableInt NumHotPotatoEnemies; // 0x10(0xc8)
	struct FConfigurableFloat HeldPotatoDurationForSpawn; // 0xd8(0xc8)
	struct FConfigurableFloat IdealSpawnDistanceFromPotato; // 0x1a0(0xc8)
};

// ScriptStruct OPP.UILinearInventoryItem
// Size: 0x80 (Inherited: 0x00)
struct FUILinearInventoryItem {
	struct ARBPickup* Item; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
	struct UTexture2D* Icon; // 0x20(0x08)
	struct FItemDefinition ItemDefinition; // 0x28(0x48)
	int32_t SlotIndex; // 0x70(0x04)
	bool IsAvailable; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	float CooldownRatio; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct OPP.MessageData
// Size: 0x30 (Inherited: 0x00)
struct FMessageData {
	struct FName MessageId; // 0x00(0x08)
	enum class EMessagePriority Priority; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float duration; // 0x0c(0x04)
	struct FText Text; // 0x10(0x18)
	enum class EGameMessageCategory GameMessageCategory; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct OPP.ImposterOverheadDetails
// Size: 0x28 (Inherited: 0x00)
struct FImposterOverheadDetails {
	struct FString CopiedPlayerName; // 0x00(0x10)
	int32_t CopiedPlayerLevel; // 0x10(0x04)
	struct FProfileId CopiedProfileId; // 0x14(0x10)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct OPP.InteractionData
// Size: 0x50 (Inherited: 0x00)
struct FInteractionData {
	struct TArray<struct UAnimSequenceBase*> AnimSequenceBucket; // 0x00(0x10)
	struct TArray<struct UAnimSequenceBase*> ThirdPersonSpecificAnimSequenceBucket; // 0x10(0x10)
	bool bAnimSequenceUpperBody; // 0x20(0x01)
	bool bAnimSequenceUpperBodyAllowsRotation; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	float AnimSequencePlayRate; // 0x24(0x04)
	int32_t AnimSequenceLoopCount; // 0x28(0x04)
	enum class EAdjustmentType AdjustmentType; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct FVector AnimLocation; // 0x30(0x0c)
	struct FVector AnimForward; // 0x3c(0x0c)
	bool bAlignToGround; // 0x48(0x01)
	bool bLockIntoOperatingLocomotion; // 0x49(0x01)
	enum class ESpecialMove StartSpecialMove; // 0x4a(0x01)
	enum class ESpecialMove FinishSpecialMove; // 0x4b(0x01)
	bool bIsInterruptible; // 0x4c(0x01)
	bool bPlayAnimAfterAdjustPosition; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
};

// ScriptStruct OPP.InteractionSoundEvent
// Size: 0x20 (Inherited: 0x00)
struct FInteractionSoundEvent {
	struct UAkAudioEvent* SoundEvent; // 0x00(0x08)
	struct FName SwitchGroup; // 0x08(0x08)
	struct FName SwitchState; // 0x10(0x08)
	bool bPlayOnInteractor; // 0x18(0x01)
	enum class ETriggeringStimulusType AIStimulusType; // 0x19(0x01)
	bool bContinuousNoise; // 0x1a(0x01)
	char pad_1B[0x5]; // 0x1b(0x05)
};

// ScriptStruct OPP.UIInventoryItem
// Size: 0x58 (Inherited: 0x00)
struct FUIInventoryItem {
	struct UTexture2D* Icon; // 0x00(0x08)
	float PositionAngle; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	int32_t Index; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText Name; // 0x18(0x18)
	int32_t ItemCount; // 0x30(0x04)
	bool IsAvailable; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float CooldownRatio; // 0x38(0x04)
	bool AlwaysShowCount; // 0x3c(0x01)
	bool bOverrideCategoryColor; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	struct FLinearColor IconColor; // 0x40(0x10)
	enum class EItemCategory ItemCategory; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct OPP.InvestigationAnalysis
// Size: 0x18 (Inherited: 0x00)
struct FInvestigationAnalysis {
	bool bValidAnalysis; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FInvestigationAnalysisAngleData> AngleData; // 0x08(0x10)
};

// ScriptStruct OPP.InvestigationAnalysisAngleData
// Size: 0x18 (Inherited: 0x00)
struct FInvestigationAnalysisAngleData {
	float AngleWS; // 0x00(0x04)
	float NavmeshClearance; // 0x04(0x04)
	struct TArray<struct FInvestigationAnalysisProjectedData> ProjectedData; // 0x08(0x10)
};

// ScriptStruct OPP.InvestigationAnalysisProjectedData
// Size: 0x18 (Inherited: 0x00)
struct FInvestigationAnalysisProjectedData {
	float DistForward; // 0x00(0x04)
	float RelativeHeight; // 0x04(0x04)
	struct TArray<struct FInvestigationAnalysisSightData> SightData; // 0x08(0x10)
};

// ScriptStruct OPP.InvestigationAnalysisSightData
// Size: 0x38 (Inherited: 0x00)
struct FInvestigationAnalysisSightData {
	float RelAngle; // 0x00(0x04)
	float SightClearance; // 0x04(0x04)
	bool bHasInterestPoint; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TSoftObjectPtr<URBNPCInterestPointComponent> InterestPointComp; // 0x10(0x28)
};

// ScriptStruct OPP.InvestigationAnimSetup
// Size: 0x58 (Inherited: 0x00)
struct FInvestigationAnimSetup {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	float RelativeProbability; // 0x08(0x04)
	bool bLoopAnimation; // 0x0c(0x01)
	bool bEnabledWhenAware; // 0x0d(0x01)
	bool bEnabledWhenUnaware; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
	struct FGameplayTagContainer EnableOnlyForNPCTags; // 0x10(0x20)
	struct FGameplayTagContainer DisableForNPCTags; // 0x30(0x20)
	float WaitTime; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct OPP.RBItemProgressionDataRow
// Size: 0x90 (Inherited: 0x08)
struct FRBItemProgressionDataRow : FTableRowBase {
	enum class EItemProgressionCategory Category; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Name; // 0x10(0x10)
	struct FString Description; // 0x20(0x10)
	int32_t Rank; // 0x30(0x04)
	int32_t Order; // 0x34(0x04)
	struct FText DisplayName; // 0x38(0x18)
	struct UTexture2D* Icon; // 0x50(0x08)
	enum class EActiveSkillType AssociatedActiveSkillType; // 0x58(0x01)
	enum class EProfileUpgradeCategory ProfileUpgradeCategory; // 0x59(0x01)
	bool bAvailable; // 0x5a(0x01)
	bool bAlwaysAcquired; // 0x5b(0x01)
	int32_t RequiredLevel_Character; // 0x5c(0x04)
	bool bRequiresUnlock; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct TArray<struct FName> RequiredItems; // 0x68(0x10)
	int32_t CurrencyCost_MurkoffPoint; // 0x78(0x04)
	int32_t CurrencyCost_MurkoffDollar; // 0x7c(0x04)
	struct TArray<struct FName> Effects; // 0x80(0x10)
};

// ScriptStruct OPP.RBItemProgressionData
// Size: 0xc8 (Inherited: 0x00)
struct FRBItemProgressionData {
	struct FName ID; // 0x00(0x08)
	enum class EItemProgressionCategory Category; // 0x08(0x01)
	char pad_9[0x17]; // 0x09(0x17)
	int32_t Rank; // 0x20(0x04)
	int32_t Order; // 0x24(0x04)
	struct FText DisplayName; // 0x28(0x18)
	struct UTexture2D* Icon; // 0x40(0x08)
	enum class EActiveSkillType AssociatedActiveSkillType; // 0x48(0x01)
	enum class EProfileUpgradeCategory ProfileUpgradeCategory; // 0x49(0x01)
	bool bAvailable; // 0x4a(0x01)
	bool bAlwaysAcquired; // 0x4b(0x01)
	int32_t RequiredLevel; // 0x4c(0x04)
	bool bRequiresUnlock; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TArray<struct FName> RequiredItems; // 0x58(0x10)
	struct TMap<enum class ECurrencyType, int32_t> CurrencyCost; // 0x68(0x50)
	struct TArray<struct FName> Effects; // 0xb8(0x10)
};

// ScriptStruct OPP.ItemClassCacheEntry
// Size: 0x10 (Inherited: 0x00)
struct FItemClassCacheEntry {
	enum class EItemType ItemType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct ARBPickup* AssociatedClass; // 0x08(0x08)
};

// ScriptStruct OPP.ItemSpawningManagerRuntimeInfo
// Size: 0x2a0 (Inherited: 0x00)
struct FItemSpawningManagerRuntimeInfo {
	struct TArray<struct ARBContainer*> ContainersUsed; // 0x00(0x10)
	struct TArray<struct ARBContainer*> ContainersAvailableForStage; // 0x10(0x10)
	int32_t NumberOfItemsRemainingInStage; // 0x20(0x04)
	int32_t NumberOfRewardRoomItemsRemaining; // 0x24(0x04)
	int32_t NumberToLock; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FSectionSpawningOverrideRuntimeInfo> SectionOverrideInfos; // 0x30(0x10)
	struct FItemSpawningInfo SpawningInfoCache; // 0x40(0x1f8)
	enum class EItemType ItemType; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct FItemSpawningManagerTypeStats stats; // 0x240(0x60)
};

// ScriptStruct OPP.ItemSpawningManagerTypeStats
// Size: 0x60 (Inherited: 0x00)
struct FItemSpawningManagerTypeStats {
	int32_t NumberOfItemsRandomized; // 0x00(0x04)
	int32_t NumberOfItemsSpawnedInStage; // 0x04(0x04)
	int32_t NumberOfItemsFromRewardRoomsConfig; // 0x08(0x04)
	int32_t NumberOfItemsLocked; // 0x0c(0x04)
	struct TArray<int32_t> NumberOfItemsSpawnedInVolumes; // 0x10(0x10)
	struct TArray<struct ARBRoomGroup*> UsedSectionOverrides; // 0x20(0x10)
	struct TArray<int32_t> NumberOfItemsSpawnedInSectionOverride; // 0x30(0x10)
	struct TArray<struct AActor*> UsedRewardRooms; // 0x40(0x10)
	struct TArray<int32_t> NumberOfItemsSpawnedInRewardRooms; // 0x50(0x10)
};

// ScriptStruct OPP.ItemSpawningInfo
// Size: 0x1f8 (Inherited: 0x00)
struct FItemSpawningInfo {
	struct FConfigurableInt MinNumberOfItems; // 0x00(0xc8)
	enum class EItemType ItemType; // 0xc8(0x01)
	enum class EItemLockType LockType; // 0xc9(0x01)
	char pad_CA[0x6]; // 0xca(0x06)
	struct FConfigurableBool CanSpawnInOpenSpace; // 0xd0(0x60)
	struct FConfigurableFloat MinDistanceBetweenItemOfSameType; // 0x130(0xc8)
};

// ScriptStruct OPP.SectionSpawningOverrideRuntimeInfo
// Size: 0x38 (Inherited: 0x00)
struct FSectionSpawningOverrideRuntimeInfo {
	struct ARBRoomGroup* Section; // 0x00(0x08)
	int32_t NumberOfItemsRemaining; // 0x08(0x04)
	int32_t NumberOfItemsSpawned; // 0x0c(0x04)
	struct TArray<struct ARBContainer*> Containers; // 0x10(0x10)
	struct TArray<struct ARBContainer*> AllSectionContainers; // 0x20(0x10)
	bool bHasInitContainers; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct OPP.ItemSpawningManagerRewardVolumeInfo
// Size: 0x18 (Inherited: 0x00)
struct FItemSpawningManagerRewardVolumeInfo {
	int32_t NumberOfItemsRemaining; // 0x00(0x04)
	bool bHasSpawnedMandatoryCurrency; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float ContainerRatio; // 0x08(0x04)
	int32_t MaxSpawnLocationCount; // 0x0c(0x04)
	struct URBRewardRoomComponent* RewardRoomComponent; // 0x10(0x08)
};

// ScriptStruct OPP.ItemSpawningOverrideRule
// Size: 0x198 (Inherited: 0x00)
struct FItemSpawningOverrideRule {
	bool bAllowUnusedContainersForStage; // 0x00(0x01)
	bool bUseItemsFromStagePool; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FConfigurableFloat PercentFromStageCount; // 0x08(0xc8)
	struct FConfigurableInt FixedCount; // 0xd0(0xc8)
};

// ScriptStruct OPP.RBItemsSpawningConfig
// Size: 0x40 (Inherited: 0x00)
struct FRBItemsSpawningConfig {
	struct TArray<struct FItemSpawningInfo> RegularItemSpawningInfos; // 0x00(0x10)
	struct TArray<struct FItemSpawningInfo> CurrencyItemSpawningInfos; // 0x10(0x10)
	struct TArray<struct FItemSpawningInfo> SuperItemSpawningInfos; // 0x20(0x10)
	struct TArray<struct FItemSpawningInfo> CollectibleItemsSpawningInfos; // 0x30(0x10)
};

// ScriptStruct OPP.ContainerLimitationInfo
// Size: 0xf8 (Inherited: 0x00)
struct FContainerLimitationInfo {
	struct FConfigurableInt MaxNumber; // 0x00(0xc8)
	struct FSoftClassPath ContainerClassPath; // 0xc8(0x18)
	struct TArray<struct ARBContainer*> UsedContainers; // 0xe0(0x10)
	struct AActor* ContainerClass; // 0xf0(0x08)
};

// ScriptStruct OPP.JumpScareDetectionEntry
// Size: 0x10 (Inherited: 0x00)
struct FJumpScareDetectionEntry {
	struct AActor* DetectedActor; // 0x00(0x08)
	float DetectionTimestamp; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct OPP.RBLevelRandomizer
// Size: 0x01 (Inherited: 0x00)
struct FRBLevelRandomizer {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct OPP.EvaluationCorridorTVAnimations
// Size: 0x80 (Inherited: 0x00)
struct FEvaluationCorridorTVAnimations {
	struct TMap<enum class EPlayerTrialRating, struct FNarrativeScreenAnimationData> TrialOutcomeTVAnimations; // 0x00(0x50)
	struct FNarrativeScreenAnimationData TutorialCompletedTVAnimation; // 0x50(0x18)
	struct FNarrativeScreenAnimationData FallbackTVAnimations; // 0x68(0x18)
};

// ScriptStruct OPP.NarrativeScreenAnimationData
// Size: 0x18 (Inherited: 0x00)
struct FNarrativeScreenAnimationData {
	struct FDataTableRowHandle AnimationRow; // 0x00(0x10)
	bool bLoop; // 0x10(0x01)
	enum class ENarrativeScreenDataTableLogic DataTableLogic; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	float DelayBetweenRows; // 0x14(0x04)
};

// ScriptStruct OPP.DirectorVOs
// Size: 0x108 (Inherited: 0x00)
struct FDirectorVOs {
	struct TMap<enum class EMetaNPCType, struct UAkAudioEvent*> NPCUnlockedVOs; // 0x00(0x50)
	struct TMap<enum class EMetaNPCType, struct FHUDTutorialTextData> NPCUnlockedTutorialData; // 0x50(0x50)
	struct TMap<enum class EPlayerTrialRating, struct UAkAudioEvent*> TrialOutcomeVOs; // 0xa0(0x50)
	struct UAkAudioEvent* LevelUpVO; // 0xf0(0x08)
	struct UAkAudioEvent* TutorialCompletedVO; // 0xf8(0x08)
	struct UAkAudioEvent* NewReagentExplanation; // 0x100(0x08)
};

// ScriptStruct OPP.OfficerVOs
// Size: 0x20 (Inherited: 0x00)
struct FOfficerVOs {
	struct UAkAudioEvent* ApproachLocked; // 0x00(0x08)
	struct UAkAudioEvent* InteractWhenReleaseAvailable; // 0x08(0x08)
	struct UAkAudioEvent* AcceptRelease; // 0x10(0x08)
	struct UAkAudioEvent* Exit; // 0x18(0x08)
};

// ScriptStruct OPP.NPCLobbyInteractionData
// Size: 0x38 (Inherited: 0x00)
struct FNPCLobbyInteractionData {
	struct UAkAudioEvent* Approach; // 0x00(0x08)
	struct UAkAudioEvent* ApproachLocked; // 0x08(0x08)
	struct UAkAudioEvent* InteractFirstTime; // 0x10(0x08)
	struct UAkAudioEvent* Interact; // 0x18(0x08)
	struct UAkAudioEvent* InteractNewStuff; // 0x20(0x08)
	struct UAkAudioEvent* PurchasedItem; // 0x28(0x08)
	struct UAkAudioEvent* Exit; // 0x30(0x08)
};

// ScriptStruct OPP.RBLobbyStatBoardStatConfigEntry
// Size: 0x0c (Inherited: 0x00)
struct FRBLobbyStatBoardStatConfigEntry {
	struct FName StatId; // 0x00(0x08)
	enum class EPlayerStatContextType ContextType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct OPP.RBLobbyStatBoardEntry
// Size: 0x28 (Inherited: 0x00)
struct FRBLobbyStatBoardEntry {
	struct ARBPlayerCell* Cell; // 0x00(0x08)
	struct ARBLobbyPlayerState* PlayerState; // 0x08(0x08)
	struct FString DisplayName; // 0x10(0x10)
	float Stat; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct OPP.TrialEvaluationInfo
// Size: 0x1c (Inherited: 0x00)
struct FTrialEvaluationInfo {
	float PlayerScore; // 0x00(0x04)
	bool bHasLeveledUp; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FName CompletedProgramId; // 0x08(0x08)
	struct FName UnlockedProgramId; // 0x10(0x08)
	bool bWasTutorialExperiment; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct OPP.LastGameSessionDetails
// Size: 0x30 (Inherited: 0x00)
struct FLastGameSessionDetails {
	bool bShouldRejoin; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	int64_t Timestamp; // 0x08(0x08)
	struct FString RegionName; // 0x10(0x10)
	struct FString GameSessionId; // 0x20(0x10)
};

// ScriptStruct OPP.TrackedTaskSaveData
// Size: 0x10 (Inherited: 0x00)
struct FTrackedTaskSaveData {
	struct TArray<int64_t> TrackedTasks; // 0x00(0x10)
};

// ScriptStruct OPP.SubtitleData
// Size: 0x60 (Inherited: 0x00)
struct FSubtitleData {
	char pad_0[0x30]; // 0x00(0x30)
	struct AActor* Speaker; // 0x30(0x08)
	struct URBVOSoundComponent* VOSoundComponent; // 0x38(0x08)
	struct URBSoundComponent* SoundComponent; // 0x40(0x08)
	struct UAkAudioEvent* SoundEvent; // 0x48(0x08)
	char pad_50[0x10]; // 0x50(0x10)
};

// ScriptStruct OPP.MinigameSectionConfig
// Size: 0xd8 (Inherited: 0x00)
struct FMinigameSectionConfig {
	struct FConfigurableInt MinimumRoomInSection; // 0x00(0xc8)
	struct TArray<struct TSoftObjectPtr<ARBRoom>> Rooms; // 0xc8(0x10)
};

// ScriptStruct OPP.AdjustPositionData
// Size: 0xa4 (Inherited: 0x00)
struct FAdjustPositionData {
	char pad_0[0xa4]; // 0x00(0xa4)
};

// ScriptStruct OPP.MovieSubtitlePart
// Size: 0x18 (Inherited: 0x00)
struct FMovieSubtitlePart {
	float StartTime; // 0x00(0x04)
	float EndTime; // 0x04(0x04)
	struct FString TextId; // 0x08(0x10)
};

// ScriptStruct OPP.NarrativeScreenPlayingData
// Size: 0x20 (Inherited: 0x00)
struct FNarrativeScreenPlayingData {
	struct FNarrativeScreenAnimationData AnimationData; // 0x00(0x18)
	float StartTimeStamp; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct OPP.RBNavLinkObstacle
// Size: 0x20 (Inherited: 0x00)
struct FRBNavLinkObstacle {
	struct UNavArea* ObstacleAreaClass; // 0x00(0x08)
	struct FVector ObstacleExtent; // 0x08(0x0c)
	struct FVector ObstacleOffset; // 0x14(0x0c)
};

// ScriptStruct OPP.NetworkSoundActorSwitchStateData
// Size: 0x10 (Inherited: 0x00)
struct FNetworkSoundActorSwitchStateData {
	struct FName Name; // 0x00(0x08)
	struct FName State; // 0x08(0x08)
};

// ScriptStruct OPP.NetworkSoundActorRTPCData
// Size: 0x0c (Inherited: 0x00)
struct FNetworkSoundActorRTPCData {
	struct FName Name; // 0x00(0x08)
	float Value; // 0x08(0x04)
};

// ScriptStruct OPP.NPCPathfindingCosts
// Size: 0x34 (Inherited: 0x00)
struct FNPCPathfindingCosts {
	float UnlockedDoorCost; // 0x00(0x04)
	float LockedDoorCost; // 0x04(0x04)
	float OpenInvestigatedDoorCost; // 0x08(0x04)
	float UnlockedInvestigatedDoorCost; // 0x0c(0x04)
	float LockedInvestigatedDoorCost; // 0x10(0x04)
	float DestroyableDoorCostAware; // 0x14(0x04)
	float DestroyableDoorCostUnaware; // 0x18(0x04)
	float UndestroyableDoorCostAware; // 0x1c(0x04)
	float UndestroyableDoorCostUnaware; // 0x20(0x04)
	float ClimbLedgeCostAware; // 0x24(0x04)
	float ClimbLedgeCostUnaware; // 0x28(0x04)
	float CrouchUnderCostAware; // 0x2c(0x04)
	float CrouchUnderCostUnaware; // 0x30(0x04)
};

// ScriptStruct OPP.NPCInterruptAction
// Size: 0x28 (Inherited: 0x00)
struct FNPCInterruptAction {
	struct ARBPawn* Interrupter; // 0x00(0x08)
	struct AActor* Weapon; // 0x08(0x08)
	char pad_10[0x18]; // 0x10(0x18)
};

// ScriptStruct OPP.NPCSpeedModifierData
// Size: 0x10 (Inherited: 0x00)
struct FNPCSpeedModifierData {
	struct FName ID; // 0x00(0x08)
	float ExpirationServerTime; // 0x08(0x04)
	float Modifier; // 0x0c(0x04)
};

// ScriptStruct OPP.NPCWeaponVFXState
// Size: 0x14 (Inherited: 0x00)
struct FNPCWeaponVFXState {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct OPP.NPCWeaponVFXControlData
// Size: 0x18 (Inherited: 0x00)
struct FNPCWeaponVFXControlData {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct OPP.NPCDoorInteractionData
// Size: 0xa8 (Inherited: 0x00)
struct FNPCDoorInteractionData {
	struct FNPCDoorInteractionParams Params; // 0x00(0x18)
	struct UAnimSequence* DoorInteractionAnim; // 0x18(0x08)
	float AnimStartTime; // 0x20(0x04)
	float AnimAnchorTime; // 0x24(0x04)
	float InitialYaw; // 0x28(0x04)
	struct FVector TraversalDir; // 0x2c(0x0c)
	struct FVector AnchorRefLocation; // 0x38(0x0c)
	struct FVector AdjustmentEndTargetPos; // 0x44(0x0c)
	struct FVector AdjustmentEndTargetDir; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct FVector> SteeringPath; // 0x60(0x10)
	float AdjustmentsDuration; // 0x70(0x04)
	char pad_74[0x34]; // 0x74(0x34)
};

// ScriptStruct OPP.NPCDoorInteractionParams
// Size: 0x18 (Inherited: 0x00)
struct FNPCDoorInteractionParams {
	struct ARBDoor* door; // 0x00(0x08)
	enum class EDoorPassType DoorPassType; // 0x08(0x01)
	bool bForced; // 0x09(0x01)
	bool bIsAlertedStance; // 0x0a(0x01)
	bool bTraversalFrontToBack; // 0x0b(0x01)
	bool bDoorOpenInFront; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float PathedDistanceToDoor; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct OPP.NPCStartleData
// Size: 0x48 (Inherited: 0x00)
struct FNPCStartleData {
	struct FVector targetPosition; // 0x00(0x0c)
	enum class EStartleType StartleType; // 0x0c(0x01)
	enum class EStartleSpeed StartleSpeed; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct AActor* TargetToTrack; // 0x10(0x08)
	struct FVector StartPosition; // 0x18(0x0c)
	struct FVector StartDirection; // 0x24(0x0c)
	char pad_30[0x18]; // 0x30(0x18)
};

// ScriptStruct OPP.NPCScriptedAnimData
// Size: 0x18 (Inherited: 0x00)
struct FNPCScriptedAnimData {
	struct ARBScriptedAnimStation* Station; // 0x00(0x08)
	struct USkeletalMeshComponent* MeshTarget; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct OPP.NPCLoopingIdleData
// Size: 0x18 (Inherited: 0x00)
struct FNPCLoopingIdleData {
	struct UAnimSequence* AnimSeq; // 0x00(0x08)
	struct UAkAudioEvent* SoundStart; // 0x08(0x08)
	struct UAkAudioEvent* SoundStop; // 0x10(0x08)
};

// ScriptStruct OPP.NPCWaypointData
// Size: 0x10 (Inherited: 0x00)
struct FNPCWaypointData {
	struct UAnimSequence* WaypointAnim; // 0x00(0x08)
	bool bLoopAnim; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct OPP.NPCWeaponRuntimeData
// Size: 0x03 (Inherited: 0x00)
struct FNPCWeaponRuntimeData {
	enum class ENPCWeapon EquippedWeapon; // 0x00(0x01)
	char pad_1[0x2]; // 0x01(0x02)
};

// ScriptStruct OPP.NPCWeaponData
// Size: 0x18 (Inherited: 0x00)
struct FNPCWeaponData {
	enum class ENPCWeapon WeaponId; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct ARBNPCWeapon* WeaponClass; // 0x08(0x08)
	enum class ENPCAnimSetStyle AnimSetStyle; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct OPP.NPCCeilingData
// Size: 0x18 (Inherited: 0x00)
struct FNPCCeilingData {
	float LastTraceTime; // 0x00(0x04)
	struct FVector LastTraceLocation; // 0x04(0x0c)
	float CeilingPercentage; // 0x10(0x04)
	float CurrentCeilingHeight; // 0x14(0x04)
};

// ScriptStruct OPP.NPCJumpData
// Size: 0x44 (Inherited: 0x00)
struct FNPCJumpData {
	struct FVector JumpStartPoint; // 0x00(0x0c)
	struct FVector JumpDirection; // 0x0c(0x0c)
	struct FVector FinalDestination; // 0x18(0x0c)
	struct FVector PositionCorrection; // 0x24(0x0c)
	bool bWallJump; // 0x30(0x01)
	char pad_31[0x13]; // 0x31(0x13)
};

// ScriptStruct OPP.NPCInvestigationData
// Size: 0x28 (Inherited: 0x00)
struct FNPCInvestigationData {
	struct UAnimSequence* AnimToPlay; // 0x00(0x08)
	bool bLoopingAnimation; // 0x08(0x01)
	bool bMovingTransition; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FVector AlignPos; // 0x0c(0x0c)
	struct FVector AlignDir; // 0x18(0x0c)
	float MaxAnimLength; // 0x24(0x04)
};

// ScriptStruct OPP.NPCLookAtData
// Size: 0x48 (Inherited: 0x00)
struct FNPCLookAtData {
	bool bEnableLookAt; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float LookAtAlpha; // 0x04(0x04)
	float ScanIntensity; // 0x08(0x04)
	float BaseRelativeYaw; // 0x0c(0x04)
	float FinalRelativeYaw; // 0x10(0x04)
	float RelativePitch; // 0x14(0x04)
	bool bInvestigationLookAt; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct AActor* TargetActor; // 0x20(0x08)
	char pad_28[0x20]; // 0x28(0x20)
};

// ScriptStruct OPP.NPCLookAtConfig
// Size: 0x20 (Inherited: 0x00)
struct FNPCLookAtConfig {
	bool bValidStateForLookAt; // 0x00(0x01)
	bool bLookAtEnabled; // 0x01(0x01)
	bool bLookAtScanEnabled; // 0x02(0x01)
	bool bInvestigationLookAt; // 0x03(0x01)
	bool bForceLookAt; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct AActor* FocusTarget; // 0x08(0x08)
	struct FVector FocusLocation; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct OPP.NPCReplicatedAmbientData
// Size: 0x10 (Inherited: 0x00)
struct FNPCReplicatedAmbientData {
	struct URBAmbientStationComponent* AmbientStation; // 0x00(0x08)
	bool bActiveState; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct OPP.NPCAmbientData
// Size: 0x14 (Inherited: 0x00)
struct FNPCAmbientData {
	bool bValidLookAt; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float SmoothedRelativeYaw; // 0x04(0x04)
	float SmoothedRelativePitch; // 0x08(0x04)
	float TargetRelativeYaw; // 0x0c(0x04)
	float TargetRelativePitch; // 0x10(0x04)
};

// ScriptStruct OPP.NPCTurnOnSpotData
// Size: 0x10 (Inherited: 0x00)
struct FNPCTurnOnSpotData {
	float AnimControlValue; // 0x00(0x04)
	float TargetYawWS; // 0x04(0x04)
	struct AActor* TargetActor; // 0x08(0x08)
};

// ScriptStruct OPP.DelayedVO
// Size: 0x0c (Inherited: 0x00)
struct FDelayedVO {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct OPP.SelectedGruntCustomizationMeshesInfo
// Size: 0x14 (Inherited: 0x00)
struct FSelectedGruntCustomizationMeshesInfo {
	int32_t HeadIndex; // 0x00(0x04)
	int32_t HairIndex; // 0x04(0x04)
	int32_t LowerBodyIndex; // 0x08(0x04)
	int32_t UpperBodyIndex; // 0x0c(0x04)
	bool bIsFemale; // 0x10(0x01)
	enum class ENPCFlavor NPCFlavor; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
};

// ScriptStruct OPP.GruntCustomizationMeshesConfig
// Size: 0x180 (Inherited: 0x00)
struct FGruntCustomizationMeshesConfig {
	struct FGruntCustomizationMeshes MaleHead; // 0x00(0x30)
	struct FGruntCustomizationMeshes MaleHair; // 0x30(0x30)
	struct FGruntCustomizationMeshes MaleUpperBody; // 0x60(0x30)
	struct FGruntCustomizationMeshes MaleLowerBody; // 0x90(0x30)
	struct FGruntCustomizationMeshes FemaleHead; // 0xc0(0x30)
	struct FGruntCustomizationMeshes FemaleHair; // 0xf0(0x30)
	struct FGruntCustomizationMeshes FemaleUpperBody; // 0x120(0x30)
	struct FGruntCustomizationMeshes FemaleLowerBody; // 0x150(0x30)
};

// ScriptStruct OPP.GruntCustomizationMeshes
// Size: 0x30 (Inherited: 0x00)
struct FGruntCustomizationMeshes {
	struct TArray<struct FNPCCustomizationMesh> Light; // 0x00(0x10)
	struct TArray<struct FNPCCustomizationMesh> Normal; // 0x10(0x10)
	struct TArray<struct FNPCCustomizationMesh> Heavy; // 0x20(0x10)
};

// ScriptStruct OPP.NPCCustomizationMesh
// Size: 0xd0 (Inherited: 0x00)
struct FNPCCustomizationMesh {
	struct TSoftObjectPtr<USkeletalMesh> Mesh; // 0x00(0x28)
	struct TArray<struct TSoftObjectPtr<USkeletalMesh>> BodyMeshes; // 0x28(0x10)
	struct TMap<struct FString, struct TSoftObjectPtr<UMaterialInstanceConstant>> MaterialOverrides; // 0x38(0x50)
	int32_t FoleyPriority; // 0x88(0x04)
	struct FName FoleySwitch; // 0x8c(0x08)
	char pad_94[0x4]; // 0x94(0x04)
	struct FString VoiceType; // 0x98(0x10)
	struct TSoftObjectPtr<UPoseAsset> FacePoseAsset; // 0xa8(0x28)
};

// ScriptStruct OPP.NPCRandomizationConfigData
// Size: 0x1128 (Inherited: 0x00)
struct FNPCRandomizationConfigData {
	struct FConfigurableFloat TargetDifficultyScore; // 0x00(0xc8)
	char bOverride_TargetDifficultyScore : 1; // 0xc8(0x01)
	char pad_C8_1 : 7; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float DifficultyTolerance; // 0xcc(0x04)
	char bOverride_DifficultyTolerance : 1; // 0xd0(0x01)
	char pad_D0_1 : 7; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct FNPCRandomizationClassLimits SpawnLimitsPerClass; // 0xd8(0xf70)
	struct FNPCRandomizationSpreadingRules SpreadingRules; // 0x1048(0xe0)
};

// ScriptStruct OPP.NPCRandomizationSpreadingRules
// Size: 0xe0 (Inherited: 0x00)
struct FNPCRandomizationSpreadingRules {
	struct FConfigurableFloat SpreadRatio; // 0x00(0xc8)
	char bOverride_SpreadRatio : 1; // 0xc8(0x01)
	char pad_C8_1 : 7; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float ProximityMinDistance; // 0xcc(0x04)
	char bOverride_ProximityMinDistance : 1; // 0xd0(0x01)
	char pad_D0_1 : 7; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	float ProximityMaxDistance; // 0xd4(0x04)
	char bOverride_ProximityMaxDistance : 1; // 0xd8(0x01)
	char pad_D8_1 : 7; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
};

// ScriptStruct OPP.NPCRandomizationClassLimits
// Size: 0xf70 (Inherited: 0x00)
struct FNPCRandomizationClassLimits {
	struct FConfigurableInt MaximumTotalSpawnCount; // 0x00(0xc8)
	char bOverride_MaximumTotalSpawnCount : 1; // 0xc8(0x01)
	char pad_C8_1 : 7; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FConfigurableInt MinimumSmallGrunts; // 0xd0(0xc8)
	char bOverride_MinimumSmallGrunts : 1; // 0x198(0x01)
	char pad_198_1 : 7; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	struct FConfigurableInt MaximumSmallGrunts; // 0x1a0(0xc8)
	char bOverride_MaximumSmallGrunts : 1; // 0x268(0x01)
	char pad_268_1 : 7; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct FConfigurableInt MinimumAmbientGrunts; // 0x270(0xc8)
	char bOverride_MinimumAmbientGrunts : 1; // 0x338(0x01)
	char pad_338_1 : 7; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
	struct FConfigurableInt MaximumAmbientGrunts; // 0x340(0xc8)
	char bOverride_MaximumAmbientGrunts : 1; // 0x408(0x01)
	char pad_408_1 : 7; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct FConfigurableInt MinimumBigGrunts; // 0x410(0xc8)
	char bOverride_MinimumBigGrunts : 1; // 0x4d8(0x01)
	char pad_4D8_1 : 7; // 0x4d8(0x01)
	char pad_4D9[0x7]; // 0x4d9(0x07)
	struct FConfigurableInt MaximumBigGrunts; // 0x4e0(0xc8)
	char bOverride_MaximumBigGrunts : 1; // 0x5a8(0x01)
	char pad_5A8_1 : 7; // 0x5a8(0x01)
	char pad_5A9[0x7]; // 0x5a9(0x07)
	struct FConfigurableInt MinimumSleeperScreamers; // 0x5b0(0xc8)
	char bOverride_MinimumSleeperScreamers : 1; // 0x678(0x01)
	char pad_678_1 : 7; // 0x678(0x01)
	char pad_679[0x7]; // 0x679(0x07)
	struct FConfigurableInt MaximumSleeperScreamers; // 0x680(0xc8)
	char bOverride_MaximumSleeperScreamers : 1; // 0x748(0x01)
	char pad_748_1 : 7; // 0x748(0x01)
	char pad_749[0x7]; // 0x749(0x07)
	struct FConfigurableInt MinimumPitcherSnipers; // 0x750(0xc8)
	char bOverride_MinimumPitcherSnipers : 1; // 0x818(0x01)
	char pad_818_1 : 7; // 0x818(0x01)
	char pad_819[0x7]; // 0x819(0x07)
	struct FConfigurableInt MaximumPitcherSnipers; // 0x820(0xc8)
	char bOverride_MaximumPitcherSnipers : 1; // 0x8e8(0x01)
	char pad_8E8_1 : 7; // 0x8e8(0x01)
	char pad_8E9[0x7]; // 0x8e9(0x07)
	struct FConfigurableInt MinimumGroundPitchers; // 0x8f0(0xc8)
	char bOverride_MinimumGroundPitchers : 1; // 0x9b8(0x01)
	char pad_9B8_1 : 7; // 0x9b8(0x01)
	char pad_9B9[0x7]; // 0x9b9(0x07)
	struct FConfigurableInt MaximumGroundPitchers; // 0x9c0(0xc8)
	char bOverride_MaximumGroundPitchers : 1; // 0xa88(0x01)
	char pad_A88_1 : 7; // 0xa88(0x01)
	char pad_A89[0x7]; // 0xa89(0x07)
	struct FConfigurableInt MinimumNightHunters; // 0xa90(0xc8)
	char bOverride_MinimumNightHunters : 1; // 0xb58(0x01)
	char pad_B58_1 : 7; // 0xb58(0x01)
	char pad_B59[0x7]; // 0xb59(0x07)
	struct FConfigurableInt MaximumNightHunters; // 0xb60(0xc8)
	char bOverride_MaximumNightHunters : 1; // 0xc28(0x01)
	char pad_C28_1 : 7; // 0xc28(0x01)
	char pad_C29[0x7]; // 0xc29(0x07)
	struct FConfigurableInt MinimumPushers; // 0xc30(0xc8)
	char bOverride_MinimumPushers : 1; // 0xcf8(0x01)
	char pad_CF8_1 : 7; // 0xcf8(0x01)
	char pad_CF9[0x7]; // 0xcf9(0x07)
	struct FConfigurableInt MaximumPushers; // 0xd00(0xc8)
	char bOverride_MaximumPushers : 1; // 0xdc8(0x01)
	char pad_DC8_1 : 7; // 0xdc8(0x01)
	char pad_DC9[0x7]; // 0xdc9(0x07)
	struct FConfigurableInt MinimumPouncers; // 0xdd0(0xc8)
	char bOverride_MinimumPouncers : 1; // 0xe98(0x01)
	char pad_E98_1 : 7; // 0xe98(0x01)
	char pad_E99[0x7]; // 0xe99(0x07)
	struct FConfigurableInt MaximumPouncers; // 0xea0(0xc8)
	char bOverride_MaximumPouncers : 1; // 0xf68(0x01)
	char pad_F68_1 : 7; // 0xf68(0x01)
	char pad_F69[0x7]; // 0xf69(0x07)
};

// ScriptStruct OPP.AISpawningCheatInfo
// Size: 0x70 (Inherited: 0x00)
struct FAISpawningCheatInfo {
	struct FString Name; // 0x00(0x10)
	enum class ENPCType NPCType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TSoftClassPtr<UObject> PawnClass; // 0x18(0x28)
	struct TSoftObjectPtr<URBAIConfig> AIConfig; // 0x40(0x28)
	int32_t ExtraCheatOption; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct OPP.RandomNPCArchetype
// Size: 0x290 (Inherited: 0x00)
struct FRandomNPCArchetype {
	enum class ENPCType NPCType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftClassPtr<UObject> PawnClassPtr; // 0x08(0x28)
	struct URBAIConfig* PawnConfig; // 0x30(0x08)
	struct FConfigurableFloat DifficultyScore; // 0x38(0xc8)
	struct FConfigurableFloat RelativeOdds; // 0x100(0xc8)
	struct FConfigurableInt MaximumSpawnCount; // 0x1c8(0xc8)
};

// ScriptStruct OPP.ObjectiveRandomizationSetupData
// Size: 0x4e8 (Inherited: 0x00)
struct FObjectiveRandomizationSetupData {
	enum class ERandomStateSetup BaseState; // 0x00(0x01)
	enum class ERandomStateSetup DesiredState; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FRandomSettings DesiredStateCount; // 0x08(0x320)
	bool bSplitByObjectiveType; // 0x328(0x01)
	bool bUseRoomGroupsAsObjectiveType; // 0x329(0x01)
	bool bUseOtherCoordoActorsForDistance; // 0x32a(0x01)
	bool bLimitOneObjectivePerRoom; // 0x32b(0x01)
	bool bOverrideDistanceBetweenSameObjectives; // 0x32c(0x01)
	char pad_32D[0x3]; // 0x32d(0x03)
	struct FConfigurableFloat DistanceBetweenSameObjectives; // 0x330(0xc8)
	bool bOverrideDistanceBetweenDifferentObjectives; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)
	struct FConfigurableFloat DistanceBetweenDifferentObjectives; // 0x400(0xc8)
	float DistanceBetweenSameObjectivesOverride; // 0x4c8(0x04)
	float DistanceBetweenDifferentObjectivesOverride; // 0x4cc(0x04)
	char pad_4D0[0x8]; // 0x4d0(0x08)
	struct TArray<struct UObject*> DesiredStateSetObjects; // 0x4d8(0x10)
};

// ScriptStruct OPP.RandomSettings
// Size: 0x320 (Inherited: 0x00)
struct FRandomSettings {
	struct FConfigurableFloat MinRatio; // 0x00(0xc8)
	struct FConfigurableFloat MaxRatio; // 0xc8(0xc8)
	struct FConfigurableInt MinCount; // 0x190(0xc8)
	struct FConfigurableInt MaxCount; // 0x258(0xc8)
};

// ScriptStruct OPP.RBOptionTabData
// Size: 0x30 (Inherited: 0x00)
struct FRBOptionTabData {
	struct FText TabName; // 0x00(0x18)
	enum class EOptionsTabType TabType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct FRBOptionCategoryData> CategoriesData; // 0x20(0x10)
};

// ScriptStruct OPP.RBOptionCategoryData
// Size: 0x28 (Inherited: 0x00)
struct FRBOptionCategoryData {
	struct FText CategoryName; // 0x00(0x18)
	struct TArray<struct FOptionData> OptionsData; // 0x18(0x10)
};

// ScriptStruct OPP.RBInterfacePresetData
// Size: 0x68 (Inherited: 0x00)
struct FRBInterfacePresetData {
	struct FText Title; // 0x00(0x18)
	struct TMap<enum class EOptionsMenuOption, int32_t> PresetValues; // 0x18(0x50)
};

// ScriptStruct OPP.OverseerInfo
// Size: 0x118 (Inherited: 0x00)
struct FOverseerInfo {
	int32_t NumPlayersAlive; // 0x00(0x04)
	int32_t NumPlayersIncapacitated; // 0x04(0x04)
	int32_t NumPlayersDead; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FScheduledBotSpawnAtMonserClosetData> ScheduledSpawns; // 0x10(0x10)
	struct TArray<struct FOverseerPerBotInfo> BotInfos; // 0x20(0x10)
	struct FAIDirectorDebugInfo AIDirectorInfo; // 0x30(0xc0)
	struct TArray<struct FGameEvent> GameEvents; // 0xf0(0x10)
	struct FString GameStateDesc; // 0x100(0x10)
	float GatheringTime; // 0x110(0x04)
	float StageStartedTime; // 0x114(0x04)
};

// ScriptStruct OPP.GameEvent
// Size: 0x50 (Inherited: 0x00)
struct FGameEvent {
	enum class EGameEvent GameEvent; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float EventTime; // 0x04(0x04)
	enum class EGameEventImportanceLevel Importance; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct AActor* TargetActor; // 0x10(0x08)
	struct AActor* ReferenceActor; // 0x18(0x08)
	struct FString EventDesc; // 0x20(0x10)
	struct FVector EventLocation; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString EventStageName; // 0x40(0x10)
};

// ScriptStruct OPP.OverseerPerBotInfo
// Size: 0x30 (Inherited: 0x00)
struct FOverseerPerBotInfo {
	struct ARBNPC* NPC; // 0x00(0x08)
	enum class EAIActivity CurrentActivity; // 0x08(0x01)
	bool bMoving; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct TArray<struct FVector> CurrentPath; // 0x10(0x10)
	struct FString ConfigName; // 0x20(0x10)
};

// ScriptStruct OPP.ScheduledBotSpawnAtMonserClosetData
// Size: 0x48 (Inherited: 0x00)
struct FScheduledBotSpawnAtMonserClosetData {
	struct ARBAISpawner* spawner; // 0x00(0x08)
	struct ARBNPC* NPCClass; // 0x08(0x08)
	struct URBAIConfig* configAsset; // 0x10(0x08)
	struct TArray<struct URBPartialAIConfig*> PartialConfigs; // 0x18(0x10)
	char pad_28[0x1]; // 0x28(0x01)
	enum class EMonsterClosetSelectionMode RespawnClosetSelectionMode; // 0x29(0x01)
	enum class ENPCType NPCType; // 0x2a(0x01)
	bool bForRespawn; // 0x2b(0x01)
	bool bRespawnCloseToAPlayer; // 0x2c(0x01)
	bool bReadyToSpawn; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	float Debug_TimeAfterScheduled; // 0x30(0x04)
	char pad_34[0x10]; // 0x34(0x10)
	float MinRespawnDelay; // 0x44(0x04)
};

// ScriptStruct OPP.OverseerOrbitCamera
// Size: 0x3c (Inherited: 0x00)
struct FOverseerOrbitCamera {
	char pad_0[0x3c]; // 0x00(0x3c)
};

// ScriptStruct OPP.PictogramSet
// Size: 0x88 (Inherited: 0x00)
struct FPictogramSet {
	struct FName OrderSetName; // 0x00(0x08)
	struct FConfigurableBool bAvailable; // 0x08(0x60)
	struct TArray<struct UMaterialInterface*> Materials; // 0x68(0x10)
	struct TArray<struct UMaterialInterface*> MaterialsCopy; // 0x78(0x10)
};

// ScriptStruct OPP.PasscodeDecalData
// Size: 0x10 (Inherited: 0x00)
struct FPasscodeDecalData {
	bool bActive; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Digit; // 0x04(0x04)
	int32_t OrderSetIndex; // 0x08(0x04)
	int32_t Order; // 0x0c(0x04)
};

// ScriptStruct OPP.PasscodeOrderSet
// Size: 0xe0 (Inherited: 0x00)
struct FPasscodeOrderSet {
	struct FName OrderSetName; // 0x00(0x08)
	struct FConfigurableBool bAvailable; // 0x08(0x60)
	bool bStartAtFirst; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FConfigurableBool bKeepSequential; // 0x70(0x60)
	struct TArray<struct UMaterialInterface*> Materials; // 0xd0(0x10)
};

// ScriptStruct OPP.RBPasscodeNumberDecals
// Size: 0x10 (Inherited: 0x00)
struct FRBPasscodeNumberDecals {
	struct TArray<struct UMaterialInterface*> Materials; // 0x00(0x10)
};

// ScriptStruct OPP.RBPathPoint
// Size: 0x38 (Inherited: 0x00)
struct FRBPathPoint {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct OPP.ProceduralRotationAnimData
// Size: 0x3c (Inherited: 0x00)
struct FProceduralRotationAnimData {
	float HeadingDelta; // 0x00(0x04)
	enum class EProceduralAnimInterpType InterpType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float ScheduledPawnTime; // 0x08(0x04)
	float ScheduledServerTime; // 0x0c(0x04)
	float ConstantSpeedContrib; // 0x10(0x04)
	float DelayTimeLeft; // 0x14(0x04)
	float TotalTime; // 0x18(0x04)
	float ElapsedTime; // 0x1c(0x04)
	bool bWaitForNotify; // 0x20(0x01)
	bool bRecomputeDataAfterNotify; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	struct FRotator RecomputeDesiredOrientation; // 0x24(0x0c)
	bool bIndependentRotationControl; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float IndependentRotationDuration; // 0x34(0x04)
	char pad_38[0x4]; // 0x38(0x04)
};

// ScriptStruct OPP.RBPawnCustomizationRequestInfo
// Size: 0x48 (Inherited: 0x00)
struct FRBPawnCustomizationRequestInfo {
	struct AActor* Owner; // 0x00(0x08)
	struct TArray<struct FSoftObjectPath> ResourcesToLoad; // 0x08(0x10)
	enum class EPawnCustomizationRequestType requestType; // 0x18(0x01)
	char pad_19[0x2f]; // 0x19(0x2f)
};

// ScriptStruct OPP.RBPharmaSkillRuntimeInfo
// Size: 0x10 (Inherited: 0x00)
struct FRBPharmaSkillRuntimeInfo {
	struct ARBPlayer* Player; // 0x00(0x08)
	bool bLingeringActive; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float LingeringTimeRemaining; // 0x0c(0x04)
};

// ScriptStruct OPP.RBPickupSaveData
// Size: 0x01 (Inherited: 0x00)
struct FRBPickupSaveData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct OPP.PickupObjectiveRuntimeData
// Size: 0x30 (Inherited: 0x00)
struct FPickupObjectiveRuntimeData {
	enum class EItemType ItemType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct ARBPlayer* Subject; // 0x08(0x08)
	struct ARBPlayerState* SubjectPlayerState; // 0x10(0x08)
	struct ARBPlayer* Instigator; // 0x18(0x08)
	struct ARBPlayerState* InstigatorPlayerState; // 0x20(0x08)
	struct ARBPickup* ObjectivePickup; // 0x28(0x08)
};

// ScriptStruct OPP.PickupObjectiveConfig
// Size: 0x0c (Inherited: 0x00)
struct FPickupObjectiveConfig {
	enum class EItemType ItemType; // 0x00(0x01)
	bool CheckIfReachable; // 0x01(0x01)
	bool UseSpacialReasoningForDistance; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float MaxSearchDistance; // 0x04(0x04)
	float MinSearchDistance; // 0x08(0x04)
};

// ScriptStruct OPP.PipeConnector
// Size: 0x40 (Inherited: 0x00)
struct FPipeConnector {
	struct FTransform Transform; // 0x00(0x30)
	struct UStaticMesh* StaticMesh; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct OPP.PipeSegment
// Size: 0x10 (Inherited: 0x00)
struct FPipeSegment {
	float Length; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UStaticMesh* StaticMesh; // 0x08(0x08)
};

// ScriptStruct OPP.DeadClearanceData
// Size: 0x34 (Inherited: 0x00)
struct FDeadClearanceData {
	char pad_0[0x34]; // 0x00(0x34)
};

// ScriptStruct OPP.LandingData
// Size: 0x08 (Inherited: 0x00)
struct FLandingData {
	bool bLandingQueued; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float LandingHeight; // 0x04(0x04)
};

// ScriptStruct OPP.PlayerDebugInfo
// Size: 0x28 (Inherited: 0x00)
struct FPlayerDebugInfo {
	struct ARBPlayer* Player; // 0x00(0x08)
	bool bHasHotPotato; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FHitResult> ServerPhysHitResults; // 0x10(0x10)
	float LastUpdatedTime; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct OPP.DamageColumn
// Size: 0x08 (Inherited: 0x00)
struct FDamageColumn {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct OPP.PlayerInputs
// Size: 0x118 (Inherited: 0x00)
struct FPlayerInputs {
	char pad_0[0x118]; // 0x00(0x118)
};

// ScriptStruct OPP.PlayerTeleportData
// Size: 0x24 (Inherited: 0x00)
struct FPlayerTeleportData {
	char pad_0[0x24]; // 0x00(0x24)
};

// ScriptStruct OPP.FarLedgeCandidateData
// Size: 0x30 (Inherited: 0x00)
struct FFarLedgeCandidateData {
	struct ARBLedgeMarker* LedgeMarker; // 0x00(0x08)
	char pad_8[0x28]; // 0x08(0x28)
};

// ScriptStruct OPP.TraversalPositionData
// Size: 0x40 (Inherited: 0x00)
struct FTraversalPositionData {
	struct ARBLedgeMarker* LedgeMarker; // 0x00(0x08)
	char pad_8[0x38]; // 0x08(0x38)
};

// ScriptStruct OPP.CameraLookAtData
// Size: 0x70 (Inherited: 0x00)
struct FCameraLookAtData {
	char pad_0[0x28]; // 0x00(0x28)
	struct AActor* LookAtTarget; // 0x28(0x08)
	char pad_30[0x40]; // 0x30(0x40)
};

// ScriptStruct OPP.TargettedSmoothingLocationData
// Size: 0x28 (Inherited: 0x00)
struct FTargettedSmoothingLocationData {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct OPP.TargettedSmoothingAngleData
// Size: 0x18 (Inherited: 0x00)
struct FTargettedSmoothingAngleData {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct OPP.CamSmoothingData
// Size: 0x24 (Inherited: 0x00)
struct FCamSmoothingData {
	char pad_0[0x24]; // 0x00(0x24)
};

// ScriptStruct OPP.ViewLimits
// Size: 0x14 (Inherited: 0x00)
struct FViewLimits {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct OPP.CamView
// Size: 0x18 (Inherited: 0x00)
struct FCamView {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct OPP.RBPlayerCellSlotDefinition
// Size: 0x28 (Inherited: 0x00)
struct FRBPlayerCellSlotDefinition {
	enum class ECustomizationMenuCategory Slot; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName Category; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText Name; // 0x10(0x18)
};

// ScriptStruct OPP.RBPlayerCachedInfo
// Size: 0x50 (Inherited: 0x00)
struct FRBPlayerCachedInfo {
	struct FProfileId ProfileId; // 0x00(0x10)
	enum class EActiveSkillType ActiveSkillType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t PlayerLevel; // 0x14(0x04)
	struct TArray<struct FName> CustomizationOptions; // 0x18(0x10)
	bool bIsFemale; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FName Outfit; // 0x2c(0x08)
	struct FName VoiceOption; // 0x34(0x08)
	struct FName PlayerIcon; // 0x3c(0x08)
	struct FName HairColor; // 0x44(0x08)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct OPP.RBDefaultCustomizationSlotInfoList
// Size: 0x10 (Inherited: 0x00)
struct FRBDefaultCustomizationSlotInfoList {
	struct TArray<struct FRBDefaultCustomizationSlotInfo> CustomizationSlotInfos; // 0x00(0x10)
};

// ScriptStruct OPP.RBDefaultCustomizationSlotInfo
// Size: 0x10 (Inherited: 0x00)
struct FRBDefaultCustomizationSlotInfo {
	struct URBPlayerCustomizationOption* MaleDefaultOption; // 0x00(0x08)
	struct URBPlayerCustomizationOption* FemaleDefaultOption; // 0x08(0x08)
};

// ScriptStruct OPP.RBHairColorOption
// Size: 0x28 (Inherited: 0x00)
struct FRBHairColorOption {
	struct FName ID; // 0x00(0x08)
	struct FLinearColor InGameColor; // 0x08(0x10)
	struct FLinearColor UIColor; // 0x18(0x10)
};

// ScriptStruct OPP.RBPlayerCustomizationMaterialOverride
// Size: 0x38 (Inherited: 0x00)
struct FRBPlayerCustomizationMaterialOverride {
	struct FString ID; // 0x00(0x10)
	struct TSoftObjectPtr<UMaterialInstanceConstant> Material; // 0x10(0x28)
};

// ScriptStruct OPP.RBPlayerCustomizationOptionID
// Size: 0x28 (Inherited: 0x00)
struct FRBPlayerCustomizationOptionID {
	struct TSoftObjectPtr<URBPlayerCustomizationOption> CustomizationOption; // 0x00(0x28)
};

// ScriptStruct OPP.CustomizationRarityUIInfo
// Size: 0x68 (Inherited: 0x00)
struct FCustomizationRarityUIInfo {
	struct FSlateColor PrimaryColor; // 0x00(0x28)
	struct FSlateColor SecondaryColor; // 0x28(0x28)
	struct FText Name; // 0x50(0x18)
};

// ScriptStruct OPP.CustomizationSlotUIInfo
// Size: 0xa0 (Inherited: 0x00)
struct FCustomizationSlotUIInfo {
	struct FSlateBrush RewardBrush; // 0x00(0x88)
	struct FText Name; // 0x88(0x18)
};

// ScriptStruct OPP.AlertedStateActions
// Size: 0x20 (Inherited: 0x00)
struct FAlertedStateActions {
	struct TArray<struct TSoftObjectPtr<ARBTriggerable>> ToTriggerOnAlerted; // 0x00(0x10)
	struct TArray<struct TSoftObjectPtr<ARBTriggerable>> ToUntriggerOnAlerted; // 0x10(0x10)
};

// ScriptStruct OPP.PlayerInputState
// Size: 0x0c (Inherited: 0x00)
struct FPlayerInputState {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct OPP.RBPlayerLoadoutValidator
// Size: 0x18 (Inherited: 0x00)
struct FRBPlayerLoadoutValidator {
	bool bHasRequiredActiveSkill; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<enum class EActiveSkillType> RequiredActiveSkillTypes; // 0x08(0x10)
};

// ScriptStruct OPP.MenuUpgradeItemInfo
// Size: 0x108 (Inherited: 0x00)
struct FMenuUpgradeItemInfo {
	struct FName ItemId; // 0x00(0x08)
	enum class EMenuUpgradeItemState State; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FRBItemProgressionData ItemProgressionData; // 0x10(0xc8)
	struct FItemUnlockInfo ItemUnlockInfo; // 0xd8(0x20)
	enum class ELoadoutElementType UpgradeType; // 0xf8(0x01)
	enum class EActiveSkillType ActiveSkillType; // 0xf9(0x01)
	char pad_FA[0x2]; // 0xfa(0x02)
	int32_t LevelToReach; // 0xfc(0x04)
	bool bIsNew; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
};

// ScriptStruct OPP.ItemUnlockInfo
// Size: 0x20 (Inherited: 0x00)
struct FItemUnlockInfo {
	struct FName UnlockId; // 0x00(0x08)
	bool bRequiresUnlock; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t Level; // 0x0c(0x04)
	struct TArray<struct FName> RequiredItems; // 0x10(0x10)
};

// ScriptStruct OPP.RBPlayerProgressionReleaseData
// Size: 0x0c (Inherited: 0x00)
struct FRBPlayerProgressionReleaseData {
	int32_t ReleaseCount; // 0x00(0x04)
	struct FName RewardDataId; // 0x04(0x08)
};

// ScriptStruct OPP.RBPlayerProgressionReleaseDataRow
// Size: 0x18 (Inherited: 0x08)
struct FRBPlayerProgressionReleaseDataRow : FTableRowBase {
	int32_t ReleaseCount; // 0x08(0x04)
	struct FName RewardDataId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct OPP.RBPlayerProgressionLevelDataRow
// Size: 0x18 (Inherited: 0x08)
struct FRBPlayerProgressionLevelDataRow : FTableRowBase {
	int32_t Level; // 0x08(0x04)
	int32_t RequiredXp; // 0x0c(0x04)
	struct FName RewardDataId; // 0x10(0x08)
};

// ScriptStruct OPP.PlayerProgressionLevelingData
// Size: 0x10 (Inherited: 0x00)
struct FPlayerProgressionLevelingData {
	struct TArray<struct FPlayerProgressionLevelData> Levels; // 0x00(0x10)
};

// ScriptStruct OPP.PlayerProgressionLevelData
// Size: 0x60 (Inherited: 0x00)
struct FPlayerProgressionLevelData {
	int32_t Level; // 0x00(0x04)
	int32_t RequiredXp; // 0x04(0x04)
	struct FName RewardDataId; // 0x08(0x08)
	struct TMap<enum class ERewardType, int32_t> ExtraUnlockedRewards; // 0x10(0x50)
};

// ScriptStruct OPP.StartAction
// Size: 0x30 (Inherited: 0x00)
struct FStartAction {
	struct TSoftObjectPtr<AActor> ActionActor; // 0x00(0x28)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct OPP.RBPlayerStatConfig
// Size: 0x60 (Inherited: 0x00)
struct FRBPlayerStatConfig {
	struct FName ID; // 0x00(0x08)
	enum class EPlayerStat PlayerStat; // 0x08(0x01)
	enum class EPlayerStatAggregationType AggregationType; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FText DisplayName; // 0x10(0x18)
	struct FString InWorldDisplayName; // 0x28(0x10)
	struct FSoftObjectPath Icon; // 0x38(0x18)
	float DisplayMultiplier; // 0x50(0x04)
	int32_t DisplayDigits; // 0x54(0x04)
	bool bSortAscending; // 0x58(0x01)
	struct FPlayerStatTrackingConfig TrackingConfig; // 0x59(0x03)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct OPP.PlayerStatTrackingConfig
// Size: 0x03 (Inherited: 0x00)
struct FPlayerStatTrackingConfig {
	bool bGlobal; // 0x00(0x01)
	bool bCharacter; // 0x01(0x01)
	bool bTrial; // 0x02(0x01)
};

// ScriptStruct OPP.RBPlayerBadgeRow
// Size: 0x78 (Inherited: 0x08)
struct FRBPlayerBadgeRow : FTableRowBase {
	struct FName ID; // 0x08(0x08)
	struct FSoftObjectPath Icon; // 0x10(0x18)
	struct FText Name; // 0x28(0x18)
	struct FText Description; // 0x40(0x18)
	struct TArray<enum class EPlayerStat> PlayerStats; // 0x58(0x10)
	int32_t Threshold; // 0x68(0x04)
	enum class EPlayerStat AwardedPlayerStat; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	struct FName RewardId; // 0x70(0x08)
};

// ScriptStruct OPP.RBPlayerUpgradeEffectDataRow
// Size: 0x40 (Inherited: 0x08)
struct FRBPlayerUpgradeEffectDataRow : FTableRowBase {
	struct FName EffectId; // 0x08(0x08)
	struct FText Description; // 0x10(0x18)
	struct FName SettingName; // 0x28(0x08)
	enum class EGameplayAttributeType AttributeType; // 0x30(0x01)
	enum class EGameplayAttributeModifierType ModifierType; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	float Value; // 0x34(0x04)
	bool bDisplayEffect; // 0x38(0x01)
	bool bDisplayModifier; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct OPP.RBPlayerUpgradeEffectData
// Size: 0x88 (Inherited: 0x00)
struct FRBPlayerUpgradeEffectData {
	struct FName ID; // 0x00(0x08)
	struct FText Description; // 0x08(0x18)
	struct TMap<struct FName, float> SettingValues; // 0x20(0x50)
	struct TArray<struct FRBGameplayAttributeModifier> Modifiers; // 0x70(0x10)
	bool bDisplay; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// ScriptStruct OPP.RBPosedDeadBodyCustomizationProxy
// Size: 0x08 (Inherited: 0x00)
struct FRBPosedDeadBodyCustomizationProxy {
	struct ARBPosedDeadBody* Owner; // 0x00(0x08)
};

// ScriptStruct OPP.RBProgramInfoRow
// Size: 0xc0 (Inherited: 0x08)
struct FRBProgramInfoRow : FTableRowBase {
	struct FName ID; // 0x08(0x08)
	int32_t Order; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText Name; // 0x18(0x18)
	struct FText Source; // 0x30(0x18)
	struct UTexture2D* Poster; // 0x48(0x08)
	struct FName TutorialId; // 0x50(0x08)
	struct FText TutorialText; // 0x58(0x18)
	struct FName AvailableTutorialId; // 0x70(0x08)
	struct FText AvailableTutorialTitle; // 0x78(0x18)
	struct FText AvailableTutorialText; // 0x90(0x18)
	bool bComingSoon; // 0xa8(0x01)
	bool bInaccessibleUntilUnlocked; // 0xa9(0x01)
	char pad_AA[0x6]; // 0xaa(0x06)
	struct UAkAudioEvent* EvaluationCorridorCompletionDirectorVO; // 0xb0(0x08)
	struct UAkAudioEvent* ProgramUnlockedDirectorVO; // 0xb8(0x08)
};

// ScriptStruct OPP.ProjectileSettings
// Size: 0x0c (Inherited: 0x00)
struct FProjectileSettings {
	float HorizontalSpeed; // 0x00(0x04)
	float PitchRotationSpeed; // 0x04(0x04)
	float damageAmount; // 0x08(0x04)
};

// ScriptStruct OPP.PushCartRollingGateReplacementInfo
// Size: 0x38 (Inherited: 0x00)
struct FPushCartRollingGateReplacementInfo {
	struct ARBPushCartSpawner* PathOwner; // 0x00(0x08)
	int32_t PathSplineIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct ARBSplineMeshActor* SplineActor; // 0x10(0x08)
	float SplineActorOrderedDistanceOnRail; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct AActor* Actor; // 0x20(0x08)
	struct ARBTriggerableGate* RollingGate; // 0x28(0x08)
	struct ARBPushCartRailBlocker* SpawnedCartRailBlocker; // 0x30(0x08)
};

// ScriptStruct OPP.PushCartInfo
// Size: 0x20 (Inherited: 0x00)
struct FPushCartInfo {
	struct ARBPushCartSpawner* spawner; // 0x00(0x08)
	struct ARBPushCartSpawner* Goal; // 0x08(0x08)
	struct ARBBasePushable* SpawnedPushable; // 0x10(0x08)
	int32_t PathIdx; // 0x18(0x04)
	bool bIsRailCart; // 0x1c(0x01)
	bool bCompleted; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct OPP.PushCartPath
// Size: 0x78 (Inherited: 0x00)
struct FPushCartPath {
	struct ARBBasePushable* PushableClass; // 0x00(0x08)
	struct ARBPushCartSpawner* PathGoal; // 0x08(0x08)
	struct TArray<struct ARBSplineMeshActor*> OrderedSplines; // 0x10(0x10)
	struct TArray<struct ARBSplineMeshActor*> OverlappingSplines; // 0x20(0x10)
	struct TArray<struct TSoftObjectPtr<AActor>> ActorToIgnoreCollision; // 0x30(0x10)
	float DistanceAlongSpline; // 0x40(0x04)
	bool bForceUseSinglePath; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct TArray<struct TSoftObjectPtr<AActor>> ActorsToToggleWhenEnabled; // 0x48(0x10)
	struct TArray<struct TSoftObjectPtr<AActor>> ActorsToUnToggleWhenEnabled; // 0x58(0x10)
	struct ARBPushCartSpawner* PathOwner; // 0x68(0x08)
	int32_t PathIndex; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct OPP.PuzzleRoomSection
// Size: 0xe0 (Inherited: 0x00)
struct FPuzzleRoomSection {
	struct FConfigurableInt MinimumPuzzleRoomsInSection; // 0x00(0xc8)
	struct TArray<struct TSoftObjectPtr<ARBRoom>> RoomsInSection; // 0xc8(0x10)
	int32_t scheduledRoomsCount; // 0xd8(0x04)
	int32_t randomID; // 0xdc(0x04)
};

// ScriptStruct OPP.QuestGiverAnimations
// Size: 0x50 (Inherited: 0x00)
struct FQuestGiverAnimations {
	struct UAnimSequenceBase* DefaultIdle; // 0x00(0x08)
	struct UAnimSequenceBase* InMenuIdle; // 0x08(0x08)
	struct UAnimSequenceBase* FirstTimeEnterMenu; // 0x10(0x08)
	struct UAnimSequenceBase* EnterMenu; // 0x18(0x08)
	struct UAnimSequenceBase* AccessTaskTab; // 0x20(0x08)
	struct UAnimSequenceBase* AcceptTask; // 0x28(0x08)
	struct UAnimSequenceBase* AccessUpgradeTab; // 0x30(0x08)
	struct UAnimSequenceBase* AccessShopTab; // 0x38(0x08)
	struct UAnimSequenceBase* BuyUpgrade; // 0x40(0x08)
	struct UAnimSequenceBase* ExitMenu; // 0x48(0x08)
};

// ScriptStruct OPP.ValidActorForUnlockableGateInfo
// Size: 0x10 (Inherited: 0x00)
struct FValidActorForUnlockableGateInfo {
	struct AActor* Actor; // 0x00(0x08)
	float DistanceOnRail; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct OPP.RailSlider
// Size: 0x40 (Inherited: 0x00)
struct FRailSlider {
	struct ARBSplineActor* InitialMarker; // 0x00(0x08)
	struct ARBSplineActor* DestinationMarker; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
	struct TArray<struct ARBSplineActor*> MarkerList; // 0x18(0x10)
	char pad_28[0x18]; // 0x28(0x18)
};

// ScriptStruct OPP.GlobalRandomValidationInfo
// Size: 0x50 (Inherited: 0x00)
struct FGlobalRandomValidationInfo {
	struct TMap<struct ARBAISpawner*, struct FString> AllAISpawners; // 0x00(0x50)
};

// ScriptStruct OPP.SoloPlayLot
// Size: 0x10 (Inherited: 0x00)
struct FSoloPlayLot {
	struct TArray<struct TSoftObjectPtr<AActor>> SoloOnlyActors; // 0x00(0x10)
};

// ScriptStruct OPP.RandomDoorLot
// Size: 0x1628 (Inherited: 0x00)
struct FRandomDoorLot {
	struct FName LotName; // 0x00(0x08)
	char bBlock : 1; // 0x08(0x01)
	char bReplace : 1; // 0x08(0x01)
	char bTrap : 1; // 0x08(0x01)
	char Block : 1; // 0x08(0x01)
	char bOpen : 1; // 0x08(0x01)
	char pad_8_5 : 3; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FRandomSettings RewardRoomCount; // 0x10(0x320)
	struct FRandomSettings TrapRoomCount; // 0x330(0x320)
	struct TArray<struct TSoftObjectPtr<AActor>> Blockables; // 0x650(0x10)
	struct FRandomSettings BlockableCount; // 0x660(0x320)
	struct FRandomSettings ReplaceableCount; // 0x980(0x320)
	struct TArray<struct FRandomDoorReplacement> ReplacementsActors; // 0xca0(0x10)
	struct FRandomSettings TrappedCount; // 0xcb0(0x320)
	struct ARBTrapTriggerable* OverrideTrapLeftActorClass; // 0xfd0(0x08)
	struct ARBTrapTriggerable* OverrideTrapRightActorClass; // 0xfd8(0x08)
	struct FRandomSettings LockedCount; // 0xfe0(0x320)
	struct FRandomSettings OpenedCount; // 0x1300(0x320)
	int32_t RandomizerId; // 0x1620(0x04)
	char pad_1624[0x4]; // 0x1624(0x04)
};

// ScriptStruct OPP.RandomDoorReplacement
// Size: 0x18 (Inherited: 0x00)
struct FRandomDoorReplacement {
	float Chance; // 0x00(0x04)
	bool bRemoveDoorFrame; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct AActor* ReplaceActorClass; // 0x08(0x08)
	struct AActor* DoubleDoorReplaceActorClass; // 0x10(0x08)
};

// ScriptStruct OPP.PendingRandomState
// Size: 0x10 (Inherited: 0x00)
struct FPendingRandomState {
	struct AActor* Actor; // 0x00(0x08)
	enum class ERandomStateSetup State; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct OPP.RandomAISetup
// Size: 0x50 (Inherited: 0x00)
struct FRandomAISetup {
	struct FString Description; // 0x00(0x10)
	bool bDisabled; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct TSoftObjectPtr<AActor>> AISpawners; // 0x18(0x10)
	struct TArray<struct FRandomAIScenario> Scenarios; // 0x28(0x10)
	int32_t RandomizerId; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<int32_t> NPCsToActivate; // 0x40(0x10)
};

// ScriptStruct OPP.RandomAIScenario
// Size: 0x278 (Inherited: 0x00)
struct FRandomAIScenario {
	struct FString Description; // 0x00(0x10)
	struct FConfigurableInt MinimumCount; // 0x10(0xc8)
	struct FConfigurableInt MaximumCount; // 0xd8(0xc8)
	struct TArray<struct FRandomAIConfigOption> ConfigOptions; // 0x1a0(0x10)
	struct FConfigurableFloat RelativeProbability; // 0x1b0(0xc8)
};

// ScriptStruct OPP.RandomAIConfigOption
// Size: 0xe8 (Inherited: 0x00)
struct FRandomAIConfigOption {
	struct URBAIConfig* configAsset; // 0x00(0x08)
	struct TArray<struct URBPartialAIConfig*> PartialConfigs; // 0x08(0x10)
	struct FConfigurableFloat ratio; // 0x18(0xc8)
	bool bLastOption; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
};

// ScriptStruct OPP.RandomizationLot
// Size: 0x3c0 (Inherited: 0x00)
struct FRandomizationLot {
	struct FName LotName; // 0x00(0x08)
	struct TSoftObjectPtr<AActor> ConditionalActors; // 0x08(0x28)
	enum class ERandomStateSetup ConditionalActorSetup; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct TSoftObjectPtr<AActor>> RandomActors; // 0x38(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> RandomActorClasses; // 0x48(0x10)
	struct TArray<struct TSoftObjectPtr<ARBRoomGroup>> RestrictedSections; // 0x58(0x10)
	bool bDontChangeIgnoredActors; // 0x68(0x01)
	enum class ERandomStateSetup BaseState; // 0x69(0x01)
	enum class ERandomStateSetup DesiredState; // 0x6a(0x01)
	char pad_6B[0x5]; // 0x6b(0x05)
	struct FConfigurableFloat MinActivationRatio; // 0x70(0xc8)
	struct FConfigurableFloat MaxActivationRatio; // 0x138(0xc8)
	struct FConfigurableInt MinActivationCount; // 0x200(0xc8)
	struct FConfigurableInt MaxActivationCount; // 0x2c8(0xc8)
	float MinDistanceBetweenActors; // 0x390(0x04)
	float MinDistanceFromSAS; // 0x394(0x04)
	int32_t RandomizerId; // 0x398(0x04)
	char pad_39C[0x4]; // 0x39c(0x04)
	struct TArray<enum class ERandomStateSetup> RandomActorsStates_Server; // 0x3a0(0x10)
	struct TArray<struct AActor*> RandomizedActors; // 0x3b0(0x10)
};

// ScriptStruct OPP.RandomizationLotSetupData
// Size: 0x328 (Inherited: 0x00)
struct FRandomizationLotSetupData {
	enum class ERandomStateSetup BaseState; // 0x00(0x01)
	enum class ERandomStateSetup DesiredState; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FRandomSettings DesiredStateCount; // 0x08(0x320)
};

// ScriptStruct OPP.RandomizationGroup
// Size: 0x50 (Inherited: 0x00)
struct FRandomizationGroup {
	struct FName GroupName; // 0x00(0x08)
	struct TArray<struct FName> ConditionalScenariosName; // 0x08(0x10)
	struct TArray<struct TSoftObjectPtr<AActor>> RandomActors; // 0x18(0x10)
	struct TArray<struct FRandomScenarioSetup> Scenarios; // 0x28(0x10)
	int32_t ActiveScenarioIdx_Server; // 0x38(0x04)
	int32_t ActiveScenarioIdx_Client; // 0x3c(0x04)
	struct AActor* Debug_ShowActor; // 0x40(0x08)
	float Debug_ShowActorTimestamp; // 0x48(0x04)
	int32_t RandomizerId; // 0x4c(0x04)
};

// ScriptStruct OPP.RandomScenarioSetup
// Size: 0x30 (Inherited: 0x00)
struct FRandomScenarioSetup {
	struct FName ScenarioName; // 0x00(0x08)
	bool bTestInGame; // 0x08(0x01)
	bool bDisabled; // 0x09(0x01)
	bool bEditorActive; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
	struct TArray<enum class ERandomStateSetup> RandomActorsSetup; // 0x10(0x10)
	struct TArray<enum class ERandomStateSetup> RandomActorsStates_Server; // 0x20(0x10)
};

// ScriptStruct OPP.ConditionalScenarioSetup
// Size: 0x70 (Inherited: 0x00)
struct FConditionalScenarioSetup {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<AActor> ConditionActor; // 0x08(0x28)
	bool bIfStateA; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct TSoftObjectPtr<AActor>> RandomActors; // 0x38(0x10)
	struct TArray<enum class ERandomStateSetup> RandomActorsSetup; // 0x48(0x10)
	struct TArray<enum class ERandomStateSetup> RandomActorsStates_Server; // 0x58(0x10)
	int32_t RandomizerId; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct OPP.RBRandomRewardPool
// Size: 0x18 (Inherited: 0x00)
struct FRBRandomRewardPool {
	struct FName RewardPoolId; // 0x00(0x08)
	struct TArray<struct FRBRandomRewardEntry> Entries; // 0x08(0x10)
};

// ScriptStruct OPP.RBRandomRewardEntry
// Size: 0x10 (Inherited: 0x00)
struct FRBRandomRewardEntry {
	int32_t Weight; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct URBCustomizationOption* UnlockedCustomizationOption; // 0x08(0x08)
};

// ScriptStruct OPP.RBRandomRewardEntryRow
// Size: 0x20 (Inherited: 0x08)
struct FRBRandomRewardEntryRow : FTableRowBase {
	struct FName RewardPoolId; // 0x08(0x08)
	int32_t Weight; // 0x10(0x04)
	bool bUnlock; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName ItemId; // 0x18(0x08)
};

// ScriptStruct OPP.RemoteDebuggingState
// Size: 0x20 (Inherited: 0x00)
struct FRemoteDebuggingState {
	bool bDebugAI; // 0x00(0x01)
	bool bDebugPlayer; // 0x01(0x01)
	bool bDebugAIConfig; // 0x02(0x01)
	bool bDebugStreaming; // 0x03(0x01)
	bool bDebugScoring; // 0x04(0x01)
	bool bDebugMusic; // 0x05(0x01)
	bool bDebugDoorRandomization; // 0x06(0x01)
	bool bOverseer; // 0x07(0x01)
	bool bDebugNPCRandomization; // 0x08(0x01)
	bool bDebugPlayerStats; // 0x09(0x01)
	bool bDebugAnalytics; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
	struct ARBNPC* NPCToDebug; // 0x10(0x08)
	struct ARBPlayer* PlayerToDebug; // 0x18(0x08)
};

// ScriptStruct OPP.RepulsionRule
// Size: 0x28 (Inherited: 0x00)
struct FRepulsionRule {
	enum class ERepulsionRuleType RuleType; // 0x00(0x01)
	char RepulsionDirection; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float ForwardBlindSpotAngle; // 0x04(0x04)
	struct FVector RepulsionCenterRelativeOffset; // 0x08(0x0c)
	enum class ERepulsionReactionType ReactionType; // 0x14(0x01)
	enum class ERepulsionReactionFilter ReactionFilter; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct TArray<struct AActor*> TargettedActors; // 0x18(0x10)
};

// ScriptStruct OPP.RBRewardDataRow
// Size: 0xb0 (Inherited: 0x08)
struct FRBRewardDataRow : FTableRowBase {
	struct FString Type; // 0x08(0x10)
	struct FString Name; // 0x18(0x10)
	int32_t Xp; // 0x28(0x04)
	int32_t currency_murkoffpoint; // 0x2c(0x04)
	int32_t currency_murkoffdollar; // 0x30(0x04)
	int32_t currency_releasetoken; // 0x34(0x04)
	struct FName UnlockedItem1; // 0x38(0x08)
	struct FName UnlockedItem2; // 0x40(0x08)
	struct FName UnlockedItem3; // 0x48(0x08)
	struct FName UnlockedItem4; // 0x50(0x08)
	struct FName UnlockedItem5; // 0x58(0x08)
	struct FName AcquiredItem1; // 0x60(0x08)
	struct FName AcquiredItem2; // 0x68(0x08)
	struct FName AcquiredItem3; // 0x70(0x08)
	struct FName AcquiredItem4; // 0x78(0x08)
	struct FName AcquiredItem5; // 0x80(0x08)
	struct FName RandomRewardPoolId1; // 0x88(0x08)
	struct FName RandomRewardPoolId2; // 0x90(0x08)
	struct FName RandomRewardPoolId3; // 0x98(0x08)
	struct FName RandomRewardPoolId4; // 0xa0(0x08)
	struct FName RandomRewardPoolId5; // 0xa8(0x08)
};

// ScriptStruct OPP.RBGeneratedRewardData
// Size: 0x48 (Inherited: 0x00)
struct FRBGeneratedRewardData {
	int32_t Xp; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FCurrencyEntry> Currencies; // 0x08(0x10)
	struct TArray<struct FName> Items; // 0x18(0x10)
	struct TArray<struct FName> UnlockedItems; // 0x28(0x10)
	struct TArray<struct URBCustomizationOption*> UnlockedCustomizationOptions; // 0x38(0x10)
};

// ScriptStruct OPP.RBRewardData
// Size: 0x88 (Inherited: 0x00)
struct FRBRewardData {
	int32_t Xp; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<enum class ECurrencyType, int32_t> Currencies; // 0x08(0x50)
	struct TArray<struct FName> Items; // 0x58(0x10)
	struct TArray<struct URBCustomizationOption*> UnlockedCustomizationOption; // 0x68(0x10)
	struct TArray<struct FName> RandomRewardPoolIds; // 0x78(0x10)
};

// ScriptStruct OPP.RoomDetourPathData
// Size: 0x10 (Inherited: 0x00)
struct FRoomDetourPathData {
	struct TArray<struct URBRoomConnectorComponent*> DetourPath; // 0x00(0x10)
};

// ScriptStruct OPP.RichInputWidgetRow
// Size: 0x20 (Inherited: 0x08)
struct FRichInputWidgetRow : FTableRowBase {
	struct FSoftClassPath WidgetClass; // 0x08(0x18)
};

// ScriptStruct OPP.RoomAssociationComponentList
// Size: 0x10 (Inherited: 0x00)
struct FRoomAssociationComponentList {
	struct TArray<struct URBRoomAssociationComponent*> AssociatedComponents; // 0x00(0x10)
};

// ScriptStruct OPP.RoomConnection
// Size: 0x20 (Inherited: 0x00)
struct FRoomConnection {
	struct ARBRoom* RoomFrom; // 0x00(0x08)
	struct ARBRoom* RoomTo; // 0x08(0x08)
	struct URBRoomConnectorComponent* ConnectionComponent; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct OPP.SectionAIConfigOverride
// Size: 0x10 (Inherited: 0x00)
struct FSectionAIConfigOverride {
	enum class ENPCType NPCType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct URBAIConfig* Config; // 0x08(0x08)
};

// ScriptStruct OPP.RoomGroupConnectionInfo
// Size: 0x18 (Inherited: 0x00)
struct FRoomGroupConnectionInfo {
	struct ARBRoomGroup* ConnectedRoomGroup; // 0x00(0x08)
	struct TArray<struct URBRoomConnectorComponent*> RoomConnectors; // 0x08(0x10)
};

// ScriptStruct OPP.MissionTransitionDirection
// Size: 0x30 (Inherited: 0x00)
struct FMissionTransitionDirection {
	enum class ESASTransitionDirection TransitionDirection; // 0x00(0x01)
	bool bCanBeEntrance; // 0x01(0x01)
	bool bCanBeExit; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct FRBMissionID MissionID; // 0x08(0x28)
};

// ScriptStruct OPP.ScheduledSpawnerSpawnAIData
// Size: 0x11f0 (Inherited: 0x00)
struct FScheduledSpawnerSpawnAIData {
	struct ARBAISpawner* spawner; // 0x00(0x08)
	struct ARBNPC* PawnClass; // 0x08(0x08)
	struct URBAIConfig* configAsset; // 0x10(0x08)
	struct TArray<struct URBPartialAIConfig*> AdditionalConfigs; // 0x18(0x10)
	struct FAIConfigData ConfigOverrides; // 0x28(0x11bc)
	char pad_11E4[0x4]; // 0x11e4(0x04)
	struct URBVOMapping* VOMappingOverride; // 0x11e8(0x08)
};

// ScriptStruct OPP.ScheduledTransform
// Size: 0x130 (Inherited: 0x68)
struct FScheduledTransform : FScheduledProperty {
	char pad_68[0x8]; // 0x68(0x08)
	struct FTransform InitialValue; // 0x70(0x30)
	struct FTransform LastValue; // 0xa0(0x30)
	struct FTransform CurrentValue; // 0xd0(0x30)
	struct FTransform DesiredValue; // 0x100(0x30)
};

// ScriptStruct OPP.ScheduledFloat
// Size: 0x78 (Inherited: 0x68)
struct FScheduledFloat : FScheduledProperty {
	float InitialValue; // 0x68(0x04)
	float LastValue; // 0x6c(0x04)
	float CurrentValue; // 0x70(0x04)
	float DesiredValue; // 0x74(0x04)
};

// ScriptStruct OPP.ScheduledInt
// Size: 0x78 (Inherited: 0x68)
struct FScheduledInt : FScheduledProperty {
	int32_t InitialValue; // 0x68(0x04)
	int32_t LastValue; // 0x6c(0x04)
	int32_t CurrentValue; // 0x70(0x04)
	int32_t DesiredValue; // 0x74(0x04)
};

// ScriptStruct OPP.ScoringTextValueMapping
// Size: 0x18 (Inherited: 0x00)
struct FScoringTextValueMapping {
	float Score; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FText> DisplayValues; // 0x08(0x10)
};

// ScriptStruct OPP.ScoringDebugInfo
// Size: 0x10 (Inherited: 0x00)
struct FScoringDebugInfo {
	struct TArray<struct FScoringPlayerDebugInfo> ScoringPlayerDebugInfoList; // 0x00(0x10)
};

// ScriptStruct OPP.ScoringPlayerDebugInfo
// Size: 0x28 (Inherited: 0x00)
struct FScoringPlayerDebugInfo {
	struct ARBPlayerState* RBPlayerState; // 0x00(0x08)
	struct FString PlayerName; // 0x08(0x10)
	struct TArray<struct FRecordedScoringEvent> RecordedScoringEvents; // 0x18(0x10)
};

// ScriptStruct OPP.RBPlayerScoring
// Size: 0x28 (Inherited: 0x00)
struct FRBPlayerScoring {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct OPP.RBScoringRuleRow
// Size: 0x48 (Inherited: 0x08)
struct FRBScoringRuleRow : FTableRowBase {
	struct FName ID; // 0x08(0x08)
	struct FText RuleName; // 0x10(0x18)
	struct TArray<enum class EPlayerEvent> PlayerEvents; // 0x28(0x10)
	float Score; // 0x38(0x04)
	int32_t MaxCountedEvents; // 0x3c(0x04)
	int32_t MaxAbsoluteScore; // 0x40(0x04)
	bool bUseEventValue; // 0x44(0x01)
	bool bDisplayInReport; // 0x45(0x01)
	char pad_46[0x2]; // 0x46(0x02)
};

// ScriptStruct OPP.ScoringStageConfig
// Size: 0x100 (Inherited: 0x00)
struct FScoringStageConfig {
	struct FRBStageID StageID; // 0x00(0x28)
	struct FConfigurableInt DefaultTimeToCompleteSeconds; // 0x28(0xc8)
	struct TArray<struct FScoringMissionConfig> MissionConfigs; // 0xf0(0x10)
};

// ScriptStruct OPP.ScoringMissionConfig
// Size: 0xf0 (Inherited: 0x00)
struct FScoringMissionConfig {
	struct FRBMissionID MissionID; // 0x00(0x28)
	struct FConfigurableInt TimeToCompleteSeconds; // 0x28(0xc8)
};

// ScriptStruct OPP.InvestigationAnalysisSettings
// Size: 0x28 (Inherited: 0x00)
struct FInvestigationAnalysisSettings {
	float DistanceInterval; // 0x00(0x04)
	float EntryYawAngleInterval; // 0x04(0x04)
	float SightClearanceAngleInterval; // 0x08(0x04)
	float AnimAnalysisTimeInterval; // 0x0c(0x04)
	float MaxLookRotationSpeed; // 0x10(0x04)
	float MinimumLookDuration; // 0x14(0x04)
	float MaxNavClearanceTestDist; // 0x18(0x04)
	float MaxSightClearanceTestDist; // 0x1c(0x04)
	float SightTraceZOffset; // 0x20(0x04)
	int32_t MaxDistanceIntervalsCount; // 0x24(0x04)
};

// ScriptStruct OPP.VoiceChatPlayerAudioEventNames
// Size: 0x90 (Inherited: 0x00)
struct FVoiceChatPlayerAudioEventNames {
	struct FString StartTalking3DEventName; // 0x00(0x10)
	struct FString StopTalking3DEventName; // 0x10(0x10)
	struct FString StartTalking2DEventName; // 0x20(0x10)
	struct FString StopTalking2DEventName; // 0x30(0x10)
	struct FString StartWatchEventName; // 0x40(0x10)
	struct FString StopWatchEventName; // 0x50(0x10)
	struct FString WatchActivationRTPCName; // 0x60(0x10)
	struct FString WatchDistanceRTPCName; // 0x70(0x10)
	struct FString VolumeRTPCName; // 0x80(0x10)
};

// ScriptStruct OPP.FootStepSurfaceModiferData
// Size: 0x18 (Inherited: 0x00)
struct FFootStepSurfaceModiferData {
	enum class EFootStepModifierType FootstepModifierType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName ModifierName; // 0x04(0x08)
	float AINoiseLoudness; // 0x0c(0x04)
	int32_t StepLingeringCount; // 0x10(0x04)
	struct FColor DebugColor; // 0x14(0x04)
};

// ScriptStruct OPP.FootStepSurfaceData
// Size: 0x10 (Inherited: 0x00)
struct FFootStepSurfaceData {
	struct FName SurfaceName; // 0x00(0x08)
	float AINoiseLoudness; // 0x08(0x04)
	struct FColor DebugColor; // 0x0c(0x04)
};

// ScriptStruct OPP.DevDecalData
// Size: 0x38 (Inherited: 0x00)
struct FDevDecalData {
	struct TSoftObjectPtr<UMaterialInstance> Material; // 0x00(0x28)
	struct FVector2D DefaultDecalSize; // 0x28(0x08)
	float DefaultDecalDepth; // 0x30(0x04)
	float DefaultRotation; // 0x34(0x04)
};

// ScriptStruct OPP.HelpUpCameraLimit
// Size: 0x1c (Inherited: 0x00)
struct FHelpUpCameraLimit {
	float MinPitchStart; // 0x00(0x04)
	float MinPitchEnd; // 0x04(0x04)
	float MaxPitch; // 0x08(0x04)
	float MinYawStart; // 0x0c(0x04)
	float MaxYawStart; // 0x10(0x04)
	float MinYawEnd; // 0x14(0x04)
	float MaxYawEnd; // 0x18(0x04)
};

// ScriptStruct OPP.DifficultyConfig
// Size: 0xe0 (Inherited: 0x00)
struct FDifficultyConfig {
	struct FText DisplayName; // 0x00(0x18)
	struct FText DisplayNameCAPS; // 0x18(0x18)
	struct FText Description; // 0x30(0x18)
	enum class EGameDifficulty Difficulty; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FSlateBrush Icon; // 0x50(0x88)
	int32_t RecommendedPlayerLevel; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// ScriptStruct OPP.UnalterableBinding
// Size: 0x08 (Inherited: 0x00)
struct FUnalterableBinding {
	struct FName ActionName; // 0x00(0x08)
};

// ScriptStruct OPP.PuzzleRoomRewardConfig
// Size: 0xd8 (Inherited: 0x00)
struct FPuzzleRoomRewardConfig {
	enum class EItemType ItemType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FConfigurableInt Number; // 0x08(0xc8)
	bool b5Stars; // 0xd0(0x01)
	bool b4Stars; // 0xd1(0x01)
	bool b3Stars; // 0xd2(0x01)
	bool b2Stars; // 0xd3(0x01)
	bool b1Stars; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
};

// ScriptStruct OPP.IngameItemConfig
// Size: 0x20 (Inherited: 0x00)
struct FIngameItemConfig {
	enum class EItemType ItemType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FSoftClassPath ItemClassPath; // 0x08(0x18)
};

// ScriptStruct OPP.PawnSpeedSettings
// Size: 0x30 (Inherited: 0x00)
struct FPawnSpeedSettings {
	float NormalWalkSpeed; // 0x00(0x04)
	float NormalRunSpeed; // 0x04(0x04)
	float SprintSpeed; // 0x08(0x04)
	float CrouchedSpeed; // 0x0c(0x04)
	float KnockedDownSpeed; // 0x10(0x04)
	float LargePickupWalkSpeed; // 0x14(0x04)
	float LargePickupRunSpeed; // 0x18(0x04)
	float LargePickupSprintSpeed; // 0x1c(0x04)
	float LargePickupCrouchSpeed; // 0x20(0x04)
	float WaterMaxSlowDownRatio; // 0x24(0x04)
	float WaterDepthMinSlowDownStart; // 0x28(0x04)
	float WaterDepthMaxSlowDownStart; // 0x2c(0x04)
};

// ScriptStruct OPP.CurencySettings
// Size: 0x30 (Inherited: 0x00)
struct FCurencySettings {
	struct FText Name; // 0x00(0x18)
	struct UTexture2D* Icon; // 0x18(0x08)
	struct FLinearColor Tint; // 0x20(0x10)
};

// ScriptStruct OPP.ShimmerDisplaySettings
// Size: 0x34 (Inherited: 0x00)
struct FShimmerDisplaySettings {
	float MinViewAngle; // 0x00(0x04)
	float MaxViewAngle; // 0x04(0x04)
	float CutOffDistance2D; // 0x08(0x04)
	float CutOffStartDistance2D; // 0x0c(0x04)
	float MinDistance2D; // 0x10(0x04)
	float MaxDistance2D; // 0x14(0x04)
	float DownMinDistanceZ; // 0x18(0x04)
	float DownMaxDistanceZ; // 0x1c(0x04)
	float UpMinDistanceZ; // 0x20(0x04)
	float UpMaxDistanceZ; // 0x24(0x04)
	float AlphaApproachCoef; // 0x28(0x04)
	float NotInFocusMultiplier; // 0x2c(0x04)
	float CannotInteractMultiplier; // 0x30(0x04)
};

// ScriptStruct OPP.DestructiblesSettings
// Size: 0x120 (Inherited: 0x00)
struct FDestructiblesSettings {
	struct FDestructibleMaterialSettings WoodMaterialSettings; // 0x00(0x48)
	struct FDestructibleMaterialSettings WoodenDoorMaterialSettings; // 0x48(0x48)
	struct FDestructibleMaterialSettings ConcreteMaterialSettings; // 0x90(0x48)
	struct FDestructibleMaterialSettings MannequinMaterialSettings; // 0xd8(0x48)
};

// ScriptStruct OPP.DestructibleMaterialSettings
// Size: 0x48 (Inherited: 0x00)
struct FDestructibleMaterialSettings {
	struct FDestructibleMaterialDataSettings PunchSettings; // 0x00(0x0c)
	struct FDestructibleMaterialDataSettings KickSettings; // 0x0c(0x0c)
	struct FDestructibleMaterialDataSettings SlashSettings; // 0x18(0x0c)
	struct FDestructibleMaterialDataSettings ChopSettings; // 0x24(0x0c)
	struct FDestructibleMaterialDataSettings LightBluntSettings; // 0x30(0x0c)
	struct FDestructibleMaterialDataSettings HeavyBluntSettings; // 0x3c(0x0c)
};

// ScriptStruct OPP.DestructibleMaterialDataSettings
// Size: 0x0c (Inherited: 0x00)
struct FDestructibleMaterialDataSettings {
	int32_t NumberOfWeakHitForDestruction; // 0x00(0x04)
	int32_t NumberOfStrongHitForDestruction; // 0x04(0x04)
	int32_t MultiHitCount; // 0x08(0x04)
};

// ScriptStruct OPP.TalkWheelTexts
// Size: 0x288 (Inherited: 0x00)
struct FTalkWheelTexts {
	struct TArray<struct FText> Help; // 0x00(0x10)
	struct TArray<struct FText> Acknowledge; // 0x10(0x10)
	struct TArray<struct FText> Regroup; // 0x20(0x10)
	struct TArray<struct FText> Wait; // 0x30(0x10)
	struct TArray<struct FText> Danger; // 0x40(0x10)
	struct TArray<struct FText> Thanks; // 0x50(0x10)
	struct TArray<struct FText> OnMyWay; // 0x60(0x10)
	struct TArray<struct FText> Hello; // 0x70(0x10)
	struct TArray<struct FText> Trade; // 0x80(0x10)
	struct TArray<struct FText> Drop; // 0x90(0x10)
	struct FTalkWheelStatusTexts status; // 0xa0(0x40)
	struct FTalkWheelPingTexts Ping; // 0xe0(0x150)
	struct FTalkWheelActiveSkillTexts ActiveSkill; // 0x230(0x40)
	struct FText Throttled; // 0x270(0x18)
};

// ScriptStruct OPP.TalkWheelActiveSkillTexts
// Size: 0x40 (Inherited: 0x00)
struct FTalkWheelActiveSkillTexts {
	struct TArray<struct FText> NoneEquipped; // 0x00(0x10)
	struct TArray<struct FText> Empty; // 0x10(0x10)
	struct TArray<struct FText> cooldown; // 0x20(0x10)
	struct TArray<struct FText> Ready; // 0x30(0x10)
};

// ScriptStruct OPP.TalkWheelPingTexts
// Size: 0x150 (Inherited: 0x00)
struct FTalkWheelPingTexts {
	struct TArray<struct FText> Currency; // 0x00(0x10)
	struct TArray<struct FText> Item; // 0x10(0x10)
	struct TArray<struct FText> Enemy; // 0x20(0x10)
	struct TArray<struct FText> ElectricFloorTrap; // 0x30(0x10)
	struct TArray<struct FText> ExplosiveTrap; // 0x40(0x10)
	struct TArray<struct FText> HangingSoundTrap; // 0x50(0x10)
	struct TArray<struct FText> GlassFloorTrap; // 0x60(0x10)
	struct TArray<struct FText> PsychosisMine; // 0x70(0x10)
	struct TArray<struct FText> ChemMine; // 0x80(0x10)
	struct TArray<struct FText> PointOfInterest; // 0x90(0x10)
	struct TArray<struct FText> CoopMove; // 0xa0(0x10)
	struct TArray<struct FText> door; // 0xb0(0x10)
	struct TArray<struct FText> breakableObstacle; // 0xc0(0x10)
	struct TArray<struct FText> BreakableWindow; // 0xd0(0x10)
	struct TArray<struct FText> LockedDoor; // 0xe0(0x10)
	struct TArray<struct FText> TrappedDoor; // 0xf0(0x10)
	struct TArray<struct FText> hidespot; // 0x100(0x10)
	struct TArray<struct FText> LockedContainer; // 0x110(0x10)
	struct TArray<struct FText> Container; // 0x120(0x10)
	struct TArray<struct FText> objective; // 0x130(0x10)
	struct TArray<struct FText> Fallback; // 0x140(0x10)
};

// ScriptStruct OPP.TalkWheelStatusTexts
// Size: 0x40 (Inherited: 0x00)
struct FTalkWheelStatusTexts {
	struct TArray<struct FText> Crawling; // 0x00(0x10)
	struct TArray<struct FText> Chase; // 0x10(0x10)
	struct TArray<struct FText> Danger; // 0x20(0x10)
	struct TArray<struct FText> CoopMove; // 0x30(0x10)
};

// ScriptStruct OPP.PresenceTexts
// Size: 0x120 (Inherited: 0x00)
struct FPresenceTexts {
	struct FText OtherGame; // 0x00(0x18)
	struct FText Unknown; // 0x18(0x18)
	struct FText InMainMenu; // 0x30(0x18)
	struct FText InTutorial; // 0x48(0x18)
	struct FText InLobby; // 0x60(0x18)
	struct FText PreparingExperiment; // 0x78(0x18)
	struct FText InExperiment; // 0x90(0x18)
	struct FText InUnknownExperiment; // 0xa8(0x18)
	struct FText ReturningToLobby; // 0xc0(0x18)
	struct FText FindingParty; // 0xd8(0x18)
	struct FText InSameLobby; // 0xf0(0x18)
	struct FText InSameExperiment; // 0x108(0x18)
};

// ScriptStruct OPP.OnlineErrorTexts
// Size: 0xa18 (Inherited: 0x00)
struct FOnlineErrorTexts {
	struct FText InitialConnectionFlowFailed; // 0x00(0x18)
	struct FText FailedToJoinParty; // 0x18(0x18)
	struct FText FailedToJoinLobby; // 0x30(0x18)
	struct FText FailedToMigrateToNewLobby; // 0x48(0x18)
	struct FText FailedGameSessionMigration; // 0x60(0x18)
	struct FText FailedToFindTutorialServer; // 0x78(0x18)
	struct FText FailedToSearchGameSessions; // 0x90(0x18)
	struct FText FailedToJoinGameSession; // 0xa8(0x18)
	struct FText MatchCanceledDueToError; // 0xc0(0x18)
	struct FText FindPartyCanceledDueToError; // 0xd8(0x18)
	struct FText FailedToCreateLobbyMatchmakingTicket; // 0xf0(0x18)
	struct FText MatchmakingFailed; // 0x108(0x18)
	struct FText FailedToRequestContacts; // 0x120(0x18)
	struct FText FailedToRequestFriendCode; // 0x138(0x18)
	struct FText FailedToRequestPartyInformation; // 0x150(0x18)
	struct FText FailedToUpdatePartyInformation; // 0x168(0x18)
	struct FText FailedToRequestContactProfile; // 0x180(0x18)
	struct FText FailedToPerformRequestedContactAction; // 0x198(0x18)
	struct FText FailedToSendFriendRequest; // 0x1b0(0x18)
	struct FText KickedFromServer; // 0x1c8(0x18)
	struct FText FailedToGetPlayerData; // 0x1e0(0x18)
	struct FText MissingPlayPrivilege; // 0x1f8(0x18)
	struct FText FailedToPurchaseUpgrade; // 0x210(0x18)
	struct FText FailedToUpdatePlayerProgressionData; // 0x228(0x18)
	struct FText FailedToUpdatePlayerStatsData; // 0x240(0x18)
	struct FText FailedToUpdateTasks; // 0x258(0x18)
	struct FText FailedToRequestProducts; // 0x270(0x18)
	struct FText FailedToPurchaseProduct; // 0x288(0x18)
	struct FText PersistentConnectionLost; // 0x2a0(0x18)
	struct FText DefaultErrorText; // 0x2b8(0x18)
	struct FText InitialServerConnectionTimeOutText; // 0x2d0(0x18)
	struct FText ServerConnectionTimeOutText; // 0x2e8(0x18)
	struct FText ServerConnectionLostText; // 0x300(0x18)
	struct FText ServerConnectionFailedGameSessionFullText; // 0x318(0x18)
	struct FText ServerConnectionFailedSoloGameSessionFullText; // 0x330(0x18)
	struct FText ServerConnectionFailedPlayerSessionRefusedText; // 0x348(0x18)
	struct FText ServerConnectionFailedPlayerSessionNotFoundText; // 0x360(0x18)
	struct FText ServerConnectionFailedGameEndingText; // 0x378(0x18)
	struct FText IdleKickedErrorText; // 0x390(0x18)
	struct FText ViewLocationErrorKickedText; // 0x3a8(0x18)
	struct FText PlayerReportReasonsText[0x6]; // 0x3c0(0x90)
	struct FText PrivilegeValidationError_Until; // 0x450(0x18)
	struct FText PrivilegeValidationError_Play_TermsOfServiceViolation; // 0x468(0x18)
	struct FText PrivilegeValidationError_Play_Unknown; // 0x480(0x18)
	struct FText PrivilegeValidationError_VoiceChat_TermsOfServiceViolation; // 0x498(0x18)
	struct FText PrivilegeValidationError_VoiceChat_Unknown; // 0x4b0(0x18)
	struct TMap<enum class EMatchmakingErrorCodes, struct FText> MatchmakingErrorCodeTextMapping; // 0x4c8(0x50)
	struct TMap<enum class EPlayerProgressionErrorCodes, struct FText> PlayerProgressionErrorCodeTextMapping; // 0x518(0x50)
	struct TMap<enum class EStoreErrorCodes, struct FText> StoreErrorCodeTextMapping; // 0x568(0x50)
	struct TMap<enum class EPartyErrorCodes, struct FText> PartyErrorCodeTextMapping; // 0x5b8(0x50)
	struct TMap<enum class EOnlineCoreErrorCode, struct FText> CoreErrorCodeTextMapping; // 0x608(0x50)
	struct TMap<enum class EPlatformErrorCodes, struct FText> CorePlatformErrorCodeTextMapping; // 0x658(0x50)
	struct TMap<enum class EConfigurationErrorCodes, struct FText> CoreConfigurationErrorCodeTextMapping; // 0x6a8(0x50)
	struct TMap<enum class EAuthErrorCodes, struct FText> CoreAuthErrorCodeTextMapping; // 0x6f8(0x50)
	struct TMap<enum class EEntityErrorCodes, struct FText> CoreEntityErrorCodeTextMapping; // 0x748(0x50)
	struct TMap<enum class ECoreMatchmakingErrorCodes, struct FText> CoreMatchmakingErrorCodeTextMapping; // 0x798(0x50)
	struct TMap<enum class EGameServerErrorCodes, struct FText> CoreGameServerErrorCodeTextMapping; // 0x7e8(0x50)
	struct TMap<enum class ECoreAnalyticsErrorCodes, struct FText> CoreAnalyticsErrorCodeTextMapping; // 0x838(0x50)
	struct TMap<enum class EInventoryErrorCodes, struct FText> CoreInventoryErrorCodeTextMapping; // 0x888(0x50)
	struct TMap<enum class ERTAErrorCodes, struct FText> CoreRTAErrorCodeTextMapping; // 0x8d8(0x50)
	struct TMap<enum class ERelationshipErrorCodes, struct FText> CoreRelationshipErrorCodeTextMapping; // 0x928(0x50)
	struct TMap<enum class ECorePartyErrorCodes, struct FText> CorePartyErrorCodeTextMapping; // 0x978(0x50)
	struct TMap<enum class ECorePresenceErrorCodes, struct FText> CorePresenceErrorCodeTextMapping; // 0x9c8(0x50)
};

// ScriptStruct OPP.RBSocialMenuEntryDetails
// Size: 0x58 (Inherited: 0x00)
struct FRBSocialMenuEntryDetails {
	char pad_0[0x58]; // 0x00(0x58)
};

// ScriptStruct OPP.LoopingSoundInfo
// Size: 0x18 (Inherited: 0x00)
struct FLoopingSoundInfo {
	struct UAkAudioEvent* StartEvent; // 0x00(0x08)
	struct UAkAudioEvent* StopEvent; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct OPP.EmitterDebugInfo
// Size: 0x68 (Inherited: 0x00)
struct FEmitterDebugInfo {
	struct UAkAuxBus* ReverbA; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct UAkAuxBus* ReverbB; // 0x10(0x08)
	char pad_18[0x50]; // 0x18(0x50)
};

// ScriptStruct OPP.VirtualizationNode
// Size: 0x18 (Inherited: 0x00)
struct FVirtualizationNode {
	struct URBSoundConnectorComponent* Connector; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct OPP.AuxBusInfo
// Size: 0x10 (Inherited: 0x00)
struct FAuxBusInfo {
	struct UAkAuxBus* Bus; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct OPP.SoundVolumeData
// Size: 0x20 (Inherited: 0x00)
struct FSoundVolumeData {
	struct ARBSoundVolume* SoundVolume; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct OPP.RoomPathingSearchResults
// Size: 0x20 (Inherited: 0x00)
struct FRoomPathingSearchResults {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct URBRoomConnectorComponent*> Connectors; // 0x08(0x10)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct OPP.RoomPathingSearchParams
// Size: 0x24 (Inherited: 0x00)
struct FRoomPathingSearchParams {
	char pad_0[0x24]; // 0x00(0x24)
};

// ScriptStruct OPP.RoomPathingSearchNode
// Size: 0x28 (Inherited: 0x00)
struct FRoomPathingSearchNode {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct OPP.RoomPathingNode
// Size: 0x30 (Inherited: 0x00)
struct FRoomPathingNode {
	struct URBRoomConnectorComponent* Connector; // 0x00(0x08)
	char pad_8[0x28]; // 0x08(0x28)
};

// ScriptStruct OPP.RoomPathingConnection
// Size: 0x10 (Inherited: 0x00)
struct FRoomPathingConnection {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct OPP.FindPathParameter
// Size: 0x20 (Inherited: 0x00)
struct FFindPathParameter {
	bool bAllowedCoopRoom; // 0x00(0x01)
	bool bAllowedClosedConnection; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float MaxPathDistance; // 0x04(0x04)
	bool bAllowFloorChange; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct ARBRoomGroup*> RestrictedSections; // 0x10(0x10)
};

// ScriptStruct OPP.RBTaggedVisionActorServerData
// Size: 0x10 (Inherited: 0x00)
struct FRBTaggedVisionActorServerData {
	struct AActor* Actor; // 0x00(0x08)
	float ActiveUntilServerTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct OPP.TrackingFootstepInfo
// Size: 0x20 (Inherited: 0x00)
struct FTrackingFootstepInfo {
	char pad_0[0x18]; // 0x00(0x18)
	struct UDecalComponent* DecalComponent; // 0x18(0x08)
};

// ScriptStruct OPP.RBTaggedVisionActorClientData
// Size: 0x48 (Inherited: 0x00)
struct FRBTaggedVisionActorClientData {
	struct AActor* Actor; // 0x00(0x08)
	struct USceneComponent* MainMesh; // 0x08(0x08)
	struct TArray<struct UMeshComponent*> AllActorMeshes; // 0x10(0x10)
	struct TArray<struct UMeshComponent*> OverridenActorMeshes; // 0x20(0x10)
	char pad_30[0x18]; // 0x30(0x18)
};

// ScriptStruct OPP.SplinePositionDescriptor
// Size: 0x10 (Inherited: 0x00)
struct FSplinePositionDescriptor {
	struct ARBSplineActor* SegmentStartMarker; // 0x00(0x08)
	float SegmentRatio; // 0x08(0x04)
	float OutsideOffset; // 0x0c(0x04)
};

// ScriptStruct OPP.RBObjectiveID
// Size: 0x38 (Inherited: 0x00)
struct FRBObjectiveID {
	struct FName ObjectivelID; // 0x00(0x08)
	struct FRBObjectiveGroupID GroupID; // 0x08(0x30)
};

// ScriptStruct OPP.RBObjectiveGroupID
// Size: 0x30 (Inherited: 0x00)
struct FRBObjectiveGroupID {
	struct FName GroupID; // 0x00(0x08)
	struct FRBMissionID MissionID; // 0x08(0x28)
};

// ScriptStruct OPP.StalkerTargetInfo
// Size: 0x20 (Inherited: 0x00)
struct FStalkerTargetInfo {
	struct ARBNPC* NPC; // 0x00(0x08)
	struct TArray<struct FStalkingPlayerInfo> StalkingPlayers; // 0x08(0x10)
	float CompletionMeter; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct OPP.StalkingPlayerInfo
// Size: 0x10 (Inherited: 0x00)
struct FStalkingPlayerInfo {
	struct ARBPlayer* Player; // 0x00(0x08)
	float LastStalkingTimestamp; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct OPP.StalkerTargetTypeSettings
// Size: 0x268 (Inherited: 0x00)
struct FStalkerTargetTypeSettings {
	struct ARBNPC* PawnClass; // 0x00(0x08)
	struct URBAIConfig* configAsset; // 0x08(0x08)
	struct FConfigurableFloat FillRate; // 0x10(0xc8)
	struct FConfigurableFloat MinStalkingDistance; // 0xd8(0xc8)
	struct FConfigurableInt MinNumberToSpawn; // 0x1a0(0xc8)
};

// ScriptStruct OPP.StatsRuntimeData
// Size: 0x200 (Inherited: 0x00)
struct FStatsRuntimeData {
	struct ARBPlayerState* RBPlayerState; // 0x00(0x08)
	struct FProfileId ProfileId; // 0x08(0x10)
	struct URBPlayerStatsConfig* RBPlayerStatsConfig; // 0x18(0x08)
	struct TMap<enum class EPlayerStat, float> CurrentMainObjectiveStats; // 0x20(0x50)
	struct TMap<enum class EPlayerStat, float> StageStats; // 0x70(0x50)
	char pad_C0[0xa0]; // 0xc0(0xa0)
	float NVStartTime; // 0x160(0x04)
	float HidespotStartTime; // 0x164(0x04)
	float LastIncapacitatedTime; // 0x168(0x04)
	float LastKilledTime; // 0x16c(0x04)
	float LastElectricFloorTrapDamageTime; // 0x170(0x04)
	float PsychosisStartTime; // 0x174(0x04)
	struct FPlayerStatsChaseDetails ChaseDetails; // 0x178(0x70)
	char pad_1E8[0x18]; // 0x1e8(0x18)
};

// ScriptStruct OPP.PlayerStatsChaseDetails
// Size: 0x70 (Inherited: 0x00)
struct FPlayerStatsChaseDetails {
	bool bActive; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float StartTime; // 0x04(0x04)
	float LastChaseStopTime; // 0x08(0x04)
	int32_t ActiveNPCs; // 0x0c(0x04)
	int32_t TotalNPCs; // 0x10(0x04)
	char pad_14[0x54]; // 0x14(0x54)
	bool bTookDamage; // 0x68(0x01)
	bool bIncapacitated; // 0x69(0x01)
	bool bUsedHidingSpot; // 0x6a(0x01)
	char pad_6B[0x5]; // 0x6b(0x05)
};

// ScriptStruct OPP.StreamingCommand
// Size: 0x18 (Inherited: 0x00)
struct FStreamingCommand {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct OPP.LevelStreamingInfo
// Size: 0x98 (Inherited: 0x00)
struct FLevelStreamingInfo {
	struct FTargetStreamingState TargetStreamingState; // 0x00(0x50)
	bool bWasStreamingStable; // 0x50(0x01)
	bool bWasStreamingReadyToCommit; // 0x51(0x01)
	bool bWasStreamingTargetStateReached; // 0x52(0x01)
	bool bWasWorldPopulatingDone; // 0x53(0x01)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString PersistentName; // 0x58(0x10)
	struct TArray<struct FSubLevelStreamingStatus> StreamingStatus; // 0x68(0x10)
	float CPUTimePct; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	uint64_t UsedPhysicalMemory; // 0x80(0x08)
	uint64_t PeakUsedPhysicalMemory; // 0x88(0x08)
	float FrameTime; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct OPP.SubLevelStreamingStatus
// Size: 0x20 (Inherited: 0x00)
struct FSubLevelStreamingStatus {
	struct FString LevelName; // 0x00(0x10)
	char StreamingStatus; // 0x10(0x01)
	char CurrentState; // 0x11(0x01)
	char TargetState; // 0x12(0x01)
	bool bFakePersistent; // 0x13(0x01)
	bool bForceUnloaded; // 0x14(0x01)
	char LoadPercentage; // 0x15(0x01)
	char ReattachPercentage; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
	float LoadTime; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct OPP.TargetStreamingState
// Size: 0x50 (Inherited: 0x00)
struct FTargetStreamingState {
	struct TArray<struct FName> PreloadingLevelNames; // 0x00(0x10)
	struct TArray<struct FName> ForcedLevelNames; // 0x10(0x10)
	struct TArray<struct FName> CommittedLevelNames; // 0x20(0x10)
	bool bWaitingForCommit; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	bool bWaitingForMapTransition; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	bool bWaitingForWorldPopulate; // 0x40(0x01)
	char pad_41[0xb]; // 0x41(0x0b)
	bool bServerPopulated; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// ScriptStruct OPP.SwitchMatchPuzzleData
// Size: 0xb0 (Inherited: 0x00)
struct FSwitchMatchPuzzleData {
	struct FName Name; // 0x00(0x08)
	struct FConfigurableBool bAvailabilityPerDifficulty; // 0x08(0x60)
	struct TArray<struct FSwitchMatchLinkData> Links; // 0x68(0x10)
	struct TArray<int32_t> RemovedSwitches; // 0x78(0x10)
	struct TArray<int32_t> LockedSwitches; // 0x88(0x10)
	struct TArray<int32_t> InteractionOrder; // 0x98(0x10)
	int32_t MaxNumberOfInteraction; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct OPP.SwitchMatchLinkData
// Size: 0x08 (Inherited: 0x00)
struct FSwitchMatchLinkData {
	int32_t LinkerIndex; // 0x00(0x04)
	int32_t LinkedIndex; // 0x04(0x04)
};

// ScriptStruct OPP.RBTaskDataDisplayCondition
// Size: 0x18 (Inherited: 0x00)
struct FRBTaskDataDisplayCondition {
	int32_t RequiredLevel; // 0x00(0x04)
	int32_t MaxLevel; // 0x04(0x04)
	struct TArray<enum class EActiveSkillType> RequiredAcquiredActiveSkillTypes; // 0x08(0x10)
};

// ScriptStruct OPP.PlayerTasks
// Size: 0x28 (Inherited: 0x00)
struct FPlayerTasks {
	struct TArray<struct ARBTask*> ActiveTasks; // 0x00(0x10)
	struct TArray<int64_t> CompletedTasks; // 0x10(0x10)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct OPP.RBTextChatMessage
// Size: 0x40 (Inherited: 0x00)
struct FRBTextChatMessage {
	struct FString PlayerName; // 0x00(0x10)
	struct ARBPlayerState* Source; // 0x10(0x08)
	enum class ERBTextChatType TextChatType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FText Message; // 0x20(0x18)
	int32_t MessageId; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct OPP.RBThrowableWeaponSaveData
// Size: 0x08 (Inherited: 0x01)
struct FRBThrowableWeaponSaveData : FRBPickupSaveData {
	char pad_1[0x7]; // 0x01(0x07)
};

// ScriptStruct OPP.TortureRoomLinkedPanelInfo
// Size: 0x10 (Inherited: 0x00)
struct FTortureRoomLinkedPanelInfo {
	struct URBTorturePanelComponent* panel; // 0x00(0x08)
	float CurrentMeter; // 0x08(0x04)
	bool bCompleted; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct OPP.RBTrapScenarioSetup
// Size: 0x28 (Inherited: 0x00)
struct FRBTrapScenarioSetup {
	struct FName ScenarioName; // 0x00(0x08)
	bool bDisabled; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<enum class ETrapScenarioState> TrapsStates; // 0x10(0x10)
	bool bTestInGame; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct OPP.RBTrialInfoRow
// Size: 0xd0 (Inherited: 0x08)
struct FRBTrialInfoRow : FTableRowBase {
	struct FName ProgramId; // 0x08(0x08)
	struct FName ID; // 0x10(0x08)
	int32_t Order; // 0x18(0x04)
	bool bMajor; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FText DisplayName; // 0x20(0x18)
	struct FText Description; // 0x38(0x18)
	struct UTexture2D* Background; // 0x50(0x08)
	struct UTexture2D* Banner; // 0x58(0x08)
	enum class EGameDifficulty Difficulty; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FName StageID; // 0x64(0x08)
	struct FName MissionID; // 0x6c(0x08)
	int32_t MinPlayerCount; // 0x74(0x04)
	struct FName FirstCompletionRewardDataId; // 0x78(0x08)
	struct TArray<struct FRBScoreRewardMappingEntry> RepeatableRewards; // 0x80(0x10)
	struct FName PerfectScoreExtraRewardDataId; // 0x90(0x08)
	struct TArray<struct FName> VariatorIds; // 0x98(0x10)
	bool bDisplayVariators; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct TArray<struct FName> UnlockedByTrialIds; // 0xb0(0x10)
	struct FName DocumentsGroupId; // 0xc0(0x08)
	bool bResetOnRelease; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// ScriptStruct OPP.RBScoreRewardMappingEntry
// Size: 0x0c (Inherited: 0x00)
struct FRBScoreRewardMappingEntry {
	enum class EPlayerTrialRating RequiredScore; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName RewardDataId; // 0x04(0x08)
};

// ScriptStruct OPP.RBTrialSectionConfigData
// Size: 0x2ac8 (Inherited: 0x00)
struct FRBTrialSectionConfigData {
	struct FMazeSectionConfigData MazeData; // 0x00(0x1618)
	struct FHidespotSectionConfigData HidespotData; // 0x1618(0xd0)
	struct FTrapSectionConfigData TrapData; // 0x16e8(0x13e0)
};

// ScriptStruct OPP.TrapSectionConfigData
// Size: 0x13e0 (Inherited: 0x00)
struct FTrapSectionConfigData {
	struct FTrapSpacingData TrapSpacingData; // 0x00(0x410)
	char bOverride_TrapSpacingData : 1; // 0x410(0x01)
	char pad_410_1 : 7; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct FRandomSettings TrapGroupCount; // 0x418(0x320)
	char bOverride_TrapGroupCount : 1; // 0x738(0x01)
	char pad_738_1 : 7; // 0x738(0x01)
	char pad_739[0x7]; // 0x739(0x07)
	struct FRandomSettings SoundTrapCount; // 0x740(0x320)
	char bOverride_SoundTrapCount : 1; // 0xa60(0x01)
	char pad_A60_1 : 7; // 0xa60(0x01)
	char pad_A61[0x7]; // 0xa61(0x07)
	struct FRandomSettings ExplosiveTrapCount; // 0xa68(0x320)
	char bOverride_ExplosiveTrapCount : 1; // 0xd88(0x01)
	char pad_D88_1 : 7; // 0xd88(0x01)
	char pad_D89[0x7]; // 0xd89(0x07)
	struct FRandomSettings ElectricFloorTrapCount; // 0xd90(0x320)
	char bOverride_ElectricFloorTrapCount : 1; // 0x10b0(0x01)
	char pad_10B0_1 : 7; // 0x10b0(0x01)
	char pad_10B1[0x7]; // 0x10b1(0x07)
	struct FRandomSettings PsychosisMineTrapCount; // 0x10b8(0x320)
	char bOverride_PsychosisMineTrapCount : 1; // 0x13d8(0x01)
	char pad_13D8_1 : 7; // 0x13d8(0x01)
	char pad_13D9[0x7]; // 0x13d9(0x07)
};

// ScriptStruct OPP.TrapSpacingData
// Size: 0x410 (Inherited: 0x00)
struct FTrapSpacingData {
	struct FConfigurableFloat TrapSpacingDistance; // 0x00(0xc8)
	char bOverride_TrapSpacingDistance : 1; // 0xc8(0x01)
	char pad_C8_1 : 7; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FConfigurableFloat SoundTrapToSoundTrapSpacingDistance; // 0xd0(0xc8)
	char bOverride_SoundTrapToSoundTrapSpacingDistance : 1; // 0x198(0x01)
	char pad_198_1 : 7; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	struct FConfigurableFloat ExplosiveTrapToExplosiveTrapSpacingDistance; // 0x1a0(0xc8)
	char bOverride_ExplosiveTrapToExplosiveTrapSpacingDistance : 1; // 0x268(0x01)
	char pad_268_1 : 7; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct FConfigurableFloat ElectricFloorTrapToElectricFloorTrapSpacingDistance; // 0x270(0xc8)
	char bOverride_ElectricFloorTrapToElectricFloorTrapSpacingDistance : 1; // 0x338(0x01)
	char pad_338_1 : 7; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
	struct FConfigurableFloat PsychosisMineTrapCountToPsychosisMineTrapCountSpacingDistance; // 0x340(0xc8)
	char bOverride_PsychosisMineTrapCountToPsychosisMineTrapCountSpacingDistance : 1; // 0x408(0x01)
	char pad_408_1 : 7; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
};

// ScriptStruct OPP.HidespotSectionConfigData
// Size: 0xd0 (Inherited: 0x00)
struct FHidespotSectionConfigData {
	struct FConfigurableFloat HidespotRandomization_DisabledRatio; // 0x00(0xc8)
	char bOverride_HidespotRandomization_DisabledRatio : 1; // 0xc8(0x01)
	char pad_C8_1 : 7; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// ScriptStruct OPP.MazeSectionConfigData
// Size: 0x1618 (Inherited: 0x00)
struct FMazeSectionConfigData {
	struct FRandomSettings RollingGateRandomizationBlockedCount; // 0x00(0x320)
	char bOverride_RollingGateRandomizationBlockedCount : 1; // 0x320(0x01)
	char pad_320_1 : 7; // 0x320(0x01)
	char pad_321[0x7]; // 0x321(0x07)
	struct FRandomSettings DoorRandomizationBlockedCount; // 0x328(0x320)
	char bOverride_DoorRandomizationBlockedCount : 1; // 0x648(0x01)
	char pad_648_1 : 7; // 0x648(0x01)
	char pad_649[0x7]; // 0x649(0x07)
	struct FRandomSettings BlockableRandomizationBlockedCount; // 0x650(0x320)
	char bOverride_BlockableRandomizationBlockedCount : 1; // 0x970(0x01)
	char pad_970_1 : 7; // 0x970(0x01)
	char pad_971[0x7]; // 0x971(0x07)
	struct FRandomSettings DoorRandomizationReplacedCount; // 0x978(0x320)
	char bOverride_DoorRandomizationReplacedCount : 1; // 0xc98(0x01)
	char pad_C98_1 : 7; // 0xc98(0x01)
	char pad_C99[0x7]; // 0xc99(0x07)
	struct FRandomSettings DoorRandomizationTrappedCount; // 0xca0(0x320)
	char bOverride_DoorRandomizationTrappedCount : 1; // 0xfc0(0x01)
	char pad_FC0_1 : 7; // 0xfc0(0x01)
	char pad_FC1[0x7]; // 0xfc1(0x07)
	struct FRandomSettings DoorRandomizationLockedCount; // 0xfc8(0x320)
	char bOverride_DoorRandomizationLockedCount : 1; // 0x12e8(0x01)
	char pad_12E8_1 : 7; // 0x12e8(0x01)
	char pad_12E9[0x7]; // 0x12e9(0x07)
	struct FRandomSettings DoorRandomizationOpenCount; // 0x12f0(0x320)
	char bOverride_DoorRandomizationOpenCount : 1; // 0x1610(0x01)
	char pad_1610_1 : 7; // 0x1610(0x01)
	char pad_1611[0x7]; // 0x1611(0x07)
};

// ScriptStruct OPP.TriggerableSettingGroup
// Size: 0x10 (Inherited: 0x00)
struct FTriggerableSettingGroup {
	struct TArray<struct FTriggerableSetting> TriggerableSettingGroup; // 0x00(0x10)
};

// ScriptStruct OPP.TriggerableSetting
// Size: 0x88 (Inherited: 0x00)
struct FTriggerableSetting {
	struct ARBOperatable* operatable; // 0x00(0x08)
	struct TSoftObjectPtr<AActor> RBOperatable; // 0x08(0x28)
	struct FRBComponentSelector LinkedOperatable; // 0x30(0x40)
	float TriggerActivationRatio; // 0x70(0x04)
	enum class EOverrideOperatorAction OverrideOperationAction; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	struct FName OrGroup; // 0x78(0x08)
	char pad_80[0x8]; // 0x80(0x08)
};

// ScriptStruct OPP.TutorialRuntimeData
// Size: 0x20 (Inherited: 0x00)
struct FTutorialRuntimeData {
	struct FName TutorialId; // 0x00(0x08)
	struct TArray<struct FTutorialTextData> TutorialTextSequence; // 0x08(0x10)
	enum class ETutorialType TutorialType; // 0x18(0x01)
	enum class EMessagePriority TutorialPriority; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct OPP.TutorialTextData
// Size: 0x20 (Inherited: 0x00)
struct FTutorialTextData {
	struct FText Text; // 0x00(0x18)
	float showDuration; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct OPP.TutorialManagerProfileData
// Size: 0x58 (Inherited: 0x00)
struct FTutorialManagerProfileData {
	struct FDateTime FirstTimePlayingGameTutorialDisplayedTime; // 0x00(0x08)
	struct FDateTime FirstTimePickedUpAnyItemTutorialDisplayedTime; // 0x08(0x08)
	struct FDateTime FirstTimeEquippedAnyItemTutorialDisplayedTime; // 0x10(0x08)
	struct FDateTime FirstTimeStartingAnyStageTutorialDisplayedTime; // 0x18(0x08)
	struct FDateTime FirstTimePickedUpAnyLargeObjectTutorialDisplayedTime; // 0x20(0x08)
	struct TArray<struct FTutorialProfileData> DisplayedTutorialsData; // 0x28(0x10)
	struct TArray<struct FTutorialProfileData> DisplayedHUDTutorialsData; // 0x38(0x10)
	struct TArray<struct FName> DisplayedMenuTutorialsData; // 0x48(0x10)
};

// ScriptStruct OPP.TutorialProfileData
// Size: 0x18 (Inherited: 0x00)
struct FTutorialProfileData {
	struct FName TutorialId; // 0x00(0x08)
	int32_t NumberOfTimeDisplayed; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FDateTime LastDisplayedTime; // 0x10(0x08)
};

// ScriptStruct OPP.ObjectiveUISettings
// Size: 0xa50 (Inherited: 0x00)
struct FObjectiveUISettings {
	struct UTexture2D* Icon; // 0x00(0x08)
	struct FConfigurableBool bShouldForceHideIcon; // 0x08(0x60)
	struct FConfigurableBool bNeedsToBeDiscovered; // 0x68(0x60)
	struct FConfigurableBool bIsIntermediateObjective; // 0xc8(0x60)
	struct FConfigurableFloat DiscoveryRange; // 0x128(0xc8)
	struct FConfigurableFloat DiscoveryLOSRange; // 0x1f0(0xc8)
	struct FConfigurableFloat DiscoveryLOSDuration; // 0x2b8(0xc8)
	struct FConfigurableFloat ScaleDownDistanceStart; // 0x380(0xc8)
	struct FConfigurableFloat ScaleDownDistanceEnd; // 0x448(0xc8)
	struct FConfigurableFloat NearFadeOutDistanceStart; // 0x510(0xc8)
	struct FConfigurableFloat NearFadeOutDistanceEnd; // 0x5d8(0xc8)
	struct FConfigurableFloat FarFadeOutDistanceStart; // 0x6a0(0xc8)
	struct FConfigurableFloat FarFadeOutDistanceEnd; // 0x768(0xc8)
	struct FConfigurableFloat FarFadeOutLOSDistanceStart; // 0x830(0xc8)
	struct FConfigurableFloat FarFadeOutLOSDistanceEnd; // 0x8f8(0xc8)
	struct FConfigurableBool CanBePinged; // 0x9c0(0x60)
	struct FText PingText; // 0xa20(0x18)
	struct FText DisplayName; // 0xa38(0x18)
};

// ScriptStruct OPP.RegionLatency
// Size: 0x18 (Inherited: 0x00)
struct FRegionLatency {
	struct FString RegionName; // 0x00(0x10)
	int32_t PingInMs; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct OPP.NPCHitReactionSelectionParams
// Size: 0x08 (Inherited: 0x00)
struct FNPCHitReactionSelectionParams {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct OPP.ServerTravelInfo
// Size: 0x28 (Inherited: 0x00)
struct FServerTravelInfo {
	enum class EClientTravelSource TravelSource; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString LastStageName; // 0x08(0x10)
	struct FString LastTrialName; // 0x18(0x10)
};

// ScriptStruct OPP.StageMusicSystem
// Size: 0x50 (Inherited: 0x00)
struct FStageMusicSystem {
	struct TSoftObjectPtr<UAkAudioEvent> MusicStart; // 0x00(0x28)
	struct TSoftObjectPtr<UAkAudioEvent> MusicStop; // 0x28(0x28)
};

// ScriptStruct OPP.UILevelInfo
// Size: 0x10 (Inherited: 0x00)
struct FUILevelInfo {
	int32_t Level; // 0x00(0x04)
	struct FName ID; // 0x04(0x08)
	bool bVoicelinePlayed; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct OPP.ProjectileTrajectory
// Size: 0x80 (Inherited: 0x00)
struct FProjectileTrajectory {
	char pad_0[0x80]; // 0x00(0x80)
};

// ScriptStruct OPP.NPCDoorInvestigationParams
// Size: 0x30 (Inherited: 0x00)
struct FNPCDoorInvestigationParams {
	struct ARBDoor* door; // 0x00(0x08)
	struct UAnimSequence* AnimSequence; // 0x08(0x08)
	struct FVector Position; // 0x10(0x0c)
	struct FVector Direction; // 0x1c(0x0c)
	enum class EDoorInvestigationType InvestigationType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct OPP.ActiveSkillCommonParams
// Size: 0x78 (Inherited: 0x00)
struct FActiveSkillCommonParams {
	enum class EActiveSkillType ActiveSkillType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName OnlineUnlockId; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText DisplayName; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	struct UTexture2D* HUDIconTexture; // 0x40(0x08)
	struct FSlateColor PrimaryColor; // 0x48(0x28)
	struct ARBActiveSkill* ActiveSkillActorClass; // 0x70(0x08)
};

// ScriptStruct OPP.ObjectivePathData
// Size: 0x120 (Inherited: 0x00)
struct FObjectivePathData {
	struct FWorldIconData WorldIconData; // 0x00(0xf0)
	struct FVector Location; // 0xf0(0x0c)
	float Distance; // 0xfc(0x04)
	struct TArray<struct FVector> SplinePoints; // 0x100(0x10)
	bool bHasValidPath; // 0x110(0x01)
	char pad_111[0xf]; // 0x111(0x0f)
};

// ScriptStruct OPP.LobbyScriptedAnimStationData
// Size: 0x18 (Inherited: 0x00)
struct FLobbyScriptedAnimStationData {
	struct TArray<struct ARBScriptedAnimStation*> StationList; // 0x00(0x10)
	struct ARBBot* bot; // 0x10(0x08)
};

// ScriptStruct OPP.RBEvalCorridorDebugInfo
// Size: 0x38 (Inherited: 0x00)
struct FRBEvalCorridorDebugInfo {
	struct ARBPlayer* DebugRequester; // 0x00(0x08)
	struct TArray<struct ARBPlayer*> PlayersInEvalCorridor; // 0x08(0x10)
	struct TArray<struct UPrimitiveComponent*> ComponentsToIgnoreOnRequester; // 0x18(0x10)
	struct TArray<struct FRBEvalCorridorHelperCmpDebugInfo> EvalCorridorHelperCmpDebugInfos; // 0x28(0x10)
};

// ScriptStruct OPP.RBEvalCorridorHelperCmpDebugInfo
// Size: 0x38 (Inherited: 0x00)
struct FRBEvalCorridorHelperCmpDebugInfo {
	struct URBEvalCorridorHelperComponent* HelperCmp; // 0x00(0x08)
	struct TArray<struct UPrimitiveComponent*> LinkedCollisions; // 0x08(0x10)
	struct TArray<struct ARBPlayer*> DisabledCollisionsForPlayers_Server; // 0x18(0x10)
	struct TArray<struct ARBPlayer*> DisabledCollisionsForPlayers_Local; // 0x28(0x10)
};

// ScriptStruct OPP.GameplayRandomizationDebugInfo
// Size: 0x100 (Inherited: 0x00)
struct FGameplayRandomizationDebugInfo {
	int32_t NumberOfRandomizedPuzzleRooms; // 0x00(0x04)
	int32_t NumberOfRandomizedActivePuzzleRooms; // 0x04(0x04)
	int32_t NumberOfRandomizedRewardRooms; // 0x08(0x04)
	int32_t NumberOfRandomizedActiveRewardRooms; // 0x0c(0x04)
	int32_t NumberOfRandomizedTriggerableGates; // 0x10(0x04)
	int32_t NumberOfClosedTriggerableGates; // 0x14(0x04)
	int32_t NumberOfDoors; // 0x18(0x04)
	int32_t NumberOfBlockedDoors; // 0x1c(0x04)
	int32_t NumberOfBlockableDoors; // 0x20(0x04)
	int32_t NumberOfUnblockableBlockableDoors; // 0x24(0x04)
	int32_t NumberOfRemovedDoors; // 0x28(0x04)
	int32_t NumberOfRemovedDoorsByRandomization; // 0x2c(0x04)
	int32_t NumberOfReplacedDoors; // 0x30(0x04)
	int32_t NumberOfReplaceableDoors; // 0x34(0x04)
	struct TArray<struct FName> DoorReplacementNames; // 0x38(0x10)
	struct TArray<int32_t> DoorReplacementCountByNames; // 0x48(0x10)
	int32_t NumberOfTrappedDoors; // 0x58(0x04)
	int32_t NumberOfLockedDoors; // 0x5c(0x04)
	struct TArray<struct FName> DoorLockNames; // 0x60(0x10)
	struct TArray<int32_t> DoorLockCountByNames; // 0x70(0x10)
	int32_t NumberOfOpenDoors; // 0x80(0x04)
	int32_t NumberOfClosedDoors; // 0x84(0x04)
	int32_t NumberOfDoorCoopBash; // 0x88(0x04)
	int32_t NumberOfMiscBlockables; // 0x8c(0x04)
	int32_t NumberOfBlockedMiscBlockables; // 0x90(0x04)
	int32_t NumberOfBlockableMiscBlockables; // 0x94(0x04)
	int32_t NumberOfUnblockableMiscBlockables; // 0x98(0x04)
	int32_t NumberOfHidespots; // 0x9c(0x04)
	int32_t NumberOfDisableableHidespots; // 0xa0(0x04)
	int32_t NumberOfDisabledHidespots; // 0xa4(0x04)
	struct TArray<struct ARBGlassFloorTrap*> GlassFloorTraps; // 0xa8(0x10)
	char pad_B8[0x8]; // 0xb8(0x08)
	struct TArray<struct ARBSoundTrap*> SoundTraps; // 0xc0(0x10)
	char pad_D0[0x8]; // 0xd0(0x08)
	struct TArray<struct ARBExplosiveTrap*> ExplosiveTraps; // 0xd8(0x10)
	struct TArray<struct URBElectricFloorTrapComponent*> ElectricTrapFloors; // 0xe8(0x10)
	char pad_F8[0x8]; // 0xf8(0x08)
};

// ScriptStruct OPP.MusicDebugInfo
// Size: 0x18 (Inherited: 0x00)
struct FMusicDebugInfo {
	struct TArray<struct FMusicPlayerDebugInfo> PlayerInfos; // 0x00(0x10)
	float GatheredTime; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct OPP.MusicPlayerDebugInfo
// Size: 0x38 (Inherited: 0x00)
struct FMusicPlayerDebugInfo {
	struct FString LocalPlayerName; // 0x00(0x10)
	struct FString ThreateningNPCName; // 0x10(0x10)
	float ThreatLevel; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FMusicStateChangeEvent> StateChanges; // 0x28(0x10)
};

// ScriptStruct OPP.MusicStateChangeEvent
// Size: 0x28 (Inherited: 0x00)
struct FMusicStateChangeEvent {
	float ChangedTime; // 0x00(0x04)
	enum class EAIMusicState newState; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FString BotName; // 0x08(0x10)
	struct FString TargetPlayerName; // 0x18(0x10)
};

// ScriptStruct OPP.NPCAttackParams
// Size: 0x30 (Inherited: 0x00)
struct FNPCAttackParams {
	enum class EAttackType AttackType; // 0x00(0x01)
	bool bStationary; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float PlayRate; // 0x04(0x04)
	struct UAnimSequence* AttackAnim; // 0x08(0x08)
	struct AActor* AttackTarget; // 0x10(0x08)
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct OPP.SectionItemSpawningOverride
// Size: 0xd0 (Inherited: 0x00)
struct FSectionItemSpawningOverride {
	enum class EItemType ItemType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FConfigurableFloat StageCountPercent; // 0x08(0xc8)
};

// ScriptStruct OPP.PlayerCustomizationSkeletalMesh
// Size: 0x80 (Inherited: 0x08)
struct FPlayerCustomizationSkeletalMesh : FTableRowBase {
	struct USkeletalMesh* Mesh; // 0x08(0x08)
	struct TMap<struct FName, struct UMaterialInstanceConstant*> Materials; // 0x10(0x50)
	struct FPlayerCustomizationItemSettings ItemSettings; // 0x60(0x20)
};

// ScriptStruct OPP.PlayerCustomizationItemSettings
// Size: 0x20 (Inherited: 0x00)
struct FPlayerCustomizationItemSettings {
	int32_t RequiredXp; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText DisplayName; // 0x08(0x18)
};

// ScriptStruct OPP.PlayerCustomizationStaticMesh
// Size: 0x80 (Inherited: 0x08)
struct FPlayerCustomizationStaticMesh : FTableRowBase {
	struct UStaticMesh* Mesh; // 0x08(0x08)
	struct TMap<struct FName, struct UMaterialInstanceConstant*> Materials; // 0x10(0x50)
	struct FPlayerCustomizationItemSettings ItemSettings; // 0x60(0x20)
};

// ScriptStruct OPP.FaceAnimRow
// Size: 0x10 (Inherited: 0x08)
struct FFaceAnimRow : FTableRowBase {
	struct UAnimSequence* Sequence; // 0x08(0x08)
};

// ScriptStruct OPP.CustomizationMenuCategoryParams
// Size: 0x20 (Inherited: 0x00)
struct FCustomizationMenuCategoryParams {
	struct FText CategoryName; // 0x00(0x18)
	struct UTexture2D* Icon; // 0x18(0x08)
};

// ScriptStruct OPP.RotationRateLimitData
// Size: 0x1c (Inherited: 0x00)
struct FRotationRateLimitData {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct OPP.RotationRateLimitParams
// Size: 0x10 (Inherited: 0x00)
struct FRotationRateLimitParams {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct OPP.AILocoModeParameters
// Size: 0x68 (Inherited: 0x00)
struct FAILocoModeParameters {
	struct FGameplayParams GP; // 0x00(0x68)
};

// ScriptStruct OPP.GameplayParams
// Size: 0x68 (Inherited: 0x00)
struct FGameplayParams {
	bool bDisableCollisions; // 0x00(0x01)
	bool bDisableMoveInput; // 0x01(0x01)
	bool bDisableLookInput; // 0x02(0x01)
	bool bCanWalk; // 0x03(0x01)
	bool bAlwaysEnableRootMotion; // 0x04(0x01)
	bool bEnableWalkingZDisplacement; // 0x05(0x01)
	bool bDisableGravity; // 0x06(0x01)
	bool bDisablePawnCollisions; // 0x07(0x01)
	bool bEnablePawnRepulsion; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float CollisionRadius; // 0x0c(0x04)
	float CollisionHalfHeight; // 0x10(0x04)
	bool bCanBeAttacked; // 0x14(0x01)
	bool bCanPeek; // 0x15(0x01)
	bool bCanLookBack; // 0x16(0x01)
	bool bUseInteractibleCamParams; // 0x17(0x01)
	bool bLeftArmFirstPersonRelativeAnimation; // 0x18(0x01)
	bool bRightArmFirstPersonRelativeAnimation; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	float MaxStepHeight; // 0x1c(0x04)
	bool bShouldClearAnyInteraction; // 0x20(0x01)
	bool bAllowStaminaRegen; // 0x21(0x01)
	bool bHideEquippedItem; // 0x22(0x01)
	char pad_23[0x1]; // 0x23(0x01)
	float EquippedItemHideDelay; // 0x24(0x04)
	float EquippedItemUnhideDelay; // 0x28(0x04)
	bool bRenderInForeground; // 0x2c(0x01)
	bool bAllowNPCWallSeparation; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	struct FCameraParameters CamParams; // 0x30(0x34)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct OPP.CameraParameters
// Size: 0x34 (Inherited: 0x00)
struct FCameraParameters {
	float MinYaw; // 0x00(0x04)
	float MaxYaw; // 0x04(0x04)
	float MinPitchWS; // 0x08(0x04)
	float MaxPitchWS; // 0x0c(0x04)
	float MinPitchCS; // 0x10(0x04)
	float MaxPitchCS; // 0x14(0x04)
	float ViewLimitsApproachCoeff; // 0x18(0x04)
	float FOVOverride; // 0x1c(0x04)
	bool bLocalSpaceControl; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FVector2D MouseLookSensibilityMultiplier; // 0x24(0x08)
	struct FVector2D GamepadLookSensibilityMultiplier; // 0x2c(0x08)
};

// ScriptStruct OPP.LocomotionModeParameters
// Size: 0x74 (Inherited: 0x00)
struct FLocomotionModeParameters {
	struct FGameplayParams GP; // 0x00(0x68)
	float NeckOffsetSide; // 0x68(0x04)
	float NeckOffsetFwd; // 0x6c(0x04)
	bool bBlockNavmesh; // 0x70(0x01)
	bool bAllowCameraRelativeRightHand; // 0x71(0x01)
	bool bCanInteract; // 0x72(0x01)
	char pad_73[0x1]; // 0x73(0x01)
};

// ScriptStruct OPP.SpecialMoveParameters
// Size: 0xd4 (Inherited: 0x00)
struct FSpecialMoveParameters {
	struct FGameplayParams GP; // 0x00(0x68)
	enum class ELocomotionMode nextLocomotionMode; // 0x68(0x01)
	enum class ELocomotionMode InterruptLocomotionMode; // 0x69(0x01)
	enum class ELocomotionMode CompletesLocomotionMode; // 0x6a(0x01)
	bool bUpperBody; // 0x6b(0x01)
	enum class ELocomotionMode SpecialMoveLocomotionMode; // 0x6c(0x01)
	bool bAdjustPosition; // 0x6d(0x01)
	bool bPlayAnimAfterAdjustPosition; // 0x6e(0x01)
	char pad_6F[0x1]; // 0x6f(0x01)
	float AdjustPositionTimeLeftAnimationTrigger; // 0x70(0x04)
	bool bExitOnBlendOut; // 0x74(0x01)
	bool bAlwaysInterruptible; // 0x75(0x01)
	bool bInterruptibleByChoice; // 0x76(0x01)
	bool bUsingProceduralMotion; // 0x77(0x01)
	bool bKeepExitMomentum; // 0x78(0x01)
	bool bFixedDuration; // 0x79(0x01)
	bool bUseAnimTimeForPositionAdjustment; // 0x7a(0x01)
	bool bUsePawnVelocityForPositionning; // 0x7b(0x01)
	bool bKeepCameraYawWhileAdjusting; // 0x7c(0x01)
	bool bKeepCameraYawWhileRootMotion; // 0x7d(0x01)
	char pad_7E[0x2]; // 0x7e(0x02)
	float PositionningLinearVelocity; // 0x80(0x04)
	float PositionningAngularVelocity; // 0x84(0x04)
	float MaxPositionningTime; // 0x88(0x04)
	float MaxTimeForUpwardsCorrections; // 0x8c(0x04)
	enum class ETriggeringStimulusType StimulusType; // 0x90(0x01)
	bool bDropLargeObject; // 0x91(0x01)
	bool bKeepCrouchedState; // 0x92(0x01)
	bool bCradleLargeObject; // 0x93(0x01)
	bool bAllowPathBlocking; // 0x94(0x01)
	bool bClearInteractionOnCompleted; // 0x95(0x01)
	enum class ESpecialMove PairedMove; // 0x96(0x01)
	char pad_97[0x1]; // 0x97(0x01)
	struct FPairedAdjustmentParameters PairedAdjustParams; // 0x98(0x10)
	bool bPairedCollision; // 0xa8(0x01)
	bool bIgnoreFailSafeTimer; // 0xa9(0x01)
	bool bCanCrouchDuringSpecialMove; // 0xaa(0x01)
	bool bCrouchAfterSpecialMove; // 0xab(0x01)
	float FailsafeDuration; // 0xac(0x04)
	float ServerZeroRootMotionDisableAnimationDelay; // 0xb0(0x04)
	float AjustmentDuration; // 0xb4(0x04)
	struct FVector targetLocation; // 0xb8(0x0c)
	struct FVector targetDirection; // 0xc4(0x0c)
	bool bCancelOnFailedAdjustment; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
};

// ScriptStruct OPP.PairedAdjustmentParameters
// Size: 0x10 (Inherited: 0x00)
struct FPairedAdjustmentParameters {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct OPP.ObjectiveTargetsSpawnInfo
// Size: 0x18 (Inherited: 0x00)
struct FObjectiveTargetsSpawnInfo {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct FObjectiveTargetParams> TargetsInfo; // 0x08(0x10)
};

// ScriptStruct OPP.ObjectiveTargetParams
// Size: 0x10 (Inherited: 0x00)
struct FObjectiveTargetParams {
	struct ARBNPC* PawnClass; // 0x00(0x08)
	struct URBAIConfig* configAsset; // 0x08(0x08)
};

// ScriptStruct OPP.AIDataBuildInfo
// Size: 0x10 (Inherited: 0x00)
struct FAIDataBuildInfo {
	struct TArray<struct URBNPCInterestPointComponent*> InterestPoints; // 0x00(0x10)
};

// ScriptStruct OPP.NPCInvestigationSelectedAnimData
// Size: 0x30 (Inherited: 0x00)
struct FNPCInvestigationSelectedAnimData {
	bool bValid; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UAnimSequence* AnimSequence; // 0x08(0x08)
	enum class ENPCInvestigationAnimIntensity Intensity; // 0x10(0x01)
	enum class ENPCInvestigationAnimCategory Category; // 0x11(0x01)
	bool bEnterInMotion; // 0x12(0x01)
	char pad_13[0x1]; // 0x13(0x01)
	float EntrySpeed; // 0x14(0x04)
	float EntryPhase; // 0x18(0x04)
	bool bGreatFit; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct TArray<struct URBNPCInterestPointComponent*> InterestPoints; // 0x20(0x10)
};

// ScriptStruct OPP.NPCCapabilities
// Size: 0x15 (Inherited: 0x00)
struct FNPCCapabilities {
	bool bSupportsCustomization; // 0x00(0x01)
	bool bCanPlayAnimatedStarts; // 0x01(0x01)
	bool bCanPlayAnimatedStops; // 0x02(0x01)
	bool bCanStrafe; // 0x03(0x01)
	bool bCanClimbUpLedges; // 0x04(0x01)
	bool bCanDropDownLedges; // 0x05(0x01)
	bool bCanOpenDoors; // 0x06(0x01)
	bool bCanCloseDoors; // 0x07(0x01)
	bool bCanUnlockDoors; // 0x08(0x01)
	bool bUseKickToBreakDoors; // 0x09(0x01)
	bool bBasicWalkThroughOpenDoors; // 0x0a(0x01)
	bool bCanDestroyPathObstacles; // 0x0b(0x01)
	bool bCanDestroyDynamicObstacles; // 0x0c(0x01)
	bool bWillUnhingeDoorWhileBashing; // 0x0d(0x01)
	bool bCanCrouchUnder; // 0x0e(0x01)
	bool bCanPlayStartles; // 0x0f(0x01)
	bool bCanPlayAttackSelectors; // 0x10(0x01)
	bool bCanGrabPlayers; // 0x11(0x01)
	bool bCanPlayHitReactions; // 0x12(0x01)
	bool bCanPlayCycleBreakers; // 0x13(0x01)
	bool bCanPullOutFromHidespots; // 0x14(0x01)
};

// ScriptStruct OPP.AttackMove
// Size: 0x28 (Inherited: 0x00)
struct FAttackMove {
	struct UAnimSequence* Sequence; // 0x00(0x08)
	float ProbabilityModifier; // 0x08(0x04)
	float Rotation; // 0x0c(0x04)
	float Distance; // 0x10(0x04)
	float InitialSpeed; // 0x14(0x04)
	float TimeToDamage; // 0x18(0x04)
	float LinearCorrectionAmount; // 0x1c(0x04)
	float RequiredCeilingClearance; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct OPP.NPCAnimatedStopData
// Size: 0x88 (Inherited: 0x00)
struct FNPCAnimatedStopData {
	bool bImmediateStop; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float StartSpeed; // 0x04(0x04)
	float FinalStopDistance; // 0x08(0x04)
	float TargetYaw; // 0x0c(0x04)
	float AnimStartTime; // 0x10(0x04)
	bool bAggressiveStance; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FVector StartPosition; // 0x18(0x0c)
	float StartYaw; // 0x24(0x04)
	float NaturalYawAtDestination; // 0x28(0x04)
	char pad_2C[0x5c]; // 0x2c(0x5c)
};

// ScriptStruct OPP.BotRandomVOConfig
// Size: 0x0c (Inherited: 0x00)
struct FBotRandomVOConfig {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct OPP.NPCAnimatedStartData
// Size: 0x48 (Inherited: 0x00)
struct FNPCAnimatedStartData {
	float InitialTargetYaw; // 0x00(0x04)
	float TargetSpeed; // 0x04(0x04)
	bool bAggressiveStance; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FVector StartLocation; // 0x0c(0x0c)
	float StartYaw; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct ARBPlayer* TrackedTargetPlayer; // 0x20(0x08)
	char pad_28[0x20]; // 0x28(0x20)
};

// ScriptStruct OPP.AIStimulusInfo
// Size: 0x20 (Inherited: 0x00)
struct FAIStimulusInfo {
	float OccuranceTimestamp; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct AActor* SourceActor; // 0x10(0x08)
	enum class EStimulusType Type; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float StimulusStrengthMultiplier; // 0x1c(0x04)
};

// ScriptStruct OPP.InvestigationPoint
// Size: 0xc0 (Inherited: 0x00)
struct FInvestigationPoint {
	char pad_0[0x10]; // 0x00(0x10)
	struct ARBInvestigationPoint* InvPoint; // 0x10(0x08)
	struct ARBDoor* door; // 0x18(0x08)
	struct URBHidespotComponent* hidespotComponent; // 0x20(0x08)
	struct ARBInteractible* interactible; // 0x28(0x08)
	struct ARBLedgeMarker* LedgeMarker; // 0x30(0x08)
	char pad_38[0x88]; // 0x38(0x88)
};

// ScriptStruct OPP.QuestItemRuntimeInfo
// Size: 0x20 (Inherited: 0x00)
struct FQuestItemRuntimeInfo {
	struct AActor* ItemSpawner; // 0x00(0x08)
	struct ARBPickup* SpawnedObjectiveItem; // 0x08(0x08)
	struct ARBPickup* QuestItemClass; // 0x10(0x08)
	bool bPickedUp; // 0x18(0x01)
	bool bInSpawner; // 0x19(0x01)
	bool bUsed; // 0x1a(0x01)
	bool bIsEmptyContainer; // 0x1b(0x01)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct OPP.PipeArrangement
// Size: 0x78 (Inherited: 0x00)
struct FPipeArrangement {
	struct FConfigurableBool AllowedByDifficulty; // 0x00(0x60)
	struct TArray<struct FPipeJunction> PipeJunctions; // 0x60(0x10)
	bool bWaterLeakFront; // 0x70(0x01)
	bool bWaterLeakBack; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
};

// ScriptStruct OPP.PipeJunction
// Size: 0x30 (Inherited: 0x00)
struct FPipeJunction {
	struct TSoftObjectPtr<AActor> PipeJunction; // 0x00(0x28)
	enum class EPipeJunctionType JunctionType; // 0x28(0x01)
	bool bLeakingFront; // 0x29(0x01)
	bool bLeakingBack; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
};

// ScriptStruct OPP.RBTrialConfigDataOverrides
// Size: 0x34 (Inherited: 0x00)
struct FRBTrialConfigDataOverrides {
	float RollingGateRandomizationBlockedCountModifier; // 0x00(0x04)
	float DoorRandomizationBlockedCountModifier; // 0x04(0x04)
	float BlockableRandomizationBlockedCountModifier; // 0x08(0x04)
	float DoorRandomizationReplacedCountModifier; // 0x0c(0x04)
	float DoorRandomizationTrappedCountModifier; // 0x10(0x04)
	float DoorRandomizationLockedCountModifier; // 0x14(0x04)
	float DoorRandomizationOpenCountModifier; // 0x18(0x04)
	float HidespotRandomizationDisabledRatioModifier; // 0x1c(0x04)
	float TrapGroupCountModifier; // 0x20(0x04)
	float SoundTrapCountModifier; // 0x24(0x04)
	float ExplosiveTrapCountModifier; // 0x28(0x04)
	float ElectricFloorTrapCountModifier; // 0x2c(0x04)
	float PsychosisMineTrapCountModifier; // 0x30(0x04)
};

// ScriptStruct OPP.RBVariatorNPCAIConfigOverride
// Size: 0x10 (Inherited: 0x00)
struct FRBVariatorNPCAIConfigOverride {
	enum class ENPCType NPCType; // 0x00(0x01)
	enum class ENPCFlavor NPCFlavor; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct URBPartialAIConfig* Override; // 0x08(0x08)
};

// ScriptStruct OPP.RBVoiceChatInputDevice
// Size: 0x28 (Inherited: 0x00)
struct FRBVoiceChatInputDevice {
	struct FString Name; // 0x00(0x10)
	struct FString ID; // 0x10(0x10)
	bool bActive; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct OPP.VOEventData
// Size: 0x58 (Inherited: 0x00)
struct FVOEventData {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* Speaker; // 0x08(0x08)
	char pad_10[0x48]; // 0x10(0x48)
};

// ScriptStruct OPP.PlayedVOInfo
// Size: 0x18 (Inherited: 0x00)
struct FPlayedVOInfo {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct OPP.MarkerInfo
// Size: 0x20 (Inherited: 0x00)
struct FMarkerInfo {
	struct AActor* Talker; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct OPP.EndOfEventInfo
// Size: 0x10 (Inherited: 0x00)
struct FEndOfEventInfo {
	struct AActor* Talker; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct OPP.QueuedLine
// Size: 0x28 (Inherited: 0x00)
struct FQueuedLine {
	struct AActor* Talker; // 0x00(0x08)
	struct UAkAudioEvent* akEvent; // 0x08(0x08)
	char pad_10[0x18]; // 0x10(0x18)
};

// ScriptStruct OPP.TalkerState
// Size: 0x28 (Inherited: 0x00)
struct FTalkerState {
	struct AActor* Talker; // 0x00(0x08)
	struct FVOLine ActiveLine; // 0x08(0x18)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct OPP.VOLine
// Size: 0x18 (Inherited: 0x00)
struct FVOLine {
	struct UAkAudioEvent* akEvent; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct OPP.VORemapTable
// Size: 0x10 (Inherited: 0x00)
struct FVORemapTable {
	struct TArray<struct FVORemapEntry> VORemaps; // 0x00(0x10)
};

// ScriptStruct OPP.VORemapEntry
// Size: 0x10 (Inherited: 0x00)
struct FVORemapEntry {
	struct UAkAudioEvent* SourceEvent; // 0x00(0x08)
	struct UAkAudioEvent* ReplacementEvent; // 0x08(0x08)
};

// ScriptStruct OPP.ContinuousSoundInfo
// Size: 0x10 (Inherited: 0x00)
struct FContinuousSoundInfo {
	struct UAkAudioEvent* SoundStart; // 0x00(0x08)
	struct UAkAudioEvent* SoundStop; // 0x08(0x08)
};

// ScriptStruct OPP.ContinuousSoundConfig
// Size: 0x18 (Inherited: 0x00)
struct FContinuousSoundConfig {
	struct UAkAudioEvent* SoundStart; // 0x00(0x08)
	struct UAkAudioEvent* SoundStop; // 0x08(0x08)
	bool bIsFoley; // 0x10(0x01)
	bool bAvailableUnaware; // 0x11(0x01)
	bool bAvailableInInvestigate; // 0x12(0x01)
	bool bAvailableInChase; // 0x13(0x01)
	enum class EContinuousSoundNPCState NPCState; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct OPP.VOMapping
// Size: 0x28 (Inherited: 0x00)
struct FVOMapping {
	enum class EVOContext VOContext; // 0x00(0x01)
	enum class EVOPriority VOPriority; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct UAkAudioEvent* Line; // 0x08(0x08)
	bool bPlayONOIfInterrupting; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float MinDelayBeforeRepeatOnPawn; // 0x14(0x04)
	float MinDelayBeforeRepeatGlobal; // 0x18(0x04)
	float MinDelayAfterAnySimilarVO; // 0x1c(0x04)
	float MinDelayAfterAnyVO; // 0x20(0x04)
	float LastTimePlayed; // 0x24(0x04)
};

// ScriptStruct OPP.WaterValveSectionRuntimeData
// Size: 0x58 (Inherited: 0x00)
struct FWaterValveSectionRuntimeData {
	struct FName SectionName; // 0x00(0x08)
	bool bAvailableForThisDifficulty; // 0x08(0x01)
	bool bActive; // 0x09(0x01)
	bool bWaterFlowing; // 0x0a(0x01)
	bool bCompleted; // 0x0b(0x01)
	char pad_C[0x4]; // 0x0c(0x04)
	struct AActor* PumpActor; // 0x10(0x08)
	struct TArray<struct AActor*> ObjectiveValveActors; // 0x18(0x10)
	struct TArray<struct URBValvePanelComponent*> ObjectiveValvePanels; // 0x28(0x10)
	struct TArray<struct AActor*> CompletedObjectiveValveActors; // 0x38(0x10)
	struct TArray<struct AActor*> DiscoveredObjectiveValveActors; // 0x48(0x10)
};

// ScriptStruct OPP.WaterValveSectionGroupConfig
// Size: 0xd8 (Inherited: 0x00)
struct FWaterValveSectionGroupConfig {
	struct FConfigurableInt MinimumValveInSection; // 0x00(0xc8)
	struct TArray<struct FWaterValveSectionConfig> Sections; // 0xc8(0x10)
};

// ScriptStruct OPP.WaterValveSectionConfig
// Size: 0xb8 (Inherited: 0x00)
struct FWaterValveSectionConfig {
	struct FText SectionObjectiveTextLine; // 0x00(0x18)
	struct FText SectionPumpObjectiveTextLine; // 0x18(0x18)
	struct FName SectionName; // 0x30(0x08)
	struct UMaterialInterface* SectionPipeMaterial; // 0x38(0x08)
	struct TSoftObjectPtr<AActor> Pump; // 0x40(0x28)
	struct TArray<struct TSoftObjectPtr<AActor>> Valves; // 0x68(0x10)
	struct TArray<struct TSoftObjectPtr<ARBTriggerable>> WaterTriggerables; // 0x78(0x10)
	struct TArray<struct TSoftObjectPtr<AActor>> LinkedActorForMaterials; // 0x88(0x10)
	struct TArray<struct TSoftObjectPtr<AActor>> LinkedActorForVisibilityOn; // 0x98(0x10)
	struct TArray<struct TSoftObjectPtr<AActor>> LinkedActorForVisibilityOff; // 0xa8(0x10)
};

// ScriptStruct OPP.RBWaypointGroupCustomizationProxy
// Size: 0x08 (Inherited: 0x00)
struct FRBWaypointGroupCustomizationProxy {
	struct ARBWaypointGroup* OwnerGroup; // 0x00(0x08)
};

// ScriptStruct OPP.WWWPlaybackStateData
// Size: 0x20 (Inherited: 0x00)
struct FWWWPlaybackStateData {
	struct UAnimSequence* AnimSeq; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct OPP.WWWRecordingData
// Size: 0xd0 (Inherited: 0x00)
struct FWWWRecordingData {
	char pad_0[0x10]; // 0x00(0x10)
	struct TMap<struct FWWWObjectKey, struct FWWWPawnRecord> PawnRecords; // 0x10(0x50)
	char pad_60[0x70]; // 0x60(0x70)
};

// ScriptStruct OPP.WWWObjectKey
// Size: 0x08 (Inherited: 0x00)
struct FWWWObjectKey {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct OPP.WWWPawnRecord
// Size: 0x68 (Inherited: 0x00)
struct FWWWPawnRecord {
	char pad_0[0x38]; // 0x00(0x38)
	struct TArray<struct FWWWBotDebuggingData> BotDebuggingData; // 0x38(0x10)
	struct TArray<struct FWWWPlayerDebuggingData> PlayerDebuggingData; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)
};

// ScriptStruct OPP.WWWPlayerDebuggingData
// Size: 0x18 (Inherited: 0x00)
struct FWWWPlayerDebuggingData {
	char pad_0[0x8]; // 0x00(0x08)
	struct UAnimSequence* MostRelevantAnim; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct OPP.WWWBotDebuggingData
// Size: 0x320 (Inherited: 0x00)
struct FWWWBotDebuggingData {
	char pad_0[0x8]; // 0x00(0x08)
	struct FBotDebugInfo BotDebugInfo; // 0x08(0x308)
	struct UAnimSequence* MostRelevantAnim; // 0x310(0x08)
	char pad_318[0x8]; // 0x318(0x08)
};

// ScriptStruct OPP.ObstacleRandomizationRuntimeData
// Size: 0xc0 (Inherited: 0x00)
struct FObstacleRandomizationRuntimeData {
	char pad_0[0xa0]; // 0x00(0xa0)
	struct TArray<struct FObstacleVariatorComponentList> Obstacles; // 0xa0(0x10)
	struct TArray<struct ARBTrapGroup*> TrapGroups; // 0xb0(0x10)
};

// ScriptStruct OPP.ObstacleVariatorComponentList
// Size: 0x10 (Inherited: 0x00)
struct FObstacleVariatorComponentList {
	struct TArray<struct URBObstacleVariatorComponent*> List; // 0x00(0x10)
};

// ScriptStruct OPP.TemporaryAttachmentInfo
// Size: 0x60 (Inherited: 0x00)
struct FTemporaryAttachmentInfo {
	struct AActor* Owner; // 0x00(0x08)
	struct USceneComponent* AttachedComponent; // 0x08(0x08)
	struct USceneComponent* InitialAttachedComponentParent; // 0x10(0x08)
	char pad_18[0x48]; // 0x18(0x48)
};

// ScriptStruct OPP.LongJumpInfo
// Size: 0x28 (Inherited: 0x00)
struct FLongJumpInfo {
	struct ARBLedgeMarker* Marker1; // 0x00(0x08)
	struct ARBLedgeMarker* Marker2; // 0x08(0x08)
	struct FVector CenterPoint1; // 0x10(0x0c)
	struct FVector CenterPoint2; // 0x1c(0x0c)
};

// ScriptStruct OPP.DelayedActionHandle
// Size: 0x28 (Inherited: 0x00)
struct FDelayedActionHandle {
	struct UObject* Owner; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
	struct FDelegate Callback; // 0x18(0x10)
};

// ScriptStruct OPP.ObjectiveZoneInfo
// Size: 0x28 (Inherited: 0x00)
struct FObjectiveZoneInfo {
	struct ARBZoneDefenceLocation* ZoneLocation; // 0x00(0x08)
	float CurrentZoneCompletion; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FPlayerInZoneInfo> PlayersInZoneInfos; // 0x10(0x10)
	bool bCompleted; // 0x20(0x01)
	bool bActive; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct OPP.PlayerInZoneInfo
// Size: 0x10 (Inherited: 0x00)
struct FPlayerInZoneInfo {
	struct ARBPlayer* Player; // 0x00(0x08)
	struct ARBPlayerTriggerVolume* Volume; // 0x08(0x08)
};

// ScriptStruct OPP.ZoneTimingTargetInfo
// Size: 0x18 (Inherited: 0x00)
struct FZoneTimingTargetInfo {
	struct TArray<enum class ETimingInputResultType> NeedleResults; // 0x00(0x10)
	float NeedleSpeed; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

