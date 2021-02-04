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