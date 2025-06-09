#include <stdio.h>

int main(void){
    int p = 15, m = 20, g = 25;
    int q_p, q_m, q_g;
    printf("\n--> Quantidade referente a camisas 'p': \n");
    scanf("%i", &q_p);

    printf("\n--> Quantidade referente a camisas 'm': \n");
    scanf("%i", &q_m);

    printf("\n--> Quantidade referente a camisas 'g': \n");
    scanf("%i", &q_g);

    int valor_final = (p*q_p) + (m * q_m) + (g * q_g);
    printf("\n--> Valor final a ser arrecadado: R$ %i", valor_final);
    return 0;
}