
_textControl = (findDisplay 8001) displayCtrl 7100;
_name = ctrlText _textControl;
_veh = uiNamespace getVariable["vehicleToSave", nil];

if(isNil "_veh") exitWith {hint "No vehicle selected. Exiting save inventory"};

if(_name == "") exitWith {systemChat "Please enter a valid inventory save name"};

_inventory = [_veh] call fatLurch_fnc_getFullInventory;

_currentLoadouts = profileNamespace getVariable ["savedInventoryLoadouts", nil];

_newLoadout = [_name, _inventory];


if(!isNil "_currentLoadouts") then
{
	_currentLoadouts pushback _newLoadout;
}
else 
{
	profileNamespace setVariable ["savedInventoryLoadouts", [_newLoadout]];
};

//systemChat format["loadout: %1", _newLoadout];

systemChat format["Loadout saved as %1", _name];