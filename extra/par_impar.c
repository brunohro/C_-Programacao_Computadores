#include <stdio.h>

int main(void)
{
    int num;
    printf("Esse programa mostra se o numero e par ou impar\n");
    printf("Digite um numero:   \n");
    scanf("%i", &num);

    if(num % 2){
        printf("%i e impar", num);
    } else{
        printf("%i e par", num);
    }
    return 0;
}
