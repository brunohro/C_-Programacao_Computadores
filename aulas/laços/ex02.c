#include <stdio.h>
#include <ctype.h>

int main(void) {
    char genero;
    int altura;

    //char aux;

    int somatorio_alt_M = 0;    
    int cont_M = 0;

    int somatorio_alt_F = 0;
    int cont_F = 0;

    printf(" -> Genero (M ou F): ");
    scanf("%c",&genero);
    
    printf(" -> Altura: ");
    scanf("%i",&altura);

    while(altura > 0 && (toupper(genero) == 'M' || toupper(genero) == 'F')) {
        if(toupper(genero) == 'M') {
            somatorio_alt_M = somatorio_alt_M + altura;
            cont_M++;
        } else {
            somatorio_alt_F = somatorio_alt_F + altura;
            cont_F++;            
        }

        fflush(stdin);
        //scanf("%c",&aux);

        printf(" -> Genero (M ou F): ");
        scanf("%c",&genero);
    
        printf(" -> Altura: ");
        scanf("%i",&altura);        
    }

    float media_alt_M = ((float) somatorio_alt_M) / cont_M;
    float media_alt_F = ((float) somatorio_alt_F) / cont_F;

    printf("\n * Media de altura (M): %.2f", media_alt_M);
    printf("\n * Media de altura (F): %.2f", media_alt_F);

    return 0;
}