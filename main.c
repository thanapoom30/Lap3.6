#include <stdio.h>

int main()
{
    float R, H;
    printf("Input base : ");
    scanf("%f", &R);
    printf("Input height : ");
    scanf("%f", &H);
    printf("Area is %0.2f",(2*22/7*R)*H+2*(22/7*R*R));
    return 0;
}