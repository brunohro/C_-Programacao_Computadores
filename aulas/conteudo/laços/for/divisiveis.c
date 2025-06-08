#include <stdio.h>

int main(void)
{
    for(int i = 100; i >= 40; i--){
        printf("%i\n", i);
        if (i % 7 ==0)
        {
            printf("%i --> divisivel por 7\n", i);
        }
    }
    return 0;
}
