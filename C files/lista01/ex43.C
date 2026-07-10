/*Para o cálculo de vários tributos, a base de cálculo é o salário mínimo. Faça um programa que leia o valor do
salário mínimo e o valor do salário de uma pessoa. Calcule e imprima quantos salários mínimos a pessoa
ganha*/
#include <stdio.h>
int main() {
    double sm, sp, n;
    printf("Qual o valor atual do salario minimo?\n");
    scanf("%lf", &sm);
    printf("Qual o seu salario?\n");
    scanf("%lf", &sp);
    n = sp/sm;
    printf("Voce recebe %.2lf salarios minimos.", n);
    return 0;
}