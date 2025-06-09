#include <stdio.h>

int main(void){
// 1 sanduiche = 2 q + 1p + hamburguer.
    float presunto = 0.05, queijo = 0.05, hamburg = 0.1;  
    int sanduiche;

    printf("\n--> Digite a quantidade de sanduiche a ser produzida: \n");
    scanf("%i", &sanduiche);

    float quant_queijo = (queijo * 2) * sanduiche;
    float quant_presunto = presunto * sanduiche;
    float quant_hamburg = hamburg * sanduiche;

    printf("\n--> SERAO NECESSARIOS: \n");
    printf("\n%.2f KG DE QUEIJO", quant_queijo);
    printf("\n%.2f KG DE PRESUNTO", quant_presunto);
    printf("\n%.2f KG DE CARNE", quant_hamburg);


    return 0;
}