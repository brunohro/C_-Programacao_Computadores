#include <stdio.h>
#include <math.h>

int main(void) 
{
    float x;
    float fx;
    printf("--> Esse programa exibe em tela o valor da funcao f(x) \n");
    printf("Digite o valor: \n");
    scanf("%f", &x);

     // x não pode ser um número entre -4 --> 4 
    if(x >= -4 && x <= 4){
        printf("\n**********************************************\n");
        printf(" --> f(x) = nao existe para o valor informado \n --> x deve ser menor que -4 ou maior que 4!");
    } else{
        printf("\n**********************************************\n");
        fx = ((5 * x) + 3)/sqrt((x*x) - 16);
        printf("--> O resultado de f(x) = %.2f", fx);
    }
    return 0;
}
