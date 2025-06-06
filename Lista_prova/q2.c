#include <stdio.h>

int main(void){
    int n_maior = 0, n_menor = 100000;
    int somatorio = 0, quant_n = 0;
    int valor;

    do{
        printf("\nDigite um valor: (0 para encerrar!) \n");
        scanf("%i", &valor);

        if(valor != 0){
            somatorio += valor;

            if(valor < n_menor){
                n_menor = valor;
            }

            if(valor > n_maior){
                n_maior = valor;
            }

            quant_n++;
        }
    } while( valor != 0);

    printf("\n--> A MEDIA DE VALORES E IGUAL %.2f", (float)somatorio/quant_n);
    printf("\n--> Maior Valor:  %i", n_maior);
    printf("\n--> Menor Valor:  %i", n_menor);
    return 0;
}