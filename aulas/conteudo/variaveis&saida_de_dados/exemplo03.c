#include <stdio.h>
#include <math.h>
// exibindo função f(x)
int main(void){

    float x;

    printf("\n --> Digite o valor de 'x': ");
    scanf("%f", &x);

    float fx = pow(x, 2) + 2*x - 5;

    printf("\n f(x = %.2f) = %.2f", x, fx);
    return 0;
}