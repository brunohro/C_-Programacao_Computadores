#include <stdio.h>

#define TRUE 1

int main (void) {
    char operador;     // '+', '-', '*', '/'
    float a, b;  // operandos
    int continuar;

    //char aux;

    while (TRUE) {
        printf("\n ------------------------");
        printf("\n ### CALCULADORA EM C ###\n");
        printf(" ------------------------");
        printf("\n  +: adicao");
        printf("\n  -: subtracao");
        printf("\n  *: multiplicacao");
        printf("\n  /: divisao");
        printf("\n ------------------------");
        printf("\n  -> Operacao: ");
        scanf("%c", &operador);

        if (operador == '+' || operador == '-' || operador == '*' || operador == '/') {
            // operador e valido - realizar a operacao
            printf("\n  -> Operando a: ");
            scanf("%f",&a);

            printf("  -> Operando b: ");
            scanf("%f",&b);

            switch(operador) {
                case '+':
                    printf("  => %.1f + %.1f = %.1f", a, b, a + b);
                    break;
                case '-':
                    printf("  => %.1f - %.1f = %.1f", a, b, a - b);
                    break;            
                case '*':
                    printf("  => %.1f x %.1f = %.1f", a, b, a * b);
                    break;             
                case '/':
                    if(b != 0) {
                        printf("  => %.1f / %.1f = %.1f", a, b, a / b);
                    } else {
                        printf("  ERRO: divisao por zero!");
                    }
            }
        } else {
            printf("\n ERRO: operador invalido!");
            continue;
        }

        printf("\n\n  -> Deseja continuar? ");
        scanf("%i",&continuar);

        fflush(stdin);
        //scanf("%c",&aux);
        if(continuar == 0) {
            printf("\n  Saindo da calculadora .....");
            break;          // interromper o while
        }
    }
    
    
    return 0;
}