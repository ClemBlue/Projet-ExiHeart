
#include <Arduino.h>
#include "param.h"
#include "coeur.h"
#include "cardio.h"

const int ledHeart[10] = {11,2,3,4,5,6,7,8,9,10};
const int wait[6] = {10, 50, 100, 250, 500, 1000};

void setup() 
{
  int i;
  const int ledHeart[10] = {11,2,3,4,5,6,7,8,9,10};
  for(i = 0; i<10; i++){pinMode(ledHeart[i], OUTPUT); digitalWrite(ledHeart[i], LOW);}
  Serial.begin(9600);
}

void loop()
{
   int pouls, temps, i, delayPouls;
   pouls = recolte();
   temps = millis();
   Serial.print(pouls);
   Serial.print(";");
   Serial.println(temps);
   delayPouls = (60/pouls)*1000;
   coeur();
}
