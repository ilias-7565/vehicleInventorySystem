// on player

/* [1] _caller addAction ["Load Inventory", {
	params ["_target", "_caller", "_actionId", "_arguments"];
	uiNameSpace setVariable["vehicleToLoad", cursorObject];
	createDialog "loadDialog";
}, nil, -100, false, false, "", ' [cursorObject] call ("VIS_fnc_ArsenalNearby" call cfgF) ', 10, false];

_caller addAction ["Save Inventory", {
	params ["_target", "_caller", "_actionId", "_arguments"];
	uiNameSpace setVariable["vehicleToSave", cursorObject]; createDialog "saveDialog";
}, nil, -100, false, false, "", ' [cursorObject] call ("VIS_fnc_ArsenalNearby" call cfgF) ', 10, false]; */

//### t (use #en 's f)

g_VIS = [true,[0,0]];

[] spawn{ _v_sc = objNull; while {sleep 0.1;g_VIS select 0} do{
	_v = cursorObject;
	if !(_v isEqualTo _v_sc) then{
		
		//not delaying rendering/Simulation (Scheduler)

		_g = g_VIS select 1;
		{ _v_sc removeAction _x } forEach _g;
		_v_sc = _v;

		g_VIS set [1,[
				
			_v_sc addAction ["Load Inventory", {
				params ["_target", "_caller", "_actionId", "_arguments"];
				uiNameSpace setVariable["vehicleToLoad", _target];
				createDialog "loadDialog";
			}, nil, -100, false, false, "", ' [_originalTarget] call ("VIS_fnc_ArsenalNearby" call cfgF) ', 10, false]

			, _v_sc addAction ["Save Inventory", {
				params ["_target", "_caller", "_actionId", "_arguments"];
				uiNameSpace setVariable["vehicleToSave", _target]; createDialog "saveDialog";
			}, nil, -100, false, false, "", ' [_originalTarget] call ("VIS_fnc_ArsenalNearby" call cfgF) ', 10, false]

		]];
	};
}; };
