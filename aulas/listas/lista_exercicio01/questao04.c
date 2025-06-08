// Faça um programa em linguagem C que receba o valor de três notas entre 0 e 100 de um
// determinado aluno e imprima o valor da média aritmética de suas notas.
#include <stdio.h>

int main(void)
{
    int nota_um, nota_dois, nota_tres;
    printf("Esse programa exibe a media aritimetica de suas notas\n");
    printf("Digite o valor da primeira nota:    \n");
    scanf("%i", &nota_um);
    printf("Digite o valor da segunda nota:    \n");
    scanf("%i", &nota_dois);
    printf("Digite o valor da terceira nota:    \n");
    scanf("%i", &nota_tres);

    int media = (nota_um + nota_dois + nota_tres) / 3;

    printf("A media das suas notas e %i\n", media);
    return 0;
}
