#include <stdio.h>


int main(int argc, char const *argv[])
{
    int n_linha_A, n_colunas_A;
    int n_linha_B, n_colunas_B;

    printf("\n--> DIGITE O NUMERO DE LINHAS:    \n");
    scanf("%i", &n_linha_A);

    printf("\n--> DIGITE O NUMERO DE COLUNAS:    \n");
    scanf("%i", &n_colunas_A);

    printf("\n--> DIGITE O NUMERO DE LINHAS:    \n");
    scanf("%i", &n_linha_B);

    printf("\n--> DIGITE O NUMERO DE COLUNAS:    \n");
    scanf("%i", &n_colunas_B);

    if(n_linha_A == n_linha_B && n_colunas_A == n_colunas_B){
        int matrizA [n_linha_A][n_colunas_A];
        int matrizB [n_linha_B][n_colunas_B];
        int matrizC [n_linha_B][n_colunas_B];

        printf("\n --- PRENCHENDO MATRIZ A --- \n");
        for(int i = 0; i < n_linha_A; i++){
            for(int j = 0; j < n_colunas_A; j++){
                printf("\n--> A[%i][%i]: ", i, j);
                scanf("%i", &matrizA);
            }
        }

            printf("\n --- PRENCHENDO MATRIZ B --- \n");
        for(int i = 0; i < n_linha_B; i++){
            for(int j = 0; j < n_colunas_B; j++){
                printf("\n--> B[%i][%i]: ", i, j);
                scanf("%i", &matrizB);
            }
        }

        printf("\n --- ADICAO MATRICIAL --- \n");
        for(int i = 0; i < n_linha_A; i++){
            for(int j = 0; j < n_colunas_B; j++){
                matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
                printf("%i ", matrizC[i][j]);
            }
            printf("\n");
        }
    } 
    else{
        printf("\n * ERRO! AS MATRIZES DEVEM TER A MESMA DIMENSAO!");
    }
    return 0;
}
