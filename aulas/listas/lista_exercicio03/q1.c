#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PESSOAS 50
int main(void)
{
    srand(time(NULL)); // semente do rand
    int idade[PESSOAS];
    int maior_idade = 0;

    do{
        for(int i = 1; i <= PESSOAS; i++){
            idade[i] = rand() % 51;
            printf("[%i PESSOA ] - IDADE --> %i\n", i, idade[i]);

            if(idade[i] >= 18){
                maior_idade++;
            }
        }
    } while (idade < PESSOAS);

    float porcentagem = (maior_idade * 100.0) / PESSOAS;

    printf("--> %.2f%% das pessoas sao maiores de idade\n", porcentagem);


    return 0;
}
