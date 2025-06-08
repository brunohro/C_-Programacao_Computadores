#include <stdio.h>

int main(void)
{
    int vetor[10]; // criando vetor com tamanho 10 
    int soma = 0;
    for(int i = 0; i < 10; i++){ // perguntando os numeros ao usuario
        printf("Digite o %dº numero:    ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for(int i=0; i<10; i++){
        soma += vetor[i];
    }

    float media = soma / 10.0;

    printf("A media dos numeros e: %.2f\n", media);
    return 0;
}
