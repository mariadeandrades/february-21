/* O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e
dos impostos (aplicados ao custo de fábrica). Supondo que a porcentagem do distribuidor seja de 12% do preço
de fábrica e os impostos de 30% do preço de fábrica, faça um programa para ler o custo de fábrica de um carro
e imprimir o custo ao consumidor.*/
#include <stdio.h>
int main() {
    float fabrica;
    printf("Insira o custo de fabrica do carro que deseja verificar:\n");
    scanf("%f", &fabrica);
    float custo = fabrica + (0.12*fabrica) + (0.3*fabrica);
    printf("O custo para o cliente eh de R$ %0.2f.", custo);
    return 0;
}