#include <stdio.h>

int main(void)
{
    float valor_p, valor_final;
    printf("Digite o valor do produto:  ");
    scanf("%f", &valor_p);

    if( valor_p < 20){
        valor_final = valor_p * 1.45;
        printf("O valor de venda do produto: %0.2f", valor_final);
    } else{
        valor_final = valor_p * 1.30;
        printf("O valor de venda do produto: %0.2f", valor_final);
    }
    return 0;
}
