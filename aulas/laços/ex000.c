#include <stdio.h>

int main(void)
{
    int numero;
    int fatorial = 1;
    printf("Esse programa calcula um fatorial de um numero\n");
    printf("Digite o numero: \n");
    scanf("%i", &numero);


    if(numero>=0){

        printf("--> %i! = ", numero);
        while (numero >= 1)
        {
            fatorial = fatorial * numero;
            numero--;
        }
        
        printf("%i", fatorial);
    } else{
        printf("Valor invalido");
    }

    // while (i <= numero)
    // {
    //     numero = numero * (numero - 1);
    //     printf("%i\n", numero);
    //     i--;
    // }
    
    return 0;
}
