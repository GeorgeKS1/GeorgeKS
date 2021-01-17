#include <stdio.h>
#include <math.h>
int main()
{ 
    float A,B,itog;
    printf ("Введите A:");
    scanf("%f", &A);
    printf ("Введите B:");
    scanf("%f", &B);
    itog=0-B/A;
    printf("x=%f", itog);
    return 0;
}