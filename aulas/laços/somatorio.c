#include <stdio.h>

int main(void) {
    int cont_positivo = 0;
    int cont_negativo = 0;  
    int somatorio = 0;

    int numero = 1;

    while(numero != 0) {
        printf(" -> Digite um numero (0 para sair): ");
        scanf("%i",&numero);

        if(numero > 0) {
            cont_positivo++;
        } else if (numero < 0) {
            cont_negativo++;
        }

        somatorio = somatorio + numero;
    }

    printf("\n # positivos: %i", cont_positivo);
    printf("\n # negativos: %i", cont_negativo);
    printf("\n -> somatorio: %i", somatorio);

    return 0;
}