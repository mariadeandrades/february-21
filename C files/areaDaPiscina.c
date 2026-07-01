#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Testando a Acentuação\n\n");

    const float pi = 3.14;
    int raio = 5;
    float areap = 5*5*pi;
    printf("A area da piscina de raio %i e %f.", raio, areap);
}
/* em C, posso realizar operações entre tipos diferentes, o compilador 
faz a conversão silenciosamente 
na hora de printar com printf: %i para int, %f para float */