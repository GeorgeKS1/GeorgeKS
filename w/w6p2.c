#include <stdio.h>
#include <math.h>
int main()
{ 
    float A, B, C, p1;
    printf ("Введите A:");
    scanf("%f", &A);
    printf ("Введите B:");
    scanf("%f", &B);
    printf ("Введите C:");
    scanf("%f", &C);
    p1=A;
    A=C;
    C=B;
    B=p1;
    printf("A=%f", A);
    printf("\nB=%f", B);
    printf("\nC=%f", C);
    return 0;
}