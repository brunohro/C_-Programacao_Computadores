#include <stdio.h>

int main(void)
{
    char nome1[20], nome2[20], nome3[20];
    int min_1, seg_1, cent_1;
    int min_2, seg_2, cent_2;
    int min_3, seg_3, cent_3;
    int recorde_mundial = (14 * 60 * 100) + (30 * 100) + 67;

    printf("** BEM VINDO AO PROGRAMA EM C DA COPETICAO **\n");
    // primeiro atleta
    printf("--> Digite o nome do primeiro atleta: \n");
    scanf("%[^\n]", nome1);
    printf("--> Digite os minutos em que %s percorreu a prova: \n", nome1);
    scanf("%i", &min_1);
    printf("--> Digite os segundos em que %s percorreu a prova: \n", nome1);
    scanf("%i", &seg_1);
    printf("--> Digite os centesimos que %s percorreu a prova: \n", nome1);
    scanf("%i", &cent_1);
    printf("------------------------------\n");
    // segundo atleta 
    fflush(stdin);
    printf("--> Digite o nome do segundo atleta: \n");
    scanf("%[^\n]", nome2);
    printf("--> Digite os minutos em que %s percorreu a prova: \n", nome2);
    scanf("%i", &min_2);
    printf("--> Digite os segundos em que %s percorreu a prova: \n", nome2);
    scanf("%i", &seg_2);
    printf("--> Digite os centesimos que %s percorreu a prova: \n", nome2);
    scanf("%i", &cent_2);
    printf("------------------------------\n");
    // terceiro atleta 
    fflush(stdin);
    printf("--> Digite o nome do terceiro atleta: \n");
    scanf("%[^\n]", nome3);
    printf("--> Digite os minutos em que %s percorreu a prova: \n", nome3);
    scanf("%i", &min_3);
    printf("--> Digite os segundos em que %s percorreu a prova: \n", nome3);
    scanf("%i", &seg_3);
    printf("--> Digite os centesimos que %s percorreu a prova: \n", nome3);
    scanf("%i", &cent_3);
    printf("------------------------------\n");

    // transformando o tempo em centesimos
    int temp_at1 = (min_1 * 60 * 100) + (seg_1 * 100) + cent_1;
    int temp_at2 = (min_2 * 60 * 100) + (seg_2 * 100) + cent_2;
    int temp_at3 = (min_3 * 60 * 100) + (seg_3 * 100) + cent_3;

    if(temp_at1 < temp_at2 && temp_at1 < temp_at3){
        printf("--------------PODIO--------------\n");
        if (temp_at1 < recorde_mundial)
        {
            printf("1 - %s (**RECORDE MUNDIAL**)\n", nome1);
        } else{
            printf("1 - %s\n", nome1);
        }
        if (temp_at2 < temp_at3)
        {
            printf("2 - %s\n", nome2);
            printf("3 - %s\n", nome3);
        } else if (temp_at3 < temp_at2)
        {
            printf("2 - %s\n", nome3);
            printf("3 - %s\n", nome2);
        } else{
            printf("2 - %s\n", nome3);
            printf("2 - %s\n", nome2);
        }
    } else if(temp_at2 < temp_at1 && temp_at2 < temp_at3){
        printf("--------------PODIO--------------\n");
        if (temp_at2 < recorde_mundial)
        {
            printf("1 - %s (**RECORDE MUNDIAL**)\n", nome2);
        } else{
            printf("1 - %s\n", nome2);
        }
        if (temp_at1 < temp_at3)
        {
            printf("2 - %s\n", nome1);
            printf("3 - %s\n", nome3);
        } else if (temp_at3 < temp_at1)
        {
            printf("2 - %s\n", nome3);
            printf("3 - %s\n", nome1);
        } else{
            printf("2 - %s\n", nome3);
            printf("2 - %s\n", nome1);
        }
    } else if(temp_at3 < temp_at1 && temp_at3 < temp_at2){
        printf("--------------PODIO--------------\n");
        if (temp_at3 < recorde_mundial)
        {
            printf("1 - %s (**RECORDE MUNDIAL**)\n", nome3);
        } else{
            printf("1 - %s\n", nome3);
        }
        if (temp_at2 < temp_at1)
        {
            printf("2 - %s\n", nome2);
            printf("3 - %s\n", nome1);
        } else if (temp_at1 < temp_at2)
        {
            printf("2 - %s\n", nome1);
            printf("3 - %s\n", nome2);
        } else{
            printf("2 - %s\n", nome1);
            printf("2 - %s\n", nome2);
        }
    } else{
        printf("--------------PODIO--------------\n");
        printf("----------EMPATE TECNICO-----------\n");
        if (temp_at1 == temp_at2 && temp_at1 != temp_at3)
        {
            if (temp_at1 < recorde_mundial)
            {
            printf("1 - %s (**RECORDE MUNDIAL**)\n", nome1);
            printf("1 - %s (**RECORDE MUNDIAL**)\n", nome2);            
            printf("3 - %s\n", nome3);
            }
            else{
                printf("1 - %s \n", nome1);
                printf("1 - %s \n", nome2);
                printf("3 - %s \n", nome3);
            }
        } else {
                if (temp_at1 < recorde_mundial)
                {
                printf("1 - %s (**RECORDE MUNDIAL**)\n", nome1);
                printf("1 - %s (**RECORDE MUNDIAL**)\n", nome2);            
                printf("3 - %s (**RECORDE MUNDIAL**)\n", nome3);
            }
            else{
                printf("1 - %s \n", nome1);
                printf("1 - %s \n", nome2);
                printf("1 - %s \n", nome3);
            }
        }
        
    }

    return 0;
}
