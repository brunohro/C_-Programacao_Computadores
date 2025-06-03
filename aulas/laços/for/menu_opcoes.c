#include <stdio.h>

int main(void)
{
    int op = 1;
    float pedido = 0;
    do
    {
        printf("--------- MENU DE OPCOES --------\n");
        printf("1- Misto quente \n");
        printf("2- Cheese Burguer \n");
        printf("3- Copo de suco \n");
        printf("4- Refrigerante\n");
        printf("0- Encerrar\n");
        printf("--------------------------------\n");
        printf("--> Selecione o produto: ");
        scanf("%i", &op);
        switch (op)
        {
        case 1: pedido += 5; break;
        case 2: pedido += 10; break;
        case 3: pedido += 6; break;
        case 4: pedido += 3.5; break;
        case 0: break;
        default:
            printf("OP invalida");
            break;
        } 
    } while( op != 0);

    if(pedido > 0) printf("TOTAL DO PEDIDO:    %.2f", pedido);

    
    return 0;
}
