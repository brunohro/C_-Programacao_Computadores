// Faça um programa em linguagem C que calcula a quantidade necessária de latas de tinta para pintar
// uma parede. O programa deve receber do usuário as medidas de largura e altura da parede em
// metros e imprimir o resultado em número de latas de tinta. Considere que o consumo de tinta é de
// 300 ml por metro quadrado e a quantidade de tinta por lata é de 2 litros.

#include <stdio.h>
#include <math.h>

int main(void)
{
    float altura_parede, largura_parede;
    float capacidade_lata = 2000; // ml
    printf("Esse programa ira informar a quantidade de tinta para pintar uma parede    \n");
    printf("Digite a altura da parede:  \n");
    scanf("%f", &altura_parede);
    printf("Digite a largura da parede: \n");
    scanf("%f", &largura_parede);
    float area = altura_parede * largura_parede;
    float tinta_necessaria = area * 300; // ml
    int latas_necessaria = ceil(tinta_necessaria / capacidade_lata);
    printf("QUANTIDADE DE TINTA NECESSARIO: %i litros", latas_necessaria);
    return 0;
}
