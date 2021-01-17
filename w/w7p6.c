#include <stdio.h>
#include <math.h>
int main()
{ 
    float A1,A2,B1,B2,C1,C2,x,y,k;
    printf ("Введите A1:");
    scanf("%f", &A1);
    printf ("Введите A2:");
    scanf("%f", &A2);
    printf ("Введите B1:");
    scanf("%f", &B1);
    printf ("Введите B2:");
    scanf("%f", &B2);
    printf ("Введите C1:");
    scanf("%f", &C1);
    printf ("Введите C2:");
    scanf("%f", &C2);
    k = A1*B2-A2*B1;
    x = (C1*B2 - C2*B1)/k,
    y = (A1*C2 - A2*C1)/k,
    printf("x=%f", x);
    printf("\ny=%f", y);
    return 0;
}