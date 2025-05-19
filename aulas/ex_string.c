#include <stdio.h>
#include <string.h>   // utilizar strcmp

int main(void) {
    char nome1 [30];  // receber a string  
    char nome2 [30];   // receber a string
    char aux;
    int num1;
    
    printf(" Digite um numero: ");
    scanf("%i",&num1);

    fflush(stdin);
   //scanf("%c",&aux);     Se o fflush não funcionar   

    printf(" -> Digite seu nome: ");
    scanf("%[^\n]",&nome1);

    printf(" * Nome 1: %s", nome1);

    fflush(stdin);
    //scanf("%c",&aux);     Se o fflush não funcionar

    printf("\n -> Digite seu nome: ");
    scanf("%[^\n]",&nome2);

    printf(" * Nome 2: %s", nome2);
    fflush(stdin);
    // > 0: nome1 > nome2
    // == 0: nome1 == nome2
    // < 0: nome1 < nome2
    int cmp = strcmp(nome1,nome2);
    
    if(cmp > 0) {
        printf("\n %s    %s",nome2, nome1);
    } else if (cmp < 0) {
        printf("\n %s    %s",nome1, nome2);
    } else {
        printf("\n Strings iguais!");
    }

    return 0;
}
