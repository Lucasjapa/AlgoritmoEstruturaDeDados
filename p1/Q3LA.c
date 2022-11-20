#include <stdio.h>

int main(void)
{

    // ========= VETORES PARA TESTE ============
    // int v[] = {59, 26, 41, 100, 89, 2};
    // int v[] = {31, 41, 59, 26, 41, 58};
    // int v[] = {31, 41, 31, 31, 41, 58};
    // int v[] = {41, 31, 31, 41, 58};
    // int v[] = {31, 41, 59, 26, 41, 58, 9};
    // int v[] = {59, 41, 26, 4, 19};
    int v[] = {41, 31, 31, 41, 31, 31, 58, 41, 41, 41, 100, 3, 25, 89, 94, 77, 77, 77, 77, 405, 130};

    int i, maxSize;

    maxSize = (sizeof v / sizeof v[0]) - 1;

    ordenarVetor(v, maxSize);
    encontrarMediana(v, maxSize);
    encontrarModa(v, maxSize);
}

void ordenarVetor(int vetor[], int maxSize)
{
    int i, j, aux;

    for (i = 0; i < maxSize; i++)
    {
        if (vetor[i] > vetor[i + 1])
        {
            aux = vetor[i];
            vetor[i] = vetor[i + 1];
            vetor[i + 1] = aux;
        }
        j = i + 1;

        while (j > 0)
        {
            if (vetor[j] < vetor[j - 1])
            {
                aux = vetor[j];
                vetor[j] = vetor[j - 1];
                vetor[j - 1] = aux;
            }
            j--;
        }
    }

    for (i = 0; i <= maxSize; i++)
    {
        printf("%d ", vetor[i]);
    }
}

void encontrarMediana(int vetor[], int maxSize)
{

    int size, m1, m2, mediana;
    size = maxSize + 1;

    if (size % 2 == 0)
    {
        m1 = vetor[(size / 2) - 1];
        m2 = vetor[(size / 2)];
        mediana = (m1 + m2) / 2;
    }
    else
    {
        mediana = vetor[maxSize / 2];
    }

    printf("\nMediana: %d", mediana);
}

int encontrarModa(int vetor[], int maxSize)
{
    int i, j, moda, contRepeat, maxRepeat;

    contRepeat = 0;
    maxRepeat = 0;

    for (i = 0; i <= maxSize; i++)
    {
        j = i;
        contRepeat = 0;
        while (j < maxSize)
        {
            if (vetor[i] == vetor[j + 1])
            {
                contRepeat++;
            }
            else
            {
                contRepeat = 0;
            }

            if (contRepeat == maxRepeat)
            {
                moda = 0;
            }

            if (contRepeat > maxRepeat)
            {
                moda = vetor[i];
                maxRepeat = contRepeat;
            }
            j++;
        }
    }

    if (moda != 0)
    {
        printf("\nModa: %d", moda);
    }
    else
    {
        printf("\nEsse vetor nao tem moda");
    }
}