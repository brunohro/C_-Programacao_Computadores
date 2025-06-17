#include <stdio.h>

int main(void){
    int n;
    float e = 0;
    printf("--> DIGITE O VALOR DE 'N': \n");
    scanf("%i", &n);
    for(int i = 1; i <= n; i++){ // já inicializei a primeira casa, portanto começo na casa 2 ( i = 2);
        e += (1/(float)i);
    }

    printf("--> O valor de E = %.2f", e);
    return 0;
}