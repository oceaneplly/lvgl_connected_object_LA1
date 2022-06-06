// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: test_lvgl

#include "ui.h"

void quitProgram(lv_event_t * e)
{
	exit(0);
}

void startGame(lv_event_t * e)
{
	int status = system("game");
	printf(status,"%d statut partie");
}
