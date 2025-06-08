#include <stdio.h>

int main(void)
{
    int n = 10;
    int somatorio = 0;

    while (n <= 50)
    {
        if(n% 2 == 0){
            somatorio = somatorio + n;
        }
        n = n +1;
    }
    
    printf("\n * Somatorio: %i", somatorio);
    return 0;
}
