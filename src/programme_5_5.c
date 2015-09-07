#include <stdio.h>
#include <conio.h>

int main(void)
{
    char lettre;
    
    do
    {
        printf("\nAppuyer sur q pour quitter: ");
    }
    while(getch()!='q');
    return 0;
}