class CfgPatches
{
	class SpaghettiSuits_Clearsky
	{
		units[] = {};
        weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters_Headgear","DZ_Characters","DZ_Data","DZ_Scripts"};
	};
};

class CfgVehicles
{
    class FS_ClearSkyType2_ColorBase;
    class Jupiter_CSJacket_Green: FS_ClearSkyType2_ColorBase
    {
        BlockedSlots[] = {"Vest"};
        suit[] =
        {
            "S13HeadDummy_Base",
            "Jupiter_CSPants_Green"
        };
    };
    class Jupiter_CSJacket_Green_HoodDown: Jupiter_CSJacket_Green
    {
        BlockedSlots[] = {"Vest"};
        suit[] =
        {
            "Jupiter_CSPants_Green"
        };
    };
};