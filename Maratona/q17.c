#include <stdio.h>
// incompleted
int main(void){
    float salario;
    float desconto;

    printf("\n--> Digite o valor do salario:    \n");
    scanf("%f", &salario);

    if(salario > 0){
        if(salario < 600){
            printf("SALARIO: R$ %.2f", salario);
        } else if (salario > 600 && salario <= 1200)
        {
            desconto = salario * 0.20;
            printf("SALARIO: R$ %.2f", salario - desconto);
        } else if ( salario > 1200 && salario <= 2000 )
        {
            desconto = salario * 0.25;
            printf("SALARIO: R$ %.2f", salario - desconto);
        } else{
            desconto = salario * 0.30;
            printf("SALARIO: R$ %.2f", salario - desconto);
        }
        
        
    } else{
        printf("\n VALOR INVALIDO!");
    }
    return 0;
}