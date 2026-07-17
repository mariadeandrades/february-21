/* Elabore um programa que leia dois números inteiros e efetue a adição dos mesmos. Caso o valor
somado seja maior do que 20, o resultado a ser apresentado será a soma mencionada adicionada de 8.
Caso o valor somado seja menor ou igual a 20, deve-se subtrair 5 do mesmo para apresentá-lo em
seguida.*/
#include <stdio.h>
int main() {
    int n1, n2, soma, result;
    printf("Escolha dois numeros inteiros:\n");
    scanf("%d %d", &n1, &n2);
    soma = n1 + n2;
    if (soma > 20) {
        result = soma + 8;
        printf("Resultado = %d", result);
    }
    else {
        result = soma - 5;
        printf("Resultado = %d", result);
    }
    return 0;
}