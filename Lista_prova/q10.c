#include <stdio.h>

int main(void)
{

    for(int i = 2; i <= 120; i++)
    {
        int n_primo = 1; // verdadeiro

        for(int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                n_primo = 0; // encontrou divisor
                break; 
            } 
        }
        if(n_primo == 1)
        {
            printf("\n--> NUMERO PRIMO: %i", i);
        }
    }
    return 0;
}