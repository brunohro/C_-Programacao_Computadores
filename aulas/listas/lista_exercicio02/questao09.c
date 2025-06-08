#include <stdio.h>
#include <math.h>


int main(void)
{
    double a, b, c;

    printf("digite o valor de a: \n");
    scanf("%lf", &a);

    if( a == 0 ){
        printf("Nao e uma equacao de segundo grau");
    }else 
    {
        printf("digite o valor de b: \n");
        scanf("%lf", &b);

        printf("digite o valor de c: \n");
        scanf("%lf", &c);

        float delta = (b*b) - 4*a*c;

        if(delta < 0){
            printf("Nao ha raizes reais!");
        } else{
            double x1 = (-b + sqrt(delta)) / (2*a);
            double x2 = (-b - sqrt(delta)) / (2*a);

            printf("\nx1 = %.2lf", x1);
            printf("\nx2 = %.2lf", x2);
        }
    }
    
    return 0;
}
