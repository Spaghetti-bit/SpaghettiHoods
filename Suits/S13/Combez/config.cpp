class CfgPatches
{
	class SpaghettiSuits_Combez
	{
		units[] = {"S13_combez_free_1","S13_combez_free_1_hooddown","S13_combez_duty_1","S13_combez_duty_1_hooddown","S13_combez_loner_1","S13_combez_loner_1_hooddown","S13_combez_loner_2","S13_combez_loner_2_hooddown","S13_combez_merc_1","S13_combez_merc_1_hooddown","S13_combez_eco_1","S13_combez_eco_1_hooddown","S13_combez_eco_2","S13_combez_eco_2_hooddown","S13_combez_pants_free","S13_combez_pants_duty","S13_combez_pants_loner1","S13_combez_pants_loner2","S13_combez_pants_merc1","S13_combez_pants_eco1","S13_combez_pants_eco2"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters_Headgear","DZ_Characters","DZ_Data","DZ_Scripts"};
	};
};

class CfgVehicles
{
	class S13HeadDummy_Base;
	class QuiltedJacket_ColorBase;
	
	class s13stalkersuit_colorbase: QuiltedJacket_ColorBase
	{
		BlockedSlots[] = {"Vest"};
	};
	class S13_combez_free_1: s13stalkersuit_colorbase
	{
		BlockedSlots[] = {"Vest"};
		suit[] =
		{
			"S13HeadDummy_Base",
			"S13_combez_pants_free"
		};
	};
	class S13_combez_free_1_hooddown: s13stalkersuit_colorbase
	{
		BlockedSlots[] = {"Vest"};
		suit[] =
		{
			"S13_combez_pants_free"
		};
	};
	class S13_combez_duty_1: s13stalkersuit_colorbase
	{
		BlockedSlots[] = {"Vest"};
		suit[] =
		{
			"S13HeadDummy_Base",
			"S13_combez_pants_duty"
		};
	};
	class S13_combez_duty_1_hooddown: s13stalkersuit_colorbase
	{
		BlockedSlots[] = {"Vest"};
		suit[] =
		{
			"S13_combez_pants_duty"
		};
	};
	class S13_combez_loner_1: s13stalkersuit_colorbase
	{
		BlockedSlots[] = {"Vest"};
		suit[] =
		{
			"S13HeadDummy_Base",
			"S13_combez_pants_loner1"
		};
	};
	class S13_combez_loner_1_hooddown: s13stalkersuit_colorbase
	{
		BlockedSlots[] = {"Vest"};
		suit[] =
		{
			"S13_combez_pants_loner1"
		};
	};
	class S13_combez_loner_2: s13stalkersuit_colorbase
	{
		BlockedSlots[] = {"Vest"};
		suit[] =
		{
			"S13HeadDummy_Base",
			"S13_combez_pants_loner2"
		};
	};
	class S13_combez_loner_2_hooddown: s13stalkersuit_colorbase
	{
		BlockedSlots[] = {"Vest"};
		suit[] =
		{
			"S13_combez_pants_loner2"
		};
	};
	class S13_combez_eco_1: s13stalkersuit_colorbase
	{
		BlockedSlots[] = {"Vest"};
		suit[] =
		{
			"S13HeadDummy_Base",
			"S13_combez_pants_eco1"
		};
	};
	class S13_combez_eco_1_hooddown: s13stalkersuit_colorbase
	{
		BlockedSlots[] = {"Vest"};
		suit[] =
		{
			"S13_combez_pants_eco1"
		};
	};
	class S13_combez_eco_2: s13stalkersuit_colorbase
	{
		BlockedSlots[] = {"Vest"};
		suit[] =
		{
			"S13HeadDummy_Base",
			"S13_combez_pants_eco2"
		};
	};
	class S13_combez_eco_2_hooddown: s13stalkersuit_colorbase
	{
		BlockedSlots[] = {"Vest"};
		suit[] =
		{
			"S13_combez_pants_eco2"
		};
	};
	class S13_combez_eco_3: s13stalkersuit_colorbase
	{
		BlockedSlots[] = {"Vest"};
		suit[] =
		{
			"S13HeadDummy_Base",
			"S13_combez_pants_eco3"
		};
	};
	class S13_combez_eco_3_hooddown: s13stalkersuit_colorbase
	{
		BlockedSlots[] = {"Vest"};
		suit[] =
		{
			"S13_combez_pants_eco3"
		};
	};
	class S13_combez_mono1: s13stalkersuit_colorbase
	{
		BlockedSlots[] = {"Vest"};
		suit[] =
		{
			"S13HeadDummy_Base",
			"S13_combez_pants_monolit1"
		};
	};
	class S13_combez_mono1_hooddown: s13stalkersuit_colorbase
	{
		BlockedSlots[] = {"Vest"};
		suit[] =
		{
			"S13_combez_pants_monolit1"
		};
	};
	class S13_combez_merc_1: s13stalkersuit_colorbase
	{
		BlockedSlots[] = {"Vest"};
		suit[] =
		{
			"S13HeadDummy_Base",
			"S13_combez_pants_merc1"
		};
	};
	class S13_combez_merc_1_hooddown: s13stalkersuit_colorbase
	{
		BlockedSlots[] = {"Vest"};
		suit[] =
		{
			"S13_combez_pants_merc1"
		};
	};
};