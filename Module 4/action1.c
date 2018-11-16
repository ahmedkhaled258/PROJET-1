/* Module 4 */

#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"
#include "action1.h"
#define a 20
extern donnees tableau[20]; //commande permettant d'utiliser le tableau dans le code
extern unsigned int tableautaille; 

void affiche()
{
  int i;
  for (i=0; i<tableautaille;i++)//Cette boucle for permet d'afficher tout le tableau avec d'un côté les bpm et de l'autre le temps, tout ça ligne par ligne
  {
    printf(" %ld bpm | %lu millis \n",tableau[i].battement, tableau[i].temps);
  }
}

/*void croissantT(donnees tab[a])
{
  int t,i;
  int f=0;

  do// Tout ce qui est a l'interieur de cette boucle do while permet d'effectuer un tri à bulles
  {
    f = 0;
    for(i=0; i<a-1; i++)//Cette fonction permet de parcourir tout le tableau
    {
      if ( tab[i].temps > tab[i+1].temps )//Cette condition permet de verifier le bon ordre des données et ,si elles ne le sont pas, de les inverser d'emplacement
      {
        t = tab[i].temps;
        tab[i].temps = tab[i+1].temps;
        tab[i+1].temps = t;
        //On pratique le même changement d'emplacement pour la colonne des bpm pour que chaque ligne ne soit pas dépareillée
        t = tab[i].battement;
        tab[i].battement = tab[i+1].battement;
        tab[i+1].battement=t;

        f=1;
      }
    }
  }while(f);// Le tri se termine une fois que toutes les lignes sont dans l'ordre
  
  for (i=0; i<a;i++)//Cette boucle for permet d'afficher tout le tableau avec d'un côté les bpm et de l'autre le temps, tout ça ligne par ligne
  {
    printf("%ld bpm  %lu millis\n",tab[i].battement, tab[i].temps);
  } 

}// Les commentaires seront les mêmes pour toutes les fonctions utilisant ce tri, c'est-à-dire : croissantB, decroissantT et decroissantB */

void croissantB()
{
  int t,i;
  int f=0;

  do//tri à bulles, se referer plus haut pour des commentaires détaillés
  {
    f = 0;
    for(i=0; i<tableautaille-1; i++) //Cette fonction permet de parcourir tout le tableau
    {
      if ( tableau[i].battement > tableau[i+1].battement ) //Cette condition permet de verifier le bon ordre des données et ,si elles ne le sont pas, de les inverser d'emplacement
      {
        t = tableau[i].battement; //
        tableau[i].battement = tableau[i+1].battement;
        tableau[i+1].battement=t;

        t = tableau[i].temps;
        tableau[i].temps = tableau[i+1].temps;
        tableau[i+1].temps = t;

        f=1;
      }
    }
  }while(f);

  for (i=0; i<tableautaille;i++)
    {
      printf("%ld bpm | %lu millis\n",tableau[i].battement, tableau[i].temps);
    }

}

void decroissantT()
{
  int t,i;
  int f=0;

  do//tri à bulles, se referer plus haut pour des commentaires détaillés
  {
    f = 0;
    for(i=0; i<tableautaille-1; i++)
    {
      if ( tableau[i].temps < tableau[i+1].temps )
      {
        t = tableau[i].temps;
        tableau[i].temps = tableau[i+1].temps;
        tableau[i+1].temps = t;

        t = tableau[i].battement;
        tableau[i].battement = tableau[i+1].battement;
        tableau[i+1].battement=t;

        f=1;
      }
    }
  }while(f);

  for(i=0; i<tableautaille; i++)
  {
    printf(" %ld bpm | %lu millis\n",tableau[i].battement, tableau[i].temps);
  }

}

