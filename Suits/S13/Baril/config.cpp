class CfgPatches
{
	class SpaghettiSuits_Baril
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
	class Clothing;
	class b5m_patch: Clothing
	{
		class GlobalArmor
		{
			class Projectile
			{
				class Health
				{
					damage = 0.25;
				};
				class Blood
				{
					damage = 0;
				};
				class Shock
				{
					damage = 0.25;
				};
			};
			class Melee
			{
				class Health
				{
					damage = 0.25;
				};
				class Blood
				{
					damage = 0;
				};
				class Shock
				{
					damage = 0.25;
				};
			};
			class Infected
			{
				class Health
				{
					damage = 0.25;
				};
				class Blood
				{
					damage = 0;
				};
				class Shock
				{
					damage = 0.25;
				};
			};
			class FragGrenade
			{
				class Health
				{
					damage = 0.5;
				};
				class Blood
				{
					damage = 0;
				};
				class Shock
				{
					damage = 0.26;
				};
			};
		};
	};

    class s13_baril_freedom: b5m_patch
	{
		suit[] =
		{
			"s13_baril_helmet_freedom",
			"s13_baril_pants"
		};
	};
	class s13_baril_duty: b5m_patch
	{
		suit[] =
		{
			"s13_baril_helmet_duty",
			"s13_baril_pants_duty"
		};
	};
    class s13_baril_military: b5m_patch
	{
		suit[] =
		{
			"s13_baril_helmet_military",
			"s13_baril_pants_military"
		};
	};
	class s13_baril_loner: b5m_patch
	{
		suit[] =
		{
			"s13_baril_helmet_loner",
			"s13_baril_pants_loner"
		};
	};
};