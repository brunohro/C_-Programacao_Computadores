#include <stdio.h>

int main(void){
    double manoel = 1.50, josue = 1.10;
    int quant_anos = 0;
    // manuel cresce 2cm (0.02m) por ano 
    // josue cresce 3cm (0.03m) por ano

    while (manoel >= josue)
    {
        manoel += 0.02;
        josue += 0.03;
        quant_anos++;
        printf("\nANO - [%i] -- ", quant_anos);
        printf(" -- Altura Atual de Manoel: %.2f", manoel);
        printf(" -- Altura Atual de Josue: %.2f", josue);
    }

    printf("\nQuantidade de anos: %i", quant_anos);
    
    return 0;
}