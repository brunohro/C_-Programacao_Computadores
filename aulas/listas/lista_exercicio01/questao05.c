// Um vendedor recebe um salário fixo mais 5% de comissão sobre as suas vendas realizadas. Crie um
// programa em linguagem C que recebe o salário fixo do funcionário e o valor de suas vendas, calcule
// e mostre o valor a receber devido à comissão e o salário final.

#include <stdio.h>

int main(void)
{
    float valor_fixo, valor_vendas;
    printf("Esse programa exibe o valor total que o funcionario vai receber\n");
    printf("Digite o valor do salario fixo: \n");
    scanf("%f", &valor_fixo);
    printf("Digite o valor total de vendas: \n");
    scanf("%f", &valor_vendas);

    float comissao = valor_vendas * 0.05;
    float salario_final = comissao + valor_fixo;
    printf("O funcionario deve receber um total de %.2f", salario_final);
    return 0;
}
