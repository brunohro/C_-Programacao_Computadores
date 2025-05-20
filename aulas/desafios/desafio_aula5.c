#include <stdio.h>
#include <math.h>
int main(void)
{
    int num;
    printf("Digite um numero:   ");
    scanf("%i", &num);

    if(num >= 0){
        printf("Raiz quadrada de %i = %.2f", num, sqrt(num));
    } else {
        printf("%i ao quadrado é = %.2f", num, pow(num, 2));
    }

    return 0;
}
