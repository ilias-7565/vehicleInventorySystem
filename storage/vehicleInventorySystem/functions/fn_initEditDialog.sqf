createDialog "editDialog";

_array = profileNamespace getVariable ["savedInventoryLoadouts",[]];

sleep 0.5;

_combo = (findDisplay 8002) displayCtrl 7000;

lbClear _combo;
{
	_index = _combo lbAdd (_x select 0);
	_combo lbSetData [_index, str(_x select 1)];
} forEach _array;