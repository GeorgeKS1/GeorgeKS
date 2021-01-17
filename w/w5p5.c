#include <stdio.h>
#include <math.h>
int main()
{ 
    float x1, y1, x2, y2, x3, y3, a,b,c, P, S, pol;
    printf ("Введите x1:");
    scanf("%f", &x1);
    printf ("Введите y1:");
    scanf("%f", &y1);
    printf ("Введите x2:");
    scanf("%f", &x2);
    printf ("Введите y2:");
    scanf("%f", &y2);
    printf ("Введите x3:");
    scanf("%f", &x3);
    printf ("Введите y3:");
    scanf("%f", &y3);
    a=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    b=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
    c=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
    P = a + b + c;
    pol = P/2;
    S = sqrt(pol*(pol-a)*(pol-b)*(pol-c));
    printf("S=%f", S);
    printf("\nP=%f", P);
    return 0;
}

