
class loadDialog
{
	idd=8000;
	class ControlsBackground
	{
	};
	class Controls
	{
		class Background
		{
			type=0;
			idc=-1;
			x="safeZoneX + safeZoneW * 0.31666667";
			y="safeZoneY + safeZoneH * 0.33240741";
			w="safeZoneW * 0.375";
			h="safeZoneH * 0.39814815";
			style=0;
			text="";
			colorBackground[]={0.2,0.2,0.2,1};
			colorText[]={0.95289999,0.46669999,0.87059999,1};
			font="PuristaMedium";
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		};
		class Combo
		{
			type=4;
			idc=7000;
			x="safeZoneX + safeZoneW * 0.32708334";
			y="safeZoneY + safeZoneH * 0.61851852";
			w="safeZoneW * 0.16822917";
			h="safeZoneH * 0.03148149";
			style=16;
			arrowEmpty="\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_ca.paa";
			arrowFull="\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_active_ca.paa";
			colorBackground[]={0.40000001,0.40000001,0.40000001,1};
			colorDisabled[]={0.2,0.2,0.2,1};
			colorSelect[]={0,0.77249998,0,1};
			colorSelectBackground[]={0.40000001,0.40000001,0.40000001,1};
			colorText[]={0,1,0,1};
			font="PuristaMedium";
			maxHistoryDelay=0;
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			soundCollapse[]=
			{
				"\A3\ui_f\data\sound\RscCombo\soundCollapse",
				0.1,
				1
			};
			soundExpand[]=
			{
				"\A3\ui_f\data\sound\RscCombo\soundExpand",
				0.1,
				1
			};
			soundSelect[]=
			{
				"\A3\ui_f\data\sound\RscCombo\soundSelect",
				0.1,
				1
			};
			wholeHeight=0.30000001;
			onLBSelChanged='[] call ("VIS_fnc_loadListChange" call cfgF)';
			onSetFocus='[] spawn ("VIS_fnc_initLoadDialog" call cfgF)';
			class ComboScrollBar
			{
				color[]={1,1,1,1};
				thumb="\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull="\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty="\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border="\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
			};
		};
		class Load
		{
			type=1;
			idc=1;
			x="safeZoneX + safeZoneW * 0.325";
			y="safeZoneY + safeZoneH * 0.67222223";
			w="safeZoneW * 0.05052084";
			h="safeZoneH * 0.03796297";
			style="0+2";
			text="Load";
			borderSize=0;
			colorBackground[]={0.40000001,0.40000001,0.40000001,1};
			colorBackgroundActive[]={0.30199999,0.30199999,0.30199999,1};
			colorBackgroundDisabled[]={0.2,0.2,0.2,1};
			colorBorder[]={0,0,0,0};
			colorDisabled[]={0.2,0.2,0.2,1};
			colorFocused[]={0.2,0.2,0.2,1};
			colorShadow[]={0,0,0,0};
			colorText[]={0,1,0,1};
			font="PuristaMedium";
			offsetPressedX=0.0099999998;
			offsetPressedY=0.0099999998;
			offsetX=0.0099999998;
			offsetY=0.0099999998;
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			soundClick[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundClick",
				0.090000004,
				1
			};
			soundEnter[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundEnter",
				0.090000004,
				1
			};
			soundEscape[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundEscape",
				0.090000004,
				1
			};
			soundPush[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundPush",
				0.090000004,
				1
			};
			onMouseButtonUp='[] call ("VIS_fnc_loadDialogClose" call cfgF)';
			shadow=0;
			tooltip="Move The Selected Loadout Into The Vehicle";
		};
		class TitleText
		{
			type=0;
			idc=-1;
			x="safeZoneX + safeZoneW * 0.31666667";
			y="safeZoneY + safeZoneH * 0.32777778";
			w="safeZoneW * 0.2078125";
			h="safeZoneH * 0.03796297";
			style="0+512";
			text="Select Vehicle Equipment Loadout";
			colorBackground[]={0.61570001,0.22750001,0.3098,0};
			colorText[]={0,1,0,1};
			font="PuristaSemiBold";
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.3)";
		};
		class List
		{
			type=5;
			idc=7001;
			x="safeZoneX + safeZoneW * 0.50878907";
			y="safeZoneY + safeZoneH * 0.34722223";
			w="safeZoneW * 0.16796875";
			h="safeZoneH * 0.35243056";
			style=16;
			colorBackground[]={0.102,0.102,0.102,1};
			colorDisabled[]={1,1,1,1};
			colorSelect[]={0.80000001,0.90200001,1,1};
			colorText[]={0.69800001,0.74510002,0.87840003,1};
			font="PuristaMedium";
			maxHistoryDelay=0;
			rowHeight=0;
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			soundSelect[]=
			{
				"\A3\ui_f\data\sound\RscListbox\soundSelect",
				0.090000004,
				1
			};
			class ListScrollBar
			{
				color[]={1,1,1,1};
				thumb="\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull="\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty="\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border="\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
			};
		};
		class Image
		{
			type=0;
			idc=7002;
			x="safeZoneX + safeZoneW * 0.32324219";
			y="safeZoneY + safeZoneH * 0.37326389";
			w="safeZoneW * 0.17773438";
			h="safeZoneH * 0.13194445";
			style="0+48+2048";
			text="";
			colorBackground[]={0.65100002,0.4549,0.0077999998,0};
			colorText[]={1,1,1,1};
			font="PuristaMedium";
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		};
		class Payload
		{
			type=8;
			idc=7003;
			x="safeZoneX + safeZoneW * 0.328125";
			y="safeZoneY + safeZoneH * 0.55833334";
			w="safeZoneW * 0.17239584";
			h="safeZoneH * 0.01574075";
			style=0;
			colorBar[]={0.70200002,0.70200002,0.30199999,1};
			colorFrame[]={0,0,0,1};
			texture="#(argb,8,8,3)color(1,1,1,1)";
			tooltip="This illustrates how much of the vehicle's space the loadout will occupy";
		};
		class loadoutMass
		{
			type=0;
			idc=7004;
			x="safeZoneX + safeZoneW * 0.3296875";
			y="safeZoneY + safeZoneH * 0.575";
			w="safeZoneW * 0.0578125";
			h="safeZoneH * 0.01574075";
			style=0;
			text="";
			colorBackground[]={0.22750001,0.97250003,0.066699997,0};
			colorText[]={0,1,0,1};
			font="PuristaMedium";
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		};
		class Clear
		{
			type=1;
			idc=-1;
			x="safeZoneX + safeZoneW * 0.35449219";
			y="safeZoneY + safeZoneH * 0.52430556";
			w="safeZoneW * 0.11914063";
			h="safeZoneH * 0.02083334";
			style="0+2";
			text="Clear";
			borderSize=0;
			colorBackground[]={0.40000001,0.40000001,0.40000001,1};
			colorBackgroundActive[]={0.30199999,0.30199999,0.30199999,1};
			colorBackgroundDisabled[]={0.2,0.2,0.2,1};
			colorBorder[]={0,0,0,0};
			colorDisabled[]={0.2,0.2,0.2,1};
			colorFocused[]={0.2,0.2,0.2,1};
			colorShadow[]={0,0,0,0};
			colorText[]={0,1,0,1};
			font="PuristaMedium";
			offsetPressedX=0.0099999998;
			offsetPressedY=0.0099999998;
			offsetX=0.0099999998;
			offsetY=0.0099999998;
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			soundClick[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundClick",
				0.090000004,
				1
			};
			soundEnter[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundEnter",
				0.090000004,
				1
			};
			soundEscape[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundEscape",
				0.090000004,
				1
			};
			soundPush[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundPush",
				0.090000004,
				1
			};
			onMouseButtonDown="_container= uiNameSpace getVariable 'vehicleToLoad';clearItemCargoGlobal _container;clearMagazineCargoGlobal _container;clearWeaponCargoGlobal _container;clearBackpackCargoGlobal _container;systemChat 'Inventory Cleared';";
			shadow=0;
			tooltip="Clear Current Vehicle Inventory";
		};
		class Edit
		{
			type=1;
			idc=2;
			x="safeZoneX + safeZoneW * 0.38333334";
			y="safeZoneY + safeZoneH * 0.67222223";
			w="safeZoneW * 0.06041667";
			h="safeZoneH * 0.03796297";
			style="0+2";
			text="Edit Loadouts";
			borderSize=0;
			colorBackground[]={0.40000001,0.40000001,0.40000001,1};
			colorBackgroundActive[]={0.30199999,0.30199999,0.30199999,1};
			colorBackgroundDisabled[]={0.2,0.2,0.2,1};
			colorBorder[]={0,0,0,0};
			colorDisabled[]={0.2,0.2,0.2,1};
			colorFocused[]={0.2,0.2,0.2,1};
			colorShadow[]={0,0,0,0};
			colorText[]={0,1,0,1};
			font="PuristaMedium";
			offsetPressedX=0.0099999998;
			offsetPressedY=0.0099999998;
			offsetX=0.0099999998;
			offsetY=0.0099999998;
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			soundClick[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundClick",
				0.090000004,
				1
			};
			soundEnter[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundEnter",
				0.090000004,
				1
			};
			soundEscape[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundEscape",
				0.090000004,
				1
			};
			soundPush[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundPush",
				0.090000004,
				1
			};
			onMouseButtonUp='[] spawn ("VIS_fnc_initEditDialog" call cfgF)';
			shadow=0;
			tooltip="Edit saved loadouts";
		};
		class Cancel
		{
			type=1;
			idc=2;
			x="safeZoneX + safeZoneW * 0.45364584";
			y="safeZoneY + safeZoneH * 0.67222223";
			w="safeZoneW * 0.05052084";
			h="safeZoneH * 0.03796297";
			style="0+2";
			text="Cancel";
			borderSize=0;
			colorBackground[]={0.40000001,0.40000001,0.40000001,1};
			colorBackgroundActive[]={0.30199999,0.30199999,0.30199999,1};
			colorBackgroundDisabled[]={0.2,0.2,0.2,1};
			colorBorder[]={0,0,0,0};
			colorDisabled[]={0.2,0.2,0.2,1};
			colorFocused[]={0.2,0.2,0.2,1};
			colorShadow[]={0,0,0,0};
			colorText[]={0,1,0,1};
			font="PuristaMedium";
			offsetPressedX=0.0099999998;
			offsetPressedY=0.0099999998;
			offsetX=0.0099999998;
			offsetY=0.0099999998;
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			soundClick[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundClick",
				0.090000004,
				1
			};
			soundEnter[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundEnter",
				0.090000004,
				1
			};
			soundEscape[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundEscape",
				0.090000004,
				1
			};
			soundPush[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundPush",
				0.090000004,
				1
			};
			shadow=0;
		};
	};
};
class saveDialog
{
	idd=8001;
	class ControlsBackground
	{
	};
	class Controls
	{
		class Background
		{
			type=0;
			idc=-1;
			x="safeZoneX + safeZoneW * 0.40416667";
			y="safeZoneY + safeZoneH * 0.36666667";
			w="safeZoneW * 0.18958334";
			h="safeZoneH * 0.32685186";
			style=0;
			text="";
			colorBackground[]={0.2,0.2,0.2,1};
			colorText[]={0.95289999,0.46669999,0.87059999,1};
			font="PuristaMedium";
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		};
		class Save
		{
			type=1;
			idc=1;
			x="safeZoneX + safeZoneW * 0.41302084";
			y="safeZoneY + safeZoneH * 0.63518519";
			w="safeZoneW * 0.04114584";
			h="safeZoneH * 0.03796297";
			style="0+2";
			text="Save";
			borderSize=0;
			colorBackground[]={0.40000001,0.40000001,0.40000001,1};
			colorBackgroundActive[]={0,0,0,0};
			colorBackgroundDisabled[]={0.2,0.2,0.2,1};
			colorBorder[]={0,0,0,0};
			colorDisabled[]={0.2,0.2,0.2,1};
			colorFocused[]={0.2,0.2,0.2,1};
			colorShadow[]={0,0,0,0};
			colorText[]={0,1,0,1};
			font="PuristaMedium";
			offsetPressedX=0.0099999998;
			offsetPressedY=0.0099999998;
			offsetX=0.0099999998;
			offsetY=0.0099999998;
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			soundClick[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundClick",
				0.090000004,
				1
			};
			soundEnter[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundEnter",
				0.090000004,
				1
			};
			soundEscape[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundEscape",
				0.090000004,
				1
			};
			soundPush[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundPush",
				0.090000004,
				1
			};
			onMouseButtonUp='[] call ("VIS_fnc_saveDialogClose" call cfgF)';
			shadow=0;
			tooltip="Save the current vehicle loadout to your profile";
		};
		class TitleText
		{
			type=0;
			idc=-1;
			x="safeZoneX + safeZoneW * 0.40429688";
			y="safeZoneY + safeZoneH * 0.36284723";
			w="safeZoneW * 0.20800782";
			h="safeZoneH * 0.03819445";
			style="0+512";
			text="Save Vehicle Equipment Loadout";
			colorBackground[]={0.61570001,0.22750001,0.3098,0};
			colorText[]={0,1,0,1};
			font="PuristaSemiBold";
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.3)";
		};
		class Image
		{
			type=0;
			idc=7002;
			x="safeZoneX + safeZoneW * 0.41113282";
			y="safeZoneY + safeZoneH * 0.41666667";
			w="safeZoneW * 0.17773438";
			h="safeZoneH * 0.13194445";
			style="0+48+2048";
			text="";
			colorBackground[]={0.65100002,0.4549,0.0077999998,0};
			colorText[]={1,1,1,1};
			font="PuristaMedium";
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			onLoad='[] spawn ("VIS_fnc_initSaveDialog" call cfgF)';
		};
		class TextIn
		{
			type=2;
			idc=7100;
			x="safeZoneX + safeZoneW * 0.41113282";
			y="safeZoneY + safeZoneH * 0.57291667";
			w="safeZoneW * 0.17773438";
			h="safeZoneH * 0.02777778";
			style=0;
			text="";
			autocomplete="";
			colorBackground[]={0.40000001,0.40000001,0.40000001,1};
			colorDisabled[]={0.2,0.2,0.2,1};
			colorSelection[]={1,0,0,1};
			colorText[]={0,1,0,1};
			font="PuristaMedium";
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		};
		class Edit
		{
			type=1;
			idc=2;
			x="safeZoneX + safeZoneW * 0.46145834";
			y="safeZoneY + safeZoneH * 0.63518519";
			w="safeZoneW * 0.0703125";
			h="safeZoneH * 0.03796297";
			style="0+2";
			text="Edit Loadouts";
			borderSize=0;
			colorBackground[]={0.40000001,0.40000001,0.40000001,1};
			colorBackgroundActive[]={0,0,0,0};
			colorBackgroundDisabled[]={0.2,0.2,0.2,1};
			colorBorder[]={0,0,0,0};
			colorDisabled[]={0.2,0.2,0.2,1};
			colorFocused[]={0.2,0.2,0.2,1};
			colorShadow[]={0,0,0,0};
			colorText[]={0,1,0,1};
			font="PuristaMedium";
			offsetPressedX=0.0099999998;
			offsetPressedY=0.0099999998;
			offsetX=0.0099999998;
			offsetY=0.0099999998;
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			soundClick[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundClick",
				0.090000004,
				1
			};
			soundEnter[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundEnter",
				0.090000004,
				1
			};
			soundEscape[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundEscape",
				0.090000004,
				1
			};
			soundPush[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundPush",
				0.090000004,
				1
			};
			onMouseButtonUp='[] spawn ("VIS_fnc_initEditDialog" call cfgF)';
			shadow=0;
		};
		class Cancel
		{
			type=1;
			idc=2;
			x="safeZoneX + safeZoneW * 0.54166667";
			y="safeZoneY + safeZoneH * 0.63518519";
			w="safeZoneW * 0.040625";
			h="safeZoneH * 0.03796297";
			style="0+2";
			text="Cancel";
			borderSize=0;
			colorBackground[]={0.40000001,0.40000001,0.40000001,1};
			colorBackgroundActive[]={0,0,0,0};
			colorBackgroundDisabled[]={0.2,0.2,0.2,1};
			colorBorder[]={0,0,0,0};
			colorDisabled[]={0.2,0.2,0.2,1};
			colorFocused[]={0.2,0.2,0.2,1};
			colorShadow[]={0,0,0,0};
			colorText[]={0,1,0,1};
			font="PuristaMedium";
			offsetPressedX=0.0099999998;
			offsetPressedY=0.0099999998;
			offsetX=0.0099999998;
			offsetY=0.0099999998;
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			soundClick[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundClick",
				0.090000004,
				1
			};
			soundEnter[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundEnter",
				0.090000004,
				1
			};
			soundEscape[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundEscape",
				0.090000004,
				1
			};
			soundPush[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundPush",
				0.090000004,
				1
			};
			shadow=0;
		};
	};
};
class editDialog
{
	idd=8002;
	class ControlsBackground
	{
	};
	class Controls
	{
		class Background
		{
			type=0;
			idc=-1;
			x="safeZoneX + safeZoneW * 0.31640625";
			y="safeZoneY + safeZoneH * 0.33159723";
			w="safeZoneW * 0.375";
			h="safeZoneH * 0.39756945";
			style=0;
			text="";
			colorBackground[]={0.2,0.2,0.2,1};
			colorText[]={0.95289999,0.46669999,0.87059999,1};
			font="PuristaMedium";
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		};
		class Combo
		{
			type=4;
			idc=7000;
			x="safeZoneX + safeZoneW * 0.32714844";
			y="safeZoneY + safeZoneH * 0.47222223";
			w="safeZoneW * 0.16796875";
			h="safeZoneH * 0.03125";
			style=16;
			arrowEmpty="\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_ca.paa";
			arrowFull="\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_active_ca.paa";
			colorBackground[]={0.40000001,0.40000001,0.40000001,1};
			colorDisabled[]={0.2,0.2,0.2,1};
			colorSelect[]={1,0,0,1};
			colorSelectBackground[]={0.40000001,0.40000001,0.40000001,1};
			colorText[]={1,0,0,1};
			font="PuristaMedium";
			maxHistoryDelay=0;
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			soundCollapse[]=
			{
				"\A3\ui_f\data\sound\RscCombo\soundCollapse",
				0.1,
				1
			};
			soundExpand[]=
			{
				"\A3\ui_f\data\sound\RscCombo\soundExpand",
				0.1,
				1
			};
			soundSelect[]=
			{
				"\A3\ui_f\data\sound\RscCombo\soundSelect",
				0.1,
				1
			};
			wholeHeight=0.30000001;
			onLBSelChanged='[] call ("VIS_fnc_editListChange" call cfgF)';
			class ComboScrollBar
			{
				color[]={1,1,1,1};
				thumb="\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull="\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty="\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border="\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
			};
		};
		class Delete
		{
			type=1;
			idc=1;
			x="safeZoneX + safeZoneW * 0.33496094";
			y="safeZoneY + safeZoneH * 0.671875";
			w="safeZoneW * 0.0703125";
			h="safeZoneH * 0.03819445";
			style="0+2";
			text="Delete Loadout";
			borderSize=0;
			colorBackground[]={0.40000001,0.40000001,0.40000001,1};
			colorBackgroundActive[]={0.30199999,0.30199999,0.30199999,1};
			colorBackgroundDisabled[]={0.2,0.2,0.2,1};
			colorBorder[]={0,0,0,0};
			colorDisabled[]={0.2,0.2,0.2,1};
			colorFocused[]={0.2,0.2,0.2,1};
			colorShadow[]={0,0,0,0};
			colorText[]={1,0,0,1};
			font="PuristaMedium";
			offsetPressedX=0.0099999998;
			offsetPressedY=0.0099999998;
			offsetX=0.0099999998;
			offsetY=0.0099999998;
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			soundClick[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundClick",
				0.090000004,
				1
			};
			soundEnter[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundEnter",
				0.090000004,
				1
			};
			soundEscape[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundEscape",
				0.090000004,
				1
			};
			soundPush[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundPush",
				0.090000004,
				1
			};
			onMouseButtonUp='[lbCurSel 7000] call ("VIS_fnc_editDialogClose" call cfgF)';
			shadow=0;
			tooltip="This will DELETE the selected loadout from your profile";
		};
		class TitleText
		{
			type=0;
			idc=-1;
			x="safeZoneX + safeZoneW * 0.31666667";
			y="safeZoneY + safeZoneH * 0.32777778";
			w="safeZoneW * 0.2078125";
			h="safeZoneH * 0.03796297";
			style="0+512";
			text="Select Loadout to Delete";
			colorBackground[]={0.61570001,0.22750001,0.3098,0};
			colorText[]={1,0,0,1};
			font="PuristaSemiBold";
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.3)";
		};
		class List
		{
			type=5;
			idc=7001;
			x="safeZoneX + safeZoneW * 0.50878907";
			y="safeZoneY + safeZoneH * 0.34722223";
			w="safeZoneW * 0.16796875";
			h="safeZoneH * 0.35243056";
			style=16;
			colorBackground[]={0.102,0.102,0.102,1};
			colorDisabled[]={1,1,1,1};
			colorSelect[]={0.80000001,0.90200001,1,1};
			colorText[]={0.69800001,0.74510002,0.87840003,1};
			font="PuristaMedium";
			maxHistoryDelay=0;
			rowHeight=0;
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			soundSelect[]=
			{
				"\A3\ui_f\data\sound\RscListbox\soundSelect",
				0.090000004,
				1
			};
			class ListScrollBar
			{
				color[]={1,1,1,1};
				thumb="\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull="\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty="\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border="\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
			};
		};
		class loadoutMass
		{
			type=0;
			idc=7004;
			x="safeZoneX + safeZoneW * 0.3296875";
			y="safeZoneY + safeZoneH * 0.575";
			w="safeZoneW * 0.0578125";
			h="safeZoneH * 0.01574075";
			style=0;
			text="";
			colorBackground[]={0.22750001,0.97250003,0.066699997,0};
			colorText[]={0,1,0,1};
			font="PuristaMedium";
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		};
		class Cancel
		{
			type=1;
			idc=1;
			x="safeZoneX + safeZoneW * 0.42285157";
			y="safeZoneY + safeZoneH * 0.671875";
			w="safeZoneW * 0.0703125";
			h="safeZoneH * 0.03819445";
			style="0+2";
			text="Cancel";
			borderSize=0;
			colorBackground[]={0.40000001,0.40000001,0.40000001,1};
			colorBackgroundActive[]={0.30199999,0.30199999,0.30199999,1};
			colorBackgroundDisabled[]={0.2,0.2,0.2,1};
			colorBorder[]={0,0,0,0};
			colorDisabled[]={0.2,0.2,0.2,1};
			colorFocused[]={0.2,0.2,0.2,1};
			colorShadow[]={0,0,0,0};
			colorText[]={1,0,0,1};
			font="PuristaMedium";
			offsetPressedX=0.0099999998;
			offsetPressedY=0.0099999998;
			offsetX=0.0099999998;
			offsetY=0.0099999998;
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			soundClick[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundClick",
				0.090000004,
				1
			};
			soundEnter[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundEnter",
				0.090000004,
				1
			};
			soundEscape[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundEscape",
				0.090000004,
				1
			};
			soundPush[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundPush",
				0.090000004,
				1
			};
			shadow=0;
		};
	};
};

