#include <stdio.h>
// Criar um programa que receba nome e idade e imprima de volta
int main(void){
    char nome[50];
    int idade;
    printf("Digite seu nome: \n");
    scanf("%s", &nome);
    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("Seu nome é %s e sua idade é %d", nome, idade);
    return 0;
}