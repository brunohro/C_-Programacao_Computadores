#include <stdio.h>

int main(void){
    int beltrano = 0, ciclano = 0, fulano = 0, nulo = 0, branco = 0;
    int voto = 0;
    int quant_votos = 0;

    do {
        printf("\n--- ELEICOES ---");
        printf("\n--> CANDIDATOS:  ");
        printf("\n--> [10] - BELTRANO");
        printf("\n--> [20] - CICLANO");
        printf("\n--> [30] - FULANO");
        printf("\n--> [0] - BRANCO\n");
        scanf("%i", &voto);

        if (voto == 10)
        {
            beltrano = beltrano+1;
        } else if (voto == 20)
        {
            ciclano++;
        } else if(voto == 30){
            fulano++;
        } else if (voto == 0)
        {
            branco++;
        } else{
            nulo++;
        }

        quant_votos++;
    } while( voto >= 0);

    
        if (beltrano >= ciclano && beltrano >= fulano) {
        printf("BELTRANO: %d VOTOS\n", beltrano);
        if (ciclano >= fulano) {
            printf("CICLANO: %d VOTOS\n", ciclano);
            printf("FULANO: %d VOTOS\n", fulano);
        } else {
            printf("FULANO: %d VOTOS\n", fulano);
            printf("CICLANO: %d VOTOS\n", ciclano);
        }
    } else if (ciclano >= beltrano && ciclano >= fulano) {
        printf("CICLANO: %d VOTOS\n", ciclano);
        if (beltrano >= fulano) {
            printf("BELTRANO: %d VOTOS\n", beltrano);
            printf("FULANO: %d VOTOS\n", fulano);
        } else {
            printf("FULANO: %d VOTOS\n", fulano);
            printf("BELTRANO: %d VOTOS\n", beltrano);
        }
    } else {
        printf("FULANO: %d VOTOS\n", fulano);
        if (beltrano >= ciclano) {
            printf("BELTRANO: %d VOTOS\n", beltrano);
            printf("CICLANO: %d VOTOS\n", ciclano);
        } else {
            printf("CICLANO: %d VOTOS\n", ciclano);
            printf("BELTRANO: %d VOTOS\n", beltrano);
        }
    }

    // precisa de correção 
    printf("BRANCOS: %d %i %% \n", branco,((float)(branco/quant_votos) * 100));
    printf("NULOS: %d\n", nulo);
    return 0;
}