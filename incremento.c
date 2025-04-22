// Criar uma função que calcule o fatorial de um número

#include <stdio.h>

int main(void){
    int a = 10, b = 5;

    // b = a++ + 5; // a só recebe o valor depois da operação 
    b = ++a + 5; // a recebe o valor durante a operação
    printf("\n b:  %i \n a: %i", b, a);
    return 0;
}