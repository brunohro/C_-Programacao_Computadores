#include <stdio.h>

int main(void){
    int num1, num2;
    printf("\n--> Digite o primeiro valor: \n");
    scanf("%i", &num1);
    printf("\n--> Digite o segundo valor:   \n");
    scanf("%i", &num2);

    if(num1 == num2){
        printf("\n--> Sao iguais");
    } else{
        printf("\n--> Sao diferentes");
    }
    
    return 0;
}