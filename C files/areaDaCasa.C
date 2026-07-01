#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Testando a Acentuação\n\n");

    int ladoB = 3; 
    int areat; 
    int ladoA = 10;
printf("Este programa calcula a area de uma casa.\n");
areat = (ladoA * ladoB);
printf("A area total da casa e %i.\n",areat);
}
/* = é um operador de atribuição, não de igualdade, serve para armazenar
valores em lugares da memória com o nome da variável 
ex: variável de nome x
x = 10
espaço na memória de nome x, valor armazenado nesse espaço é 10 */