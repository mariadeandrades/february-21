// Escreva um programa para ler um número inteiro e imprimi-lo.
#include <stdio.h>
int main() {
    float n;
    printf("Digite um numero inteiro qualquer:\n");
    scanf("%f", &n);
    while (n != (int)n){
        printf("Erro: digite um numero inteiro (sem casas decimais):\n");
        scanf("%f", &n);
    }
    printf("O numero inteiro escolhido por voce eh %.0f! Boa escolha!", n);
    return 0;
}
//Inicialmente eu ia usar essa estrtutura aqui:
/*#include <stdio.h>
float main() {
    float n;
    printf("Digite um numero inteiro qualquer:\n");
    scanf("%d", &n);
    while (n % 1 != 0){
        printf("Voce digitou um numero com casas decimais, mas este programa so trabalha com inteiros!\n");
        printf("Digite um numero inteiro qualquer:\n");
        scanf("%d", &n);
    }
    printf("O numero inteiro escolhido por voce e %f! Boa escolha!", n);
    return 0;
} 
*/
//mas tinham alguns erros:
/* 1° erro: por padrão, a função main em C precisa retornar int;
   2° erro: estava tentando usar %d para receber valores do tipo float; para isso, devo usar %f;
   3° erro: o operador % para resto não funciona com float em C;
*/