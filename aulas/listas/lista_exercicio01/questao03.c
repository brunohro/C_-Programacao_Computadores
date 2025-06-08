// Desenvolva um programa em linguagem C que efetua a leitura de um valor de temperatura em graus
// Fahrenheit e exiba o valor correspondente de temperatura em graus Celsius.
#include <stdio.h>

int main(void)
{
    float temp_f;
    printf("Esse programa passa o valor da temperatura de fahrenheit para Celsius\n");
    printf("Digite a temperatura em fahrenheit: ");
    scanf("%f", &temp_f);

    float temp_c = (temp_f - 32) * 5/9;

    printf("a temperatura de %.2f fahrenheit, resulta em %.2f Celsius\n", temp_f, temp_c);
    return 0;
}
