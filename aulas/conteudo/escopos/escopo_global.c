// escopo global

#include <stdio.h>

int globalVar = 10; // variável global

void func()
{
    printf("Global: %d\n", globalVar);
}
int main(void)
{
    func(); // imprime: Global: 10
    globalVar = 20;
    func(); // imprime: Global: 20
    return 0;
}