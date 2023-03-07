class CfgPatches
{
	class S13_Sounds_MilitaryCP
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Sounds_Effects"};
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
    class Megaphone_MilitaryCP_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{
				"SpaghettiHoods\Configs\MilitaryCP\Sounds\megafon_1",
				1
			},
			{
				"SpaghettiHoods\Configs\MilitaryCP\Sounds\megafon_2",
				1
			},
			{
				"SpaghettiHoods\Configs\MilitaryCP\Sounds\megafon_3",
				1
			},
			{
				"SpaghettiHoods\Configs\MilitaryCP\Sounds\megafon_4",
				1
			}
		};
		range=650;
        volume=2;
	};
	class Megaphone_RostokPropaganda_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{
				"SpaghettiHoods\Configs\MilitaryCP\Sounds\dutypropaganda1",
				1
			},
			{
				"SpaghettiHoods\Configs\MilitaryCP\Sounds\dutypropaganda2",
				1
			},
			{
				"SpaghettiHoods\Configs\MilitaryCP\Sounds\dutypropaganda3",
				1
			},
			{
				"SpaghettiHoods\Configs\MilitaryCP\Sounds\dutypropaganda4",
				1
			},
			{
				"SpaghettiHoods\Configs\MilitaryCP\Sounds\dutypropaganda5",
				1
			},
			{
				"SpaghettiHoods\Configs\MilitaryCP\Sounds\dutypropaganda6",
				1
			}
		};
		range=400;
        volume=1;
	}; 
};
class CfgSoundSets
{
	class baseCharacter_SoundSet;
	class militaryCP_Soundset: baseCharacter_SoundSet
	{
		soundShaders[]=
		{
			"Megaphone_MilitaryCP_SoundShader"
		};
		loop=1;
	};
	class rostokPropaganda_Soundset: baseCharacter_SoundSet
	{
		soundShaders[]=
		{
			"Megaphone_RostokPropaganda_SoundShader"
		};
		loop=1;
	};
};