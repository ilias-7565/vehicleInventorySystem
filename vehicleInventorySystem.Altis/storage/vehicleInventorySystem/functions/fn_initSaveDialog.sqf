_tmp = uiNamespace getVariable "vehicleToSave";
_veh = typeOf(_tmp);
_img = getText (configFile >> "CfgVehicles" >> _veh >> "editorPreview");

sleep 0.1;

_combo = (findDisplay 8001) displayCtrl 7002;
_imgContainer = (findDisplay 8001) displayCtrl 7002;

_imgContainer ctrlSetText _img;