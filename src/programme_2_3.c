#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x=2;
    int y;

    y=x;
    x=x+3;
    y=5;
    y=y+x;

    printf("%d\n",x);
    printf("%d",y);
        
    return 0;
}