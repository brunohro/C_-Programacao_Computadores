#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Digite o primeiro numero (a):   \n");
    scanf("%i", &a);
    printf("Digite o segundo numero (b):   \n");
    scanf("%i", &b);

    if(a > b){
        printf("ORDEM CRESCENTE:\n%i\n%i", a, b);

    } else if (b > a)
    {
        int valor_temp = a;
        a = b;
        b = valor_temp;
        printf("ORDEM CRESCENTE:\n%i(a)\n%i(b)", a, b);
    }
    else{
        printf("ERRO:  Os valores informados sao iguais!");
    }
    return 0;
}
