// InsertionSort Decrescente.

#include <stdio.h>

int main(void)
{

    long v[] = {59, 26, 41, 100, 89, 2};
    long aux, j, i, maxSize;

    maxSize = (sizeof v / sizeof v[0]) - 1;
    // printf("%d", maxSize);

    for (i = 0; i < maxSize; i++)
    {
        aux = 0;
        if (v[i + 1] > v[i])
        {
            aux = v[i + 1];
            v[i + 1] = v[i];
            v[i] = aux;
        }
        j = i + 1;

        while (j > 0)
        {
            aux = 0;
            if (v[j - 1] < v[j])
            {
                aux = v[j - 1];
                v[j - 1] = v[j];
                v[j] = aux;
            }
            j--;
        }
    }

    // Tirar Duvida com o professor sobre o valor da posição zero do vetor.
    for (i = 0; i <= maxSize; i++)
    {
        // printf("%d:", i);
        printf("%d ", v[i]);
    }
}