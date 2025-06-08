#include <stdio.h>

#define V 1 // Verdadeiro
#define F 0 // Falso

int main(void)
{
     int A, B;

    printf("TABELA VERDADE\n");
    printf("---------------------------\n");
    printf("|  A  |  B  | A AND B | A OR B |\n");
    printf("---------------------------\n");

    for (A = 0; A <= 1; A++) {
        for (B = 0; B <= 1; B++) {
            printf("|  %d  |  %d  |    %d    |    %d   |\n", A, B, A && B, A || B);
        }
    }
    printf("---------------------------\n");

    // forma manual 
    // printf("***TABELA VERDADE***");
    // printf("---------------------");
    // printf("    A   B   |   a   &&  b");
    // printf(" %i   %i  |   %i\n", F, F, F && F);
    // printf(" %i   %i  |   %i\n", F, V, F && V);
    // printf(" %i   %i  |   %i\n", V, F, V && F);
    // printf(" %i   %i  |   %i\n", V, V, V && V);

    // printf("\n----------------------");
    return 0;
}
