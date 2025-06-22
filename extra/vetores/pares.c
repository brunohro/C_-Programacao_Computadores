#include <stdio.h>
//Calcule a soma de todos os números ímpares de um vetor.
int main(int argc, char const *argv[])
{
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(int i = 0; i < 10; i++){
        if(vetor[i] % 2 == 0){
            printf("%d\n", vetor[i]);
        }
    }
    return 0;
}
