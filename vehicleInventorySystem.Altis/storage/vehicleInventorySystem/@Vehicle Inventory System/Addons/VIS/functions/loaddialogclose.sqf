//Retrieve loadout array from the dialog
_index = lbCurSel 7000;

if(_index == -1) exitWith {};

_loadout = parseSimpleArray(lbData [7000, _index]);
_veh = uiNamespace getVariable ["vehicleToLoad", nil];

diag_log format["### VIS Debug - Client %1 called loadDialogClose. _input: %2", clientOwner, _loadout];

if(isNil "_veh") exitWith {hint "No vehicle selected. Exiting load inventory"};

[_veh, _loadout]call fatLurch_fnc_loadFullInventory;
