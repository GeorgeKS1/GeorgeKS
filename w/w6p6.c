#include <stdio.h>
#include <math.h>
int main()
{ 
    float A0,A1;
    printf ("Введите A:");
    scanf("%f", &A1);
    A0=A1*A1;
    A0=A0*A0;
    A0=A0*A0;
    printf("A=%f", A0);
    return 0;
}