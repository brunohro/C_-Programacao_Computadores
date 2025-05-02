#include <stdio.h>

int main(void)
{
    int n1, n2, n3;
    printf("Esse programa informa se os numeros formam um triangulo\n");
    printf("Digite o primeiro numero:   \n");
    scanf("%i", &n1);
    printf("Digite o segundo numero:  \n");
    scanf("%i", &n2);
    printf("Digite o terceiro numero:   \n");
    scanf("%i", &n3);

    if(n1 < n2 + n3 && n2 < n1 + n3 && n3 < n1 + n2){
        if(n1 == n2 && n1 == n3){
            printf("Formam um triangulo equilatero\n");
        } else if (n1 == n2 || n2 == n3 || n1 == n3)
        {
            printf("Formam um triangulo isosceles\n");
        } else{
            printf("Formam um triangulo escaleno\n");
        } 
    } else{
    printf("erro! os lados nao formam um triangulo");
    }
    return 0;
}
