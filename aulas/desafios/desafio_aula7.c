#include <stdio.h>

int main(void)
{
    int ano;
    printf("Digite um numero:   ");
    scanf("%i", &ano);

    if( ano > 0){
        if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
            printf("Ano bissexto");
        } else{
            printf("Ano nao e bissexto");
        }
    } else{ 
        printf("Ano inválido");
    }

    return 0;
}
