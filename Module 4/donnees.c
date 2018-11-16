/* Module 4 */

#include <stdlib.h>
#include <stdio.h>
#include "menu.h"
#include "donnees.h"
#include "action1.h"

int data()
{
	FILE *fichier = NULL;

	fichier  = fopen ("exemple.csv", "r"); //commande qui permet d'ouvrir et de lire le fichier.
	if (fichier != NULL)
	{
		int i = 0;
	unsigned long t;
	long b;

	while (fscanf(fichier, "%lu;%ld\n", &t, &b) > 0) //tant que scanf n'a pas atteint la fin du fichier 
	{
		tableau[i].temps = t; //temps dans une colonne
		tableau[i].battement = b; //battement dans une autre colonne
		i++;
	}
	tableautaille = i; //on initialise le nombre de case du tableau statique 
	fclose(fichier);

	}
	else
	{
		printf("ERROR\n");
	}	
	
	return 0;
}