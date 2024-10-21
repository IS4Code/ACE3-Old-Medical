class CfgPatches
{
	class ace_towing
	{
		name="ACE3 - Towing";
		units[]={};
		weapons[]={};
		requiredVersion=2.0599999;
		requiredAddons[]=
		{
			"ace_common",
			"ace_logistics_rope"
		};
		author="$STR_ace_common_ACETeam";
		authors[]=
		{
			"Brandon (TCVM)"
		};
		url="$STR_ace_main_URL";
		version=3.1400001;
		versionStr="3.14.1.65";
		versionAr[]={3,14,1,65};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_towing
	{
		init="call compileScript ['\z\ace\addons\towing\XEH_preStart.sqf']";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_towing
	{
		init="call compileScript ['\z\ace\addons\towing\XEH_preInit.sqf']";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_towing
	{
		init="call compileScript ['\z\ace\addons\towing\XEH_postInit.sqf']";
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class ace_towing
				{
					displayName="$STR_ace_towing_displayName";
					distance=3;
					condition="[_target] call ace_towing_fnc_isSuitableSimulation";
					statement="";
					exceptions[]=
					{
						"isNotOnLadder",
						"isNotSwimming"
					};
					showDisabled=0;
					icon="";
					class ace_towing_startTow3
					{
						displayName="$STR_ace_towing_start3";
						condition="([_player, _target] call ace_towing_fnc_canStartTow) && [_player, 'ACE_rope3'] call ace_common_fnc_hasItem";
						statement="[_player, _target, 'ACE_rope3'] call ace_towing_fnc_startTow";
						exceptions[]=
						{
							"isNotOnLadder",
							"isNotSwimming"
						};
					};
					class ace_towing_startTow6
					{
						displayName="$STR_ace_towing_start6";
						condition="([_player, _target] call ace_towing_fnc_canStartTow) && [_player, 'ACE_rope6'] call ace_common_fnc_hasItem";
						statement="[_player, _target, 'ACE_rope6'] call ace_towing_fnc_startTow";
						exceptions[]=
						{
							"isNotOnLadder",
							"isNotSwimming"
						};
					};
					class ace_towing_startTow12
					{
						displayName="$STR_ace_towing_start12";
						condition="([_player, _target] call ace_towing_fnc_canStartTow) && [_player, 'ACE_rope12'] call ace_common_fnc_hasItem";
						statement="[_player, _target, 'ACE_rope12'] call ace_towing_fnc_startTow";
						exceptions[]=
						{
							"isNotOnLadder",
							"isNotSwimming"
						};
					};
					class ace_towing_startTow15
					{
						displayName="$STR_ace_towing_start15";
						condition="([_player, _target] call ace_towing_fnc_canStartTow) && [_player, 'ACE_rope15'] call ace_common_fnc_hasItem";
						statement="[_player, _target, 'ACE_rope15'] call ace_towing_fnc_startTow";
						exceptions[]=
						{
							"isNotOnLadder",
							"isNotSwimming"
						};
					};
					class ace_towing_startTow18
					{
						displayName="$STR_ace_towing_start18";
						condition="([_player, _target] call ace_towing_fnc_canStartTow) && [_player, 'ACE_rope18'] call ace_common_fnc_hasItem";
						statement="[_player, _target, 'ACE_rope18'] call ace_towing_fnc_startTow";
						exceptions[]=
						{
							"isNotOnLadder",
							"isNotSwimming"
						};
					};
					class ace_towing_startTow27
					{
						displayName="$STR_ace_towing_start27";
						condition="([_player, _target] call ace_towing_fnc_canStartTow) && [_player, 'ACE_rope27'] call ace_common_fnc_hasItem";
						statement="[_player, _target, 'ACE_rope27'] call ace_towing_fnc_startTow";
						exceptions[]=
						{
							"isNotOnLadder",
							"isNotSwimming"
						};
					};
					class ace_towing_startTow36
					{
						displayName="$STR_ace_towing_start36";
						condition="([_player, _target] call ace_towing_fnc_canStartTow) && [_player, 'ACE_rope36'] call ace_common_fnc_hasItem";
						statement="[_player, _target, 'ACE_rope36'] call ace_towing_fnc_startTow";
						exceptions[]=
						{
							"isNotOnLadder",
							"isNotSwimming"
						};
					};
				};
			};
		};
	};
	class Tank: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class ace_towing
				{
					displayName="$STR_ace_towing_displayName";
					distance=3;
					condition="[_target] call ace_towing_fnc_isSuitableSimulation";
					statement="";
					exceptions[]=
					{
						"isNotOnLadder",
						"isNotSwimming"
					};
					showDisabled=0;
					icon="";
					class ace_towing_startTow3
					{
						displayName="$STR_ace_towing_start3";
						condition="([_player, _target] call ace_towing_fnc_canStartTow) && [_player, 'ACE_rope3'] call ace_common_fnc_hasItem";
						statement="[_player, _target, 'ACE_rope3'] call ace_towing_fnc_startTow";
						exceptions[]=
						{
							"isNotOnLadder",
							"isNotSwimming"
						};
					};
					class ace_towing_startTow6
					{
						displayName="$STR_ace_towing_start6";
						condition="([_player, _target] call ace_towing_fnc_canStartTow) && [_player, 'ACE_rope6'] call ace_common_fnc_hasItem";
						statement="[_player, _target, 'ACE_rope6'] call ace_towing_fnc_startTow";
						exceptions[]=
						{
							"isNotOnLadder",
							"isNotSwimming"
						};
					};
					class ace_towing_startTow12
					{
						displayName="$STR_ace_towing_start12";
						condition="([_player, _target] call ace_towing_fnc_canStartTow) && [_player, 'ACE_rope12'] call ace_common_fnc_hasItem";
						statement="[_player, _target, 'ACE_rope12'] call ace_towing_fnc_startTow";
						exceptions[]=
						{
							"isNotOnLadder",
							"isNotSwimming"
						};
					};
					class ace_towing_startTow15
					{
						displayName="$STR_ace_towing_start15";
						condition="([_player, _target] call ace_towing_fnc_canStartTow) && [_player, 'ACE_rope15'] call ace_common_fnc_hasItem";
						statement="[_player, _target, 'ACE_rope15'] call ace_towing_fnc_startTow";
						exceptions[]=
						{
							"isNotOnLadder",
							"isNotSwimming"
						};
					};
					class ace_towing_startTow18
					{
						displayName="$STR_ace_towing_start18";
						condition="([_player, _target] call ace_towing_fnc_canStartTow) && [_player, 'ACE_rope18'] call ace_common_fnc_hasItem";
						statement="[_player, _target, 'ACE_rope18'] call ace_towing_fnc_startTow";
						exceptions[]=
						{
							"isNotOnLadder",
							"isNotSwimming"
						};
					};
					class ace_towing_startTow27
					{
						displayName="$STR_ace_towing_start27";
						condition="([_player, _target] call ace_towing_fnc_canStartTow) && [_player, 'ACE_rope27'] call ace_common_fnc_hasItem";
						statement="[_player, _target, 'ACE_rope27'] call ace_towing_fnc_startTow";
						exceptions[]=
						{
							"isNotOnLadder",
							"isNotSwimming"
						};
					};
					class ace_towing_startTow36
					{
						displayName="$STR_ace_towing_start36";
						condition="([_player, _target] call ace_towing_fnc_canStartTow) && [_player, 'ACE_rope36'] call ace_common_fnc_hasItem";
						statement="[_player, _target, 'ACE_rope36'] call ace_towing_fnc_startTow";
						exceptions[]=
						{
							"isNotOnLadder",
							"isNotSwimming"
						};
					};
				};
			};
		};
	};
	class ThingX;
	class ace_towing_hook: ThingX
	{
		displayName="hook";
		scope=1;
		scopeCurator=1;
		model="\a3\Structures_F_Orange\VR\Helpers\Sign_sphere10cm_Geometry_F.p3d";
		destrType="DestructNo";
		class ACE_Actions
		{
			class ACE_MainActions
			{
				displayName="$STR_ace_towing_detach";
				condition="true";
				statement="private _parent = _target getVariable [""ace_towing_parent"", objNull]; private _child = _target getVariable [""ace_towing_child"", objNull]; [_player, _parent, _child] call ace_towing_fnc_detach";
				distance=2;
			};
		};
	};
};
