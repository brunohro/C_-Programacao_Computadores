#include <stdio.h>

int main(void)
{
    int num;
    printf("--> ESSE PROGRAMA EXECUTA O LACO DE REPETICAO --> FOR\n");
    printf("--> DIGITE UM NUMERO:   \n");
    scanf("%i", &num);

    printf("** TABUADA DE MULTIPLICACAO **\n");
    for(int i = 0; i <= 10; i++){
        printf("%i x %i = %i\n", num, i, (num*i));
    }
    return 0;
}
