#include <stdio.h>

double obterMelhorVolta() {
    double nota, melhor = 0.0;
    for (int i = 1; i <= 2; i++) {
        printf("Informe a nota da volta %d: ", i);
        scanf("%lf", &nota);
        if (nota > melhor) melhor = nota;
    }
    return melhor;
}

void obterDuasMelhoresManobras(double* maior, double* segundaMaior) {
    double nota;
    *maior = *segundaMaior = 0.0;
    
    for (int i = 1; i <= 5; i++) {
        printf("Informe a nota da manobra %d: ", i);
        scanf("%lf", &nota);
        
        if (nota > *maior) {
            *segundaMaior = *maior;
            *maior = nota;
        } else if (nota > *segundaMaior) {
            *segundaMaior = nota;
        }
    }
}

double calcularNotaFinal() {
    double volta = obterMelhorVolta();
    double maior, segundaMaior;
    obterDuasMelhoresManobras(&maior, &segundaMaior);
    return volta + maior + segundaMaior;
}

int main(void) {
    printf("Competidor 1:\n");
    double resultado1 = calcularNotaFinal();

    printf("\nCompetidor 2:\n");
    double resultado2 = calcularNotaFinal();

    if (resultado1 > resultado2) {
        printf("\nPrimeiro competidor ganhou!\n1º: %.2lf\n2º: %.2lf\n", resultado1, resultado2);
    } else {
        printf("\nSegundo competidor ganhou!\n1º: %.2lf\n2º: %.2lf\n", resultado2, resultado1);
    }

    return 0;
}
