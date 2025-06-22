#include <stdio.h>
// Crie um vetor com 10 números e imprima apenas os números pares.
int main(int argc, char const *argv[])
{
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int soma = 0;
    for(int i = 0; i < 10; i++){
        if(vetor[i] % 2 == 0){
        } else{
            soma += vetor[i];
        }
    }

    printf("\n soma = %i", soma);
    return 0;
}
