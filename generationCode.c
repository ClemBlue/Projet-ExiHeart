#include "generationCode.h"
#include "menu.h"

// Fonction d'écriture dans param.h et définition du paramètrage

void LEDS_HeartBeat(FILE *fichier)
{

fprintf(fichier,"#define mode_Leds 1\n#define nb_Leds 0\n"); // paramètrage battements

}

void LEDS_Chenille(FILE *fichier)
{

fprintf(fichier,"#define mode_Leds 2\n#define nb_Leds 0\n"); // paramètrage Chenille

}

void LEDS_ChenilleAutre(FILE *fichier)
{

fprintf(fichier,"#define mode_Leds 3\n#define nb_Leds 0\n"); // paramètrage autre Chenille

}

void LEDS_DpD(int nb_Leds, FILE *fichier)
{

fprintf(fichier,"#define mode_Leds 4\n#define nb_Leds %d\n", nb_Leds); // paramètrage LEDs tant par tant

}

void LED_Unique(int nb_Leds, FILE *fichier)
{

fprintf(fichier,"#define mode_Leds 5\n#define nb_Leds %d\n", nb_Leds-1); // paramètrage LED Unique

}


