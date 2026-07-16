#include <stdio.h>
int main() {
    int n, sucessor;
    printf("Digite um numero entre 0 e 60:\n");
    scanf("%d", &n);
    sucessor = (n + 1) % 61;
    printf("O sucessor de %d eh %d.\n", n, sucessor);
    return 0;
}