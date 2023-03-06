class CfgPatches
{
	class S13_BoltMod
	{
		units[] = {"S13_Bolt"};
        weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters_Headgear"};
	};
};
class CfgVehicles
{
    class SmallStone;
    class S13_Bolt: SmallStone
    {
        displayName = "Bolt";
        descriptionShort = "A metal bolt, I wonder if I can throw this.";
        weight = 200;
        soundImpactType="metal";
    };
};