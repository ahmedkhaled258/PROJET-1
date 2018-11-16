#include "coeur.h"
#include "param.h"
#include "cardio.h"
#include <Arduino.h>
int delaiEntreBattement=100;  //valeur de ton delay initial

//fonction alternative au delay
void alternativdelay()
{
  unsigned long stopTime =millis()+delaiEntreBattement;
  while(millis()<stopTime){}
}

int i;
unsigned long time;
int poul = 0;
int battement = 0;
int temps = 0;

void setup() {
  Serial.begin(9600); //initialise une manière d'écriture
  pinMode(A0, INPUT); //récupère la valeur 

  for (i=2;i<12;i++){
    pinMode(i, OUTPUT); //j'annonce que chaque ports sont des sorties.
  }

}

void loop() {

  Serial.println(analogRead(A0)); 
  if (analogRead(0) > 225){
  switch(j){

    case 1:
    UneSurDeux();
    break;

    case 2:
    UneSurTrois();
    break;

    case 3:
    UneParUne();
    break;

    case 4:
    clignotement();
    break;

    case 5:
    doublechenille();
    break;

    case 6:
    enfctducoeur();
    break;

    default:
    break;
  }
  }
  pouls();

}
