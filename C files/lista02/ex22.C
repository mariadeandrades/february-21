/* Desenvolver um programa que calcule o salário bruto e o salário líquido de um funcionário. 
   • Dados de Entrada:   Matrícula do funcionário (int); 
   Quantidade de horas-extras trabalhadas. 
   • Constantes:  Salário Mínimo = R$ 788.00; 
Valor da Hora-Extra = R$ 10.00. 
Sabe-se: 
  • Salário hora-extra = horas-extras * Valor da Hora-Extra; 
  • Salário bruto = 3 * Salário Mínimo + Salário hora-extra; 
  • Desconto INSS = 12 % do salário bruto, se salário bruto for maior que R$ 1500,00; 
  • Desconto do Imposto de Renda = 20 % do Salário Bruto, se o mesmo for maior que R$ 2000,00; 
  • Salário líquido = salário bruto – deduções.*/
#include <stdio.h>
int main() {
    int id, hex;
    float salariohex, salariobrt, desctinss, desctier, salariol;
    const float smin = 788;
    const float vhex = 10;
    printf("Qual o numero identificador (com dois algarismos) do funcionario?\n");
    scanf("%d", &id);
    while (id < 10 || id > 99){
        printf("Numero identificador invalido; tente novamente:\n");
        scanf("%d", &id);
    }
    printf("Qual o numero de horas-extras trabalhadas no mes?\n");
    scanf("%d", &hex);
    salariohex = hex*vhex;
    salariobrt = 3*smin + salariohex;
    if (salariobrt > 1500){
        desctinss = 0.12*salariobrt;
    }
    else {
        desctinss = 0;
    }
    if (salariobrt > 2000){
        desctier = 0.2*salariobrt;
    }
    else {
        desctier = 0;
    }
    salariol = salariobrt - desctinss - desctier;
    printf("Salario liquido = R$%.2f", salariol); 
    return 0;
}