params ["_caller"];

//object addAction [title, script, arguments, priority, showWindow, hideOnUse, shortcut, condition, radius, unconscious, selection, memoryPoint]

//object			title				script																													arg	pri	show	hide	shrtct	cond
//_caller addAction ["Load Inventory", {params ["_target", "_caller", "_actionId", "_arguments"]; uiNameSpace setVariable["vehicleToLoad", _target]; createDialog "loadDialog";}, nil, -100, false, false, "", "true", 10, false];
_caller addAction ["Load Inventory", {params ["_target", "_caller", "_actionId", "_arguments"]; uiNameSpace setVariable["vehicleToLoad", _target]; createDialog "loadDialog";}, nil, -100, false, false, "", "[_originalTarget] call fatLurch_fnc_ArsenalNearby", 10, false];

//TODO
//_caller addAction ["Save Inventory", script, arguments, priority, showWindow, hideOnUse, shortcut, condition, radius, unconscious, selection, memoryPoint];