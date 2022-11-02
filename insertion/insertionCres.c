#include <stdio.h>

int main(void)
{
    int v[] = {31, 41, 59, 26, 41, 58};
    // int v[] = {59, 41, 26};
    int aux, j, i, maxSize;

    maxSize = sizeof v / sizeof v[0];
    // printf("%d", maxSize);

    for (i = 0; i <= maxSize - 1; i++)
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
    }

    // Tirar Duvida com o professor sobre o valor da posição zero do vetor.
    for (i = 1; i <= maxSize; i++)
    {
        printf("%d ", v[i]);
    }
}