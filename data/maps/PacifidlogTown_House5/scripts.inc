PacifidlogTown_House5_MapScripts::
	.byte 0

PacifidlogTown_House5_EventScript_MirageIslandWatcher::
	lock
	faceplayer
	specialvar VAR_RESULT, IsMirageIslandPresent
	goto_if_eq VAR_RESULT, TRUE, PacifidlogTown_House5_EventScript_MirageIslandPresent
	msgbox PacifidlogTown_House5_Text_CantSeeMirageIslandToday, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House5_EventScript_MirageIslandPresent::
	msgbox PacifidlogTown_House5_Text_CanSeeMirageIslandToday, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House5_EventScript_Gentleman::
	msgbox PacifidlogTown_House5_Text_MirageIslandAppearDependingOnWeather, MSGBOX_NPC
	end

PacifidlogTown_House5_EventScript_OldMan::
	lock
	faceplayer
	checkitem ITEM_TM_PSYSHOCK
	compare VAR_RESULT, TRUE
	goto_if_eq PacifidlogTown_House5_EventScript_ReceivedPsyshock
	msgbox PacifidlogTown_House5_Text_ItsQuietHereHaveThis, MSGBOX_DEFAULT
	giveitem ITEM_TM_PSYSHOCK
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox PacifidlogTown_House5_Text_IFeelAtPeace, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House5_EventScript_ReceivedPsyshock::
	msgbox PacifidlogTown_House5_Text_IFeelAtPeace, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House5_Text_CantSeeMirageIslandToday:
	.string "I can't see MIRAGE ISLAND today…$"

PacifidlogTown_House5_Text_CanSeeMirageIslandToday:
	.string "Oh! Oh my!\n"
	.string "I can see MIRAGE ISLAND today!$"

PacifidlogTown_House5_Text_MirageIslandAppearDependingOnWeather:
	.string "MIRAGE ISLAND…\p"
	.string "It must become visible and invisible\n"
	.string "depending on the weather conditions\l"
	.string "that make mirages appear.\p"
	.string "Or is it really appearing and\n"
	.string "disappearing?$"

PacifidlogTown_House5_Text_ItsQuietHereHaveThis:
	.string "Hello, I'm Don.\p"
	.string " … … …\n"
	.string "Do you hear that?\p"
	.string "No?\n"
	.string "I don't either.\p"
	.string "I can't believe how quiet this\n"
	.string "little town is.\p"
	.string "I want to give you something.$"

PacifidlogTown_House5_Text_IFeelAtPeace:
	.string "I haven't felt this at peace in\n"
	.string "quite some time.\p"
	.string "This might be a nice place to spend\n"
	.string "my remaining days.\p"
	.string "I hope you'll continue to visit me.$"
