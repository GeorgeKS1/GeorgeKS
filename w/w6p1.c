#include <stdio.h>
#include <math.h>
int main()
{ 
    float A, B, p1;
    printf ("Введите A:");
    scanf("%f", &A);
    printf ("Введите B:");
    scanf("%f", &B);
    p1=A;
    A=B;
    B=p1;
    printf("A=%f", A);
    printf("\nB=%f", B);
    return 0;
}