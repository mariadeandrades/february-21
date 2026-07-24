/* Escreva um programa que calcule potências. O usuário deve digitar a base e o expoente, e o programa deve
apresentar o resultado (sem usar o comando pow). Assuma que o usuário irá digitar valores positivos. */
#include <stdio.h>
int main() {
    int i; //variável de controle
    float base, exp;
    float result = 1; //tem q inicializar como 1 pra zero zero zero zero :(
    scanf("%f", &base);
    scanf("%f", &exp);
    for (i = 0; i < exp; i ++){ //começando em 0, < q o limite; começando em 1, <= limite;
        result = result*base;
    }
    printf("%.0f", result);
    return 0;
}