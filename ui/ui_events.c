// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: test_lvgl

#include "ui.h"
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <pthread.h>

#define INFORMATIONS "informations"
#define POSITION "position"
#define SCORE "score"

void quitProgram(lv_event_t *e)
{
	exit(0);
}

/*void startGame(lv_event_t *e)
{
/*	int info;
	unlink(INFORMATIONS);
	if (mkfifo(INFORMATIONS, 0644) == -1)
	{
		perror("Impossible creer fifos");
		exit(2);
	}
	info = open(INFORMATIONS,O_WRONLY|O_NONBLOCK);
	printf("%i",info);
	strcat(nbPlayersString,gameName);
	write(info,nbPlayersString, 10);
	close(info);
	printf("coucou");
}*/
