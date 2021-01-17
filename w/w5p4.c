#include <stdio.h>
#include <math.h>
int main()
{ 
    float x1, y1, x2, y2, P, S;
    printf ("Введите x1:");
    scanf("%f", &x1);
    printf ("Введите y1:");
    scanf("%f", &y1);
    printf ("Введите x2:");
    scanf("%f", &x2);
    printf ("Введите y2:");
    scanf("%f", &y2);
    int A = fabs(y2 - y1);
    int B = fabs(x2 - x1);
    P = (A+B)*2;
    S = A * B;
    printf("P=%f", P);
    printf("\nS=%f", S);
    return 0;
}
