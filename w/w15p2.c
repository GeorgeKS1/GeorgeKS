#include <stdio.h>
int Sign(float x)
{
   if (x<0)
    return -1;
   if (x==0)
    return 0; 
   if (x>0)
    return 1;
}
int main()
{
    float a,b;
    float k;
    printf ("A = ");
    scanf ("%f", &a);
    printf("B = ");
    scanf("%f", &b);
    k = Sign(a)+Sign(b);
    printf("Sign(A)+Sign(B) = %.f\n",k);
    return 0;
}