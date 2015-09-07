#include <stdio.h>

int main(void)
{
    float tableau[10]={0};
    int indice;
    
    for (indice=0;indice<10;indice++)
    {
        printf("Veuillez entre la %d ieme note: ",indice+1);
        scanf("%f",&tableau[indice]);
    }
    return 0; 
}