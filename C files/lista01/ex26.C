/* Escreva um programa que receba a diagonal maior e a diagonal menor de um losango e imprima sua área.*/
#include <stdio.h>
int main() {
    double d1, d2;
    printf("Quais as medidas das diagoanis maior e menor do losango?\n");
    scanf("%lf %lf", &d1, &d2);
    double a = d1*d2/2;
    printf("Area do losango = %.2lf", a);
    return 0;
}