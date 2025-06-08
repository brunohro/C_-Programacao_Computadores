#include <stdio.h>

int main(void)
{
    int n1, n2;
    printf("Esse programa informa se os numeros sao iguais ou diferentes");
    printf("Digite o primeiro numero:   ");
    scanf("%i", &n1);
    printf("Digite o segundo numero:   ");
    scanf("%i", &n2);

    if( n1 == n2){
        printf("Os numeros sao iguais");
    } else{
        printf("os numeros sao diferentes");
    }
    return 0;
}
