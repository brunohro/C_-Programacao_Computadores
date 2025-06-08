#include <stdio.h>

int main(void)
{
    int n1, n2, n3;
    printf("Esse programa informa se os numeros formam um triangulo");
    printf("Digite o primeiro numero:   ");
    scanf("%i", &n1);
    printf("Digite o segundo numero:   ");
    scanf("%i", &n2);
    printf("Digite o terceiro numero:   ");
    scanf("%i", &n3);

    if(n1 < n2 + n3 && n2 < n1 + n3 && n3 < n1 + n2){
        printf("Formam um triangulo");
    } else{
    printf("erro! os lados nao formam um triangulo");
    }
    return 0;
}
