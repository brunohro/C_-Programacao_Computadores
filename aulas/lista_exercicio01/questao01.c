// Faça um programa em linguagem C que calcule e exibe quantas ferraduras são necessárias para
// equipar todos os cavalos adquiridos por um haras. O número de cavalos adquiridos deve ser
// informado pelo usuário.

#include <stdio.h>

int main(void)
{
    int cavalos;
    printf("Esse programa ira calcular o total de ferraduras necessarias para o total de cavalos adqueridos\n");
    printf("Infome o numero total de cavalos: \n");
    scanf("%i", &cavalos);

    int ferraduras = cavalos * 4;
    printf("Voce vai precisar de %i ferraduras", ferraduras);
    return 0;
}