// (require additional #include for/in description.ext) class Extended_Init_EventHandlers {		//req. #CBA
	/* [d 1] class CAManBase {
		class VIS_man {
			init='_this select 0 call ("VIS_fnc_init_vehicleInventorySystem" call cfgF)';
		};
	}; */

	/* [s] class air
	{
		class Fat_Lurch_VIS_air
		{
			init='(_this select 0) call ("VIS_fnc_addLoadAction" call cfgF);(_this select 0) call ("VIS_fnc_addSaveAction" call cfgF);';
		};
	};
	class car
	{
		class Fat_Lurch_VIS_car
		{
			init='(_this select 0) call ("VIS_fnc_addLoadAction" call cfgF);(_this select 0) call ("VIS_fnc_addSaveAction" call cfgF);';
		};
	};
	class tank
	{
		class Fat_Lurch_VIS_tank
		{
			init='(_this select 0) call ("VIS_fnc_addLoadAction" call cfgF);(_this select 0) call ("VIS_fnc_addSaveAction" call cfgF);';
		};
	};
	class ship
	{
		class Fat_Lurch_VIS_ship
		{
			init='(_this select 0) call ("VIS_fnc_addLoadAction" call cfgF);(_this select 0) call ("VIS_fnc_addSaveAction" call cfgF);';
		};
	}; */
// };
