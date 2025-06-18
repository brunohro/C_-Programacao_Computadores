#include <stdio.h>

#define N_VETOR 10
int main(int argc, char const *argv[])
{
    int vetor[N_VETOR] = {4, 2, 9, 15, 3, 6, 12, 1 , 11, 5};

    for(int i = 0; i< N_VETOR; i++){
        for(int j = i + 1; j< N_VETOR; j++){
            if (vetor[i] > vetor[j]){
                int aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
            
        }
    }
    for(int i = 0; i < N_VETOR; i++){
        printf(" vetor %i", vetor[i]);
    }
    return 0;
}
