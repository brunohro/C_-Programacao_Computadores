#include <stdio.h>

// definindo constantes 
#define V 1 // verdadeiro
#define F 0 // falso
int main(void){
    printf("*** TABELA VERDADE AND ***");
    printf("\n ------------------");
    printf("\n  a   b  |  a && b");
    printf("\n ------------------");
    printf("\n  %i   %i  |    %i", F, F, F && F);
    printf("\n  %i   %i  |    %i", F, V, F && V);
    printf("\n  %i   %i  |    %i", V, F, V && F);
    printf("\n  %i   %i  |    %i", V, V, V && V);
    printf("\n ------------------");

    printf("\n\n * NOT(0): %i", !0);
    printf("\n * NOT(-5): %i", !-5);
    return 0;
}