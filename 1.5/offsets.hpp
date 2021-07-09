namespace offsets
{
	//viewWordBase: 54faac10
	DWORD uWorld = 0x54b1ae1c; //viewWordBase-4783604
	DWORD gNames = 0x54b11550; //viewWordBase-4822720

	DWORD PersistentLevel = 0x20;
	DWORD NetDriver = 0x24;
	DWORD ServerConnection = 0x60;
	DWORD PlayerController = 0x20;
	DWORD AcknowledgedPawn = 0x330;
	DWORD PlayerCameraManager = 0x340;
	DWORD CameraCache = 0x350;
	DWORD Mesh = 0x320;
	DWORD CachedComponentSpaceTransforms = 0x710;
	DWORD RootComponent = 0x14c;
	DWORD CurrWeapon = 0x1740;
	DWORD ShootWeaponEntity = 0xccc;
	DWORD AccessoriesVRecoilFactor = 0x784;
	DWORD RelativeLocation = 352; // posetion or location
	DWORD bDead = 0x964;
	DWORD Nation = 0x654;
	DWORD PlayerName = 0x648;
	DWORD TeamID = 0x670;
	DWORD CurrentStates = 0x920;
	DWORD Health = 0x928;
	DWORD HealthMax = 0x92c;
	DWORD bIsAI = 0x6e8; //isbot
	DWORD VehicleCommon = 0x698;
	DWORD HP = 0x11c;
	DWORD HPMax = 0x118;
	DWORD FuelMax = 0x130;
	DWORD Fuel = 0x134;
	DWORD PoseState = 0xe30;
	DWORD ScopeFov = 0x1060;
	DWORD bIsGunADS = 0xa99;
	DWORD PickUpDataList = 0x630;
	DWORD TypeSpecificID = 0x4;

}

enum BONES
{
	BONE_HEAD = 6,
	BONE_NECK = 5,
	BONE_SPINE = 2,
	BONE_LEFTSHOULDER = 12,
	BONE_RIGHTSHOULDER = 33,
	BONE_LEFTELBOWROLL = 13,
	BONE_RIGHTELBOWROLL = 34,
	BONE_LEFTHAND = 64,
	BONE_RIGHTHAND = 63,
	BONE_LEFTKNEEROLL = 54,
	BONE_RIGHTKNEEROLL = 58,
	BONE_LEFTFOOT = 55,
	BONE_RIGHTFOOT = 59
};
