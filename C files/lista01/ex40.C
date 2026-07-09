/* Todo restaurante, embora por lei não possa obrigar o cliente a pagar, cobra 10% para o garçom. Faça um
programa que leia o valor gasto com despesas realizadas em um restaurante e imprima o valor total com a
gorjeta.*/
#include <stdio.h>
int main() {
    float valor, conta;
    printf("Qual foi a sua despesa no restaurante?\n");
    scanf("%f", &valor);
    conta = 1.1*valor;
    printf("A sua conta eh de R$ %.2f", conta);
    return 0;
}