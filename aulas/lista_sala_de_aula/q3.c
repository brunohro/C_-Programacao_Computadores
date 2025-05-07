#include <stdio.h>

int main(void)
{
    int idade;
    printf("Digite sua idade:   \n");
    scanf("%i", &idade);

    if(idade > 0){
        if(idade >= 18){
            printf("Maior de idade\n");
                if(idade > 65){
                    printf("( MAIS DE 65 ANOS )");
                }
        } else{
            printf("Menor de idade\n");
        }
        
    } else {
        printf("Idade invalida");
    }
    return 0;
}
