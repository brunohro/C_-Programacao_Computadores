#include <stdio.h>
#include <math.h>

int main(void){
    float conta;
    printf("\n--> Digite o valor total da conta:    \n");
    scanf("%f", &conta);

    float jose = floor(conta/3);
    float joao = floor(conta/3);
    float manoel = conta - jose - joao;
    printf("\n--> Jose pagou %.2f\n--> Joao pagou %.2f\n--> Manoel pagou %.2f\n", jose, joao, manoel);

    
    return 0;
}