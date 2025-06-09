#include <stdio.h>

int main(void){
    int lado_um, lado_dois, lado_tres;
    printf("\n--> Digite o primeiro lado: \n");
    scanf("%i", &lado_um);
    printf("\n--> Digite o segundo lado:   \n");
    scanf("%i", &lado_dois);
    printf("\n--> Digite o terceiro lado:   \n");
    scanf("%i", &lado_tres);

    int soma_lados = lado_um + lado_dois + lado_tres;




    if(lado_um < (soma_lados - lado_um) && lado_dois < (soma_lados - lado_dois) && lado_tres < (soma_lados - lado_tres)){
        printf("FORMAM OS LADOS DE UM TRIANGULO");
        if(lado_um == lado_dois && lado_um == lado_tres){
            printf(" EQUILATERO\n");
        } else if (lado_um == lado_dois || lado_um == lado_tres || lado_dois == lado_tres)
        {
            printf(" ISOSCELES\n");
        } else{
            printf(" ESCALENO\n");
        }
    } 
    else{
        printf("Nao e possivel formar um triangulo!");
    }
    return 0;
}