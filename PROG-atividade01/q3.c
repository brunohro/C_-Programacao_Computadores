#include <stdio.h>

int main (void){

    int idade;
    float peso,mg,ml,gotas;

    printf("** Esse programa exibe em tela a dosagem adequada do medicamento **\n");
    printf("\n--> Digite a idade do paciente: ");
    scanf("%i",&idade);

    printf("\n--> Digite o peso do paciente: ");
    scanf("%f",&peso);

if (peso < 5)
{
    printf("ATENCAO! PESO NAO CORRESPONDENTE");
} else{
    if(idade >0 && idade <=12) // caso seja criança 
    { 
    if(peso >= 5 && peso <= 9){
        mg = 125;

    }else if(peso >= 9.1 && peso <= 16){
        mg = 250;

    }else if(peso > 16 && peso <= 24){
        mg = 375;

    } else if(peso > 24 && peso <= 30){
        mg = 500;

    } else if(peso >30){
        mg = 750;
    } 
    }
    else // então adulto
    {
    if(peso >=60){
        mg = 1000;
    }
    else{
        mg = 875;
    }
    }

    ml = mg / 500;

    gotas = ml * 20;

    printf("\n** Dosagem em gotas: %.f **",gotas);
    }

return 0;
}