#include <stdio.h>
#define NUMEROS 10
int main(int argc, char const *argv[])
{
    int vetor[NUMEROS];
    int valor;
    for(int i = 0; i < NUMEROS; i++){
        printf("\n --> DIGITE UM VALOR: \n");
        scanf("%i", &valor);

        vetor[i] = valor;
    }

    printf("\n ORDEM CRESCENTE: \n");
    for(int i = 0; i < NUMEROS; i++){
        printf("\n[%i] - %d", i, vetor[i]);
    }

    printf("\n ORDEM DECRESCENTE: \n");
    for(int i = 9; i >= 0; i--){
        printf("\n[%i] - %d", i, vetor[i]);
    }

    int aux;
    for(int i = 0, j = (NUMEROS - 1); i != j; i++, j--){
        aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
    }
    printf("\nVETOR INVERTIDO:\n");
    for (int i = 0; i < NUMEROS; i++) {
    printf("[%i] - %d\n", i, vetor[i]);
}   
    return 0;
}
