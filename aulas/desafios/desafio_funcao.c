#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 100

// Estrutura do aluno
typedef struct
{
    int matricula;
    char nome[50];
    int idade;
    float nota1;
    float nota2;
} Aluno;

Aluno alunos[MAX_ALUNOS];
int totalAlunos = 0;

// Funções
void cadastrarAluno()
{
    if (totalAlunos < MAX_ALUNOS)
    {
        printf("Matricula: ");
        scanf("%d", &alunos[totalAlunos].matricula);
        getchar(); // Limpa o buffer

        printf("Nome: ");
        fgets(alunos[totalAlunos].nome, 50, stdin);
        alunos[totalAlunos].nome[strcspn(alunos[totalAlunos].nome, "\n")] = '\0';

        printf("Idade: ");
        scanf("%d", &alunos[totalAlunos].idade);

        printf("Nota 1: ");
        scanf("%f", &alunos[totalAlunos].nota1);

        printf("Nota 2: ");
        scanf("%f", &alunos[totalAlunos].nota2);

        totalAlunos++;
        printf("Aluno cadastrado com sucesso!\n\n");
    }
    else
    {
        printf("Limite de alunos atingido!\n");
    }
}

int buscarAlunoPorMatricula(int matricula)
{
    for (int i = 0; i < totalAlunos; i++)
    {
        if (alunos[i].matricula == matricula)
            return i;
    }
    return -1;
}

void exibirAluno()
{
    int matricula;
    printf("Digite a matricula do aluno: ");
    scanf("%d", &matricula);

    int idx = buscarAlunoPorMatricula(matricula);
    if (idx != -1)
    {
        printf("Matricula: %d\n", alunos[idx].matricula);
        printf("Nome: %s\n", alunos[idx].nome);
        printf("Idade: %d\n", alunos[idx].idade);
        printf("Nota 1: %.2f\n", alunos[idx].nota1);
        printf("Nota 2: %.2f\n", alunos[idx].nota2);
    }
    else
    {
        printf("Aluno nao encontrado.\n");
    }
}

void exibirTodosAlunos()
{
    if (totalAlunos == 0)
    {
        printf("Nenhum aluno cadastrado.\n");
        return;
    }

    for (int i = 0; i < totalAlunos; i++)
    {
        printf("\nAluno %d:\n", i + 1);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Nota 1: %.2f\n", alunos[i].nota1);
        printf("Nota 2: %.2f\n", alunos[i].nota2);
    }
}

void modificarNotas()
{
    int matricula;
    printf("Digite a matricula do aluno para alterar notas: ");
    scanf("%d", &matricula);

    int idx = buscarAlunoPorMatricula(matricula);
    if (idx != -1)
    {
        printf("Nova Nota 1: ");
        scanf("%f", &alunos[idx].nota1);
        printf("Nova Nota 2: ");
        scanf("%f", &alunos[idx].nota2);
        printf("Notas atualizadas com sucesso!\n");
    }
    else
    {
        printf("Aluno nao encontrado.\n");
    }
}

void exibirMediaAluno()
{
    int matricula;
    printf("Digite a matricula do aluno: ");
    scanf("%d", &matricula);

    int idx = buscarAlunoPorMatricula(matricula);
    if (idx != -1)
    {
        float media = (alunos[idx].nota1 + alunos[idx].nota2) / 2.0;
        printf("Media do aluno %s: %.2f\n", alunos[idx].nome, media);
    }
    else
    {
        printf("Aluno nao encontrado.\n");
    }
}

void mediaTurma()
{
    if (totalAlunos == 0)
    {
        printf("Nenhum aluno cadastrado.\n");
        return;
    }

    float soma = 0;
    for (int i = 0; i < totalAlunos; i++)
    {
        soma += (alunos[i].nota1 + alunos[i].nota2) / 2.0;
    }

    float mediaGeral = soma / totalAlunos;
    printf("Media da turma: %.2f\n", mediaGeral);
}

void menu()
{
    int opcao;
    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Cadastrar aluno\n");
        printf("2. Exibir aluno por matricula\n");
        printf("3. Exibir todos os alunos\n");
        printf("4. Alterar notas de aluno\n");
        printf("5. Exibir media de um aluno\n");
        printf("6. Exibir media da turma\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            cadastrarAluno();
            break;
        case 2:
            exibirAluno();
            break;
        case 3:
            exibirTodosAlunos();
            break;
        case 4:
            modificarNotas();
            break;
        case 5:
            exibirMediaAluno();
            break;
        case 6:
            mediaTurma();
            break;
        case 0:
            printf("Encerrando programa.\n");
            break;
        default:
            printf("Opcao invalida!\n");
        }

    } while (opcao != 0);
}

int main()
{
    menu();
    return 0;
}
