#include <stdio.h>

int main(void)
{
    // 0 --> falso
    // 1 --> verdadeiro

    int n1 = 10, n2 = 5, n3 = 15, n4 = 50;
    printf("\n -> num1 == num2:    %i", n1 == n2);
    printf("\n -> num1 == 10:    %i", n1 == 10);
    printf("\n -> num3 > 0:    %i", n3 > 0);
    printf("\n -> num2 >= num3:    %i", n2 >= n3);
    return 0;
}
