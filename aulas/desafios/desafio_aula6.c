#include <stdio.h>
int main(void)
{
    int num;
    printf("Digite um numero:   ");
    scanf("%i", &num);

    if(num % 3 == 0){
        if(num % 7 == 0){
            printf("e divisivel por 3 e por 7");
        }else{
            printf("nao e divisivel por 7");
        }
    } else{
        printf("nao e divisivel");
    }
    return 0;
}
