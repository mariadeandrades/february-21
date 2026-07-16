/*O programa a seguir recebe um número natural qualquer, verifica se este é par ou ímpar, e printa 
na tela o resultado da verificação.*/

#include <stdio.h>
int main() {
    int n;
    printf("Digite um numero natural a seguir:");
    scanf("%d", &n);
    while (n < 0){ //Go não tem WHILE mas C tem, É PRA USAR!!!PARA DE TENTAR EMULAR WHILE COM FOR AQUI NAO PRECISA DISSO
        printf("O valor que voce digitou e negativo. Digite um numero natural:");
        scanf("%d", &n);
    }
    if (n % 2 == 0){
        printf("O numero %i e par.", n);
    }
    else {
        printf("O numero %i e impar.", n);
    }
}