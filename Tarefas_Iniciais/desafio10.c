//Fazer a tabuada de um número escolhido pelo usuário
#include <stdio.h>

int main(void){
    int numero;
    printf("Esse programa retorna a tabuada de um numero\n");
    printf("Digite um numero: \n");
    scanf("%i", &numero);

    printf("A tabuada de %i é: ", numero);
    for(int i = 1; i <= 10; i++){
        printf("%i x %i = %i\n", i, numero, i * numero);
    }
    return 0;
}