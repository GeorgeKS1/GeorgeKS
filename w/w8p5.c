#include<stdio.h>
#include<math.h>
int main()
{
    int A,x,c;
    int B = 100;
    printf ("Число А = ");
    scanf ("%d", &A);
    x = A/B;
    c = A - x*B;
    c = c*10 + x;
    printf ("Измененное число А = %d", c);
    return 0;
}