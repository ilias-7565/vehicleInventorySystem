params["_index"];

if(_index == -1) exitWith {};

_array = profileNamespace getVariable ["savedInventoryLoadouts",[]];

_loadoutName = (_array select _index) select 0;

 _array deleteAt _index;
 
 profileNamespace setVariable ["savedInventoryLoadouts", _array];
 
 systemChat format ["Loadout %1 deleted", _loadoutName];