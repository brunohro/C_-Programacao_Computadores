#include <stdio.h>

int main(void)
{
    int n1, n2, n3;
    printf("\nDigite o primeiro valor: \n");
    scanf("%i", &n1);
    printf("\nDigite o segundo valor: \n");
    scanf("%i", &n2);
    printf("\nDigite o terceiro valor: \n");
    scanf("%i", &n3);

    if(n1 > n2){
        if(n1> n3){
            printf("%i e o maior", n1);
        }
    } else if (n2> n1)
    {
        if(n2>n3){
            printf("%i e o maior", n2);
        }
    } else if (n3 > n1)
    {
        if(n3 > n2){
            printf("%i e o maior", n3);
        }
    } else{
        printf("Os numeros sao iguais");
    }
    
    
    return 0;
}
