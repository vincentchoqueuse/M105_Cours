#include <stdio.h>

int main(void)
{
    int nb1,nb2;
    float reel;
    printf("Bonjour\n");
    printf("Veuillez entrer deux nombres entiers :");
    scanf("%d %d",&nb1,&nb2);
    printf("et un reel");
    scanf("%f",&reel);
    printf("Les nombres sont %d %d et %f",nb1,nb2,reel);
    return 0;
}