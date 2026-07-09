/* Escreva um programa que efetue o cálculo do salário líquido de um funcionário de uma empresa. Os dados
fornecidos são: valor da hora aula, número de aulas dadas no mês e percentual de desconto do INSS.*/
#include <stdio.h>
int main() {
    float salario, hora, n, desconto;
    printf("Este programa calcula o salario liquido de um professor!\n");
    printf("Informe os seguintes dados: valor da hora aula, numero de aulas dadas no mes e percentual\nde desconto do INSS.\n");
    scanf("%f %f %f", &hora, &n, &desconto);
    salario = hora*n*(1 - desconto);
    printf("Salario = R$ %.2f", salario);
    return 0;
}