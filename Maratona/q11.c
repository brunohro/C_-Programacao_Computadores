#include <stdio.h>

int main(void){
    float v, t, rg, pg, pa;
    float ra;
    float custo_combustivel_g;
    float custo_combustivel_a;
    printf("\n--> Digite a velocidade media do carro:   \n");
    scanf("%f", &v);
    printf("\n--> Digite o tempo (em horas) previsto para a viagem   \n");
    scanf("%f", &t);
    printf("\n--> Digite o rendimento do carro utilizando gasolina:    \n");
    scanf("%f", &rg);
    printf("\n--> Digite o preco da gasolina: \n");
    scanf("%f", &pg);
    printf("\n--> Digite o preco do alcool: \n");
    scanf("%f", &pa);

    ra = rg * 0.7; 
    custo_combustivel_a = ((v*t) / ra) * pa;
    custo_combustivel_g = ((v*t) / rg) * pg;
    printf("\n--> O custo utilizando gasolina e %.2f REAIS ", custo_combustivel_g);
    printf("\n--> O custo utilizando alcool e %.2f REAIS", custo_combustivel_a);

    return 0;
}