#include <stdio.h>

int Somar(int numero_um, int numero_dois){
    return numero_um + numero_dois;
}

int Subtracao(int numero_um, int numero_dois){
    return numero_um - numero_dois;
}

int Multiplicar(int numero_um, int numero_dois){
    return numero_um * numero_dois;
}

int Dividir(int numero_um, int numero_dois){
    return numero_um / numero_dois;
}

int main(int argc, char const *argv[])
{
    int opcao = 0;
    int continuar = 1;
    while (opcao != 5)
    {
        printf("BEM VINDO A CALC EM C \n");
    printf("DIGITE O QUE VOCÊ DESEJA FAZER: \n1- SOMAR \n2- SUBTRAIR \n3- MULTIPLICAR\n4- DIVIDIR\n5- SAIR\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1: {
        int numero_um, numero_dois;
        printf("DIGITE O PRIMEIRO NUMERO: ");
        scanf("%d", &numero_um);
        printf("DIGITE O SEGUNDO NUMERO: ");
        scanf("%d", &numero_dois);

        printf("SOMA = %d \n", Somar(numero_um, numero_dois));
        break;
    }
    case 2:{
        int numero_um, numero_dois;
        printf("DIGITE O PRIMEIRO NUMERO: ");
        scanf("%d", &numero_um);
        printf("DIGITE O SEGUNDO NUMERO: ");
        scanf("%d", &numero_dois);
        printf("SUBTRAÇÃO = %d \n", Subtracao(numero_um, numero_dois));
        break;
    } case 3:{
        int numero_um, numero_dois;
        printf("DIGITE O PRIMEIRO NUMERO: ");
        scanf("%d", &numero_um);
        printf("DIGITE O SEGUNDO NUMERO: ");
        scanf("%d", &numero_dois);
        printf("MULTIPLICAÇAO = %d\n", Multiplicar(numero_um, numero_dois));
        break;
    } case 4:{
        int numero_um, numero_dois;
        printf("DIGITE O PRIMEIRO NUMERO: ");
        scanf("%d", &numero_um);
        printf("DIGITE O SEGUNDO NUMERO: ");
        scanf("%d", &numero_dois);
        printf("DIVISAO = %d\n", Dividir(numero_um, numero_dois));
        break;
    } case 5:{
        printf("ATE A PROXIMA!\n");
        printf("---------------------------\n");
        break;
    }
    default:
        printf("Operação invalida.\n");
        break;
    }
    
    printf("DESEJA CONTINUAR ?\n");
    printf("1 - sim\n");
    printf("2- não\n");
    scanf("%d", &continuar);
    if(continuar == 1){
        opcao = 0;
    } else if (continuar == 2)
    {
        opcao = 5;
        printf("ATE A PROXIMA!\n");
        printf("---------------------------\n");
    } else {
        printf("Operacao invalida!\n");
        printf("ate breve...!\n");
        opcao = 5;
    }

    }
    return 0;
}

