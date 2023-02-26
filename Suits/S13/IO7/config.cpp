class CfgPatches
{
	class SpaghettiSuits_IO7
	{
		units[] = {"S13_io7_top_merc1","S13_io7_top_merc1_hoodoff","S13_io7_top_bandit1","S13_io7_top_bandit1_hoodoff","S13_io7_top_loner1","S13_io7_top_loner1_hoodoff","S13_io7_Pants_merc1","S13_io7_Pants_bandit1","S13_io7_Pants_loner1"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters_Headgear","DZ_Characters","DZ_Data","DZ_Scripts"};
	};
};

class CfgVehicles
{
	class S13HeadDummy_Base;
	class QuiltedJacket_ColorBase;
	
	class merc11shirt: QuiltedJacket_ColorBase
	{
		BlockedSlots[] = {"Vest"};
	};

    class S13_io7_top_loner1: merc11shirt
	{
		BlockedSlots[] = {"Vest"};
		suit[] =
		{
			"S13HeadDummy_Base",
			"S13_io7_Pants_loner1"
		};
	};
	class S13_io7_top_merc1: merc11shirt
	{
		BlockedSlots[] = {"Vest"};
		suit[] =
		{
			"S13HeadDummy_Base",
			"S13_io7_Pants_merc1"
		};
	};
	class S13_io7_top_merc1_hoodoff: merc11shirt
	{
		BlockedSlots[] = {"Vest"};
		suit[] =
		{
			"S13_io7_Pants_merc1"
		};
	};
	class S13_io7_top_bandit1: merc11shirt
	{
		BlockedSlots[] = {"Vest"};
		suit[] =
		{
			"S13HeadDummy_Base",
			"S13_io7_Pants_bandit1"
		};
	};
	class S13_io7_top_bandit1_hoodoff: merc11shirt
	{
		BlockedSlots[] = {"Vest"};
		suit[] =
		{
			"S13_io7_Pants_bandit1"
		};
	};
};