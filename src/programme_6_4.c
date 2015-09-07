#include <stdio.h>

typedef struct{
    char nom[20];
    char prenom[20];
    float note1;
    float note2;
} eleve;

int main(void)
{
    eleve liste[5];
    int indice;
    
    for(indice=0;indice<5;indice++)
    {
        printf("Nom de l'eleve ?");
        gets(liste[indice].nom);
        printf("Prenom de l'eleve ?");
        gets(liste[indice].prenom);
        printf("Premiere note ?");
        scanf("%f",&liste[indice].note1);
        printf("Seconde note ?");
        scanf("%f",&liste[indice].note2);
        //pour purger le retour a la ligne
        scanf("%*[^\n]");
    }
    
    for(indice=0;indice<5;indice++)
    {
        printf("%s %s:",liste[indice].nom,liste[indice].prenom);
        printf("%f %f\n",liste[indice].note1,liste[indice].note2);
    }
    
    return 0;
}

