// primeiro código 
// 14/02/2025 
// seguintes tópicos: variáveis, tipos de dados, saída de dados e operadores aritméticos.

#include <stdio.h>

int main(void){
    int num1; // guarda o primeiro valor
    int num2; //guarda o segundo valor

    printf("\n --> Digite o primeiro numero: \n");
    scanf("%i", &num1); // entrada do primeiro número

    printf("\n --> Digite o segundo numero: \n");
    scanf("%i", &num2); // entrada do segundo número

    int resultado; //guarda resultado
    resultado = num1 + num2; // efetua op

    //exibindo resultado
    printf("\n * Resultado: %i", resultado);
    printf("\n * %i + %i = %i", num1, num2, resultado)
}