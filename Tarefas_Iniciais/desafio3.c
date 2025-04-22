#include <stdio.h>
// Fazer uma calculadora simples com as 4 operações 
int Soma(int numero1, int numero2) {
    return numero1 + numero2;
}

int Subtrair(int numero1, int numero2) {
    return numero1 - numero2;
}

int Multiplicar(int numero1, int numero2) {
    return numero1 * numero2;
}

int Dividir(int numero1, int numero2) {
    return numero1 / numero2;
}



int main(void) {
    int opcao;
    printf("Digite o número referente à operação que você quer realizar:\n1 - Soma\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n5 - sair\n");
    scanf("%i", &opcao);

    switch (opcao) {
        case 1: {
            int n1, n2;
            printf("Digite o primeiro número: \n");
            scanf("%i", &n1);
            printf("Digite o segundo número: \n");
            scanf("%i", &n2);
            printf("A soma dos números = %d\n", Soma(n1, n2));
            break;
        }
        case 2: {
            int n1, n2;
            printf("Digite o primeiro número: \n");
            scanf("%i", &n1);
            printf("Digite o segundo número: \n");
            scanf("%i", &n2);
            printf("A subtracao dos números = %d\n", Subtrair(n1, n2));
            break;
        }
        case 3: {
            int n1, n2;
            printf("Digite o primeiro número: \n");
            scanf("%i", &n1);
            printf("Digite o segundo número: \n");
            scanf("%i", &n2);
            printf("A multiplicacao dos números = %d\n", Multiplicar(n1, n2));
            break;
        }
        case 4: {
            int n1, n2;
            printf("Digite o primeiro número: \n");
            scanf("%i", &n1);
            printf("Digite o segundo número: \n");
            scanf("%i", &n2);
            printf("A divisao dos números = %d\n", Dividir(n1, n2));
            break;
        }
        default:
            printf("saindo!\n");
            break;
    }

    return 0;
}
