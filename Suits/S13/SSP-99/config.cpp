class CfgPatches
{
	class SpaghettiSuits_SSP99
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters_Headgear","DZ_Characters","DZ_Data","DZ_Scripts"};
	};
};

class CfgVehicles
{
	class S13HeadDummy_Base;
	class HuntingJacket_Autumn;

	class FS_ECO01_Jacket_ColorBase: HuntingJacket_Autumn
	{
		BlockedSlots[] = {"Mask","Back","Vest"};
	};
	class FS_ECO01_Jacket: FS_ECO01_Jacket_ColorBase
	{
		BlockedSlots[] = {"Mask","Back","Vest"};
		suit[] =
		{
			"S13HeadDummy_Base",
			"FS_ECO01_pants"
		};
	};
	class FS_ECO01_Jacket_Pro: FS_ECO01_Jacket_ColorBase
	{
		BlockedSlots[] = {"Mask","Back","Vest"};
		suit[] =
		{
			"S13HeadDummy_Base",
			"FS_ECO01_pants_Pro"
		};
	};
};