/* Criar um programa que leia a idade de uma pessoa e que mostre a sua classe eleitoral:
 - Não-eleitor (abaixo de 16 anos); - Eleitor obrigatório (entre 18 e 65 anos); 
 - Eleitor facultativo (entre 16 e 18 anos e maior de 65 anos).*/
#include <stdio.h>
int main() {
    int idade;
    printf("Qual a sua idade?\n");
    scanf("%d", &idade);
    while (idade < 0){
        printf("Idade invalida; tente novamente:");
        scanf("%d", &idade);
    }
    if (idade < 16){
        printf("Nao-eleitor");
    }
    else if ((idade >= 16 && idade < 18) || idade > 65){
        printf("Eleitor facultativo");
    }
    else if (idade >= 18 && idade <= 65) {
        printf("Eleitor obrigatorio");
    }
    return 0;
}