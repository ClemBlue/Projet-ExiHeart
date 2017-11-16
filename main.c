#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "generationCode.h"

int main()
{
system("color 9E"); // Couleur de la console et du texte de fond
int continuer = 1; // Déclaration de variables
int choix;
int ouverture;

while(continuer == 1) // Boucle de vérification si l'utilisateur veut arrêter ou non le programme
{
    system("cls"); // Nettoyage de la console, utile lorsque l'utilisateur veut revenir sur le programme
    printf("\n\n********** MENU **********\n\n");
    printf("Comment voulez-vous configurer le coeur de LEDs ?\n\n");
    printf("0) Quitter\n");
    printf("1) Battement de coeur\n");
    printf("2) Chenille\n");
    printf("3) LEDs allumee tous les tant de LEDs\n");
    printf("4) Une LED au choix\n");
    printf("\n\nVotre choix : ");
    scanf("%d", &choix);

    if (choix==0) // Vérification si l'utilisateur veut arrêter ou non le prog
    {
        printf("Le programme s'arrete.");
        exit(-1);
    }


    while (choix<0 || choix>4) // Vérification des valeurs prises, si inédaquates, on redemande.
    {
        printf("\n Choisissez une valeur possible !\nVotre choix : ");

        scanf("%d", &choix);
    }

    Lecture(choix); // Appel de fonction menu.c
    printf("\n\nLe fichier param.h a bien ete modifie.\n\n");

    printf("Voulez-vous lancer les programmes Arduino et Processing ?\n");
    scanf("%d", &ouverture);
    if(ouverture==1) // Vérification si l'utilisateur veut ouvrir Arduino et Processing
    {
    system("start main/main.ino"); // Lance Arduino
    system("start Processing_Et_Acquisition_De_Donnees/Processing_Et_Acquisition_De_Donnees.pde");
    printf("\nLes programmes Arduino et Processing vont etre fermes si vous appuyez sur n'importe quelle touche\n\n");
    system("pause");
    system("taskkill /im javaw.exe"); // Ferme les applications en java (soit Processing et Arduino)
    }
    printf("Souhaitez vous continuer ?\n\nTout autre nombre que 1 terminera le programme.\n"); //Choix de l'utilisateur, arrêt ou non du programme
    scanf("%d", &continuer);
}

system("exit");
return 0;
}


