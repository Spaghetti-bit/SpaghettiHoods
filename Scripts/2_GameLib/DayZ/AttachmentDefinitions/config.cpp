class CfgPatches
{
	class S13_SlotDefinitions
	{
		units[] = {};
        weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Scripts"};
	};
};

class CfgSlots
{
	class Slot_Mask;
    class Slot_S13_ArmorRepairKitSEVA: Slot_Mask
	{
		name = "S13_ArmorRepairKitSEVA";
		displayName = "SEVA";
		ghostIcon="set:dayz_inventory image:body";
		selection = "S13_ArmorRepairKitSEVA";
		show="true";
	};
    class Slot_S13_ArmorRepairKitExo: Slot_Mask
	{
		name = "S13_ArmorRepairKitExo";
		displayName = "Exo";
		ghostIcon="set:dayz_inventory image:hips";
		selection = "S13_ArmorRepairKitExo";
		show="true";
	};
    class Slot_S13_ArmorRepairKitExoPart: Slot_Mask
	{
		name = "S13_ArmorRepairKitExoPart";
		displayName = "Exo Part";
		ghostIcon="set:dayz_inventory image:hands";
		selection = "S13_ArmorRepairKitExoPart";
		show="true";
	};
    class Slot_S13_ArmorRepairKitSEVAPart: Slot_Mask
	{
		name = "S13_ArmorRepairKitSEVAPart";
		displayName = "SEVA Part";
		ghostIcon="set:dayz_inventory image:hands";
		selection = "S13_ArmorRepairKitSEVAPart";
		show="true";
	};
};