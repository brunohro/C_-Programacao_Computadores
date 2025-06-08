//Verificar se um número é par ou ímpar
#include <stdio.h>
int main(void){
    int i;
    printf("Esse programa ler um numero e diz se ele e impar ou par\n");
    printf("Digite um numero: \n");
    scanf("%i", &i);
    if(i % 2 == 0){
        printf("e par\n");
    } else{
        printf("E impar");
    };
    return 0;
}


