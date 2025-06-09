#include <stdio.h>

int main(void){
    // 33,8 = 1 celsius

    float f, c;
    printf("\n--> Digite a temperatura em Fahrenheit:   \n");
    scanf("%f", &f);

    c = (f - 32) * 5/9;
    printf("\n--> %.2f Fahrenheit --> %.2f Celcius \n", f, c);
    return 0;
}