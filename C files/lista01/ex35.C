/* Escreva um programa que calcule e mostre o valor do volume de uma lata de óleo, usando a fórmula:
𝑣𝑜𝑙𝑢𝑚𝑒 = 3,14159 * R^2 * 𝑎𝑙𝑡𝑢𝑟a*/
#include <stdio.h>
#include <math.h>
int main() {
    double r, h, v;
    printf("Este programa calcula o volume de uma lata de oleo.\n");
    printf("Quais as medidas do raio e da altura da lata?\n");
    scanf("%lf %lf", &r, &h);
    v = 3.14159*pow(r, 2)*h;
    printf("Volume da lata = %.2lf", v);
    return 0;
}