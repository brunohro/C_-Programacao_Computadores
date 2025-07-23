#include <stdio.h>
#include <string.h>

struct Aluno
{
    char nome[50];
    int matricula;
    float media_final;
};

#define N_MAX_ALUNOS 100
int main(int argc, char const *argv[])
{
    int n_alunos;

    printf("DIGITE O NUMERO DE ALUNOS: ");
    scanf("%i", &n_alunos);

    if (n_alunos > 0 && n_alunos <= N_MAX_ALUNOS)
    {
        struct Aluno Alunos[n_alunos];

        for (int i = 0; i < n_alunos; i++)
        {
            printf("\n --> Digite o nome do aluno %d: ", i + 1);
            scanf(" %[^\n]", &Alunos[i].nome);

            printf("\n --> Digite a matricula do aluno %d: ", i + 1);
            scanf("%i", &Alunos[i].matricula);

            printf("\n --> Digite a media final do aluno %d: ", i + 1);
            scanf("%f", &Alunos[i].media_final);
        }

        // ORDENAÇÃO
        float maior_media = 0;
        for (int i = 0; i < n_alunos; i++)
        {
            for (int j = i + 1; j < n_alunos; j++)
            {
                if (Alunos[i].media_final < Alunos[j].media_final)
                {
                    int aux_media = Alunos[i].media_final;
                    Alunos[i].media_final = Alunos[j].media_final;
                    Alunos[j].media_final = aux_media;

                    int aux_matricula = Alunos[i].matricula;
                    Alunos[i].matricula = Alunos[j].matricula;
                    Alunos[j].matricula = aux_matricula;

                    etchar aux_nome[50];
                    strcpy(aux_nome, Alunos[i].nome); // passando o valor de uma para outra variável
                    strcpy(Alunos[j].nome, Alunos[i].nome);
                    strcpy(aux_nome, Alunos[j].nome);
                }
            }
        }

        for (int i = 0; i < n_alunos; i++)
        {
            printf("\n --> Nome: %s\n --> Matricula %i \n --> Media final: %.2f", Alunos[i].nome, Alunos[i].matricula, Alunos[i].media_final);
            printf("\n --> Status: %s \n", Alunos[i].media_final >= 6.0 ? "Aprovador" : "Reprovado");
        }
    }
    else
    {
        printf("\n--> NUMERO DE ALUNOS INVALIDO");
    }

    return 0;
}
