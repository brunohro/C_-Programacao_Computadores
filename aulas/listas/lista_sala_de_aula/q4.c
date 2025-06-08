#include <stdio.h>

int main(void)
{
    int idade;
    printf("Digite sua idade:   \n");
    scanf("%i", &idade);

    if(idade >= 5 && idade <= 7){
        printf("CATEGORIA INFANTIL A");
    } else if (idade >= 8 && idade <= 10)
    {
        printf("CATEGORIA INFANTIL B");
    } else if (idade >= 11 && idade <= 13)
    {
        printf("CATEGORIA JUVENIL A");
    } else if (idade >= 14 && idade <= 17)
    {
        printf("CATEGORIA JUVENIL");
    } else if (idade >= 18)
    {
        printf("CATEGORIA SENIOR");
    } 
    else{
        printf("IDADE INVALIDA");
    } 
    
    
    
    return 0;
}
