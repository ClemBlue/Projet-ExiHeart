#include "generationCode.h"
#include "menu.h"

// Fonction d'�criture dans param.h et d�finition du param�trage

void LEDS_HeartBeat(FILE *fichier)
{

fprintf(fichier,"#define mode_Leds 1\n#define nb_Leds 0\n"); // param�trage battements

}

void LEDS_Chenille(FILE *fichier)
{

fprintf(fichier,"#define mode_Leds 2\n#define nb_Leds 0\n"); // param�trage Chenille

}

void LEDS_ChenilleAutre(FILE *fichier)
{

fprintf(fichier,"#define mode_Leds 3\n#define nb_Leds 0\n"); // param�trage autre Chenille

}

void LEDS_DpD(int nb_Leds, FILE *fichier)
{

fprintf(fichier,"#define mode_Leds 4\n#define nb_Leds %d\n", nb_Leds); // param�trage LEDs tant par tant

}

void LED_Unique(int nb_Leds, FILE *fichier)
{

fprintf(fichier,"#define mode_Leds 5\n#define nb_Leds %d\n", nb_Leds-1); // param�trage LED Unique

}


