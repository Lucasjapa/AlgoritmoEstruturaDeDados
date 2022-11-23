#include <stdio.h>

int main(void)
{

    int i, totalPares;
    double valores[10];
    totalPares = 0;

    printf("Informe 10 numeros:\n");

    for (i = 0; i < 10; i++)
    {
        printf("Valor %d: ", i);
        scanf("%lf", &valores[i]);

        if (((int)valores[i] % 2) == 0)
        {
            valores[totalPares] = valores[i];
            totalPares++;
        }
    }

    if (totalPares > 0)
    {
        printf("A lista possui %d numeros pares.", totalPares);
    }
    else
    {
        printf("A lista nao possui numeros pares.");
    }
}