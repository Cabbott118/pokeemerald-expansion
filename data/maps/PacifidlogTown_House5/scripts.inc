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
	msgbox PacifidlogTown_House5_Text_InMemoryOfDon, MSGBOX_DEFAULT
	giveitem ITEM_TM_PSYSHOCK
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox PacifidlogTown_House5_Text_LegacyOfTheDeep, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House5_EventScript_ReceivedPsyshock::
	msgbox PacifidlogTown_House5_Text_LegacyOfTheDeep, MSGBOX_DEFAULT
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

PacifidlogTown_House5_Text_InMemoryOfDon:
	.string "Ahoy there! I'm Don, though some\n"
	.string "call me the Old Sea Dog.\p"
	.string " … … …\n"
	.string "Do you hear the whispers of the waves?\p"
	.string "No?\n"
	.string "You might if you listen closely.\p"
	.string "This tranquil haven reminds me of\n"
	.string "the serenity Mary and I found in\l"
	.string "our years together.\p"
	.string "I want to share a memento with you.$"

PacifidlogTown_House5_Text_LegacyOfTheDeep:
	.string "In the silence of this sea-kissed\n"
	.string "colony, I find solace deeper than\l"
	.string "the ocean's depths.\p"
	.string "Here, amidst the whispers of the\n"
	.string "tides, I feel the echoes of a life\l"
	.string "well-lived.\p"
	.string "May you cherish the memories we've\n"
	.string "shared, as you continue to visit\l"
	.string "this humble abode.$"

