#include <stdio.h>
#include <math.h>
int main()
{ 
    float a;
    printf ("Введите a:");
    scanf("%f", &a);
    a = 3.14*a/180;
    printf("a=%f", a);
    return 0;
}