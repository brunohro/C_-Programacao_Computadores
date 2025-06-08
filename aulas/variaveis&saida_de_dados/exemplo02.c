#include <stdio.h>
#include <math.h>

int main(void) {  
    int num1 = 3;            // Declara uma variável do tipo int e inicializa com valor 3
    short int num2 = 4;      // Declara uma variável do tipo short int e inicializa com valor 4
    long int num3 = 5;       // Declara uma variável do tipo long int e inicializa com valor 5

    // Mostra na tela quantos bytes ocupam os tipos int, short e long
    printf(" Bytes <int>: %i\n", sizeof(int));         // Exibe o tamanho (em bytes) do tipo int
    printf(" Bytes <short int>: %i\n", sizeof(short)); // Exibe o tamanho do tipo short int
    printf(" Bytes <long int>: %i\n", sizeof(num3));   // Exibe o tamanho da variável num3 (long int)

    // Exibe o endereço de memória de num1
    printf(" Endereco num1: %p\n", &num1);             // Mostra o endereço de memória de num1 (usando %p)

    printf(" Valor em num1: %i\n", num1);              // Mostra o valor diretamente
    printf(" Valor em num1: %i\n", *(&num1));          // Mostra o valor indiretamente (via ponteiro)

    return 0;
}
