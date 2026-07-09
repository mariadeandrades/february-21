/* Escreva um programa que leia dois valores inteiros para as variáveis A e B, efetue a troca dos valores de forma
que a variável A passe a ter o valor da variável B e que a variável B passe a ter o valor da variável A. Apresente
os valores das variáveis A e B antes e depois das trocas.*/
#include <stdio.h>
int main() {
    int A, B, aux; //a variável auxiliadora serve pra efetuar a troca, tipo um copo vazio, pq em C a troca não pode ser direta A, B = B, A
    printf("Escolha um valor para A e um valor para B:\n");
    scanf("%d %d", &A, &B);
    printf("Voce escolheu A = %d e B = %d\n", A, B);
    printf("Este programa inverte os valores armazenados nas variaveis A e B. Observe:\n");
    aux = A;
    A = B;
    B = aux;
    printf("Valores invertidos: A = %d e B = %d", A, B);
    return 0;
}