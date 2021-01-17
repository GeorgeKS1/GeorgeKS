#include <stdio.h>
#include <math.h>
int main()
{ 
    float x,y;
    printf ("Введите x:");
    scanf("%f", &x);
    y=3*(pow((x),6))-6*(x*x)-7;
    printf("y=%f", y);
    return 0;
}