#include <stdio.h>
#include <math.h>

int main(void)
{
    float s1, s2, s3;
    printf("Esse programa imprime a área e o perímetro de um triângulo\n");
    printf("Digite o comprimento do lado 1: \n");
    scanf("%f", &s1);
    printf("Digite o comprimento do lado 2: \n");
    scanf("%f", &s2);
    printf("Digite o comprimento do lado 3: \n");
    scanf("%f", &s3);

    float perimetro = s1 + s2 + s3;
    float s = (s1 + s2 + s3) / 2;
    float area = sqrt(s * ( s - s1) * ( s - s2) * (s - s3));
    printf("Perimetro do triangulo: %.2f\nArea do triangulo: %.2f", perimetro, area);
    return 0;
}
