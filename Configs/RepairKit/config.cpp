class CfgPatches
{
	class S13_ArmorRepairsPatch
	{
		units[] = {"S13_ArmorRepairKit"};
        weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Camping"};
	};
};

class CfgVehicles
{
    class Clothing;
    class Apple;
    class TShirt_Beige;
    class FS_PREDMET_Detali_EXO;
    class FS_PREDMET_Detali_SEVA;
    class S13_ArmorRepairSuitBase: TShirt_Beige 
    {
        scope = 1;
        displayName = "THIS SHOULDNT BE SPAWNED";
        descriptionShort = "YO HEADASS, WHAT THE FUCK ARE YOU DOING WITH THIS? I'll ban you on god fr fr -Theodore";
    };
    class NH_Exo_System_v1_BaseColor: S13_ArmorRepairSuitBase {};
	class s13_sevasuit_cb: S13_ArmorRepairSuitBase {};
    class S13_ArmorRepairKitBase: Clothing
	{
        scope = 2;
		displayName = "Multi-Purpose Armor Repair Kit";
		descriptionShort = "A large kit used to repair suits. (SEVAs and EXOs)";
		weight = 5000;
        attachments[] = { "S13_ArmorRepairKitSEVA", "S13_ArmorRepairKitExo", "S13_ArmorRepairKitSEVAPart", "S13_ArmorRepairKitExoPart"};
		itemSize[] = {3,4};
		hiddenSelections[] = {"camoGround"};
        model = "\DZ\gear\radio\unitra_wilga.p3d";
		hiddenSelectionsTextures[] = {"\dz\gear\radio\data\unitra_black_co.paa"};
        class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\radio\data\unitra_wilga.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\radio\data\unitra_wilga.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\radio\data\unitra_wilga_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\radio\data\unitra_wilga_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\radio\data\unitra_wilga_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		soundImpactType="plastic";
		soundAttType="Small";
    };
    class S13_ArmorRepairKit_SEVA: S13_ArmorRepairKitBase
    {
        displayName = "SEVA Repair Kit";
		descriptionShort = "A large kit used to repair SEVAs.";
        attachments[] = { "S13_ArmorRepairKitSEVA", "S13_ArmorRepairKitSEVAPart" };
    };
    class S13_ArmorRepairKit_EXO: S13_ArmorRepairKitBase
    {
        displayName = "Exo Repair Kit";
		descriptionShort = "A large kit used to repair Exos.";
        attachments[] = { "S13_ArmorRepairKitExo", "S13_ArmorRepairKitExoPart" };
    };
    class S13_TShirt_Beige_ArmorRepairKitTest_SEVA: S13_ArmorRepairSuitBase
	{
		displayName = "'SEVA'";
        inventorySlot[] = { "S13_ArmorRepairKitSEVA" };
		descriptionShort = "Testing ArmorRepairKit Shirt";
	};
    class S13_TShirt_Beige_ArmorRepairKitTest_Exo: S13_ArmorRepairSuitBase
	{
		displayName = "'Exo'";
        inventorySlot[] = { "S13_ArmorRepairKitExo" };
		descriptionShort = "Testing ArmorRepairKit Shirt";
	};
    class S13_Apple_SEVAPart: Apple
    {
        displayName = "Apple SEVA Part";
        inventorySlot[] = { "S13_ArmorRepairKitSEVAPart" };
		descriptionShort = "Testing ArmorRepairKit Apple";
    };
    class S13_Apple_ExoPart: Apple
    {
        displayName = "Apple Exo Part";
        inventorySlot[] = { "S13_ArmorRepairKitExoPart" };
		descriptionShort = "Testing ArmorRepairKit Apple";
    };
    class S13_SEVAPart: FS_PREDMET_Detali_SEVA
    {
        scope = 2;
		displayName = "SEVA Part";
        inventorySlot[] = { "S13_ArmorRepairKitSEVAPart" };
		descriptionShort = "A set of spare tubes and SEVA glass. Could probably be used in some sort of manner? I should talk to a technician to find out more.";
    };
    class S13_ExoPart: FS_PREDMET_Detali_EXO
    {
        scope = 2;
		displayName = "Exo Part";
        inventorySlot[] = { "S13_ArmorRepairKitExoPart" };
		descriptionShort = "Some servos of the Exo suit. Could probably be used in some sort of manner? I should talk to a technician to find out more.";
    };
};