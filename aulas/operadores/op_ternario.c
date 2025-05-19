#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("Digite o primeiro valor:   \n");
    scanf("%i", &num1);
    printf("Digite o segundo valor:   \n");
    scanf("%i", &num2);

    // if(num1 > num2){
    //     printf("Num 1 maior que Num 2");
    // } else if (num1 == num2)
    // {
    //     printf("Num 1 igual Num 2");
    // } else{
    //     printf("Num 2 maior que Num 1");
    // }


    num1 >= num2 ? printf("Num1 >= Num2") : printf("Num2 > Num1"); // operador ternário 
    
    return 0;
}
