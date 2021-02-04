
if (isNil "cfgF") then{
	cfgF = {
		if (isNil _this) then{
			_v = toArray _this;
			_v deleteRange [0,_this find "_fnc_"];
			_v = "Mission" + toString _v;
			missionNamespace getVariable [_v, {systemChat "no script file, parameters: " + str _this}]
		}else{
			missionNamespace getVariable [_this, {systemChat "no script file, parameters: " + str _this}]
		}
	};
};

[]call ("VIS_fnc_init_vehicleInventorySystem" call cfgF);
