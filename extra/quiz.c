#include <stdio.h>

int main() {
    int pontos = 0;
    int resposta;

    printf("=== Quiz: Qual tipo de aventureiro voce e? ===\n\n");

    // Pergunta 1
    printf("1. O que voce prefere fazer em um fim de semana?\n");
    printf("1) Ficar em casa jogando videogame\n");
    printf("2) Sair para uma trilha ou acampar\n");
    printf("3) Fazer esportes radicais\n");
    printf("Escolha (1-3): ");
    scanf("%d", &resposta);
    if (resposta == 1) {
        pontos += 1;
    } else if (resposta == 2) {
        pontos += 2;
    } else if (resposta == 3) {
        pontos += 3;
    }

    // Pergunta 2
    printf("\n2. Como voce reage a desafios?\n");
    printf("1) Evito ao maximo\n");
    printf("2) Aceito, mas com cuidado\n");
    printf("3) Encaro sem pensar duas vezes\n");
    printf("Escolha (1-3): ");
    scanf("%d", &resposta);
    if (resposta == 1) {
        pontos += 1;
    } else if (resposta == 2) {
        pontos += 2;
    } else if (resposta == 3) {
        pontos += 3;
    }

    // Pergunta 3
    printf("\n3. Qual transporte voce prefere?\n");
    printf("1) Carro\n");
    printf("2) Bicicleta\n");
    printf("3) Moto ou esportes de aventura\n");
    printf("Escolha (1-3): ");
    scanf("%d", &resposta);
    if (resposta == 1) {
        pontos += 1;
    } else if (resposta == 2) {
        pontos += 2;
    } else if (resposta == 3) {
        pontos += 3;
    }

    // Resultado
    printf("\n=== Resultado do Quiz ===\n");
    if (pontos <= 4) {
        printf("Voce e um aventureiro tranquilo, prefere a seguranca do lar.\n");
    } else if (pontos <= 6) {
        printf("Voce e um aventureiro moderado, gosta de explorar, mas com cautela.\n");
    } else {
        printf("Voce e um aventureiro radical! Sempre em busca de adrenalina.\n");
    }

    printf("\nObrigado por jogar!\n");

    return 0;
}
