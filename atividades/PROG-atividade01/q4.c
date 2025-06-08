#include <stdio.h>


int main(void)
{
    int dia, mes, ano;
    int bissexto = 0;
    printf("Esse programa validas uma data!\n");
    printf("Dia:    \n");
    scanf("%i", &dia);
    printf("Mes:    \n");
    scanf("%i", &mes);
    printf("Ano:    \n");
    scanf("%i", &ano);

    if (ano < 0)
    {
       printf("ERRO! DATA INVALIDA");
    } else{    
        if(mes > 0 && mes <= 12){
            if(ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)){
                bissexto = 1; 
            } 
            switch (mes)
                {
                case 1:{
                    if (dia >= 1 && dia <= 31)
                    {
                        printf("A DATA %i/%i/%i E VALIDA!", dia, mes, ano);
                    } else{
                        printf("DATA INVALIDA\n");
                    }
                    break;
                }
                case 2:{
                    if (bissexto == 1) // ano é bissexto
                    {
                        if (dia >= 1 && dia <= 29)
                        {
                        printf("A DATA %i/%i/%i E VALIDA!", dia, mes, ano);
                        } else{
                        printf("DATA INVALIDA\n");
                        }
                    } 
                    else { // ano não é bissexto
                        if (dia >= 1 && dia <= 28)
                        {
                        printf("A DATA %i/%i/%i E VALIDA!", dia, mes, ano);
                        }
                        else{
                        printf("DATA INVALIDA\n");
                        }
                    }
                    break;
                }
                case 3:{
                    if (dia >= 1 && dia <= 31)
                    {
                        printf("A DATA %i/%i/%i E VALIDA!", dia, mes, ano);
                    } else{
                        printf("DATA INVALIDA\n");
                    }
                    break;
                }
                case 4:{
                    if (dia >= 1 && dia <= 30)
                    {
                        printf("A DATA %i/%i/%i E VALIDA!", dia, mes, ano);
                    } else{
                        printf("DATA INVALIDA\n");
                    }
                    break;
                }
                case 5:{
                    if (dia >= 1 && dia <= 31)
                    {
                        printf("A DATA %i/%i/%i E VALIDA!", dia, mes, ano);
                    } else{
                        printf("DATA INVALIDA\n");
                    }
                    break;
                }
                case 6:{
                    if (dia >= 1 && dia <= 30)
                    {
                        printf("A DATA %i/%i/%i E VALIDA!", dia, mes, ano);
                    } else{
                        printf("DATA INVALIDA\n");
                    }
                    break;
                }
                case 7:{
                    if (dia >= 1 && dia <= 31)
                    {
                        printf("A DATA %i/%i/%i E VALIDA!", dia, mes, ano);
                    } else{
                        printf("DATA INVALIDA\n");
                    }
                    break;
                }
                case 8:{
                    if (dia >= 1 && dia <= 31)
                    {
                        printf("A DATA %i/%i/%i E VALIDA!", dia, mes, ano);
                    } else{
                        printf("DATA INVALIDA\n");
                    }
                    break;
                }
                case 9:{
                    if (dia >= 1 && dia <= 30)
                    {
                        printf("A DATA %i/%i/%i E VALIDA!", dia, mes, ano);
                    } else{
                        printf("DATA INVALIDA\n");
                    }
                    break;
                }
                case 10:{
                    if (dia >= 1 && dia <= 31)
                    {
                        printf("A DATA %i/%i/%i E VALIDA!", dia, mes, ano);
                    } else{
                        printf("DATA INVALIDA\n");
                    }
                    break;
                }
                case 11:{
                    if (dia >= 1 && dia <= 30)
                    {
                        printf("A DATA %i/%i/%i E VALIDA!", dia, mes, ano);
                    } else{
                        printf("DATA INVALIDA\n");
                    }
                    break;
                }
                case 12:
                {
                    if (dia >= 1 && dia <= 31)
                    {
                        printf("A DATA %i/%i/%i E VALIDA!", dia, mes, ano);
                    } else{
                        printf("DATA INVALIDA\n");
                    }
                    break;
                }
                default:
                    break;
                }        
        } else {
            printf("DATA INVALIDA!\n");
        }
    }
    return 0;
}
