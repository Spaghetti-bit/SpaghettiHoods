class CfgPatches
{
	class SpaghettiSuits_CombatResp
	{
		units[] = {};
        weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters_Headgear","DZ_Characters","DZ_Data","DZ_Scripts"};
	};
};

class CfgVehicles
{
    class S13_GasMaskNew;
    class S13_GasMaskNew_Upgraded_CombatResp: S13_GasMaskNew
    {
        BlockedSlots[] = {};
        class ItemProtection
		{
			chemical = 0;
			electrical = 0;
			psi = 0;
			radiation = 4.2;
			gravitation = 0;
		};
    };
};