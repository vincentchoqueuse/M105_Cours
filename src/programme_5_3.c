#include <stdio.h>
#include <conio.h>

int main(void)
{
    char lettre;
    lettre=getche();
    switch (lettre)
    {
        case 'a':   {
            printf("voyelle a");
        } break;
        case 'e':   {
            printf("voyelle e");
        } break;
        case 'i':   {
            printf("voyelle i");
        } break;
        case 'o':   {
            printf("voyelle o");
        } break;
        case 'u':   {
            printf("voyelle u");
        } break;
        case 'y':   {
            printf("voyelle y");
        } break;
        default:    {
            printf("la lettre est une consonne");
        }
    }
    return 0;
}