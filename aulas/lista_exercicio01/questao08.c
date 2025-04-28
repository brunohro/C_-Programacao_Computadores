// Escreva um programa em linguagem C que deve efetuar contagem de dinheiro. Para isso, o programa
// deve questionar ao usuário a quantidade de cédulas de 1 real, 5 reais, 10 reais, 50 reais e 100 reais
// que existe em um monte de dinheiro. O programa deve imprimir em tela o valor total em dinheiro
// presente no monte.

#include <stdio.h>
int main(void)
{
    int quant_1, quant_5, quant_10, quant_50, quant_100;
    printf("Esse programa imprime o valor total em dinheiro presente no monte\n");
    printf("DIGITE A QUANTIDADE DE CEDULAS DE 1 REAL:   \n");
    scanf("%i", &quant_1);
    printf("DIGITE A QUANTIDADE DE CEDULAS DE 5 REAIS:   \n");
    scanf("%i", &quant_5);
    printf("DIGITE A QUANTIDADE DE CEDULAS DE 10 REAIS:   \n");
    scanf("%i", &quant_10);
    printf("DIGITE A QUANTIDADE DE CEDULAS DE 50 REAIS:   \n");
    scanf("%i", &quant_50);
    printf("DIGITE A QUANTIDADE DE CEDULAS DE 100 REAIS:   \n");
    scanf("%i", &quant_100);

    int valor_total = quant_1 + (quant_5 * 5) + (quant_10 * 10) + (quant_50 * 50) + (quant_100 * 100);
    printf("O VALOR PRESENTE NO MONTE E DE: %i", valor_total);
    return 0;
}
