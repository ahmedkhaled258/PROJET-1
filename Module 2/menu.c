/* Module 2 ; Troisième Partie */

#include <stdio.h>
#include <stdlib.h>

//code qui demande à l'utilisateur son choix
int menu()
{
	printf("=== Choisissez l'affichage du coeur LEDs ===\n\n");
	printf("Vous avez le choix entre différents affichages.");
	printf("Entrez le nombre correspondant pour le sélectionner:\n");
	printf("(1) Une LED sur deux s'allume\n");
	printf("(2) Une LED sur trois\n");
	printf("(3) OneByOne\n");
	printf("(4) Blink\n");
	printf("(5) Double Chenille\n");
	printf("(6) En fonction du <3\n");

	int choix;
	scanf("%i", &choix);
	return choix;
}