/* Module 4 */

#ifndef DONNEES_H
#define DONNEES_H

int data();

typedef struct donnees //structure qu'on appelle dans donnees.c
{
	unsigned long temps;
	long battement;
} donnees;


donnees tableau [20]; //initialisation du tableau
unsigned int tableautaille; //initialisation du nombre de case du tableau statique

#endif
