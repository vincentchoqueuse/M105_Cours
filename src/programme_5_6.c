#include <stdio.h>

int main(void)
{
    int indice;
    
    for (indice=0;indice<=255;indice++)
    {
        printf("Valeur %d, ASCII %c\n",indice,indice);
    }
    return 0;
}