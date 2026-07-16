/*9. Escreva um programa que leia a quantidade de DVD's que uma locadora possui e o valor que ela cobra por
cada aluguel, mostrando as informações pedidas a seguir:
sabendo que um terço dos DVD's são alugados por mês, exiba o faturamento anual da locadora;
quando um cliente atrasa a entrega, é cobrada uma multa de 10% sobre o valor do aluguel. Sabendo
que um décimo dos DVD's alugados no mês são devolvidas com atraso, calcule o valor ganho com
multas por mês;
sabendo, ainda, que 2% dos DVD's se estragam ao longo do ano, e um décimo do total é comprado
para reposição, exiba a quantidade de DVD's que a locadora terá no final do ano.*/
#include <stdio.h>

int dvd;
float valor;

float faturamento() {
    float f;
    f = (dvd/3)*valor*12;
    return f;
}

float atraso() {
    float m;
    m = ((dvd/3)/10)*valor*1.1;
    return m;
}

int sobra() {
    int n;
    n = 0.98*dvd + dvd*0.1;
    return n;
}

int main() {
    printf("Quantos DVDs ha na locadora?\n");
    scanf("%d", &dvd);
    printf("Qual o valor de venda de cada um dos DVDs?\n");
    scanf("%f", &valor);
    float f = faturamento();
    float m = atraso();
    int n = sobra();
    printf("Faturamento anual = R$%.2f\nValor recebido em multas = R$%.2f\nDVDs restantes ao final do ano = %d", f, m, n);
    return 0;
}