// Implemente um programa em linguagem C que receba o raio de um determinado círculo e exiba em
// tela como resultado os valores de sua área e comprimento.
#include <stdio.h>

int main(void)
{
    float raio_circulo;
    printf("Esse programa recebe o valor do raio de um circulo e retorna sua area e comprimento\n");
    printf("Digite o valor do raio do circulo:  ");
    scanf("%f", &raio_circulo);

    const float PI = 3.14;

    float area = PI * (raio_circulo*raio_circulo);
    float comprimento = 2 * PI * raio_circulo;

    printf("Valor do raio %.2f\n entao \narea = %.2f\ncomprimento = %.2f\n", raio_circulo, area, comprimento);
    return 0;
}
