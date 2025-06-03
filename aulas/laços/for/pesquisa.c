#include <stdio.h>
#define N_PESSOAS 5 // constante que estabelece o número de pessoas intrevistadas
int main(void)
{
    int altura;
    int menor_altura = 7000; 
    int maior_altura = 0;
    int soma_altura = 0;
    int pessoas_160 = 0;
    float percentual;
    for (int i = 0; i < N_PESSOAS; i++)
    {
        printf("\n--> [%i] DIGITE SUA ALTURA: ", i + 1);
        scanf("%i", &altura);
        soma_altura += altura; // add altura dentro do variável

        if(altura < 160) pessoas_160++; // irá contar as pessoas que tem menor de 160
        

        if(altura < menor_altura){ // a primeira pessoa entra - o restante verifica
            menor_altura = altura;
        }

        if(altura > maior_altura){ // a primeira pessoa entra - o restante verifica
            maior_altura = altura;
        }
    }

    percentual = ((float)pessoas_160 / N_PESSOAS) * 100;

    printf("--> Maior Altura: %i\n", maior_altura);
    printf("--> Menor Altura: %i\n", menor_altura);
    printf("--> Media de Alturas: %i\n", ((float)soma_altura/N_PESSOAS));
    printf("--> Percentual de pessoas menor que 160: %.0f%%\n", percentual);



    return 0;
}
