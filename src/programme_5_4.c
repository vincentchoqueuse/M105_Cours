#include <stdio.h>

int main(void)
{
    int nombre;
    int puissance=1;
    
    scanf("%d",&nombre);
    while(puissance<=1000)
    {
        printf("nombre=%d\n",puissance);
        puissance=puissance*nombre;
    }
    return 0;
}