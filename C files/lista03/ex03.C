/* Faça um programa que receba o salário de um funcionário chamado Carlos. Sabe-se que outro funcionário,
João, tem salário equivalente a um terço do salário de Carlos. Carlos aplicará seu salário integralmente na
caderneta de poupança, que está rendendo 2% ao mês, e João aplicará seu salário integralmente no fundo de
renda fixa, que está rendendo 5% ao mês. O programa deverá calcular e mostrar a quantidade de meses
necessários para que o valor pertencente a João iguale ou ultrapasse o valor pertencente a Carlos.*/
#include <stdio.h>
int main () {
    float c, j;
    int t = 0;
    printf("Salario de Carlos:\n");
    scanf("%f", &c);
    j = c/3;
    while (j < c){
        c += c*0.02;
        j += j*0.05;
        t ++;
    }
    printf("Tempo necessario = %d meses\n", t);
    printf("Montante de Carlos = R$%.2f\n", c);
    printf("Montante de Joao = R$%.2f\n", j);
    return 0;
}