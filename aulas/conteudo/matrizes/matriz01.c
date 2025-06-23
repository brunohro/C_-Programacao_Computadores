#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n_linha, n_coluna;

    printf("\n--> DIGITE O NUMERO DE LINHAS:    \n");
    scanf("%i", &n_linha);

    printf("\n--> DIGITE O NUMERO DE COLUNAS:    \n");
    scanf("%i", &n_coluna);

    if(n_linha > 0 && n_coluna > 0){
        int matriz[n_linha][n_coluna];

        for(int i = 0; i < n_linha; i++){
            for(int j = 0; j < n_coluna; j++){
                if(i == j){
                    matriz[i][j] = 1;
                } else{
                    matriz [i][j] = 0;
                }
                printf(" %i", matriz[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
