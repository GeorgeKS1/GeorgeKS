#include <stdio.h>
#include <math.h>
int main() {
    float f,g;
    printf("Введите два числа(через пробел):");
    scanf("%f%f",&g,&f);
    f=fabs(f);
    g=fabs(g);
    float Z = g+f;
    printf("Сумма=%f", Z);
    float X = g-f;
    printf("\nРазность=%f", X);
    float C = g*f;
    printf("\nПроизведение=%f", C);
    float V = g/f;
    printf("\nЧастное=%f", V);
return 0;
}
