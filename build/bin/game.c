#ifndef TARGET
#define TARGET "inconnu"
#endif
#include <pthread.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/shm.h>
#include <unistd.h>
#include <inttypes.h>
#include <sys/ipc.h>

#define INFORMATIONS "informations"
#define POSITION "position"
#define SCORE "score"

char lecture[100];
int affichage;
int nbPlayers;
long nbPartie;
long nbPartieS;
char nameGame[];
char delim[] = ",";
int compteur;
int init_size;
char tmp[];
char nbPlayersChar;
char *lecture1[];
int shmid;
struct shmid_ds buf;

key_t cleSegment;
struct sigaction newact;

void callback(int signal, siginfo_t *si)
{
    switch (signal)
    {
    // signal lorsqu'un client se connecte
    case SIGUSR1:
        printf("Nouvelle connexion : le client %d vient d'arriver \n", si->si_pid);
        break;
    case SIGUSR2:
        if (shmctl(shmid, IPC_RMID, &buf) == -1)
        {
            perror("Suppression mémoire");
            exit(1);
        }
        exit(1);
        break;
    }
}

int extract(int from, int to, char *chaine, char *sousChaine)
{
    int i = 0, j = 0;
    // récupérer la longueur de la chaîne
    int length = strlen(chaine);

    if (from > length || from < 0)
    {
        printf("L'index 'from' est invalide\n");
        return 1;
    }
    if (to > length)
    {
        printf("L'index 'to' est invalide\n");
        return 1;
    }
    for (i = from, j = 0; i <= to; i++, j++)
    {
        sousChaine[j] = chaine[i];
    }
    return 0;
}

void getInfoPartie()
{
    if (strlen(lecture) != 0 && affichage == 1)
    {
        printf("Informations -> %s \n", lecture);
        if (extract(0, strlen(lecture) - 2, lecture, nameGame) != 0)
        {
            exit(1);
        }
        nbPlayersChar = lecture[strlen(lecture) - 1];

        printf("Le nom du jeu est %s \n", nameGame);
        printf("Le nombre de joueurs du jeu est %c\n", nbPlayersChar);
        affichage = 0;
    }
}

int main(void)
{
    int info;
    char *segmentEcriture;
    char pidServeur[15]; // pid récupéré dans la mémoire partagée
    pid_t pid;
    intmax_t xmax;
    char delimString[30];
    int ret;

    unlink(INFORMATIONS);
    if (mkfifo(INFORMATIONS, 0644) == -1)
    {
        printf("Impossible creer fifos");
        exit(2);
    }

    cleSegment = 2014;
    // clé du segment

    shmid = shmget(cleSegment, 100 * sizeof(char), 0666 | IPC_CREAT | IPC_EXCL);
    // stockage de l'identifiant du segment

    if (shmid == -1)
    {
        // vérification si la création du segment s'est bien déroulée
        perror("Création du segment échouée");
        exit(1);
    }
    else
    {
        printf("Bien crée");
    }

    // écriture du mot de passe et du PID
    segmentEcriture = shmat(shmid, NULL, 0);

    sprintf(segmentEcriture, "%d", getpid());
    strcat(segmentEcriture, "\n");

    // détachement du segment
    ret = shmdt(segmentEcriture);

    if (ret == -1)
    {
        perror("Erreur de détachement de la mémoire partagée - écriture \n");
        exit(-1);
    }

    // gestion des signaux
    newact.sa_flags = SA_SIGINFO;
    newact.sa_handler = callback;
    sigemptyset(&newact.sa_mask);
    sigaction(SIGUSR1, &newact, NULL);
    sigaction(SIGUSR2, &newact, NULL);

    info = open(INFORMATIONS, O_RDONLY | O_NONBLOCK);
    affichage = 1;

    while (1)
    {
        read(info, lecture, 50);
        getInfoPartie();
    }
    close(info);
}