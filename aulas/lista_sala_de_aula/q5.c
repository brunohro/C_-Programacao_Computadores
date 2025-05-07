#include <stdio.h>

int main(void)
{
    int mes;
    printf("Digite o numero referente ao mes:   ");
    scanf("%i", &mes);
    switch (mes)
    {
    case 1: {
        printf("JANEIRO");
        break;
    }
    case 2: {
        printf("FEVEREIRO");
        break;
    }
    case 3: {
        printf("MARCO");
        break;
    }
    case 4: {
        printf("ABRIL");
        break;
    }
    case 5: {
        printf("MAIO");
        break;
    }
    case 6: {
        printf("JUNHO");
        break;
    }
    case 7: {
        printf("JULHO");
        break;
    }
    case 8: {
        printf("AGOSTO");
        break;
    }
    case 9: {
        printf("SETEMBRO");
        break;
    }
    case 10: {
        printf("OUTUBRO");
        break;
    }
    case 11: {
        printf("NOVEMBRO");
        break;
    }
    case 12: {
        printf("DEZEMBRO");
        break;
    }
    default:
        printf("o mes informado nao existe");
        break;
    }
    return 0;
}
