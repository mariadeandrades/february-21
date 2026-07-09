/* Em épocas de pouco dinheiro, os comerciantes estão procurando aumentar suas vendas oferecendo descontos.
Faça um programa que possa receber o valor de um produto e imprimir o novo valor tendo em vista que o
desconto foi de 9%.*/
#include <stdio.h>
int main() {
    double v, n;
    printf("Este programa aplica um desconto de 0.09 ao custo inicial de mercadorias.\n");
    printf("Qual o valor damercadoria?\n");
    scanf("%lf", &v);
    n = 0.91*v;
    printf("Novo valor da mercadoria = R$ %.2lf", n);
    return 0;
}