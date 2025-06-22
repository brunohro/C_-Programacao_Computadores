#include <stdio.h>

int main(int argc, char const *argv[])
{
    int vetor_um[10];
    int vetor_dois[10];
    int resultado[10];

    int valor_um, valor_dois;

    for(int i = 0; i < 10; i++){
        printf("\n--> Digite o primeiro valor:  \n");
        scanf("%i", &valor_um);
        vetor_um[i] = valor_um;
        printf("\n--> Digite o segundo valor:  \n");
        scanf("%i", &valor_dois);
        vetor_dois[i] = valor_dois;
        printf("\n-----------------------------------------\n");

        resultado[i] = valor_um * valor_dois;
    }

    for(int i = 0; i < 10; i++){
        printf("\n[%d] * [%d] = [%d]", vetor_um[i], vetor_dois[i], resultado[i]);
    }
    return 0;
}
