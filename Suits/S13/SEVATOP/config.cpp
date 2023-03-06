class CfgPatches
{
	class SpaghettiSuits_SEVATops
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters_Headgear","DZ_Characters","DZ_Data","DZ_Scripts"};
	};
};

class CfgVehicles
{
	class S13HeadDummy_SEVA;
	class QuiltedJacket_ColorBase;

	class S13_ArmorRepairSuitBase;
	class s13_sevasuit_cb: S13_ArmorRepairSuitBase
	{
		inventorySlot[] = { "S13_ArmorRepairKitSEVA", "Body" };
		BlockedSlots[] = {"Mask","Back","Vest"};
	};
	class S13_SEVATop_Free: s13_sevasuit_cb
	{
		inventorySlot[] = { "S13_ArmorRepairKitSEVA", "Body" };
		BlockedSlots[] = {"Mask","Back","Vest"};
		suit[] =
		{
			"S13HeadDummy_SEVA",
			"S13_combez_pants_free"
		};
	};
	class S13_SEVATop_Monolit: s13_sevasuit_cb
	{
		inventorySlot[] = { "S13_ArmorRepairKitSEVA", "Body" };
		BlockedSlots[] = {"Mask","Back","Vest"};
		suit[] =
		{
			"S13HeadDummy_SEVA",
			"S13_combez_pants_monolit1"
		};
	};
	class S13_SEVATop_Loner1: s13_sevasuit_cb
	{
		inventorySlot[] = { "S13_ArmorRepairKitSEVA", "Body" };
		BlockedSlots[] = {"Mask","Back","Vest"};
		suit[] =
		{
			"S13HeadDummy_SEVA",
			"S13_combez_pants_loner1"
		};
	};
	class S13_SEVATop_Loner2: s13_sevasuit_cb
	{
		inventorySlot[] = { "S13_ArmorRepairKitSEVA", "Body" };
		BlockedSlots[] = {"Mask","Back","Vest"};
		suit[] =
		{
			"S13HeadDummy_SEVA",
			"S13_combez_pants_loner2"
		};
	};
	class S13_SEVATop_Duty: s13_sevasuit_cb
	{
		inventorySlot[] = { "S13_ArmorRepairKitSEVA", "Body" };
		BlockedSlots[] = {"Mask","Back","Vest"};
		suit[] =
		{
			"S13HeadDummy_SEVA",
			"S13_combez_pants_duty"
		};
	};
	class S13_SEVATop_Merc: s13_sevasuit_cb
	{
		inventorySlot[] = { "S13_ArmorRepairKitSEVA", "Body" };
		BlockedSlots[] = {"Mask","Back","Vest"};
		suit[] =
		{
			"S13HeadDummy_SEVA",
			"S13_combez_pants_merc1"
		};
	};
	class S13_SEVATop_eco1: s13_sevasuit_cb
	{
		inventorySlot[] = { "S13_ArmorRepairKitSEVA", "Body" };
		BlockedSlots[] = {"Mask","Back","Vest"};
		suit[] =
		{
			"S13HeadDummy_SEVA",
			"S13_combez_pants_eco1"
		};
	};
	class S13_SEVATop_eco2: s13_sevasuit_cb
	{
		inventorySlot[] = { "S13_ArmorRepairKitSEVA", "Body" };
		BlockedSlots[] = {"Mask","Back","Vest"};
		suit[] =
		{
			"S13HeadDummy_SEVA",
			"S13_combez_pants_eco2"
		};
	};
};