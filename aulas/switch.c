#include <stdio.h>


int main(void)
{
    int menu;
    printf("DIGITE O QUE VOCE DESEJA FAZER: \n");
    printf("1- CADASTRAR\n2- EDITAR\n3- REMOVER\n4- SAIR");
    scanf("%i", &menu);

    switch (menu)
    {
    case 1:{
        printf("FUNCAO CADASTRAR...\n");
        break;
    }
    case 2:{
        printf("FUNCAO EDITAR...\n");
        break;
    }case 3:{
        printf("FUNCAO REMOVER...\n");
        break;
    }case 4:{
        printf("SAINDO...\n");
        break;
    }
    
    default:
    printf("NAO ENTENDI SUA RESPOSTA");
        break;
    }
    return 0;
}
