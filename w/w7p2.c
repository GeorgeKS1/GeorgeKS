#include <stdio.h>
#include <math.h>
int main()
{ 
    float a;
    printf ("Введите a:");
    scanf("%f", &a);
    a = 180*a/3.14;
    printf("a=%f", a);
    return 0;
}