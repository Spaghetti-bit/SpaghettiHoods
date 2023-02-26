class CfgPatches
{
	class SpaghettiSuits
	{
		units[] = {"S13HeadDummy_Base", "TShirt_Beige_suitTest"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters_Headgear","DZ_Characters","DZ_Data","DZ_Scripts"};
	};
};

class CfgVehicles
{
	class BaseballCap_ColorBase;
	class TShirt_Beige;
	
	class TShirt_Beige_suitTest: TShirt_Beige
	{
		displayName = "TShirt Suit Beige";
		suit[] =
		{
			"S13HeadDummy_Base",
			"AirborneMask",
			"LeatherStorageVest_Natural",
			"WorkingGloves_Black",
			"Jeans_Green"
		};
		descriptionShort = "Testing Shirt";
	};

    class S13HeadDummy_Base: BaseballCap_ColorBase
    {
		scope = 2;
		visibilityModifier = 0.9;
        displayName = "Basic Suit Hood";
		descriptionShort = "A hood to go with your suit.";
        weight = 0;
        quickBarBonus = 5;
        varWetMax = 0.0;
		heatIsolation = 1.0;
        repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "NylonJacket";
        inventorySlot[] = {"Headgear"};
		itemInfo[] = {"Clothing","Headgear"};
		hiddenSelectionsTextures[] = {"zybtek"};
        BlockedSlots[] = {};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 325;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.9;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.75;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.75;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.75;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.75;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.75;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.9;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.75;
					};
				};
			};
		};
    };
	class S13HeadDummy_SEVA: S13HeadDummy_Base
	{
		displayName = "SEVA Suit Hood";
		descriptionShort = "A composite hood that protects the user from mutant and ballistic threats.";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 325;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.75;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.8;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.6;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.7;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.6;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.7;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.75;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.75;
					};
				};
			};
		};
	};
};