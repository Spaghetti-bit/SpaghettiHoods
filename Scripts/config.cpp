
class CfgPatches
{
	class SpaghettiHoods_Scripts
	{
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Scripts"};
	};
};

class CfgMods 
{
	class DZ_SpaghettiHoods
	{
		name = "Mod Template";
		dir = "SpaghettiHoods";
		credits = "";
		author = "";
		creditsJson = "SpaghettiHoods/Scripts/Data/Credits.json";
		versionPath = "SpaghettiHoods/Scripts/Data/Version.hpp";
		inputs = "SpaghettiHoods/Scripts/Data/Inputs.xml";
		type = "mod";
		dependencies[] =
		{
			"Game", "World", "Mission"
		};
		class defs
		{
			class imageSets
			{
				files[]= {};
			};
			class engineScriptModule
			{
				value = "";
				files[] =
				{
					"SpaghettiHoods/scripts/common",
					"SpaghettiHoods/scripts/1_core"
				};
			};

			class gameScriptModule
			{
				value="";
				files[] = 
				{
					"SpaghettiHoods/scripts/common",
					"SpaghettiHoods/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[] = 
				{
					"SpaghettiHoods/scripts/common",
					"SpaghettiHoods/scripts/4_World"
				};
			};

			class missionScriptModule 
			{
				value="";
				files[] = 
				{
					"SpaghettiHoods/scripts/common",
					"SpaghettiHoods/scripts/5_Mission"
				};
			};
		};
	};
};
