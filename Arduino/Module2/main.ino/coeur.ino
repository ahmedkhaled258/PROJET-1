#include "coeur.h"
#include <Arduino.h>


void off(){
  digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
}

void UneSurDeux(){
  digitalWrite(2, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(12, HIGH);
}

void UneSurTrois (){
    digitalWrite(2, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(11, HIGH);
}

void UneParUne(){
  digitalWrite(2,HIGH);
  alternativdelay();
  digitalWrite(2,LOW);
  alternativdelay();

  digitalWrite(3,HIGH);
  alternativdelay();
  digitalWrite(3,LOW);
  alternativdelay();

  digitalWrite(4,HIGH);
  alternativdelay();
  digitalWrite(4,LOW);
  alternativdelay();

  digitalWrite(5,HIGH);
  alternativdelay();
  digitalWrite(5,LOW);
  alternativdelay();

  digitalWrite(6,HIGH);
  alternativdelay();
  digitalWrite(6,LOW);
  alternativdelay();

  digitalWrite(7,HIGH);
  alternativdelay();
  digitalWrite(7,LOW);
  alternativdelay();

  digitalWrite(8,HIGH);
  alternativdelay();
  digitalWrite(8,LOW);
  alternativdelay();

  
  digitalWrite(9,HIGH);
  alternativdelay();
  digitalWrite(9,LOW);
  alternativdelay();
  
  digitalWrite(10,HIGH);
  alternativdelay();
  digitalWrite(10,LOW);
  alternativdelay();
  
  digitalWrite(11,HIGH);
  alternativdelay();
  digitalWrite(11,LOW);
  alternativdelay();

  alternativdelay();

    digitalWrite(11,HIGH);
  alternativdelay();
  digitalWrite(11,LOW);
  alternativdelay();

  digitalWrite(10,HIGH);
  alternativdelay();
  digitalWrite(10,LOW);
  alternativdelay();

  digitalWrite(9,HIGH);
  alternativdelay();
  digitalWrite(9,LOW);
  alternativdelay();

  digitalWrite(8,HIGH);
  alternativdelay();
  digitalWrite(8,LOW);
  alternativdelay();

   digitalWrite(7,HIGH);
  alternativdelay();
  digitalWrite(7,LOW);
  alternativdelay();

  digitalWrite(6,HIGH);
  alternativdelay();
  digitalWrite(6,LOW);
  alternativdelay();

  digitalWrite(5,HIGH);
  alternativdelay();
  digitalWrite(5,LOW);
  alternativdelay();

  digitalWrite(4,HIGH);
  alternativdelay();
  digitalWrite(4,LOW);
  alternativdelay();
  
  digitalWrite(3,HIGH);
  alternativdelay();
  digitalWrite(3,LOW);
  alternativdelay();

  digitalWrite(2,HIGH);
  alternativdelay();
  digitalWrite(2,LOW);
  alternativdelay();

  alternativdelay(); 
}

void clignotement(){
   // allumer les LED
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);

    // attente du programme de 1,5 secondes
    alternativdelay();

    // on éteint les LED
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);

    // attente du programme de 4,32 secondes
    alternativdelay();
}

void doublechenille(){
  int i;
    digitalWrite(2,HIGH);
    alternativdelay();

    int n = 12;
    for(i=3; i<12; i++){
      digitalWrite(i,HIGH);
      digitalWrite(i+n,HIGH);
      alternativdelay();
      n = n-1;
    }

    /*digitalWrite(7,HIGH);
    delay(1000);
    digitalWrite(7,LOW);
    delay(1000);

    digitalWrite(7,HIGH);
    delay(1000);
    digitalWrite(7,LOW);
    delay(1000);*/

   n=2;
   for(i=11; i>2; i--){
    digitalWrite(i, LOW);
    digitalWrite(i+n, LOW);
    alternativdelay();
   n=n+1;
   }
    digitalWrite(2, LOW);
    alternativdelay();
}

void enfctducoeur(){
  if (analogRead(0) > 900)
  {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
  }
  else
  {
    off(); 
  }
   alternativdelay();
   off();
}
    

void setup();
void loop();
