#include <stdio.h>
int main(void)
{
    int n1;
    printf("Digite um numero:   \n");
    scanf("%i", &n1);

    if(n1 == 5 || n1 == 200 || n1 == 400){
        if(n1 == 5){
            printf("n1 = 5\n");
        } else if (n1 == 200)
        {
            printf("n1 = 200\n");
        } else{
            printf("n1 = 400\n");
        }
    } else if ( n1 >= 500 && n1 <= 1000)
    {
        printf("n1 esta no intervalo entre 500 e 1000");
    } else {
        printf("Esta fora de todos os escopos, n1 == %i\n", n1);
    }
    

    return 0;
}
