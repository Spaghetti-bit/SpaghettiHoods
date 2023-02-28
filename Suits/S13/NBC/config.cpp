class CfgPatches
{
	class SpaghettiSuits_NBC
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters_Headgear","DZ_Characters","DZ_Data","DZ_Scripts"};
	};
};

class CfgVehicles
{
    class NBCSuits_Jacket_Nig;
    class S13_Suits_NBCOrange: NBCSuits_Jacket_Nig
    {
        suit[] =
        {
            "NBCSuits_Hood_Nig",
            "NBCSuits_Pants_Nig",
            "NBCSuits_Gloves_Nig",
            "NBCSuits_Boots_Nig"
        };
    };
};