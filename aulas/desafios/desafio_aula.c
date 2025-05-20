#include <stdio.h>
#include <math.h>
// sqrt() // calcular raiz

int main(void)
{
    float a, b, c;
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    double delta = (b*b) -  (4 * a * c);

    double x1 = (-b + sqrt(delta)) / (2 * a);
    double x2 = (-b - sqrt(delta)) / (2 * a);

    printf("valor de x1: %.2f - e x2: %.2f", x1, x2 );
    return 0;
}
