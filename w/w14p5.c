#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,n,k;
    printf ("Введите A ");
    scanf ("%i", &a);
    printf ("Введите B ");
    scanf ("%i", &b);
    n=a;
    k=b;
    while ((a!=0)&&(b!=0))
    {
     if (a>b)
       a=a % b;
     else 
       b=b % a;  
    }
    printf ("НОД %i и %i = %i", n,k,a+b);
  return 0;
}