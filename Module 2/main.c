/* Module 2 ; Troisième Partie */

#include <stdlib.h>
#include <stdio.h>
#include "menu.h"
#include "genCode.h"

//fonction principale
int main()
{
	int a;
	a = menu(); //appelle la fonction menu
	genCode(a); //appelle la fonction genCode
	return 0;
}