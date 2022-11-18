// InsertionSort Crescente.

#include <stdio.h>

int main(void)
{
    int n, res, i, aux, j;
    printf("Informe quantos valores para a sequencia de fibbo?");
    scanf("%d", &n);
    int v[n];
    int maxSize = n;
    while (n >= 1)
    {
        res = fibo(n);
        // printf("%d - ", res);
        v[n - 1] = res;
        n--;
    }

    // int maxSize = (sizeof v / sizeof v[0]) - 1;

    // printf("%d", maxSize);

    /* for (i = 0; i < maxSize; i++)
     {
         if (v[i] > v[i + 1])
         {
             aux = v[i];
             v[i] = v[i + 1];
             v[i + 1] = aux;
         }
         j = i + 1;

         while (j > 0)
         {
             if (v[j] < v[j - 1])
             {
                 aux = v[j];
                 v[j] = v[j - 1];
                 v[j - 1] = aux;
             }
             j--;
         }
     }*/

    // teste
    //  Tirar Duvida com o professor sobre o valor da posição zero do vetor.
    for (i = 0; i < maxSize; i++)
    {
        printf("%d ", v[i]);
    }
}

int fibo(n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}