#include <stdio.h>
#include <math.h>

int main(void){
    int largura_p, altura_p, m_quadrados; 
    printf("\n--> Digite a altura da parede:    \n");
    scanf("%i", &altura_p);

    printf("\n--> Digite a largura da parede:    \n");
    scanf("%i", &largura_p);

    m_quadrados = altura_p * largura_p;
    // 300ml - m_quadrado
    int ml_tinta = 300 * m_quadrados;

    //  lata de tinta == 2000ml
    int lata_tinta = ceil(ml_tinta/2000);

    printf("\n--> Serao necessario %i latas de tinta", lata_tinta);
    return 0;
}