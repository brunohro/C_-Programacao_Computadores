#include <stdio.h>

#define N_FUNCIONARIO 3
int main(void){
    float salarios[N_FUNCIONARIO]; // posições
    for(int i = 0; i < N_FUNCIONARIO; i++){
        printf("\n--> SALARIO FUNCIONARIO:  ");
        scanf("%f", &salarios[i]);
    }

    float perc_aumento;
    printf("\n--> PERCENTUAL DE AUMENTO: ");
    scanf("%f", &perc_aumento);

    if (perc_aumento > 0)
    {
        for(int i = 0; i < N_FUNCIONARIO; i++){
            salarios[i] *= (1 + perc_aumento/100);
            printf("\n--> Novo salario: [%i]: %.2f ", i + 1, salarios[i]);
        }
    } else{
        printf("\n ** sem aumento ou valor invalido **");
    }
    

    return 0;
}