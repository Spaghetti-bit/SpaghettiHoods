class CfgPatches
{
	class SpaghettiSuits_ProJacket
	{
		units[] = {};
        weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters_Headgear","DZ_Characters","DZ_Data","DZ_Scripts"};
	};
};

class CfgVehicles
{
    class HuntingJacket_Autumn;
    class S13_ProJacketST_HoodDown_ColorBase;
    class FS_ProJacketST_ColorBase: HuntingJacket_Autumn
    {
        BlockedSlots[] = {"Vest"};
    };
    class FS_ProJacketST: FS_ProJacketST_ColorBase
	{
		scope = 2;
		suit[] =
        {
            "S13HeadDummy_Base",
            "FS_ProPantsST"
        };
	};
    class FS_ProJacketST_DOLG: FS_ProJacketST_ColorBase
	{
		scope = 2;
		suit[] =
        {
            "S13HeadDummy_Base",
            "FS_ProPantsST_DOLG"
        };
	};
    class FS_ProJacketST_SVOBODA: FS_ProJacketST_ColorBase
	{
		scope = 2;
		suit[] =
        {
            "S13HeadDummy_Base",
            "FS_ProPantsST_SVOBODA"
        };
	};
    class FS_ProJacketST_Monolit: FS_ProJacketST_ColorBase
	{
		scope = 2;
		suit[] =
        {
            "S13HeadDummy_Base",
            "FS_ProPantsST_MONOLIT"
        };
	};
    class FS_ProJacketST_Black: FS_ProJacketST_ColorBase
	{
		scope = 2;
		suit[] =
        {
            "S13HeadDummy_Base",
            "FS_ProPantsST_BLACK"
        };
	};
    class FS_ProJacketST_HoodDown: S13_ProJacketST_HoodDown_ColorBase
	{
		scope = 2;
		suit[] =
        {
            "FS_ProPantsST"
        };
	};
    class FS_ProJacketST_DOLG_HoodDown: S13_ProJacketST_HoodDown_ColorBase
	{
		scope = 2;
		suit[] =
        {
            "FS_ProPantsST_DOLG"
        };
	};
    class FS_ProJacketST_SVOBODA_HoodDown: S13_ProJacketST_HoodDown_ColorBase
	{
		scope = 2;
		suit[] =
        {
            "FS_ProPantsST_SVOBODA"
        };
	};
    class FS_ProJacketST_Monolit_HoodDown: S13_ProJacketST_HoodDown_ColorBase
	{
		scope = 2;
		suit[] =
        {
            "FS_ProPantsST_MONOLIT"
        };
	};
    class FS_ProJacketST_Black_HoodDown: S13_ProJacketST_HoodDown_ColorBase
	{
		scope = 2;
		suit[] =
        {
            "FS_ProPantsST_BLACK"
        };
	};
};