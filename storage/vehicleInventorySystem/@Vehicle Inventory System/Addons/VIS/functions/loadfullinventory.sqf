params["_container", ["_input", []]];

diag_log format["### VIS Debug - Client %1 called loadFullInventory. _input: %2", clientOwner, _input];

if (count(_input) == 0) exitWith {hint "Load Inventory Failed: No valid input";};

//===== CLEAR EXISTING CONTENTS
clearItemCargoGlobal _container;
clearMagazineCargoGlobal _container;
clearWeaponCargoGlobal _container;
clearBackpackCargoGlobal _container;

//===== INIT VARIABLES
_containerIndex = 0;


//===== ITERATE THROUGH INPUT ARRAY OF ITEMS
{
	
	_index = _x;
	
	//===== ITEMS
	if(toLower(_index select 0) == "item") then
	{
		_container addItemCargoGlobal [_index select 1, 1];
	};
	
	//===== MAGAZINES
	if(toLower(_index select 0) == "magazine") then
	{
		_container addMagazineCargoGlobal [_index select 1, 1];
	};
		
	//===== BACKPACKS
	if(toLower(_index select 0) == "backpack") then
	{
		_container addBackpackCargoGlobal [_index select 1, 1];
		
		_backpack = (everyContainer _container select _containerIndex) select 1;
		
		{
			_backpack addItemCargoGlobal [_x, 1];	//Load Items AND Magazines
		}forEach (_index select 2);	//Load each item in the container
		
		_containerIndex = _containerIndex +1;
		
	};
	
	//===== VESTS
	if(toLower(_index select 0) == "vest") then
	{
		_container addItemCargoGlobal [_index select 1, 1];
		
		_vest = (everyContainer _container select _containerIndex) select 1;
		
		{
			_vest addItemCargoGlobal [_x, 1];	//Load Items AND Magazines
		}forEach (_index select 2);	//Load each item in the container
		
		_containerIndex = _containerIndex +1;
		
	};
	
	//===== WEAPONS
	if(toLower(_index select 0) == "weapon") then
	{
		_weap = _index select 1;		//Weapon
		_acc = _index select 2;		//Weapon Accessories
		_priAmmo = _acc select 3;		//Primary Ammo 
		_secAmmo = _acc select 4;	//Secondary ammo (e.g. M433 for the M203
		
		//container addWeaponWithAttachmentsCargoGlobal [[weapon, muzzle, flashlight, optics, [primaryMuzzleMagazine, ammoCount], [secondaryMuzzleMagazine, ammoCount], bipod], weaponsCount]		
		_container addWeaponWithAttachmentsCargoGlobal [[_weap, _acc select 0, _acc select 1, _acc select 2, _priAmmo, _secAmmo, _acc select 5], 1];
	};
	
}forEach _input;

systemChat "Inventory Loaded Into Vehicle";

