// Criar uma função que calcule o fatorial de um número

#include <stdio.h>

// Função recursiva para calcular o fatorial
int fatorial(int n) {
    if (n <= 1) {
        return 1; // Caso base: fatorial de 0 ou 1 é 1
    } else {
        return n * fatorial(n - 1); // Chamada recursiva
    }
}

int main() {
    int numero;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Não existe fatorial de número negativo.\n");
    } else {
        printf("Fatorial de %d é %d\n", numero, fatorial(numero));
    }

    return 0;
}
