#include <stdio.h>

int main(void)
{
    int nombre;
    
    printf("Veuillez entrer un nombre: ");
    scanf("%d",&nombre);
    printf("Le nombre %d est",nombre);
    if(!(nombre%2))
    {
        printf("pair");
    }
    else
    {
        printf("impair");
    }
    return 0;
}