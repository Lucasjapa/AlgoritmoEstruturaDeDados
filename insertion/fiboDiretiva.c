// InsertionSort Crescente.

#include <stdio.h>

int main(void)
{
    int n, res, primeiro, segundo, i;
    printf("Informe quantos valores para a sequencia de fibbo?");
    scanf("%d", &n);
    int v[n];
    primeiro = 1;
    segundo = 1;
    i = 2;

    v[0] = primeiro;
    v[1] = segundo;

    while (i <= (n - 1))
    {
        res = primeiro + segundo;
        v[i] = res;
        primeiro = segundo;
        segundo = res;
        i++;
    }

    // Tirar Duvida com o professor sobre o valor da posição zero do vetor.
    for (i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }

    // printf("%d", res);
}
