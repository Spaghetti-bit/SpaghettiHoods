class CfgPatches
{
	class SpaghettiSuits_Radsuit
	{
		units[] = 
		{
			"S13_Suit_Radsuit_Free",
			"S13_Suit_Radsuit_Duty",
			"S13_Suit_Radsuit_Mono",
			"S13_Suit_Radsuit_Ecostalker",
			"S13_Suit_Radsuit_Bandit",
			"S13_Suit_Radsuit_Loner",
			"S13_Suit_Radsuit_GoonSquad",
			"S13_Suit_Radsuit_Merc",
			"S13_Suit_Radsuit_Stalker2"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters_Headgear","DZ_Characters","DZ_Data","DZ_Scripts"};
	};
};

class CfgVehicles
{
	class S13HeadDummy_Base;
	class Radsuit_Top_ColorBase;

	class S13_RadsuitTop_Freedom: Radsuit_Top_ColorBase
	{
		suit[] =
		{
			"S13_RadsuitPants_Freedom",
			"S13_Helmet_Exo_Freedom"
		};
	};
	class S13_RadsuitTop_Dolg: Radsuit_Top_ColorBase
	{
		suit[] =
		{
			"S13_RadsuitPants_Dolg",
			"S13_Helmet_Exo_Duty"
		};
	};
	class S13_RadsuitTop_Mono: Radsuit_Top_ColorBase
	{
		suit[] =
		{
			"S13_RadsuitPants_Mono",
			"S13_Helmet_Exo_Mono"
		};
	};
	class S13_RadsuitTop_Ecostalker: Radsuit_Top_ColorBase
	{
		suit[] =
		{
			"S13_RadsuitPants_Ecostalker",
			"S13_Helmet_Exo_Ecologists"
		};
	};
	class S13_RadsuitTop_Bandit: Radsuit_Top_ColorBase
	{
		suit[] =
		{
			"S13_RadsuitPants_Bandit",
			"S13_Helmet_Exo_Loner"
		};
	};
	class S13_RadsuitTop_Loner: Radsuit_Top_ColorBase
	{
		suit[] =
		{
			"S13_RadsuitPants_Loner",
			"S13_Helmet_Exo_Loner"
		};
	};
	class S13_RadsuitTop_Merc: Radsuit_Top_ColorBase
	{
		suit[] =
		{
			"S13_RadsuitPants_Merc",
			"S13_Helmet_Exo_Merc"
		};
	};
	class S13_RadsuitTop_Stalker2: Radsuit_Top_ColorBase
	{
		suit[] =
		{
			"S13_RadsuitPants_Stalker2",
			"S13_Helmet_Exo_Loner"
		};
	};
};