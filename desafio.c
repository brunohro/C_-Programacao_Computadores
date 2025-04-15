#include <stdio.h>
// Desafio de sala 

float f(int x){
    return (x * x) + 2 * x - 5;
}
int main(int argc, char const *argv[])
{
    float x;
    printf("Esse codigo descobre o valor de f(x) na operaçao matematica \n");
    printf("Digite o valor de X\n");
    scanf("%f", &x);

    printf("o valor de f(x) e %.2f\n", f(x));
    return 0;
}
