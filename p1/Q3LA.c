#include <stdio.h>

int main(void)
{

    // int v[] = {59, 26, 41, 100, 89, 2};
    // int v[] = {31, 41, 59, 26, 41, 58};
    int v[] = {31, 41, 31, 31, 41, 58};
    // int v[] = {41, 31, 31, 41, 58};
    //  int v[] = {31, 41, 59, 26, 41, 58, 9};
    //  int v[] = {59, 41, 26, 4 , 19};
    int mediana, aux, j, i, maxSize, m1, m2, rep, max, moda;

    maxSize = (sizeof v / sizeof v[0]) - 1;
    // printf("%d \n", maxSize);

    for (i = 0; i < maxSize; i++)
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

    int size = maxSize + 1;

    if (size % 2 == 0)
    {
        m1 = v[(size / 2) - 1];
        m2 = v[(size / 2)];
        mediana = (m1 + m2) / 2;
    }
    else
    {
        mediana = v[maxSize / 2];
    }

    rep = 0;
    max = 0;

    for (i = 0; i <= maxSize; i++)
    {
        j = i;
        while (j < maxSize)
        {

            if (v[i] == v[j + 1])
            {
                rep++;
            }
            if (rep > max)
            {
                moda = v[i];
                max = rep;
                rep = 0;
            }
            j++;
        }
        printf("%d ", v[i]);
    }

    printf("\nMediana: %d", mediana);
    if (rep != max)
    {
        printf("\nModa: %d", moda);
    }
    else
    {
        printf("\nEsse vetor nao tem moda");
    }
}