#include <stdio.h>

int main(void)
{
    int cont_p = 0, cont_n = 0, somatorio = 0;
    int numero;

    

    while (numero != 0)
    {
        printf("--> Digite um numero: ( 0 para sair! ) \n");
        scanf("%i", &numero);

        if (numero == 0)
        {
            printf("Saindo...");
        } else{
            if (numero > 0)
            {
                cont_p++;
            } else{
                cont_n++;
            }
            somatorio = somatorio + numero;
        }
        
    }

    printf("\n --> positivos: %i", cont_p);
    printf("\n --> negativos: %i", cont_n);
    printf("\n --> somatorio: %i", somatorio);
    
    return 0;
}
