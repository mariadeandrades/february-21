#include <stdio.h>
int main() {
    int i;
    printf("Informe a idade a ser classificada:\n");
    scanf("%d", &i);
    while (i < 0){
        printf("Idade invalida; tente novamente:\n");
        scanf("%d", &i);
    }
    if (i >=0 && i <= 2){
        printf("Categoria = recem-nascido");
    }
    else if (i >= 3 && i <= 11){
        printf("Categoria = crianca");
    }
    else if (i >=12 && i <=19){
        printf("Categoria = adolescente");
    }
    else if (i >= 20 && i <= 55){
        printf("Categoria = adulto");
    }
    else {
        printf("Categoria = idoso");
    }
    return 0;
} 