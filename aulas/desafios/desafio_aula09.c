#include <stdio.h>
float Somar(float n1, float n2){
    return n1 + n2;
}
float Subtracao(float n1, float n2){
    return n1 - n2;
}
float Multiplicacao(float n1, float n2){
    return n1 * n2;
}
float Divisao(float n1, float n2){
    return n1 / n2;
}
int main(void)
{
    float n1, n2;
    char operacao;
    printf("DIGITE O PRIMEIRO NUMERO: ");
    scanf("%f", &n1);
    printf("DIGITE O SEGUNDO NUMERO: ");
    scanf("%f", &n2);
    fflush(stdin);
    printf("DIGITE O QUE VOCÊ DESEJA FAZER: \n+ = SOMAR \n - = SUBTRAIR \n* = MULTIPLICAR\n/ = DIVIDIR\n");
    scanf(" %c", &operacao);


    switch (operacao)
    {
    case '+':{
        printf("SOMA = %.2f\n", Somar(n1, n2));
        break;
    }
    case '-':{
        printf("SUBTRACAO = %.2f \n", Subtracao(n1, n2));
        break;
    }
    case '*':{
        printf("MULTIPLICACAO = %.2f \n", Multiplicacao(n1, n2));
        break;
    }
    case '/':{
        printf("DIVISAO = %.2f \n", Divisao(n1, n2));
        break;
    }

    default:
    printf("Operacao invalida\n");
        break;
    }
    
    return 0;
}
