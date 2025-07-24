#include <stdio.h>

// Se você declara uma variável dentro de um if, for, while, ela só existe naquele bloco.

int main()
{
    if (1)
    {
        int blocoVar = 100;
        print("%d\n", blocoVar);
    }
    // printf("%d", blocoVar); // ERRO: fora do escopo
    return 0;
}
