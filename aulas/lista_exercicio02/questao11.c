#include <stdio.h>

 int main(void)
 {
    char nome_m[100];
    int quant_e;
    int num_votos_candi;

    printf("Digite o nome do municipio: ");
    scanf(" %[^\n]", &nome_m);
    printf("Digite a quantidade de eleitores aptos: ");
    scanf("%i", &quant_e);
    printf("Digite a quantidade de votos do candidato mais votado:  ");
    scanf("%i", &num_votos_candi);

    float percentual = ((float)num_votos_candi / quant_e) * 100.0;
    if(quant_e > 20000){
        if(percentual <= 50.0 ){
            printf("Havera segundo turno\n");
        } else {
            printf("Nao havera segundo turno");
        }
    } else{
        printf("Nao havera segundo turno");
    }
    
    return 0;
 }
 