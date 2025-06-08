#include <stdio.h>

int main(void)
{
    float altura, peso;
    char sexo;
    printf("Digite a altura:    ");
    scanf("%f", &altura);
    printf("Digite o sexo:    \nM -> Masculino\nF -> Feminino\n");
    scanf(" %c", &sexo);

    if(sexo ==  'M' || sexo == 'm'){ 
        peso = (72.7 * altura) - 58;
        printf("Peso ideal: %.2f", peso);
    } else if(sexo == 'F' || sexo == 'f'){ 
        peso = (62.1 * altura) - 44.7;
        printf("Peso ideal: %.2f", peso);
    } else{
        printf("Voce nao digitou corretamente o sexo!");
    }
    return 0;
}
