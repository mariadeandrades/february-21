#include <stdio.h>
int main() {
    double x, x1, x2, x3;
    printf("Escolha valores para x1, x2 e x3:\n");
    printf("--digite os valores espacadamente, assim: x1 x2 x3, e aperte ENTER para enviar--\n");
    scanf("%lf %lf %lf", &x1, &x2, &x3);
    x = x1 + (x2/(x3 + x1)) + 2 *(x1 - x2);
    printf("x = %.2lf", x);
    return 0;
}