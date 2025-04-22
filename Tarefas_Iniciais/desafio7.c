#include <stdio.h>
//Criar um menu com switch para escolher opções simples

int main(void){
    int opcao;
    printf("Esse programa permite o usuario escolher duas opcoe");
    printf("Escolha um numero\n 1 ou 2\n");
    scanf("%i", &opcao);

    switch (opcao){
        case 1:{
            printf("A opcao 1 esta falando para voce estudar!");
            break;
        }
        
        case 2:{
            printf("A opcao 2 esta falando para voce caminhar!");
            break;
        }
        
        default:
        printf("Op invalida");
            break;
        }


    return 0;
}