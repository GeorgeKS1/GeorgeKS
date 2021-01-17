#include <stdio.h>
#include <math.h>
int main()
{ 
    float V1,V2,S,T,itog;
    printf ("Введите V1:");
    scanf("%f", &V1);
    printf ("Введите V2:");
    scanf("%f", &V2);
    printf ("Введите S:");
    scanf("%f", &S);
    printf ("Введите T:");
    scanf("%f", &T);
    itog=S+V1*T+V2*T;
    printf("Pасстояние между ними через T часов:%f", itog);
    return 0;
}