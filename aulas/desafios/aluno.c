#include <stdio.h>

#define MAX_ALUNOS 100
typedef struct Aluno
{
    int matricula;
    char nome[50];
    int idade;
    float nota1;
    float nota2;
};

Aluno alunos[MAX_ALUNOS]; // vetor do tipo aluno
int total_aluno = 0;      // contar os alunos

void Cadastrar_aluno()
{
    if (total_aluno < MAX_ALUNOS)
    {
        printf("\n--> Matricula: ");
        scanf("%d", &alunos[total_aluno].matricula);
        getchar(); // Limpa o buffer

        printf("\n--> Nome:   ");
        fgets(alunos[total_aluno].nome, 50, stdin);

        printf("\n--> Idade:  ");
        scanf("%i", &alunos[total_aluno].idade);

        printf("\n--> Nota 1: ");
        scanf("%f", &alunos[total_aluno].nota1);

        printf("\n--> Nota 2: ");
        scanf("%f", &alunos[total_aluno].nota2);

        total_aluno++;
        printf("\n--> Aluno Cadastrado com sucesso!");
    }
    else
    {
        printf("\n --> Total maximo de alunos atingidos")
    }
}
int main(void)
{
    int opcao = 0;

    do
    {
        printf("\n--> Digite a opcao:");
        // listar opcoes
        printf("\n--> 1 Cadastrar Aluno");
        printf("\n--> 0 Sair");
        printf("\n--> Escolha uma opcao: ");
        scanf("%i", &opcao);
    } while (opcao != 0);

    switch (opcao)
    {
    case 1:
        Cadastrar_aluno();
        break;

    default:
        break;
    }

    return 0;
}
