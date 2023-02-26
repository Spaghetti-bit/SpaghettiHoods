class CfgPatches
{
	class SpaghettiSuits_Sunrise
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
	class QuiltedJacket_ColorBase;
    
	class S13_Sunrise_ColorBase: QuiltedJacket_ColorBase
	{
		BlockedSlots[] = {"Vest"};
	};
    class S13_Sunrise_Loner1: S13_Sunrise_ColorBase
	{
		BlockedSlots[] = {"Vest"};
		suit[] =
		{
			"S13HeadDummy_Base"
		};
	};
	class S13_Sunrise_Loner1_hooddown: S13_Sunrise_ColorBase
	{
		BlockedSlots[] = {"Vest"};
	};
	class S13_Sunrise_Loner2: S13_Sunrise_ColorBase
	{
		BlockedSlots[] = {"Vest"};
		suit[] =
		{
			"S13HeadDummy_Base"
		};
	};
	class S13_Sunrise_Loner2_hooddown: S13_Sunrise_ColorBase
	{
		BlockedSlots[] = {"Vest"};
	};
	class S13_Sunrise_Loner3: S13_Sunrise_ColorBase
	{
		BlockedSlots[] = {"Vest"};
		suit[] =
		{
			"S13HeadDummy_Base"
		};
	};
	class S13_Sunrise_Loner3_hooddown: S13_Sunrise_ColorBase
	{
		BlockedSlots[] = {"Vest"};
	};
};