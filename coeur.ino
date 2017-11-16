/*----------------------------------------------
 * Programme Coeur et gestion des fonctions
 * d'allumage des LEDS
 *
 * Les fonctions sont déclarées dans coeur.h et
 * la fonction que veut l'utilisateur est donnée 
 * par param.h
------------------------------------------------*/

#include "param.h"
#include "coeur.h"

int coeur()
{
  int i;
  if (mode_Leds == 1) //battements de coeur 
   {
   LEDS_HeartBeat(); // Appel de fonction
   }
    
  if (mode_Leds == 2) // chenille
   {
   LEDS_Chenille(); // Appel de fonction
   }
  
  if (mode_Leds == 3) // Autre chenille
  {
  LEDS_ChenilleAutre(); // Appel de fonction
  }
  
  if (mode_Leds == 4) // Allumer les LEDS 2 par 2
  {
  LEDS_DpD(); // Appel de fonction
  }
  if (mode_Leds == 5)
  {
  LED_Unique(); // Allumer une LED au choix
  }
}


/* Déclaration de fonctions  */

     void LEDS_HeartBeat()
     {
      int i;
      
      for(i = 0; i<10; i++) //Boucle d'accès à chaque LED (Il y a 10 LEDS)
      {digitalWrite(ledHeart[i], HIGH);} // Allumer toutes les LEDS
    delay(wait[2]); // Attendre le temps du battement de la personne
    
      for(i = 0; i<10; i++) //Boucle d'accès à chaque LED (Il y a 10 LEDS)
      {digitalWrite(ledHeart[i], LOW);} // Eteindre toutes les LEDS
    delay(wait[2]); //Attendre le temps du battement      
     }
     
     void LEDS_Chenille()
     {
      int i;
      
      for(i = 0; i<10; i++) //Boucle d'accès à chaque LED (Il y a 10 LEDS)
        {digitalWrite(ledHeart[i], LOW); delay(wait[1]);} // Extinction de chaque LEDS avec un delay équivalent au pouls
      
      for(i = 0; i<10; i++) //Boucle d'accès à chaque LED (Il y a 10 LEDS)
        {digitalWrite(ledHeart[i], HIGH); delay(wait[1]);} // Allumage de chaque LEDS avec un delay équivalent au pouls      
     }
     
     void LEDS_ChenilleAutre()
     {
      int i;
      
      for(i = 0; i<10; i++) //Boucle d'accès à chaque LED (Il y a 10 LEDS)
        {digitalWrite(ledHeart[i], HIGH); delay(wait[1]); digitalWrite(ledHeart[i], LOW); delay(wait[1]);} // Allumage d'une LED, delay(pouls), Extinction, delay(pouls)     
     }
     
     void LEDS_DpD()
     {
      int i;
      for(i = 0; i<9; i+=nb_Leds) //Boucle d'accès à chaque 2 LED (Il y a 10 LEDS)
        {digitalWrite(ledHeart[i], HIGH); delay(wait[1]); digitalWrite(ledHeart[i], LOW); delay(wait[1]);} // Allumage d'une LED, delay(pouls), Extinction, delay(pouls)
     }

    void LED_Unique()
    {digitalWrite(ledHeart[nb_Leds], HIGH); delay(wait[1]); digitalWrite(ledHeart[nb_Leds], LOW); delay(wait[1]);}
