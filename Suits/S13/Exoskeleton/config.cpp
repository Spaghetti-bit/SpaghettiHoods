class CfgPatches
{
	class SpaghettiSuits_Exoskeleton
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
	class NH_Exo_System_v1_BaseColor;

	class NH_Exo_System_v1_Svoboda2: NH_Exo_System_v1_BaseColor
	{
		suit[] =
		{
			"S13_RadsuitPants_Freedom",
			"S13_RadsuitTop_Freedom",
			"S13_Helmet_Exo_Freedom"
		};
	};
	class NH_Exo_System_v1_Dolg: NH_Exo_System_v1_BaseColor
	{
		suit[] =
		{
			"S13_RadsuitPants_Dolg",
			"S13_RadsuitTop_Dolg",
			"S13_Helmet_Exo_Duty"
		};
	};
	class NH_Exo_System_v1_Monolith3: NH_Exo_System_v1_BaseColor
	{
		suit[] =
		{
			"S13_RadsuitPants_Mono",
			"S13_RadsuitTop_Mono",
			"S13_Helmet_Exo_Mono"
		};
	};
	class NH_Exo_System_v1_Voenstali: NH_Exo_System_v1_BaseColor
	{
		suit[] =
		{
			"S13_RadsuitPants_Ecostalker",
			"S13_RadsuitTop_Ecostalker",
			"S13_Helmet_Exo_Ecologists"
		};
	};
	class NH_Exo_System_v1_Bandit: NH_Exo_System_v1_BaseColor
	{
		suit[] =
		{
			"S13_RadsuitPants_Bandit",
			"S13_RadsuitTop_Bandit",
			"S13_Helmet_Exo_Loner"
		};
	};
	class NH_Exo_System_v1_Odinochka1: NH_Exo_System_v1_BaseColor
	{
		suit[] =
		{
			"S13_RadsuitPants_Loner",
			"S13_RadsuitTop_Loner",
			"S13_Helmet_Exo_Loner"
		};
	};
	class NH_Exo_System_v1_Odinochka2: NH_Exo_System_v1_BaseColor
	{
		suit[] =
		{
			"S13_RadsuitPants_Stalker2",
			"S13_RadsuitTop_Stalker2",
			"S13_Helmet_Exo_Loner"
		};
	};
	class NH_Exo_System_v1_Merc3: NH_Exo_System_v1_BaseColor
	{
		suit[] =
		{
			"S13_RadsuitPants_Merc",
			"S13_RadsuitTop_Merc",
			"S13_Helmet_Exo_Merc"
		};
	};
};