#include <stdio.h>
// Calcular a média de 3 notas e informar se está aprovado ou reprovado

int Media(int nota_um, int nota_dois, int nota_tres){
    return (nota_um + nota_dois + nota_tres) / 3;
}

int main(void){
    int nota_um, nota_dois, nota_tres;
    printf("Esse programa calcula a media final do aluno e ver se esta aprovado ou reprovado");
    printf("\nDigite a primeira nota: \n");
    scanf("%i", &nota_um);
    printf("\nDigite a segunda nota: \n");
    scanf("%i", &nota_dois);
    printf("\nDigite a terceira nota: \n");
    scanf("%i", &nota_tres);

    int resultado = Media(nota_um, nota_dois, nota_tres);

    if(resultado >= 60){
        printf("Aluno Aprovado\n");
        printf("Media final: %d\n", resultado);
    } else{
        printf("Aluno reprovado\n");
        printf("Media final: %d\n", resultado);
    }
    return 0;
}