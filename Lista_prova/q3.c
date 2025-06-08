#include <stdio.h>

int main(void){
    int n, valor, contador = 0;
    printf("\n--> DIGITE O VALOR DE 'N' E DESCUBRA A SEQUENCIA: \n");
    scanf("%i", &n);

    for(int i = 1; n > 0; i++){ // enquanto n for menor que 0
        valor = i*i;
        contador++;
        printf("%i\n", valor);
        n--; // diminuindo o valor de n

        if(contador == 4){ // a cada 4 termos pula 1 
            i += 16;
            contador = 0;
        }

    }
    return 0;
}