params["_container"];

_fullInventory = [];

{
	//===== MAGAZINES
	//Array of [classname, [empty]]
	_fullInventory pushback ["magazine", _x, []];
} forEach magazineCargo _container;

{
	//===== ITEMS
	//Array of [classname, [empty]]
	private _tmpContents = [];
	private _tmpContainer = _x;
	
	//Skip Vests, Uniforms and Backpacks because they're containers. They're handled in a seperate loop below
	if(!(_tmpContainer isKindOf ["Vest_Camo_Base", configFile >> "CfgWeapons"]) AND !(_tmpContainer isKindOf ["Vest_noCamo_Base", configFile >> "CfgWeapons"]) AND !(_tmpContainer isKindOf ["Uniform_Base", configFile >> "CfgWeapons"]) AND!(_tmpContainer isKindOf ["ReammoBox", configFile >> "CfgVehicles"])) then
	{
		_fullInventory pushback ["item",_x, _tmpContents];
	};

} forEach itemCargo _container;

{
	//===== WEAPONS
	//Array of [weapon classname, [accessories]]
	private _wpn = _x select 0;
	_x deleteAt 0;
	_fullInventory pushback ["weapon", _wpn, _x];
} forEach weaponsItemsCargo _container;

{
	//===== UNIFORMS, VESTS AND BACKPACKS
	_tmpContainer = _x select 1;

	private _tmpContents = [];
	
	//MAGAZINES IN CONTAINER
	_tmpContents append magazineCargo _tmpContainer;
	
	//ITEMS IN CONTAINER
	_tmpContents append itemCargo _tmpContainer;
	
	private _tmpType = "";
	
	//Denote what kind of thing each item in the container is. This helps during loadFullInventory
	if(_x select 0 isKindOf ["Vest_Camo_Base", configFile >> "CfgWeapons"]) then {_tmpType = "vest";};
	if(_x select 0 isKindOf ["Vest_noCamo_Base", configFile >> "CfgWeapons"]) then {_tmpType = "vest";};
	if(_x select 0 isKindOf ["Uniform_Base", configFile >> "CfgWeapons"]) then {_tmpType = "uniform";};
	if(_x select 0 isKindOf ["ReammoBox", configFile >> "CfgVehicles"]) then {_tmpType = "backpack";};
	
	_fullInventory append [[_tmpType, _x select 0, _tmpContents]];
	
} forEach everyContainer _container;

_fullInventory;

