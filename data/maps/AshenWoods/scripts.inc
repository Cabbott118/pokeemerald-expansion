AshenWoods_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, AshenWoods_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, AshenWoods_OnTransition
	.byte 0

AshenWoods_OnResume::
	setstepcallback STEP_CB_ASH
	end

AshenWoods_OnTransition::
	setflag FLAG_LANDMARK_ASHEN_WOODS
	compare VAR_JAGGED_PASS_ASH_WEATHER, 1
	call_if_eq AshenWoods_EventScript_SetWeatherAsh
	end

AshenWoods_EventScript_SetWeatherAsh::
	setweather WEATHER_VOLCANIC_ASH
	doweather
	return
