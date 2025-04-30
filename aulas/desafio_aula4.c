#include <stdio.h>

int main(void){
    int idade;
    printf("\nDigite a sua idade: \n");
    scanf("%i", &idade);


    if(idade >= 18){
        printf("Maior de idade\n");
        printf("Idade: %d\n", idade);
    } else{
        printf("Menor de idade\n");
        printf("Idade: %d\n", idade);
    }
    return 0;
}