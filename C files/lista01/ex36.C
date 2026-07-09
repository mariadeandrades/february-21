/*Escreva um programa que efetue o cálculo da quantidade de litros de combustível gastos em uma viagem,
sabendo-se que o carro faz 12 km com um litro. Deverão ser fornecidos o tempo gasto na viagem e a
velocidade média. Utilize as seguintes fórmulas:
distância = tempo x velocidade
litros usados = distância / 12
O programa deverá apresentar os valores da velocidade média, do tempo gasto na viagem, da distância
percorrida e da quantidade de litros usados na viagem.*/

#include <stdio.h>
int main() {
    double h, v;
    printf("Este programa calcula o gasto de combustivel em uma viagem de carro.\n");
    printf("Qual foi a velocidade media e o tempo, em horas, de viagem?\n");
    scanf("%lf %lf", &v, &h);
    double d = h*v;
    double l = d/12;
    printf("Velocidade media = %.2lf\nTempo gasto na viagem = %.2lf horas\nConsumo de combustivel em litros = %.2lf", v, h, l);
    return 0;
}