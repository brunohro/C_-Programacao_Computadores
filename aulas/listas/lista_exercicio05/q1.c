#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;

    printf("--> Digite a ordem da matriz (n): ");
    scanf("%i", &n);

    int matriz[n][n];

    srand(time(NULL)); // inicializando o gerador de números aleatórios

    // preenchendo minha matriz com valores aleatórios
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matriz[i][j] = rand() % 100;  // n entre 0 e 99
            printf("%3d ", matriz[i][j]); // largura miníma de 3 espaços
        }
        printf("\n ");
    }

    // Exibição da diagonal principal

    printf("--> Elementos  da diagonal principal: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%3d", matriz[i][i]);
    }

    printf("\n ");
    return 0;
}
