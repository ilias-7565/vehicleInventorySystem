/* exec is Local in Respawned player 's program .

	respawnMenu isn't closed on selectPlayer, 
	and fully processes even with selectPlayer after the death
*/

params ["_newUnit", "_oldUnit", "_respawnType", "_respawnDelay"];

waitUntil {sleep 0.1;!isPlayer _oldUnit};

_V = getAssignedCuratorLogic _oldUnit;
if (isNull _V) then{		//prevent adding the default scrap Zeus-Player Assigning Units . require #selectPlayer_en for supporting selectPlayer
	_g = [missionNameSpace getVariable ["cm_adm",objNull], getAssignedCuratorLogic _newUnit]; {
		waitUntil {sleep 0.1;!(_oldUnit in curatorEditableObjects _X)};
		_X addCuratorEditableObjects [[_oldUnit,_newUnit/*d JIP addCuratorEditableObjects*/],true];
	} foreach _g;
};
