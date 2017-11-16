#include <stdio.h>
#include <stdlib.h>

#ifndef generationCode_h
#define generationCode_h

void Bases(FILE* fichier);

void LEDS_Chenille(FILE* fichier);

void LEDS_ChenilleAutre(FILE* fichier);

void LEDS_HeartBeat(FILE* fichier);

void LEDS_DpD(int nb_Leds, FILE* fichier);

void LED_Unique(int nb_Leds, FILE *fichier);

#endif // menu
