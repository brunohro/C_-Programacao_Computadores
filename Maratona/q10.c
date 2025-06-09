#include <stdio.h>
#include <math.h>

int main(void){
    float s1, s2, s3;

    printf("\n--> Digite o valor de s1: \n");
    scanf("%f", &s1);
    printf("\n--> Digite o valor de s2: \n");
    scanf("%f", &s2);
    printf("\n--> Digite o valor de s3: \n");
    scanf("%f", &s3);

    float perimetro = s1 + s2 + s3;
    float s = (s1 + s2 + s3) / 2;
    float area = sqrt(s * (s - s1) * ( s - s2) * (s - s3));

    printf("\n--> PERIMETRO: %.2f", perimetro);
    printf("\n--> AREA: %.2f", area);
    return 0;
}