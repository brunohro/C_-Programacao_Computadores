// Variável local com static mantém seu valor entre chamadas, mas ainda tem escopo local.

void contar()
{
    static int x = 0;
    x++;
    printf("%d\n", x);
}

int main()
{
    contar(); // 1
    contar(); // 2
    contar(); // 3
    contar(); // 4
}