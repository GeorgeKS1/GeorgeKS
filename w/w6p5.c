#include <stdio.h>
#include <math.h>
int main()
{ 
    float x,y;
    printf ("Введите x:");
    scanf("%f", &x);
    y=4*(pow((x-3),6))-7*(pow((x-3),3))+2;
    printf("y=%f", y);
    return 0;
}