#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num_linha, num_colunas;
    int matriz[num_linha][num_colunas];

    printf("\n--> Digite o numero de linhas: ");
    scanf("%i", &num_linha); // definindo o total de linhas

    printf("\n--> Digite o numero de colunas: ");
    scanf("%i", &num_colunas); // definindo o total de colunas

    for (int i = 0; i < num_linha; i++) // estou preenchendo a matriz
    {
        for (int j = 0; j < num_colunas; j++)
        {
            printf("--> Digite a nota [%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < num_linha; i++)
    {
        for (int j = 0; j < num_colunas; j++)
        {
            printf("%d\n", matriz[i][j]); // exibindo resultados
        }
    }

    return 0;
}
