#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Preencha um vetor com 20 números aleatórios de 0 a 100.
#define NUMEROS 20
int main(int argc, char const *argv[])
{
    int vetor[NUMEROS];
    int numero;
    srand(time(NULL)); // gerando a semente
    for(int i = 1; i <= NUMEROS; i++){
        numero = rand() % 101;
        vetor[i] = numero;
        printf("\n[%i] %d", i, vetor[i]);
    }


    
    return 0;
}
