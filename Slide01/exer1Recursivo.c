#include <stdio.h>

int fatorialRec(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }

    return n * fatorialRec(n - 1);
}

int main(void)
{

    // Fatorial

    int i, n, res;

    printf("Informe o valor do fatorial:");
    scanf("%d", &n);

    i = n;
    res = 1;

    while (i > 0)
    {
        res *= i;
        i--;
    }

    printf("O fatorial de %d e %d\n", n, res);

    printf("(Recursivo)O fatorial de %d e %d", n, fatorialRec(n));
}
