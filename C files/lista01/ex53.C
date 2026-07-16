/**/
#include <stdio.h>
#include <math.h>
int main() {
    float potA, potB;
    float d, x1, y1, x2, y2, key;
    printf("Informe as coordenadas do ponto A(X1, Y1):\n");
    scanf("%f %f", &x1, &y1);
    printf("Informe as coordenadas do ponto B =(X2, Y2):\n");
    scanf("%f %f", &x2, &y2);
    potA = pow((x2 - x1), 2);
    potB = pow((y2 - y1), 2);
    key = potA + potB;
    d = sqrt(key);
    printf("A distancia entres os pontos A e B eh de %.2f unidades cartesianas.", d);
    return 0;
}