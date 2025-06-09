#include <stdio.h>
// salario final = salario fixo + 0.05 
int main(void){
    float s_fixo, v_vendas;

    printf("\n--> Salario fixo: \n");
    scanf("%f", &s_fixo);

    printf("\n--> Valor de vendas: \n");
    scanf("%f", &v_vendas);

    float comissao = v_vendas * 0.05;
    printf("\n--> Salario fixo de %.2f + Comissao de %.2f --> Salario final = %.2f ", s_fixo, comissao, (s_fixo + comissao));
    return 0;
}