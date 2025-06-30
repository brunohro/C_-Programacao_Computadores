#include <stdio.h>
#include "estruturas.h"
#define FUNCIONARIOS 5
int main(int argc, char const *argv[])
{
    struct Funcionarios empresa[FUNCIONARIOS];
    float media_salarial = 0, media_idade = 0;

    for (int i = 0; i < FUNCIONARIOS; i++)
    {
        printf("\n--> DIGITE A IDADE DO FUNCIONARIO: ");
        scanf("%i", &empresa[i].idade);

        printf("\n--> DIGITE O SALARIO DO FUNCIONARIO: ");
        scanf("%f", &empresa[i].salario);

        printf("\n--> DIGITE O RG DO FUNCIONARIO: ");
        scanf("%i", &empresa[i].RG);
    }

    for (int i = 0; i < FUNCIONARIOS; i++)
    {
        media_salarial += empresa[i].salario;
        media_idade += empresa[i].idade;
    }

    printf("\n --> MEDIA DE IDADES: %.0f", media_idade / FUNCIONARIOS);
    printf("\n --> MEDIA SALARIAL: %.2f", media_salarial / FUNCIONARIOS);
    return 0;
}
