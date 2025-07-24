// Variáveis passadas como parâmetros têm escopo local à função.

//     Elas são cópias dos argumentos recebidos.

void soma(int a, int b)
{
    int resultado = a + b; // escopo local
    printf("%d\n", resultado);
}