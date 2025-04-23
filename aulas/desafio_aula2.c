#include <stdio.h>
#include <math.h>
int main(void)
{
    float x, y, xp, yp;

    printf("Digite a altura do lote:" );
    scanf("%f", &y);
    printf("Digite a largura do lote: ");
    scanf("%f", &x);
    printf("Digite a altura da peça: ");
    scanf("%f", &yp);
    printf("Digite a largura da peça: ");
    scanf("%f", &xp);

    float area_lote = y * x;
    float area_peca = yp * xp;

    int quantidade = ceil(area_lote / area_peca); // vai arredondar para cima

    printf("A quantidade de peças para preencher todo o lote é: %d\n", quantidade);

    


    return 0;
}
