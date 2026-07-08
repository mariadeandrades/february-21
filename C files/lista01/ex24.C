/*Dadas a base e a altura de uma pirâmide, fazer um programa que calcule e escreva o seu volume : Volume = 1 / 3 ∗base∗ altura*/
#include <stdio.h>
int main() {
    double b, h;
    printf("Quais as medidas da base e da altura da piramide?\n");
    scanf("%lf %lf", &b, &h);
    double v = b*h/3;
    printf("Volume da piramide = %.2lf", v);
    return 0;
}