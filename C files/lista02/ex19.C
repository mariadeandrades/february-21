/**/
#include <stdio.h>
#include <math.h>
int main() {
    float fig, escolha1, result, r, h;
    printf("Escolha qual figura deseja:\n");
    printf("1 - Esfera\n2 - Cilindro\n3 - Cone reto\n");
    scanf("%f", &fig);
    if (fig == 1){
        printf("Informe o raio da esfera:\n");
        scanf("%f", &r);
        printf("Deseja calcular:\n");
        printf("1 - Volume da esfera\n2 - Area superficial da esfera\n");
        scanf("%f", &escolha1);
        if (escolha1 == 1){
            result = 4*M_PI*pow(r, 3)/3;
        }
        else if (escolha1 == 2){
            result = 4*M_PI*pow(r, 2);
        }
    }
    else if (fig == 2){
        printf("Informe o raio da base do cilindro e a altura do cilindro:\n");
        scanf("%f %f", &r, &h);
         printf("1 - Volume do cilindro\n2 - Area superficial do cilindro\n");
        scanf("%f", &escolha1);
        if (escolha1 == 1){
            result = M_PI*pow(r, 2)*h;
        }
        else if (escolha1 == 2){
            result = 2*M_PI*r*h;
        }
    }
    else if (fig == 3){
         printf("Informe o raio da base do cone e a altura do cone:\n");
        scanf("%f %f", &r, &h);
         printf("1 - Volume do cone\n2 - Area superficial do cone\n");
        scanf("%f", &escolha1);
        if (escolha1 == 1){
            result = M_PI*pow(r, 2)*h/3;
        }
        else if (escolha1 == 2){
            result = M_PI*r*sqrt(pow(r, 2)+pow(h, 2));
        }
    }
    printf("Resultado = %.2f", result);
    return 0;
}