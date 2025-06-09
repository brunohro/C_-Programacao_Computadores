#include <stdio.h>

int main(void){
    int num1, num2, num3;
    printf("\n--> Digite o primeiro valor: \n");
    scanf("%i", &num1);
    printf("\n--> Digite o segundo valor:   \n");
    scanf("%i", &num2);
    printf("\n--> Digite o terceiro valor:   \n");
    scanf("%i", &num3);

    int soma_lados = num1 + num2 + num3;

    if(num1 < (soma_lados - num1) && num2 < (soma_lados - num2) && num3 < (soma_lados - num3)){
        printf("Formam os lados de um triangulo!");
    } else{
        printf("Nao e possivel formar um triangulo!");
    }
    return 0;
}