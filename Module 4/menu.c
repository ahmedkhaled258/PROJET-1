/* Module 4 */

#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "donnees.h"
#include "action1.h"

extern donnees tableau [20]; //permet d'utiliser le tableau dans le menu.c

int menu()
{
	printf("Que souhaitez-vous faire ?\n\n");

	printf("(1) Afficher les données dans l'ordre du fichier .csv\n");
	printf("(2) Afficher les battements en ordre croissant\n");
	printf("(3) Afficher les battements en ordre décroissant\n");
	printf("(4) Afficher le temps en ordre décroissant\n");
	printf("(5) Rechercher et afficher les données pour un temps particulier\n");
	printf("(6) Afficher la moyenne de pouls dans une plage de temps donnée\n");
	printf("(7) Afficher le nombre de lignes de données actuellement en mémoire\n");
	printf("(8) Rechercher et afficher les max/min de pouls (avec le temps associé)\n\n");

	printf("(0) Quitter l'application\n");

	int choix;
	int choix1;
	scanf("%i", &choix);

	switch(choix)
	{
		case 1:
		affiche();
		break;

		case 2:
		croissantB();
		break;

		case 3:
		decroissantB();
		break;

		case 4:
		decroissantT();
		break;

		case 5:
		recherche();
		break;

		case 6:
		moyenne();
		break;

		case 7:
		nmblignes();
		break;

		case 8:
		minmaxB();
		break;

		default:
		break;
	}

	return 0;
}