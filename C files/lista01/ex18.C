/* Sabendo-se que 100 quilowatts de energia custa um sétimo do salário mínimo, faça um programa que receba o
valor do salário mínimo e a quantidade de quilowatts gasta por uma residência, calcule e imprima:
o valor, em reais, de cada quilowatt;.
o valor, em reais, a ser pago;
o novo valor a ser pago por essa residência com um desconto de 10%.*/
#include <stdio.h>
int main() {
    double smin, ql;
    printf("Qual o valor atual do salario minimo?\n");
    scanf("%lf", &smin);
    printf("Qual o gasto mensal de energia em quilowatts da sua casa?\n");
    scanf("%lf", &ql);
    double qlwt = smin/700;
    double valor = qlwt*ql;
    double novo = valor*0.9;
    printf("Valor do quilowatt: R$ %.2f\nConta de energia bruta: %.2f\nApos descontos: %.2f", qlwt, valor, novo);
    return 0;
}