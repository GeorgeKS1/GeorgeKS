#include <stdio.h>
int Quarter(float x,float y)
{
  if ((x>0)&&(y>0))  
  return 1;
  if ((x>0)&&(y<0))  
  return 4;
  if ((x<0)&&(y>0))  
  return 2;
  if ((x<0)&&(y<0))  
  return 1;
}
int main()
{
    float x,y;
    float i;
    for (i=1; i<=3;i++)
    {
     printf ("x= ");
     scanf ("%f", &x);
     printf("y = ");
     scanf("%f", &y);
     printf("четверть = %d\n", Quarter(x,y));
    }
  return 0;
}