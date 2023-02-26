class CfgPatches
{
	class SpaghettiSuits_SKAT9M
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
	class psz9Shirt;

	class s13_Shirt_psz9_loner: psz9Shirt
	{
		suit[] =
		{
			"s13_Pant_psz9_loner"
		};
	};
	class s13_Shirt_psz9_duty: psz9Shirt
	{
		suit[] =
		{
			"s13_Pant_psz9_duty"
		};
	};
	class s13_Shirt_psz9_military: psz9Shirt
	{
		suit[] =
		{
			"s13_Pant_psz9_military"
		};
	};
	class s13_Shirt_psz9_monolith: psz9Shirt
	{
		suit[] =
		{
			"s13_Pant_psz9_monolith"
		};
	};
	class s13_Shirt_psz9_bandit: psz9Shirt
	{
		suit[] =
		{
			"s13_Pant_psz9_bandit"
		};
	};
};