void decroissantB()
{
  int t;
  int f=0;
  int i;

  do//tri à bulles, se referer plus haut pour des commentaires détaillés
  {
    f = 0;
    for(i=0; i<tableautaille-1; i++)
    {
      if ( tableau[i].battement < tableau[i+1].battement )
      {
        t= tableau[i].battement;
        tableau[i].battement = tableau[i+1].battement;
        tableau[i+1].battement = t;
        
        t = tableau[i].temps;
        tableau[i].temps = tableau[i+1].temps;
        tableau[i+1].temps = t;

        f=1;
      }
    }
  }while(f);

  for(i=0; i<tableautaille; i++)
  {
    printf(" %ld bpm | %lu millis\n",tableau[i].battement, tableau[i].temps);
  }

}

void recherche()
{
  int nmbRech;
  int i;
  int o;
  printf("Entrer le temps voulu\n");
  scanf("%i", &nmbRech);
  for (i=0; i!=nmbRech; i++)// Nous utilisons ici une recherche sequentielle grace à cette boucle for qui va parcourir tout le tableau et va continuer tant que i est different du nombre recherché 
  {
    if ((tableau[i].temps) == (nmbRech))
    {
      // Une fois la valeur trouvée la boucle s'arrete et affiche la ligne concernéé
      printf("Trouvé!!\n");
      printf("%ld bpm\n", tableau[i].battement);
    }
  }
}

void moyenne()
{
  
  int j;
  for (j=0; j<a;j++)//Cette boucle for permet d'afficher tout le tableau avec d'un côté les bpm et de l'autre le temps, tout ça ligne par ligne
  {
    printf("%ld bpm  %lu millis\n",tableau[j].battement, tableau[j].temps);
  }
  printf("choisir de quelle ligne à quelle ligne ?\n");

  int debutPlage, finPlage, i, resultat = 0;

  scanf("%i", &debutPlage);
  scanf("%i", &finPlage);
  
  for ( i = debutPlage; i<= finPlage; i++)//Grace a la boucle for nous allons parcourir tut le tableau à partir de la valeur souhaitée en début et en fin
  {
    resultat = resultat + tableau[i].battement;//On additionne les valeurs comprisent entre le début et la fin 
  }
  resultat = resultat/(finPlage - debutPlage + 1);// Ici on calcule la moyenne puis on l'affiche
  printf("%d", resultat);
}

void nmblignes()
{
  printf("Il y a %u lignes.\n", tableautaille);
  /*int i, c, j;

  for (j=0; j<a;j++)//Cette boucle for permet d'afficher tout le tableau avec d'un côté les bpm et de l'autre le temps, tout ça ligne par ligne
  {
    printf("%ld bpm  %lu millis\n",tableau[j].battement, tableau[j].temps);
  }

  int compteur=0;

  while (compteur != 0)
  {
    for (i=0; i<=compteur; i++)
    {
      c++;
    }
    printf("%i",c);
  } */
}

void minmaxB()//Pour cette fonction on aurait pu coder un programme qui cherche le max et le min mais ayant déjà programmer le tri à bulles il suffit juste d'ensuite afficher la premiere et la derniere ligne du tableau. Un bon programmeur est un programmeur féneant!!
{
  int t,i;
  int f=0;

  do
  {
    f = 0;
    for(i=0; i<tableautaille-1; i++)//tri à bulles, se referer plus haut pour des commentaires détaillés
    {
      if ( tableau[i].battement > tableau[i+1].battement )
      {
        t = tableau[i].battement;
        tableau[i].battement = tableau[i+1].battement;
        tableau[i+1].battement=t;
        
        t = tableau[i].temps;
        tableau[i].temps = tableau[i+1].temps;
        tableau[i+1].temps = t;

        f=1;
      }
    }
  }while(f);
  
  printf("Le pouls minimum est de %ld à %lu millis\n", tableau[0].battement, tableau[0].temps);
  printf("Le pouls maximum est de %ld à %lu millis\n", tableau[tableautaille-1].battement, tableau[tableautaille-1].temps);

}


