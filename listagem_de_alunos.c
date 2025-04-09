#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 100

// Definindo a estrutura para armazenar os dados dos alunos
typedef struct {
    char nome[100];
    int idade;
    float nota;
} Aluno;

void cadastrarAluno(Aluno alunos[], int *quantidade) {
    if (*quantidade >= MAX_ALUNOS) {
        printf("Limite de alunos atingido!\n");
        return;
    }

    printf("\n--- Cadastro de Aluno ---\n");
    printf("Nome: ");
    scanf(" %[^\n]", alunos[*quantidade].nome);
    printf("Idade: ");
    scanf("%d", &alunos[*quantidade].idade);
    printf("Nota: ");
    scanf("%f", &alunos[*quantidade].nota);

    (*quantidade)++;
    printf("Aluno cadastrado com sucesso!\n");
}

void listarAlunos(Aluno alunos[], int quantidade) {
    if (quantidade == 0) {
        printf("\nNenhum aluno cadastrado.\n");
        return;
    }

    printf("\n--- Lista de Alunos ---\n");
    for (int i = 0; i < quantidade; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Nota: %.2f\n\n", alunos[i].nota);
    }
}

void buscarAluno(Aluno alunos[], int quantidade) {
    char nomeBusca[100];
    int encontrado = 0;

    printf("\nDigite o nome do aluno que deseja buscar: ");
    scanf(" %[^\n]", nomeBusca);

    for (int i = 0; i < quantidade; i++) {
        if (strcmp(alunos[i].nome, nomeBusca) == 0) {
            printf("\nAluno encontrado:\n");
            printf("Nome: %s\n", alunos[i].nome);
            printf("Idade: %d\n", alunos[i].idade);
            printf("Nota: %.2f\n", alunos[i].nota);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Aluno não encontrado.\n");
    }
}

int main() {
    Aluno alunos[MAX_ALUNOS];
    int quantidade = 0;
    int opcao;

    do {
        printf("\n=== Sistema de Cadastro de Alunos ===\n");
        printf("1. Cadastrar aluno\n");
        printf("2. Listar alunos\n");
        printf("3. Buscar aluno por nome\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarAluno(alunos, &quantidade);
                break;
            case 2:
                listarAlunos(alunos, quantidade);
                break;
            case 3:
                buscarAluno(alunos, quantidade);
                break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    return 0;
}
