#include <stdio.h>

int main(void){

    int n1, n2, mult = 0;
    printf("--> Esse programa informa o valor da multiplicacao entre dois numeros! \n");
    printf("--> Digite o primeiro valor: \n");
    scanf("%i", &n1);
    printf("--> Digite o segundo valor: \n");
    scanf("%i", &n2);

    for(int i = 1; i <= n2; i++){ 
        mult += n1; // mesma coisa que mult = mult + n1;
    }

    printf("RESULTADO DE %i X %i = %i", n1, n2, mult);


    return 0;
}