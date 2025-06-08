#include <stdio.h>

int main(void)
{
    int idade;
    printf("Digite a idade: ");
    scanf("%i", &idade);
    if(idade < 16){
        printf("nao eleitor");
    } else if (idade >= 18 && idade < 65)
    {
        printf("eleitor obrigatorio!");
    } else {
        printf("Eleitor facultativo");
    }
    
    return 0;
}
