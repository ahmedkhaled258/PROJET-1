/* Module 2 ; Troisième Partie */

#include <stdlib.h>
#include <stdio.h>

//code qui génère le param.h
int genCode(int choix) 
{
	FILE *outfile;

	outfile = fopen("param.h", "w+");
	if (outfile == NULL)
	{
		printf("Could not open file\n");
		return 0;
	}
	fprintf(outfile, "int j = %i;", choix); //commande qui permet d'écrire le choix choisi dans le param.h
	
	fclose(outfile);
	return 0;
}