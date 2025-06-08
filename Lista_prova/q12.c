#include <stdio.h>
#include <math.h>
int main(void){
    int n1, n2, n3, media;
    int maior_nota_final = 0, menor_nota_final = 100;
    int total_aulas = 0;
    int nota_turma = 0;
    int reprovados = 0;
    float reprovados_falta = 0.0;
    for(int i = 1; i <= 20; i++){ // CORRETO É 20 
        printf("DIGITE A PRIMEIRA NOTA: (peso 2)\n");
        scanf("%i", &n1);
        printf("DIGITE A SEGUNDA NOTA: (peso 3)\n");
        scanf("%i", &n2);
        printf("DIGITE A TERCEIRA NOTA: (peso 5)\n");
        scanf("%i", &n3);
        printf("\n--> TOTAL DE AULAS FREQUENTADAS:  \n");
        scanf("%i", &total_aulas);

        media = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;

        if(media > maior_nota_final){
            maior_nota_final = media;
        } 
        if( media < menor_nota_final){
            menor_nota_final = media;
        }
        nota_turma += media;
        if(media >= 60 && total_aulas >= 40){
            printf("\n ALUNO APROVADO! -- MEDIA FINAL = %i\n", media);
        } else{
            printf("\n ALUNO REPROVADO! -- MEDIA FINAL = %i\n", media);
            reprovados++;
            if(total_aulas < 40){
                reprovados_falta++;
            }
        }
    }


    printf("\n--> MAIOR NOTA FINAL: %i", maior_nota_final);
    printf("\n--> MENOR NOTA FINAL: %i", menor_nota_final);
    printf("\n--> MEDIA DA NOTA FINAL DA TURMA: %i", nota_turma/20 ); // correto é 20
    printf("\n--> TOTAL DE ALUNOS REPROVADOS: %i", reprovados);
    printf("\n--> %.2f%% DE ALUNOS REPROVADOS POR FALTA",(reprovados_falta/20) * 100);
    return 0;
}