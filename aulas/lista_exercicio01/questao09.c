// Três amigos, José, João e Manoel, decidiram rachar igualmente a conta de um bar. Faça um programa
// em linguagem C para ler o valor total da conta e imprimir em tela quanto cada um dos amigos deve
// pagar, mas faça com que José e João não paguem centavos. Exemplo: uma conta de R$ 300,53 resulta
// em R$100,00 para José, R$100,00 para João e R$100,53 para Manoel.

#include <stdio.h>
int main(void)
{
    float valor_conta;
    printf("Esse programa mostra o valor que cada um vai pagar\n");
    printf("Digite o valor da conta:    \n");
    scanf("%f", &valor_conta);

    int pagamento_simples = valor_conta / 3;

    int jose = pagamento_simples;
    int joao = pagamento_simples;
    float manoel = valor_conta - (pagamento_simples * 2);

    printf("Jose deve pagar:    %i\n", jose);
    printf("Joao deve pagar:    %i\n", joao);
    printf("Manoel deve pagar:    %0.2f\n", manoel);
    return 0;
}
