// Usar if/else para comparar dois números e dizer qual é maior
#include <stdio.h>

int main(void){
    int numero_um, numero_dois;
    printf("Esse programa compara os números e diz qual o maior numero");
    printf("Digite o primeiro numero: \n");
    scanf("%i", &numero_um);
    printf("Digite o segundo numero: \n");
    scanf("%i", &numero_dois);

    if(numero_um>numero_dois){
        printf("o numero %i e maior que o numero %i", numero_um, numero_dois);
    }
    if(numero_um < numero_dois){
        printf("o numero %i e maior que o numero %i", numero_dois, numero_um);
    }
    else{
        printf("Os numeros sao iguais");
    }

    return 0;
}