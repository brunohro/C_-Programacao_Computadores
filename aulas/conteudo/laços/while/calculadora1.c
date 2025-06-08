#include <stdio.h>

int main (void) {
    char operador;     // '+', '-', '*', '/'
    float a, b;  // operandos
    int continuar;

    //char aux;

    printf("\n\n  -> Deseja ligar a calculadora? ");
    scanf("%i",&continuar);

    fflush(stdin);
    //scanf("%c",&aux);    

    while (continuar != 0) {
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
            printf(" ERRO: operador invalido!");
        }

        printf("\n\n  -> Deseja continuar? ");
        scanf("%i",&continuar);

        fflush(stdin);
        //scanf("%c",&aux);
    }
    
    printf("\n  Saindo da calculadora .....");
    
    return 0;
}