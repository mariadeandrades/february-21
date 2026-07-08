/* Escreva um programa que receba a base e a altura de um triângulo, calcule e imprima sua área*/
#include <stdio.h>
int main() {
    double b, h;
    printf("Quais as medidas da altura e da base do triangulo?\n");
    scanf("%lf %lf", &h, &b);
    double a = b*h/2;
    printf("Area do triangulo = %.2lf", a);
    return 0;
}