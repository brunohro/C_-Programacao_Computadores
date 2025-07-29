#include <stdio.h>
// Esse programa irá coletar as notas de uma turma de alunos, exibir a média final de cada aluno e ao final mostrar quem são os aprovados, reprovados e quem está em recuperação

// 1 - quantidade de alunos
// 2 - receber a matricula e as notas de cada aluno
// 3 - calcular o status do aluno ( aprovado, reprovado ou recuperação )
// 4 - se aprovado add matricula do aluno na lista( matriz ) dos aprovados ( ou outros status )
// 5 - ao final, exibir as listas de aprovados, reprovados ou em recuperação

int main(int argc, char const *argv[])
{
    int quant_alunos, quant_notas;
    printf("Digite a quantidade de alunos presente na turma: ");
    scanf("%i", &quant_alunos);

    printf("Digite a quantidade de notas para o calculo: ");
    scanf("%i", &quant_notas);

    quant_notas += 1; // add o número da matrícula

    int Alunos[quant_alunos][quant_notas];

    for (int i = 0; i < quant_alunos; i++) // preenchendo as notas
    {
        float soma = 0;
        for (int j = 0; j < quant_notas; j++)
        {
            printf("\n --> Digite a nota %i do aluno:\n", j + 1);
            scanf("%i", &Alunos[i][j]);
            soma += Alunos[i][j];
        }
    }

    // for (int i = 0; i < quant_alunos; i++)
    // {
    //     for (int j = 0; j < quant_notas; j++)
    //     {
    //         printf("Matricula do aluno - [%i] media = %.2f", );
    //     }
    // }

    return 0;
}
