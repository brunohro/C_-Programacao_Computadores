#include <stdio.h>

int main(void){
    float valor_inicial, valor_atual, pagamento;
    int meses = 0;
    printf("\n--> Digite o valor do emprestimo: ");
    scanf("%f", &valor_inicial);

    valor_atual = valor_inicial;

    for(int i = 1; i <= 12; i++){
        valor_atual = valor_atual + (valor_atual * 0.035); // adicionando o juros
        pagamento = valor_inicial * 0.1; // pagamento = valor inicial - 10% do valor dele;
        valor_atual -= pagamento;
        meses++;
        printf("\n--> Dívida restante: %.2f", valor_atual);
    }

    if(valor_atual > 0){
        while (valor_atual > 0)
        {
            valor_atual = valor_atual + (valor_atual * 0.042);
            pagamento = valor_inicial * 0.1;
            valor_atual = valor_atual - pagamento;
            meses++;
            printf("\n--> Dívida restante: %.2f", valor_atual);

        }
    }
    printf("\n--> DIVIDA QUITADA EM %i ANO E %i MESES", (meses / 12), meses - 12);


    return 0;
}