#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NOTAS 10
int main(int argc, char const *argv[])
{
    int vetor[NOTAS];
    int nota;
    srand(time(NULL));

    for(int i = 0; i < NOTAS; i++){
        nota = rand() % 101;
        vetor[i] = nota;
    }
    for(int i = 0; i < NOTAS; i++){
        if(vetor[i] >= 60){
            printf("\n[%i]- [%d] - ACIMA DA MEDIA ", i, vetor[i]);
        }
    }
    return 0;
}
