#include <stdio.h>
// Dado um vetor de 5 números, encontre o maior e o menor.
int main(int argc, char const *argv[])
{
    int vetor[5] = {1, 4, 6, 9, 100};
    int maior = 0;
    int menor = 1000;

    for(int i = 0; i < 5; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }

    for(int i = 0; i < 5; i++){
        printf("\n[%i] %d", i, vetor[i]);
    }
    printf("\n MAIOR NUM: %i", maior);
    printf("\n MENOR NUM: %i", menor);

    return 0;
}
