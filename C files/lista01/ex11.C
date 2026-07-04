/*Escreva um programa que receba dois números inteiros e imprima a seguinte saída:
dividendo, divisor: quociente: resto:*/
#include <stdio.h>
int main() {
    int n1;
    int n2;
    int r;
    int q;
    printf("Digite um dividendo inteiro:");
    scanf("%d", &n1);
    printf("Digite um divisor inteiro:");
    scanf("%d", &n2);
    if (n1 % n2 == 0){
        r = 0;
    }
    else {
        r = n1 % n2;
    }
    q = n1/n2;
    printf("--RESULTADOS--\n");
    printf("divisor: %d\n", n2);
    printf("dividendo: %d\n", n1);
    printf("resto: %d\n", r);
    printf("quociente: %d\n", q);
    return 0;
}