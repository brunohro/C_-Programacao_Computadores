#include <stdio.h>

int main(void)
{
    double km;
    char carro[20];
    double consumo;

    printf("Digite o percurso em KM:    \n");
    scanf("%lf", &km);

    printf("Digite o tipo do carro:    \n");
    scanf(" %[^\n]", &carro);

    printf("Digite o consumo medio do carro:    \n");
    scanf(" %lf", &consumo);


    // desafio incompleto 
    return 0;
}
