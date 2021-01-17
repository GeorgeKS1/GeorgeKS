#include <stdio.h>
#include <math.h>
int main()
{ 
    float A, B, C, AC, BC, sum;
    printf ("Введите координату точки A:");
    scanf("%f", &A);
    printf ("Введите координату точки B:");
    scanf("%f", &B);
    printf ("Введите координату точки C:");
    scanf("%f", &C);
    AC = fabs(C - A);
    BC = fabs(C - B);
    sum = AC*BC;
    printf("\nAC*BC= %f", sum);
    return 0;
}