/*Escreva um programa que leia três valores inteiros distintos (assuma que o usuário digitará valores
diferentes entre si) e os armazene nas variáveis A, B e C. Em seguida, descubra o menor valor e o
armazene em uma variável denominada MENOR; o maior valor, coloque-o na variável MAIOR e o
valor intermediário, na variável INTER. Imprima os valores em ordem crescente, ou seja, imprima
as variáveis MENOR, INTER e MAIOR, nessa ordem.*/
#include <stdio.h>
int main () {
    int A, B, C;
    int maior, menor, inter;
    printf("Escolhas tres numerois quaisquer:\n");
    scanf("%d %d %d", &A, &B, &C);
    if (A > B && A > C && C < B){
        maior = A;
        menor = C;
        inter = B;
    }
    else if (B > A && B > C && C < A){
        maior = B;
        menor = C;
        inter = A;
    }
    else if (A > B && A > C && B < C){
        maior = A;
        menor = B;
        inter = C;
    }
    else if(B > A && B > C && A < C){
        maior = B;
        menor = A;
        inter = C;
    }
    else if(C > A && C > B && A > B){
        maior = C;
        menor = B;
        inter = A;
    }
    else {
        maior = C;
        menor = A;
        inter = B;
    }
    printf("Maior = %d\nIntermediario = %d\nMenor = %d\n", maior, inter, menor);
    return 0;
}
//SOLUÇÃO SUGERIDA:
/*#include <stdio.h>
int main() {
    int A, B, C;
    int MENOR, INTER, MAIOR;
    printf("Digite tres valores inteiros diferentes:\n");
    scanf("%d %d %d", &A, &B, &C);
    if (A < B && A < C) {
        MENOR = A;
        if (B < C) {
            INTER = B;
            MAIOR = C;
        } else {
            INTER = C;
            MAIOR = B;
        }
    } 
    else if (B < A && B < C) {
        MENOR = B;
        if (A < C) {
            INTER = A;
            MAIOR = C;
        } else {
            INTER = C;
            MAIOR = A;
        }
    } 
    else {
        MENOR = C;
        if (A < B) {
            INTER = A;
            MAIOR = B;
        } else {
            INTER = B;
            MAIOR = A;
        }
    }
    printf("Maior = %d\nIntermediario = %d\nMenor = %d\n", maior, inter, menor);
    return 0;
}*/