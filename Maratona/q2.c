#include <stdio.h>
// Comprimento = 2 * pi * raio
// area = pi * (raio * raio) 

#define PI 3.14
int main(void){
    float raio, area, comprimento;

    printf("\n--> Digite o raio:    \n");
    scanf("%f", &raio);

    area = PI * (raio*raio);
    comprimento = 2 * PI * raio;

    printf("\n--> RAIO: %.2f\n-->AREA: %.2f\n--> COMPRIMENTO: %.2f", raio, area, comprimento);
    return 0;
}