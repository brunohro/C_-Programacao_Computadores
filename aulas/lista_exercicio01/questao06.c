// Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma sendo vendida
// respectivamente por 15, 20 e 25 reais. Desenvolva um programa em linguagem C que leia as
// quantidades de camisetas pequenas, médias e grandes referentes a uma venda, e imprima o valor a
// ser arrecadado.

#include <stdio.h>
int main(void)
{
    int valor_p = 15;
    int valor_m = 20;
    int valor_g = 25;
    int quant_p, quant_m, quant_g;

    printf("Esse programa exibe o valor final de uma venda de camisas\n");
    printf("Digite a quantidade de camisas do tamanho P:    \n");
    scanf("%i", &quant_p);
    printf("Digite a quantidade de camisas do tamanho M:    \n");
    scanf("%i", &quant_m);
    printf("Digite a quantidade de camisas do tamanho G:    \n");
    scanf("%i", &quant_g);

    int valor_final = (valor_p * quant_p) + (valor_m * quant_m) + (valor_g * quant_g);
    printf("Valor a ser arrecadado: R$%i", valor_final);
    return 0;
}
