#include <stdio.h>
// ENTRADA DE DADOS 

/* int main(int argc, char const *argv[])
{
    int idade; // declarando a minha variável
    printf("Digite sua idade: "); // imprimindo mensagem na tela
    scanf("%d", &idade); // lendo a entrada do usuário e destinando para variável idade
    printf("Você tem %d anos \n", idade); // imprimindo idade do usuário 
    return 0;
}
*/


// CONDICIONAIS 
/* int main(void)
{
    int idade; 
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if (idade >= 18){
        printf("Maior de idade. \n");
    } else {
        printf("Menor de idade. \n");
    }
    return 0;
}
*/


//LAÇOS 
/*
int main(int argc, char const *argv[])
{
    // for
    for( int i = 0; i < 5; i++){ // criando variável i, enquanto ele for menor que cinco execute - ao final de cada laço adicione 1 a variável i 
        printf("Valor de i: %d\n", i);// passando e imprimindo o valor de i;
    }

    // while
    int j = 0; // declarando valor da variável fora do laço
    while(j<5){ //enquanto J for menor que cinco
        printf("valor de j: %d\n", j); // imprime o valor de j
        j++; // adiciona um valor a j 
    }
    return 0;
}
*/

//Funções

int somar(int a, int b) // Esperando como parametro sua variáveis do tipo inteiro - a, b 
{
    return a + b; // a função retorna a soma de a + b
}

int main(int argc, char const *argv[])
{
    int resultado = somar(5, 5); // criando uma variável e chamando a função soma - passando os dois parâmetros( 5, 5) --> ou seja, dois números inteiros 
    printf("Resultado = %d\n", resultado); // imprimindo o valor da variável 'resultado'
    return 0;
}



