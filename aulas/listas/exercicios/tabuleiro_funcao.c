#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define linhas 10
#define colunas 10

int preenchendo_matriz()
{
    for (int i = 0; i < linhas; i++)
    { // preenche minha matriz toda com 0
        for (int j = 0; j < colunas; j++)
        {
            matriz[i][j] = numero;
            // printf(" %d", matriz[i][j]);
        }
        // printf("\n");
    }

    int linha_aleatorio;
    int coluna_aleatorio;
    for (int k = 0; k < 10; k++)
    {
        linha_aleatorio = rand() % 10;
        coluna_aleatorio = rand() % 10;
        matriz[linha_aleatorio][coluna_aleatorio] = 1;
    }
}
int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int modo;
    printf("\n========= BEM VINDO AO TABOLEIRO =========\n");
    printf("\n--> DIGITE O MODO DE JOGO: \n");
    printf("\n--> 1\n--> 2\n--> 0 (sair)\n ");
    scanf("%i", &modo);

    while (modo != 0)
    {
        if (modo == 1)
        {

            int jogadores[2][2];
            int add_jogador = 0;
            int add_acerto = 0;
            int tentativas;

            for (int i = 0; i < 2; i++)
            {
                int matriz[linhas][colunas];
                int numero = 0;

                printf("\n==========================================\n");
                printf("\n========= BEM VINDO AO TABOLEIRO =========\n");
                for (int i = 0; i < linhas; i++)
                {
                    if (i == 0)
                    {
                        printf("\n    [0] [1] [2] [3] [4] [5] [6] [7] [8] [9]\n");
                    }
                    printf("[%i]", i);
                    for (int j = 0; j < colunas; j++)
                    {
                        printf("  * ", matriz[i][j]); // ocultando os números
                    }
                    printf("\n");
                }

                int linha_user;
                int coluna_user;
                int acertos = 0;
                tentativas = 0;

                while ((add_jogador == 0 && acertos != 5) || (add_jogador == 1 && acertos < 5 && tentativas < jogadores[0][0]))
                {
                    printf("\n--> DIGITE A LINHA: ");
                    scanf("%i", &linha_user);

                    printf("\n--> DIGITE A COLUNA: ");
                    scanf("%i", &coluna_user);

                    tentativas++;
                    if (matriz[linha_user][coluna_user] == 1)
                    {
                        acertos++;
                        printf("\n=============== ACERTOU :) ===============\n");
                        printf("\n--> TOTAL DE ACERTOS: %i", acertos);
                        printf("\n--> TOTAL DE TENTATIVAS: %i", tentativas);
                        printf("\n==========================================\n");
                        matriz[linha_user][coluna_user] = 0;
                    }
                    else
                    {
                        printf("\n================ ERROU :( ================\n");
                        printf("\n--> TOTAL DE ACERTOS: %i", acertos);
                        printf("\n--> TOTAL DE TENTATIVAS: %i", tentativas);
                        printf("\n==========================================\n");
                    }
                }
                if (acertos == 5)
                {
                    printf("\n --> PARABENS, VOCE CONSEGUIU ENCONTRAR OS 5 * \n");
                    printf("\n --> TOTAL DE %i TENTATIVAS \n", tentativas);
                }
                else
                {
                    printf("\n --> PARABENS, SEU NUMERO DE ACERTOS FOI DE %i \n", acertos);
                    printf("\n -->TOTAL DE %i TENTATIVAS \n", tentativas);
                }

                if (add_jogador == 0)
                {
                    jogadores[0][0] = tentativas;
                    jogadores[0][1] = acertos;
                    add_acerto++;
                    add_jogador++;
                }
                else
                {
                    jogadores[1][0] = tentativas;
                    jogadores[1][1] = acertos;
                }
            }

            if (jogadores[0][1] > jogadores[1][1])
            {
                printf("\n=============== PARABENS :) ===============\n");
                printf("\n========== JOGADOR UM VENCEU :) ===========\n");
                jogadores[0][0] = 0;
                jogadores[0][1] = 0;
                jogadores[1][0] = 0;
                jogadores[1][1] = 0;
            }
            else if (jogadores[1][0] < jogadores[0][0])
            {
                printf("\n=============== PARABENS :) ===============\n");
                printf("\n========= JOGADOR DOIS VENCEU :) ==========\n");
                jogadores[0][0] = 0;
                jogadores[0][1] = 0;
                jogadores[1][0] = 0;
                jogadores[1][1] = 0;
            }
            else
            {
                printf("\n=============== PARABENS :) ===============\n");
                printf("\n=========== EMPATE TECNICO :) =============\n");
                jogadores[0][0] = 0;
                jogadores[0][1] = 0;
                jogadores[1][0] = 0;
                jogadores[1][1] = 0;
            }
            printf("\n--> DESEJA CONTINUAR ?");
            printf("\n--> DIGITE O MODO DE JOGO: \n");
            printf("\n--> 1\n--> 2\n--> 0 (sair)\n ");
            scanf("%i", &modo);
        }
        else if (modo == 2)
        {
            int jogadores[2][2] = {0};
            int matriz[linhas][colunas];
            int numero = 0;

            for (int i = 0; i < linhas; i++)
            { // preenche minha matriz toda com 0
                for (int j = 0; j < colunas; j++)
                {
                    matriz[i][j] = numero;
                    // printf(" %d", matriz[i][j]);
                }
                // printf("\n");
            }

            int linha_aleatorio;
            int coluna_aleatorio;
            for (int k = 0; k < 10; k++)
            {
                linha_aleatorio = rand() % 10;
                coluna_aleatorio = rand() % 10;
                matriz[linha_aleatorio][coluna_aleatorio] = 1;
            }
            printf("\n==========================================\n");
            printf("\n========= BEM VINDO AO TABOLEIRO =========\n");
            for (int i = 0; i < linhas; i++)
            {
                if (i == 0)
                {
                    printf("\n    [0] [1] [2] [3] [4] [5] [6] [7] [8] [9]\n");
                }
                printf("[%i]", i);
                for (int j = 0; j < colunas; j++)
                {
                    printf("  * ", matriz[i][j]); // ocultando os números
                }
                printf("\n");
            }

            int linha_user;
            int coluna_user;
            // int acertos = 0;
            // tentativas = 0;
            int user = 2; // se par (jogador um) se impar (jogador dois)

            while (jogadores[0][1] != 5 && jogadores[1][1] != 5)
            {
                if (user % 2 == 0)
                {
                    printf("\n * JOGADOR UM *");
                }
                else
                {
                    printf("\n * JOGADOR DOIS *");
                }
                printf("\n--> DIGITE A LINHA: ");
                scanf("%i", &linha_user);

                printf("\n--> DIGITE A COLUNA: ");
                scanf("%i", &coluna_user);

                // tentativas++;
                if (matriz[linha_user][coluna_user] == 1)
                {
                    if (user % 2 == 0)
                    {
                        jogadores[0][1] += 1; // add acerto
                        jogadores[0][0] += 1; // add tentativa
                        printf("\n=============== ACERTOU :) ===============\n");
                        printf("\n--> TOTAL DE ACERTOS (J1): %i", jogadores[0][1]);
                        printf("\n--> TOTAL DE TENTATIVAS (J1): %i", jogadores[0][0]);
                    }
                    else // user 2
                    {
                        jogadores[1][1] += 1; // add acerto
                        jogadores[1][0] += 1; // add tentativa
                        printf("\n=============== ACERTOU :) ===============\n");
                        printf("\n--> TOTAL DE ACERTOS (J2): %i", jogadores[1][1]);
                        printf("\n--> TOTAL DE TENTATIVAS (J2): %i", jogadores[1][0]);
                    }
                    printf("\n==========================================\n");
                    matriz[linha_user][coluna_user] = 0;
                }
                else
                {
                    if (user % 2 == 0)
                    {
                        jogadores[0][0] += 1; // add tentativa
                        printf("\n================ ERROU :( ================\n");
                        printf("\n--> TOTAL DE ACERTOS (J1): %i", jogadores[0][1]);
                        printf("\n--> TOTAL DE TENTATIVAS (J1): %i", jogadores[0][0]);
                    }
                    else
                    {                         // user 2
                        jogadores[1][0] += 1; // add tentativa
                        printf("\n================ ERROU :( ================\n");
                        printf("\n--> TOTAL DE ACERTOS (J2): %d", jogadores[1][1]);
                        printf("\n--> TOTAL DE TENTATIVAS (J2): %d", jogadores[1][0]);
                    }
                    printf("\n==========================================\n");
                }
                user++;
            }

            if (jogadores[0][1] == 5)
            {
                printf("\n=============== PARABENS :) ===============\n");
                printf("\n========== JOGADOR UM VENCEU :) ===========\n");
                jogadores[0][0] = 0;
                jogadores[0][1] = 0;
                jogadores[1][0] = 0;
                jogadores[1][1] = 0;
            }
            else
            {
                printf("\n=============== PARABENS :) ===============\n");
                printf("\n========= JOGADOR DOIS VENCEU :) ==========\n");
                jogadores[0][0] = 0;
                jogadores[0][1] = 0;
                jogadores[1][0] = 0;
                jogadores[1][1] = 0;
            }

            printf("\n--> DESEJA CONTINUAR ?");
            printf("\n--> DIGITE O MODO DE JOGO: \n");
            printf("\n--> 1\n--> 2\n--> 0 (sair)\n ");
            scanf("%i", &modo);
        }
        else
        {
            printf("\n * ERRO --> OPERACAO INVALIDA\n * SAINDO...");
            break;
        }
    }

    return 0;
}
