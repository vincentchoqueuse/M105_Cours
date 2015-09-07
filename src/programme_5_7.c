#include <stdio.h>

int main(void)
{
    int S=0;
    int indice,N;
    printf("Valeur de N ?");
    scanf("%d",&N);
    for(indice=1;indice<=N;indice++)
    {
        S=S+indice;
    }
    printf("S=%d",S);
    return 0;
}
