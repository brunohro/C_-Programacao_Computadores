// Declarada dentro de uma função ou bloco ({ }), a variável é local.

// Só existe dentro daquele bloco: fora dele, é invisível.

#include <stdio.h>

void func()
{
    int localVar = 5;
    printf("Local: %d\n", localVar);
}
int main(int argc, char const *argv[])
{
    // printf("%d", localVar); // ERRO: localVar não é visível aqui
    func();
    return 0;
}
