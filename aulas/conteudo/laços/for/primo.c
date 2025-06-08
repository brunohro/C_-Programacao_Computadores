#include <stdio.h>

int main(void)
{
    int num, n_div = 0;
    printf("--> ESSE PROGRAMA VERIFICA SE O NUMERO E PRIMO\n");
    printf("--> DIGITE UM NUMERO:   \n");
    scanf("%i", &num);

    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            n_div++;
        }
    }

    if(n_div == 2){
        printf("E PRIMO");
    } else{
        printf("NAO E PRIMO");
    }
    return 0;
}
