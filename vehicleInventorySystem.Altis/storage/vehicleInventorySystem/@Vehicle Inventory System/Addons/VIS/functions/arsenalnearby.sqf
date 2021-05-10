params ["_unit", ["_radius", -1]];

if(_radius == -1) then
{
	if(_unit isKindOf "Car") then {_radius = 30};
	if(_unit isKindOf "Tank") then {_radius = 50};
	if(_unit isKindOf "Air") then {_radius = 200};
	if(_unit isKindOf "Ship") then {_radius = 300};
};

if(abs(speed _unit) > 1) exitWith {false};

_return=false;
_aceArsenal = [];

{
	//See if anything nearby is a BIS arsenal
	if(!isNil(_x getVariable "bis_fnc_arsenal_condition")) exitWith {_return=true;};
	
	//See if anything nearby is an ACE Arsenal
	_aceArsenal = _x getVariable ["ace_interact_menu_actions",[]];
	if((((_aceArsenal select 0) select 0) select 1) == "Arsenal") exitWith{_return=true;};
	
}forEach (_unit nearObjects _radius);

_return