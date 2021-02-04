# Vehicle Inventory System En

### Mission-folder storage init

Require : optionally cfgF ;

Mission-folder Compatible with : en, GOM Aircraft Loadout, Vehicle Appearance Manager (GUI) ;

description.ext
```

class CfgFunctions {
	class missionConfigFile {		// Tag-class . by default : file = "functions\" ; . description.ext doesn't support > 1 .
		tag = "Mission";		// in description.ext, doesn't work in subs of Tag-classes .

		#include "storage\vehicleInventorySystem\cfgFunctions.cpp"		// #vehicleInventorySystem

	};
};

// ## vehicleInventorySystem

#include "storage\vehicleInventorySystem\config.cpp"

```

### Pack into Addon/Mod

Optionally :

rename it ( [..].Altis ) to the Addon file name ;

and delete :
* mission.sqm ,
* description.ext ,
* onPlayerKilled.sqf ,
* onPlayerRespawn.sqf ,
* init.sqf ; ;

Process with any packer .

## Original version

Its an enhanced and Mission Folder compatible version of Vehicle Inventory System .

Differences
* Works for all objects with Inventory, disabled for on `isKindOf "Man"` .

https://steamcommunity.com/sharedfiles/filedetails/?id=2161671937&searchtext=vehicle+in+vehicle

https://forums.bohemia.net/forums/topic/229969-vehicle-inventory-system/

## Credits

Autors : https://steamcommunity.com/profiles/76561197977538474 , https://steamcommunity.com/id/Roqarr ;
