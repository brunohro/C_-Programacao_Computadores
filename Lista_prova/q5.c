#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int primeiro_maior = 0, segundo_maior = 0;
    int valor;
    srand(time(NULL)); // atualizando para o rand não gerar o mesmo valor
    
    for(int i = 1; i <= 15; i++){
        valor = (rand() % (100 - 10 + 1)) + 10; // gerando o meu valor 

        printf("\n[%i] - %i", i, valor);
        if (valor > primeiro_maior)
        {
            segundo_maior = primeiro_maior; // guardando o segundo maior número
            primeiro_maior = valor; // atualizando maior número 
        } else if (valor > segundo_maior && valor < primeiro_maior)
        {
            segundo_maior = valor;
        }
        
    }
    printf("\n--> MAIOR VALOR GERADO: %i", primeiro_maior);
    printf("\n--> SEGUNDO MAIOR VALOR GERADO: %i", segundo_maior);
    
    return 0;
}