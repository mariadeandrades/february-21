/* Escreva um programa que efetue e mostre o cálculo do valor de uma prestação em atraso, usando a fórmula:
prestação = valor + (valor * (taxa / 100) * tempo)*/
#include <stdio.h>
int main() {
    double p, v, t; //onde p = prestação, v = valor, x = taxa, t = tempo
    printf("Qual o valor atual da sua prestacao em atraso?\n");
    scanf("%lf", &v);
    printf("Ha quanto tempo sua prestacao esta atrasada?\n");
    scanf("%lf", &t);
    const double x = 1.04;
    p = v + (v*(x/100)*t);
    printf("O valor corrigido da sua prestacao eh R$ %.2lf", p);
    return 0;
}