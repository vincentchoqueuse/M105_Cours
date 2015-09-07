#include <stdio.h>

float deg_2_rad(float deg)
{
    float rad;
    rad=deg*3.14/180;
    return(rad);
}

int main(void)
{
    float v_deg,v_rad;
    printf("Veuillez entrer un angle en degree:");
    scanf("%f",&v_deg);
    v_rad=deg_2_rad(v_deg);
    printf("%f deg -> %f rad",v_deg,v_rad);
    return 0;
}