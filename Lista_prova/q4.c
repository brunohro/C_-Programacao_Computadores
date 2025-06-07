#include <stdio.h>

int main(void){
    int num1 = 0, num2 = 1;
    int n, soma_n = 0;
    printf("--> DIGITE 'N': (O VALOR DEVE SER MENOR QUE 41)\n");
    scanf("%i", &n);

    if(n <= 0){
            printf("%i", num1); // caso o N seja menor ou igual a 0, exibo só o valor 0;
        } else
        {
            printf("\n%i", num1); // primeiro termo
            printf("\n%i", num2); // segundo termo
    
            for(int i = 2; i < n; i++){ // inicializando i = 2 ( pois já temos dois termos)
                
                soma_n = num1 + num2; // somando os termos
                printf("\n%i", soma_n);
                    
                num1 = num2; // num1 passa a ter o valor anterior, ou seja n2.
                num2 = soma_n; // num2 passa a ser a soma do valor anterior( num1 + o valor anterior de num2)
                
            }
    }
    return 0;
}