#include <stdio.h>

int main(void)
{
    int quant_sanduiche;
    printf("Digite a quantidade de sanduiche:   \n");
    scanf("%i", &quant_sanduiche);

    float quant_queijo = 0.10 * quant_sanduiche;
    float quant_presunto = 0.05 * quant_sanduiche;
    float quant_carne = 0.10 * quant_sanduiche;
    printf("Quantidade necessaria para fazer %i hamburguers:\n", quant_sanduiche);
    printf("Queijo: %.3f KG\n", quant_queijo);
    printf("Presunto: %.3f KG\n", quant_presunto);
    printf("Carne: %.3f KG\n", quant_carne);
    return 0;
}
