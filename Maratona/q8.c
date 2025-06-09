#include <stdio.h>

int main(void){
    int q1, q5, q10, q50, q100;
    printf("\n--> Digite a quantidade de cedulas de '1 real': \n");
    scanf("%i", &q1);
    printf("\n--> Digite a quantidade de cedulas de '5 reais': \n");
    scanf("%i", &q5);
    printf("\n--> Digite a quantidade de cedulas de '10 reais': \n");
    scanf("%i", &q10);
    printf("\n--> Digite a quantidade de cedulas de '50 reais': \n");
    scanf("%i", &q50);
    printf("\n--> Digite a quantidade de cedulas de '100 reais': \n");
    scanf("%i", &q100);

    int valor_total = (q1 * 1) + (q5 * 5) + (q10 * 10) + (q50 * 50) + (q100 * 100);

    printf("\n--> Valor total presente no monte:    %i", valor_total);
    return 0;
}