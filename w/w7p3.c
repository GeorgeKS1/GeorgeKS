#include <stdio.h>
#include <math.h>
int main()
{ 
    float A,X,Y;
    printf ("Введите A:");
    scanf("%f", &A);
    printf ("Введите X:");
    scanf("%f", &X);
    printf ("Введите Y:");
    scanf("%f", &Y);
    A = A / X;
    printf("1кг стоит:%f", A);
    Y=Y*A;
    printf("\nYкг стоит:%f", Y);
    return 0;
}