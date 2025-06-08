#include <stdio.h>

int main(void)
{
    float velocidade, tempo, rendi_gasolina, preco_gasolina, preco_alcool, rendi_alcool;
    printf("Esse programa vai mostrar o custo de um veiculo em uma viagem\n");
    printf("Digite a velocidade media do veiculo:   \n");
    scanf("%f", &velocidade);
    printf("Digite o tempo da viagem:   \n");
    scanf("%f", &tempo);
    printf("Digite o redimento medio do veiculo utilizando gasolina:    \n");
    scanf("%f", &rendi_gasolina);
    printf("Digite o preco da gasolina:   \n");
    scanf("%f", &preco_gasolina);
    printf("Digite o preco do alcool:   \n");
    scanf("%f", &preco_alcool);

    float custo_g = ((velocidade * tempo) / rendi_gasolina) * preco_gasolina;
    rendi_alcool = rendi_gasolina * 0.7;
    float custo_a = ((velocidade * tempo) / rendi_alcool) * preco_alcool;

    printf("Custo medio do carro:   \nUtilizando gasolina: %.2f\nUtilizando alcool: %.2f", custo_g, custo_a);

    
    return 0;
}
