#include <stdio.h>
#include <string.h>

#define TAM 3 // Número de alunos

struct Aluno
{
    char nome[50];
    int idade;
    float notaFinal;
};

int main()
{
    struct Aluno turma[TAM];

    // Entrada dos dados
    for (int i = 0; i < TAM; i++)
    {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]", turma[i].nome);

        printf("Digite a idade do aluno %d: ", i + 1);
        scanf("%d", &turma[i].idade);

        printf("Digite a nota final do aluno %d: ", i + 1);
        scanf("%f", &turma[i].notaFinal);
    }

    // Exibindo os dados
    printf("\n--- Lista de Alunos ---\n");
    for (int i = 0; i < TAM; i++)
    {
        printf("Aluno %d: %s, Idade: %d, Nota: %.2f\n",
               i + 1, turma[i].nome, turma[i].idade, turma[i].notaFinal);
    }

    return 0;
}
