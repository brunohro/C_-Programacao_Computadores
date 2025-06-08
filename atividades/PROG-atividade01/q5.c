#include <stdio.h>

int main(void)
{
    int prato, sobremesa, bebida;
    printf("** Esse programa exibe a quantidade de calorias de uma refeicao **\n");
    printf("--> Digite o prato desejado:    \n");
    printf("1- Vegetariano\n2- Peixe\n3- Frango\n4- Carne\n");
    scanf("%i", &prato); // atribuindo o valor da op para prato
    switch (prato)
    {
    case 1:{ // vegetariano
        prato = 180; // atualizando o valor de prato
        break;
    }
    case 2:{ // peixe
        prato = 230;
        break;
    }
    case 3:{ // frango
        prato = 250;
        break;
    }
    case 4:{ // carne
        prato = 350;
        break;
    }
    default:
        prato = 0;
        break;
    }

    printf("--> Digite a sobremesa desejada:    \n");
    printf("1- Abacaxi\n2- Sorvete diet\n3- Mousse diet\n4- Mousse chocolate\n");
    scanf("%i", &sobremesa); // atribuindo o valor da op para sobremesa

    switch (sobremesa)
    {
    case 1:{ // abacaxi
        sobremesa = 75; // atualizando o valor de sobremesa
        break;
    }
    case 2:{ // sorvete
        sobremesa = 110;
        break;
    }
    case 3:{ // mousse diet
        sobremesa = 170;
        break;
    }
    case 4:{ // mousse chocolate
        sobremesa = 200;
        break;
    }
    default:
        sobremesa = 0; // então não vou considerar
        break;
    }

    printf("--> Digite a bebida desejada:    \n");
    printf("1- Cha\n2- Suco de laranja\n3- Suco de melao\n4- Refrigerante diet\n");
    scanf("%i", &bebida); // atribuindo o valor da op para bebida
    
    switch (bebida)
    {
    case 1:{ // cha
        bebida = 30; // atualizando o valor de bebida
        break;
    }
    case 2:{ // suco de laranja
        bebida = 70;
        break;
    }
    case 3:{ // suco de melão
        bebida = 100;
        break;
    }
    case 4:{ // refrigerante
        bebida = 65;
        break;
    }
    default:
        bebida = 0; // então não vou considerar
        break;
    }


    printf("** Sua refeicao tem %i + %i + %i = %i calorias! **", prato, sobremesa, bebida,(prato + sobremesa + bebida));

    return 0;
    
}
