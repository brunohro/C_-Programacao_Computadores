#include <stdio.h>

int main(void){
    int cavalos;
    printf("--> DIGITE O NUMERO DE CAVALOS: \n");
    scanf("%i", &cavalos);

    // 1 cavalo --> 4 ferraduras 

    int ferraduras = 4 * cavalos;

    printf("\n--> FERRADURAS NECESSARIAS: %i\n", ferraduras);
    return 0;
}