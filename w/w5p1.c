#include <stdio.h>
#include <math.h>
int main()
{ 
    float x1, y1, x2, y2, Ras;
    printf ("Введите x1:");
    scanf("%f", &x1);
    printf ("Введите y1:");
    scanf("%f", &y1);
    printf ("Введите x2:");
    scanf("%f", &x2);
    printf ("Введите y2:");
    scanf("%f", &y2);
    Ras=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("Растояние между точками: %f", Ras);
    return 0;
}