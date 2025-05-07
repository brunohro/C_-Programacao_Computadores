#include <stdio.h>
#include <math.h>
int main(void)
{
    int n1, n2;
    printf("Digite o primeiro numero:   \n");
    scanf("%i", &n1);
    printf("Digite o segundo numero:   \n");
    scanf("%i", &n2);

    if(n1 > n2){
        int quadrado = (n2*n2);
        float raiz = sqrt(n1);
        printf("%i ao quadrado = %i\nRaiz quadrada de %i = %.2f", n2, quadrado, n1, raiz);
    } else if (n2> n1)
    {
        int quadrado = (n1*n1);
        float raiz = sqrt(n2);
        printf("%i ao quadrado = %i\nRaiz quadrada de %i = %.2f", n1, quadrado, n2, raiz);
    } else{
        printf("Os numeros sao iguais\n");
        int quadrado = (n1*n1);
        float raiz = sqrt(n2);
        printf("%i ao quadrado = %i\nRaiz quadrada de %i = %.2f", n1, quadrado, n2, raiz);
    }
    
    return 0;
}
