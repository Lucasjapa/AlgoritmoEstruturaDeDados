#include <stdio.h>

int main(void)
{

    // Vetor A vai de 0...5
    int i, soma, A[6];

    // Letra a.
    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;

    // Letra b.
    soma = A[0] + A[1] + A[5];

    printf("Soma = %d\n", soma);

    // Letra c.
    A[4] = 100;

    // Letra d.
    for (i = 0; i < 6; i++)
    {
        printf("O valor de A[%d] = %d\n", i, A[i]);
    }
}