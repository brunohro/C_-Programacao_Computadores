#include <stdio.h>

int main(void){
    int valor;
    printf("\n--> Digite um valor: \n");
    scanf("%i", &valor);

    if(valor == 5){
        printf("\nVALOR IGUAL A 5");
    } else if (valor == 200)
    {
        printf("\nVALOR IGUAL A 200");
    } else if (valor == 400)
    {
        printf("\nVALOR IGUAL A 400");
    } else if(valor >= 500 && valor <= 1000){
        printf("\nVALOR ENTRE 500 E 1000");
    } else{
        printf("\nVALOR FORA DOS ESCOPOS");
    }
    
    return 0;
}