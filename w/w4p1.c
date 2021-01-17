#include <stdio.h>
int main() {
    int a, b;
    printf("Введите a и b(через пробел):");
    scanf("%d%d",&a,&b);
    int S = a*b;
    printf("S:%d", S);
    int P = 2*(a + b);
    printf("\nP:%d", P);
return 0;
}