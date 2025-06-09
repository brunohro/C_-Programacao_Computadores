// Criar uma função que calcule o fatorial de um número

#include <stdio.h>

int main(void){
    int a = 10, b = 5;
    int a2 = 10, b2 = 5;

    
    b = ++a + 5; // a recebe o valor durante a operação

    b2  = a2++ + 5; // recebe o valor depois da operação 
    printf("\n b == ++a + 5 -> a: %i, b: %i", b, a);

    printf("\n b2 == a++ + 5 -> a2: %i, b2: %i", b2, a2);
    return 0;
}