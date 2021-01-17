#include<stdio.h>
#include<math.h>
int main()
{
    int A,n,k;
    int B =10;
    printf ("Число А = ");
    scanf ("%d", &A);
    n = A/B;
    k = A - n * B;
    k = n + B * k;
    printf ("Измененное число А = %d", k);
    return 0;
}