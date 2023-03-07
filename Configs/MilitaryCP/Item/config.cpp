class CfgPatches
{
	class S13_MilitaryCP_Radio
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
            "DZ_Radio"
		};
	};
};

class CfgVehicles
{
    class BaseRadio;
    class S13_MilitaryCP_Radio: BaseRadio
    {
        scope=2;
		displayName="Military Checkpoint Broadcaster";
		descriptionShort="A military communications relay device repeating Military instructions regarding the Zone.";
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOff=1;
			energyUsagePerSecond=0.005000001;
			plugType=5;
			attachmentAction=1;
		};
    };
	class S13_RostokPropaganda_Radio: BaseRadio
    {
        scope=2;
		displayName="Rostok Broadcaster";
		descriptionShort="A military communications relay device repeating Duty propaganda.";
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOff=1;
			energyUsagePerSecond=0.005000001;
			plugType=5;
			attachmentAction=1;
		};
    };
};