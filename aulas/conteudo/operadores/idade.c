#include <stdio.h>

int main(void){
    int idade;

    printf("\n --> Digite sua idade: \n");
    scanf("%i", &idade);

    if(idade < 18){
        // menor de idade

        printf("\n --> voce eh menor de idade!");
        printf("\n Faltam %i anos para sua maior idade ", 18 - idade);
    } else{
        //maior de idade 
        printf("\n --> voce eh maior de idade! ");
    }
    return 0;
}