#include <stdio.h>

struct Notas
{
    float nota1;
    float nota2;
};

int main(void){
    float numero = 2.5;
    float * ptr; // ponteiro armazena um endereço e guarda um endereço 

    ptr = &numero; // endereço da variavel numero em ptr 
    *ptr = numero; // retorna o conteudo do endereco que o ponteiro aponta ou armazena
    printf("\nconteudo de numero: %.2f", numero);
    printf("\nEndereco de numero: %x", &numero);
    printf("\nEndereco de ptr: %x", &ptr);
    printf("\nconteudo de ptr: %x", ptr);
    printf("\nconteudo de numero via ponteiro: %.2f", *ptr);

    *ptr = numero * 10; // troca o valor de numero via ponteiro 
    printf("\nconteudo de numero: %.2f", numero);
    printf("\nconteudo de numero via ponteiro: %.2f", *ptr);

    struct Notas notas_aluno;

    notas_aluno.nota1 = 8.7;
    notas_aluno.nota2 = 10.0;

    struct Notas * ptrNotas;
    ptrNotas = &notas_aluno;

    printf("\n * Nota 1 da struct: %.2f", notas_aluno.nota1);
    printf("\n * Nota 2 via ponteiro: %.2f", ptrNotas->nota2);
    printf("\n * nota 1 via ponteiro: %.2f", (*ptrNotas).nota1);
    
    return 0;
}
