#include <stdio.h>

int main(void){
    float n, somatorio;
    printf("--> DIGITE O VALOR DE 'N': \n");
    scanf("%f", &n);

    somatorio = n; // inicializando o somatorio 

    int fatorial = 1;

    for(int i = 1; i <= 10; i++){
        fatorial = fatorial * i; 
        if(i % 2 == 0){
            somatorio += n/fatorial;
        } else{
            somatorio -= n/fatorial;
        }
    }

    printf("--> O VALOR FINAL DO SOMATORIO: %.2f", somatorio);
    return 0;
}