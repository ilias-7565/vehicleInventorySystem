if (isServer) then { jipId_init = [[], {		//create a new Global JIP item, to save the jipId

if (isServer) then {

	setViewDistance 8000;		// is set as of AI relations knowsAbout checks for visibility system output . (Sensors-targeting range)
		// target visibility output is removed after 120s with no visibility .
		// default Self-Propelled AA 's radar's range is 8km .
	setObjectViewDistance 3600;		//maybe useless 

	["Initialize", [false]] call BIS_fnc_dynamicGroups;



}; if (hasInterface) then {

		setViewDistance 8000;		// ? -- local AI
		setObjectViewDistance 3600;		//def SP AA 's def missiles range is 4.5km
		setTerrainGrid 3.125;		// 6.25 . 50 -- remove grass (which doesn't block AI's visibility)

		["InitializePlayer", [player, false]] call BIS_fnc_dynamicGroups;

		// ## init_respawnLoadouts
		// (couldn't put in fn_init_respawnLoadouts.sqf, because Mission cfgFunctions doesn't allow it 1-level-inside the Mission folder)
		// these are gameplay situation unified, or wait for zeus to add any . (can be removed by Clear in Zeus's Loadouts)

		/* [ missionNamespace, [
			"",
			-1,		//limit of players per loadout
			-1		//availability limit -- players with the role
		] ] call BIS_fnc_addRespawnInventory; */

		[ west, [
			"sideB_b", -1, -1
		] ] call BIS_fnc_addRespawnInventory;

		/* [ east, [
			"sideO_b", -1, -1
		] ] call BIS_fnc_addRespawnInventory; */

		/* [ independent, [
			"sideI_b", -1, -1
		] ] call BIS_fnc_addRespawnInventory; */



	waitUntil { sleep 0.05; !isNull player and !isNull findDisplay 46 };



};

} ] remoteExec["spawn",0,true]; };