#include "menu.h"
#include "generationCode.h"

void Lecture(int choix)
{
int d_Choix = 0;
int nb_Leds;
FILE* fichier = NULL;
fichier = fopen("main/param.h","w");
printf("Votre choix est %d.", choix);
switch(choix) // switch choix de l'utilisateur

{
case 1:
    LEDS_HeartBeat(fichier); // Appel de fonction generationCode.c
    break;
case 2:
    printf("Il y a deux modes :\n 1) Les LEDS s'eteignent des apres qu'on passe à la suivant\n 2) Les LEDs s'eteignent a la fin de la boucle\n");
    while(d_Choix<1 || d_Choix>2)
        {scanf("%d", &d_Choix);}
    switch(d_Choix)
    {
        case 1:
            LEDS_Chenille(fichier); // Appel de fonction generationCode.c
            break;
        case 2:
            LEDS_ChenilleAutre(fichier); // Appel de fonction generationCode.c
            break;
    }
    break;
case 3:
    printf("Une LED doit etre allumee tous les tant de LEDs, mais combien ?\n");
    scanf("%d", &nb_Leds); // Demande nombre de LEDs
    while(nb_Leds>5 || nb_Leds<1) // Vérification nombre de LEDs cohérent
    {
        printf("desole mais le programme accepte un maximum de 5 LEDs");
        scanf("%d", &nb_Leds);
    }
    LEDS_DpD(nb_Leds, fichier); // Appel de fonction
    break;
case 4:
    printf("\nQuel LED voulez-vous ?\n\n");
    coeur();
    scanf("%d", &nb_Leds);
    while(nb_Leds>10 || nb_Leds<1) // Vérification nombre de LEDs cohérent
    {
        printf("desole mais le module n'a que 10 LEDs.\n Choisissez-en une autre / ");
        scanf("%d", &nb_Leds);
    }
    LED_Unique(nb_Leds, fichier);
}
fclose(fichier);
}

void coeur() // Fonction pour afficher un coeur avec le numéro des LEDs
{
    printf("        1           9\n");
    printf("      2       10      8\n");
    printf("        3           7\n");
    printf("          4       6\n");
    printf("              5\n");
}
