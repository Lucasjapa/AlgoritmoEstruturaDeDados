#include <stdio.h>

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

    printf("O fatorial de %d e %d", n, res);
}