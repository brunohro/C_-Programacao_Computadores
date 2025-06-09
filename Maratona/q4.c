#include <stdio.h>

int main(void){
    int n1, n2, n3;
    printf("\n--> Digite a primeira nota:   \n");
    scanf("%i", &n1);

    printf("\n--> Digite a segunda nota:   \n");
    scanf("%i", &n2);

    printf("\n--> Digite a terceira nota:   \n");
    scanf("%i", &n3);

    printf("\n--> MEDIA FINAL: %i", (n1 + n2 + n3)/3);
    return 0;
}