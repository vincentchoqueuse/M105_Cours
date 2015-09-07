#include <stdio.h>

void permutation(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main(void)
{
    int nb1,nb2;
    printf("Veuillez entrer deux entiers:");
    scanf("%d %d",&nb1,&nb2);
    permutation(&nb1,&nb2);
    printf("permutation -> %d %d",nb1,nb2);
    return 0;
}
