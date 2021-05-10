params ["_items"];

_subItems = [];
_mass = 0;
_subMass = 0;
_subClassname = "";
_sumMass = 0;

{
	_type = toLower(_x select 0);
	_classname = _x select 1;
	_subItems = _x select 2;

	if(_type == "magazine") then 
	{
		_mass =  getNumber (configfile >> "CfgMagazines" >> _classname >> "mass");
	};
	
	if(_type == "item") then 
	{
		_macro = getText(configfile >> "CfgWeapons" >> "H_HelmetB_light" >> "ItemInfo" >> "_generalMacro");	
		
		if(_macro == "headgearItem") then
		{
			_mass =  getNumber (configfile >> "CfgWeapons" >> _classname >> "itemInfo" >> "mass");
		}
		else
		{
			_mass =  getNumber (configfile >> "CfgWeapons" >> _classname >> "mass");
		};

	};
	
	if(_type == "backpack") then 
	{
		_mass =  getNumber (configfile >> "CfgVehicles" >> _classname >> "mass");
		//Loop through items IN backpack
		{
			//systemChat format["Item: %1", _x];
			_subClassname = _x;
			
			if(isNumber (configFile >> "CfgWeapons" >> _subClassname >> "mass")) then {_subMass = getNumber (configfile >> "CfgWeapons" >> _subClassname >> "mass");};
			if(isNumber (configFile >> "CfgWeapons" >> _subClassname >> "itemInfo" >>"mass")) then {_subMass = getNumber (configfile >> "CfgWeapons" >> _subClassname >> "itemInfo" >>"mass");};
			if(isNumber (configfile >> "CfgMagazines" >> _subClassname >> "mass")) then {_subMass = getNumber (configfile >> "CfgMagazines" >> _subClassname >> "mass");};
			
			_mass = _mass + _subMass;
			
		} forEach _subItems;
	};
	
	if(_type == "vest") then 
	{
		_mass =  getNumber (configfile >> "CfgWeapons" >> _classname >>  "itemInfo" >> "mass");
		//Loop through items IN backpack
		{
			//systemChat format["Item: %1", _x];
			_subClassname = _x;
			
			if(isNumber (configFile >> "CfgWeapons" >> _subClassname >> "mass")) then {_subMass = getNumber (configfile >> "CfgWeapons" >> _subClassname >> "mass");};
			if(isNumber (configFile >> "CfgWeapons" >> _subClassname >> "itemInfo" >>"mass")) then {_subMass = getNumber (configfile >> "CfgWeapons" >> _subClassname >> "itemInfo" >>"mass");};
			if(isNumber (configfile >> "CfgMagazines" >> _subClassname >> "mass")) then {_subMass = getNumber (configfile >> "CfgMagazines" >> _subClassname >> "mass");};
			
			_mass = _mass + _subMass;
			
		} forEach _subItems;
		
	};
	
	if(_type == "uniform") then 
	{
		_mass =  getNumber (configfile >> "CfgWeapons" >> _classname >>  "itemInfo" >> "mass");
		//Loop through items IN uniform
		{
			_subClassname = _x;
			
			if(isNumber (configFile >> "CfgWeapons" >> _subClassname >> "mass")) then {_subMass = getNumber (configfile >> "CfgWeapons" >> _subClassname >> "mass");};
			if(isNumber (configFile >> "CfgWeapons" >> _subClassname >> "itemInfo" >>"mass")) then {_subMass = getNumber (configfile >> "CfgWeapons" >> _subClassname >> "itemInfo" >>"mass");};
			if(isNumber (configfile >> "CfgMagazines" >> _subClassname >> "mass")) then {_subMass = getNumber (configfile >> "CfgMagazines" >> _subClassname >> "mass");};
			
			_mass = _mass + _subMass;
			
		} forEach _subItems;
	};
	
	if(_type == "weapon") then 
	{
		_mass =  getNumber (configfile >> "CfgWeapons" >> _classname >>  "weaponSlotsInfo" >> "mass");
		//Loop through items ON weapon //TODO
	};
	
	_sumMass = _sumMass + _mass;
}forEach _items;

_sumMass;