#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( int argc, char** argv )
{
    int continuerPartie = 1;

    do
    {
        int nombreMystere = 0, nombreEntre = 0;
        const int MIN = 1;
        int max = 0;
        int niveauChoisi=0;
        //srand(time(NULL));
        //demander au joueur de choisir un niveau de difficulté
        printf("choisissez un niveau \n");
        printf("1=niveau simple\n");
        printf("2=niveau intermediaire\n");
        printf("3=niveau difficile \n");
        scanf("%d",&niveauChoisi);
        
        switch(niveauChoisi)
        {
            case 1:
            max=100;
            break;
            case 2:
            max=1000;
            break;
            case 3:
            max=10000;
            break;
        }  
        //determiner le nombre mystere de façon aleatoire
        nombreMystere = (rand() % (max - MIN + 1)) + MIN;
        //initialiser le compteur à 0
        int compteur=0;
        //lancer le jeu
        do
        {
            printf("Quel est le nombre mystere ? ");
            scanf("%d", &nombreEntre);
    
    
            if (nombreMystere > nombreEntre)
                printf("C'est plus !\n\n");
            else if (nombreMystere < nombreEntre)
                printf("C'est moins !\n\n");
            else
                printf ("Bravo, vous avez trouve le nombre mystere en %d coups!!!\n\n",compteur);
                compteur++;
        } while (nombreEntre != nombreMystere && compteur<8 ); 
           //demander au joueur s'il veut quitter ou continuer
            printf("la partie est finie\n");
            printf("Voulez vous continuer?\n");
            printf("tapez 1 si vous voulez continuer ou tapez 0 si vous voulez quitter\n");
            scanf("%d",&continuerPartie);

    }while(continuerPartie == 1);
   
    return 0;
}
