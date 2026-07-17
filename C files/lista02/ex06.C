/* Crie um programa para determinar se um número inteiro A é divisível por outro número B. Os
valores devem ser fornecidos pelo usuário.*/
#include <stdio.h>
int main() {
    int A, B;
    printf("Escolha um numero A e um numero B:\n");
    scanf("%d %d", &A, &B);
    if (A % B == 0){
        printf("%d eh divisivel por %d.", A, B);
    }
    else {
        printf("%d nao eh divisivel por %d.", A, B);
    }
    return 0;
}