#include <stdio.h>

int main(void){

    int n;
    float t = 0; // inicializando a variável T
    printf("--> DIGITE O VALOR DE 'N': \n");
    scanf("%i", &n); // recebendo o valor de N

    for(int i = 1; i <= n; i++){ // iniciando o loping i = 1  
        t += (float)i / (n - i + 1); // i = 1 ( numerador inicial ) ( n - i + 1) n - i para ir diminuindo o valor de n até chegar em 1
    }

    printf("T = %.2f", t);
    return 0;
}