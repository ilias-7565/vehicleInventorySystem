_array = profileNamespace getVariable ["savedInventoryLoadouts",[]];
_tmp = uiNamespace getVariable "vehicleToLoad";
_veh = typeOf(_tmp);
_img = getText (configFile >> "CfgVehicles" >> _veh >> "editorPreview");

sleep 0.1;

_combo = (findDisplay 8000) displayCtrl 7000;
_imgContainer = (findDisplay 8000) displayCtrl 7002;

_imgContainer ctrlSetText _img;

lbClear _combo;
{
	_index = _combo lbAdd (_x select 0);
	_combo lbSetData [_index, str(_x select 1)];
} forEach _array;