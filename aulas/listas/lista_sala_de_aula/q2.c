#include <stdio.h>

int main(void)
{
    int n1, n2, n3;
    printf("Digite o primeiro numero:   \n");
    scanf("%i", &n1);
    printf("Digite o segundo numero:   \n");
    scanf("%i", &n2);
    printf("Digite o terceiro numero:   \n");
    scanf("%i", &n3);

    if(n1 > n2 && n1 > n3){
        if(n2 > n3){ 
            printf("ORDEM DECRESCENTE:  \n");   
            printf("%i\n%i\n%i\n\n", n1, n2, n3);
        } else {
            printf("ORDEM DECRESCENTE:  \n");
            printf("%i\n%i\n%i\n\n", n1, n3, n2);
        }
    } else if (n2 > n1 && n2 > n3)
    {
        if (n1 > n3)
        {
            printf("ORDEM DECRESCENTE:  \n");
            printf("%i\n%i\n%i\n\n", n2, n1, n3);
        }
        else{
            printf("ORDEM DECRESCENTE:  \n");
            printf("%i\n%i\n%i\n", n2, n3, n1);
        }
    } else if( n3 > n1 && n3 > n2){
        if (n1 > n2)
        {
            printf("ORDEM DECRESCENTE:  \n");
            printf("%i\n%i\n%i\n\n", n3, n1, n2);
        } else{
            printf("ORDEM DECRESCENTE:  \n");
            printf("%i\n%i\n%i\n\n", n3, n2, n1);
        }
    }
    
    return 0;
}
