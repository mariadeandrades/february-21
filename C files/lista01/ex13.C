/*Escreva um programa que receba um número e imprima a seguinte saída:
numero, quadrado, raiz quadrada*/
#include <stdio.h>
double n, q;
double estimativa, raiz_anterior, precisao;

int main() {
    printf("Digite um numero inteiro qualquer a seguir:");
    scanf("%lf", &n);
    while (n<0){
        printf("Erro: digite somente numeros positivos:");
        scanf("%lf",&n);
    }
    if (n == 0) {
        printf("A raiz quadrada de 0 eh 0.\n");
        return 0;
    }
//quero tirar a raiz sem usar biblioteca / função pronta
//vou aplicar o método de Newton-Raphson
    estimativa = n / 2.0;
    precisao = 0.000001; 
    do { //Loop de aproximações sucessivas
        raiz_anterior = estimativa;
        estimativa = (raiz_anterior + (n / raiz_anterior)) / 2.0;
    } while ((estimativa - raiz_anterior > precisao) || (raiz_anterior - estimativa > precisao));
    q = n*n;
    printf("--RESULTADOS--");
    printf("numero: %.2lf\n", n);
    printf("quadrado: %.2lf\n", q);
    printf("raiz: %.2lf\n", estimativa);
    return 0;
}