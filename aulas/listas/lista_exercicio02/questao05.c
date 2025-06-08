#include <stdio.h>

int main(void)
{
    float salario, desconto;
    printf("Digite o valor do salario a receber:   \n");
    scanf("%f", &salario);

    if(salario <= 600){
        printf("ISENTO - SALARIO A RECEBER: ", salario);
    } else if (salario > 600 && salario <= 1200)
    {
        desconto = salario * 0.20;
        printf("Desconto de %.2f\nSalario a receber: %.2f\n", desconto, salario - desconto);
    }else if (salario > 1200 && salario <= 2000)
    {
        desconto = salario * 0.25;
        printf("Desconto de %.2f\nSalario a receber: %.2f\n", desconto, salario - desconto);
    }
    else
    {
        desconto = salario * 0.30;
        printf("Desconto de %.2f\nSalario a receber: %.2f\n", desconto, salario - desconto);
    }
    
    return 0;
}
