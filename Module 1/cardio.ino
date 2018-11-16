#include "cardio.h"
#include <Arduino.h>
void pouls() // Fonction calculant le pouls total
{
 alternativdelay();
 time = millis();
 if ((time > (2900 + temps)) && (time < (3200 + temps)))
 {
    Serial.print(poul * 20);
    Serial.print(";");
    Serial.println(time);
    poul = 0;
    temps = temps + 3000;

 }
 else
 {
  if (analogRead(A0) < 350)
    {
      battement = 1;
      poul += battement;

    }
    else
    {
        battement = 0;
      poul += battement;

    }
 }
}
