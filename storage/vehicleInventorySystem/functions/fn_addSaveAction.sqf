params ["_caller"];

//object addAction [title, script, arguments, priority, showWindow, hideOnUse, shortcut, condition, radius, unconscious, selection, memoryPoint]

//object			title				script																													arg	pri	show	hide	shrtct	cond
//_caller addAction ["Load Inventory", {params ["_target", "_caller", "_actionId", "_arguments"]; uiNameSpace setVariable["vehicleToLoad", _target]; createDialog "loadDialog";}, nil, -100, false, false, "", "true", 10, false];
_caller addAction ["Save Inventory", {params ["_target", "_caller", "_actionId", "_arguments"]; uiNameSpace setVariable["vehicleToSave", _target]; createDialog "saveDialog";}, nil, -100, false, false, "", '[_originalTarget] call ("VIS_fnc_ArsenalNearby" call cfgF)', 10, false];

//TODO
//_caller addAction ["Save Inventory", script, arguments, priority, showWindow, hideOnUse, shortcut, condition, radius, unconscious, selection, memoryPoint];